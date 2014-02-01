/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIBannerTargetImplementation.h"
#import "SBAssistantObserver.h"
#import "SBAlertObserver.h"
#import "SBBulletinWindowClient.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBBulletinBusyClient.h"

@class NSHashTable, UIImage, SBAlert, NSMutableArray, SBBannerContextView;

__attribute__((visibility("hidden")))
@interface SBBannerController : XXUnknownSuperclass <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {
	NSHashTable* _sources;
	NSMutableArray* _pendingBannerContextsNeedingRepop;
	SBAlert* _topAlert;
	UIImage* _bannerViewBackgroundImage;
	SBBannerContextView* _bannerView;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _locked;
	int _activeDismissGestureType;
	int _overdueDismissReason;
	id _overdueCompletionBlock;
	BOOL _dismissingBannerForAssistantReveal;
	BOOL _dismissingBannerForAssistantDismiss;
	id _assistantRevealCompletionBlock;
	id _assistantDismissCompletionBlock;
}
@property(readonly, assign, nonatomic) int bannerTargetIdiom;
@property(readonly, assign, nonatomic) void* bannerTargetIdentifier;
@property(retain, nonatomic) SBAlert* topAlert;
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(CGRect)_bannerFrameForOrientation:(int)orientation;
-(void)_tearDownViewWithReason:(int)reason;
-(void)_playSoundForContext:(id)context;
-(void)_performTransition:(int)transition withAnimation:(BOOL)animation context:(id)context reason:(int)reason completion:(id)completion;
-(id)_newBannerViewForContext:(id)context;
-(id)_bannerViewBackgroundImage;
-(double)_durationForTransition:(int)transition;
-(void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
-(void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
-(void)_setOverdueCompletionBlock:(id)block;
-(void)_soundDidFinishPlayingForBannerContext:(id)_sound;
-(void)_dismissOverdueOrDequeueIfPossible;
-(void)_stopCurrentSound;
-(void)_replaceIntervalElapsed;
-(void)_dismissIntervalElapsed;
-(void)_tryToDismissWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
-(void)_handleBannerTapGesture:(id)gesture;
-(void)_handleBannerPanGesture:(id)gesture;
-(void)_handleDismissGestureType:(int)type withState:(int)state displacement:(float)displacement velocity:(float)velocity;
-(void)_updateDismissGestureState:(SBBannerDismissGestureState*)state withDisplacement:(float)displacement velocity:(float)velocity;
-(void)_presentBannerForContext:(id)context reason:(int)reason;
-(BOOL)_shouldPendStickyBannerContext:(id)context withReason:(int)reason;
-(BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)banner existingDismissReason:(int)reason;
-(BOOL)_dequeueBannerIfPossible;
-(BOOL)_canDequeueIgnoringStickyBanner:(BOOL)banner;
-(id)_dequeueNextBannerContext;
-(BOOL)_isItemShowable:(id)showable fromSource:(id)source;
-(void)_dequeueAfterDelayIfPossible;
-(void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)possible withDelay:(BOOL)delay;
-(void)_updateBannerSuppressionState;
-(void)_removePendingContextsForSourceNeedingRepop:(id)sourceNeedingRepop;
-(id)_pendingBannerContextForSourceNeedingRepop:(id)sourceNeedingRepop;
-(void)_dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy completion:(id)completion;
-(void)_lockStateChanged:(id)changed;
-(void)assistant:(id)assistant viewDidDisappear:(int)view;
-(void)assistant:(id)assistant viewWillDisappear:(int)view;
-(void)assistant:(id)assistant viewDidAppear:(int)view;
-(void)assistant:(id)assistant viewWillAppear:(int)view;
-(void)alertBannerSuppressionChanged:(id)changed;
-(void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
-(void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation duration:(double)duration;
-(void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow duration:(double)duration;
-(void)bulletinWindowStoppedBeingBusy;
-(void)dismissCurrentBannerContextForSource:(id)source;
-(id)currentBannerContextForSource:(id)source;
-(void)signalSource:(id)source;
-(void)unregisterSource:(id)source;
-(void)registerSource:(id)source;
-(id)newBannerSnapshotViewRotatedForOrientation:(int)orientation;
-(void)setBannerAlpha:(float)alpha;
-(void)handleSystemDismissGestureWithState:(int)state position:(CGPoint)position velocity:(float)velocity;
-(BOOL)isTrackingDismissGesture;
-(void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason forceEvenIfBusy:(BOOL)busy;
-(void)dismissBannerWithAnimation:(BOOL)animation reason:(int)reason;
-(BOOL)isShowingBanner;
-(void)dealloc;
-(id)init;
@end

