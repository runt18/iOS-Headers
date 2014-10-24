//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EKDayAllDayViewDelegate.h"
#import "EKDayTimeViewDelegate.h"
#import "EKDayViewContentDelegate.h"
#import "UIScrollViewDelegate.h"

@class EKDayAllDayView, EKDayTimeView, EKDayViewContent, EKDayViewSpringLoadedScrollAnimation, EKEvent, NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimer, UIColor, UIImageView, UIPinchGestureRecognizer, UIScrollView, UITapGestureRecognizer;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate>
{
    int _orientation;
    double _dayStart;
    double _dayEnd;
    double _nextDSTTransition;
    BOOL _scrollbarShowsInside;
    BOOL _scrollingToOccurrence;
    BOOL _settingDate;
    BOOL _userScrolling;
    BOOL _scrollToOccurrencesOnNextReload;
    UIImageView *_topVerticalGridExtension;
    UIImageView *_bottomVerticalGridExtension;
    UIView *_bottomLine;
    NSArray *_existingTimedOcurrences;
    NSDate *_lastInspectedOccurrenceOnDate;
    struct CGSize _scrolledToFirstVisibleSecondForSize;
    EKDayAllDayView *_allDayView;
    EKDayViewContent *_dayContent;
    EKDayTimeView *_timeView;
    EKDayViewSpringLoadedScrollAnimation *_scrollAnimation;
    UIScrollView *_scroller;
    NSTimer *_timeMarkerTimer;
    struct CGPoint _lastPinchDistance;
    struct CGPoint _lastPinchPoint1;
    BOOL _pinching;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    BOOL _allowsOccurrenceSelection;
    BOOL _alignsMidnightToTop;
    BOOL _shouldEverShowTimeIndicators;
    BOOL _usesVibrantGridDrawing;
    BOOL _allowPinchingHourHeights;
    id <EKDayViewDelegate> _delegate;
    id <EKDayViewDataSource> _dataSource;
    NSDateComponents *_displayDate;
    NSCalendar *_calendar;
    int _outlineStyle;
    float _hourScale;
}

@property(nonatomic) float hourScale; // @synthesize hourScale=_hourScale;
@property(nonatomic) BOOL allowPinchingHourHeights; // @synthesize allowPinchingHourHeights=_allowPinchingHourHeights;
@property(nonatomic) BOOL usesVibrantGridDrawing; // @synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing;
@property(nonatomic) int outlineStyle; // @synthesize outlineStyle=_outlineStyle;
@property(nonatomic) BOOL shouldEverShowTimeIndicators; // @synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators;
@property(nonatomic) BOOL alignsMidnightToTop; // @synthesize alignsMidnightToTop=_alignsMidnightToTop;
@property(nonatomic) BOOL allowsOccurrenceSelection; // @synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection;
@property(readonly, nonatomic) double dayEnd; // @synthesize dayEnd=_dayEnd;
@property(readonly, nonatomic) double dayStart; // @synthesize dayStart=_dayStart;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) __weak id <EKDayViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <EKDayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2;
- (BOOL)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (double)highlightedHour;
- (void)highlightHour:(double)arg1;
- (float)allDayRegionHeight;
- (BOOL)scrollTowardPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2;
- (double)_adjustSecondBackwardForDSTHole:(double)arg1;
- (double)_adjustSecondForwardForDSTHole:(double)arg1;
- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(char *)arg2 requireAllDayRegionInsistence:(BOOL)arg3;
- (BOOL)_showingAllDaySection;
- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(char *)arg2;
- (id)occurrenceViewAtPoint:(struct CGPoint)arg1;
- (void)_dayViewPinched:(id)arg1;
- (float)maximumHourScale;
- (float)minimumHourScale;
- (struct CGPoint)_pinchDistanceForGestureRecognizer:(id)arg1;
- (void)_doubleTap:(id)arg1;
- (void)_timeViewTapped:(id)arg1;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;
- (void)allDayViewDidLayoutSubviews:(id)arg1;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)reloadData;
- (void)relayoutExistingTimedOccurrences;
- (void)setScrollerYInset:(float)arg1 keepingYPointVisible:(float)arg2;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (void)_disposeAllDayView;
- (void)_createAllDayView;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)firstVisibleSecondChanged;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (BOOL)containsOccurrences;
@property(retain, nonatomic) EKEvent *dimmedOccurrence;
- (id)selectedEvent;
- (void)selectEvent:(id)arg1;
- (struct CGRect)rectForEvent:(id)arg1;
- (float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (BOOL)eventOccursOnThisDay:(id)arg1;
- (void)resetLastSelectedOccurrencePoint;
- (id)_generateVerticalGridExtensionImage;
- (void)_clearVerticalGridExtensionImageCache;
- (struct CGRect)_scrollerRect;
- (int)_secondAtPosition:(float)arg1;
- (float)_positionOfSecond:(int)arg1;
@property(readonly, nonatomic) float leftContentInset;
@property(readonly, nonatomic) float scrollBarOffset;
- (float)_verticalOffset;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (void)bringEventToFront:(id)arg1;
@property(readonly, nonatomic) NSArray *occurrenceViews;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(CDUnknownBlockType)arg3;
- (void)_finishedScrollToSecond;
- (void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(CDUnknownBlockType)arg3;
- (void)scrollToEvent:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) struct CGPoint normalizedContentOffset;
@property(readonly, nonatomic) float scrollOffset;
@property(readonly, nonatomic) EKDayAllDayView *allDayView;
@property(nonatomic) int occurrenceBackgroundStyle;
@property(retain, nonatomic) UIColor *occurrenceTextBackgroundColor;
@property(retain, nonatomic) UIColor *occurrenceLocationColor;
@property(retain, nonatomic) UIColor *occurrenceTimeColor;
@property(retain, nonatomic) UIColor *occurrenceTitleColor;
@property(retain, nonatomic) UIColor *gridLineColor;
@property(nonatomic) struct _NSRange hoursToRender;
@property(retain, nonatomic) UIColor *timeViewTextColor;
@property(nonatomic) BOOL allowsScrolling;
@property(nonatomic) int firstVisibleSecond;
@property(nonatomic) BOOL showsLeftBorder;
@property(nonatomic) BOOL eventsFillGrid;
@property(nonatomic) BOOL showsTimeLine;
- (struct CGRect)currentTimeRectInView:(id)arg1;
@property(nonatomic) BOOL showsTimeMarker;
@property(nonatomic) BOOL animatesTimeMarker;
@property(nonatomic) BOOL showsTimeLabel;
- (void)adjustForSignificantTimeChange;
- (void)setOrientation:(int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)updateMarkerPosition;
- (void)_invalidateMarkerTimer;
- (void)_startMarkerTimer;
- (void)_adjustForDateOrCalendarChange;
- (void)_stopScrolling;
- (void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)_localeChanged;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(int)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
