/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class SBUnlockActionContext;
@protocol SBLockScreenViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenViewControllerBase : SBAlert {
	id<SBLockScreenViewControllerDelegate> _delegate;
	SBUnlockActionContext* _customUnlockActionContext;
}
@property(assign, nonatomic) id<SBLockScreenViewControllerDelegate> delegate;
@property(assign, getter=isShowingMediaControls) BOOL showingMediaControls;
@property(assign, getter=isInScreenOffMode) BOOL inScreenOffMode;
-(id)allPendingAlertItems;
-(BOOL)hasSuperModalAlertItems;
-(id)currentAlertItem;
-(id)dequeueAllPendingSuperModalAlertItems;
-(void)deactivateAlertItem:(id)item;
-(BOOL)activateAlertItem:(id)item;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(BOOL)handleExternalKeyDownEvent;
-(void)noteResetRestoreStateUpdated;
-(void)noteDeviceBlockedStatusUpdated;
-(BOOL)isLockScreenVisible;
-(BOOL)isShowingOverheatUI;
-(void)shakeSlideToUnlockTextWithCustomText:(id)customText;
-(id)activationBlockAnimated:(BOOL)animated;
-(void)updateInterfaceIfNecessary;
-(void)updateOrientationForUndim;
-(BOOL)lockScreenBulletinControllerIsActive;
-(void)setCustomUnlockActionContext:(id)context;
-(id)_customUnlockActionContext;
-(id)currentUnlockActionContext;
-(BOOL)lockScreenIsShowingBulletins;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)shouldShowSlideshowButton;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleMenuButtonTap;
-(void)noteExitingLostMode;
-(void)prepareToEnterLostMode;
-(void)updateCardItem:(id)item;
-(void)deactivateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
-(void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
-(void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(BOOL)hasActiveUIAccessories;
-(void)startLockScreenFadeInAnimationForSource:(int)source;
-(BOOL)canRelockForAutoDimTimer;
-(BOOL)wantsScreenToAutoDim;
-(void)prepareForMesaUnlockWithCompletion:(id)completion;
-(void)biometricEventMonitor:(id)monitor handleBiometricEvent:(unsigned)event;
-(BOOL)isHidingPasscodeViewDuringCall;
-(void)setForcesPasscodeViewDuringCall:(BOOL)call;
-(void)prepareToReturnToCameraFromCall;
-(void)cancelReturnToCameraAfterCall;
-(BOOL)shouldReturnToCameraAfterCall;
-(void)handlePhoneAppExitedIfNecessary;
-(void)noteStartingPhoneCallWhileUILocked;
-(BOOL)isMakingEmergencyCall;
-(void)emergencyDialerExitedWithError:(id)error;
-(void)exitEmergencyDialerAnimated:(BOOL)animated;
-(void)launchEmergencyDialer;
-(void)dismissCameraImmediately;
-(void)activateCameraAnimated:(BOOL)animated;
-(void)activateCamera;
-(BOOL)cameraIsVisible;
-(BOOL)cameraIsActive;
-(void)willBeginDeactivationForTransitionToApp:(id)app animated:(BOOL)animated;
-(BOOL)_isLockAlert;
-(void)prepareForExternalUIUnlock;
-(void)deactivate;
-(void)activate;
-(BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(void)finishUIUnlockFromSource:(int)source;
-(void)attemptToUnlockUIFromNotification;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
-(void)prepareForUIUnlock;
-(BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
-(BOOL)isPasscodeLockVisible;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated;
-(BOOL)allowSystemGestureAtLocation:(CGPoint)location;
-(void)_transitionWallpaperFromLockWithOptionalOutTimingFunction:(id)optionalOutTimingFunction adjustWindowLevel:(BOOL)level;
-(void)_transitionWallpaperFromLock;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
@end

