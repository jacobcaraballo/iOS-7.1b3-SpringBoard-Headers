/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBBBulletinInfo.h"

@class UIImage, SBItemInfoLayoutCache, SBNotificationsSectionInfo, UIColor;

__attribute__((visibility("hidden")))
@interface SBNotificationsBulletinInfo : SBBBBulletinInfo {
	SBNotificationsSectionInfo* _sectionInfo;
	SBItemInfoLayoutCache* _layoutCache;
	UIImage* _icon;
	UIImage* _attachmentImage;
	CGSize _attachmentImageSize;
	float _secondaryTextHeight;
	BOOL _suppressingMessageForPrivacy;
	BOOL _isCachedMessageSuppressionValid;
	UIColor* _secondaryTextColor;
}
@property(readonly, assign, nonatomic, getter=isSuppressingMessageForPrivacy) BOOL suppressingMessageForPrivacy;
@property(assign, nonatomic) CGSize attachmentImageSize;
@property(retain, nonatomic) UIImage* attachmentImage;
@property(readonly, assign, nonatomic) UIColor* secondaryTextColor;
@property(retain, nonatomic) UIImage* icon;
@property(retain, nonatomic) SBNotificationsSectionInfo* sectionInfo;
-(void)populateReusableView:(id)view;
-(float)heightForReusableViewForBulletinViewController:(id)bulletinViewController layoutMode:(int)mode;
-(CGSize)_effectiveAttachmentImageSize;
-(id)_attachmentImageToDisplay;
-(id)_eventDateLabelForDisplay;
-(id)_eventDateLabel;
-(void)_configureEventDateLabel:(id)label;
-(id)_relevanceDateLabel;
-(void)_configureRelevanceDateLabel:(id)label;
-(XXStruct_Xx1ZfA)_relevanceDateLabelDescription;
-(id)_endDate;
-(id)_secondaryTextColor;
-(id)_secondaryTextToDisplay;
-(id)_secondaryText;
-(id)_subtitleTextColor;
-(id)_subtitleTextToDisplay;
-(id)_subtitleText;
-(id)_relevanceDateTextColor;
-(id)_primaryTextColor;
-(id)_primaryText;
-(void)invalidateCachedLayoutData;
-(Class)reusableViewClass;
-(id)identifier;
-(void)dealloc;
@end

