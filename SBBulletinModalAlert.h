/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, BBBulletin;

__attribute__((visibility("hidden")))
@interface SBBulletinModalAlert : XXUnknownSuperclass {
	BBBulletin* _bulletin;
	NSArray* _buttons;
	NSArray* _bulletinButtonIndices;
	BOOL _playedSound;
	SBBulletinModalAlert* _superseded;
}
@property(retain, nonatomic) NSArray* bulletinButtonIndices;
@property(retain, nonatomic) NSArray* buttons;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)willDeactivateForReason:(int)reason;
-(void)didPresentAlertView:(id)view;
-(void)willPresentAlertView:(id)view;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)dismiss:(int)dismiss;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(id)initWithBulletin:(id)bulletin supersededAlert:(id)alert;
-(id)initWithBulletin:(id)bulletin;
@end

