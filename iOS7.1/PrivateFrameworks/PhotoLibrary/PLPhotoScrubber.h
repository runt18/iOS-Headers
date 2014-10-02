//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, NSTimer, UIImageView, UIView;

@interface PLPhotoScrubber : UIControl
{
    id <PLPhotoScrubberDataSource> _dataSource;
    unsigned int _displayedImageIndex;
    int _prospectiveImageIndex;
    double _timeOfLastTouch;
    double _lastUpdate;
    UIView *_thumbnailTrackView;
    struct CGRect _thumbnailBounds;
    float _imagesPerViewRatio;
    NSMutableArray *_thumbnailViews;
    UIImageView *_loupeView;
    int _loupeIndex;
    unsigned int _imageCount;
    BOOL _scrubbing;
    BOOL _deferImageLoading;
    BOOL _loadImagesSynchronously;
    id <PLPhotoScrubberSpeedDelegate> _speedDelegate;
    float __scrubbingSpeed;
    int __lastSpeedRegime;
    NSTimer *__timeoutTimer;
    double __lastTime;
}

@property(retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property(nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property(nonatomic, setter=_setLastSpeedRegime:) int _lastSpeedRegime; // @synthesize _lastSpeedRegime=__lastSpeedRegime;
@property(nonatomic, setter=_setScrubbingSpeed:) float _scrubbingSpeed; // @synthesize _scrubbingSpeed=__scrubbingSpeed;
@property(nonatomic) id <PLPhotoScrubberSpeedDelegate> speedDelegate; // @synthesize speedDelegate=_speedDelegate;
- (void)ppt_scrubToAbsoluteIndex:(int)arg1 immediately:(BOOL)arg2;
- (void)ppt_setIsScrubbing:(BOOL)arg1;
- (int)displayedImageIndex;
- (void)setDisplayedImageIndex:(int)arg1;
- (void)_setDisplayedImageIndex:(id)arg1;
- (void)_setDisplayedImageIndex:(int)arg1 immediately:(BOOL)arg2;
- (void)_setSpeedRegime:(int)arg1;
- (void)_handleTimeoutTimer:(id)arg1;
- (void)_rescheduleTimer;
- (void)_performSpeedUpdate;
- (void)setLoupeImage:(id)arg1;
- (void)reloadData;
- (void)reloadDataWithNewDisplayedIndex:(unsigned int)arg1;
- (void)setDataSource:(id)arg1 reloadData:(BOOL)arg2;
@property(nonatomic) id <PLPhotoScrubberDataSource> dataSource; // @dynamic dataSource;
- (void)_updateLoupe:(BOOL)arg1 force:(BOOL)arg2;
- (void)reloadImageAtIndex:(int)arg1;
- (void)setImage:(id)arg1 atIndex:(int)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)isFastScrubbing;
- (BOOL)isScrubbing;
- (void)_setIsScrubbing:(BOOL)arg1;
- (void)_updateLoupeWithTouch:(id)arg1 forceUpdate:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGPoint)_centerForImageAtIndex:(int)arg1;
- (unsigned int)_imageIndexFromLocation:(struct CGPoint)arg1;
- (unsigned int)_thumbnailIndexFromLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)setDeferImageLoading:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)init;

@end
