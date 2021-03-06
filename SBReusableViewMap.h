/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable;
@protocol SBReusableViewMapDelegate;

__attribute__((visibility("hidden")))
@interface SBReusableViewMap : XXUnknownSuperclass {
	NSMapTable* _recycledViewsByClass;
	id<SBReusableViewMapDelegate> _delegate;
}
@property(assign, nonatomic) id<SBReusableViewMapDelegate> delegate;
-(void)purgeAllViews;
-(void)purgeViewsForClass:(Class)aClass;
-(void)recycleView:(id)view;
-(id)newViewOfClass:(Class)aClass;
-(id)viewOfClass:(Class)aClass;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
-(id)init;
@end

