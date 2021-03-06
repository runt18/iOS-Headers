//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLHistogramAnalysis : NSObject
{
    float _blackPoint;
    float _whitePoint;
    float _blackPointRed;
    float _whitePointRed;
    float _blackPointGreen;
    float _whitePointGreen;
    float _blackPointBlue;
    float _whitePointBlue;
    float _averageLinearRed;
    float _averageLinearBlue;
    float _averageLinearGreen;
}

@property(nonatomic) float averageLinearGreen; // @synthesize averageLinearGreen=_averageLinearGreen;
@property(nonatomic) float averageLinearBlue; // @synthesize averageLinearBlue=_averageLinearBlue;
@property(nonatomic) float averageLinearRed; // @synthesize averageLinearRed=_averageLinearRed;
@property(nonatomic) float whitePointBlue; // @synthesize whitePointBlue=_whitePointBlue;
@property(nonatomic) float blackPointBlue; // @synthesize blackPointBlue=_blackPointBlue;
@property(nonatomic) float whitePointGreen; // @synthesize whitePointGreen=_whitePointGreen;
@property(nonatomic) float blackPointGreen; // @synthesize blackPointGreen=_blackPointGreen;
@property(nonatomic) float whitePointRed; // @synthesize whitePointRed=_whitePointRed;
@property(nonatomic) float blackPointRed; // @synthesize blackPointRed=_blackPointRed;
@property(nonatomic) float whitePoint; // @synthesize whitePoint=_whitePoint;
@property(nonatomic) float blackPoint; // @synthesize blackPoint=_blackPoint;
- (id)analysisDictionary;
- (id)description;
- (void)dealloc;
- (id)initWithAnalysisDictionary:(id)arg1;
- (id)initWithBLImage:(id)arg1;

@end

