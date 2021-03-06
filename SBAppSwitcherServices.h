/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "SpringBoard-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherServices : XXUnknownSuperclass <NSCopying> {
	NSMutableArray* _services;
}
@property(readonly, assign, nonatomic) NSMutableArray* services;
-(id)serviceBundleIdentifiers;
-(id)serviceForIdentifier:(id)identifier;
-(id)serviceForBundleIdentifier:(id)bundleIdentifier;
-(id)serviceAtIndex:(unsigned)index;
-(unsigned)count;
-(void)removeService:(id)service;
-(void)addService:(id)service;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithServices:(id)services zone:(NSZone*)zone;
@end

