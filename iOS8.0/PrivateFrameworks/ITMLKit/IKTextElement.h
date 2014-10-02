//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class NSArray, NSAttributedString, NSMutableArray, UIColor;

@interface IKTextElement : IKViewElement
{
    NSAttributedString *_text;
    unsigned int _textStyle;
    NSMutableArray *_textBadges;
}

+ (BOOL)shouldParseChildDOMElements;
@property(retain, nonatomic) NSMutableArray *textBadges; // @synthesize textBadges=_textBadges;
@property(readonly, nonatomic) unsigned int textStyle; // @synthesize textStyle=_textStyle;
@property(readonly, retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (unsigned int)_styleForTagName:(id)arg1;
- (id)_stringFromNumberElement:(id)arg1;
- (id)_stringFromDurationElement:(id)arg1;
- (id)_stringFromDateElement:(id)arg1;
- (id)_attributedStringFromNode:(id)arg1 elementFactory:(id)arg2;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(int)arg3;
- (id)attributedStringWithFont:(id)arg1;
- (id)accessibilityText;
@property(readonly, nonatomic) NSArray *badges;
@property(readonly, nonatomic) unsigned int alignment;
@property(readonly, nonatomic) int maxLines;
@property(readonly, nonatomic) UIColor *color;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
