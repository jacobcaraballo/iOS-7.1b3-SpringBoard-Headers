/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockScreenViewController, PCPersistentTimer, SBMediaController;

__attribute__((visibility("hidden")))
@interface SBLockScreenNowPlayingPluginController : XXUnknownSuperclass {
	SBLockScreenViewController* _viewController;
	SBMediaController* _mediaController;
	PCPersistentTimer* _disableTimer;
}
-(void)invalidateDisableTimer;
-(void)_startDisableTimer;
-(void)_disableNowPlayingPlugin;
-(BOOL)isNowPlayingPluginActive;
-(void)_updateNowPlayingPlugin;
-(void)_addObservers;
-(void)dealloc;
-(id)initWithLockScreenViewController:(id)lockScreenViewController mediaController:(id)controller;
@end

