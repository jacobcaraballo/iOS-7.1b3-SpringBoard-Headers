/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBWallpaperObserver.h"
#import "SBAppSwitcherPageContentView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBFakeStatusBarView, SBAppSwitcherStatusBarViewCache, UIView;

__attribute__((visibility("hidden")))
@interface SBAppSliderHomePageCellView : XXUnknownSuperclass <SBWallpaperObserver, SBAppSwitcherPageContentView> {
	UIView* _possiblyRotatedContainer;
	UIView* _nonRotatedContainer;
	UIView* _homeScreenView;
	UIView* _homeSnapshot;
	UIView* _wallpaperView;
	SBFakeStatusBarView* _fakeStatusBar;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	BOOL _usesSnapshots;
	int _snapshotOrientation;
	int _orientation;
}
@property(assign, nonatomic) int orientation;
@property(retain, nonatomic) UIView* homeScreenView;
@property(readonly, assign, nonatomic) UIView* homeSnapshot;
+(id)wallpaperSnapshotForZoomFactor:(float)zoomFactor orientation:(int)orientation;
-(void)_updateWallpaperView;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)_viewDidAnimatePresentation:(id)_view;
-(void)_viewDismissing:(id)dismissing;
-(void)_viewPresenting:(id)presenting;
-(void)_addHomeScreenViewAsSubview:(id)subview;
-(void)setHomeSnapshot:(id)snapshot inOrientation:(int)orientation;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)settings;
-(void)_statusBarFrameChanging;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame statusBarCache:(id)cache;
@end

