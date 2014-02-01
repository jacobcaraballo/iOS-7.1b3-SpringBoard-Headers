/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBLockScreenClippedSlideController, UIView, SBLockScreenViewControllerBase;

__attribute__((visibility("hidden")))
@interface SBUILockscreenSlideAnimationController : SBUIMainScreenAnimationController {
	int _transitionStyle;
	SBLockScreenViewControllerBase* _lockscreenViewController;
	SBLockScreenClippedSlideController* _lockscreenClippedSlideController;
	UIView* _appView;
	double _animationDelay;
	double _animationDuration;
	BOOL _fromCC;
	BOOL _fromNC;
	BOOL _finishedSliding;
	BOOL _waitForAppActivationForContextHostView;
	BOOL _useContextHostView;
}
-(void)_maybeReportAnimationFinished;
-(void)_finishedSliding;
-(BOOL)_isApplicationLaunchFinished;
-(void)_applicationDependencyStateChanged;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(BOOL)_animationShouldStart;
-(id)_animationProgressDependency;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingLockscreen:(id)lockscreen;
-(id)initWithActivatingLockscreen:(id)activatingLockscreen deactivatingApp:(id)app;
-(void)_setup:(id)setup transitionStyle:(int)style;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
@end

