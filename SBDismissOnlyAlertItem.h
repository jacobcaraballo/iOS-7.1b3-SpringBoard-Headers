/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBDismissOnlyAlertItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _body;
	double _autoDismissInterval;
}
@property(retain) id bodyText;
@property(retain) NSString* title;
@property(assign) double autoDismissInterval;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)performUnlockAction;
-(void)dealloc;
-(id)initWithTitle:(id)title body:(id)body;
@end
