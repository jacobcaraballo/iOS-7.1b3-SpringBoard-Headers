/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockOverlayContext, SBAwayViewPluginController, NSString;

__attribute__((visibility("hidden")))
@interface SBLockScreenPlugin : XXUnknownSuperclass {
	SBAwayViewPluginController* _controller;
	SBLockOverlayContext* _overlay;
	NSString* _bundleName;
}
@property(copy) NSString* bundleName;
@property(retain) SBLockOverlayContext* overlay;
@property(retain) SBAwayViewPluginController* controller;
-(void)dealloc;
@end

