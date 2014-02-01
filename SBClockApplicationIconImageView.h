/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLiveIconImageView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface SBClockApplicationIconImageView : SBLiveIconImageView {
	CALayer* _seconds;
	CALayer* _minutes;
	CALayer* _hours;
	CALayer* _blackDot;
	CALayer* _redDot;
}
+(void)_iconEditingStateChanged:(id)changed;
+(void)_handleTimeChange:(id)change;
+(void)_timerFired:(id)fired;
+(void)initialize;
-(void)_timerFiredWithComponents:(id)components flags:(unsigned)flags;
-(void)updateUnanimated;
-(void)_updateUnanimatedWithComponents:(id)components;
-(void)dealloc;
-(void)_setAnimating:(BOOL)animating;
-(void)updateAnimatingState;
-(id)_generateSquareContentsImage;
-(id)contentsImage;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end

