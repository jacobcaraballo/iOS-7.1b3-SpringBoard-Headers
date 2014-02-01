/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBDisableAppStatusBarAlphaChangesAssertion, SBWindow, UIView, SBAlert;

__attribute__((visibility("hidden")))
@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {
	SBAlert* _fromAlert;
	SBWindow* _transitionWindow;
	UIView* _viewToAnimate;
	UIView* _contextHostView;
	UIView* _fakeStatusBarViewContainer;
	int _launchingOrientation;
	BOOL _requiresHostView;
	BOOL _activateBeforeHosting;
	BOOL _fromAssistant;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;
}
-(void)_removeFakeStatusBarIfNecessary;
-(void)_showFakeStatusBarIfNecessary;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_maybeReportAnimationFinished;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeStartCrossfade;
-(void)_finishedZooming;
-(void)_applicationDependencyStateChanged;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_cleanupAnimation;
-(void)_doAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)_setHidden:(BOOL)hidden;
-(BOOL)_shouldDismissBanner;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp fromAlert:(id)alert;
-(id)_getTransitionWindow;
@end
