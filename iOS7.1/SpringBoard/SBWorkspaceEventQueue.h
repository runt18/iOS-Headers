//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableArray, SBWorkspaceEvent;

@interface SBWorkspaceEventQueue : NSObject
{
    NSHashTable *_eventQueueLocks;
    NSMutableArray *_eventQueue;
    SBWorkspaceEvent *_executingEvent;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBWorkspaceEvent *executingEvent; // @synthesize executingEvent=_executingEvent;
- (void)_removeEventQueueLock:(id)arg1;
- (void)_addEventQueueLock:(id)arg1;
- (void)_processNextEvent;
- (_Bool)hasEventWithName:(id)arg1;
- (_Bool)hasEventWithPrefix:(id)arg1;
- (void)cancelEventsWithName:(id)arg1;
- (_Bool)isLocked;
- (void)executeOrPrependEvents:(id)arg1;
- (void)executeOrPrependEvent:(id)arg1;
- (void)executeOrAppendEvent:(id)arg1;
- (void)_executeOrPendEvents:(id)arg1 position:(int)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end
