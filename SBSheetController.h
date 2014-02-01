/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, UIView, UIWindow, SBApplication;

__attribute__((visibility("hidden")))
@interface SBSheetController : XXUnknownSuperclass {
	NSMutableDictionary* _appToSheetMap;
	UIWindow* _presentationWindow;
	SBApplication* _topHostedApp;
	UIView* _topHostedAppView;
}
+(id)sharedInstance;
-(BOOL)sheetWantsProgress;
-(id)applicationForTopSheet;
-(void)dismissSheetsForApplication:(id)application;
-(void)dismissAllSheets;
-(BOOL)isShowingSheetsForApplication:(id)application;
-(BOOL)isShowingSheets;
-(void)sendStatusBarOrientationWillChangeToSheets:(int)sendStatusBarOrientation duration:(float)duration;
-(void)dismissRemoteViewIdentifier:(id)identifier forApplication:(id)application animated:(BOOL)animated;
-(BOOL)presentRemoteViewIdentifier:(id)identifier asSheetForApplication:(id)application requireTopApplication:(BOOL)application3 animated:(BOOL)animated;
-(void)dismissSheetView:(id)view animated:(BOOL)animated;
-(void)_tearDownSheet:(id)sheet;
-(void)presentSheetView:(id)view animated:(BOOL)animated;
-(void)_positionFakeStatusBarView:(id)view forOrientation:(int)orientation;
-(void)dealloc;
-(id)init;
@end

