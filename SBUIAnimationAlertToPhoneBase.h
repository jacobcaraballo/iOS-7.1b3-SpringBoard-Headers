/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBWindow, UIView, SBAlert;
@protocol SBWindowContextAppearance;

__attribute__((visibility("hidden")))
@interface SBUIAnimationAlertToPhoneBase : SBUIMainScreenAnimationController {
	SBWindow* _transitionWindow;
	SBAlert* _deactivatingAlert;
	UIView<SBWindowContextAppearance>* _viewToAnimate;
	BOOL _reallyFinishedAnimating;
}
@property(retain, nonatomic, getter=_viewToAnimate, setter=_setViewToAnimate:) UIView* viewToAnimate;
-(void)_maybeReportAnimationFinished;
-(BOOL)_isApplicationLaunchFinished;
-(void)_noteAnimationDidFinish;
-(void)_applicationDependencyStateChanged;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)_setHidden:(BOOL)hidden;
-(id)_getTransitionWindow;
-(void)_reallyFinishedAnimating;
-(BOOL)_shouldAnimateWallpaper;
-(id)_deactivatingAlert;
-(void)dealloc;
-(id)initWithAlert:(id)alert activatingApp:(id)app;
@end
