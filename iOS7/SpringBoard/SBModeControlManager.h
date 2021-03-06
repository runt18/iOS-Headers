/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface SBModeControlManager : NSObject
{
    NSArray *_views;
}

+ (id)_segmentedControlForUse:(long long)arg1 graphicsQuaility:(long long)arg2;
+ (void)_configureSegmentedControlForLabelUse:(id)arg1;
+ (void)_configureSegmentedControlForButtonUse:(id)arg1;
+ (void)_configureSegmentedControl:(id)arg1 forGraphicsQuaility:(long long)arg2;
@property(readonly, nonatomic) NSArray *views; // @synthesize views=_views;
- (void)setTintColor:(id)arg1 forUse:(long long)arg2;
- (void)removeAllSegments;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) long long selectedSegmentIndex;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (id)_segmentedControlForUse:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithGraphicsQuality:(long long)arg1;

@end

