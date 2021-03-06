/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class _UILegibilityLabel, NSDate, SBLockScreenTimerDialView, UILabel;

__attribute__((visibility("hidden")))
@interface SBLockScreenTimerView : XXUnknownSuperclass {
	NSDate* _endDate;
	SBLockScreenTimerDialView* _timerDial;
	UILabel* _layoutLabel;
	_UILegibilityLabel* _timerLabel;
}
+(float)interItemSpacing;
+(id)_timerFont;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(float)baselineOffsetFromBottom;
-(void)setTimerHidden:(BOOL)hidden;
-(void)updateTimerLabel;
-(void)setEndDate:(id)date;
-(void)setLegibilitySettings:(id)settings textStrength:(float)strength dialStrength:(float)strength3;
-(id)_newTimerDialForSettings:(id)settings strength:(float)strength;
-(id)_newLegibilityLabelForSettings:(id)settings strength:(float)strength;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

