//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding>
{
    char *_g;
    unsigned char _select;
    void *_rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    id *_keys;
    NSSharedKeySet *_subSharedKeySet;
}

+ (id)keySetWithKeys:(id)arg1;
@property(retain) NSSharedKeySet *subSharedKeySet; // @synthesize subSharedKeySet=_subSharedKeySet;
@property id *keys; // @synthesize keys=_keys;
@property unsigned int *seeds; // @synthesize seeds=_seeds;
@property unsigned int numKey; // @synthesize numKey=_numKey;
@property unsigned int factor; // @synthesize factor=_factor;
@property unsigned int M; // @synthesize M=_M;
@property double c; // @synthesize c=_c;
@property void *rankTable; // @synthesize rankTable=_rankTable;
@property unsigned char select; // @synthesize select=_select;
@property char *g; // @synthesize g=_g;
- (unsigned int)keySetCount;
- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)keyAtIndex:(unsigned int)arg1;
- (unsigned int)indexForKey:(id)arg1;
- (id)allKeys;
- (unsigned int)maximumIndex;
- (BOOL)isEmpty;
- (unsigned int)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithKeys:(id *)arg1 count:(unsigned int)arg2;
- (id)generateSubclassCode:(id)arg1 printChainOfKeySetIfPossible:(BOOL)arg2 printSpecialCode:(unsigned int)arg3;

@end

