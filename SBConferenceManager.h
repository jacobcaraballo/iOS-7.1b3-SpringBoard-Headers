/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBConferenceManager : XXUnknownSuperclass {
	BOOL _hasFaceTimeCapability;
	MGNotificationTokenStructRef _faceTimeCapabilityUpdateToken;
}
@property(readonly, assign) BOOL hasFaceTimeCapability;
+(void)initialize;
+(id)sharedInstance;
-(void)_faceTimeAppActivationStateChanged:(id)changed;
-(void)_updateStatusBar;
-(void)updateStatusBar;
-(void)_faceTimeCapabilityChanged:(id)changed;
-(id)currentCallStatusDisplayString;
-(id)currentCallRemoteUserId;
-(void)endFaceTime;
-(void)_faceTimeStateChanged:(id)changed;
-(void)invitedToIMAVChat:(id)imavchat;
-(void)dealloc;
-(BOOL)canStartFaceTime;
-(BOOL)inFaceTime;
-(BOOL)activeFaceTimeCallExists;
-(BOOL)faceTimeInvitationExists;
-(BOOL)faceTimeIsAvailable;
-(id)_faceTimeApp;
-(id)init;
@end
