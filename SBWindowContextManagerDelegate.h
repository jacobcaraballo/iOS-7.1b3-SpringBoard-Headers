/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBWindowContextManagerDelegate <NSObject>
-(void)windowContextManager:(id)manager didStopTrackingContextsForScreen:(id)screen;
-(void)windowContextManager:(id)manager willStartTrackingContextsForScreen:(id)screen;
-(BOOL)windowContextManager:(id)manager shouldAddContext:(id)context;
@end

