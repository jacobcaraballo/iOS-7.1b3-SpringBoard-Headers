/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBStarkWorkspaceTransaction.h"

@class SBUIAnimationController, BKSApplicationActivationAssertion, SBAlert, SBApplication;

__attribute__((visibility("hidden")))
@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBAlert* _activatingAlert;
	SBApplication* _topApplication;
	BKSApplicationActivationAssertion* _topApplicationActivationAssertion;
	SBUIAnimationController* _animation;
	BOOL _animatedAppDeactivation;
	BOOL _fromStarkLauncher;
}
@property(readonly, assign, nonatomic) SBAlert* alert;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_transactionComplete;
-(BOOL)selfStarkAlertDidActivate:(id)selfStarkAlert overAlerts:(id)alerts;
-(BOOL)selfStarkAlertWillActivate:(id)selfStarkAlert overAlerts:(id)alerts;
-(void)_commit;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller alert:(id)alert overTopApplication:(id)application;
@end

