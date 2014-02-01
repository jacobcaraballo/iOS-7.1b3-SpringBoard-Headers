/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBToAppWorkspaceTransaction.h"

@class SBUIAnimationController, SBPasscodeLockDisableAssertion, SBAlert;

__attribute__((visibility("hidden")))
@interface SBAlertToAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBAlert* _alert;
	SBPasscodeLockDisableAssertion* _siriUnlockAssertion;
	SBUIAnimationController* _animation;
	BOOL _preventAlertDeactivationForAnimation;
	BOOL _preventAlertDeactivationForAnimationLegacy;
	BOOL _animatedAppActivation;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingFromAssistant;
	BOOL _fadeAssistant;
}
@property(readonly, assign, nonatomic) SBAlert* alert;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_handleFailure;
-(void)_deactivateAlertIfNecessary;
-(void)_alertAnimationComplete:(id)complete;
-(void)_transactionComplete;
-(void)_endAnimation;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)selfAlertDidDeactivate:(id)selfAlert;
-(BOOL)selfAlertWillDeactivate:(id)selfAlert;
-(BOOL)selfApplicationExited:(id)exited;
-(BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
-(BOOL)selfApplicationDidFinishLaunching:(id)selfApplication withInfo:(id)info;
-(BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(BOOL)selfApplicationWillBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(BOOL)selfApplicationActivated:(id)activated;
-(void)_commit;
-(BOOL)shouldDismissSwitcher;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager alert:(id)alert toApplication:(id)application activationHandler:(id)handler;
@end

