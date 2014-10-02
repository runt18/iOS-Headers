//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TPSlidingButtonDelegateProtocol.h"

@class NSArray, NSMutableArray, TPSlidingButton, UIButton;

@interface TPSuperBottomBar : UIView <TPSlidingButtonDelegateProtocol>
{
    BOOL _declineAndRemindIsAvailable;
    BOOL _declineAndMessageIsAvailable;
    BOOL _enabled;
    BOOL _blursBackground;
    BOOL _usesLowerButtons;
    id <TPSuperBottomBarDelegateProtocol> _delegate;
    int _currentState;
    int _orientation;
    float _bottomMargin;
    NSArray *_buttonLayoutConstraints;
    NSArray *_horizontalConstraintsForSupplementalButtons;
    UIButton *_supplementalTopLeftButton;
    UIButton *_supplementalTopRightButton;
    UIButton *_mainLeftButton;
    UIButton *_mainRightButton;
    UIButton *_sideButtonLeft;
    UIButton *_sideButtonRight;
    UIButton *_supplementalBottomRightButton;
    UIButton *_supplementalBottomLeftButton;
    TPSlidingButton *_slidingButton;
    NSMutableArray *_hijackedGestureRecognizers;
    NSMutableArray *_stateStack;
}

+ (float)defaultBottomMargin;
+ (float)defaultWidth;
+ (float)defaultInterButtonSpacing;
+ (float)defaultSideMarginForDoubleButton;
+ (float)defaultSideMarginForSingleButton;
@property(retain) NSMutableArray *stateStack; // @synthesize stateStack=_stateStack;
@property(retain, nonatomic) NSMutableArray *hijackedGestureRecognizers; // @synthesize hijackedGestureRecognizers=_hijackedGestureRecognizers;
@property(retain, nonatomic) TPSlidingButton *slidingButton; // @synthesize slidingButton=_slidingButton;
@property(retain, nonatomic) UIButton *supplementalBottomLeftButton; // @synthesize supplementalBottomLeftButton=_supplementalBottomLeftButton;
@property(retain, nonatomic) UIButton *supplementalBottomRightButton; // @synthesize supplementalBottomRightButton=_supplementalBottomRightButton;
@property(retain, nonatomic) UIButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;
@property(retain, nonatomic) UIButton *sideButtonLeft; // @synthesize sideButtonLeft=_sideButtonLeft;
@property(retain, nonatomic) UIButton *mainRightButton; // @synthesize mainRightButton=_mainRightButton;
@property(retain, nonatomic) UIButton *mainLeftButton; // @synthesize mainLeftButton=_mainLeftButton;
@property(retain, nonatomic) UIButton *supplementalTopRightButton; // @synthesize supplementalTopRightButton=_supplementalTopRightButton;
@property(retain, nonatomic) UIButton *supplementalTopLeftButton; // @synthesize supplementalTopLeftButton=_supplementalTopLeftButton;
@property(retain) NSArray *horizontalConstraintsForSupplementalButtons; // @synthesize horizontalConstraintsForSupplementalButtons=_horizontalConstraintsForSupplementalButtons;
@property(retain) NSArray *buttonLayoutConstraints; // @synthesize buttonLayoutConstraints=_buttonLayoutConstraints;
@property(nonatomic) float bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(nonatomic) BOOL usesLowerButtons; // @synthesize usesLowerButtons=_usesLowerButtons;
@property(nonatomic) BOOL blursBackground; // @synthesize blursBackground=_blursBackground;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL declineAndMessageIsAvailable; // @synthesize declineAndMessageIsAvailable=_declineAndMessageIsAvailable;
@property(nonatomic) BOOL declineAndRemindIsAvailable; // @synthesize declineAndRemindIsAvailable=_declineAndRemindIsAvailable;
@property id <TPSuperBottomBarDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)animateFromIncomingCallStateToFaceTimeInCallState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)animateFromIncomingCallStateToInCallStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateOutSupplementalBottomLeftButtonWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateOutSupplementalBottomRightButtonWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateInSupplementalBottomRightButton:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)animateOutLeftAndRightMainButtonsAndAddNewMainButton:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateOutMainButtonAndAddNewLeftButton:(id)arg1 newSupplementalBottomRightButton:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateOutMainButtonAndAddNewLeftButton:(id)arg1 newRightButton:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateFromOutgoingStateToInCallStateWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)animateFromState:(int)arg1 toState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareButtonsForAnimationEnd;
- (void)prepareButtonsForAnimationBegin;
- (void)refreshCustomizedActionTypeTitleForButton:(id)arg1;
- (void)refreshCustomizedActionTypeTitles;
- (id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2;
- (id)controlForActionType:(int)arg1;
- (struct CGRect)frameForControlWithActionType:(int)arg1;
- (id)viewLabels;
- (void)slidingButton:(id)arg1 didSlideToProportion:(float)arg2;
- (void)slidingButtonDidFinishSlide;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)shrinkButtonFontSizesIfNecessary;
- (void)removeAllButtons;
- (void)addSubview:(id)arg1;
- (id)makeSlidingButtonWithType:(int)arg1;
- (id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 font:(id)arg5 fontColor:(id)arg6;
- (id)_horizontalConstraintsForSupplementalButtonsUsingLabels:(id)arg1;
- (void)_updateHorizontalConstraintsForSupplementalButtons;
- (id)constraintsForState:(int)arg1;
- (void)setCurrentState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)setAction:(int)arg1 enabled:(BOOL)arg2;
- (void)setAction:(int)arg1 selected:(BOOL)arg2;
- (void)resetPoppedStates;
- (BOOL)popStateAnimated:(BOOL)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (void)pushState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) struct CGSize effectiveSize;
- (struct CGSize)intrinsicContentSize;
- (void)_clearHijackedGestureRecognizers;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
