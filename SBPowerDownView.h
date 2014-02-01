/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "_UIActionSliderDelegate.h"
#import "SBAlertView.h"
#import "SBPowerDownViewInterface.h"

@class SBShapeView, UIButton, UIView, NSTimer, UILabel, _UIActionSlider;
@protocol SBPowerDownViewDelegate;

__attribute__((visibility("hidden")))
@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface> {
	NSTimer* _autoDismissTimer;
	id<SBPowerDownViewDelegate> _delegate;
	UIView* _backdropView;
	SBShapeView* _darkeningUnderlayView;
	UIView* _darkeningOverlayView;
	_UIActionSlider* _actionSlider;
	UIButton* _cancelButton;
	UILabel* _cancelLabel;
	BOOL _hiddenLockScreenForeground;
	BOOL _autoScreenBrightnessEnabled;
	float _initialScreenBrightness;
	BKSDisplayBrightnessTransactionRef _screenBrightnessTransaction;
}
@property(assign, nonatomic) id<SBPowerDownViewDelegate> delegate;
@property(assign, nonatomic) BKSDisplayBrightnessTransactionRef screenBrightnessTransaction;
@property(assign, nonatomic, getter=isAutoScreenBrightnessEnabled) BOOL autoScreenBrightnessEnabled;
@property(assign, nonatomic) float initialScreenBrightness;
-(void)_animatePowerDown;
-(void)_notifyDelegateCancelled;
-(void)_notifyDelegatePowerDown;
-(void)_updateSliderExclusionPath;
-(void)_resetScreenBrightness:(BOOL)brightness;
-(void)_saveScreenBrightnessInformation;
-(void)_resetAutoDismissTimer;
-(void)_cancelAutoDismissTimer;
-(id)_lockScreenView;
-(void)actionSliderDidCancelSlide:(id)actionSlider;
-(void)actionSliderDidCompleteSlide:(id)actionSlider;
-(void)actionSlider:(id)slider didUpdateSlideWithValue:(float)value;
-(void)actionSliderDidBeginSlide:(id)actionSlider;
-(void)dismiss;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)isSupportedInterfaceOrientation:(int)orientation;
-(void)animateOut;
-(void)animateIn;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

