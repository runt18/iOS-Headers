//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubblePathAnimator.h>

@interface GKFloatInAnimator : GKBubblePathAnimator
{
    BOOL _useWelcomeSpringValues;
    int _focusBubbleType;
    float _delayIncrement;
    float _additionalDelay;
}

@property(nonatomic) float additionalDelay; // @synthesize additionalDelay=_additionalDelay;
@property(nonatomic) BOOL useWelcomeSpringValues; // @synthesize useWelcomeSpringValues=_useWelcomeSpringValues;
@property(nonatomic) float delayIncrement; // @synthesize delayIncrement=_delayIncrement;
@property(nonatomic) int focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
- (id)floatBubblesSortedLeftToRightInContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (int)animatorType;
- (id)init;

@end
