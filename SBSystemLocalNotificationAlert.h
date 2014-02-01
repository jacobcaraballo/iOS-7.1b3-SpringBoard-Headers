/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UILocalNotification, SBUISound, NSTimer, SBApplication;
@protocol SBSystemLocalNotificationAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBSystemLocalNotificationAlert : XXUnknownSuperclass {
	SBApplication<SBSystemLocalNotificationAlertDelegate>* _app;
	UILocalNotification* _localNotification;
	NSString* _bodyText;
	NSString* _actionLabel;
	NSString* _customLockLabel;
	unsigned _launchButtonIndex;
	unsigned _snoozeButtonIndex;
	SBUISound* _sound;
	NSTimer* _autoMuteTimer;
}
@property(readonly, assign, nonatomic) NSString* bodyText;
@property(readonly, assign, nonatomic) UILocalNotification* localNotification;
@property(readonly, assign, nonatomic) SBApplication* application;
@property(readonly, retain) SBUISound* sound;
+(void)snoozeAlertsAndDismiss:(BOOL)dismiss;
+(void)dismissAlertsPlayingAnAVItem;
+(BOOL)isAnyAlertPlayingAnAVItem;
+(BOOL)_isAlertPlayingAnAVItem:(id)item;
+(id)pathForSoundName:(id)soundName inApp:(id)app;
+(id)localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
+(id)alertMatchingLocalNotification:(id)notification;
+(id)alerts;
-(BOOL)isSystemLocalNotificationAlert;
-(void)dismiss:(int)dismiss;
-(void)willDeactivateForReason:(int)reason;
-(void)willActivate;
-(void)_autoMuteTimerFired;
-(void)_playPresentationSound;
-(void)performUnlockAction;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(int)alertPriority;
-(id)alertItemNotificationSender;
-(int)alertItemNotificationType;
-(int)unlockSource;
-(BOOL)isCriticalAlert;
-(BOOL)shouldShowInEmergencyCall;
-(id)lockLabel;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(Class)alertSheetClass;
-(void)dealloc;
-(id)initWithLocalNotification:(id)localNotification forApplication:(id)application;
-(BOOL)isSnoozable;
@end
