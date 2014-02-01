/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBScaleZoomSettings.h"

@class SBFAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBCrossfadeZoomSettings : SBScaleZoomSettings {
	BOOL _morphWithZoom;
	SBFAnimationSettings* _morphSettings;
}
@property(retain) SBFAnimationSettings* morphSettings;
@property(assign) BOOL morphWithZoom;
+(id)settingsControllerModule;
-(id)effectiveMorphAnimationSettings;
-(void)setDefaultValues;
@end

