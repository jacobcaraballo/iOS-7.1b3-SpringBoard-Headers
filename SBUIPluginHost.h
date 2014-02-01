/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIPluginControllerHost.h"

@class SBUIPluginController;

__attribute__((visibility("hidden")))
@interface SBUIPluginHost : XXUnknownSuperclass <SBUIPluginControllerHost> {
	SBUIPluginController* _plugin;
	BOOL _expectsFaceContact;
	BOOL _isPluginRunning;
}
@property(retain) SBUIPluginController* pluginController;
@property(readonly, assign) BOOL isPluginRunning;
@property(readonly, assign) BOOL isPluginVisible;
@property(readonly, assign) BOOL expectsFaceContact;
-(void)uiPlugin:(id)plugin forceUpdateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
-(void)uiPluginUserEventOccurred:(id)occurred;
-(BOOL)uiPlugin:(id)plugin openURL:(id)url;
-(BOOL)uiPlugin:(id)plugin launchApplicationWithBundleID:(id)bundleID openURL:(id)url allowDismissal:(BOOL)dismissal;
-(BOOL)uiPlugin:(id)plugin launchApplicationWithBundleID:(id)bundleID openURL:(id)url;
-(void)uiPlugin:(id)plugin setExpectsFaceContact:(BOOL)contact;
-(void)_updateFaceContactForVisibilityChange:(BOOL)visibilityChange;
-(BOOL)uiPluginExpectsFaceContact:(id)contact;
-(void)uiPlugin:(id)plugin isNowRunning:(BOOL)running;
-(void)_updateExpectsFaceContactWithChangedValue:(BOOL)changedValue;
-(BOOL)uiPluginWantsActivation:(id)activation forEvent:(int)event completion:(id)completion;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)unlock withPassword:(id)password lockViewOwner:(id)owner;
-(void)uiPluginWantsDismissal:(id)dismissal withAnimation:(BOOL)animation;
-(BOOL)pluginSuppressesNotifications;
-(BOOL)pluginWantsScreenDimInterval:(double*)interval;
-(BOOL)pluginWantsInterfaceOrientation:(int*)orientation;
-(BOOL)pluginHandledButtonTapEventFromSource:(int)source;
-(BOOL)pluginHandledButtonUpEventFromSource:(int)source;
-(BOOL)pluginHandledButtonDownEventFromSource:(int)source;
-(BOOL)pluginHandledPasscodeUnlockWithCompletion:(id)completion;
-(void)dismissPluginForEvent:(int)event;
-(void)_dismissUIPlugin:(id)plugin animated:(BOOL)animated;
-(void)cancelPendingPluginActivationEvent:(int)event;
-(void)preparePluginForActivationEvent:(int)activationEvent eventSource:(int)source afterInterval:(double)interval;
-(BOOL)pluginWantsActivationEvent:(int)event eventSource:(int)source interval:(double*)interval;
-(BOOL)activatePluginForEvent:(int)event eventSource:(int)source context:(void*)context;
-(void)_notePluginVisibilityDidChange;
-(void)_restoreOrientation;
-(void)_remoteLocked:(id)locked;
-(void)_deviceBlocked:(id)blocked;
-(void)_uiLocked:(id)locked;
-(void)_noteDeviceLockedOrBlocked;
-(void)_pluginWillUnload:(id)_plugin;
-(void)_pluginDidLoad:(id)_plugin;
-(void)_removeObserversForPlugin:(id)plugin;
-(BOOL)pluginSupportedAndEnabled;
-(void)dealloc;
-(id)init;
@end

