/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIconIndexNode.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconIndexMutableListObserver.h"
#import "SBIconListModelObserver.h"

@class NSCountedSet, SBIconIndexMutableList, NSMutableSet, SBFolderIcon, NSString, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBFolder : XXUnknownSuperclass <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver> {
	NSString* _displayName;
	NSString* _defaultDisplayName;
	BOOL _open;
	SBFolderIcon* _icon;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSCountedSet* _coalesceChangesRequests;
	unsigned _maxListCount;
	unsigned _maxIconCountInLists;
	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;
}
@property(assign, nonatomic, getter=isCancelable) BOOL cancelable;
@property(assign, nonatomic) SBFolderIcon* icon;
@property(assign, nonatomic) BOOL isOpen;
@property(copy, nonatomic) NSString* displayName;
@property(retain) NSString* defaultDisplayName;
@property(readonly, assign) unsigned maxListCount;
@property(readonly, retain) SBIconIndexMutableList* lists;
+(BOOL)isRootFolderClass;
+(BOOL)isNewsstandFolderClass;
-(void)iconList:(id)list didRemoveIcon:(id)icon;
-(void)iconList:(id)list didReplaceIcon:(id)icon withIcon:(id)icon3;
-(void)iconList:(id)list didAddIcon:(id)icon;
-(void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
-(id)nodeDescriptionWithPrefix:(id)prefix;
-(void)removeNodeObserver:(id)observer;
-(void)addNodeObserver:(id)observer;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(id)nodeIdentifier;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID forceReload:(BOOL)reload;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID;
-(void)startCoalescingContentChangesWithRequestID:(id)requestID;
-(BOOL)_isCoalescingContentChanges;
-(id)folderContainingIndexPath:(id)path relativeIndexPath:(id*)path2;
-(id)iconAtIndexPath:(id)indexPath;
-(id)indexPathForIconWithIdentifier:(id)identifier;
-(id)indexPathForIcon:(id)icon includingPlaceholders:(BOOL)placeholders;
-(id)indexPathForIcon:(id)icon;
-(id)indexPathForNodeIdentifier:(id)nodeIdentifier;
-(id)listContainingLeafIconWithIdentifier:(id)identifier;
-(id)listContainingIcon:(id)icon;
-(id)visibleIcons;
-(id)folderIcons;
-(id)leafIcons;
-(id)allIcons;
-(id)iconsOfClass:(Class)aClass;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)firstFreeSlotAvoidingFirstList;
-(id)performCascadingIconInsertion:(id)insertion listIndex:(unsigned)index iconIndex:(unsigned)index3;
-(id)performCascadingIconInsertion:(id)insertion indexPath:(id)path;
-(BOOL)canAddIcon;
-(id)addIcon:(id)icon;
-(void)removeIconAtIndexPath:(id)indexPath;
-(id)insertIcon:(id)icon atIndexPath:(id*)indexPath;
-(id)placeIcon:(id)icon atIndexPath:(id*)indexPath;
-(void)purgeLists;
-(unsigned)indexOfList:(id)list;
-(id)listAtIndex:(unsigned)index;
-(id)_createNewListWithIcon:(id)icon;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(void)removeEmptyList:(id)list;
-(id)addEmptyList;
-(void)_removeLists:(id)lists;
-(void)_setLists:(id)lists;
-(void)_addList:(id)list;
-(void)compactIconsAndLists;
-(BOOL)compactLists;
-(id)_listsForCompaction;
-(BOOL)canEditDisplayName;
-(BOOL)canRemoveIcons;
-(BOOL)shouldRemoveWhenEmpty;
-(BOOL)isFull;
-(BOOL)isEmpty;
-(unsigned)listCount;
-(void)removeFolderObserver:(id)observer;
-(void)addFolderObserver:(id)observer;
-(void)dealloc;
-(id)init;
-(id)initWithMaxListCount:(unsigned)maxListCount maxIconCountInLists:(unsigned)lists;
-(Class)listModelClass;
-(BOOL)isRootFolder;
-(BOOL)isNewsstandFolder;
@end
