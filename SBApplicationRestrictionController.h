/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "MCProfileConnectionObserver.h"

@class NSMutableDictionary, NSMutableSet, NSSet, NSHashTable;
@protocol SBApplicationRestrictionDataSource;

__attribute__((visibility("hidden")))
@interface SBApplicationRestrictionController : XXUnknownSuperclass <MCProfileConnectionObserver> {
	id<SBApplicationRestrictionDataSource> _dataSource;
	NSHashTable* _observers;
	NSMutableDictionary* _tagValidityMap;
	NSMutableDictionary* _validTagsByDisplayIdentifier;
	MGNotificationTokenStructRef _tagsNotificationToken;
	NSMutableSet* _enabledTags;
	NSMutableDictionary* _ratingRanksByDisplayIdentifier;
	BOOL _hasSMSCapability;
	NSSet* _restrictedDisplayIdentifiers;
	BOOL _showInternalApps;
	BOOL _hasHideNonDefaultSystemAppsCapability;
	BOOL _showAllSystemApps;
	BOOL _canPostRestrictionState;
}
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)_postRestrictionStateToObservers:(id)observers;
-(void)_postRestrictionState;
-(void)updateVisibilityPreferences;
-(void)updateRestrictions;
-(void)beginPostingChanges;
-(void)noteVisibilityStateDidChange;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)noteApplicationIdentifiers modified:(id)modified removed:(id)removed;
-(BOOL)isDisplayIdentifierRestricted:(id)restricted;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)dealloc;
-(id)init;
-(id)initWithDataSource:(id)dataSource;
@end

