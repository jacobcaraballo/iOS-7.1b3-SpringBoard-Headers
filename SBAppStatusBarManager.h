/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface SBAppStatusBarManager : XXUnknownSuperclass {
	NSHashTable* _disableAlphaChangeAssertions;
	NSHashTable* _disableUserInteractionChangeAssertions;
	NSMutableOrderedSet* _windowLevelOverrideReasons;
	NSMutableDictionary* _windowLevelOverrideMap;
	float _defaultWindowLevel;
}
@property(assign, getter=isStatusBarUserInteractionEnabled) BOOL statusBarUserInteractionEnabled;
+(id)sharedInstance;
-(void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)assertion;
-(void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)assertion;
-(void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)assertion;
-(void)_addDisableAppStatusBarAlphaChangesAssertion:(id)assertion;
-(void)_removeAssertion:(id)assertion fromAssertions:(id)assertions;
-(void)_addAssertion:(id)assertion toAssertions:(id)assertions;
-(void)_updateWindowLevel;
-(void)removeWindowLevelOverrideReason:(id)reason;
-(void)setWindowLevel:(float)level forOverrideReason:(id)overrideReason;
-(void)setDefaultWindowLevel:(float)level;
-(void)hideStatusBar;
-(void)showStatusBar;
-(BOOL)isStatusBarHidden;
-(void)setStatusBarAlpha:(float)alpha;
-(void)_setStatusBarValueForPropertyWithAssertions:(id)assertions setter:(id)setter;
-(id)_descriptionForPropertyWithAssertions:(id)assertions;
-(void)dealloc;
-(id)init;
@end
