/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSCountedSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBCountedMap : XXUnknownSuperclass {
	NSCountedSet* _countedKeys;
	NSMutableDictionary* _map;
}
-(void)checkinValues:(id)values;
-(void)checkinValue:(id)value;
-(id)checkoutValueForKey:(id)key creationBlock:(id)block;
-(void)dealloc;
-(id)init;
@end

