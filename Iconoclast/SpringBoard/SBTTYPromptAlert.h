/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"

@class NSString;

@interface SBTTYPromptAlert : SBAlert {
	NSString *_number;
	int _uid;
}
@property(readonly, retain) NSString *number;
+(void)displayForNumber:(id)number addressBookUID:(int)uid;
+(BOOL)dialNumberPromptingIfNecessary:(id)necessary addressBookUID:(int)uid urlAddition:(id)addition;
-(id)initWithNumber:(id)number addressBookUID:(int)uid;
-(void)dealloc;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(int)addressBookUID;
@end

