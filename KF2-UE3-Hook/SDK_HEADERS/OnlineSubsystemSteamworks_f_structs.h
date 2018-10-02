/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.InstallAllItems
// [0x00020400] ( FUNC_Native )
struct UKFWorkshopSteamworks_execInstallAllItems_Parms
{
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.UpdateWorkshopFiles
// [0x00020400] ( FUNC_Native )
struct UKFWorkshopSteamworks_execUpdateWorkshopFiles_Parms
{
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.Initialize
// [0x00020400] ( FUNC_Native )
struct UKFWorkshopSteamworks_execInitialize_Parms
{
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.GetUGCForPackage
// [0x00020400] ( FUNC_Native )
struct UKFWorkshopSteamworks_execGetUGCForPackage_Parms
{
	// struct FString                                  Package;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.ClearUGCDownloadProgressDelegate
// [0x00020002] 
struct UKFWorkshopSteamworks_execClearUGCDownloadProgressDelegate_Parms
{
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.SetUGCDownloadProgressDelegate
// [0x00020002] 
struct UKFWorkshopSteamworks_execSetUGCDownloadProgressDelegate_Parms
{
	// struct FScriptDelegate                          InProgressDelegate;                               		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.UGCDownloadProgressDelegate
// [0x00120000] 
struct UKFWorkshopSteamworks_execUGCDownloadProgressDelegate_Parms
{
	// struct FString                                  ItemName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           PercentComplete;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ItemsRemaining;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execGetServerAddr_Parms
{
	// struct FIpAddr                                  OutServerIP;                                      		// 0x0000 (0x0014) [0x0000000000000000]              
	// int                                             OutServerPort;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Parms
{
	// struct FUniqueNetId                             OutServerUID;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             AuthTicketUID;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Parms
{
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ClientPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             OutAuthTicketUID;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Parms
{
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ClientPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             AuthTicketUID;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ServerPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           bSecure : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             OutAuthTicketUID;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearOnlineDelegates
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearOnlineDelegates_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms
{
	// int                                             StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasInvited : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FOnlineGameSearchResult                  DesiredGame;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms
{
	// struct FOnlineGameSearchResult                  InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ResultReason;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
struct UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UOnlineGameSettings*                      UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsSearchResultInFavoritesList
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceSteamworks_execIsSearchResultInFavoritesList_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RemoveSearchResultFromFavorites
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceSteamworks_execRemoveSearchResultFromFavorites_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSearchResultToFavorites
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceSteamworks_execAddSearchResultToFavorites_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGetPlayerListCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execClearGetPlayerListCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetPlayerListCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGetPlayerListCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execAddGetPlayerListCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetPlayerListCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetMatchmakingTypeMode
// [0x00020002] 
struct UOnlineGameInterfaceSteamworks_execSetMatchmakingTypeMode_Parms
{
	// unsigned char                                   InMatchmakingTypeMode;                            		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGetPlayerListComplete
// [0x00120000] 
struct UOnlineGameInterfaceSteamworks_execOnGetPlayerListComplete_Parms
{
	// class UOnlineGameSettings*                      PlayerListSettings;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           Success : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bMarkAsJoined : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyInviteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearLobbyInviteDelegate_Parms
{
	// struct FScriptDelegate                          LobbyInviteDelegate;                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyInviteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddLobbyInviteDelegate_Parms
{
	// struct FScriptDelegate                          LobbyInviteDelegate;                              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyInvite
// [0x00120000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyInvite_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             FriendId;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bAccepted : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             NewOwner;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bLocked : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  ServerIP;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Key;                                              		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Key;                                              		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FString                                  Value;                                            		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x00420400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             AdminId;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             AdminIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyJoinGameDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearLobbyJoinGameDelegate_Parms
{
	// struct FScriptDelegate                          LobbyJoinGameDelegate;                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyJoinGameDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddLobbyJoinGameDelegate_Parms
{
	// struct FScriptDelegate                          LobbyJoinGameDelegate;                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyJoinGameDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyJoinGameDelegates_Parms
{
	// int                                             LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ServerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  ServerIP;                                         		// 0x000C (0x0010) [0x0000000000000000]              
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyJoinGame
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyJoinGame_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ServerID;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FString                                  ServerIP;                                         		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveBinaryDataDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveBinaryDataDelegate_Parms
{
	// struct FScriptDelegate                          LobbyReceiveBinaryDataDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveBinaryDataDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveBinaryDataDelegate_Parms
{
	// struct FScriptDelegate                          LobbyReceiveBinaryDataDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveBinaryDataDelegates_Parms
{
	// int                                             LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveBinaryData
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveBinaryData_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         Data;                                             		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveMessageDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveMessageDelegate_Parms
{
	// struct FScriptDelegate                          LobbyReceiveMessageDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveMessageDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveMessageDelegate_Parms
{
	// struct FScriptDelegate                          LobbyReceiveMessageDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveMessageDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveMessageDelegates_Parms
{
	// int                                             LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  Type;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x0038 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveMessage
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveMessage_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Type;                                             		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberStatusUpdateDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberStatusUpdateDelegate_Parms
{
	// struct FScriptDelegate                          LobbyMemberStatusUpdateDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberStatusUpdateDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberStatusUpdateDelegate_Parms
{
	// struct FScriptDelegate                          LobbyMemberStatusUpdateDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberStatusUpdateDelegates_Parms
{
	// int                                             LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             InstigatorIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  Status;                                           		// 0x000C (0x0010) [0x0000000000000000]              
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberStatusUpdate
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberStatusUpdate_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             InstigatorIndex;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  Status;                                           		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberSettingsUpdateDelegate_Parms
{
	// struct FScriptDelegate                          LobbyMemberSettingsUpdateDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberSettingsUpdateDelegate_Parms
{
	// struct FScriptDelegate                          LobbyMemberSettingsUpdateDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberSettingsUpdateDelegates_Parms
{
	// int                                             LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberSettingsUpdate
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberSettingsUpdate_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbySettingsUpdateDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearLobbySettingsUpdateDelegate_Parms
{
	// struct FScriptDelegate                          LobbySettingsUpdateDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbySettingsUpdateDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddLobbySettingsUpdateDelegate_Parms
{
	// struct FScriptDelegate                          LobbySettingsUpdateDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbySettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerLobbySettingsUpdateDelegates_Parms
{
	// int                                             LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbySettingsUpdate
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnLobbySettingsUpdate_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x00420400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< unsigned char >                         Data;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyMessage
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSendLobbyMessage_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Key;                                              		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FString                                  Value;                                            		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearJoinLobbyCompleteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearJoinLobbyCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinLobbyCompleteDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddJoinLobbyCompleteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddJoinLobbyCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinLobbyCompleteDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerJoinLobbyCompleteDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerJoinLobbyCompleteDelegates_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             LobbyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             LobbyUID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x0030 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnJoinLobbyComplete
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnJoinLobbyComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             LobbyUID;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x00020400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execJoinLobby_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearFindLobbiesCompleteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearFindLobbiesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          FindLobbiesCompleteDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddFindLobbiesCompleteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddFindLobbiesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          FindLobbiesCompleteDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerFindLobbiesCompleteDelegates
// [0x00020802] ( FUNC_Event )
struct UOnlineLobbyInterfaceSteamworks_eventTriggerFindLobbiesCompleteDelegates_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FScriptDelegate >                DelList;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          CurDel;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnFindLobbiesComplete
// [0x00520000] 
struct UOnlineLobbyInterfaceSteamworks_execOnFindLobbiesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FBasicLobbyInfo >                LobbyList;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x00024400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x00024400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execFindLobbies_Parms
{
	// int                                             MaxResults;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< struct FLobbyFilter >                   Filters;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< struct FLobbySortFilter >               SortFilters;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
	// int                                             MinSlots;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Distance;                                         		// 0x0028 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearCreateLobbyCompleteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execClearCreateLobbyCompleteDelegate_Parms
{
	// struct FScriptDelegate                          CreateLobbyCompleteDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddCreateLobbyCompleteDelegate
// [0x00020002] 
struct UOnlineLobbyInterfaceSteamworks_execAddCreateLobbyCompleteDelegate_Parms
{
	// struct FScriptDelegate                          CreateLobbyCompleteDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnCreateLobbyComplete
// [0x00120000] 
struct UOnlineLobbyInterfaceSteamworks_execOnCreateLobbyComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x00024400] ( FUNC_Native )
struct UOnlineLobbyInterfaceSteamworks_execCreateLobby_Parms
{
	// int                                             MaxPlayers;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	// TArray< struct FLobbyMetaData >                 InitialSettings;                                  		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.Initialize
// [0x00020000] 
struct UOnlineLobbyInterfaceSteamworks_execInitialize_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FPlayerNameIdPair >              Players;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  GameDescription;                                  		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUIByUsername
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowGamerCardUIByUsername_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  UserName;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execAddInGamePost_Parms
{
	// int                                             InPostID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  InPostParam;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckPlayerGroup
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execCheckPlayerGroup_Parms
{
	// struct FUniqueNetId                             Group;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerGroups
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetPlayerGroups_Parms
{
	// TArray< struct FUniqueNetId >                   PlayerGroups;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenURL
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execOpenURL_Parms
{
	// struct FString                                  WebsiteLink;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenItemPurchaseOverlay
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execOpenItemPurchaseOverlay_Parms
{
	// int                                             SKU;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenMarketPlaceSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execOpenMarketPlaceSearch_Parms
{
	// struct FItemProperties                          Item;                                             		// 0x0000 (0x00E0) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshInventory
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execRefreshInventory_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetItemDefs
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetItemDefs_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubmitStatValidation
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UOnlineSubsystemSteamworks_execSubmitStatValidation_Parms
{
	// struct FQWord                                   UserId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             StatId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bClientInterface : 1;                             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ValidateStat
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UOnlineSubsystemSteamworks_execValidateStat_Parms
{
	// struct FQWord                                   UserId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             StatId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVoIPConfigUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowVoIPConfigUI_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentVOIPLevel
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetCurrentVOIPLevel_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetVoIPVolume
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetVoIPVolume_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoIPVolume
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSetVoIPVolume_Parms
{
	// float                                           Volume;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearAllDelegates_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          WriteSharedFileCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          WriteSharedFileCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execWriteSharedFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         Contents;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  SharedHandle;                                     		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadSharedFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadSharedFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadSharedFile_Parms
{
	// struct FString                                  SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  SharedHandle;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execClearSharedFile_Parms
{
	// struct FString                                  SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execClearSharedFiles_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetSharedFileContents_Parms
{
	// struct FString                                  SharedHandle;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execDeleteUserFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execWriteUserFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadUserFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetUserFileList_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FEmsFile >                       UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execEnumerateUserFiles_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execClearFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execClearFiles_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetFileContents_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] ( FUNC_Final | FUNC_Native )
struct UOnlineSubsystemSteamworks_execWriteUserFileInternal_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetFriendJoinURL_Parms
{
	// struct FUniqueNetId                             FriendUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ServerURL;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FString                                  ServerUID;                                        		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Parms
{
	// DWORD                                           bMarkAsJoined : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  ServerURL;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  ServerUID;                                        		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Parms
{
	// struct FString                                  UIDString;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             OutUID;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Parms
{
	// struct FUniqueNetId                             Uid;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUGCInterface
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetUGCInterface_Parms
{
	// class UTWOnlineUGCInterface*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetWorkshopInterface
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSetWorkshopInterface_Parms
{
	// class UKFWorkshopSteamworks*                    NewInterface;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLobbyInterface
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetLobbyInterface_Parms
{
	// class UTWOnlineLobby*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetLobbyInterface
// [0x00020802] ( FUNC_Event )
struct UOnlineSubsystemSteamworks_eventSetLobbyInterface_Parms
{
	// class UObject*                                  NewInterface;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Parms
{
	// class UAudioComponent*                          VOIPAudioComponent;                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Parms
{
	// class UAudioComponent*                          AC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowProfileUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  SubURL;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerUID;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Parms
{
	// struct FUniqueNetId                             Uid;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Parms
{
	// int                                             AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ProgressCount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms
{
	// struct FString                                  LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   SortType;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	// unsigned char                                   DisplayFormat;                                    		// 0x0011 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execResetStats_Parms
{
	// DWORD                                           bResetAchievements : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomErrorUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowCustomErrorUI_Parms
{
	// int                                             ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  ErrorContext;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  DialogTitle;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  DialogContent;                                    		// 0x0024 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemErrorUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowSystemErrorUI_Parms
{
	// int                                             ErrorCode;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  ErrorContext;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpsellPremiumOnlineService
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUpsellPremiumOnlineService_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearOnEntitlementsReadDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearOnEntitlementsReadDelegate_Parms
{
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddOnEntitlementsReadDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddOnEntitlementsReadDelegate_Parms
{
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEntitlementsRead
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnEntitlementsRead_Parms
{
	// DWORD                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadEntitlements
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadEntitlements_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStoreDataReadCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearStoreDataReadCompleteDelegate_Parms
{
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStoreDataReadCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddStoreDataReadCompleteDelegate_Parms
{
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStoreDataRead
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnStoreDataRead_Parms
{
	// DWORD                                           bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStoreData
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadStoreData_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostActivityFeedPerkLevelUp
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execPostActivityFeedPerkLevelUp_Parms
{
	// struct FString                                  PerkClassName;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Level;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostActivityFeedTeamAward
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execPostActivityFeedTeamAward_Parms
{
	// struct FString                                  AwardName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostActivityFeedBossKill
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execPostActivityFeedBossKill_Parms
{
	// struct FString                                  BossName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ClassName;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  MapName;                                          		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execShowCustomMessageUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Recipients;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageTitle;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  NonEditableMessage;                               		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  EditableMessage;                                  		// 0x0034 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineProfileSettings*                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineProfileSettings*                   ProfileSettings;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnlockAvatarAward_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             AvatarItemId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetSteamClanData_Parms
{
	// TArray< struct FSteamPlayerClanData >           Results;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms
{
	// int                                             TotalPlayers;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadOnlineAvatar_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Size;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadOnlineAvatarCompleteDelegate;                 		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UTexture2D*                               Avatar;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Title;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Description;                                      		// 0x0024 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetAchievements_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FAchievementDetails >            Achievements;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             TitleId;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms
{
	// int                                             TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAchievements
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execClearAchievements_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadAchievements_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowPlayersUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowFriendsUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execUnlockAchievement_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           PercentComplete;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execIsDeviceValid_Parms
{
	// int                                             DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  DeviceName;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             AddIndex;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptReceivedDataDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearAcceptReceivedDataDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptReceivedDataDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddAcceptReceivedDataDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptReceivedData
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnAcceptReceivedData_Parms
{
	// struct FString                                  Data;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDataSendingUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowDataSendingUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  DataName;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  DataDescription;                                  		// 0x0024 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         Data;                                             		// 0x0034 (0x0010) [0x0000000000000000]              
	// int                                             MaxSelectableUsers;                               		// 0x0044 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowHelpCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearShowHelpCompleteDelegate_Parms
{
	// struct FScriptDelegate                          HelpDelegate;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowHelpCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddShowHelpCompleteDelegate_Parms
{
	// struct FScriptDelegate                          HelpDelegate;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowHelpComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnShowHelpComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpForErrorUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowHelpForErrorUI_Parms
{
	// struct FString                                  ContextId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorString;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowHelpUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVideo
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowVideo_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowGamerCardCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearShowGamerCardCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GamerCardDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowGamerCardCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddShowGamerCardCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GamerCardDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowGamerCardComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnShowGamerCardComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPeoplePickerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearPeoplePickerCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPeoplePickerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddPeoplePickerCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPeoplePickerComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPeoplePickerComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FOnlineFriend >                  PeoplePicked;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPeoplePickerUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowPeoplePickerUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FOnlineFriend >                  People;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             MaxSelectable;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Text;                                             		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CloseCurrentContentUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execCloseCurrentContentUI_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentRedeemCodeUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowContentRedeemCodeUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  Offer;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProductDetailsUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowProductDetailsUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  ParentProductId;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execShowContentPurchaseUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  Offer;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             ParentProductType;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             RequestedProductTypes;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FString                                  ParentProductId;                                  		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           bManageStorage : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowInviteUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  InviteText;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowMessagesUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execDeleteMessage_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execUnmuteAll_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execMuteAll_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execCalcAggregateSkill_Parms
{
	// TArray< struct FDouble >                        Mus;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FDouble >                        Sigmas;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FDouble                                  OutAggregateMu;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FDouble                                  OutAggregateSigma;                                		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms
{
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ClientStatGuid;                                   		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	// struct FScriptDelegate                          RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms
{
	// struct FString                                  HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendTestEvent
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSendTestEvent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  TestStatInstancing;                               		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             TestStatParameter;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionResume
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSendPlayerSessionResume_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             GameplayModeId;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             DifficultyLevelId;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionPause
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSendPlayerSessionPause_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionEnd
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSendPlayerSessionEnd_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             GameplayModeId;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             DifficultyLevelId;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ExitStatusId;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionStart
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSendPlayerSessionStart_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  MultiplayerCorrelationId;                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             GameplayModeId;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             DifficultyLevelId;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnsubscribeToStatisticEvent
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnsubscribeToStatisticEvent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FName                                    StatName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribeToStatisticEvent
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execSubscribeToStatisticEvent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FName                                    StatName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FScriptDelegate                          EventDelegate;                                    		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStatisticChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnStatisticChanged_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    StatName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  NewStatValue;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             SendingPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  SendingNick;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetFriendMessages_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FOnlineFriendMessage >           FriendMessages;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execJoinFriendGame_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             Friend;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteByIdDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReceivedGameInviteByIdDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteByIdDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReceivedGameInviteByIdDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInviteById
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReceivedGameInviteById_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             InviterId;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckForGameInviteOnLaunch
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execCheckForGameInviteOnLaunch_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  InviterName;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToUsers
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execSendGameInviteToUsers_Parms
{
	// struct FString                                  SessionId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< struct FString >                        MembersToInvite;                                  		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  Text;                                             		// 0x0028 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Friends;                                          		// 0x000C (0x0010) [0x0000000000000000]              
	// struct FString                                  Text;                                             		// 0x001C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             Friend;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FString                                  Text;                                             		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             Friend;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  RequestingNick;                                   		// 0x000C (0x0010) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execRemoveFriend_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             FormerFriend;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execAddFriendByName_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  FriendName;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execAddFriend_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             NewFriend;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms
{
	// unsigned char                                   bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms
{
	// struct FScriptDelegate                          InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms
{
	// struct FScriptDelegate                          InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execHideKeyboardUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  TitleText;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  DescriptionText;                                  		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           bIsPassword : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bShouldValidate : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  DefaultText;                                      		// 0x002C (0x0010) [0x0000000000000000]              
	// int                                             MaxResultLength;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  StatusString;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           PlayerActive : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetTitleFileState_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadTitleFile_Parms
{
	// struct FString                                  FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Filename;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms
{
	// struct FScriptDelegate                          StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms
{
	// struct FScriptDelegate                          StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetLocale_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetNATType_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms
{
	// struct FScriptDelegate                          ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms
{
	// struct FScriptDelegate                          ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms
{
	// unsigned char                                   ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsControllerConnected_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms
{
	// struct FScriptDelegate                          ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms
{
	// struct FScriptDelegate                          ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnControllerChange_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bPauseGame : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms
{
	// unsigned char                                   NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms
{
	// struct FScriptDelegate                          ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms
{
	// struct FScriptDelegate                          ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms
{
	// DWORD                                           bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms
{
	// struct FScriptDelegate                          LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms
{
	// struct FScriptDelegate                          LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms
{
	// DWORD                                           bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execHasLinkConnection_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerIDForPlayerNickname
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetPlayerIDForPlayerNickname_Parms
{
	// struct FString                                  InPlayerNickname;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             OutPlayerId;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameForPlayerId
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetPlayerNicknameForPlayerId_Parms
{
	// struct FUniqueNetId                             InPlayerId;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  OutPlayerNickname;                                		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
struct UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms
{
	// int                                             UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< struct FOnlinePlayerScore >             PlayerScores;                                     		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms
{
	// struct FScriptDelegate                          FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms
{
	// struct FScriptDelegate                          FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             Player;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UOnlineStatsWrite*                        StatsWrite;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execFreeStats_Parms
{
	// class UOnlineStatsRead*                         StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineStatsRead*                         StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             NumRows;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineStatsRead*                         StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             StartIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             NumToRead;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineStatsRead*                         StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           FavoriteFriendsOnly : 1;                          		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             NumToRead;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadOnlineStats_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UOnlineStatsRead*                         StatsRead;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForPlayer
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadOnlineStatsForPlayer_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineStatsRead*                         StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineProfilesCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadOnlineProfilesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadOnlineProfileDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineProfilesCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadOnlineProfilesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadOnlineProfileDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineProfilesComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineProfilesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FString >                        PlayerIDs;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< struct FOnlineProfile >                 OnlineProfiles;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineProfilesForPlayers
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadOnlineProfilesForPlayers_Parms
{
	// TArray< struct FString >                        PlayerIDs;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class USpeechRecognition*                       SpeechRecogObj;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSelectVocabulary_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FSpeechRecognizedWord >          Words;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Parms
{
	// struct FScriptDelegate                          TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Parms
{
	// struct FScriptDelegate                          TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoteTalkerStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRemoteTalkerStatusChange_Parms
{
	// struct FUniqueNetId                             RemoteNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsTalking : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Parms
{
	// struct FUniqueNetId                             Player;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsTalking : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdatePlayerMuteSetting
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUpdatePlayerMuteSetting_Parms
{
	// DWORD                                           PlayerMuteSetting : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTalkerMuted
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsTalkerMuted_Parms
{
	// struct FUniqueNetId                             ConsoleId;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             Priority;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms
{
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterRemoteTalkerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearUnregisterRemoteTalkerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterRemoteTalkerCompleteDelegate;           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterRemoteTalkerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddUnregisterRemoteTalkerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterRemoteTalkerCompleteDelegate;           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterRemoteTalkerComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnUnregisterRemoteTalkerComplete_Parms
{
	// struct FUniqueNetId                             RemoteNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterLocalTalkerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearUnregisterLocalTalkerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterLocalTalkerCompleteDelegate;            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterLocalTalkerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddUnregisterLocalTalkerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterLocalTalkerCompleteDelegate;            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterLocalTalkerComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnUnregisterLocalTalkerComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterLocalTalkerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearRegisterLocalTalkerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RegisterLocalTalkerCompleteDelegate;              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterLocalTalkerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddRegisterLocalTalkerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RegisterLocalTalkerCompleteDelegate;              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterLocalTalkerComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnRegisterLocalTalkerComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms
{
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms
{
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReceiveReliableVoicePacket
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReceiveReliableVoicePacket_Parms
{
	// unsigned char                                   MessageType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             Sender;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             Length;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned char                                   InData[ 0x3C ];                                   		// 0x0010 (0x003C) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyLocalTalkersRegistered
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAreAnyLocalTalkersRegistered_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ChannelIndex;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ChannelIndex;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetFriendsList_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FOnlineFriend >                  Friends;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadFriendsList_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlinePlayerStorage*                     PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             DeviceID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlinePlayerStorage*                     ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	// struct FUniqueNetId                             NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	// struct FUniqueNetId                             NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms
{
	// struct FUniqueNetId                             NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             NetId;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UOnlinePlayerStorage*                     PlayerStorage;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlinePlayerStorage*                     PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             DeviceID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineProfileSettings*                   ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetProfileSettings_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineProfileSettings*                   ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execReadProfileSettings_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineProfileSettings*                   ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms
{
	// struct FScriptDelegate                          MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms
{
	// struct FScriptDelegate                          MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCurrentUserChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearCurrentUserChangedDelegate_Parms
{
	// struct FScriptDelegate                          CurrentUserDelegate;                              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCurrentUserChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddCurrentUserChangedDelegate_Parms
{
	// struct FScriptDelegate                          CurrentUserDelegate;                              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCurrentUserChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnCurrentUserChanged_Parms
{
	// unsigned char                                   CurrentUserLocalNum;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  CurrentUser;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  LoggedInUser;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms
{
	// struct FScriptDelegate                          CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms
{
	// struct FScriptDelegate                          CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms
{
	// struct FScriptDelegate                          LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms
{
	// struct FScriptDelegate                          LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms
{
	// unsigned char                                   NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             NewId;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms
{
	// struct FScriptDelegate                          LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms
{
	// struct FScriptDelegate                          LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsMuted_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execAreAnyFriends_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< struct FFriendsQuery >                  Query;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execIsFriend_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanUploadFitnessData_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanShareKinectContent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanBrowseInternet_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanUseCloudStorage_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanRecordDVRClips_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanCommunicateVoice_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanCommunicateVideo_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execCanCommunicateText_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execCanPlayOnline_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevelHint;                               		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bAttemptToResolve : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Reason;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeLevelCheckedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearPrivilegeLevelCheckedDelegate_Parms
{
	// struct FScriptDelegate                          PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeLevelCheckedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddPrivilegeLevelCheckedDelegate_Parms
{
	// struct FScriptDelegate                          PrivilegeDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeLevelChecked
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPrivilegeLevelChecked_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   Privilege;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
	// unsigned char                                   PrivilegeLevel;                                   		// 0x0002 (0x0001) [0x0000000000000000]              
	// DWORD                                           bDiffersFromHint : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execCanCommunicate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerIdFromNetId
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetControllerIdFromNetId_Parms
{
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ControllerId;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsLocalLogin_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsGuestLogin_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execGetLoginStatus_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PairUserAndControllerAtIndex
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execPairUserAndControllerAtIndex_Parms
{
	// unsigned char                                   PlayerIndex;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ControllerIndex;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	// int                                             PairIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearSystemUserContrllerPairingChangedDelegate_Parms
{
	// struct FScriptDelegate                          PairingChangeDelegate;                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddSystemUserContrllerPairingChangedDelegate_Parms
{
	// struct FScriptDelegate                          PairingChangeDelegate;                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Parms
{
	// int                                             NewLocalUserNum;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PreviousLocalUserNum;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execLogout_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          LoginFailedDelegate;                              		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          LoginFailedDelegate;                              		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginFailed_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execAutoLogin_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginCompleteDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginComplete_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   ErrorCode;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemSteamworks_execLogin_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  LoginName;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Password;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWantsLocalOnly : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execShowLoginUI_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bShowOnlineOnly : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearURLTokenRetrievedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearURLTokenRetrievedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          tsrDelegate;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddURLTokenRetrievedDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddURLTokenRetrievedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          tsrDelegate;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTokenAndSignatureForURL
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetTokenAndSignatureForURL_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTokenAndSignatureRetrieved
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnTokenAndSignatureRetrieved_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Token;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Signature;                                        		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendsChange_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnMutingChange_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginChange_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemSteamworks_eventExit_Parms
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemSteamworks_eventInit_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetServerPassword
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execSetServerPassword_Parms
{
	// struct FString                                  Password;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetFriendNickname
// [0x00024002] 
struct UKFOnlineLobbySteamworks_execGetFriendNickname_Parms
{
	// struct FUniqueNetId                             FriendId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           IncludeSelf : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  ReturnValue;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// struct FString                                  NickName;                                         		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetCurrentLobby
// [0x00C20002] 
struct UKFOnlineLobbySteamworks_execGetCurrentLobby_Parms
{
	// struct FActiveLobbyInfo                         LobbyInfo;                                        		// 0x0000 (0x0028) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FActiveLobbyInfo                         I;                                                		// 0x002C (0x0028) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetLobbyURLString
// [0x00820002] 
struct UKFOnlineLobbySteamworks_execGetLobbyURLString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FActiveLobbyInfo                         LobbyInfo;                                        		// 0x0010 (0x0028) [0x0000000000000000]              
	// struct FString                                  LobbyURLString;                                   		// 0x0038 (0x0010) [0x0000000000000000]              
	// struct FLobbyMember                             Member;                                           		// 0x0048 (0x0018) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.TestFindLobbies
// [0x00020802] ( FUNC_Event )
struct UKFOnlineLobbySteamworks_eventTestFindLobbies_Parms
{
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyMessage
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execLobbyMessage_Parms
{
	// struct FString                                  Message;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyReceiveMessage
// [0x00C20002] 
struct UKFOnlineLobbySteamworks_execOnLobbyReceiveMessage_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Type;                                             		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  Message;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             MemberId;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FString                                  NickName;                                         		// 0x0040 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.ConsolePrint
// [0x00020802] ( FUNC_Event )
struct UKFOnlineLobbySteamworks_eventConsolePrint_Parms
{
	// struct FString                                  Message;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetPC
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execGetPC_Parms
{
	// class APlayerController*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetVisibility
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execSetVisibility_Parms
{
	// int                                             VisibilityIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetLobbyData
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execSetLobbyData_Parms
{
	// struct FString                                  Key;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Value;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetLobbyData
// [0x00020400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execGetLobbyData_Parms
{
	// int                                             LobbyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Key;                                              		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.NotifyLobbyStatusChanged
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execNotifyLobbyStatusChanged_Parms
{
	// DWORD                                           bInLobby : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.NotifyUnsuccessfulSearch
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execNotifyUnsuccessfulSearch_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.FindLobbiesComplete
// [0x00420002] 
struct UKFOnlineLobbySteamworks_execFindLobbiesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FBasicLobbyInfo >                LobbyList;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.FindLobbies
// [0x00024002] 
struct UKFOnlineLobbySteamworks_execFindLobbies_Parms
{
	// int                                             MaxResults;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< struct FLobbyFilter >                   Filters;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< struct FLobbySortFilter >               SortFilters;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
	// int                                             MinSlots;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Distance;                                         		// 0x0028 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyJoinGame
// [0x00420002] 
struct UKFOnlineLobbySteamworks_execOnLobbyJoinGame_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             ServerID;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FString                                  ServerIP;                                         		// 0x001C (0x0010) [0x0000000000000000]              
	// DWORD                                           bSuccess : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyJoinServer
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execLobbyJoinServer_Parms
{
	// struct FString                                  ServerIP;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyJoinGameDelegate
// [0x00820002] 
struct UKFOnlineLobbySteamworks_execLobbyJoinGameDelegate_Parms
{
	// struct FUniqueNetId                             ServerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyJoinGame
// [0x00024002] 
struct UKFOnlineLobbySteamworks_execLobbyJoinGame_Parms
{
	// struct FString                                  ServerIP;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.AppendPasswordToURL
// [0x00020400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execAppendPasswordToURL_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Password;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetConnectedServerIP
// [0x00020400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execGetConnectedServerIP_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetLobbyServerIP
// [0x00420400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execGetLobbyServerIP_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetServerConnected
// [0x00020400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execGetServerConnected_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetLobbyServer
// [0x00020400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execSetLobbyServer_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  ServerIP;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.JoinServer
// [0x00020400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execJoinServer_Parms
{
	// struct FString                                  ServerIP;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             ServerID;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetMyId
// [0x00820002] 
struct UKFOnlineLobbySteamworks_execGetMyId_Parms
{
	// struct FUniqueNetId                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             LoggedInPlayer;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.QuitLobby
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execQuitLobby_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           Success : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnJoinLobbyComplete
// [0x00420002] 
struct UKFOnlineLobbySteamworks_execOnJoinLobbyComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             LobbyUID;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  ServerIPAddress;                                  		// 0x0030 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyInvite
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execOnLobbyInvite_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             FriendId;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bAccepted : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyInvite
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execLobbyInvite_Parms
{
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             FriendId;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bAccepted : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyMemberStatusUpdate
// [0x00C20002] 
struct UKFOnlineLobbySteamworks_execOnLobbyMemberStatusUpdate_Parms
{
	// TArray< struct FActiveLobbyInfo >               LobbyList;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             LobbyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             InstigatorIndex;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  Status;                                           		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             MemberId;                                         		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FString                                  NickName;                                         		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetFriendUniqueId
// [0x00824002] 
struct UKFOnlineLobbySteamworks_execGetFriendUniqueId_Parms
{
	// struct FString                                  NickName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           IncludeSelf : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReadState;                                        		// 0x001C (0x0001) [0x0000000000000000]              
	// TArray< struct FOnlineFriend >                  Friends;                                          		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FOnlineFriend                            I;                                                		// 0x0030 (0x0038) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.InviteFriendToLobby
// [0x00820802] ( FUNC_Event )
struct UKFOnlineLobbySteamworks_eventInviteFriendToLobby_Parms
{
	// struct FString                                  NickName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           Success : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             FriendId;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.ShowLobbyInviteInterface
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execShowLobbyInviteInterface_Parms
{
	// struct FString                                  InviteMessage;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.ShowLobbyInviteInterfaceInternal
// [0x00020400] ( FUNC_Native )
struct UKFOnlineLobbySteamworks_execShowLobbyInviteInterfaceInternal_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnCreateLobbyComplete
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execOnCreateLobbyComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             LobbyId;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x000C (0x0010) [0x0000000000000000]              
	// struct FString                                  ConnectedServerIP;                                		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.MakeLobby
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execMakeLobby_Parms
{
	// int                                             MaxPlayers;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.Initialize
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execInitialize_Parms
{
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.IsLobbyOwner
// [0x00820002] 
struct UKFOnlineLobbySteamworks_execIsLobbyOwner_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           Success : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             OwnerId;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.IsInLobby
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execIsInLobby_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetCurrentLobbyId
// [0x00020002] 
struct UKFOnlineLobbySteamworks_execGetCurrentLobbyId_Parms
{
	// struct FUniqueNetId                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif