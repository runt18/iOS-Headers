/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UICollectionViewCell.h>

@class TIKeyboardCandidate, UIKBThemedView, UILabel;

@interface UIKBHandwritingCandidateViewCell : UICollectionViewCell
{
    UIKBThemedView *_themedView;
    TIKeyboardCandidate *_candidate;
    UILabel *_label;
    CDStruct_961fb75c _visualStyling;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)font;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
- (void)setHighlighted:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)reloadData;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
