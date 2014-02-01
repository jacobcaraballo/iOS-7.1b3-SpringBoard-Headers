/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBReusableView.h"
#import "SpringBoard-Structs.h"


@protocol SBIconAccessoryView <SBReusableView>
+(id)checkoutAccessoryImagesForIcon:(id)icon location:(int)location;
-(void)setAccessoryBrightness:(float)brightness;
-(BOOL)displayingAccessory;
-(CGPoint)accessoryOriginForIconBounds:(CGRect)iconBounds;
-(void)configureForIcon:(id)icon location:(int)location highlighted:(BOOL)highlighted;
-(void)configureAnimatedForIcon:(id)icon location:(int)location highlighted:(BOOL)highlighted withPreparation:(id)preparation animation:(id)animation completion:(id)completion;
@end
