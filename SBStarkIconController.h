/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBLeafIconDataSource.h"
#import "SBApplicationRestrictionObserver.h"
#import "SBFolderControllerDelegate.h"
#import "SBIconViewDelegate.h"
#import "SBIconModelDelegate.h"
#import "SBIconViewMapDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSSet, SBStarkFolderController, SBIconModel, SBStarkIconLayoutOverrideStrategy, _UILegibilitySettings, AVExternalDevice, NSIndexPath, SBStarkFakeIconOperationController, SBIcon, SBIconViewMap;

__attribute__((visibility("hidden")))
@interface SBStarkIconController : XXUnknownSuperclass <SBIconModelDelegate, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBIconViewMapDelegate, SBIconViewDelegate, SBLeafIconDataSource> {
	SBIconModel* _iconModel;
	SBIconViewMap* _iconViewMap;
	SBStarkFolderController* _rootFolderController;
	unsigned _interactionAffordances;
	AVExternalDevice* _externalDevice;
	_UILegibilitySettings* _legibilitySettings;
	SBIcon* _highlightedIcon;
	SBIcon* _launchingIcon;
	SBIcon* _focusedIconForLayout;
	NSIndexPath* _indexPathToResetTo;
	SBStarkFakeIconOperationController* _fakeIconOperationController;
	SBStarkIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	BOOL _geoSupported;
	NSSet* _visibleTags;
	NSSet* _hiddenTags;
	BOOL _invalidated;
	BOOL _hidden;
}
@property(retain, nonatomic) SBStarkIconLayoutOverrideStrategy* iconLayoutOverrideStrategy;
@property(retain, nonatomic) SBStarkFakeIconOperationController* fakeIconOperationController;
@property(readonly, assign, getter=isHidden) BOOL hidden;
-(BOOL)iconIsRecentlyUpdated:(id)updated;
-(BOOL)icon:(id)icon launchFromLocation:(int)location;
-(BOOL)iconAllowsLaunch:(id)launch;
-(BOOL)iconCompleteUninstall:(id)uninstall;
-(BOOL)iconAllowsUninstall:(id)uninstall;
-(id)iconFormattedAccessoryString:(id)string;
-(id)iconBadgeNumberOrString:(id)string;
-(int)iconAccessoryType:(id)type;
-(BOOL)iconProgressIsPaused:(id)paused;
-(float)iconProgressPercent:(id)percent;
-(int)iconProgressState:(id)state;
-(BOOL)iconAppearsInNewsstand:(id)newsstand;
-(BOOL)iconCanEllipsizeLabel:(id)label;
-(id)icon:(id)icon defaultImageWithFormat:(int)format;
-(id)icon:(id)icon imageWithFormat:(int)format;
-(unsigned)iconPriority:(id)priority;
-(id)iconDisplayName:(id)name;
-(BOOL)iconViewDisplaysBadges:(id)badges;
-(void)iconTapped:(id)tapped;
-(void)_launchIcon:(id)icon;
-(void)_clearHighlightedIcon;
-(BOOL)iconShouldAllowTap:(id)icon;
-(void)icon:(id)icon touchEnded:(BOOL)ended;
-(void)icon:(id)icon touchMoved:(id)moved;
-(void)iconTouchBegan:(id)began;
-(int)viewMap:(id)map locationForIcon:(id)icon;
-(id)windowForRecycledViewsInViewMap:(id)viewMap;
-(unsigned)viewMap:(id)map maxRecycledViewsOfClass:(Class)aClass;
-(Class)iconViewClassForIcon:(id)icon location:(int)location;
-(void)folderControllerDidEndScrolling:(id)folderController;
-(void)folderControllerShouldBeginEditing:(id)folderController;
-(void)folderControllerShouldClose:(id)folderController;
-(void)folderController:(id)controller draggedIconShouldDropFromListView:(id)draggedIcon;
-(BOOL)folderController:(id)controller draggedIconMightDropFromListView:(id)listView;
-(BOOL)folderController:(id)controller draggedIconDidMoveFromListView:(id)draggedIcon toListView:(id)listView;
-(BOOL)folderController:(id)controller draggedIconDidPauseAtLocation:(CGPoint)draggedIcon inListView:(id)listView;
-(Class)controllerClassForFolder:(id)folder;
-(Class)_controllerClassForFolderClass:(Class)folderClass;
-(void)applicationRestrictionController:(id)controller didUpdateVisibleTags:(id)tags hiddenTags:(id)tags3;
-(id)applicationIconForDisplayID:(id)displayID;
-(id)iconForLeafID:(id)leafID;
-(id)currentFolderController;
-(void)didDeleteIconState:(id)state;
-(void)didSaveIconState:(id)state;
-(BOOL)canSaveIconState:(id)state;
-(BOOL)canAddDownloadingIconForApplication:(id)application;
-(BOOL)canAddWebClip:(id)clip;
-(BOOL)supportsDock;
-(unsigned)maxColCountForListInRootFolderWithInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)maxRowCountForListInRootFolderWithInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)maxIconCountForDock;
-(unsigned)maxIconCountForListInFolderClass:(Class)folderClass;
-(unsigned)maxListCountForFolders;
-(void)_geoSupportChanged;
-(void)_installedAppsDidChange:(id)_installedApps;
-(void)_iconModelDidLayout:(id)_iconModel;
-(void)_iconModelWillLayout:(id)_iconModel;
-(void)_iconModelDidReloadIcons:(id)_iconModel;
-(void)_iconModelWillReloadIcons:(id)_iconModel;
-(void)_iconVisibilityChanged:(id)changed;
-(BOOL)_buttons:(id)buttons hasType:(int)type;
-(void)_physicalButtonsEnded:(id)ended withEvent:(id)event;
-(void)_physicalButtonsBegan:(id)began withEvent:(id)event;
-(void)_moveWithEvent:(id)event;
-(void)loadView;
-(void)_resetRootIconLists;
-(void)_prepareToResetRootIconLists;
-(id)iconsView;
-(void)setHidden:(BOOL)hidden withAnimationFactory:(id)animationFactory;
-(void)invalidate;
-(void)relayout;
-(id)rootFolder;
-(void)dealloc;
-(id)initWithInteractionAffordances:(unsigned)interactionAffordances externalDevice:(id)device;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

