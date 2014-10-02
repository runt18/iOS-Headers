//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSDBezierNode : NSObject
{
    struct CGPoint mIn;
    struct CGPoint mNode;
    struct CGPoint mOut;
    int mReflectedState;
    BOOL mSelected;
    int mType;
}

+ (id)bezierNodeWithPoint:(struct CGPoint)arg1 inControlPoint:(struct CGPoint)arg2 outControlPoint:(struct CGPoint)arg3;
+ (id)bezierNodeWithPoint:(struct CGPoint)arg1;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=mSelected;
@property(nonatomic) int type; // @synthesize type=mType;
@property(nonatomic) int reflectedState; // @synthesize reflectedState=mReflectedState;
@property(nonatomic) struct CGPoint outControlPoint; // @synthesize outControlPoint=mOut;
@property(nonatomic) struct CGPoint inControlPoint; // @synthesize inControlPoint=mIn;
@property(nonatomic) struct CGPoint nodePoint; // @synthesize nodePoint=mNode;
- (id)description;
- (id)typeString;
- (id)reflectedStateString;
- (BOOL)underPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(float)arg3 returningType:(int *)arg4;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)swapControlPoints;
- (void)updateReflectedState;
@property(readonly, nonatomic) BOOL isCollapsed;
- (void)collapse;
- (void)setInControlPointFromReflection:(struct CGPoint)arg1 constrain:(BOOL)arg2;
- (void)setOutControlPoint:(struct CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3;
- (void)setInControlPoint:(struct CGPoint)arg1 reflect:(int)arg2 constrain:(BOOL)arg3;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)setNode:(struct CGPoint)arg1;
- (void)balanceControlPoints;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
