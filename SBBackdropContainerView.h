/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SBBackdropContainerView : XXUnknownSuperclass {
	_UIBackdropView* _backdropView;
}
@property(retain, nonatomic) _UIBackdropView* backdropView;
@property(readonly, assign, nonatomic) UIView* contentView;
-(void)layoutSubviews;
-(void)_reallyInsertSubview:(id)subview atIndex:(int)index;
-(void)insertSubview:(id)subview atIndex:(int)index;
-(void)addSubview:(id)subview;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

