//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AOSPreferencesUtil : NSObject
{
}

+ (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)objectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setData:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)dataForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setArray:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)arrayForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setDictionary:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)dictionaryForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setDate:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)dateForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)stringForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setInteger:(int)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (int)integerForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (BOOL)boolForKey:(id)arg1 inDomain:(id)arg2;
+ (void)removeKey:(id)arg1 inDomain:(id)arg2;
+ (void)synchronizeDomain:(id)arg1;

@end
