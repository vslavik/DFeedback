//-------------------------------------------------------------------------------------------------
// Copyright (c) 2008 DaisyDisk Team: <http://www.daisydiskapp.com>
// Some rights reserved: <http://opensource.org/licenses/mit-license.php>
//-------------------------------------------------------------------------------------------------

#import <Cocoa/Cocoa.h>

//-------------------------------------------------------------------------------------------------
// Public constants
//-------------------------------------------------------------------------------------------------
typedef enum OSVersion : NSUInteger
{
    OSVersion_Unknown = 0,
    OSVersion_Leopard = 0x1050,
    OSVersion_SnowLeopard = 0x1060,
    OSVersion_Lion = 0x1070,
    OSVersion_MountainLion = 0x1080
} OSVersion;

//-------------------------------------------------------------------------------------------------
// OS version checker
//-------------------------------------------------------------------------------------------------
@interface OSVersionChecker : NSObject 
//-------------------------------------------------------------------------------------------------
// Gets OS version
+ (OSVersion)macOsVersion;

@end
