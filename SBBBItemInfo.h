/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBBBItemInfo : XXUnknownSuperclass {
	id _representedObject;
}
@property(readonly, assign, nonatomic) NSString* identifier;
@property(readonly, assign, nonatomic) id representedObject;
+(id)infoWithRepresentedObject:(id)representedObject;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)invalidateCachedLayoutData;
-(float)heightForReusableViewForBulletinViewController:(id)bulletinViewController layoutMode:(int)mode;
-(void)populateReusableView:(id)view;
-(Class)reusableViewClass;
-(void)dealloc;
-(id)initWithRepresentedObject:(id)representedObject;
@end

