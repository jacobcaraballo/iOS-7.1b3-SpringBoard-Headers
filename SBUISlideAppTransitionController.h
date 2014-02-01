/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"
#import "SBUIFullscreenAnimationViewDelegate.h"

@class SBUISlideAppTransitionView;

__attribute__((visibility("hidden")))
@interface SBUISlideAppTransitionController : SBUIMainScreenAnimationController <SBUIFullscreenAnimationViewDelegate> {
	SBUISlideAppTransitionView* _transitionView;
	double _animationDelay;
	double _animationDuration;
	double _initiationTime;
}
-(void)appTransitionViewAnimationDidStop:(id)appTransitionViewAnimation;
-(void)appTransitionView:(id)view animationWillStartWithDuration:(double)animation afterDelay:(double)delay;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
@end
