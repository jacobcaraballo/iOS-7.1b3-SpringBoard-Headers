/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBBiometricAggregatedLogger : XXUnknownSuperclass {
	BOOL _unlockStartedWithScreenOn;
	unsigned long long _unlockStartTime;
	unsigned long long _unlockFinishTime;
}
@property(assign, nonatomic) unsigned long long unlockFinishTime;
@property(assign, nonatomic) BOOL unlockStartedWithScreenOn;
@property(assign, nonatomic) unsigned long long unlockStartTime;
+(id)sharedInstance;
-(void)_unlockAnimationWillStart:(id)_unlockAnimation;
-(void)_bioUnlockDidUnlock:(id)_bioUnlock;
-(void)_bioUnlockStart:(id)start;
-(void)_clearEverything;
-(id)init;
@end

