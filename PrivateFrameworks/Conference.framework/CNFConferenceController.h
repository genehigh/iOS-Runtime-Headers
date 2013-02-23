/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class IMAVChat, NSMutableArray;

@interface CNFConferenceController : NSObject <IMAVControllerDelegate, IMAVInvitationControllerDelegate> {
    IMAVChat *_activeAVChat;
    NSMutableArray *_avChatList;
    BOOL _isConnected;
    int _type;
}

@property(readonly) IMAVChat * avChat;
@property(readonly) BOOL isFullConferenceCapable;
@property(readonly) unsigned int localCameraType;
@property(readonly) struct CGSize { float x1; float x2; } remoteCameraAspectRatio;
@property(readonly) unsigned int remoteCameraOrientation;
@property(readonly) unsigned int remoteCameraType;
@property(readonly) int type;

+ (int)conferenceControllerType;
+ (BOOL)connect;
+ (BOOL)disconnect;
+ (struct __CFPhoneNumber { }*)newPhoneNumberRefForDestinationId:(id)arg1 useNetworkCountryCode:(BOOL)arg2;
+ (id)sharedInstance;

- (BOOL)_activeChatExists;
- (BOOL)_chat:(id)arg1 isCrossInvitationWithChat:(id)arg2;
- (void)_cleanUpAfterAVChat;
- (id)_countryCode;
- (unsigned int)_currentChatState;
- (void)_handleAVChatStateChangeFromState:(unsigned int)arg1 to:(unsigned int)arg2 withReason:(unsigned int)arg3;
- (void)_handleCanceledInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (void)_handleConferenceConnecting:(id)arg1;
- (void)_handleConferenceEnded:(id)arg1 withReason:(unsigned int)arg2 withError:(int)arg3;
- (void)_handleEndAVChat:(id)arg1 withReason:(unsigned int)arg2 error:(int)arg3;
- (void)_handleInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (id)_imHandleFromID:(id)arg1 countryCode:(id)arg2;
- (id)_imHandleFromURL:(id)arg1;
- (id)_initWithType:(int)arg1;
- (void)acceptFaceTimeInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (void)activateFaceTime;
- (int)activationState;
- (id)avChat;
- (id)avChatForConferenceID:(id)arg1;
- (void)avChatStateChanged:(id)arg1;
- (void)avChatStateChangedFrom:(unsigned int)arg1 to:(unsigned int)arg2 reason:(unsigned int)arg3;
- (BOOL)canSendFaceTimeInvitationTo:(id)arg1;
- (void)conference:(id)arg1 handleMissedInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedCancelledInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedInvitationFromIMHandle:(id)arg2;
- (void)connectToService;
- (id)currentCallConnectedDate;
- (id)currentCallRemoteUserId;
- (void)dealloc;
- (void)declineFaceTimeInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (void)disconnectFromService;
- (void)endFaceTime;
- (void)faceTimeHistoryChanged:(id)arg1;
- (BOOL)faceTimeInvitationExists;
- (BOOL)faceTimeIsAvailable;
- (BOOL)faceTimeMuted;
- (BOOL)faceTimePaused;
- (BOOL)havePreviouslyConferencedWithID:(id)arg1;
- (void)iChatAgentConnected;
- (void)iChatAgentDisconnected;
- (BOOL)inFaceTime;
- (id)init;
- (void)inviteFailedFromIMHandle:(id)arg1 reason:(int)arg2;
- (void)invitedToIMAVChat:(id)arg1;
- (BOOL)isFullConferenceCapable;
- (BOOL)isInvitationListener;
- (struct CGSize { float x1; float x2; })localCameraAspectRatioForOrientation:(unsigned int)arg1;
- (unsigned int)localCameraType;
- (struct CGSize { float x1; float x2; })remoteCameraAspectRatio;
- (unsigned int)remoteCameraOrientation;
- (unsigned int)remoteCameraType;
- (id)remoteParticipant;
- (id)sendFaceTimeInvitationTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)sendFaceTimeInvitationTo:(id)arg1;
- (void)setFaceTimeMuted:(BOOL)arg1;
- (void)setFaceTimePaused:(BOOL)arg1;
- (void)setNeedsPushReliability:(BOOL)arg1;
- (int)type;
- (BOOL)validFaceTimeAccountExistsForDestinationID:(id)arg1;

@end