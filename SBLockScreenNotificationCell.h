/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBNotificationCell.h"

@class UIScrollView, UIButton, UIView, SBUnlockActionContext, UILabel, SBLockScreenNotificationScrollView;
@protocol SBAwayListCellButtonHandler, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationCell : SBNotificationCell {
	BOOL _isTopCell;
	BOOL _drawsSeparators;
	float _currentContentAlpha;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	id<SBAwayListCellButtonHandler> _actionButtonHandler;
	SBLockScreenNotificationScrollView* _contentScrollView;
	SBUnlockActionContext* _unlockActionContext;
	UILabel* _unlockTextLabel;
	id<UIScrollViewDelegate> _delegate;
	BOOL _resetsScrollOnPluginWillDisable;
	float _contentScrollViewWidth;
}
@property(retain, nonatomic) UIButton* actionButton;
@property(assign, nonatomic) BOOL resetsScrollOnPluginWillDisable;
@property(readonly, assign, nonatomic) UIScrollView* contentScrollView;
@property(retain, nonatomic) SBUnlockActionContext* unlockActionContext;
@property(assign, nonatomic) float contentScrollViewWidth;
@property(assign, nonatomic) BOOL drawsSeparators;
@property(assign, nonatomic) BOOL isTopCell;
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;
+(float)primaryPaddingLeft;
+(BOOL)wantsUnlockActionText;
+(float)rowHeightForTitle:(id)title subtitle:(id)subtitle body:(id)body maxLines:(unsigned)lines attachmentSize:(CGSize)size datesVisible:(BOOL)visible rowWidth:(float)width includeUnlockActionText:(BOOL)text;
+(id)defaultColorForEventDate;
+(id)defaultColorForRelevanceDate;
+(id)defaultColorForSecondaryText;
+(id)defaultColorForSubtitleText;
+(id)defaultColorForPrimaryText;
+(id)defaultFontForEventDate;
+(id)defaultFontForRelevanceDate;
+(id)defaultFontForSecondaryText;
+(id)defaultFontForSubtitleText;
+(id)defaultFontForPrimaryText;
-(void)layoutSubviews;
-(void)_handleActionButtonPress:(id)press;
-(id)_buttonWithLabel:(id)label;
-(void)setButtonLabel:(id)label handler:(id)handler;
-(void)setRelevanceDateLabel:(id)label;
-(void)_updateUnlockText:(id)text;
-(void)_setSeparatorBackdropOverlayBlendMode:(int)mode;
-(int)_separatorBackdropOverlayBlendMode;
-(id)_vibrantTextColor;
-(void)setContentAlpha:(float)alpha;
-(void)scrollToOriginAnimated:(BOOL)originAnimated;
-(void)resetScrollView;
-(void)_notePluginWillDisable:(id)_notePlugin;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(id)_separatorColor;
@end

