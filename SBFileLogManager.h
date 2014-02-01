/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBFileLoggerDelegate.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBFileLogManager : XXUnknownSuperclass <SBFileLoggerDelegate> {
	NSMutableDictionary* _loggersByName;
}
+(id)sharedInstance;
-(void)loggerEnabledStateChanged:(id)changed;
-(void)_recordForLogNamed:(id)logNamed format:(id)format arguments:(char*)arguments;
-(void)_enableOrDisableLoggerIfNecessary:(id)necessary;
-(void)_addLogger:(id)logger;
-(BOOL)isClass:(Class)aClass aKindOfClass:(Class)aClass2;
-(void)_loadFileLoggers;
-(void)flush;
-(void)reloadFromDefaults;
-(id)loggerForName:(id)name;
-(void)dealloc;
-(id)init;
@end
