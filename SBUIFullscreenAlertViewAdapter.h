/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAlertViewAdapter.h"


__attribute__((visibility("hidden")))
@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter {
	BOOL _revealedContentBeneathForDismiss;
	BOOL _animatingOut;
}
@property(retain) id alert;
@property(readonly, assign, getter=isAnimatingOut) BOOL animatingOut;
-(void)setShouldAnimateIn:(BOOL)animateIn;
-(void)dismiss;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
-(void)viewAnimatedOut;
-(BOOL)shouldAnimateIconsIn;
-(void)alertDisplayWillBecomeVisible;
-(BOOL)isReadyToBeRemovedFromView;
@end

