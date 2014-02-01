/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBLockScreenViewController, UIView, SBAlertManager, SBAlert;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeAlertToLockscreen : SBUIMainScreenAnimationController {
	SBLockScreenViewController* _lockScreenViewController;
	SBAlert* _deactivatingAlert;
	SBAlertManager* _alertManager;
	UIView* _cameraSnapshotView;
	BOOL _animatingBackToCamera;
}
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(double)animationDelay;
-(double)animationDuration;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithLockScreenController:(id)lockScreenController deactivatingAlert:(id)alert alertManager:(id)manager;
@end
