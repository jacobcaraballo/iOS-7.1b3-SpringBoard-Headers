/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "NSFastEnumeration.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBStringMetrics : XXUnknownSuperclass <NSFastEnumeration> {
	NSMutableArray* _fragments;
}
@property(readonly, retain) NSMutableArray* fragments;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(unsigned)fragmentCount;
-(void)addFragment:(id)fragment;
-(id)description;
-(void)dealloc;
-(id)init;
@end

