//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDiscardableContent.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent>
{
    NSString *_artKey;
    NSArray *_images;
    struct {
        unsigned int isDiscarded:1;
        unsigned int useCount;
    } _flags;
}

@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSString *artKey; // @synthesize artKey=_artKey;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (unsigned int)hash;
- (void)dealloc;
- (id)initWithArtKey:(id)arg1;

@end
