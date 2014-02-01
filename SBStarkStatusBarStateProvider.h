/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarStateProvider.h"

@class NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider {
	BOOL _oldAggregatorTimeCString[64];
	BOOL _timeCString[64];
	NSDateFormatter* _timeFormatter;
	NSString* _inCallDetail;
}
+(BOOL)_itemIsIgnored:(int)ignored;
-(void)_callDurationChanged;
-(void)_resetTimeItemFormatter;
-(id)_timeFormatter;
-(void)_composePostDataFromAggregatorData:(XXStruct_8iXKhD*)aggregatorData;
-(BOOL)_shouldPostForUpdatesToNonItemData:(const XXStruct_8iXKhD*)nonItemData;
-(BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_8iXKhD*)aggregatorData;
-(id)doubleHeightStatusStringForStyle:(int)style;
-(void)dealloc;
-(id)init;
@end

