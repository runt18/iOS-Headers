/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate-Protocol.h"
#import "AVAssetWriterFinishWritingHelperDelegate-Protocol.h"

@class AVAssetWriterFigAssetWriterNotificationHandler, AVWeakReference;

@interface AVAssetWriterAsynchronousFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate>
{
    id _handler;
    int _handlerCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    AVWeakReference *_weakReferenceToHelper;
    AVWeakReference *_weakReferenceToSelf;
}

- (BOOL)shouldHelperPrepareInputs;
- (void)_callHandlerIfNotCalled;
- (void)finishWritingHelperDidFail:(id)arg1;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithHandler:(id)arg1;

@end
