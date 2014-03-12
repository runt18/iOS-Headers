/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSDImageProvider;

// Not exported
@interface TSDImageRepSizingState : NSObject
{
    struct CGSize mDesiredSize;
    TSDImageProvider *mProvider;
    struct CGPath *mMaskPath;
    _Bool mIncludesAdjustments;
    int mStatus;
    struct CGImage *mSizedImage;
    long long mSizedImageOrientation;
}

@property(nonatomic) _Bool sizedImageIncludesAdjustments; // @synthesize sizedImageIncludesAdjustments=mIncludesAdjustments;
@property(readonly, nonatomic) struct CGPath *maskPath; // @synthesize maskPath=mMaskPath;
@property(nonatomic) long long sizedImageOrientation; // @synthesize sizedImageOrientation=mSizedImageOrientation;
@property(nonatomic) struct CGImage *sizedImage; // @synthesize sizedImage=mSizedImage;
@property(nonatomic) int status; // @synthesize status=mStatus;
@property(retain, nonatomic) TSDImageProvider *provider; // @synthesize provider=mProvider;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
- (void)generateSizedImage;
@property(readonly, nonatomic) _Bool sizedImageHasMask;
- (void)dealloc;
- (id)initWithDesiredSize:(struct CGSize)arg1 provider:(id)arg2 maskPath:(struct CGPath *)arg3;

@end
