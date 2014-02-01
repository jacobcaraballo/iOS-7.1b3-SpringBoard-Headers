/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterSectionViewController.h"
#import "SBUIControlCenterButtonDelegate.h"
#import "RadiosPreferencesDelegate.h"

@class BBSettingsGateway, BBBehaviorOverride, BluetoothManager, RadiosPreferences, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBCCSettingsSectionController : SBControlCenterSectionViewController <SBUIControlCenterButtonDelegate, RadiosPreferencesDelegate> {
	NSMutableDictionary* _buttonsByID;
	BOOL _settingSupported[6];
	RadiosPreferences* _airplaneModeController;
	BBSettingsGateway* _settingsGateway;
	BOOL _dndEnabled;
	int _dndStatus;
	BBBehaviorOverride* _activeOverride;
	BluetoothManager* _btManager;
}
+(Class)viewClass;
-(void)_updateOrientationLockButtonState;
-(BOOL)_getOrientationLocked;
-(void)_setOrientationLocked:(BOOL)locked;
-(void)_tearDownOrientationLock;
-(void)_initOrientationLock;
-(void)_updateMuteButtonState;
-(BOOL)_getMuted;
-(void)_setMuted:(BOOL)muted;
-(void)_tearDownMute;
-(void)_initMute;
-(BOOL)_getDND;
-(void)_updateActiveOverrides:(id)overrides;
-(void)_setDNDEnabled:(BOOL)enabled updateServer:(BOOL)server;
-(void)_setDNDStatus:(int)status;
-(void)_tearDownDND;
-(void)_initDND;
-(void)_updateBluetoothButtonState;
-(BOOL)_getBluetooth;
-(void)_bluetoothButtonTapped:(id)tapped;
-(void)_tearDownBluetooth;
-(void)_initBluetooth;
-(void)_updateWifiNotification:(id)notification;
-(void)_refreshWiFiState;
-(void)_updateWifiButtonState;
-(BOOL)_getWifi;
-(void)_wifiButtonTapped:(id)tapped;
-(void)_tearDownWifi;
-(void)_initWifi;
-(void)airplaneModeChanged;
-(BOOL)_getAirplaneMode;
-(void)_setAirplaneModeEnabled:(BOOL)enabled;
-(void)_tearDownAirplaneMode;
-(void)_initAirplaneMode;
-(void)buttonTapped:(id)tapped;
-(id)_buttonForSetting:(int)setting;
-(void)_addButtonForSetting:(int)setting;
-(id)_identifierForSetting:(int)setting;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)noteSettingsDidUpdate:(id)noteSettings;
-(id)view;
-(CGSize)contentSizeForOrientation:(int)orientation;
-(id)sectionIdentifier;
-(void)dealloc;
-(id)init;
@end

