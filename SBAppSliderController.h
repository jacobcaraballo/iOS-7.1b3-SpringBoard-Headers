/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBVolumePressBandit.h"
#import "_UISettingsKeyObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAppSliderIconControllerDelegate.h"
#import "SBAppSliderScrollingViewDelegate.h"
#import "SBAppSliderContainerDelegate.h"

@class SBAppSliderSettings, SBAppSliderScrollingViewController, NSObject, SBAppSwitcherStatusBarViewCache, SBAppSliderIconController, NSString, SBAppSliderContainer, NSArray, NSMutableDictionary, NSMutableSet, UIView, SBAppSwitcherServices, NSMutableArray, NSDictionary;
@protocol OS_dispatch_queue, SBAppSliderControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSliderController : XXUnknownSuperclass <SBAppSliderIconControllerDelegate, SBAppSliderScrollingViewDelegate, SBAppSliderContainerDelegate, _UISettingsKeyObserver, SBVolumePressBandit> {
	id<SBAppSliderControllerDelegate> _delegate;
	NSMutableArray* _appList;
	SBAppSwitcherServices* _switcherServices;
	NSMutableDictionary* _switcherServiceViewControllerMap;
	unsigned _appListAccessCount;
	SBAppSliderScrollingViewController* _pageController;
	SBAppSliderIconController* _iconController;
	SBAppSliderContainer* _containerView;
	UIView* _contentView;
	UIView* _pageView;
	UIView* _iconView;
	UIView* _iconParallaxView;
	UIView* _iconParallaxCorrectionView;
	NSMutableSet* _hostedApplications;
	NSMutableDictionary* _appSnapshots;
	NSRange _lastVisibleRange;
	unsigned _startAnchorIndex;
	int _startingInterfaceOrientation;
	int _layoutInterfaceOrientation;
	BOOL _interactionEnabled;
	BOOL _visible;
	int _mode;
	BOOL _deferredWorkComplete;
	unsigned _startingIndex;
	NSString* _startingDisplayIdentifier;
	NSDictionary* _startingViews;
	int _enterSide;
	SBAppSliderSettings* _settings;
	NSObject<OS_dispatch_queue>* _snapshotQueue;
	NSMutableArray* _servicesRemovedWhileAwayFromSwitcher;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	BOOL _simplifiedStatusBars;
	CGAffineTransform _wallpaperTransform;
}
@property(retain, nonatomic) NSDictionary* startingViews;
@property(readonly, assign, nonatomic) SBAppSliderIconController* iconController;
@property(readonly, assign, nonatomic) SBAppSwitcherStatusBarViewCache* statusBarViewCache;
@property(readonly, assign, nonatomic) NSArray* applicationList;
@property(assign, nonatomic) CGAffineTransform wallpaperTransform;
@property(copy, nonatomic) NSString* startingDisplayIdentifier;
@property(assign, nonatomic) id<SBAppSliderControllerDelegate> delegate;
@property(readonly, retain) SBAppSliderScrollingViewController* pageController;
+(void)setPerformSochiMigrationTasksWhenLoaded:(BOOL)loaded;
+(BOOL)_shouldUseSerialSnapshotQueue;
+(BOOL)shouldProvideHomeSnapshotIfPossible;
+(BOOL)shouldProvideSnapshotIfPossible;
+(float)pageScale;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)sliderScrollerDidEndScrolling:(id)sliderScroller;
-(void)sliderScrollerBeganMoving:(id)moving;
-(BOOL)sliderScroller:(id)scroller itemWantsToBeKeptInViewHierarchy:(unsigned)viewHierarchy;
-(void)sliderScroller:(id)scroller itemWantsToBeRemoved:(unsigned)beRemoved;
-(BOOL)sliderScrollerIsRelayoutBlocked:(id)blocked;
-(BOOL)sliderScroller:(id)scroller isIndexRemovable:(unsigned)removable;
-(void)sliderScrollerBeganPanning:(id)panning;
-(void)sliderScroller:(id)scroller itemTapped:(unsigned)tapped;
-(void)sliderScroller:(id)scroller contentOffsetChanged:(float)changed;
-(float)sliderScrollerDistanceBetweenItemCenters:(id)centers forOrientation:(int)orientation;
-(CGSize)sliderScrollerItemSize:(id)size forOrientation:(int)orientation;
-(id)sliderScroller:(id)scroller viewForIndex:(unsigned)index;
-(unsigned)sliderScrollerItemCount:(id)count;
-(void)sliderIconScrollerBeganPanning:(id)panning;
-(void)sliderIconScrollerDidEndScrolling:(id)sliderIconScroller;
-(unsigned)sliderIconScroller:(id)scroller settledIndexForNormalizedOffset:(inout float*)normalizedOffset andXVelocity:(float)velocity;
-(void)sliderIconScroller:(id)scroller activate:(id)activate;
-(void)sliderIconScroller:(id)scroller contentOffsetChanged:(float)changed;
-(void)_unsimplifyStatusBarsAfterMotion;
-(void)_simplifyStatusBarsForMotion;
-(void)_bringIconViewToFront;
-(void)_updateSnapshots;
-(unsigned)_totalSnapshotsToKeepAround;
-(BOOL)_isSnapshotDisplayIdentifier:(id)identifier;
-(BOOL)isScrolling;
-(id)_animationSettingsForIconAlphaTransition;
-(id)_transitionAnimationFactory;
-(int)_windowInterfaceOrientation;
-(void)_disableContextHostingForApp:(id)app;
-(void)_quitAppAtIndex:(unsigned)index;
-(void)_temporarilyHostAppForQuitting:(id)quitting;
-(void)_endAppListAccess;
-(id)_beginAppListAccess;
-(id)_displayIDAtIndex:(unsigned)index;
-(void)_appActivationStateDidChange:(id)_appActivationState;
-(void)_noteLockScreenCameraDidShow;
-(id)_iconListForAppList:(id)appList;
-(void)_setInteractionEnabled:(BOOL)enabled;
-(id)_generateCellViewForIndex:(unsigned)index;
-(id)_snapshotViewForDisplayIdentifier:(id)displayIdentifier;
-(id)_viewForService:(id)service;
-(void)_switcherServiceRemoved:(id)removed;
-(void)_updatePageViewScale:(float)scale;
-(void)_updatePageViewScale:(float)scale xTranslation:(float)translation;
-(void)_updateForAnimationFrame:(float)animationFrame withAnchor:(unsigned)anchor;
-(float)_frameScaleValueForAnimation;
-(float)_scaleForFullscreenPageView;
-(void)_reverseAppList;
-(BOOL)_inMode:(int)mode;
-(float)_sliderThumbnailVerticalPositionOffset;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)wantsFullScreenLayout;
-(id)pageForDisplayIdentifier:(id)displayIdentifier;
-(BOOL)allowShowHide;
-(void)forceDismissAnimated:(BOOL)animated;
-(void)animateDismissalToDisplayIdentifier:(id)displayIdentifier withCompletion:(id)completion;
-(void)switcherWasDismissed:(BOOL)dismissed;
-(void)switcherWillBeDismissed:(BOOL)switcher;
-(void)switcherWasPresented:(BOOL)presented;
-(void)_layoutInOrientation:(int)orientation;
-(void)animatePresentationFromDisplayIdentifier:(id)displayIdentifier withViews:(id)views fromSide:(int)side withCompletion:(id)completion;
-(void)_layout;
-(CGRect)_nominalPageViewFrame;
-(void)appSliderContainer:(id)container movedToWindow:(id)window;
-(void)_warmAppInfoForAppsInList;
-(void)_finishDeferredSochiMigrationTasks;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)dealloc;
-(id)init;
@end
