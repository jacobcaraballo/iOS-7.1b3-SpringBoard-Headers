/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBControlCenterViewControllerDelegate <NSObject>
-(void)controlCenterViewController:(id)controller backdropViewDidUpdate:(id)backdropView;
-(void)controlCenterViewController:(id)controller handlePan:(id)pan;
-(void)controlCenterViewController:(id)controller handleTap:(id)tap;
-(BOOL)controlCenterViewController:(id)controller canHandleGestureRecognizer:(id)recognizer;
-(void)controlCenterViewControllerWantsDismissal:(id)dismissal;
@end

