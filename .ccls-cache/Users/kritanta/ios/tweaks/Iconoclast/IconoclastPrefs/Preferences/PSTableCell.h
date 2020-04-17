/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIPreferencesTableCell.h"

@interface PSTableCell : UIPreferencesTableCell
{
    id _userInfo;
    BOOL _checked;
}

+ (int)cellTypeFromString:(id)fp8;
+ (id)_cellForSpecifier:(id)fp8 defaultClass:(Class)fp12 frame:(struct CGRect)fp16;
+ (id)switchCellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
+ (id)segmentCellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
+ (id)sliderCellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
+ (id)textFieldCellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
+ (id)textViewCellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
+ (id)groupHeaderCellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
+ (id)staticTextCellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
+ (id)cellWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
- (void)setUserInfo:(id)fp8;
- (id)userInfo;
- (void)setValueChangedTarget:(id)fp8 action:(SEL)fp12 userInfo:(id)fp16;
- (void)cellClicked:(id)fp8;
- (void)layoutSubviews;
- (id)titleTextLabel;
- (id)initWithFrame:(struct CGRect)fp8 specifier:(id)fp24;
- (void)dealloc;

@end
