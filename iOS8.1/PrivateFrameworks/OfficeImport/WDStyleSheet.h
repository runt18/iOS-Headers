//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle;

__attribute__((visibility("hidden")))
@interface WDStyleSheet : NSObject
{
    NSMutableDictionary *mStyleDictionary;
    WDDocument *mDocument;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
}

- (id)allAliasesForStyleId:(id)arg1 name:(id)arg2;
- (id)styleIdToName:(id)arg1;
- (id)styleNameToUniqueId:(id)arg1;
- (id)styleIdForName:(id)arg1;
- (void)setDefaultListStyle:(id)arg1;
- (id)defaultListStyle;
- (void)setDefaultTableStyle:(id)arg1;
- (id)defaultTableStyle;
- (void)setDefaultCharacterStyle:(id)arg1;
- (id)defaultCharacterStyle;
- (void)setDefaultParagraphStyle:(id)arg1;
- (id)defaultParagraphStyle;
- (void)createDefaultStyles;
- (id)defaultParagraphProperties;
- (id)defaultCharacterProperties;
- (void)removeStyleWithId:(id)arg1;
- (void)setName:(id)arg1 forId:(id)arg2;
- (void)addStyle:(id)arg1 name:(id)arg2;
- (id)createStyleWithName:(id)arg1 type:(int)arg2;
- (id)createStyleWithId:(id)arg1 type:(int)arg2;
- (id)paragraphStyleWithStartingName:(id)arg1;
- (id)styleWithName:(id)arg1;
- (id)styleWithId:(id)arg1;
- (unsigned int)styleCount;
- (id)styles;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (void)initializeDefaultProperties;

@end

