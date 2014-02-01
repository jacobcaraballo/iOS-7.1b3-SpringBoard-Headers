/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUIPasscodeLockViewDelegate.h"
#import "SBAlert.h"


__attribute__((visibility("hidden")))
@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate> {
	BOOL _attemptingUnlock;
}
-(void)_passcodeLockViewPasscodeEntered:(id)entered viaMesa:(BOOL)mesa;
-(void)passcodeLockViewCancelButtonPressed:(id)pressed;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
-(void)passcodeLockViewPasscodeEntered:(id)entered;
-(void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
-(void)deactivate;
-(BOOL)hasTranslucentBackground;
-(id)alertDisplayViewWithSize:(CGSize)size;
@end
