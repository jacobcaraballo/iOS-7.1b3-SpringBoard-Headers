/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIconObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBLSApplicationPlaceholderLifecycleObserver.h"

@class SBLSApplicationWorkspaceObserver, NSMutableDictionary, NSMutableSet, SBApplicationController;

__attribute__((visibility("hidden")))
@interface SBApplicationPlaceholderController : XXUnknownSuperclass <SBIconObserver, SBLSApplicationPlaceholderLifecycleObserver> {
	SBApplicationController* _appController;
	SBLSApplicationWorkspaceObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSMutableSet* _removingProxies;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;
}
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;
+(id)sharedInstance;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(void)_postPlaceholdersDidChangeForAdded:(id)_postPlaceholders modified:(id)modified removed:(id)removed;
-(void)_downloadsEnded;
-(void)_finishPlaceholder:(id)placeholder;
-(void)_dropGrabbedIconIfNecessary:(id)necessary completion:(id)completion;
-(void)_removeDownloadingIcons:(id)icons saveState:(BOOL)state;
-(void)_swapDownloadingIcon:(id)icon forApplicationIcon:(id)applicationIcon proxy:(id)proxy;
-(void)_removePlaceholders:(id)placeholders forInstall:(BOOL)install;
-(void)_addPlaceholders:(id)placeholders;
-(void)_processPendingProxies;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)changed;
-(void)applicationPlaceholdersIconUpdated:(id)updated;
-(void)applicationPlaceholdersModified:(id)modified;
-(void)applicationPlaceholdersCancelled:(id)cancelled;
-(void)applicationPlaceholdersInstalled:(id)installed;
-(void)applicationPlaceholdersAdded:(id)added;
-(BOOL)hasDownloadedStoreApplication;
-(id)placeholderForDisplayID:(id)displayID;
-(id)placeholdersByDisplayID;
-(void)dealloc;
-(id)init;
@end

