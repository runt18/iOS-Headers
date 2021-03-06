//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSPointerArray, PUPhotoDecoration, UIColor, UIImage, UIImageView;

@interface PUStackView : UIView
{
    struct CGAffineTransform _transforms[9];
    UIImageView *_combinedPhotoDecorationImageView;
    char _imageHidden[9];
    BOOL _needsDynamicLayout;
    BOOL _combinesPhotoDecorations;
    unsigned int _style;
    PUPhotoDecoration *_photoDecoration;
    UIColor *_gridBackgroundColor;
    float _gridBackgroundCornerRadius;
    float _gridMargin;
    float _gridItemSpacing;
    int _numberOfVisibleItems;
    UIImage *_emptyPlaceholderImage;
    int __numberOfViews;
    NSArray *__photoViews;
    NSPointerArray *__imageSizes;
    NSArray *__photoDecorationVariants;
    UIView *__backgroundView;
    struct CGSize _stackSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct CGPoint _stackPerspectiveFactor;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

+ (int)maximumNumberOfVisibleImagesForStyle:(unsigned int)arg1;
+ (int)maximumNumberOfVisibleItemsForStyle:(unsigned int)arg1;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(copy, nonatomic, setter=_setPhotoDecorationVariants:) NSArray *_photoDecorationVariants; // @synthesize _photoDecorationVariants=__photoDecorationVariants;
@property(readonly, nonatomic) NSPointerArray *_imageSizes; // @synthesize _imageSizes=__imageSizes;
@property(readonly, nonatomic) NSArray *_photoViews; // @synthesize _photoViews=__photoViews;
@property(readonly, nonatomic) int _numberOfViews; // @synthesize _numberOfViews=__numberOfViews;
@property(retain, nonatomic) UIImage *emptyPlaceholderImage; // @synthesize emptyPlaceholderImage=_emptyPlaceholderImage;
@property(nonatomic) int numberOfVisibleItems; // @synthesize numberOfVisibleItems=_numberOfVisibleItems;
@property(nonatomic) float gridItemSpacing; // @synthesize gridItemSpacing=_gridItemSpacing;
@property(nonatomic) float gridMargin; // @synthesize gridMargin=_gridMargin;
@property(nonatomic) float gridBackgroundCornerRadius; // @synthesize gridBackgroundCornerRadius=_gridBackgroundCornerRadius;
@property(retain, nonatomic) UIColor *gridBackgroundColor; // @synthesize gridBackgroundColor=_gridBackgroundColor;
@property(nonatomic) struct CGPoint stackPerspectiveFactor; // @synthesize stackPerspectiveFactor=_stackPerspectiveFactor;
@property(nonatomic) struct UIOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property(nonatomic) struct UIEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property(nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(nonatomic) BOOL combinesPhotoDecorations; // @synthesize combinesPhotoDecorations=_combinesPhotoDecorations;
@property(retain, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateDynamicLayout;
- (void)_setNeedsDynamicLayout;
- (id)_combinedPhotoDecorationsImage;
- (void)_getCenter:(struct CGPoint *)arg1 bounds:(struct CGRect *)arg2 forPhotoViewAtIndex:(int)arg3;
- (struct CGRect)_getStackFrame;
- (void)_rebuildDecorationVariants;
- (void)_updatePhotoViews;
- (void)_updateSubviewsOrdering;
- (void)_updateBackgroundView;
- (void)_updateNumberOfViews;
- (void)prepareForReuse;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 maxCount:(int)arg2;
- (id)newLayoutAttributesForItemAtIndex:(int)arg1 relativeToView:(id)arg2;
- (BOOL)wouldCoverAllItemsInStackView:(id)arg1;
@property(readonly, nonatomic) NSArray *stackItemViews;
@property(readonly, nonatomic) struct CGPoint topLeftCornerOfFrontStackItem;
- (struct CGRect)frameOfFrontStackItemRelativeToView:(id)arg1;
- (void)setVideoBannerVisible:(BOOL)arg1 duration:(double)arg2 videoSubtype:(short)arg3 forItemAtIndex:(int)arg4;
- (void)setImageHidden:(BOOL)arg1 forItemAtIndex:(int)arg2;
- (BOOL)isImageHiddenForItemAtIndex:(int)arg1;
- (void)setAlpha:(float)arg1 forItemAtIndex:(int)arg2;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(int)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

