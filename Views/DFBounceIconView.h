//-------------------------------------------------------------------------------------------------
// Copyright (c) 2008 DaisyDisk Team: <http://www.daisydiskapp.com>
// Some rights reserved: <http://opensource.org/licenses/mit-license.php>
//-------------------------------------------------------------------------------------------------

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

//-------------------------------------------------------------------------------------------------
// A custom view that displays a bouncing icon to visually attract user's attention to an input error
// Core Animation-hosting view 
// NOTE: The view needs to be slightly larger than its icon, to allow room for bouncing
//-------------------------------------------------------------------------------------------------
@interface DFBounceIconView : NSView 
//-------------------------------------------------------------------------------------------------
{
	CALayer* _rootLayer;
	CALayer* _iconLayer;
	BOOL _isShowing;
	NSImage* _icon;
}

//-------------------------------------------------------------------------------------------------
// Sets the icon
- (void)setIcon:(NSImage*)icon;

//-------------------------------------------------------------------------------------------------
// Shows/hides without animation
- (void)show;
- (void)hide;

//-------------------------------------------------------------------------------------------------
// Shows hides with fade in/out animation
- (void)fadeIn;
- (void)fadeOut;

//-------------------------------------------------------------------------------------------------
// Currently showing flag
- (BOOL)isShowing;

//-------------------------------------------------------------------------------------------------
// Bounces the icon
- (void)bounce;

@end
