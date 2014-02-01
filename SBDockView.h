/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBWallpaperObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBDockIconListView, _UILegibilitySettings, SBWallpaperEffectView, SBHighlightView, UIImageView;

__attribute__((visibility("hidden")))
@interface SBDockView : XXUnknownSuperclass <SBWallpaperObserver> {
	SBDockIconListView* _iconListView;
	SBHighlightView* _highlightView;
	SBWallpaperEffectView* _backgroundView;
	UIImageView* _backgroundImageView;
	BOOL _accessibilityIncreaseContrastEnabled;
	_UILegibilitySettings* _legibilitySettings;
}
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
+(float)defaultHeight;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)_backgroundContrastDidChange:(id)_backgroundContrast;
-(id)_newBackgroundImage;
-(void)setVerticalBackgroundStretch:(float)stretch;
-(void)setBackgroundAlpha:(float)alpha;
-(float)heightForOrientation:(int)orientation;
-(void)layoutSubviews;
-(id)dockListView;
-(void)dealloc;
-(id)initWithDockListView:(id)dockListView forSnapshot:(BOOL)snapshot;
@end
