/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface SBAppStatusBarTransitionInfo : XXUnknownSuperclass {
	UIStatusBarStyleRequest* _startStyleRequest;
	int _startOrientation;
	UIStatusBarStyleRequest* _endStyleRequest;
	int _endOrientation;
	int _transition;
	BOOL _zoomOther;
}
@property(assign, nonatomic) BOOL zoomOther;
@property(assign, nonatomic) int transition;
@property(assign, nonatomic) int endOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest* endStyleRequest;
@property(assign, nonatomic) int startOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest* startStyleRequest;
-(id)description;
-(void)dealloc;
@end
