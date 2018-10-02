/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LobbySortFilter
// 0x0014
struct FLobbySortFilter
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                TargetVal;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x000C
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x000C
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPlayerListResponseMapping
// 0x000C
struct FServerQueryToPlayerListResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x0048
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                         		// 0x0000 (0x0048) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakingQueryState
// 0x0080
struct FMatchmakingQueryState
{
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FServerQueryToRulesResponseMapping > QueryToRulesResponseMap;                          		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FServerQueryToPingResponseMapping > QueryToPingResponseMap;                           		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FServerQueryToPlayerListResponseMapping     PlayerListQuery;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FPointer                                    ServerListResponse;                               		// 0x0034 (0x0008) [0x0000000000000000]              
	unsigned char                                      CurrentMatchmakingType;                           		// 0x003C (0x0001) [0x0000000000000000]              
	struct FPointer                                    CurrentMatchmakingQuery;                          		// 0x0040 (0x0008) [0x0000000000000000]              
	TArray< struct FClientFilterORClause >             ActiveClientsideFilters;                          		// 0x0048 (0x0010) [0x0000000000000000]              
	TArray< class UOnlineGameSettings* >               PendingRulesSearchSettings;                       		// 0x0058 (0x0010) [0x0000000000000000]              
	TArray< class UOnlineGameSettings* >               PendingPingSearchSettings;                        		// 0x0068 (0x0010) [0x0000000000000000]              
	DWORD                                              bIgnoreRefreshComplete : 1;                       		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastActivityTimestamp;                            		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x003C
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      KeyType;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FString                                     RawKey;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     SteamKey;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	DWORD                                              bReverseFilter : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     IgnoreValue;                                      		// 0x002C (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FavoriteServer
// 0x000C
struct FFavoriteServer
{
	int                                                IP;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ConnectionPort;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                QueryPort;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0028
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      UpdateType;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                LeaderboardSize;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      SortType;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      DisplayFormat;                                    		// 0x0019 (0x0001) [0x0000000000000000]              
	struct FLeaderboardHandle                          LeaderboardRef;                                   		// 0x001C (0x0008) [0x0000000000000000]              
	DWORD                                              bLeaderboardInitializing : 1;                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bLeaderboardInitiated : 1;                        		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x002C
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      RequestType;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                Start;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                End;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      PlayerList;                                       		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x0024
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      LeaderboardData;                                  		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x0020
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      LeaderboardData;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0014
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     LeaderboardName;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0020
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanTag;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0038
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadDelegates;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   WriteDelegates;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ProfileDataChangedDelegates;                      		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x0024
struct FDeviceIdCache
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0004 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray< struct FScriptDelegate >                   DeviceSelectionDelegates;                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001(0x0009 - 0x0008)
struct FLocalTalkerSteam : FLocalTalker
{
	unsigned char                                      MuteType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	DWORD                                              bUnlock : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       AchievementName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                ViewId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ProgressCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxProgress;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	DWORD                                              bAutoUnlock : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0024
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumberOfAttempts;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Size;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0014 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0018 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0020
struct FSteamUserCloudMetadata
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FEmsFile >                          UserCloudMetadata;                                		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0020
struct FSteamUserCloud
{
	struct FString                                     UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FTitleFile >                        UserCloudFileData;                                		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                bLastIsControllerConnected;                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0014
struct FOnlineStatusMapping
{
	int                                                StatusId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StatusString;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x001C
struct FPlayerStat
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ColumnId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0008 (0x0014) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0058
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     StatGuid;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FPlayerStat >                       Stats;                                            		// 0x0028 (0x0010) [0x0000000000000000]              
	struct FOnlinePlayerScore                          Score;                                            		// 0x0038 (0x0010) [0x0000000000000000]              
	struct FString                                     Place;                                            		// 0x0048 (0x0010) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif