/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBOperation : XXUnknownSuperclass {
	id _block;
	NSString* _name;
	BOOL _hasRun;
}
@property(readonly, assign, nonatomic) NSString* name;
+(id)operationWithBlock:(id)block name:(id)name;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(void)execute;
-(void)dealloc;
-(id)initWithBlock:(id)block name:(id)name;
@end

