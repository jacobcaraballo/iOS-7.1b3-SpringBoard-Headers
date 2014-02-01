/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"

@class UIColor;

@protocol SBWindowContextAppearance <NSObject>
@property(readonly, assign, nonatomic) CGRect contentFrame;
@property(readonly, assign, nonatomic, getter=isJailed) BOOL jailed;
@property(readonly, assign, nonatomic, getter=isContextHosted) BOOL contextHosted;
@property(retain, nonatomic) UIColor* backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor* backgroundColorWhileHosting;
@end

