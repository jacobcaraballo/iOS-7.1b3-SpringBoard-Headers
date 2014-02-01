/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableSet, UIWindow, UIView;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherStatusBarViewCache : XXUnknownSuperclass {
	NSMutableDictionary* _cachedStatusBarQueues;
	NSMutableDictionary* _statusBarsForSnapshots;
	NSMutableSet* _homePageCellStatusBars;
	UIView* _hiddenStatusBarCacheView;
	UIView* _statusBarSnapshottingView;
	BOOL _vendingSnapshots;
	UIWindow* _appSwitcherWindow;
}
@property(retain, nonatomic) UIWindow* appSwitcherWindow;
@property(assign, nonatomic, getter=isVendingSnapshots) BOOL vendingSnapshots;
-(id)barSnapshotForStyleRequest:(id)styleRequest orientation:(int)orientation;
-(id)barForStyleRequest:(id)styleRequest orientation:(int)orientation;
-(void)recycleBar:(id)bar;
-(id)_generationBlockForStyleRequest:(id)styleRequest orientation:(int)orientation;
-(id)_cacheKeyForStyleRequest:(id)styleRequest orientation:(int)orientation;
-(void)_prepareForSnapshotOfStyleRequest:(id)styleRequest orientation:(int)orientation;
-(void)preheatStatusBarCache;
-(void)recycleBarForHomePageCell:(id)homePageCell;
-(id)fakeStatusBarForHomePageCell;
-(void)dealloc;
-(id)init;
@end
