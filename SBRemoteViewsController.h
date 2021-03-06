/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBRemoteViewsController : XXUnknownSuperclass {
	NSMutableDictionary* _registeredRemoteViewInfos;
	NSMutableDictionary* _unregisteredRemoteViewInfos;
}
+(id)sharedInstance;
-(void)unregisterRemoteViewsForApplication:(id)application;
-(id)proxyRemoteViewForIdentifier:(id)identifier;
-(void)_sequesterProxyRemoteView:(id)view;
-(id)_newProxyRemoteViewForIdentifier:(id)identifier;
-(void)unregisterRemoteIdentifier:(id)identifier application:(id)application;
-(void)registerRemoteContextID:(unsigned)anId forIdentifier:(id)identifier opaque:(BOOL)opaque size:(CGSize)size application:(id)application;
-(void)unregisterProxyRemoteView:(id)view;
-(void)dealloc;
-(id)init;
@end

