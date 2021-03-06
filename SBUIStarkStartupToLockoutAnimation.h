/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIStarkStartupAnimation.h"

@class SBStarkLockOutView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBUIStarkStartupToLockoutAnimation : SBUIStarkStartupAnimation {
	NSMutableArray* _viewsToSlideUp;
	SBStarkLockOutView* _toLockoutView;
	unsigned _significantAnimationsRemaining;
}
-(void)_noteSignificantAnimationFinished;
-(void)_slideUpViewsWithSlideSettings:(id)slideSettings fadeSettings:(id)settings delayIncrement:(double)increment;
-(void)_finishViewForSlideUp:(id)slideUp;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initFromLockoutView:(id)lockoutView toLockoutView:(id)lockoutView2 starkScreenController:(id)controller;
@end

