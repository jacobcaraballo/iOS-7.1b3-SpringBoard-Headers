/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLockStateAggregator : XXUnknownSuperclass {
	unsigned _lockState;
}
@property(readonly, assign) unsigned lockState;
+(id)sharedInstance;
-(void)_updateLockState;
-(BOOL)hasAnyLockState;
-(id)description;
-(id)_descriptionForLockState:(unsigned)lockState;
-(void)dealloc;
-(id)init;
@end
