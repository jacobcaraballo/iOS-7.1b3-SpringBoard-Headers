/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSIMLockEntryAlertView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBSIMLockPUKEntryAlertView : SBSIMLockEntryAlertView {
	int _state;
	NSString* _enteredPUKCode;
	NSString* _newPIN;
}
-(void)_attemptPUKUnlock;
-(id)_pukAttemptsRemainingLabel;
-(void)_unlock;
-(void)setupFailureState;
-(void)setupSuccess;
-(id)label;
-(id)titleText;
-(void)dealloc;
@end

