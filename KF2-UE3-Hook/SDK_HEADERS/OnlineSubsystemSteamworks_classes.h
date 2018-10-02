/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ELobbyDistance
/*enum ELobbyDistance
{
	LD_Best                                            = 0,
	LD_Close                                           = 1,
	LD_Far                                             = 2,
	LD_Any                                             = 3,
	LD_MAX                                             = 4
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
/*enum ELeaderboardSortType
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
/*enum ELeaderboardFormat
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_MAX                                             = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
/*enum ELeaderboardUpdateType
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
/*enum ELeaderboardRequestType
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
/*enum EMuteType
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.KFWorkshopSteamworks
// 0x0144 (0x01B4 - 0x0070)
class UKFWorkshopSteamworks : public UTWOnlineUGCInterface
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0070 (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           ServerSubscribedWorkshopItems;                    		// 0x0078 (0x0010) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      CurrentDownloads;                                 		// 0x0088 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0098 (0x0048) UNKNOWN PROPERTY: MapProperty OnlineSubsystemSteamworks.KFWorkshopSteamworks.WorkshopIDItemNames
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x00E0 (0x0048) UNKNOWN PROPERTY: MapProperty OnlineSubsystemSteamworks.KFWorkshopSteamworks.PackageWorkshopIDs
	unsigned char                                      UnknownData02[ 0x48 ];                            		// 0x0128 (0x0048) UNKNOWN PROPERTY: MapProperty OnlineSubsystemSteamworks.KFWorkshopSteamworks.InstallTimestamps
	struct FScriptDelegate                             ProgressDelegate;                                 		// 0x0170 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0174 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct FUniqueNetId >                      ServerSubscribedCopy;                             		// 0x0180 (0x0010) [0x0000000000000000]              
	DWORD                                              ServerFilesDirty : 1;                             		// 0x0190 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              NeedsTicking : 1;                                 		// 0x0190 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TickInterval;                                     		// 0x0194 (0x0004) [0x0000000000000000]              
	float                                              TickTime;                                         		// 0x0198 (0x0004) [0x0000000000000000]              
	struct FPointer                                    WorkshopDownloader;                               		// 0x019C (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __UGCDownloadProgressDelegate__Delegate;          		// 0x01A4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x01A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3165 ];

		return pClassPointer;
	};

	void InstallAllItems ( );
	void UpdateWorkshopFiles ( );
	void Initialize ( );
	void GetUGCForPackage ( );
	void ClearUGCDownloadProgressDelegate ( );
	void SetUGCDownloadProgressDelegate ( );
	void UGCDownloadProgressDelegate ( );
};

UClass* UKFWorkshopSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0000 (0x0324 - 0x0324)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3167 ];

		return pClassPointer;
	};

	void GetServerAddr ( );
	void GetServerUniqueId ( );
	void VerifyServerAuthSession ( );
	void CreateServerAuthSession ( );
	void VerifyClientAuthSession ( );
	void CreateClientAuthSession ( );
	void SendServerAuthRequest ( );
	void SendClientAuthRequest ( );
};

UClass* UOnlineAuthInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x01D0 (0x0500 - 0x0330)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                         		// 0x0330 (0x0080) [0x0000000000000000]              
	struct FMatchmakingQueryState                      InviteSearchQuery;                                		// 0x03B0 (0x0080) [0x0000000000000000]              
	float                                              ServerBrowserTimeout;                             		// 0x0430 (0x0004) [0x0000000000000000]              
	float                                              InviteTimeout;                                    		// 0x0434 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                InviteServerUID;                                  		// 0x0438 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   GameInviteAcceptedDelegates;                      		// 0x0440 (0x0010) [0x0000000000000000]              
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x0450 (0x0008) [0x0000000000000000]              
	struct FString                                     InviteLocationUrl;                                		// 0x0458 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x0468 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x0478 (0x0010) [0x0000000000000000]              
	DWORD                                              bFilterEngineBuild : 1;                           		// 0x0488 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FFilterKeyToSteamKeyMapping >       FilterKeyToSteamKeyMap;                           		// 0x048C (0x0010) [0x0000000000000000]              
	unsigned char                                      MatchmakingTypeMode;                              		// 0x049C (0x0001) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   GetPlayerListCompleteDelegates;                   		// 0x04A0 (0x0010) [0x0000000000000000]              
	TArray< struct FFavoriteServer >                   FavoriteServerList;                               		// 0x04B0 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnGetPlayerListComplete__Delegate;              		// 0x04C0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x04C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x04D0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x04D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x04E0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x04E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x04F0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x04F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3169 ];

		return pClassPointer;
	};

	void ClearOnlineDelegates ( );
	void QueryNonAdvertisedData ( );
	void ClearUnregisterPlayerCompleteDelegate ( );
	void AddUnregisterPlayerCompleteDelegate ( );
	void OnUnregisterPlayerComplete ( );
	void UnregisterPlayer ( );
	void ClearRegisterPlayerCompleteDelegate ( );
	void AddRegisterPlayerCompleteDelegate ( );
	void OnRegisterPlayerComplete ( );
	void RegisterPlayer ( );
	void AcceptGameInvite ( );
	void OnGameInviteAccepted ( );
	void ClearGameInviteAcceptedDelegate ( );
	void AddGameInviteAcceptedDelegate ( );
	void UpdateOnlineGame ( );
	void IsSearchResultInFavoritesList ( );
	void RemoveSearchResultFromFavorites ( );
	void AddSearchResultToFavorites ( );
	void ClearGetPlayerListCompleteDelegate ( );
	void AddGetPlayerListCompleteDelegate ( );
	void SetMatchmakingTypeMode ( );
	void OnGetPlayerListComplete ( );
};

UClass* UOnlineGameInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x01AC (0x020C - 0x0060)
class UOnlineLobbyInterfaceSteamworks : public UTWOnlineLobby
{
public:
	TArray< struct FLobbyMetaData >                    CreateLobbySettings;                              		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FUniqueNetId                                PendingCreateLobbyResult;                         		// 0x0070 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   CreateLobbyCompleteDelegates;                     		// 0x0078 (0x0010) [0x0000000000000000]              
	DWORD                                              bLobbySearchInProgress : 1;                       		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              CommandLineLobbyJoined : 1;                       		// 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FBasicLobbyInfo >                   CachedFindLobbyResults;                           		// 0x008C (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   FindLobbiesCompleteDelegates;                     		// 0x009C (0x0010) [0x0000000000000000]              
	TArray< struct FActiveLobbyInfo >                  ActiveLobbies;                                    		// 0x00AC (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   JoinLobbyCompleteDelegates;                       		// 0x00BC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           LobbyMemberKeys;                                  		// 0x00CC (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LobbySettingsUpdateDelegates;                     		// 0x00DC (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LobbyMemberSettingsUpdateDelegates;               		// 0x00EC (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LobbyMemberStatusUpdateDelegates;                 		// 0x00FC (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LobbyReceiveMessageDelegates;                     		// 0x010C (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LobbyReceiveBinaryDataDelegates;                  		// 0x011C (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            CachedBinaryData;                                 		// 0x012C (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LobbyJoinGameDelegates;                           		// 0x013C (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LobbyInviteDelegates;                             		// 0x014C (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                		// 0x015C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0160 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                		// 0x016C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0170 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                  		// 0x017C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0180 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                		// 0x018C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0190 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;          		// 0x019C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x01A0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;            		// 0x01AC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x01B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                		// 0x01BC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x01C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;             		// 0x01CC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x01D0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                      		// 0x01DC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x01E0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyKicked__Delegate;                        		// 0x01EC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x01F0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                        		// 0x01FC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x0200 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3171 ];

		return pClassPointer;
	};

	void GetLobbyFromCommandline ( );
	void ClearLobbyInviteDelegate ( );
	void AddLobbyInviteDelegate ( );
	void OnLobbyInvite ( );
	void InviteToLobby ( );
	void SetLobbyOwner ( );
	void SetLobbyLock ( );
	void SetLobbyType ( );
	void SetLobbyServer ( );
	void RemoveLobbySetting ( );
	void SetLobbySetting ( );
	void GetLobbyAdmin ( );
	void OnLobbyKicked ( );
	void ClearLobbyJoinGameDelegate ( );
	void AddLobbyJoinGameDelegate ( );
	void eventTriggerLobbyJoinGameDelegates ( );
	void OnLobbyJoinGame ( );
	void ClearLobbyReceiveBinaryDataDelegate ( );
	void AddLobbyReceiveBinaryDataDelegate ( );
	void eventTriggerLobbyReceiveBinaryDataDelegates ( );
	void OnLobbyReceiveBinaryData ( );
	void ClearLobbyReceiveMessageDelegate ( );
	void AddLobbyReceiveMessageDelegate ( );
	void eventTriggerLobbyReceiveMessageDelegates ( );
	void OnLobbyReceiveMessage ( );
	void ClearLobbyMemberStatusUpdateDelegate ( );
	void AddLobbyMemberStatusUpdateDelegate ( );
	void eventTriggerLobbyMemberStatusUpdateDelegates ( );
	void OnLobbyMemberStatusUpdate ( );
	void ClearLobbyMemberSettingsUpdateDelegate ( );
	void AddLobbyMemberSettingsUpdateDelegate ( );
	void eventTriggerLobbyMemberSettingsUpdateDelegates ( );
	void OnLobbyMemberSettingsUpdate ( );
	void ClearLobbySettingsUpdateDelegate ( );
	void AddLobbySettingsUpdateDelegate ( );
	void eventTriggerLobbySettingsUpdateDelegates ( );
	void OnLobbySettingsUpdate ( );
	void SendLobbyBinaryData ( );
	void SendLobbyMessage ( );
	void SetLobbyUserSetting ( );
	void LeaveLobby ( );
	void ClearJoinLobbyCompleteDelegate ( );
	void AddJoinLobbyCompleteDelegate ( );
	void eventTriggerJoinLobbyCompleteDelegates ( );
	void OnJoinLobbyComplete ( );
	void JoinLobby ( );
	void ClearFindLobbiesCompleteDelegate ( );
	void AddFindLobbiesCompleteDelegate ( );
	void eventTriggerFindLobbiesCompleteDelegates ( );
	void OnFindLobbiesComplete ( );
	void UpdateFoundLobbies ( );
	void FindLobbies ( );
	void ClearCreateLobbyCompleteDelegate ( );
	void AddCreateLobbyCompleteDelegate ( );
	void OnCreateLobbyComplete ( );
	void CreateLobby ( );
	void Initialize ( );
};

UClass* UOnlineLobbyInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x08B0 (0x0BB8 - 0x0308)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	DWORD                                              bStoringAchievement : 1;                          		// 0x0308 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bClientStatsStorePending : 1;                     		// 0x0308 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bGSStatsStoresSuccess : 1;                        		// 0x0308 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bNeedsKeyboardTicking : 1;                        		// 0x0308 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bLastHasConnection : 1;                           		// 0x0308 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bIsStatsSessionOk : 1;                            		// 0x0308 (0x0004) [0x0000000000000000] [0x00000020] 
	DWORD                                              bShouldUseMcp : 1;                                		// 0x0308 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                TotalGSStatsStoresPending;                        		// 0x030C (0x0004) [0x0000000000000000]              
	unsigned char                                      UserStatsReceivedState;                           		// 0x0310 (0x0001) [0x0000000000000000]              
	unsigned char                                      LoggedInStatus;                                   		// 0x0311 (0x0001) [0x0000000000000000]              
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x0312 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentNotificationPosition;                      		// 0x0313 (0x0001) [0x0000000000000000]              
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x0314 (0x0008) [0x0000000000000000]              
	struct FString                                     LocalProfileName;                                 		// 0x031C (0x0010) [0x0000000000000000]              
	struct FString                                     LoggedInPlayerName;                               		// 0x032C (0x0010) [0x0000000000000000]              
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x033C (0x0008) [0x0000000000000000]              
	int                                                LoggedInPlayerNum;                                		// 0x0344 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x0348 (0x0010) [0x0000000000000000]              
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x0358 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x0360 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x0370 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x0380 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x0390 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x03A0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x03B0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x03C0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x03D0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x03E0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x03F0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x0400 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x0410 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ExternalUIChangeDelegates;                        		// 0x0420 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0430 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0440 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x0450 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x0460 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0470 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x0480 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x0490 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   EnumerateUserFilesCompleteDelegates;              		// 0x04A0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadUserFileCompleteDelegates;                    		// 0x04B0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   WriteUserFileCompleteDelegates;                   		// 0x04C0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   DeleteUserFileCompleteDelegates;                  		// 0x04D0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   SharedFileReadCompleteDelegates;                  		// 0x04E0 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   SharedFileWriteCompleteDelegates;                 		// 0x04F0 (0x0010) [0x0000000000000000]              
	struct FLocalTalkerSteam                           CurrentLocalTalker;                               		// 0x0500 (0x000C) [0x0000000000000000]              
	float                                              LastLocalTalkerElapsedTime;                       		// 0x050C (0x0004) [0x0000000000000000]              
	float                                              LastLocalPlayerTalkTime;                          		// 0x0510 (0x0004) [0x0000000000000000]              
	float                                              TalkTimeOutValue;                                 		// 0x0514 (0x0004) [0x0000000000000000]              
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x0518 (0x0010) [0x0000000000000000]              
	int                                                AppID;                                            		// 0x0528 (0x0004) [0x0000000000000000]              
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x052C (0x0008) [0x0000000000000000]              
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x0534 (0x0010) [0x0000000000000000]              
	struct FString                                     KeyboardResultsString;                            		// 0x0544 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x0554 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x0564 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   FriendMessageReceivedDelegates;                   		// 0x0574 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x0584 (0x0010) [0x0000000000000000]              
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x0594 (0x0038) [0x0000000000000000]              
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x05CC (0x0008) [0x0000000000000000]              
	struct FString                                     CachedFriendMessage;                              		// 0x05D4 (0x0010) [0x0000000000000000]              
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x05E4 (0x0024) [0x0000000000000000]              
	TArray< struct FString >                           LocationUrlsForInvites;                           		// 0x0608 (0x0010) [0x0000000000000000]              
	struct FString                                     LocationUrl;                                      		// 0x0618 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x0628 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x0638 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x0648 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x0658 (0x0010) [0x0000000000000000]              
	TArray< struct FOnlineFriendMessage >              CachedFriendMessages;                             		// 0x0668 (0x0010) [0x0000000000000000]              
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x0678 (0x0010) [0x0000000000000000]              
	struct FString                                     DefaultStatus;                                    		// 0x0688 (0x0010) [0x0000000000000000]              
	struct FString                                     GameInviteMessage;                                		// 0x0698 (0x0010) [0x0000000000000000]              
	struct FControllerConnectionState                  ControllerStates[ 0x4 ];                          		// 0x06A8 (0x0020) [0x0000000000000000]              
	float                                              ConnectionPresenceTimeInterval;                   		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              ConnectionPresenceElapsedTime;                    		// 0x06CC (0x0004) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x06D0 (0x0010) [0x0000000000000000]              
	struct FString                                     ProfileDataDirectory;                             		// 0x06E0 (0x0010) [0x0000000000000000]              
	struct FString                                     ProfileDataExtension;                             		// 0x06F0 (0x0010) [0x0000000000000000]              
	TArray< struct FSteamUserCloud >                   UserCloudFiles;                                   		// 0x0700 (0x0010) [0x0000000000000000]              
	TArray< struct FSteamUserCloudMetadata >           UserCloudMetadata;                                		// 0x0710 (0x0010) [0x0000000000000000]              
	TArray< struct FTitleFile >                        SharedFileCache;                                  		// 0x0720 (0x0010) [0x0000000000000000]              
	TArray< struct FQueuedAvatarRequest >              QueuedAvatarRequests;                             		// 0x0730 (0x0010) [0x0000000000000000]              
	TArray< struct FAchievementMappingInfo >           AchievementMappings;                              		// 0x0740 (0x0010) [0x0000000000000000]              
	TArray< struct FAchievementProgressStat >          PendingAchievementProgress;                       		// 0x0750 (0x0010) [0x0000000000000000]              
	TArray< struct FLeaderboardTemplate >              LeaderboardList;                                  		// 0x0760 (0x0010) [0x0000000000000000]              
	TArray< struct FDeferredLeaderboardRead >          DeferredLeaderboardReads;                         		// 0x0770 (0x0010) [0x0000000000000000]              
	TArray< struct FDeferredLeaderboardWrite >         DeferredLeaderboardWrites;                        		// 0x0780 (0x0010) [0x0000000000000000]              
	TArray< struct FDeferredLeaderboardWrite >         PendingLeaderboardStats;                          		// 0x0790 (0x0010) [0x0000000000000000]              
	TArray< struct FViewIdToLeaderboardName >          LeaderboardNameMappings;                          		// 0x07A0 (0x0010) [0x0000000000000000]              
	TArray< int >                                      GameServerStatsMappings;                          		// 0x07B0 (0x0010) [0x0000000000000000]              
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                    		// 0x07C0 (0x0008) [0x0000000000000000]              
	TArray< struct FIpAddr >                           PendingRedirects;                                 		// 0x07C8 (0x0010) [0x0000000000000000]              
	class UOnlineLobbyInterfaceSteamworks*             LobbyInterface;                                   		// 0x07D8 (0x0008) [0x0000000000000000]              
	class UKFWorkshopSteamworks*                       WorkshopInterface;                                		// 0x07E0 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x07E8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x07EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x07F8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x07FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0808 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x080C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x0818 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x081C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTokenAndSignatureRetrieved__Delegate;         		// 0x0828 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x082C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginComplete__Delegate;                      		// 0x0838 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x083C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0848 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x084C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x0858 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x085C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnSystemUserControllerPairingChanged__Delegate; 		// 0x0868 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x086C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeLevelChecked__Delegate;              		// 0x0878 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x087C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0888 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x088C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCurrentUserChanged__Delegate;                 		// 0x0898 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x089C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x08A8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x08AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x08B8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x08BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x08C8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x08CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x08D8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x08DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x08E8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x08EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x08F8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x08FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterLocalTalkerComplete__Delegate;        		// 0x0908 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData18[ 0x4 ];                             		// 0x090C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterLocalTalkerComplete__Delegate;      		// 0x0918 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData19[ 0x4 ];                             		// 0x091C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterRemoteTalkerComplete__Delegate;     		// 0x0928 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData20[ 0x4 ];                             		// 0x092C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0938 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData21[ 0x4 ];                             		// 0x093C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRemoteTalkerStatusChange__Delegate;           		// 0x0948 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData22[ 0x4 ];                             		// 0x094C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0958 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData23[ 0x4 ];                             		// 0x095C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineProfilesComplete__Delegate;         		// 0x0968 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData24[ 0x4 ];                             		// 0x096C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0978 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData25[ 0x4 ];                             		// 0x097C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0988 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData26[ 0x4 ];                             		// 0x098C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0998 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData27[ 0x4 ];                             		// 0x099C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x09A8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData28[ 0x4 ];                             		// 0x09AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x09B8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData29[ 0x4 ];                             		// 0x09BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x09C8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData30[ 0x4 ];                             		// 0x09CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x09D8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData31[ 0x4 ];                             		// 0x09DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x09E8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData32[ 0x4 ];                             		// 0x09EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x09F8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData33[ 0x4 ];                             		// 0x09FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0A08 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData34[ 0x4 ];                             		// 0x0A0C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0A18 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData35[ 0x4 ];                             		// 0x0A1C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0A28 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData36[ 0x4 ];                             		// 0x0A2C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInviteById__Delegate;             		// 0x0A38 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData37[ 0x4 ];                             		// 0x0A3C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0A48 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData38[ 0x4 ];                             		// 0x0A4C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0A58 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData39[ 0x4 ];                             		// 0x0A5C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStatisticChanged__Delegate;                   		// 0x0A68 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData40[ 0x4 ];                             		// 0x0A6C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0A78 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData41[ 0x4 ];                             		// 0x0A7C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPeoplePickerComplete__Delegate;               		// 0x0A88 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData42[ 0x4 ];                             		// 0x0A8C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnShowGamerCardComplete__Delegate;              		// 0x0A98 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData43[ 0x4 ];                             		// 0x0A9C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnShowHelpComplete__Delegate;                   		// 0x0AA8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData44[ 0x4 ];                             		// 0x0AAC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAcceptReceivedData__Delegate;                 		// 0x0AB8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData45[ 0x4 ];                             		// 0x0ABC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0AC8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData46[ 0x4 ];                             		// 0x0ACC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0AD8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData47[ 0x4 ];                             		// 0x0ADC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0AE8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData48[ 0x4 ];                             		// 0x0AEC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0AF8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData49[ 0x4 ];                             		// 0x0AFC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;           		// 0x0B08 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData50[ 0x4 ];                             		// 0x0B0C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x0B18 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData51[ 0x4 ];                             		// 0x0B1C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x0B28 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData52[ 0x4 ];                             		// 0x0B2C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStoreDataRead__Delegate;                      		// 0x0B38 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData53[ 0x4 ];                             		// 0x0B3C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnEntitlementsRead__Delegate;                   		// 0x0B48 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData54[ 0x4 ];                             		// 0x0B4C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x0B58 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData55[ 0x4 ];                             		// 0x0B5C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x0B68 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData56[ 0x4 ];                             		// 0x0B6C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x0B78 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData57[ 0x4 ];                             		// 0x0B7C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x0B88 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData58[ 0x4 ];                             		// 0x0B8C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;             		// 0x0B98 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData59[ 0x4 ];                             		// 0x0B9C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;            		// 0x0BA8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData60[ 0x4 ];                             		// 0x0BAC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3173 ];

		return pClassPointer;
	};

	void RecordPlayersRecentlyMet ( );
	void ShowGamerCardUIByUsername ( );
	void AddInGamePost ( );
	void CheckPlayerGroup ( );
	void GetPlayerGroups ( );
	void OpenURL ( );
	void OpenItemPurchaseOverlay ( );
	void OpenMarketPlaceSearch ( );
	void RefreshInventory ( );
	void GetItemDefs ( );
	void SubmitStatValidation ( );
	void ValidateStat ( );
	void ShowVoIPConfigUI ( );
	void GetCurrentVOIPLevel ( );
	void GetVoIPVolume ( );
	void SetVoIPVolume ( );
	void ClearAllDelegates ( );
	void ClearWriteSharedFileCompleteDelegate ( );
	void AddWriteSharedFileCompleteDelegate ( );
	void WriteSharedFile ( );
	void OnWriteSharedFileComplete ( );
	void ClearReadSharedFileCompleteDelegate ( );
	void AddReadSharedFileCompleteDelegate ( );
	void ReadSharedFile ( );
	void OnReadSharedFileComplete ( );
	void ClearSharedFile ( );
	void ClearSharedFiles ( );
	void GetSharedFileContents ( );
	void ClearDeleteUserFileCompleteDelegate ( );
	void AddDeleteUserFileCompleteDelegate ( );
	void DeleteUserFile ( );
	void OnDeleteUserFileComplete ( );
	void ClearWriteUserFileCompleteDelegate ( );
	void AddWriteUserFileCompleteDelegate ( );
	void WriteUserFile ( );
	void OnWriteUserFileComplete ( );
	void ClearReadUserFileCompleteDelegate ( );
	void AddReadUserFileCompleteDelegate ( );
	void ReadUserFile ( );
	void OnReadUserFileComplete ( );
	void GetUserFileList ( );
	void ClearEnumerateUserFileCompleteDelegate ( );
	void AddEnumerateUserFileCompleteDelegate ( );
	void EnumerateUserFiles ( );
	void OnEnumerateUserFilesComplete ( );
	void ClearFile ( );
	void ClearFiles ( );
	void GetFileContents ( );
	void WriteUserFileInternal ( );
	void GetFriendJoinURL ( );
	void GetCommandlineJoinURL ( );
	void Int64ToUniqueNetId ( );
	void UniqueNetIdToInt64 ( );
	void GetUGCInterface ( );
	void SetWorkshopInterface ( );
	void GetLobbyInterface ( );
	void eventSetLobbyInterface ( );
	void NotifyVOIPPlaybackFinished ( );
	void OnVOIPPlaybackFinished ( );
	void ShowProfileUI ( );
	void UniqueNetIdToPlayerName ( );
	void DisplayAchievementProgress ( );
	void CreateLeaderboard ( );
	void ResetStats ( );
	void ShowCustomErrorUI ( );
	void ShowSystemErrorUI ( );
	void UpsellPremiumOnlineService ( );
	void ClearOnEntitlementsReadDelegate ( );
	void AddOnEntitlementsReadDelegate ( );
	void OnEntitlementsRead ( );
	void ReadEntitlements ( );
	void ClearStoreDataReadCompleteDelegate ( );
	void AddStoreDataReadCompleteDelegate ( );
	void OnStoreDataRead ( );
	void ReadStoreData ( );
	void PostActivityFeedPerkLevelUp ( );
	void PostActivityFeedTeamAward ( );
	void PostActivityFeedBossKill ( );
	void ShowCustomMessageUI ( );
	void ClearCrossTitleProfileSettings ( );
	void GetCrossTitleProfileSettings ( );
	void ClearReadCrossTitleProfileSettingsCompleteDelegate ( );
	void AddReadCrossTitleProfileSettingsCompleteDelegate ( );
	void OnReadCrossTitleProfileSettingsComplete ( );
	void ReadCrossTitleProfileSettings ( );
	void UnlockAvatarAward ( );
	void GetSteamClanData ( );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( );
	void OnGetNumberOfCurrentPlayersComplete ( );
	void GetNumberOfCurrentPlayers ( );
	void ReadOnlineAvatar ( );
	void OnReadOnlineAvatarComplete ( );
	void ShowCustomPlayersUI ( );
	void GetAchievements ( );
	void ClearReadAchievementsCompleteDelegate ( );
	void AddReadAchievementsCompleteDelegate ( );
	void OnReadAchievementsComplete ( );
	void ClearAchievements ( );
	void ReadAchievements ( );
	void ShowPlayersUI ( );
	void ShowFriendsInviteUI ( );
	void ShowFriendsUI ( );
	void ClearProfileDataChangedDelegate ( );
	void AddProfileDataChangedDelegate ( );
	void OnProfileDataChanged ( );
	void UnlockGamerPicture ( );
	void ClearUnlockAchievementCompleteDelegate ( );
	void AddUnlockAchievementCompleteDelegate ( );
	void OnUnlockAchievementComplete ( );
	void UnlockAchievement ( );
	void IsDeviceValid ( );
	void GetDeviceSelectionResults ( );
	void ClearDeviceSelectionDoneDelegate ( );
	void AddDeviceSelectionDoneDelegate ( );
	void OnDeviceSelectionComplete ( );
	void ClearAcceptReceivedDataDelegate ( );
	void AddAcceptReceivedDataDelegate ( );
	void OnAcceptReceivedData ( );
	void ShowDataSendingUI ( );
	void ClearShowHelpCompleteDelegate ( );
	void AddShowHelpCompleteDelegate ( );
	void OnShowHelpComplete ( );
	void ShowHelpForErrorUI ( );
	void ShowHelpUI ( );
	void ShowVideo ( );
	void ClearShowGamerCardCompleteDelegate ( );
	void AddShowGamerCardCompleteDelegate ( );
	void OnShowGamerCardComplete ( );
	void ClearPeoplePickerCompleteDelegate ( );
	void AddPeoplePickerCompleteDelegate ( );
	void OnPeoplePickerComplete ( );
	void ShowPeoplePickerUI ( );
	void CloseCurrentContentUI ( );
	void ShowContentRedeemCodeUI ( );
	void ShowProductDetailsUI ( );
	void ShowContentPurchaseUI ( );
	void ShowContentMarketplaceUI ( );
	void ShowDeviceSelectionUI ( );
	void ShowMembershipMarketplaceUI ( );
	void ShowInviteUI ( );
	void ShowAchievementsUI ( );
	void ShowMessagesUI ( );
	void ShowGamerCardUI ( );
	void ShowFeedbackUI ( );
	void DeleteMessage ( );
	void UnmuteAll ( );
	void MuteAll ( );
	void CalcAggregateSkill ( );
	void RegisterStatGuid ( );
	void GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( );
	void AddRegisterHostStatGuidCompleteDelegate ( );
	void OnRegisterHostStatGuidComplete ( );
	void RegisterHostStatGuid ( );
	void GetHostStatGuid ( );
	void SendTestEvent ( );
	void SendPlayerSessionResume ( );
	void SendPlayerSessionPause ( );
	void SendPlayerSessionEnd ( );
	void SendPlayerSessionStart ( );
	void UnsubscribeToStatisticEvent ( );
	void SubscribeToStatisticEvent ( );
	void OnStatisticChanged ( );
	void ClearFriendMessageReceivedDelegate ( );
	void AddFriendMessageReceivedDelegate ( );
	void OnFriendMessageReceived ( );
	void GetFriendMessages ( );
	void ClearJoinFriendGameCompleteDelegate ( );
	void AddJoinFriendGameCompleteDelegate ( );
	void OnJoinFriendGameComplete ( );
	void JoinFriendGame ( );
	void AddReceivedGameInviteByIdDelegate ( );
	void ClearReceivedGameInviteByIdDelegate ( );
	void OnReceivedGameInviteById ( );
	void CheckForGameInviteOnLaunch ( );
	void ClearReceivedGameInviteDelegate ( );
	void AddReceivedGameInviteDelegate ( );
	void OnReceivedGameInvite ( );
	void SendGameInviteToUsers ( );
	void SendGameInviteToFriends ( );
	void SendGameInviteToFriend ( );
	void SendMessageToFriend ( );
	void ClearFriendInviteReceivedDelegate ( );
	void AddFriendInviteReceivedDelegate ( );
	void OnFriendInviteReceived ( );
	void DenyFriendInvite ( );
	void AcceptFriendInvite ( );
	void RemoveFriend ( );
	void ClearAddFriendByNameCompleteDelegate ( );
	void AddAddFriendByNameCompleteDelegate ( );
	void OnAddFriendByNameComplete ( );
	void AddFriendByName ( );
	void AddFriend ( );
	void GetKeyboardInputResults ( );
	void ClearKeyboardInputDoneDelegate ( );
	void AddKeyboardInputDoneDelegate ( );
	void OnKeyboardInputComplete ( );
	void HideKeyboardUI ( );
	void ShowKeyboardUI ( );
	void SetOnlineStatus ( );
	void GetTitleFileState ( );
	void GetTitleFileContents ( );
	void ClearReadTitleFileCompleteDelegate ( );
	void AddReadTitleFileCompleteDelegate ( );
	void ReadTitleFile ( );
	void OnReadTitleFileComplete ( );
	void ClearStorageDeviceChangeDelegate ( );
	void AddStorageDeviceChangeDelegate ( );
	void OnStorageDeviceChange ( );
	void GetLocale ( );
	void GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( );
	void AddConnectionStatusChangeDelegate ( );
	void OnConnectionStatusChange ( );
	void GetCurrentConnectionStatus ( );
	void IsControllerConnected ( );
	void ClearControllerChangeDelegate ( );
	void AddControllerChangeDelegate ( );
	void OnControllerChange ( );
	void SetNetworkNotificationPosition ( );
	void GetNetworkNotificationPosition ( );
	void ClearExternalUIChangeDelegate ( );
	void AddExternalUIChangeDelegate ( );
	void OnExternalUIChange ( );
	void ClearLinkStatusChangeDelegate ( );
	void AddLinkStatusChangeDelegate ( );
	void OnLinkStatusChange ( );
	void HasLinkConnection ( );
	void GetPlayerIDForPlayerNickname ( );
	void GetPlayerNicknameForPlayerId ( );
	void eventGetPlayerNicknameFromIndex ( );
	void WriteOnlinePlayerScores ( );
	void ClearFlushOnlineStatsCompleteDelegate ( );
	void AddFlushOnlineStatsCompleteDelegate ( );
	void OnFlushOnlineStatsComplete ( );
	void FlushOnlineStats ( );
	void WriteOnlineStats ( );
	void FreeStats ( );
	void ClearReadOnlineStatsCompleteDelegate ( );
	void AddReadOnlineStatsCompleteDelegate ( );
	void OnReadOnlineStatsComplete ( );
	void ReadOnlineStatsByRankAroundPlayer ( );
	void ReadOnlineStatsByRank ( );
	void ReadOnlineStatsForFriends ( );
	void ReadOnlineStats ( );
	void ReadOnlineStatsForPlayer ( );
	void ClearReadOnlineProfilesCompleteDelegate ( );
	void AddReadOnlineProfilesCompleteDelegate ( );
	void OnReadOnlineProfilesComplete ( );
	void ReadOnlineProfilesForPlayers ( );
	void SetSpeechRecognitionObject ( );
	void SelectVocabulary ( );
	void ClearRecognitionCompleteDelegate ( );
	void AddRecognitionCompleteDelegate ( );
	void OnRecognitionComplete ( );
	void GetRecognitionResults ( );
	void StopSpeechRecognition ( );
	void StartSpeechRecognition ( );
	void StopNetworkedVoice ( );
	void StartNetworkedVoice ( );
	void ClearPlayerTalkingDelegate ( );
	void AddPlayerTalkingDelegate ( );
	void OnRemoteTalkerStatusChange ( );
	void OnPlayerTalkingStateChange ( );
	void UpdatePlayerMuteSetting ( );
	void IsTalkerMuted ( );
	void UnmuteRemoteTalker ( );
	void MuteRemoteTalker ( );
	void SetRemoteTalkerPriority ( );
	void IsHeadsetPresent ( );
	void IsRemotePlayerTalking ( );
	void IsLocalPlayerTalking ( );
	void ClearUnregisterRemoteTalkerCompleteDelegate ( );
	void AddUnregisterRemoteTalkerCompleteDelegate ( );
	void OnUnregisterRemoteTalkerComplete ( );
	void ClearUnregisterLocalTalkerCompleteDelegate ( );
	void AddUnregisterLocalTalkerCompleteDelegate ( );
	void OnUnregisterLocalTalkerComplete ( );
	void ClearRegisterLocalTalkerCompleteDelegate ( );
	void AddRegisterLocalTalkerCompleteDelegate ( );
	void OnRegisterLocalTalkerComplete ( );
	void UnregisterRemoteTalker ( );
	void RegisterRemoteTalker ( );
	void ReceiveReliableVoicePacket ( );
	void AreAnyLocalTalkersRegistered ( );
	void UnregisterLocalTalker ( );
	void RegisterLocalTalker ( );
	void GetFriendsList ( );
	void ClearReadFriendsCompleteDelegate ( );
	void AddReadFriendsCompleteDelegate ( );
	void OnReadFriendsComplete ( );
	void ReadFriendsList ( );
	void ClearWritePlayerStorageCompleteDelegate ( );
	void AddWritePlayerStorageCompleteDelegate ( );
	void OnWritePlayerStorageComplete ( );
	void WritePlayerStorage ( );
	void GetPlayerStorage ( );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( );
	void OnReadPlayerStorageForNetIdComplete ( );
	void ReadPlayerStorageForNetId ( );
	void ClearReadPlayerStorageCompleteDelegate ( );
	void AddReadPlayerStorageCompleteDelegate ( );
	void OnReadPlayerStorageComplete ( );
	void ReadPlayerStorage ( );
	void ClearWriteProfileSettingsCompleteDelegate ( );
	void AddWriteProfileSettingsCompleteDelegate ( );
	void OnWriteProfileSettingsComplete ( );
	void WriteProfileSettings ( );
	void GetProfileSettings ( );
	void ClearReadProfileSettingsCompleteDelegate ( );
	void AddReadProfileSettingsCompleteDelegate ( );
	void OnReadProfileSettingsComplete ( );
	void ReadProfileSettings ( );
	void ClearFriendsChangeDelegate ( );
	void AddFriendsChangeDelegate ( );
	void ClearMutingChangeDelegate ( );
	void AddMutingChangeDelegate ( );
	void ClearCurrentUserChangedDelegate ( );
	void AddCurrentUserChangedDelegate ( );
	void OnCurrentUserChanged ( );
	void ClearLoginCancelledDelegate ( );
	void AddLoginCancelledDelegate ( );
	void ClearLoginStatusChangeDelegate ( );
	void AddLoginStatusChangeDelegate ( );
	void OnLoginStatusChange ( );
	void ClearLoginChangeDelegate ( );
	void AddLoginChangeDelegate ( );
	void IsMuted ( );
	void AreAnyFriends ( );
	void IsFriend ( );
	void CanUploadFitnessData ( );
	void CanShareKinectContent ( );
	void CanShareWithSocialNetwork ( );
	void CanBrowseInternet ( );
	void CanAccessPremiumVideoContent ( );
	void CanAccessPremiumContent ( );
	void CanUseCloudStorage ( );
	void CanRecordDVRClips ( );
	void CanShowPresenceInformation ( );
	void CanViewPlayerProfiles ( );
	void CanPurchaseContent ( );
	void CanShareUserCreatedContent ( );
	void CanCommunicateVoice ( );
	void CanCommunicateVideo ( );
	void CanCommunicateText ( );
	void CanPlayOnline ( );
	void ClearPrivilegeLevelCheckedDelegate ( );
	void AddPrivilegeLevelCheckedDelegate ( );
	void OnPrivilegeLevelChecked ( );
	void CanCommunicate ( );
	void GetPlayerNickname ( );
	void GetControllerIdFromNetId ( );
	void GetUniquePlayerId ( );
	void IsLocalLogin ( );
	void IsGuestLogin ( );
	void GetLoginStatus ( );
	void PairUserAndControllerAtIndex ( );
	void ClearSystemUserContrllerPairingChangedDelegate ( );
	void AddSystemUserContrllerPairingChangedDelegate ( );
	void OnSystemUserControllerPairingChanged ( );
	void ClearLogoutCompletedDelegate ( );
	void AddLogoutCompletedDelegate ( );
	void OnLogoutCompleted ( );
	void Logout ( );
	void ClearLoginFailedDelegate ( );
	void AddLoginFailedDelegate ( );
	void OnLoginFailed ( );
	void AutoLogin ( );
	void ClearLoginCompleteDelegate ( );
	void AddLoginCompleteDelegate ( );
	void OnLoginComplete ( );
	void Login ( );
	void ShowLoginUI ( );
	void ClearURLTokenRetrievedDelegate ( );
	void AddURLTokenRetrievedDelegate ( );
	void GetTokenAndSignatureForURL ( );
	void OnTokenAndSignatureRetrieved ( );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( );
	void eventExit ( );
	void eventInit ( );
};

UClass* UOnlineSubsystemSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.KFOnlineLobbySteamworks
// 0x0025 (0x0231 - 0x020C)
class UKFOnlineLobbySteamworks : public UOnlineLobbyInterfaceSteamworks
{
public:
	struct FUniqueNetId                                CurrentLobbyId;                                   		// 0x020C (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                ZeroUniqueId;                                     		// 0x0214 (0x0008) [0x0000000000000000]              
	DWORD                                              bCreatingLobby : 1;                               		// 0x021C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bWaitingForLobby : 1;                             		// 0x021C (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bWaitingForServer : 1;                            		// 0x021C (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bDebug : 1;                                       		// 0x021C (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     PendingServerIP;                                  		// 0x0220 (0x0010) [0x0000000000000000]              
	unsigned char                                      LobbyVisibility;                                  		// 0x0230 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3175 ];

		return pClassPointer;
	};

	void SetServerPassword ( );
	void GetFriendNickname ( );
	void GetCurrentLobby ( );
	void GetLobbyURLString ( );
	void eventTestFindLobbies ( );
	void LobbyMessage ( );
	void OnLobbyReceiveMessage ( );
	void eventConsolePrint ( );
	void GetPC ( );
	void SetVisibility ( );
	void SetLobbyData ( );
	void GetLobbyData ( );
	void NotifyLobbyStatusChanged ( );
	void NotifyUnsuccessfulSearch ( );
	void FindLobbiesComplete ( );
	void FindLobbies ( );
	void OnLobbyJoinGame ( );
	void LobbyJoinServer ( );
	void LobbyJoinGameDelegate ( );
	void LobbyJoinGame ( );
	void AppendPasswordToURL ( );
	void GetConnectedServerIP ( );
	void GetLobbyServerIP ( );
	void GetServerConnected ( );
	void SetLobbyServer ( );
	void JoinServer ( );
	void GetMyId ( );
	void QuitLobby ( );
	void OnJoinLobbyComplete ( );
	void OnLobbyInvite ( );
	void LobbyInvite ( );
	void OnLobbyMemberStatusUpdate ( );
	void GetFriendUniqueId ( );
	void eventInviteFriendToLobby ( );
	void ShowLobbyInviteInterface ( );
	void ShowLobbyInviteInterfaceInternal ( );
	void OnCreateLobbyComplete ( );
	void MakeLobby ( );
	void Initialize ( );
	void IsLobbyOwner ( );
	void IsInLobby ( );
	void GetCurrentLobbyId ( );
};

UClass* UKFOnlineLobbySteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.SteamWorkshopDownload
// 0x000C (0x0AB0 - 0x0AA4)
class USteamWorkshopDownload : public UDownload
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0AA4 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3177 ];

		return pClassPointer;
	};

};

UClass* USteamWorkshopDownload::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0014 (0x022C - 0x0218)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	DWORD                                              bSteamSocketsOnly : 1;                            		// 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x021C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3179 ];

		return pClassPointer;
	};

};

UClass* UIpNetDriverSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0xB100 - 0xB100)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3182 ];

		return pClassPointer;
	};

};

UClass* UIpNetConnectionSteamworks::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif