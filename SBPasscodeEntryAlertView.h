/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertView.h"

@class UIView, _UIBackdropView;
@protocol SBUIPasscodeLockView, SBPasscodeEntryAlertViewDelegate;

__attribute__((visibility("hidden")))
@interface SBPasscodeEntryAlertView : SBAlertView {
	UIView<SBUIPasscodeLockView>* _passcodeView;
	_UIBackdropView* _blurView;
	float _blurRadius;
	BOOL _dismissing;
	id<SBPasscodeEntryAlertViewDelegate> _delegate;
}
@property(readonly, assign, nonatomic) UIView<SBUIPasscodeLockView>* passcodeLockView;
@property(assign, nonatomic) id<SBPasscodeEntryAlertViewDelegate> delegate;
-(void)_animatePasscodeViewsToVisible:(BOOL)visible;
-(void)_dismissAnimationCompleted;
-(int)_backdropStyle;
-(id)_buildPasscodeView;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(void)dismiss;
-(BOOL)isReadyToBeRemovedFromView;
-(void)alertDisplayWillBecomeVisible;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

