/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject;
@protocol OS_dispatch_source, SBAssertionDelegate;

__attribute__((visibility("hidden")))
@interface SBAssertion : XXUnknownSuperclass {
	id<SBAssertionDelegate> _delegate;
	NSString* _reason;
	unsigned _clientPort;
	NSObject<OS_dispatch_source>* _source;
}
@property(readonly, assign, nonatomic) NSString* reason;
@property(assign, nonatomic) id<SBAssertionDelegate> delegate;
-(id)description;
-(void)dealloc;
-(id)initWithClientPort:(unsigned)clientPort reason:(id)reason;
@end

