/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBAlert;

__attribute__((visibility("hidden")))
@interface SBAlertView : XXUnknownSuperclass {
	SBAlert* _alert;
	unsigned _shouldAnimateIn : 1;
}
@property(retain) SBAlert* alert;
@property(assign) BOOL shouldAnimateIn;
-(void)alertWindowViewControllerResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
-(BOOL)shouldAddClippingViewDuringRotation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)isSupportedInterfaceOrientation:(int)orientation;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)isAnimatingOut;
-(BOOL)isReadyToBeRemovedFromView;
-(void)alertDisplayBecameVisible;
-(void)alertDisplayWillBecomeVisible;
-(void)dismiss;
-(id)initWithFrame:(CGRect)frame;
@end

