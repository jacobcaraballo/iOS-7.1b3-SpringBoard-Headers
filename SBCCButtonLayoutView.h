/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterSectionView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBCCButtonLayoutView : SBControlCenterSectionView {
	NSMutableArray* _buttons;
	float _interButtonPadding;
	UIEdgeInsets _contentEdgeInsets;
}
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;
@property(assign, nonatomic) float interButtonPadding;
@property(readonly, retain) NSMutableArray* buttons;
-(void)layoutSubviews;
-(void)removeButton:(id)button;
-(void)addButton:(id)button;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
