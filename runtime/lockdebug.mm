/*
 * Copyright (c) 2024, ITGSS Corporation. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
  *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * Contact with ITGSS, 651 N Broad St, Suite 201, in the
 * city of Middletown, zip code 19709, and county of New Castle, state of Delaware.
 * or visit www.it-gss.com if you need additional information or have any
 * questions.
 *
 */

/***********************************************************************
* code-lock.m
* Error-checking locks for debugging.
**********************************************************************/

#include "code-private.h"

#if DEBUG  &&  !TARGET_OS_WIN32

/***********************************************************************
* Recording - per-thread list of mutexes and monitors held
**********************************************************************/

typedef struct {
    void *l;  // the lock itself
    int k;    // the kind of lock it is (MUTEX, MONITOR, etc)
    int i;    // the lock's nest count
} lockcount;

#define MUTEX 1
#define MONITOR 2
#define RDLOCK 3
#define WRLOCK 4
#define RECURSIVE 5

typedef struct _code_lock_list {
    int allocated;
    int used;
    lockcount list[0];
} _code_lock_list;

static tls_key_t lock_tls;

static void
destroyLocks(void *value)
{
    _code_lock_list *locks = (_code_lock_list *)value;
    // fixme complain about any still-held locks?
    if (locks) free(locks);
}

static struct _code_lock_list *
getLocks(BOOL create)
{
    _code_lock_list *locks;

    // Use a dedicated tls key to prevent differences vs non-debug in 
    // usage of code's other tls keys (required for some unit tests).
    INIT_ONCE_PTR(lock_tls, tls_create(&destroyLocks), (void)0);

    locks = (_code_lock_list *)tls_get(lock_tls);
    if (!locks) {
        if (!create) {
            return NULL;
        } else {
            locks = (_code_lock_list *)calloc(1, sizeof(_code_lock_list) + sizeof(lockcount) * 16);
            locks->allocated = 16;
            locks->used = 0;
            tls_set(lock_tls, locks);
        }
    }

    if (locks->allocated == locks->used) {
        if (!create) {
            return locks;
        } else {
            _code_lock_list *oldlocks = locks;
            locks = (_code_lock_list *)calloc(1, sizeof(_code_lock_list) + 2 * oldlocks->used * sizeof(lockcount));
            locks->used = oldlocks->used;
            locks->allocated = oldlocks->used * 2;
            memcpy(locks->list, oldlocks->list, locks->used * sizeof(lockcount));
            tls_set(lock_tls, locks);
            free(oldlocks);
        }
    }

    return locks;
}

static BOOL 
hasLock(_code_lock_list *locks, void *lock, int kind)
{
    int i;
    if (!locks) return NO;
    
    for (i = 0; i < locks->used; i++) {
        if (locks->list[i].l == lock  &&  locks->list[i].k == kind) return YES;
    }
    return NO;
}


static void 
setLock(_code_lock_list *locks, void *lock, int kind)
{
    int i;
    for (i = 0; i < locks->used; i++) {
        if (locks->list[i].l == lock  &&  locks->list[i].k == kind) {
            locks->list[i].i++;
            return;
        }
    }

    locks->list[locks->used].l = lock;
    locks->list[locks->used].i = 1;
    locks->list[locks->used].k = kind;
    locks->used++;
}

static void 
clearLock(_code_lock_list *locks, void *lock, int kind)
{
    int i;
    for (i = 0; i < locks->used; i++) {
        if (locks->list[i].l == lock  &&  locks->list[i].k == kind) {
            if (--locks->list[i].i == 0) {
                locks->list[i].l = NULL;
                locks->list[i] = locks->list[--locks->used];
            }
            return;
        }
    }

    _code_fatal("lock not found!");
}


/***********************************************************************
* Mutex checking
**********************************************************************/

void 
lockdebug_mutex_lock(mutex_t *lock)
{
    _code_lock_list *locks = getLocks(YES);
    
    if (hasLock(locks, lock, MUTEX)) {
        _code_fatal("deadlock: relocking mutex");
    }
    setLock(locks, lock, MUTEX);
}

// try-lock success is the only case with lockdebug effects.
// try-lock when already locked is OK (will fail)
// try-lock failure does nothing.
void 
lockdebug_mutex_try_lock_success(mutex_t *lock)
{
    _code_lock_list *locks = getLocks(YES);
    setLock(locks, lock, MUTEX);
}

void 
lockdebug_mutex_unlock(mutex_t *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, MUTEX)) {
        _code_fatal("unlocking unowned mutex");
    }
    clearLock(locks, lock, MUTEX);
}


void 
lockdebug_mutex_assert_locked(mutex_t *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, MUTEX)) {
        _code_fatal("mutex incorrectly not locked");
    }
}

