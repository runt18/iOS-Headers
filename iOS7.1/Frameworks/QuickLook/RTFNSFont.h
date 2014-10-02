//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RTFNSFont : NSObject
{
    NSString *_fontName;
    float _fontSize;
    float _pointSize;
}

+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)systemFontOfSize:(float)arg1;
+ (id)userFontOfSize:(float)arg1;
+ (id)userFixedPitchFontOfSize:(float)arg1;
@property float pointSize; // @synthesize pointSize=_pointSize;
@property float fontSize; // @synthesize fontSize=_fontSize;
@property(retain) NSString *fontName; // @synthesize fontName=_fontName;
- (unsigned int)mostCompatibleStringEncoding;
- (id)initWithName:(id)arg1 size:(float)arg2;

@end
