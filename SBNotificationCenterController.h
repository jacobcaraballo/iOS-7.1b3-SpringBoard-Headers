/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBWidgetViewControllerHostDelegate.h"
#import "SBNotificationCenterViewControllerDelegate.h"
#import "SBBulletinWindowClient.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBCoordinatedPresenting.h"

@class NSSet, SBWindow, SBNotificationCenterSettings, SBNotificationCenterViewController, UIView, SBUnlockActionContext, UILongPressGestureRecognizer, SBApplication, SBChevronView;
@protocol SBPresentingDelegate;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterController : XXUnknownSuperclass <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerHostDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBCoordinatedPresenting> {
	SBNotificationCenterViewController* _viewController;
	UIView* _coveredContentSnapshot;
	SBApplication* _coveredApplication;
	SBChevronView* _borrowedGrabberView;
	id _borrowedGrabberWillPresentBlock;
	id _borrowedGrabberHideBlock;
	id _borrowedGrabberCompletionBlock;
	UILongPressGestureRecognizer* _grabberPressGesture;
	id _keyboardNotificationObserverToken;
	SBUnlockActionContext* _unlockActionContext;
	int _transitionState;
	int _presentedState;
	SBNotificationCenterSettings* _settings;
	BOOL _grabberEnabled;
}
@property(readonly, assign, nonatomic) NSSet* tapExcludedViews;
@property(readonly, assign, nonatomic) NSSet* conflictingGestures;
@property(readonly, assign, nonatomic) NSSet* gestures;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, assign, nonatomic) int layoutMode;
@property(readonly, assign, nonatomic) SBUnlockActionContext* unlockActionContext;
@property(assign, nonatomic) BOOL blursBackground;
@property(readonly, assign, nonatomic, getter=isPresentingWidgetContent) BOOL presentingWidgetContent;
@property(assign, nonatomic, getter=isGrabberEnabled) BOOL grabberEnabled;
@property(readonly, assign, nonatomic, getter=isGrabberVisible) BOOL grabberVisible;
@property(readonly, assign, nonatomic, getter=isTodayViewAvailableWhileLocked) BOOL todayViewAvailableWhileLocked;
@property(readonly, assign, nonatomic, getter=isNotificationsViewAvailableWhileLocked) BOOL notificationsViewAvailableWhileLocked;
@property(readonly, assign, nonatomic, getter=isAvailableWhileLocked) BOOL availableWhileLocked;
@property(readonly, assign, nonatomic, getter=isTransitioning) BOOL transitioning;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
@property(readonly, assign, nonatomic) SBWindow* window;
@property(readonly, assign, nonatomic) SBNotificationCenterSettings* settings;
@property(readonly, assign, nonatomic) SBNotificationCenterViewController* viewController;
+(double)transitionAnimationDuration;
+(id)newDynamicAnimationForShow:(BOOL)show targetValue:(double)value withInitialValue:(double)initialValue velocity:(double)velocity extraPull:(BOOL)pull;
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)finishedScrollTest;
-(void)runScrollTest:(id)test iterations:(int)iterations delta:(int)delta;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)widget:(id)widget requestsPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
-(void)widget:(id)widget requestsLaunchOfURL:(id)url;
-(void)bulletinWindowDidRotateFromOrientation:(int)bulletinWindow;
-(void)bulletinWindowIsAnimatingRotationToOrientation:(int)orientation duration:(double)duration;
-(void)bulletinWindowWillRotateToOrientation:(int)bulletinWindow duration:(double)duration;
-(void)invalidateUnlockActionContext;
-(BOOL)handleActionForBulletin:(id)bulletin;
-(id)widgetViewControllerHostDelegate:(id)delegate;
-(BOOL)_handleActionOrRequestWithDefaultAction:(id)defaultAction lockedAction:(id)action;
-(void)biometricEventMonitorDidAuthenticate:(id)biometricEventMonitor;
-(void)_updateForChangeInMessagePrivacy;
-(void)handleGrabberPress:(id)press;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)reloadAllWidgets;
-(void)hideGrabberAnimated:(BOOL)animated completion:(id)completion;
-(void)showGrabberAnimated:(BOOL)animated;
-(BOOL)canShowHideGrabberView;
-(void)_setGrabberEnabled:(BOOL)enabled;
-(void)unregisterSharedGrabberView;
-(void)registerSharedGrabberView:(id)view withWillPresentBlock:(id)with hideBlock:(id)block andCompletion:(id)completion;
-(void)dismissPresentedWidgetContentAnimated:(BOOL)animated;
-(void)dismissAnimated:(BOOL)animated withStepper:(id)stepper completion:(id)completion fromCurrentState:(BOOL)currentState;
-(void)dismissAnimated:(BOOL)animated completion:(id)completion;
-(void)dismissAnimated:(BOOL)animated;
-(void)presentAnimated:(BOOL)animated completion:(id)completion;
-(void)_presentAnimated:(BOOL)animated setupPrelude:(id)prelude setupPostlude:(id)postlude animationPrelude:(id)prelude4 animationPostlude:(id)postlude5 completion:(id)completion;
-(void)presentAnimated:(BOOL)animated;
-(void)_present:(BOOL)present withStandardAnimation:(BOOL)standardAnimation stepper:(id)stepper completion:(id)completion fromCurrentState:(BOOL)currentState;
-(void)_present:(BOOL)present stepper:(id)stepper;
-(void)cancelTransition;
-(void)abortAnimatedTransition;
-(void)endTransitionWithVelocity:(CGPoint)velocity completion:(id)completion;
-(void)endTransitionWithVelocity:(CGPoint)velocity additionalValueApplier:(id)applier completion:(id)completion;
-(void)_endTransitionWithVelocity:(CGPoint)velocity additionalValueApplier:(id)applier animationPostlude:(id)postlude completion:(id)completion;
-(void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
-(void)beginDismissalWithTouchLocation:(CGPoint)touchLocation;
-(void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
-(void)_beginPresentationWithTouchLocation:(CGPoint)touchLocation setupPrelude:(id)prelude setupPostlude:(id)postlude animationPrelude:(id)prelude4;
-(void)prepareLayoutForPresentationFromBanner;
-(void)_cleanupAfterTransition:(BOOL)transition;
-(void)_setupForDismissal;
-(void)_setupForPresentationWithTouchLocation:(CGPoint)touchLocation;
-(void)_setupForViewPresentation;
-(void)_setViewUserInteractionEnabled:(BOOL)enabled;
-(void)_removeCoveredContentSnapshot;
-(void)_insertCoveredContentSnapshotIfNecessary:(id)necessary;
-(void)_invalidateCoveredContentSnapshot;
-(void)_updateCoveredContentSnapshot;
-(BOOL)_shouldSelectViewControllerAtTouchLocation;
-(BOOL)doesSectionWithIdentifierUpdateMessagePrivacyViaSectionParameters:(id)identifierUpdateMessagePrivacyViaSectionParameters;
-(BOOL)handleMenuButtonTap;
-(BOOL)_isNotificationCenterViewAvailableWhileLockedWithProfileBlock:(id)profileBlock counterpartBlock:(id)block;
-(BOOL)_isNotificationCenterViewWithFeatureKeyAvailableWhileLocked:(id)featureKeyAvailableWhileLocked isLockedDownByRestrictions:(BOOL*)restrictions;
-(BOOL)isPresentingControllerTransitioning;
-(void)dealloc;
-(id)init;
@end

