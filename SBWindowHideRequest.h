/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBWindowHideRequest : XXUnknownSuperclass {
	NSString* _reason;
	SBWindowLevelRange_struct _windowLevelRange;
}
@property(copy) NSString* reason;
@property(assign) SBWindowLevelRange_struct windowLevelRange;
+(id)hideRequestWithWindowLevelRange:(SBWindowLevelRange_struct)windowLevelRange reason:(id)reason;
-(id)description;
-(void)dealloc;
@end
