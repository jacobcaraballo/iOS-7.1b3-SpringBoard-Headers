/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBUnlockActionContext : XXUnknownSuperclass {
	NSString* _lockLabel;
	NSString* _shortLockLabel;
	id _unlockAction;
	NSString* _identifier;
	float _fontSize;
	BOOL _requiresUnlock;
	BOOL _deactivateAwayController;
	BOOL _canBypassPinLock;
}
@property(readonly, assign, nonatomic) BOOL hasCustomUnlockLabel;
@property(assign, nonatomic) BOOL canBypassPinLock;
@property(assign, nonatomic) BOOL deactivateAwayController;
@property(assign, nonatomic) BOOL requiresUnlock;
@property(copy, nonatomic) id unlockAction;
@property(retain, nonatomic) NSString* shortLockLabel;
@property(retain, nonatomic) NSString* lockLabel;
@property(retain, nonatomic) NSString* identifier;
-(void)dealloc;
-(id)initWithLockLabel:(id)lockLabel shortLockLabel:(id)label unlockAction:(id)action identifier:(id)identifier;
@end
