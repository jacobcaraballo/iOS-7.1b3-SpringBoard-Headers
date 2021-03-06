/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface SBDefaultImageInfo : XXUnknownSuperclass {
	BOOL _hasSnapshot;
	BOOL _isDownscaled;
	int _launchingInterfaceOrientation;
	float _launchingScale;
	int _originalOrientation;
	int _currentOrientation;
	UIImage* _image;
	CGSize _launchingScreenSize;
}
@property(assign, nonatomic) BOOL isDownscaled;
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) BOOL hasSnapshot;
@property(assign, nonatomic) int currentOrientation;
@property(assign, nonatomic) int originalOrientation;
@property(assign, nonatomic) float launchingScale;
@property(assign, nonatomic) CGSize launchingScreenSize;
@property(assign, nonatomic) int launchingInterfaceOrientation;
-(id)description;
-(void)dealloc;
@end

