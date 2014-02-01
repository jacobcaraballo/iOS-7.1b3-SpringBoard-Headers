/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface SBFakeDuet : XXUnknownSuperclass {
	NSArray* _triggers;
	NSArray* _appsToLaunch;
	id _recommendationHandler;
}
@property(copy, nonatomic) id recommendationHandler;
@property(retain, nonatomic) NSArray* appsToLaunch;
@property(retain, nonatomic) NSArray* triggers;
+(id)sharedInstance;
-(void)_frontDisplayChanged:(id)changed;
-(void)_switcherRevealed:(id)revealed;
-(void)_wake:(id)wake;
-(void)_handleTrigger:(id)trigger;
-(void)_refreshAppsToLaunch;
-(void)_refreshTriggers;
-(void)setAppLaunchRecommendationHandler:(id)handler;
-(void)okToLaunch:(id)launch forReasons:(id)reasons withHandler:(id)handler;
-(void)dealloc;
-(id)init;
@end
