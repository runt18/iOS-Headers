//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (NSKeyValueObservingPrivate)
+ (BOOL)_shouldAddObservationForwardersForKey:(id)arg1;
- (id)_implicitObservationInfo;
- (void)_changeValueForKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_didChangeValuesForKeys:(id)arg1;
- (void)_willChangeValuesForKeys:(id)arg1;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
@end

