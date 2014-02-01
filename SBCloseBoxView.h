/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconColorSettings, UIView, UIImageView, SBIconBlurryBackgroundView;

__attribute__((visibility("hidden")))
@interface SBCloseBoxView : XXUnknownSuperclass {
	SBIconBlurryBackgroundView* _backgroundView;
	UIView* _whiteTintView;
	UIImageView* _xColorBurnView;
	UIImageView* _xPlusDView;
	SBIconColorSettings* _colorSettings;
	CGPoint _wallpaperRelativeCenter;
}
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)changes;
-(void)setLegibilityStyle:(int)style;
-(void)setWallpaperRelativeCenter:(CGPoint)center;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
