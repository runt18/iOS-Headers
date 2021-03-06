//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject
{
    NSTimer *_timer;
    BOOL _animateUnhighlight;
    BOOL _valid;
    UITableViewCell *_cell;
    int _originalSelectionStyle;
}

+ (id)contextWithCell:(id)arg1;
@property(readonly, nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) int originalSelectionStyle; // @synthesize originalSelectionStyle=_originalSelectionStyle;
@property(readonly, nonatomic) BOOL animateUnhighlight; // @synthesize animateUnhighlight=_animateUnhighlight;
@property(nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
- (void)_killTimer;
- (void)invalidate;
- (void)_timerFired;
- (void)performHighlightForDuration:(double)arg1 animateUnhighlight:(BOOL)arg2;
- (void)dealloc;

@end

