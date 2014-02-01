/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class _UILegibilitySettings, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface SBFolderTitleTextField : XXUnknownSuperclass {
	BOOL _showingEditUI;
	_UILegibilityView* _legibilityView;
	BOOL _allowsEditing;
	_UILegibilitySettings* _legibilitySettings;
}
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) float fontSize;
@property(assign, nonatomic) BOOL allowsEditing;
+(id)_clearButtonImage;
+(id)_editBackgroundImage;
+(void)warmupIfNecessary;
-(id)_clearButtonImage;
-(id)_backgroundImage;
-(void)_updateLegibility;
-(float)_legibilityStrength;
-(CGRect)clearButtonRectForBounds:(CGRect)bounds;
-(CGRect)editingRectForBounds:(CGRect)bounds;
-(CGRect)textRectForBounds:(CGRect)bounds;
-(CGRect)_textRectForBounds:(CGRect)bounds;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)setText:(id)text;
-(void)_updateLegibilityView;
-(void)setShowsEditUI:(BOOL)ui animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

