/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAlertObserver.h"
#import "_UISettingsKeyObserver.h"
#import "UIStatusBarStyleDelegate.h"
#import "SBAlertManagerDelegate.h"
#import "AVExternalDeviceDelegate.h"
#import "SBAlertManagerObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBStarkScreenFocusController, SBCarDisplaySettings, AVExternalDevice, SBStarkIconWindow, SBStarkStatusBarWindow, SBStarkStatusBarViewController, SBAssistantWindow, SBStarkNotificationViewController, SBStarkLockOutViewController, SBStarkNotificationWindow, SBAlertManager, SBStarkLockOutWindow, SBStarkNowPlayingController, NSMutableOrderedSet, SBStarkDefaultHostingWindow, SBStarkIconController, SBStarkFakeIconOperationController, NSMapTable, UIWindow, SBWindow, UIScreen, SBStarkNowPlayingWindow;
@protocol SBStarkScreenControllerDelegate, SBDisplayProtocol;

__attribute__((visibility("hidden")))
@interface SBStarkScreenController : XXUnknownSuperclass <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate> {
	UIScreen* _screen;
	unsigned _interactionAffordances;
	SBCarDisplaySettings* _settings;
	id<SBStarkScreenControllerDelegate> _delegate;
	id<SBDisplayProtocol> _actualTopDisplay;
	id<SBDisplayProtocol> _effectiveTopDisplay;
	NSMutableOrderedSet* _alertSheets;
	NSMapTable* _alertSheetsToWindowMap;
	int _screenState;
	int _lockOutMode;
	BOOL _delayUpdatingLockOutMode;
	SBStarkLockOutViewController* _lockOutViewController;
	SBStarkLockOutWindow* _lockOutWindow;
	SBStarkDefaultHostingWindow* _defaultHostingWindow;
	SBStarkNowPlayingController* _nowPlayingController;
	SBStarkNowPlayingWindow* _nowPlayingWindow;
	BOOL _showingNowPlaying;
	SBStarkIconController* _iconController;
	SBStarkIconWindow* _iconWindow;
	SBStarkStatusBarViewController* _statusBarViewController;
	SBStarkStatusBarWindow* _statusBarWindow;
	SBStarkNotificationWindow* _notificationWindow;
	SBAssistantWindow* _siriWindow;
	int _siriState;
	SBAlertManager* _alertManager;
	BOOL _hasShownConnectedAlert;
	BOOL _delayShowingConnectedAlert;
	id _alertBorrowScreenToken;
	id _siriBorrowScreenToken;
	SBStarkScreenFocusController* _focusController;
	SBStarkFakeIconOperationController* _fakeIconOperationController;
	AVExternalDevice* _externalDevice;
	int _layoutJustification;
}
@property(readonly, assign, nonatomic) SBStarkStatusBarViewController* statusBarController;
@property(readonly, assign, nonatomic) SBStarkNotificationViewController* notificationController;
@property(readonly, assign, nonatomic) SBStarkIconController* iconController;
@property(readonly, assign, nonatomic) SBWindow* lockoutWindow;
@property(readonly, assign, nonatomic) SBWindow* iconWindow;
@property(readonly, assign, nonatomic) UIWindow* focusWindow;
@property(readonly, assign, nonatomic) SBWindow* animationWindow;
@property(readonly, assign, nonatomic) SBWindow* mainWindow;
@property(readonly, assign, nonatomic) SBAlertManager* alertManager;
@property(retain, nonatomic) id<SBDisplayProtocol> effectiveTopDisplay;
@property(assign, nonatomic) id<SBStarkScreenControllerDelegate> delegate;
@property(readonly, assign, nonatomic) int state;
@property(readonly, assign, nonatomic) int layoutJustification;
@property(readonly, assign, nonatomic) UIScreen* screen;
@property(readonly, assign, getter=isShowingNowPlaying) BOOL showingNowPlaying;
-(void)siriRequestedWithAction:(int)action;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)statusBar:(id)bar didTriggerButtonType:(int)type withAction:(int)action;
-(void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
-(void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(void)alertManager:(id)manager didCreateAlertWindow:(id)window;
-(void)alertManager:(id)manager willTearDownAlertWindow:(id)window;
-(void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
-(void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
-(BOOL)alertManager:(id)manager shouldDeactivateDismissedAlert:(id)alert;
-(id)alertManager:(id)manager newAlertWindowForLockAlerts:(BOOL)lockAlerts;
-(void)alertBannerSuppressionChanged:(id)changed;
-(void)_toggleNotificationSuspendedState;
-(BOOL)_allowNavigationOverrideStyle;
-(BOOL)_allowInCallOverrideStyle;
-(void)_toggleNowPlayingVisible:(BOOL)visible;
-(id)nowPlayingSnapshot;
-(void)_createFakeIconOperationController;
-(void)_updateLockOutMode;
-(void)_hideWindowsForSetup:(BOOL)setup;
-(void)_takeScreenRequested:(id)requested;
-(void)_setSiriState:(int)state;
-(void)_viewController:(id)controller animateDisappearanceWithContext:(id)context;
-(void)_viewController:(id)controller willAnimateDisappearanceWithContext:(id)context;
-(void)_viewController:(id)controller animateAppearanceWithContext:(id)context;
-(void)_viewController:(id)controller willAnimateAppearanceWithContext:(id)context;
-(void)_updateAlertSheetFocus;
-(void)_alertSheetDismissed:(id)dismissed;
-(void)_alertSheetPresented:(id)presented;
-(void)_dismissSiriWithFactory:(id)factory animations:(id)animations completion:(id)completion;
-(void)_takeScreenIfNecessaryForTopDisplayActivation;
-(void)_handleBackEvent;
-(void)_noteSetupCompleted;
-(void)_noteInitializationCompleted;
-(void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)animationFactory;
-(void)dismissSiriWithAnimation:(int)animation factory:(id)factory completion:(id)completion;
-(void)presentSiri:(BOOL)siri viewController:(id)controller;
-(BOOL)promptRelockUIIfAppropriate;
-(void)updateStatusBarStateForDisplay:(id)display withAnimationFactory:(id)animationFactory;
-(void)notifyWhenNowPlayingIsActive:(id)active withTimeout:(double)timeout;
-(id)nowPlayingContextHostManager;
-(void)setNowPlayingBundleID:(id)anId;
-(BOOL)handleUnlockAttempt;
-(void)prepareToHandleUnlockAttempt;
-(void)handleLongBackPress;
-(void)handleUnhandledBack;
-(void)handleUncompletedAppLaunch;
-(void)setEffectiveTopDisplay:(id)display actualTopDisplay:(id)display2 withAnimationFactory:(id)animationFactory;
-(void)setEffectiveTopDisplay:(id)display withAnimationFactory:(id)animationFactory;
-(void)invalidate;
-(void)_tearDownAndInvalidate:(BOOL)invalidate;
-(void)dealloc;
-(id)init;
-(id)initWithScreen:(id)screen;
@end

