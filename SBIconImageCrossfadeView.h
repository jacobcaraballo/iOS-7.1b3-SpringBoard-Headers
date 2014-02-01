/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBInteractionPassThroughView.h"

@class _SBAnimatableCorneredView, UIView, SBIconImageView;

__attribute__((visibility("hidden")))
@interface SBIconImageCrossfadeView : SBInteractionPassThroughView {
	_SBAnimatableCorneredView* _containerView;
	SBIconImageView* _imageView;
	UIView* _crossfadeView;
	float _crossfadeFraction;
	float _containerScaleX;
	float _containerScaleY;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	CGPoint _stretchAnchorPoint;
}
@property(assign, nonatomic) CGPoint stretchAnchorPoint;
@property(assign, nonatomic) BOOL performsTrueCrossfade;
@property(assign, nonatomic) BOOL masksCorners;
-(void)_updateCornerMask;
-(void)cleanup;
-(void)setMorphFraction:(float)fraction totalScale:(float)scale;
-(void)setFadeFraction:(float)fraction;
-(void)layoutSubviews;
-(void)prepareGeometry;
-(void)dealloc;
-(id)initWithImageView:(id)imageView crossfadeView:(id)view;
@end

