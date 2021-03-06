/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBIconIndexNodeObserver.h"
#import "SBFolderView.h"

@class UIButton, SBNewsstandBackgroundView;

__attribute__((visibility("hidden")))
@interface SBNewsstandFolderView : SBFolderView <SBIconIndexNodeObserver> {
	UIButton* _storeButton;
	UIButton* _emptyImageButton;
	SBNewsstandBackgroundView* _backgroundView;
}
-(void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
-(void)_updateEmptyState;
-(void)_storeButtonTapped:(id)tapped;
-(void)_newsstandStoreAvailabilityDidChangeNotification:(id)_newsstandStoreAvailability;
-(void)_layoutSubviews;
-(void)setLegibilitySettings:(id)settings;
-(float)_titleFontSize;
-(BOOL)_showsTitle;
-(void)setFolder:(id)folder;
-(void)dealloc;
-(id)initWithFolder:(id)folder orientation:(int)orientation viewMap:(id)map;
@end

