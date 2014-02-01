/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, NSSet, NSOrderedSet, NSLock;

__attribute__((visibility("hidden")))
@interface SBPlatformController : XXUnknownSuperclass {
	NSString* _currentConfigurationName;
	long _defaultIconInfoOnce;
	NSDictionary* _defaultStarkIconState;
	NSDictionary* _defaultIconState;
	NSOrderedSet* _defaultIconStateDisplayIdentifiers;
	NSLock* _iconStateDisplayIdentifiersLock;
	NSSet* _iconStateDisplayIdentifiers;
	NSString* _localizedDeviceName;
	BOOL _hasGasGauge;
	BOOL _supportsOpenGLES2;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	BOOL _singleCoreDevice;
}
@property(readonly, retain) NSDictionary* defaultStarkIconState;
@property(readonly, retain) NSDictionary* defaultIconState;
@property(readonly, retain) NSOrderedSet* defaultIconStateDisplayIdentifiers;
@property(readonly, retain) NSSet* iconStateDisplayIdentifiers;
@property(readonly, assign) BOOL hasGasGauge;
@property(readonly, assign) BOOL supportsOpenGLES2;
@property(readonly, assign, getter=isInternalInstall) BOOL internalInstall;
@property(readonly, assign, getter=isCarrierInstall) BOOL carrierInstall;
@property(readonly, assign, getter=isSingleCoreDevice) BOOL singleCoreDevice;
+(id)uniqueDeviceIdentifier;
+(id)deviceClass;
+(id)productType;
+(id)hardwareModel;
+(id)systemBuildVersion;
+(id)sharedInstance;
-(void)_visibleIdentifiersChanged:(id)changed;
-(void)_loadDefaultIconInfoIfNecessary;
-(id)_currentConfigurationName;
-(BOOL)isN90Like;
-(id)localizedPlatformName;
-(void)registerForIconVisibilityChanges;
-(void)dealloc;
-(id)init;
@end

