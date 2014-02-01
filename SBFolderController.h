/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBFolderObserver.h"
#import "SBFolderControllerDelegate.h"
#import "SBFolderViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBFolder, _UILegibilitySettings, NSArray, SBFolderContext, NSTimer, SBIcon, SBIconAnimator, SBFolderControllerAnimationContext, SBFolderView, SBIconViewMap, NSMapTable;

__attribute__((visibility("hidden")))
@interface SBFolderController : XXUnknownSuperclass <SBFolderControllerDelegate, SBFolderObserver, SBFolderViewDelegate> {
	SBIconViewMap* _viewMap;
	SBFolderView* _contentView;
	BOOL _didAutoScroll;
	NSTimer* _autoScrollTimer;
	CGPoint _dragPausePoint;
	NSTimer* _dragPauseTimer;
	NSTimer* _closeFolderTimer;
	BOOL _grabbedIconHasEverEnteredFolderView;
	NSMapTable* _editingContextsByFolder;
	SBIconAnimator* _iconAnimator;
	BOOL _isOpen;
	BOOL _isEditing;
	BOOL _isAnimating;
	BOOL _active;
	BOOL _rotating;
	id<SBFolderControllerDelegate> _delegate;
	SBFolder* _folder;
	int _orientation;
	_UILegibilitySettings* _legibilitySettings;
	SBFolderController* _outerFolderController;
	SBFolderController* _innerFolderController;
	SBFolderControllerAnimationContext* _animationContext;
	SBIcon* _grabbedIcon;
	SBFolderContext* _lastContext;
}
@property(retain, nonatomic) SBFolderContext* lastContext;
@property(retain, nonatomic) SBIcon* grabbedIcon;
@property(assign, nonatomic, getter=isRotating) BOOL rotating;
@property(assign, nonatomic, getter=isActive) BOOL active;
@property(retain, nonatomic) SBFolderControllerAnimationContext* animationContext;
@property(retain, nonatomic) SBFolderController* innerFolderController;
@property(assign, nonatomic) SBFolderController* outerFolderController;
@property(readonly, assign, nonatomic) unsigned iconListViewCount;
@property(readonly, assign, nonatomic) NSArray* iconListViews;
@property(readonly, assign, nonatomic) SBFolderView* contentView;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic, getter=isAnimating) BOOL animating;
@property(readonly, assign, nonatomic, getter=isScrolling) BOOL scrolling;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic, getter=isOpen) BOOL open;
@property(readonly, assign, nonatomic) int currentPageIndex;
@property(assign, nonatomic) int orientation;
@property(retain, nonatomic) SBFolder* folder;
@property(assign, nonatomic) id<SBFolderControllerDelegate> delegate;
+(float)wallpaperScaleForDepth:(unsigned)depth;
+(unsigned)maxFolderDepth;
+(Class)listViewClass;
-(void)folder:(id)folder didRemoveLists:(id)lists atIndexes:(id)indexes;
-(void)folder:(id)folder didAddList:(id)list;
-(void)_noteFolderListsDidChange;
-(void)folderViewShouldBeginEditing:(id)folderView;
-(void)folderViewShouldClose:(id)folderView;
-(void)folderViewDidEndScrolling:(id)folderView;
-(void)folderViewWillBeginScrolling:(id)folderView;
-(void)folderView:(id)view currentPageIndexDidChange:(int)currentPageIndex;
-(Class)iconListViewClassForFolderView:(id)folderView;
-(void)folderControllerDidEndScrolling:(id)folderController;
-(void)folderControllerShouldBeginEditing:(id)folderController;
-(void)folderControllerShouldClose:(id)folderController;
-(void)folderController:(id)controller draggedIconShouldDropFromListView:(id)draggedIcon;
-(BOOL)folderController:(id)controller draggedIconMightDropFromListView:(id)listView;
-(BOOL)folderController:(id)controller draggedIconDidMoveFromListView:(id)draggedIcon toListView:(id)listView;
-(BOOL)folderController:(id)controller draggedIconDidPauseAtLocation:(CGPoint)draggedIcon inListView:(id)listView;
-(Class)controllerClassForFolder:(id)folder;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)currentIndexPath;
-(void)popToIndexPath:(id)indexPath;
-(BOOL)popFolderAnimated:(BOOL)animated completion:(id)completion;
-(BOOL)pushFolder:(id)folder animated:(BOOL)animated completion:(id)completion;
-(void)_animateFloatyFolderOpen:(BOOL)open settings:(id)settings completion:(id)completion;
-(void)_animateNewsstandFolderOpen:(BOOL)open settings:(id)settings completion:(id)completion;
-(void)_setInnerFolderOpen:(BOOL)open animated:(BOOL)animated completion:(id)completion;
-(BOOL)_iconAppearsOnCurrentPage:(id)page;
-(BOOL)_listIndexIsVisible:(unsigned)visible;
-(unsigned)_depth;
-(id)_newAnimatorForZoomUp:(BOOL)zoomUp;
-(void)_clearIconAnimator;
-(void)unscatterAnimated:(BOOL)animated afterDelay:(double)delay withCompletion:(id)completion;
-(void)scatterAnimated:(BOOL)animated withCompletion:(id)completion;
-(void)noteGrabbedIcon:(id)icon locationDidChangeWithTouch:(id)location;
-(void)noteGrabbedIconDidChange:(id)noteGrabbedIcon;
-(void)noteUserIsInteractingWithIcons;
-(void)_updateAutoScrollForTouch:(id)touch;
-(void)_cancelAutoScroll;
-(void)_doAutoScrollByPageCount:(int)count;
-(void)_scrollRight:(id)right;
-(void)_scrollLeft:(id)left;
-(void)_updateDragPauseForTouch:(id)touch;
-(void)_dragPauseTimerFired:(id)fired;
-(BOOL)_canDropIconInListView:(id)listView;
-(void)_resetDragPauseTimerForPoint:(CGPoint)point inIconListView:(id)iconListView;
-(void)_cancelDragPauseTimer;
-(void)_updateCloseFolderForTouch:(id)touch;
-(void)_setCloseFolderTimerIfNecessary;
-(void)_closeFolderTimerFired;
-(void)_cancelCloseFolderTimer;
-(void)_cancelAllInteractionTimers;
-(BOOL)_allowUserInteraction;
-(id)_viewMap;
-(unsigned)_indexOfIconListForIcon:(id)icon;
-(void)_compactFolder;
-(id)_addEmptyListForce:(BOOL)force;
-(id)addEmptyListView;
-(void)layoutIconLists:(double)lists domino:(BOOL)domino forceRelayout:(BOOL)relayout;
-(void)_resetIconLists;
-(void)prepareToTearDown;
-(void)_updateAssociatedControllerStateAnimated:(BOOL)animated;
-(void)fadeContentForMinificationFraction:(float)minificationFraction;
-(void)fadeContentForMagnificationFraction:(float)magnificationFraction;
-(void)didAnimate;
-(void)willAnimate;
-(void)setDockVerticalStretch:(float)stretch;
-(void)setDockOffscreenFraction:(float)fraction;
-(id)dockListView;
-(BOOL)hasDock;
-(BOOL)isDisplayingIcon:(id)icon;
-(id)iconListViewContainingIcon:(id)icon;
-(id)iconListViewForTouch:(id)touch;
-(id)iconListViewAtIndex:(unsigned)index;
-(BOOL)doesPageContainIconListView:(int)view;
-(id)currentIconListView;
-(BOOL)_restoreFromContext:(id)context;
-(id)_createContext;
-(id)folderControllerForFolder:(id)folder;
-(id)deepestFolderController;
-(BOOL)setCurrentPageIndexToListContainingIcon:(id)listContainingIcon animated:(BOOL)animated;
-(BOOL)setCurrentPageIndex:(int)index animated:(BOOL)animated;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(id)_iconPageIndicatorImageSetCache;
-(Class)_contentViewClass;
-(void)_invalidate;
-(void)dealloc;
-(id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
@end

