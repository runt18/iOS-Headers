/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class GKGameInternal, GKScoreInternal, NSDate, NSString;

@interface GKGameRecordInternal : GKInternalRepresentation
{
    GKGameInternal *_game;
    NSDate *_lastPlayedDate;
    NSDate *_purchaseDate;
    unsigned int _achievements;
    unsigned int _achievementPoints;
    unsigned int _rank;
    unsigned int _maxRank;
    unsigned int _friendRank;
    unsigned int _maxFriendRank;
    GKScoreInternal *_score;
    float _rating;
    NSString *_categoryID;
    BOOL _valid;
}

+ (id)codedPropertyKeys;
@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(retain, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
@property(nonatomic) unsigned int maxFriendRank; // @synthesize maxFriendRank=_maxFriendRank;
@property(nonatomic) unsigned int friendRank; // @synthesize friendRank=_friendRank;
@property(nonatomic) unsigned int maxRank; // @synthesize maxRank=_maxRank;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned int achievementPoints; // @synthesize achievementPoints=_achievementPoints;
@property(nonatomic) unsigned int achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property(retain, nonatomic) GKGameInternal *game; // @synthesize game=_game;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
