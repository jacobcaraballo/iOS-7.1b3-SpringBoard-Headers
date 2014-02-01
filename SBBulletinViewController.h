/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;
@protocol SBBulletinViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBBulletinViewController : XXUnknownSuperclass {
	id<SBBulletinViewControllerDelegate> _delegate;
	NSMutableArray* _orderedSections;
	NSMutableDictionary* _sectionIDsToBulletins;
	NSMutableDictionary* _reusableViewIDsToUnregisteredCellClassNames;
	NSMutableDictionary* _reusableViewIDsToUnregisteredHeaderClassNames;
	BOOL _tableViewNeedsReload;
	id _owedWillAppearBlock;
	struct {
		unsigned suppliesInsertionAnimation : 1;
		unsigned suppliesRemovalAnimation : 1;
		unsigned suppliesReplacementAnimation : 1;
		unsigned decidesHighlight : 1;
		unsigned interestedInSelection : 1;
	} _bulletinViewControllerDelegateFlags;
}
@property(assign, nonatomic) CGRect tableViewFrame;
@property(assign, nonatomic) id<SBBulletinViewControllerDelegate> delegate;
+(id)reusableViewIdentifierForInfo:(id)info;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)hasContent;
-(void)invalidateCachedLayoutData;
-(void)invalidateSectionAndRowViewHeights;
-(id)viewForBulletin:(id)bulletin inSection:(id)section;
-(id)indexPathForBulletin:(id)bulletin inSection:(id)section;
-(id)sectionAtIndex:(unsigned)index;
-(unsigned)indexOfSection:(id)section;
-(void)reloadBulletins:(id)bulletins inSection:(id)section;
-(void)replaceWithBulletin:(id)bulletin bulletin:(id)bulletin2 inSection:(id)section;
-(void)moveBulletin:(id)bulletin inSection:(id)section beforeBulletin:(id)bulletin3 inSection:(id)section4;
-(void)removeBulletin:(id)bulletin inSection:(id)section;
-(void)addBulletin:(id)bulletin inSection:(id)section;
-(void)insertBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section;
-(void)replaceWithSection:(id)section section:(id)section2;
-(void)reloadSections:(id)sections;
-(void)moveSection:(id)section beforeSection:(id)section2;
-(void)removeSection:(id)section;
-(void)insertSection:(id)section beforeSection:(id)section2;
-(void)_performReplacementOperation:(id)operation;
-(void)_performMoveOperation:(id)operation;
-(void)_performRemovalOperation:(id)operation;
-(void)_performInsertionOperation:(id)operation;
-(BOOL)_replaceWithBulletin:(id)bulletin bulletin:(id)bulletin2 inSection:(id)section;
-(BOOL)_moveBulletin:(id)bulletin fromSection:(id)section toIndex:(unsigned)index inSection:(id)section4;
-(BOOL)_removeBulletin:(id)bulletin fromSection:(id)section;
-(BOOL)_insertBulletin:(id)bulletin atIndex:(unsigned)index inSection:(id)section;
-(void)_removeChildWidgetBulletinIfPossible:(id)possible;
-(void)_addChildWidgetBulletinIfPossible:(id)possible;
-(BOOL)_replaceWithSection:(id)section section:(id)section2;
-(BOOL)_moveSection:(id)section toIndex:(unsigned)index;
-(BOOL)_insertSection:(id)section atIndex:(unsigned)index;
-(BOOL)_removeSection:(id)section;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_reloadOrInvalidateTableViewData;
-(void)reloadTableViewDataIfNecessary;
-(void)_reloadTableViewData;
-(void)setTableViewNeedsReload;
-(BOOL)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)necessary;
-(BOOL)widgetViewController:(id)controller beginAppearanceTransitionIfNecessary:(BOOL)necessary animated:(BOOL)animated;
-(void)_invokeBlockWithAllVisibleWidgets:(id)allVisibleWidgets;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_viewIfLoaded;
-(void)viewDidLoad;
-(void)_updateEnhancedContrastSettings:(id)settings;
-(void)_registerOrQueueReusableViewClassForInfo:(id)info;
-(void)_registerOrQueueHeaderClassForInfo:(id)info;
-(void)_registerOrQueueCellClassForInfo:(id)info;
-(void)_registerOrQueueReusableClass:(Class)aClass forIdentifier:(id)identifier registerBlock:(id)block queueBlock:(id)block4;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

