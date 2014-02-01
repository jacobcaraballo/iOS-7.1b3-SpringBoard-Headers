/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "SBIconScrollViewDelegate.h"
#import "SBIconListPageControlDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBIconListPageControl, SBFolderTitleTextField, SBFolder, _UILegibilitySettings, NSArray, NSMutableSet, UIView, NSMutableArray, SBIconListView, SBIconViewMap, SBIconScrollView;
@protocol SBFolderViewDelegate;

__attribute__((visibility("hidden")))
@interface SBFolderView : XXUnknownSuperclass <SBIconScrollViewDelegate, SBIconListPageControlDelegate, UITextFieldDelegate> {
	NSMutableArray* _iconListViews;
	NSMutableSet* _scrollingDisabledReasons;
	SBIconListView* _rotatingIconList;
	int _minVisibleListViewIndex;
	int _maxVisibleListViewIndex;
	int _minAnimatingListViewIndex;
	int _maxAnimatingListViewIndex;
	int _disableUpdatingCurrentIconListCount;
	int _firstDisplayedColumnOnCurrentList;
	BOOL _animatedScrolling;
	BOOL _scalingViewIsBorrowed;
	SBIconViewMap* _viewMap;
	NSMutableArray* _scrollFrames;
	unsigned _scrollFrameCount;
	BOOL _isN90;
	SBIconListPageControl* _pageControl;
	SBIconScrollView* _scrollView;
	SBFolderTitleTextField* _titleTextField;
	UIView* _scalingView;
	BOOL _isEditing;
	BOOL _isScrolling;
	int _currentPageIndex;
	float _statusBarHeight;
	id<SBFolderViewDelegate> _delegate;
	SBFolder* _folder;
	int _orientation;
	_UILegibilitySettings* _legibilitySettings;
}
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) float statusBarHeight;
@property(readonly, assign, nonatomic) SBIconViewMap* viewMap;
@property(readonly, assign, nonatomic) unsigned iconListViewCount;
@property(readonly, assign, nonatomic) NSArray* iconListViews;
@property(readonly, assign, nonatomic) int currentPageIndex;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic, getter=isScrolling) BOOL scrolling;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
@property(retain, nonatomic) SBFolder* folder;
@property(assign, nonatomic) id<SBFolderViewDelegate> delegate;
@property(readonly, retain) SBIconScrollView* scrollView;
-(void)willMoveToWindow:(id)window;
-(void)_backgroundContrastDidChange:(id)_backgroundContrast;
-(void)_updateTitleLegibilitySettings;
-(id)_legibilitySettingsWithPrimaryColor:(id)primaryColor;
-(void)setIconPageIndicatorImageSetCache:(id)cache;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)_setFolderName:(id)name;
-(void)pageControl:(id)control didRecieveTouchInDirection:(int)direction;
-(void)iconScrollView:(id)view willSetContentOffset:(inout CGPoint*)offset;
-(void)iconScrollViewDidCancelTouchTracking:(id)iconScrollView;
-(void)iconScrollViewWillCancelTouchTracking:(id)iconScrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)cleanupAfterClosing;
-(void)prepareToOpen;
-(BOOL)_scrollViewThinksItsScrolling;
-(void)_purgeListViews;
-(void)noteUserIsInteractingWithIcons;
-(void)noteUserHasGrabbedIcon:(BOOL)icon;
-(void)updateIconListIndexAndVisibility:(BOOL)visibility;
-(int)lowestVisibleIconListIndexAndColumn:(int*)column columnsOnScreen:(int*)screen totalLists:(unsigned)lists columnsPerList:(unsigned)list;
-(void)updateIconListIndexAndVisibility;
-(void)_updateEditingStateAnimated:(BOOL)animated;
-(void)layoutIconLists:(double)lists domino:(BOOL)domino forceRelayout:(BOOL)relayout;
-(void)updateIconListViews;
-(void)resetIconListViews;
-(void)tearDownListViews;
-(id)currentIconListView;
-(id)iconListViewForTouch:(id)touch;
-(id)iconListViewAtPoint:(CGPoint)point;
-(id)iconListViewAtIndex:(unsigned)index;
-(int)_pageIndexForOffset:(float)offset;
-(void)_updateIconListFrames;
-(void)_updateIconListViews;
-(void)_resetIconListViews;
-(void)_addIconListViewsForModels:(id)models;
-(id)_createIconListViewForList:(id)list;
-(id)_interactionTintColor;
-(id)_iconListViewForList:(id)list;
-(id)_iconListViewAtIndex:(unsigned)index;
-(id)_currentIconListView;
-(void)_removeIconListView:(id)view;
-(void)_addIconListView:(id)view;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(float)_titleFontSize;
-(BOOL)_showsTitle;
-(void)_popDisableUpdateCurrentIconListCount;
-(void)_pushDisableUpdateCurrentIconListCount;
-(BOOL)_shouldDisableUpdatingCurrentIconList;
-(BOOL)_isValidPageIndex:(int)index;
-(float)_scrollOffsetForPageAtIndex:(int)index;
-(float)_scrollOffsetForFirstListView;
-(float)_pageWidth;
-(BOOL)_hasMinusPages;
-(unsigned)_minusPageCount;
-(float)_offsetToCenterPageControlInSpaceForPageControl;
-(id)_newPageControl;
-(CGRect)_frameForScalingView;
-(void)_layoutSubviews;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(void)fadeContentForMinificationFraction:(float)minificationFraction;
-(void)fadeContentForMagnificationFraction:(float)magnificationFraction;
-(void)didAnimate;
-(void)willAnimate;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)folder;
-(void)returnScalingView;
-(id)borrowScalingView;
-(CGRect)scalingViewFrame;
-(BOOL)setCurrentPageIndex:(int)index animated:(BOOL)animated;
-(BOOL)doesPageContainIconListView:(int)view;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)_updatePageControlToIndex:(int)index;
-(void)_setCurrentPageIndex:(int)index deferringPageControlUpdate:(BOOL)update;
-(void)_setCurrentPageIndex:(int)index;
-(void)_setAnimatedScrolling:(BOOL)scrolling;
-(void)_setScrollingDisabled:(BOOL)disabled forReason:(id)reason;
-(void)_endScrollingTest;
-(void)dealloc;
-(id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
@end

