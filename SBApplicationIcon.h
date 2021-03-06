/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLeafIcon.h"

@class UIImage, NSString;

__attribute__((visibility("hidden")))
@interface SBApplicationIcon : SBLeafIcon {
	NSString* _displayIdentifier;
	UIImage* _cachedSquareHomeScreenContentsImage;
}
+(id)_squareHomeScreenIconImagesMemoryPool;
-(id)applicationBundleID;
-(id)applicationDisplayID;
-(id)folderFallbackTitle;
-(id)folderTitleOptions;
-(void)setBadge:(id)badge;
-(id)automationID;
-(id)tags;
-(id)getUnmaskedIconImage:(int)image;
-(id)__loadUnmaskedIconImageForFormat:(int)format;
-(id)generateIconImage:(int)image;
-(BOOL)canGenerateImageInBackgroundForFormat:(int)format;
-(void)generateIconImageInBackground:(id)background;
-(id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)format complete:(id)complete;
-(id)__loadIconImageForDataSource:(id)dataSource format:(int)format;
-(id)application;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithApplication:(id)application;
@end

