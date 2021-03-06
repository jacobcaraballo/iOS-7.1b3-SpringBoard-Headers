/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBScaleIconZoomAnimator.h"
#import "SpringBoard-Structs.h"

@class _SBInnerFolderIconZoomAnimator, SBFolderIcon, SBFolderController, SBFloatyFolderView, SBFolderZoomSettings, SBFolderIconView;

__attribute__((visibility("hidden")))
@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator {
	SBFolderController* _innerFolderController;
	SBFloatyFolderView* _innerFolderView;
	_SBInnerFolderIconZoomAnimator* _innerZoomAnimator;
}
@property(readonly, assign, nonatomic) SBFolderIconView* targetIconView;
@property(readonly, assign, nonatomic) SBFolderIcon* targetIcon;
@property(retain, nonatomic) SBFolderZoomSettings* settings;
-(CGRect)_zoomedFrame;
-(void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
-(unsigned)_numberOfSignificantAnimations;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)fraction;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithOuterController:(id)outerController innerController:(id)controller folderIcon:(id)icon;
@end

