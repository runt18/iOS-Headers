/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABUnknownPersonViewController_Modern.h>

@interface ABUnknownPersonViewController_Modern (ABPersonViewControllerActionsAdditions)
- (id)newActionButton;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(long long)arg6 destructive:(_Bool)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(long long)arg3;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(long long)arg4 destructive:(_Bool)arg5;
@end
