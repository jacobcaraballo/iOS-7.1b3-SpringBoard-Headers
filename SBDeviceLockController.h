/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PCPersistentTimer, NSString, SBPasscodeLockDisableAssertion, SecureBackup, SBPasscodeLockAssertionManager;

__attribute__((visibility("hidden")))
@interface SBDeviceLockController : XXUnknownSuperclass {
	int _lockState;
	double _lastLockDate;
	BOOL _isPermanentlyBlocked;
	BOOL _isBlockedForThermalCondition;
	double _deviceLockUnblockTime;
	PCPersistentTimer* _deviceLockUnblockTimer;
	BOOL _cachedPasscodeLockedOrBlocked;
	SBPasscodeLockAssertionManager* _assertionManager;
	SBPasscodeLockDisableAssertion* _transientPasscodeCheckingAssertion;
	BOOL _okToSendNotifications;
	SecureBackup* _secureBackupHelper;
	NSString* _lastIncorrectPasscodeAttempt;
}
@property(assign, getter=isBlockedForThermalCondition) BOOL blockedForThermalCondition;
+(id)_sharedControllerIfExists;
+(id)sharedController;
+(id)_sharedControllerCreateIfNecessary:(BOOL)necessary;
-(id)description;
-(void)_uncachePasscodeIfNecessary;
-(void)_cachePassword:(id)password;
-(BOOL)shouldAllowUnlockToApplication:(id)application;
-(void)_removeDeviceLockDisableAssertion:(id)assertion;
-(void)_addDeviceLockDisableAssertion:(id)assertion;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password appRequested:(BOOL)requested;
-(void)_notifyOfFirstUnlock;
-(void)_setLockState:(int)state;
-(void)_enablePasscodeLockImmediately:(BOOL)immediately;
-(void)enablePasscodeLockImmediately;
-(void)_updateDeviceLockedState;
-(BOOL)_shouldLockDeviceNow;
-(void)_notePasscodeLockedOrBlockedStateMayHaveChanged:(BOOL)changed;
-(BOOL)isPasscodeLockedOrBlocked;
-(BOOL)isPasscodeLocked;
-(BOOL)isPasscodeLockedCached;
-(BOOL)deviceHasPasscodeSet;
-(void)_setDeviceLockUnblockTime:(double)time;
-(void)_unblockTimerFired;
-(void)_scheduleUnblockTimer;
-(void)_clearUnblockTimer;
-(void)_clearBlockedState;
-(BOOL)isPermanentlyBlocked:(double*)blocked;
-(void)_noteBlockedReasonsMayHaveChanged;
-(BOOL)isBlocked;
-(BOOL)_temporarilyBlocked;
-(void)_sendBlockStateChangeNotification;
-(id)lastLockDate;
-(void)dealloc;
-(id)init;
@end
