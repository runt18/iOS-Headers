//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSDTileStorage : NSObject <NSCacheDelegate>
{
    NSCache *mCache;
    TSUPointerKeyDictionary *mReverseCacheKeys;
    NSObject<OS_dispatch_semaphore> *mReverseCacheKeysLock;
    NSObject<OS_dispatch_queue> *mCacheKeysQueue;
    NSMutableDictionary *mCacheKeysByBucket;
}

- (id)p_cacheKeyForImageInRect:(struct CGRect)arg1 contentsScale:(float)arg2 tileLocation:(CDStruct_c0454aff)arg3;
- (void)removeAllContents;
- (void)removeImagesInBucket:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)contentsInRect:(struct CGRect)arg1 contentsScale:(float)arg2 forTileAtLocation:(CDStruct_c0454aff)arg3 inBucket:(id)arg4;
- (void)storeContents:(id)arg1 inRect:(struct CGRect)arg2 contentsScale:(float)arg3 forTileAtLocation:(CDStruct_c0454aff)arg4 inBucket:(id)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
