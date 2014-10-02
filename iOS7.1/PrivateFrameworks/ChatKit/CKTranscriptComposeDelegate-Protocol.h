//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKComposition, CKConversation, CKTranscriptController, NSMutableArray;

@protocol CKTranscriptComposeDelegate <NSObject>
- (void)transcriptController:(CKTranscriptController *)arg1 didSelectNewConversation:(CKConversation *)arg2;
- (BOOL)supportsAttachments;
- (void)showNewMessageCompositionForMessageParts:(NSMutableArray *)arg1;
- (void)showForwardedMessageParts:(NSMutableArray *)arg1;
- (void)transcriptController:(CKTranscriptController *)arg1 didSendMessageInConversation:(CKConversation *)arg2;
- (void)transcriptController:(CKTranscriptController *)arg1 willSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3;
- (void)didCancelComposition:(CKTranscriptController *)arg1;

@optional
- (BOOL)canEditRecipients;
@end
