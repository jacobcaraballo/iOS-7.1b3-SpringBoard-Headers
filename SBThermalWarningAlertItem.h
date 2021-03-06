/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBThermalWarningAlertItemDelegate;

__attribute__((visibility("hidden")))
@interface SBThermalWarningAlertItem : XXUnknownSuperclass {
	id<SBThermalWarningAlertItemDelegate> _delegate;
	int _actionTaken;
}
@property(readonly, assign, nonatomic, getter=isWaitingForResponse) BOOL waitingForResponse;
-(BOOL)unlocksScreen;
-(BOOL)undimsScreen;
-(void)_playPresentationSound;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)didDeactivateForReason:(int)reason;
-(void)willActivate;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_autoCoolDown;
-(void)_tryToSendAction:(int)sendAction;
-(id)initWithDelegate:(id)delegate;
@end

