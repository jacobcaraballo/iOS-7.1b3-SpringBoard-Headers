/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@protocol SBFLegibilitySettingsProvider <NSObject>
@property(readonly, assign, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;
@end

