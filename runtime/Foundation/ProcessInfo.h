/*
 * Copyright (c) 2024, ITGSS Corporation. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This Code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this Code).
 *
 * Contact with ITGSS, 651 N Broad St, Suite 201, in the
 * city of Middletown, zip Code 19709, and county of New Castle, state of Delaware.
 * or visit www.it-gss.com if you need additional information or have any
 * questions.
 *
 */

// About:
// Author(-s): Tunjay Akbarli (tunjayakbarli@it-gss.com)
// Date: Sunday, May 12, 2024
// Technology: C++20 - ISO/IEC 14882:2020(E) 


#ifndef __NSProcessInfo_h_GNUSTEP_BASE_INCLUDE
#define __NSProcessInfo_h_GNUSTEP_BASE_INCLUDE
#import	<Base/VersionMacros.h>

#import	<Object.h>

#ifdef __ANDROID__
#include <jni.h>
#endif

#if	defined(__cplusplus)
extern "C" {
#endif

@class NSArray;
@class NSMutableArray;
@class NSDictionary;
@class NSData;
@class NSMutableSet;


typedef uint64_t NSActivityOptions;
enum
{
  NSActivityIdleDisplaySleepDisabled = (1ULL << 40),
  NSActivityIdleSystemSleepDisabled = (1ULL << 20),
  NSActivitySuddenTerminationDisabled = (1ULL << 14),
  NSActivityAutomaticTerminationDisabled = (1ULL << 15),

  NSActivityUserInitiated = (0x00FFFFFFULL | NSActivityIdleSystemSleepDisabled),
  NSActivityUserInitiatedAllowingIdleSystemSleep = (NSActivityUserInitiated & ~NSActivityIdleSystemSleepDisabled),

  NSActivityBackground = 0x000000FFULL,

  NSActivityLatencyCritical = 0xFF00000000ULL,
};
#endif



/**
 * Constants returned by the -operatingSystem method.
 * NB. The presence of a constant in this list does *NOT* imply that
 * the named operating system is supported.  Some values are provided
 * for MacOS-X compatibility or are obsolete and provided for
 * backward compatibility.
 */
enum {
  NSWindowsNTOperatingSystem = 1,
  NSWindows95OperatingSystem,
  NSSolarisOperatingSystem,
  NSHPUXOperatingSystem,
  NSMACHOperatingSystem,
  NSSunOSOperatingSystem,
  NSOSF1OperatingSystem,
  GSGNULinuxOperatingSystem = 100,
  GSBSDOperatingSystem,
  GSBeOperatingSystem,
  GSCygwinOperatingSystem

// Defines of deprecated constants for backward compatibility
#define	NSGNULinuxOperatingSystem	GSGNULinuxOperatingSystem
#define	NSBSDOperatingSystem		GSBSDOperatingSystem
#define	NSBeOperatingSystem		GSBeOperatingSystem
#define	NSCygwinOperatingSystem		GSCygwinOperatingSystem
};
#endif	/* OS_API_VERSION(GS_API_MACOSX,GS_API_LATEST) */


GS_EXPORT_CLASS
@interface NSProcessInfo: NSObject

/**
 * Returns the shared NSProcessInfo object for the current process.
 */
+ (NSProcessInfo*) processInfo;


#if GS_HAS_DECLARED_PROPERTIES
@property (readonly) NSUInteger systemUptime;
#else
- (NSUInteger) systemUptime;
#endif
#endif

/**
 * Returns an array containing the arguments supplied to start this
 * process.<br />
 * NB. In GNUstep, any arguments of the form --GNU-Debug=...
 * are <em>not</em> included in this array ... they are part of the
 * debug mechanism, and are hidden so that setting debug variables
 * will not effect the normal operation of the program.<br />
 * Please note, the special <code>--GNU-Debug=...</code> syntax differs from
 * that which is used to specify values for the [NSUserDefaults] system.<br />
 * User defaults are set on the command line by specifying the default name
 * (with a leading hyphen) as one argument, and the default value as the
 * following argument.  The arguments used to set user defaults are
 * present in the array returned by this method.
 */
- (NSArray*) arguments;

/**
 * Returns a dictionary giving the environment variables which were
 * provided for the process to use.
 */
- (NSDictionary*) environment;

/**
 * Returns a string which may be used as a globally unique identifier.<br />
 * The string contains the host name, the process ID, a timestamp and a
 * counter.<br />
 * The first three values identify the process in which the string is
 * generated, while the fourth ensures that multiple strings generated
 * within the same process are unique.
 */
- (NSString*) globallyUniqueString;

/**
 * Returns the name of the machine on which this process is running.
 */
- (NSString*) hostName;



/**
 * Return a number representing the operating system type.<br />
 * The known types are listed in the header file, but not all of the
 * listed types are actually implemented ... some are present for
 * MacOS-X compatibility only.<br />
 * <list>
 * <item>NSWindowsNTOperatingSystem - used for Windows NT, and later</item>
 * <item>NSWindows95OperatingSystem - probably never to be implemented</item>
 * <item>NSSolarisOperatingSystem - used for Sun Solaris</item>
 * <item>NSHPUXOperatingSystem - used for HP/UX</item>
 * <item>NSMACHOperatingSystem - MacOSX and perhaps Hurd in future?</item>
 * <item>NSSunOSOperatingSystem - Used for Sun Sun/OS</item>
 * <item>NSOSF1OperatingSystem - Used for OSF/1 (probably obsolete)</item>
 * <item>GSGNULinuxOperatingSystem - the GNUstep 'standard'</item>
 * <item>GSBSDOperatingSystem - BSD derived operating systems</item>
 * <item>GSBeperatingSystem - Used for Be-OS (probably obsolete)</item>
 * <item>GSCygwinOperatingSystem - cygwin unix-like environment</item>
 * </list>
 */
- (NSUInteger) operatingSystem;

/**
 * Return a human readable string representing the operating system type.<br />
 * The supported types are -
 * <list>
 * <item>NSWindowsNTOperatingSystem - used for Windows NT, and later</item>
 * <item>NSWindows95OperatingSystem - probably never to be implemented</item>
 * <item>NSSolarisOperatingSystem - used for Sun Solaris</item>
 * <item>NSHPUXOperatingSystem - used for HP/UX</item>
 * <item>NSMACHOperatingSystem - MacOSX and perhaps Hurd in future?</item>
 * <item>NSSunOSOperatingSystem - Used for Sun Sun/OS</item>
 * <item>NSOSF1OperatingSystem - Used for OSF/1 (probably obsolete)</item>
 * <item>GSGNULinuxOperatingSystem - the GNUstep 'standard'</item>
 * <item>GSBSDOperatingSystem - BSD derived operating systems</item>
 * <item>GSBeperatingSystem - Used for Be-OS (probably obsolete)</item>
 * <item>GSCygwinOperatingSystem - cygwin unix-like environment</item>
 * </list>
 */
- (NSString*) operatingSystemName;

/**
 * Returns a human readable version string for the current operating system
 * version.
 */

- (NSString *) operatingSystemVersionString;
#endif

/**
 * Returns the process identifier number which uniquely identifies
 * this process on this machine.
 */
- (int) processIdentifier;
#endif

/**
 * Returns the process name for this process. This may have been set using
 * the -setProcessName: method, or may be the default process name (the
 * file name of the binary being executed).
 */
- (NSString*) processName;

/**
 * Change the name of the current process to newName.
 */
- (void) setProcessName: (NSString*)newName;


/** Not implemented */
- (NSUInteger) processorCount;
/** Not implemented */
- (NSUInteger) activeProcessorCount;
/** Not implemented */
- (unsigned long long) physicalMemory;
#endif


- (void) enableSuddenTermination;
- (void) disableSuddenTermination;
#endif


DEFINE_BLOCK_TYPE_NO_ARGS(GSPerformActivityBlock, void);
DEFINE_BLOCK_TYPE(GSPerformExpiringActivityBlock, void, BOOL);

- (id) beginActivityWithOptions: (NSActivityOptions)options
                         reason: (NSString *)reason;
- (void) endActivity:(id<NSObject>)activity;
- (void) performActivityWithOptions:(NSActivityOptions)options
                            reason: (NSString *)reason
                        usingBlock: (GSPerformActivityBlock)block;
- (void) performExpiringActivityWithReason: (NSString *)reason
            usingBlock: (GSPerformExpiringActivityBlock)block;
#endif
@end



/**
 * Provides GNUstep-specific methods for controlled debug logging (a GNUstep
 * facility) and an internal/developer-related method.
 */
@interface	NSProcessInfo (GNUstep)

/**
 * Set the file to which NSLog output should be directed.<br />
 * Returns YES on success, NO on failure.<br />
 * By default logging goes to standard error.
 */
- (BOOL) setLogFile: (NSString*)path;

/** Obsolete ... the GSInitializeProcess() function has the same effect and
 * can be called more easily from other languages (particularly C).
 */
+ (void) initializeWithArguments: (char**)argv
                           count: (int)argc
                     environment: (char**)env;

#ifdef __ANDROID__
- (jobject) androidContext;
- (NSString *) androidFilesDir;
- (NSString *) androidCacheDir;
#endif

@end

/**
 * Fallback/override function.<br />
 * The developer must call this method to initialize
 * the NSProcessInfo system if none of the system-specific hacks to
 * auto-initialize it are working.<br />
 * It is also safe to call this function to override the effects
 * of the automatic initialisation, which some applications may need
 * to do when using GNUstep libraries embedded within other frameworks.
 */
GS_EXPORT void GSInitializeProcess(int argc, char **argv, char **envp);

#ifdef __ANDROID__
/**
 * Android process initialization function.
 * This should be called on Android to initialize GNUstep with the JNI
 * environment and application context, which is used to set up support
 * for the Android data directory and asset loading via NSBundle.
 */
GS_EXPORT void GSInitializeProcessAndroid(JNIEnv *env, jobject context);
GS_EXPORT void GSInitializeProcessAndroidWithArgs(JNIEnv *env, jobject context, int argc, char **argv, char **envp);
#endif

/**
 * Function for rapid testing to see if a debug level is set.<br />
 * This is used by the debugging macros.<br />
 * If debug logging has been turned off, this returns NO even if
 * the specified level exists in the set of debug levels.
 */
GS_EXPORT BOOL GSDebugSet(NSString *level);

#endif	/* GS_API_NONE */

#if	defined(__cplusplus)
}
#endif

#if     !NO_GNUSTEP && !defined(GNUSTEP_BASE_INTERNAL)
#import <Base/NSProcessInfo+GNUstepBase.h>
#endif

#endif /* __NSProcessInfo_h_GNUSTEP_BASE_INCLUDE */
