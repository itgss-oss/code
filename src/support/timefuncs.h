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
 */

#ifndef LANGUAGE_TIMEFUNCS_H
#define LANGUAGE_TIMEFUNCS_H

#ifdef __cplusplus
extern "C" {
#endif

struct language_timeval {
    int64_t sec;    /* seconds */
    int64_t usec;   /* microseconds */
};

LANGUAGE_DLLEXPORT int language_gettimeofday(struct language_timeval *jtv);
LANGUAGE_DLLEXPORT double language_clock_now(void);
void sleep_ms(int ms);

#ifdef __cplusplus
}
#endif

#endif
