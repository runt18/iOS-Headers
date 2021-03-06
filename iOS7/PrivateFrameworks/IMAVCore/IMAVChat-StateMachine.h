/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVChat.h>

@interface IMAVChat (StateMachine)
- (void)_entitlementsChanged:(id)arg1;
- (void)_airplaneModeChanged:(id)arg1;
- (void)systemWillShutdown;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidBecomeActive;
- (void)_resumeVideoState;
- (void)_resumeAudioState;
- (void)_saveVideoRestartState;
- (void)_saveAudioRestartState;
- (void)systemDidFastUserSwitchOut;
- (void)_postStateToDelegateIfNecessary;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_setActiveConference;
- (_Bool)isActive;
- (_Bool)isStateFinal;
@end

