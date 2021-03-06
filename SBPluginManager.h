/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SBPluginManager : XXUnknownSuperclass {
	NSString* _pluginsDirectory;
	NSMutableDictionary* _plugins;
}
+(id)sharedInstance;
-(Class)loadPluginBundle:(id)bundle;
-(Class)loadPluginNamed:(id)named;
-(void)loadAllLaunchPlugins;
-(id)springBoardPluginsDirectory;
-(void)dealloc;
-(id)init;
@end

