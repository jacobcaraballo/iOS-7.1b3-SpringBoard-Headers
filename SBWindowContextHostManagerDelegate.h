/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBWindowContextHostManagerDelegate <NSObject>
@optional
-(BOOL)windowContextHostManager:(id)manager shouldEnableContextHostingForRequester:(id)requester priority:(int)priority;
-(id)windowContextHostManager:(id)manager overrideRequester:(id)requester;
@end

