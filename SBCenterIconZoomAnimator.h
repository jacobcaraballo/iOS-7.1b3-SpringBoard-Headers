/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconListLayoutDelegate.h"
#import "SBIconZoomAnimator.h"

@class UIView, SBCenterZoomSettings;

__attribute__((visibility("hidden")))
@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {
	UIView* _zoomView;
	float _iconZoomedZ;
	float _centerRow;
	float _centerCol;
	CGPoint _cameraPosition;
}
@property(readonly, assign, nonatomic) CGPoint cameraPosition;
@property(readonly, assign, nonatomic) UIView* zoomView;
@property(retain, nonatomic) SBCenterZoomSettings* settings;
-(void)_calculateCentersAndCameraPosition;
-(id)_animationFactoryForDock;
-(id)_animationFactoryForIcon:(id)icon;
-(void)_positionView:(id)view forIcon:(id)icon;
-(void)iconListViewLayoutInvalidated:(id)invalidated;
-(void)iconListView:(id)view wouldHaveMovedIcon:(id)icon;
-(double)_iconZoomDelay;
-(void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
-(unsigned)_numberOfSignificantAnimations;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)fraction;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithFolderController:(id)folderController;
@end

