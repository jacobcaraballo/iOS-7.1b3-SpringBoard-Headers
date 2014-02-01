/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface SBLegibilityView : XXUnknownSuperclass {
	int _tintColor;
	UIImage* _tintImage;
	UIEdgeInsets _hitTestEdgeInsets;
}
@property(retain, nonatomic) UIImage* tintImage;
@property(assign, nonatomic) int tintColor;
@property(assign, nonatomic) UIEdgeInsets hitTestEdgeInsets;
-(id)_tintColorForSettings:(id)settings;
-(void)setSettings:(id)settings image:(id)image shadowImage:(id)image3;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)dealloc;
-(id)initWithSettings:(id)settings strength:(float)strength image:(id)image tintColor:(int)color;
@end
