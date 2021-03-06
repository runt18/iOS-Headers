/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVLeafItem *_commonName;
}

- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)copyParseRules;
@property(retain) CoreDAVLeafItem *commonName; // @synthesize commonName=_commonName;
@property(retain) CoreDAVHrefItem *href; // @synthesize href=_href;

@end

