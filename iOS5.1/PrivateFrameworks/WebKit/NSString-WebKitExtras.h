/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (WebKitExtras)
+ (id)_web_stringWithData:(id)arg1 textEncodingName:(id)arg2;
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1;
- (id)_web_stringByAbbreviatingWithTildeInPath;
- (id)_web_stringByStrippingReturnCharacters;
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)arg1;
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)arg1;
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)arg1;
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)arg1;
- (id)_webkit_filenameByFixingIllegalCharacters;
- (id)_webkit_stringByTrimmingWhitespace;
- (id)_webkit_stringByCollapsingNonPrintingCharacters;
- (id)_webkit_stringByCollapsingWhitespaceCharacters;
@end
