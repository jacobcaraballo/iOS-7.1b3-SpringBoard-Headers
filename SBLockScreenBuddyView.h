/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLockOverlayView.h"

@class UIButton, UIImageView, SBLockOverlayStylePropertiesFactory, _UILegibilitySettings, UIView, UILabel;
@protocol SBLockScreenBuddyViewDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenBuddyView : SBLockOverlayView {
	UILabel* _titleLabel;
	UIView* _logoImageContainer;
	UIImageView* _logoImageView;
	BOOL _usesWhiteLogo;
	int _viewState;
	SBLockOverlayStylePropertiesFactory* _underlayPropertiesFactory;
	_UILegibilitySettings* _legibilitySettings;
	id<SBLockScreenBuddyViewDelegate> _delegate;
	unsigned _style;
	UIView* _activationInfoView;
	UIButton* _infoButton;
}
@property(assign, nonatomic) unsigned style;
@property(retain, nonatomic) UIView* activationInfoView;
@property(retain, nonatomic) UIButton* infoButton;
@property(assign, nonatomic) id<SBLockScreenBuddyViewDelegate> delegate;
@property(readonly, retain) SBLockOverlayStylePropertiesFactory* underlayPropertiesFactory;
@property(readonly, retain) _UILegibilitySettings* legibilitySettings;
-(void)layoutSubviews;
-(void)configureOverlayPropertiesForStyle:(unsigned)style;
-(BOOL)isFakeLogoHidden;
-(void)_toggleViewState;
-(void)setViewState:(int)state;
-(void)setTitleLanguage:(id)language;
-(void)setTitleString:(id)string;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame useWhiteLogo:(BOOL)logo;
@end

