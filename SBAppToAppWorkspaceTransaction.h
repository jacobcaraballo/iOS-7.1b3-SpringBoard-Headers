/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerGroupDelegate.h"
#import "SBToAppWorkspaceTransaction.h"

@class SBUIAnimationController, BKSApplicationActivationAssertion, SBApplication;

__attribute__((visibility("hidden")))
@interface SBAppToAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerGroupDelegate> {
	SBApplication* _fromApp;
	SBUIAnimationController* _animationController;
	BKSApplicationActivationAssertion* _suspendingAppAssertion;
	BOOL _animatedActivation;
	BOOL _animatedDeactivation;
	BOOL _deactivatingAppFromAppToAppGesture;
	BOOL _appQuitFromSwitcher;
}
@property(retain, nonatomic) SBApplication* fromApp;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(id)_setupAnimationFrom:(id)from to:(id)to;
-(void)_transactionComplete;
-(void)_interruptWithReason:(int)reason;
-(BOOL)_canBeInterrupted;
-(void)_endAnimation;
-(BOOL)selfAlertDidDeactivate:(id)selfAlert;
-(BOOL)selfApplicationExited:(id)exited;
-(BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
-(BOOL)selfApplicationActivated:(id)activated;
-(BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
-(BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(void)_handleAppDidNotChange;
-(BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(void)_kickOffActivation;
-(void)_commit;
-(void)_setupAnimation;
-(int)_setupMilestonesFrom:(id)from to:(id)to;
-(BOOL)shouldDismissSwitcher;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager exitedApp:(id)app;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager from:(id)from to:(id)to activationHandler:(id)handler;
@end