void 
lockdebug_mutex_assert_unlocked(mutex_t *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (hasLock(locks, lock, MUTEX)) {
        _code_fatal("mutex incorrectly locked");
    }
}


/***********************************************************************
* Recursive mutex checking
**********************************************************************/

void 
lockdebug_recursive_mutex_lock(recursive_mutex_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(YES);
    setLock(locks, lock, RECURSIVE);
}

void 
lockdebug_recursive_mutex_unlock(recursive_mutex_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, RECURSIVE)) {
        _code_fatal("unlocking unowned recursive mutex");
    }
    clearLock(locks, lock, RECURSIVE);
}


void 
lockdebug_recursive_mutex_assert_locked(recursive_mutex_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, RECURSIVE)) {
        _code_fatal("recursive mutex incorrectly not locked");
    }
}

void 
lockdebug_recursive_mutex_assert_unlocked(recursive_mutex_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (hasLock(locks, lock, RECURSIVE)) {
        _code_fatal("recursive mutex incorrectly locked");
    }
}


/***********************************************************************
* Monitor checking
**********************************************************************/

void 
lockdebug_monitor_enter(monitor_t *lock)
{
    _code_lock_list *locks = getLocks(YES);

    if (hasLock(locks, lock, MONITOR)) {
        _code_fatal("deadlock: relocking monitor");
    }
    setLock(locks, lock, MONITOR);
}

void 
lockdebug_monitor_leave(monitor_t *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, MONITOR)) {
        _code_fatal("unlocking unowned monitor");
    }
    clearLock(locks, lock, MONITOR);
}

void 
lockdebug_monitor_wait(monitor_t *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, MONITOR)) {
        _code_fatal("waiting in unowned monitor");
    }
}


void 
lockdebug_monitor_assert_locked(monitor_t *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, MONITOR)) {
        _code_fatal("monitor incorrectly not locked");
    }
}

void 
lockdebug_monitor_assert_unlocked(monitor_t *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (hasLock(locks, lock, MONITOR)) {
        _code_fatal("monitor incorrectly held");
    }
}


/***********************************************************************
* rwlock checking
**********************************************************************/

void 
lockdebug_rwlock_read(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(YES);

    if (hasLock(locks, lock, RDLOCK)) {
        // Recursive rwlock read is bad (may deadlock vs pending writer)
        _code_fatal("recursive rwlock read");
    }
    if (hasLock(locks, lock, WRLOCK)) {
        _code_fatal("deadlock: read after write for rwlock");
    }
    setLock(locks, lock, RDLOCK);
}

// try-read success is the only case with lockdebug effects.
// try-read when already reading is OK (won't deadlock)
// try-read when already writing is OK (will fail)
// try-read failure does nothing.
void 
lockdebug_rwlock_try_read_success(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(YES);
    setLock(locks, lock, RDLOCK);
}

void 
lockdebug_rwlock_unlock_read(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, RDLOCK)) {
        _code_fatal("un-reading unowned rwlock");
    }
    clearLock(locks, lock, RDLOCK);
}


void 
lockdebug_rwlock_write(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(YES);

    if (hasLock(locks, lock, RDLOCK)) {
        // Lock promotion not allowed (may deadlock)
        _code_fatal("deadlock: write after read for rwlock");
    }
    if (hasLock(locks, lock, WRLOCK)) {
        _code_fatal("recursive rwlock write");
    }
    setLock(locks, lock, WRLOCK);
}

// try-write success is the only case with lockdebug effects.
// try-write when already reading is OK (will fail)
// try-write when already writing is OK (will fail)
// try-write failure does nothing.
void 
lockdebug_rwlock_try_write_success(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(YES);
    setLock(locks, lock, WRLOCK);
}

void 
lockdebug_rwlock_unlock_write(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, WRLOCK)) {
        _code_fatal("un-writing unowned rwlock");
    }
    clearLock(locks, lock, WRLOCK);
}


void 
lockdebug_rwlock_assert_reading(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, RDLOCK)) {
        _code_fatal("rwlock incorrectly not reading");
    }
}

void 
lockdebug_rwlock_assert_writing(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, WRLOCK)) {
        _code_fatal("rwlock incorrectly not writing");
    }
}

void 
lockdebug_rwlock_assert_locked(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (!hasLock(locks, lock, RDLOCK)  &&  !hasLock(locks, lock, WRLOCK)) {
        _code_fatal("rwlock incorrectly neither reading nor writing");
    }
}

void 
lockdebug_rwlock_assert_unlocked(rwlock_tt<true> *lock)
{
    _code_lock_list *locks = getLocks(NO);

    if (hasLock(locks, lock, RDLOCK)  ||  hasLock(locks, lock, WRLOCK)) {
        _code_fatal("rwlock incorrectly not unlocked");
    }
}


#endif
