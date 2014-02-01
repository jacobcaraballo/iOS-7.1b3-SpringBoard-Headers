/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBDateLabelDelegate.h"
#import "SBUIBannerView.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBStarkBannerItemObserver.h"

@class UIImageView, SBStarkBannerItem, SBUIBannerContext, UILabel;
@protocol SBBulletinDateLabel;

__attribute__((visibility("hidden")))
@interface SBStarkBannerView : XXUnknownSuperclass <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {
	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	float _titleAscender;
	UILabel* _subTitleLabel;
	float _subTitleAscender;
	UILabel* _okButton;
	UIEdgeInsets _contentInsets;
	UILabel<SBBulletinDateLabel>* _relevanceDateLabel;
}
-(void)dateLabelDidChange:(id)dateLabel;
-(void)starkBannerItemDidReloadDisplayProperties:(id)starkBannerItem;
-(id)bannerContext;
-(void)layoutSubviews;
-(BOOL)_shouldShowOKButton;
-(void)_setRelevanceDate:(id)date;
-(id)_defaultRelevanceDateFont;
-(id)_titleFont;
-(BOOL)_hasSubtitle;
-(UIEdgeInsets)_contentInsetsForActionType:(int)actionType;
-(UIEdgeInsets)_categoryImageInsets;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithContext:(id)context;
@end

