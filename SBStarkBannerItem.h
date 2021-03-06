/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSDate, UIImage, NSMutableSet, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBStarkBannerItem : XXUnknownSuperclass {
	NSHashTable* _observers;
	NSMutableSet* _displayReasons;
}
@property(readonly, assign, nonatomic) NSArray* subActionLabels;
@property(readonly, assign, nonatomic) NSDate* sourceDate;
@property(readonly, assign, nonatomic) int effectiveDefaultActionType;
@property(readonly, assign, nonatomic) int defaultActionType;
@property(readonly, assign, nonatomic) UIImage* categoryImage;
@property(readonly, assign, nonatomic) NSString* subTitle;
@property(readonly, assign, nonatomic) NSString* title;
-(void)_callOrFaceTimeStateChanged;
-(BOOL)_inCallOrFaceTime;
-(BOOL)isStarkBannerItem;
-(BOOL)matchesContext:(id)context;
-(void)reloadDisplayProperties;
-(id)ignoreAction;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)dealloc;
-(id)init;
@end

