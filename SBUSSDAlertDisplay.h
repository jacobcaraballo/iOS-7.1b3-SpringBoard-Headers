/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlertView.h"
#import "UITextFieldDelegate.h"

@class UIView, TPButton, UITextView, UIActivityIndicatorView, UITextField;

__attribute__((visibility("hidden")))
@interface SBUSSDAlertDisplay : SBAlertView <UITextFieldDelegate> {
	TPButton* _dismissButton;
	TPButton* _replyButton;
	UIView* _notifyView;
	UIView* _replyView;
	UITextView* _charsRemainingView;
	UIActivityIndicatorView* _progressIndicator;
	UITextField* _responseField;
	UITextView* _textView;
	UITextView* _responseMessageView;
	BOOL _allowsResponse;
}
@property(assign) BOOL allowsResponse;
-(void)_cancelClicked;
-(void)_okayClicked;
-(void)_replyClicked;
-(void)_textChanged:(id)changed;
-(void)_updateCharsRemaining;
-(BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;
-(void)alertStringAvailable:(id)available;
-(void)_setupResponseBar;
-(void)layoutSubviews;
-(void)alertDisplayBecameVisible;
-(void)alertDisplayWillBecomeVisible;
-(void)displayString:(id)string;
-(void)_centerTextView:(id)view inRect:(CGRect)rect;
-(id)_responseMessageView;
-(id)_textView;
-(id)_charsRemainingView;
-(void)dealloc;
-(id)_replyView;
-(id)_notifyView;
-(id)initWithFrame:(CGRect)frame;
@end

