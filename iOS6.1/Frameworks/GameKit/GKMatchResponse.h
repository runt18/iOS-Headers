/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKResponse.h>

@class GKMatchRequestInternal, NSArray, NSData, NSDictionary, NSObject<OS_dispatch_group>, NSString;

@interface GKMatchResponse : GKResponse
{
    NSData *_cdxTicket;
    NSArray *_relayPushes;
    NSArray *_matches;
    int _state;
    int _sequence;
    GKMatchRequestInternal *_matchRequest;
    NSDictionary *_serverRequest;
    NSData *_sessionToken;
    NSString *_rid;
    NSObject<OS_dispatch_group> *_matchingGroup;
}

+ (id)codedPropertyKeys;
@property NSObject<OS_dispatch_group> *matchingGroup; // @synthesize matchingGroup=_matchingGroup;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain) NSDictionary *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(retain) GKMatchRequestInternal *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(readonly) int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(retain, nonatomic) NSArray *relayPushes; // @synthesize relayPushes=_relayPushes;
@property(retain, nonatomic) NSData *cdxTicket; // @synthesize cdxTicket=_cdxTicket;
- (BOOL)transitionToState:(int)arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (int)_incrementSequence;
- (void)dealloc;

@end
