//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationZoomDownAppToHome.h"

@class SBIconAnimator, SBLockScreenViewController, SBLockToAppStatusBarAnimator;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome
{
    SBLockScreenViewController *_lockScreenViewController;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconAnimator *_iconAnimator;
}

- (_Bool)_shouldTakeActivationAssertionForDeactivatingApp;
- (void)animateZoomWithCompletion:(CDUnknownBlockType)arg1;
- (void)cleanupZoom;
- (void)prepareZoom;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

@end

