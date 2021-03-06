/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CALayer, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SBTintedImageProvider : XXUnknownSuperclass {
	UIImage* _tintedImage;
	CALayer* _tintedLayer;
	BOOL _wantsTintedLayer;
	UIImage* _originalImage;
	UIColor* _tintColor;
}
@property(readonly, assign, nonatomic) CALayer* tintedLayer;
@property(readonly, assign, nonatomic) UIImage* tintedImage;
@property(assign, nonatomic) BOOL wantsTintedLayer;
@property(retain, nonatomic) UIColor* tintColor;
@property(retain, nonatomic) UIImage* originalImage;
-(void)_createOrUpdateTintedImageOrLayer;
-(void)dealloc;
@end

