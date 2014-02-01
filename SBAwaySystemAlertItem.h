/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAwayListItem.h"

@class SBAlertItem, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SBAwaySystemAlertItem : SBAwayListItem {
	SBAlertItem* _currentAlert;
	NSString* _title;
	UIImage* _appImage;
	NSString* _message;
	int _displayedButtonIndex;
	BOOL _isAlarm;
}
@property(retain) SBAlertItem* currentAlert;
@property(readonly, retain) NSString* title;
@property(readonly, retain) NSString* message;
@property(readonly, assign) BOOL isAlarm;
-(void)buttonPressed;
-(id)sortDate;
-(id)iconImage;
-(void)dealloc;
-(id)initWithSystemAlert:(id)systemAlert;
-(id)init;
@end
