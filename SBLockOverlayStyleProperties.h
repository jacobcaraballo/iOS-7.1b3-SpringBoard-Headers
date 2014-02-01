/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, _UIBackdropViewSettings;

__attribute__((visibility("hidden")))
@interface SBLockOverlayStyleProperties : XXUnknownSuperclass {
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tintColor;
	float _tintAlpha;
	float _blurRadius;
	unsigned _style;
	int _quality;
	_UIBackdropViewSettings* _settings;
}
@property(readonly, assign, nonatomic) int graphicsQuality;
@property(readonly, assign, nonatomic) unsigned style;
@property(readonly, assign, nonatomic) float blurRadius;
@property(readonly, assign, nonatomic) UIColor* tintColor;
@property(readonly, assign, nonatomic) float tintAlpha;
-(id)_stringForStyle;
-(id)_stringForQuality;
-(id)_settingsForStyle;
-(void)_configure;
-(id)description;
-(void)dealloc;
-(id)initWithStyle:(unsigned)style quality:(int)quality;
@end

