//-------------------------------------------------------------------------------------------------
// Copyright (c) 2008 DaisyDisk Team: <http://www.daisydiskapp.com>
// Some rights reserved: <http://opensource.org/licenses/mit-license.php>
//-------------------------------------------------------------------------------------------------

#import <Cocoa/Cocoa.h>

//-------------------------------------------------------------------------------------------------
// Application delegate
//-------------------------------------------------------------------------------------------------
@interface DemoAppDelegate : NSObject <NSApplicationDelegate> 
{
    NSWindow *window;
}

//-------------------------------------------------------------------------------------------------
// Outlets
//-------------------------------------------------------------------------------------------------
@property (assign) IBOutlet NSWindow *window;

//-------------------------------------------------------------------------------------------------
// Private actions (visible to IB)
//-------------------------------------------------------------------------------------------------
- (IBAction)sendGeneralQuestion:(id)sender;
- (IBAction)sendBugReport:(id)sender;
- (IBAction)sendFeatureRequest:(id)sender;
- (IBAction)testCrash:(id)sender;
- (IBAction)testCrashInThread:(id)sender;
@end
