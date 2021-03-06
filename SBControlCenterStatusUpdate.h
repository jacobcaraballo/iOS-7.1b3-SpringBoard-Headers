/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SBControlCenterStatusUpdate : XXUnknownSuperclass {
	NSString* _reason;
	NSArray* _statusStrings;
	int _type;
}
@property(assign, nonatomic) int type;
@property(copy, nonatomic) NSArray* statusStrings;
@property(copy, nonatomic) NSString* reason;
+(id)statusUpdateWithString:(id)string reason:(id)reason;
-(id)popStatusString;
-(void)addStatusString:(id)string;
-(void)dealloc;
-(id)init;
@end

