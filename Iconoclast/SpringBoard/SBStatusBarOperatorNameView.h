/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBStatusBarContentView.h"
#import "SpringBoard-Structs.h"

@class NSString;

@interface SBStatusBarOperatorNameView : SBStatusBarContentView {
	float _letterSpacing;
	NSString *_operatorName;
	BOOL _fullSize;
}
@property(readonly, retain) NSString *operatorName;
-(id)initWithOperatorName:(id)operatorName;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(float)calculateLetterSpacingForOperatorName:(id)operatorName;
-(void)setOperatorName:(id)name fullSize:(BOOL)size;
@end

