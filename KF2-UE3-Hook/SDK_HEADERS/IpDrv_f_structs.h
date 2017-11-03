/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_f_structs.h
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

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] ( FUNC_Event )
struct AInternetLink_eventResolveFailed_Parms
{
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] ( FUNC_Event )
struct AInternetLink_eventResolved_Parms
{
	// struct FIpAddr                                  Addr;                                             		// 0x0000 (0x0014) [0x0000000000000000]              
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execGetLocalIP_Parms
{
	// struct FIpAddr                                  Arg;                                              		// 0x0000 (0x0014) [0x0000000000000000]              
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execStringToIpAddr_Parms
{
	// struct FString                                  Str;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FIpAddr                                  Addr;                                             		// 0x0010 (0x0014) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execIpAddrToString_Parms
{
	// struct FIpAddr                                  Arg;                                              		// 0x0000 (0x0014) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execGetLastError_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execResolve_Parms
{
	// struct FString                                  Domain;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execParseURL_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Addr;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             PortNum;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FString                                  LevelName;                                        		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  EntryName;                                        		// 0x0034 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execIsDataPending_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedBinary_Parms
{
	// int                                             Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000000]              
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedLine_Parms
{
	// struct FString                                  Line;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedText_Parms
{
	// struct FString                                  Text;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventClosed_Parms
{
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventOpened_Parms
{
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventAccepted_Parms
{
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] ( FUNC_Native )
struct ATcpLink_execReadBinary_Parms
{
	// int                                             Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] ( FUNC_Native )
struct ATcpLink_execReadText_Parms
{
	// struct FString                                  Str;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execSendBinary_Parms
{
	// int                                             Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execSendText_Parms
{
	// struct FString                                  Str;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execIsConnected_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TcpLink.Close
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execClose_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TcpLink.Open
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execOpen_Parms
{
	// struct FIpAddr                                  Addr;                                             		// 0x0000 (0x0014) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execListen_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] ( FUNC_Native )
struct ATcpLink_execBindPort_Parms
{
	// int                                             PortNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bUseNextAvailable : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpServiceBase.GetUserAuthURL
// [0x00020002] 
struct UMcpServiceBase_execGetUserAuthURL_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  AuthTicket;                                       		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
// [0x00020002] 
struct UMcpServiceBase_execGetAppAccessURL_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpServiceBase.GetBaseURL
// [0x00020002] 
struct UMcpServiceBase_execGetBaseURL_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpServiceBase.Init
// [0x00020802] ( FUNC_Event )
struct UMcpServiceBase_eventInit_Parms
{
	// class UClass*                                   McpConfigClass;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Parms
{
	// struct FUniqueNetId                             UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UOnlineMatchmakingStats*                  MMStats;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms
{
	// struct FUniqueNetId                             UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< unsigned char >                         Payload;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadPlayerData_Parms
{
	// struct FUniqueNetId                             UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  PlayerNick;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
	// class UOnlineProfileSettings*                   ProfileSettings;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UOnlinePlayerStorage*                     PlayerStorage;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execGetNews_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             NewsIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms
{
	// struct FScriptDelegate                          ReadGameNewsDelegate;                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms
{
	// struct FScriptDelegate                          ReadNewsDelegate;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000] 
struct UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   NewsType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400] ( FUNC_Native )
struct UOnlineNewsInterfaceMcp_execReadNews_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadBase_execGetUrlForFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execClearRequestTitleFileListCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RequestTitleFileListDelegate;                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execAddRequestTitleFileListCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RequestTitleFileListDelegate;                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
// [0x00120000] 
struct UOnlineTitleFileDownloadBase_execOnRequestTitleFileListComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FString >                        FilePaths;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execRequestTitleFileList_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execClearDownloadedFiles_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
// [0x00020000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileState_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
// [0x00420000] 
struct UOnlineTitleFileDownloadBase_execGetTitleFileContents_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execClearReadTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadBase_execAddReadTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
// [0x00024000] 
struct UOnlineTitleFileDownloadBase_execReadTitleFile_Parms
{
	// struct FString                                  FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   FileType;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineTitleFileDownloadBase_execOnReadTitleFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Filename;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00024400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms
{
	// struct FString                                  FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   FileType;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execGetUrlForFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execOnFileListReceived_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          RequestTitleFileListDelegate;                     		// 0x0018 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        ResponseStr;                                      		// 0x0028 (0x0010) [0x0000000000000000]              
	// DWORD                                           bSuccess : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execRequestTitleFileList_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    HTTPRequest;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadWeb_execClearDownloadedFiles_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadWeb_execGetTitleFileState_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineTitleFileDownloadWeb_execGetTitleFileContents_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UOnlineTitleFileDownloadWeb_execTriggerDelegates_Parms
{
	// DWORD                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  FileRead;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
// [0x00040003] ( FUNC_Final )
struct UOnlineTitleFileDownloadWeb_execOnFileDownloadComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bSuccess : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             FileIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         BinaryData;                                       		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FString                                  FileCompressionTypeString;                        		// 0x0040 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
// [0x00024002] 
struct UOnlineTitleFileDownloadWeb_execReadTitleFile_Parms
{
	// struct FString                                  FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   FileType;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             FileIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineTitleFileDownloadWeb_execUncompressTitleFileContents_Parms
{
	// unsigned char                                   FileCompressionType;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< unsigned char >                         CompressedFileContents;                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         UncompressedFileContents;                         		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execDeleteTitleFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execDeleteTitleFiles_Parms
{
	// float                                           MaxAgeSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execClearCachedFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execClearCachedFiles_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execGetTitleFileLogicalName_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execGetTitleFileHash_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execGetTitleFileState_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UTitleFileDownloadCache_execGetTitleFileContents_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execClearSaveTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          SaveCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execAddSaveTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          SaveCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
// [0x00120000] 
struct UTitleFileDownloadCache_execOnSaveTitleFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Filename;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execSaveTitleFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  LogicalName;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execClearLoadTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          LoadCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
// [0x00020002] 
struct UTitleFileDownloadCache_execAddLoadTitleFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          LoadCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
// [0x00120000] 
struct UTitleFileDownloadCache_execOnLoadTitleFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Filename;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
// [0x00020400] ( FUNC_Native )
struct UTitleFileDownloadCache_execLoadTitleFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageBase.CacheMessageContents
// [0x00420000] 
struct UMcpMessageBase_execCacheMessageContents_Parms
{
	// TArray< unsigned char >                         MessageContents;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageId;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageBase.CacheMessage
// [0x00020000] 
struct UMcpMessageBase_execCacheMessage_Parms
{
	// struct FMcpMessage                              Message;                                          		// 0x0000 (0x0064) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.GetMessageContents
// [0x00420000] 
struct UMcpMessageBase_execGetMessageContents_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         MessageContents;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
// [0x00120000] 
struct UMcpMessageBase_execOnQueryMessageContentsComplete_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.QueryMessageContents
// [0x00020000] 
struct UMcpMessageBase_execQueryMessageContents_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.GetMessageList
// [0x00420000] 
struct UMcpMessageBase_execGetMessageList_Parms
{
	// struct FString                                  ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpMessageList                          MessageList;                                      		// 0x0010 (0x0020) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
// [0x00120000] 
struct UMcpMessageBase_execOnQueryMessagesComplete_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.QueryMessages
// [0x00020000] 
struct UMcpMessageBase_execQueryMessages_Parms
{
	// struct FString                                  ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
// [0x00120000] 
struct UMcpMessageBase_execOnDeleteMessageComplete_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.DeleteMessage
// [0x00020000] 
struct UMcpMessageBase_execDeleteMessage_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
// [0x00120000] 
struct UMcpMessageBase_execOnCreateMessageComplete_Parms
{
	// struct FMcpMessage                              Message;                                          		// 0x0000 (0x0064) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0068 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.CreateMessage
// [0x00420000] 
struct UMcpMessageBase_execCreateMessage_Parms
{
	// TArray< struct FString >                        ToUniqueUserIds;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  FromUniqueUserId;                                 		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  FromFriendlyName;                                 		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageType;                                      		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FString                                  PushMessage;                                      		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FString                                  ValidUntil;                                       		// 0x0050 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         MessageContents;                                  		// 0x0060 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpMessageBase_execCreateInstance_Parms
{
	// class UMcpMessageBase*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpMessageBaseClass;                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpMessageBase*                          NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.CacheMessageContents
// [0x00420002] 
struct UMcpMessageManager_execCacheMessageContents_Parms
{
	// TArray< unsigned char >                         MessageContents;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageId;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MessageContentsIndex;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageById
// [0x00420002] 
struct UMcpMessageManager_execGetMessageById_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpMessage                              Message;                                          		// 0x0010 (0x0064) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MessageListsSize;                                 		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             MessageListsItr;                                  		// 0x007C (0x0004) [0x0000000000000000]              
	// int                                             MessageItr;                                       		// 0x0080 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.CacheMessage
// [0x00820002] 
struct UMcpMessageManager_execCacheMessage_Parms
{
	// struct FMcpMessage                              Message;                                          		// 0x0000 (0x0064) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             MessageIndex;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	// int                                             MessageListIndex;                                 		// 0x006C (0x0004) [0x0000000000000000]              
	// struct FMcpMessageList                          UserMessageList;                                  		// 0x0070 (0x0020) [0x0000000000000000]              
	// DWORD                                           bWasFound : 1;                                    		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.GetMessageContents
// [0x00420002] 
struct UMcpMessageManager_execGetMessageContents_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         MessageContents;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MessageContentsIndex;                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
// [0x00840003] ( FUNC_Final )
struct UMcpMessageManager_execOnQueryMessageContentsRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         MessageContents;                                  		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageId;                                        		// 0x0028 (0x0010) [0x0000000000000000]              
	// struct FMcpMessage                              Message;                                          		// 0x0038 (0x0064) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.QueryMessageContents
// [0x00020002] 
struct UMcpMessageManager_execQueryMessageContents_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    QueryMessageContentsRequest;                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.GetMessageList
// [0x00420002] 
struct UMcpMessageManager_execGetMessageList_Parms
{
	// struct FString                                  ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpMessageList                          MessageList;                                      		// 0x0010 (0x0020) [0x0000000000000000]              
	// int                                             MessageListIndex;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
// [0x00840003] ( FUNC_Final )
struct UMcpMessageManager_execOnQueryMessagesRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x0028 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FMcpMessage                              Message;                                          		// 0x0044 (0x0064) [0x0000000000000000]              
	// struct FString                                  MessageCompressionTypeString;                     		// 0x00A8 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.QueryMessages
// [0x00020002] 
struct UMcpMessageManager_execQueryMessages_Parms
{
	// struct FString                                  ToUniqueUserId;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    QueryMessagesRequest;                             		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
// [0x00020002] 
struct UMcpMessageManager_execOnDeleteMessageRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageId;                                        		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.DeleteMessage
// [0x00020002] 
struct UMcpMessageManager_execDeleteMessage_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    DeleteMessageRequest;                             		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
// [0x00820002] 
struct UMcpMessageManager_execOnCreateMessageRequestComplete_Parms
{
	// class UHttpRequestInterface*                    CreateMessageRequest;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FMcpMessage                              CreatedMessage;                                   		// 0x0028 (0x0064) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.CreateMessage
// [0x00C20002] 
struct UMcpMessageManager_execCreateMessage_Parms
{
	// TArray< struct FString >                        ToUniqueUserIds;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  FromUniqueUserId;                                 		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  FromFriendlyName;                                 		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageType;                                      		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FString                                  PushMessage;                                      		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FString                                  ValidUntil;                                       		// 0x0050 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         MessageContents;                                  		// 0x0060 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0070 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    CreateMessageRequest;                             		// 0x0080 (0x0008) [0x0000000000000000]              
	// struct FMcpMessage                              Message;                                          		// 0x0088 (0x0064) [0x0000000000000000]              
	// struct FString                                  ToUniqueUserIdsStr;                               		// 0x00EC (0x0010) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x00FC (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
// [0x00420802] ( FUNC_Event )
struct UMcpMessageManager_eventFinishedAsyncUncompression_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< unsigned char >                         UncompressedMessageContents;                      		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  MessageId;                                        		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
// [0x00420400] ( FUNC_Native )
struct UMcpMessageManager_execStartAsyncUncompression_Parms
{
	// struct FString                                  MessageId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   MessageCompressionType;                           		// 0x0010 (0x0001) [0x0000000000000000]              
	// TArray< unsigned char >                         MessageContent;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
// [0x00420400] ( FUNC_Native )
struct UMcpMessageManager_execStartAsyncCompression_Parms
{
	// unsigned char                                   MessageCompressionType;                           		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< unsigned char >                         MessageContent;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearAllDelegates_Parms
{
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearDeleteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddDeleteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DeleteUserFileCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execCallDeleteUserFileCompleteDelegates_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnDeleteUserFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execOnHTTPRequestDeleteUserFileComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FString                                  UserId;                                           		// 0x002C (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
// [0x00020002] 
struct UMcpUserCloudFileDownload_execDeleteUserFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bShouldCloudDelete : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bShouldLocallyDelete : 1;                         		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0034 (0x0010) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearWriteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddWriteUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          WriteUserFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execCallWriteUserFileCompleteDelegates_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnWriteUserFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execOnHTTPRequestWriteUserFileComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FString                                  UserId;                                           		// 0x002C (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
// [0x00440003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execGetUserFileIndexForRequest_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             UserIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
// [0x00420002] 
struct UMcpUserCloudFileDownload_execWriteUserFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x003C (0x0010) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearReadUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddReadUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ReadUserFileCompleteDelegate;                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execCallReadUserFileCompleteDelegates_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnReadUserFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execOnHTTPRequestReadUserFileComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FString                                  UserId;                                           		// 0x002C (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< unsigned char >                         FileContents;                                     		// 0x0040 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
// [0x00020002] 
struct UMcpUserCloudFileDownload_execReadUserFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x002C (0x0010) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
// [0x00420002] 
struct UMcpUserCloudFileDownload_execGetUserFileList_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FEmsFile >                       UserFiles;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             EntryIdx;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearEnumerateUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
struct UMcpUserCloudFileDownload_execAddEnumerateUserFileCompleteDelegate_Parms
{
	// struct FScriptDelegate                          EnumerateUserFileCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execCallEnumerateUserFileCompleteDelegates_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          CallDelegate;                                     		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
// [0x00120000] 
struct UMcpUserCloudFileDownload_execOnEnumerateUserFilesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UserId;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
// [0x00040003] ( FUNC_Final )
struct UMcpUserCloudFileDownload_execOnHTTPRequestEnumerateUserFilesComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             JsonIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FString                                  UserId;                                           		// 0x002C (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x003C (0x0008) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
// [0x00020002] 
struct UMcpUserCloudFileDownload_execEnumerateUserFiles_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             EntryIdx;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearFile_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bResult : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
// [0x00020002] 
struct UMcpUserCloudFileDownload_execClearFiles_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bResult : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
// [0x00420002] 
struct UMcpUserCloudFileDownload_execGetFileContents_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bResult : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             EntryIdx;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeacon_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconClient.DebugRender
// [0x00020002] 
struct UMeshBeaconClient_execDebugRender_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             HistoryIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Offset;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconClient.DumpInfo
// [0x00020002] 
struct UMeshBeaconClient_execDumpInfo_Parms
{
	// int                                             HistoryIdx;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms
{
	// DWORD                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0014 (0x0050) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// TArray< struct FPlayerMember >                  Players;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnTravelRequestReceived_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms
{
	// unsigned char                                   TestType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   TestResult;                                       		// 0x0001 (0x0001) [0x0000000000000000]              
	// struct FConnectionBandwidthStats                BandwidthStats;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms
{
	// unsigned char                                   TestType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000] 
struct UMeshBeaconClient_execOnConnectionRequestResult_Parms
{
	// unsigned char                                   ConnectionResult;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconClient_execBeginBandwidthTest_Parms
{
	// unsigned char                                   TestType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             TestBufferSize;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconClient_execRequestConnection_Parms
{
	// struct FOnlineGameSearchResult                  DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FClientConnectionRequest                 ClientRequest;                                    		// 0x0010 (0x0028) [0x0000000000000000]              
	// DWORD                                           bRegisterSecureAddress : 1;                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeaconClient_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconHost.DebugRender
// [0x00820002] 
struct UMeshBeaconHost_execDebugRender_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             CurOptimalHostId;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ClientIdx;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             HistoryIdx;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             NetId;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           Offset;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.DumpConnections
// [0x00820002] 
struct UMeshBeaconHost_execDumpConnections_Parms
{
	// int                                             ClientIdx;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HistoryIdx;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             NetId;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms
{
	// DWORD                                           bSucceeded : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0014 (0x0050) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execRequestClientCreateNewSession_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< struct FPlayerMember >                  Players;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execTellClientsToTravel_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000] 
struct UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms
{
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execAllPlayersConnected_Parms
{
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002] 
struct UMeshBeaconHost_execSetPendingPlayerConnections_Parms
{
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000] 
struct UMeshBeaconHost_execOnFinishedBandwidthTest_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   TestType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	// unsigned char                                   TestResult;                                       		// 0x0009 (0x0001) [0x0000000000000000]              
	// struct FConnectionBandwidthStats                BandwidthStats;                                   		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000] 
struct UMeshBeaconHost_execOnStartedBandwidthTest_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   TestType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms
{
	// struct FClientMeshBeaconConnection              NewClientConnection;                              		// 0x0000 (0x0060) [0x0000000000000000]              
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002] 
struct UMeshBeaconHost_execAllowBandwidthTesting_Parms
{
	// DWORD                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execCancelPendingBandwidthTests_Parms
{
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execHasPendingBandwidthTest_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms
{
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execHasInProgressBandwidthTest_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execRequestClientBandwidthTest_Parms
{
	// struct FUniqueNetId                             PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   TestType;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	// int                                             TestBufferSize;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeaconHost_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execInitHostBeacon_Parms
{
	// struct FUniqueNetId                             InOwningPlayerId;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   OutRegisteredPlayers;                             		// 0x0008 (0x0010) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] ( FUNC_Event )
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms
{
	// int                                             UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerAddr_Parms
{
	// struct FIpAddr                                  OutServerIP;                                      		// 0x0000 (0x0014) [0x0000000000000000]              
	// int                                             OutServerPort;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execGetServerUniqueId_Parms
{
	// struct FUniqueNetId                             OutServerUID;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FLocalAuthSession                        OutSessionInfo;                                   		// 0x0008 (0x0024) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindServerAuthSession_Parms
{
	// class UPlayer*                                  ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FAuthSession                             OutSessionInfo;                                   		// 0x0008 (0x0028) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Parms
{
	// class UPlayer*                                  ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FLocalAuthSession                        OutSessionInfo;                                   		// 0x0008 (0x0024) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00420400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindClientAuthSession_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FAuthSession                             OutSessionInfo;                                   		// 0x0008 (0x0028) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
// [0x00420404] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execAllLocalServerAuthSessions_Parms
{
	// struct FLocalAuthSession                        OutSessionInfo;                                   		// 0x0000 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
// [0x00420404] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execAllServerAuthSessions_Parms
{
	// struct FAuthSession                             OutSessionInfo;                                   		// 0x0000 (0x0028) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
// [0x00420404] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execAllLocalClientAuthSessions_Parms
{
	// struct FLocalAuthSession                        OutSessionInfo;                                   		// 0x0000 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
// [0x00420404] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execAllClientAuthSessions_Parms
{
	// struct FAuthSession                             OutSessionInfo;                                   		// 0x0000 (0x0028) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndAllRemoteServerAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndAllLocalServerAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndRemoteServerAuthSession_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndLocalServerAuthSession_Parms
{
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyServerAuthSession_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             AuthTicketUID;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateServerAuthSession_Parms
{
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ClientPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             OutAuthTicketUID;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndAllRemoteClientAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndAllLocalClientAuthSessions_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndRemoteClientAuthSession_Parms
{
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UOnlineAuthInterfaceImpl_execEndLocalClientAuthSession_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ServerPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execVerifyClientAuthSession_Parms
{
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ClientPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             AuthTicketUID;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
// [0x00420000] 
struct UOnlineAuthInterfaceImpl_execCreateClientAuthSession_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ServerPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           bSecure : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             OutAuthTicketUID;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendServerAuthRetryRequest_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendClientAuthEndSessionRequest_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendServerAuthResponse_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             AuthTicketUID;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendClientAuthResponse_Parms
{
	// int                                             AuthTicketUID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendServerAuthRequest_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
// [0x00020000] 
struct UOnlineAuthInterfaceImpl_execSendClientAuthRequest_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Parms
{
	// struct FScriptDelegate                          ServerConnectionCloseDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Parms
{
	// struct FScriptDelegate                          ServerConnectionCloseDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerConnectionClose_Parms
{
	// class UPlayer*                                  ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Parms
{
	// struct FScriptDelegate                          ClientConnectionCloseDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Parms
{
	// struct FScriptDelegate                          ClientConnectionCloseDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientConnectionClose_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRetryRequestDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthRetryRequestDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRetryRequestDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthRetryRequestDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRetryRequest_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthEndSessionRequestDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthEndSessionRequestDelegate;              		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthEndSessionRequestDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthEndSessionRequestDelegate;              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthEndSessionRequest_Parms
{
	// class UPlayer*                                  ServerConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthCompleteDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthCompleteDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthComplete_Parms
{
	// DWORD                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UPlayer*                                  ServerConnection;                                 		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FString                                  ExtraInfo;                                        		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthCompleteDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthCompleteDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthComplete_Parms
{
	// DWORD                                           bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UPlayer*                                  ClientConnection;                                 		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FString                                  ExtraInfo;                                        		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthResponseDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthResponseDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthResponseDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthResponseDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthResponse_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             AuthTicketUID;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthResponseDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthResponseDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthResponseDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthResponseDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthResponse_Parms
{
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             AuthTicketUID;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerAuthRequestDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthRequestDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerAuthRequestDelegate_Parms
{
	// struct FScriptDelegate                          ServerAuthRequestDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnServerAuthRequest_Parms
{
	// class UPlayer*                                  ClientConnection;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             ClientUID;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ClientIP;                                         		// 0x0010 (0x0014) [0x0000000000000000]              
	// int                                             ClientPort;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientAuthRequestDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthRequestDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientAuthRequestDelegate_Parms
{
	// struct FScriptDelegate                          ClientAuthRequestDelegate;                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnClientAuthRequest_Parms
{
	// struct FUniqueNetId                             ServerUID;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  ServerIP;                                         		// 0x0008 (0x0014) [0x0000000000000000]              
	// int                                             ServerPort;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           bSecure : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Parms
{
	// struct FScriptDelegate                          AuthReadyDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Parms
{
	// struct FScriptDelegate                          AuthReadyDelegate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
// [0x00120000] 
struct UOnlineAuthInterfaceImpl_execOnAuthReady_Parms
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execIsReady_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearOnlineDelegates
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearOnlineDelegates_Parms
{
};

// Function IpDrv.OnlineGameInterfaceImpl.RemoveSearchResultFromFavorites
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRemoveSearchResultFromFavorites_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGetPlayerListCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGetPlayerListCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetPlayerListCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGetPlayerListCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGetPlayerListCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetPlayerListCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGetPlayerListComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGetPlayerListComplete_Parms
{
	// class UOnlineGameSettings*                      PlayerListSettings;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           Success : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.IsSearchResultInFavoritesList
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execIsSearchResultInFavoritesList_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.AddSearchResultToFavorites
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddSearchResultToFavorites_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.SetMatchmakingTypeMode
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSetMatchmakingTypeMode_Parms
{
	// unsigned char                                   InMatchmakingTypeMode;                            		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.RunBandwidthTest
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRunBandwidthTest_Parms
{
};

// Function IpDrv.OnlineGameInterfaceImpl.IsAllowedToNetworkHost
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execIsAllowedToNetworkHost_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGetRoomIdFromTitleServiceDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGetRoomIdFromTitleServiceDelegate_Parms
{
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGetRoomIdFromTitleServiceDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGetRoomIdFromTitleServiceDelegate_Parms
{
	// struct FScriptDelegate                          InDelegate;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromSessionId
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetRoomIdFromSessionId_Parms
{
	// struct FString                                  SessionId;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomIdFromTitleService
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetRoomIdFromTitleService_Parms
{
	// struct FQWord                                   DataId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGetRoomIdFromTitleService
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGetRoomIdFromTitleService_Parms
{
	// struct FQWord                                   RoomId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.GetRoomId
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetRoomId_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.SendPlayerList
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSendPlayerList_Parms
{
	// TArray< class APlayerReplicationInfo* >         Players;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms
{
	// struct FScriptDelegate                          GetNumberOfCurrentPlayersCompleteDelegate;        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGetNumberOfCurrentPlayersComplete_Parms
{
	// int                                             TotalPlayers;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayersCached
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetNumberOfCurrentPlayersCached_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.GetNumberOfCurrentPlayers
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetNumberOfCurrentPlayers_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Parms
{
	// struct FScriptDelegate                          QosStatusChangedDelegate;                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Parms
{
	// struct FScriptDelegate                          QosStatusChangedDelegate;                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQosStatusChanged_Parms
{
	// int                                             NumComplete;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumTotal;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.BindSessionGuidToSearch
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execBindSessionGuidToSearch_Parms
{
	// unsigned char                                   SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineGameSearch*                        SearchSettings;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  SessionGuid;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms
{
	// unsigned char                                   SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineGameSearch*                        SearchSettings;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadSessionGuidBySessionName
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execReadSessionGuidBySessionName_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  SessionGuid;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms
{
	// struct FOnlineGameSearchResult                  DesiredGame;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms
{
	// int                                             StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Parms
{
	// unsigned char                                   PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FOnlineGameSearchResult                  DesiredGame;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execMigrateOnlineGame_Parms
{
	// unsigned char                                   HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RecalculateSkillRatingGameCompleteDelegate;       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RecalculateSkillRatingCompleteDelegate;           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.SetPendingMembersToInvite
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execSetPendingMembersToInvite_Parms
{
	// TArray< struct FString >                        Members;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ResetPendingMembersToInvite
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execResetPendingMembersToInvite_Parms
{
};

// Function IpDrv.OnlineGameInterfaceImpl.GetPendingMembersToInvite
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetPendingMembersToInvite_Parms
{
	// TArray< struct FString >                        ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearPlayTogetherStartedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearPlayTogetherStartedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          PlayTogetherStartedDelegate;                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddPlayTogetherStartedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddPlayTogetherStartedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          PlayTogetherStartedDelegate;                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnPlayTogetherStarted
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnPlayTogetherStarted_Parms
{
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FOnlineGameSearchResult                  DesiredGame;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms
{
	// unsigned char                                   LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FScriptDelegate                          GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms
{
	// struct FOnlineGameSearchResult                  InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ResultReason;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FOnlineArbitrationRegistrant >   ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	// struct FScriptDelegate                          ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execEndOnlineGame_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execStartOnlineGame_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.RetrieveGameSettingsForIP
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRetrieveGameSettingsForIP_Parms
{
	// struct FString                                  IPAddress;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearOnRetrieveGameSettingsForIPDelegate_Parms
{
	// struct FScriptDelegate                          RetrieveIPDelegate;                               		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddOnRetrieveGameSettingsForIPDelegate_Parms
{
	// struct FScriptDelegate                          NewRetrieveIPDelegate;                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRetrievedGameSettingsForIP
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnRetrievedGameSettingsForIP_Parms
{
	// DWORD                                           bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FOnlineGameSearchResult                  ConnectResult;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayers_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms
{
	// struct FScriptDelegate                          RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayers_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayer_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasInvited : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ConnectInfo;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQuerySessionsForUserCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearQuerySessionsForUserCompleteDelegate_Parms
{
	// struct FScriptDelegate                          QuerySessionsForUserCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQuerySessionsForUserCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddQuerySessionsForUserCompleteDelegate_Parms
{
	// struct FScriptDelegate                          QuerySessionsForUserCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQuerySessionsForUserComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQuerySessionsForUserComplete_Parms
{
	// unsigned char                                   LocalPlayerNum;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.QuerySessionsByKeyword
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execQuerySessionsByKeyword_Parms
{
	// unsigned char                                   LocalPlayerNum;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FString                                  Keyword;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UOnlineGameSearch*                        SearchSettings;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.QuerySessionsForUser
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execQuerySessionsForUser_Parms
{
	// unsigned char                                   LocalPlayerNum;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.LeaveAllOnlineSessions
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execLeaveAllOnlineSessions_Parms
{
	// DWORD                                           bClearSessionIfHost : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.LeaveOnlineSession
// [0x00024002] 
struct UOnlineGameInterfaceImpl_execLeaveOnlineSession_Parms
{
	// unsigned char                                   LocalPlayerNum;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           bClearSessionIfHost : 1;                          		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMatchStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearMatchStatusChangedDelegate_Parms
{
	// struct FScriptDelegate                          MatchStatusChangedDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMatchStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddMatchStatusChangedDelegate_Parms
{
	// struct FScriptDelegate                          MatchStatusChangedDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMatchStatusChanged
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnMatchStatusChanged_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Status;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGamePlayersChangedDelegate_Parms
{
	// struct FScriptDelegate                          GamePlayersChangedDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGamePlayersChangedDelegate_Parms
{
	// struct FScriptDelegate                          GamePlayersChangedDelegate;                       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGamePlayersChanged_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateSessionPropertiesCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUpdateSessionPropertiesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UpdateSessionPropertiesCompleteDelegate;          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateSessionPropertiesCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUpdateSessionPropertiesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UpdateSessionPropertiesCompleteDelegate;          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateSessionPropertiesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUpdateSessionPropertiesComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateSessionProperties
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUpdateSessionProperties_Parms
{
	// unsigned char                                   ScoutingUserNum;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.DeleteCustomMemberProperty
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execDeleteCustomMemberProperty_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  PropertyName;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.SetCustomMemberProperty
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSetCustomMemberProperty_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  PropertyName;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FString                                  PropertyValue;                                    		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.DeleteCustomSessionProperty
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execDeleteCustomSessionProperty_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  PropertyName;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.SetCustomSessionProperty
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSetCustomSessionProperty_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  PropertyName;                                     		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FString                                  PropertyValue;                                    		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDeleteMatchTicketCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearDeleteMatchTicketCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DeleteMatchTicketCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDeleteMatchTicketCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddDeleteMatchTicketCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DeleteMatchTicketCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDeleteMatchTicketComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnDeleteMatchTicketComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.DeleteMatchTicketWithHopper
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execDeleteMatchTicketWithHopper_Parms
{
	// unsigned char                                   ScoutingPlayerNum;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  HopperName;                                       		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.DeleteMatchTicket
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execDeleteMatchTicket_Parms
{
	// unsigned char                                   ScoutingPlayerNum;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQueryMatchmakingForSessionCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearQueryMatchmakingForSessionCompleteDelegate_Parms
{
	// struct FScriptDelegate                          QueryMatchmakingForSessionCompleteDelegate;       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQueryMatchmakingForSessionCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddQueryMatchmakingForSessionCompleteDelegate_Parms
{
	// struct FScriptDelegate                          QueryMatchmakingForSessionCompleteDelegate;       		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQueryMatchmakingForSessionComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQueryMatchmakingForSessionComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryMatchmakingForSessionWithHopper
// [0x00024002] 
struct UOnlineGameInterfaceImpl_execQueryMatchmakingForSessionWithHopper_Parms
{
	// unsigned char                                   ScoutingPlayerNum;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             MatchTimeout;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  HopperName;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// unsigned char                                   CreateGameSessionType;                            		// 0x0020 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryMatchmakingForSession
// [0x00024002] 
struct UOnlineGameInterfaceImpl_execQueryMatchmakingForSession_Parms
{
	// unsigned char                                   ScoutingPlayerNum;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             MatchTimeout;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned char                                   CreateGameSessionType;                            		// 0x0010 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMultiplayerSessionChangeDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearMultiplayerSessionChangeDelegate_Parms
{
	// struct FScriptDelegate                          MultiplayerSessionChangeDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMultiplayerSessionChangeDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddMultiplayerSessionChangeDelegate_Parms
{
	// struct FScriptDelegate                          MultiplayerSessionChangeDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMultiplayerSessionChange
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnMultiplayerSessionChange_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FSessionUpdateInfo                       SessionChanges;                                   		// 0x0008 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.IsCurrentRoomOwner
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execIsCurrentRoomOwner_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.SetRankedReadyStatus
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execSetRankedReadyStatus_Parms
{
	// DWORD                                           bReady : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.IsJoinOperationInProgress
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execIsJoinOperationInProgress_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameByMatchingParams
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinOnlineGameByMatchingParams_Parms
{
	// struct FQWord                                   RoomId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UOnlineGameSettings*                      JoinedGameSettings;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGameBySessionHandle
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execJoinOnlineGameBySessionHandle_Parms
{
	// unsigned char                                   PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  InSessionGuid;                                    		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms
{
	// unsigned char                                   PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FOnlineGameSearchResult                  DesiredGame;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execFreeSearchResults_Parms
{
	// class UOnlineGameSearch*                        Search;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms
{
	// struct FScriptDelegate                          FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execFindOnlineGames_Parms
{
	// unsigned char                                   SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UOnlineGameSearch*                        SearchSettings;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UOnlineGameSettings*                      UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bShouldRefreshOnlineData : 1;                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms
{
	// struct FScriptDelegate                          CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms
{
	// unsigned char                                   HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UOnlineGameSettings*                      NewGameSettings;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameServerRemoteAddress
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execGetGameServerRemoteAddress_Parms
{
	// struct FString                                  RemoteAddressString;                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSearch_Parms
{
	// class UOnlineGameSearch*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSettings_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UOnlineGameSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420400] ( FUNC_Native )
struct UOnlinePlaylistManager_execParseDataCenterId_Parms
{
	// TArray< unsigned char >                         Data;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Filename;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileData;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020002] 
struct UOnlinePlaylistManager_execReadDataCenterId_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020802] ( FUNC_Event )
struct UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Parms
{
	// int                                             NumPlayers;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UOnlineEventsInterface*                   EventsInterface;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             WorldwideTotal;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             RegionTotal;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420400] ( FUNC_Native )
struct UOnlinePlaylistManager_execParsePlaylistPopulationData_Parms
{
	// TArray< unsigned char >                         Data;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120000] 
struct UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Filename;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileData;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020002] 
struct UOnlinePlaylistManager_execReadPlaylistPopulation_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020002] 
struct UOnlinePlaylistManager_execReset_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ContentIds;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execGetInventorySwapFromPlaylist_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   SourceInventory;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SwapIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< struct FName >                          MapCycle;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execGetUrlFromPlaylist_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020002] 
struct UOnlinePlaylistManager_execGetMatchType_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020002] 
struct UOnlinePlaylistManager_execIsPlaylistArbitrated_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             LoadBalanceId;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             TeamSize;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             TeamCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             MaxPartySize;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020002] 
struct UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020002] 
struct UOnlinePlaylistManager_execHasAnyGameSettings_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             PlaylistIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             GameIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020002] 
struct UOnlinePlaylistManager_execGetGameSettings_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             GameSettingsId;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineGameSettings*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             PlaylistIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             GameIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020400] ( FUNC_Native )
struct UOnlinePlaylistManager_execFinalizePlaylistObjects_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadTitleFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Filename;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// int                                             FileIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020400] ( FUNC_Native )
struct UOnlinePlaylistManager_execShouldRefreshPlaylists_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020400] ( FUNC_Native )
struct UOnlinePlaylistManager_execDetermineFilesToDownload_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execDownloadPlaylist_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             FileIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120000] 
struct UOnlinePlaylistManager_execOnReadPlaylistComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] 
struct UPartyBeacon_execOnDestroyComplete_Parms
{
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeacon_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeaconClient_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconClient_execCancelReservation_Parms
{
	// struct FUniqueNetId                             CancellingPartyLeader;                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconClient_execRequestReservationUpdate_Parms
{
	// struct FOnlineGameSearchResult                  DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             RequestingPartyLeader;                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< struct FPlayerReservation >             PlayersToAdd;                                     		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconClient_execRequestReservation_Parms
{
	// struct FOnlineGameSearchResult                  DesiredHost;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             RequestingPartyLeader;                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< struct FPlayerReservation >             Players;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] 
struct UPartyBeaconClient_execOnHostHasCancelled_Parms
{
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] 
struct UPartyBeaconClient_execOnHostIsReady_Parms
{
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000] 
struct UPartyBeaconClient_execOnTravelRequestReceived_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationCountUpdated_Parms
{
	// int                                             ReservationRemaining;                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationRequestComplete_Parms
{
	// unsigned char                                   ReservationResult;                                		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.DumpReservations
// [0x00820002] 
struct UPartyBeaconHost_execDumpReservations_Parms
{
	// int                                             PartyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             NetId;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0010 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002] 
struct UPartyBeaconHost_execGetPartyLeaders_Parms
{
	// TArray< struct FUniqueNetId >                   PartyLeaders;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20002] 
struct UPartyBeaconHost_execGetPlayers_Parms
{
	// TArray< struct FUniqueNetId >                   Players;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             PlayerIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0018 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms
{
	// class UOnlineGameSearch*                        Search;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820802] ( FUNC_Event )
struct UPartyBeaconHost_eventUnregisterParty_Parms
{
	// struct FUniqueNetId                             PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             PlayerIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0018 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820802] ( FUNC_Event )
struct UPartyBeaconHost_eventUnregisterPartyMembers_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0010 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820802] ( FUNC_Event )
struct UPartyBeaconHost_eventRegisterPartyMembers_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PartyIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UOnlineRecentPlayersList*                 PlayersList;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< struct FUniqueNetId >                   Members;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0028 (0x0024) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002] 
struct UPartyBeaconHost_execAreReservationsFull_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsHostHasCancelled_Parms
{
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsHostIsReady_Parms
{
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsToTravel_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeaconHost_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] 
struct UPartyBeaconHost_execOnClientCancellationReceived_Parms
{
	// struct FUniqueNetId                             PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationsFull_Parms
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationChange_Parms
{
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execHandlePlayerLogout_Parms
{
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bMaintainParty : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execGetExistingReservation_Parms
{
	// struct FUniqueNetId                             PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execUpdatePartyReservationEntry_Parms
{
	// struct FUniqueNetId                             PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FPlayerReservation >             PlayerMembers;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execAddPartyReservationEntry_Parms
{
	// struct FUniqueNetId                             PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FPlayerReservation >             PlayerMembers;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	// int                                             TeamNum;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsHost : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   ReturnValue;                                      		// 0x0020 (0x0001) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024400] ( FUNC_Native )
struct UPartyBeaconHost_execInitHostBeacon_Parms
{
	// int                                             InNumTeams;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             InNumPlayersPerTeam;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             InNumReservations;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FName                                    InSessionName;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             InForceTeamNum;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execPauseReservationRequests_Parms
{
	// DWORD                                           bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002] 
struct UWebRequest_execGetHexDigit_Parms
{
	// struct FString                                  D;                                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002] 
struct UWebRequest_execDecodeFormData_Parms
{
	// struct FString                                  Data;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Token[ 0x2 ];                                     		// 0x0010 (0x0020) [0x0000000000000000]              
	// struct FString                                  ch;                                               		// 0x0030 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             H1;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             H2;                                               		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             Limit;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             T;                                                		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002] 
struct UWebRequest_execProcessHeaderString_Parms
{
	// struct FString                                  S;                                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execDump_Parms
{
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariables_Parms
{
	// TArray< struct FString >                        varNames;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariableNumber_Parms
{
	// struct FString                                  VariableName;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Number;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  DefaultValue;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariableCount_Parms
{
	// struct FString                                  VariableName;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariable_Parms
{
	// struct FString                                  VariableName;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execAddVariable_Parms
{
	// struct FString                                  VariableName;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Value;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetHeaders_Parms
{
	// TArray< struct FString >                        Headers;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetHeader_Parms
{
	// struct FString                                  HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execAddHeader_Parms
{
	// struct FString                                  HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Value;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execEncodeBase64_Parms
{
	// struct FString                                  Decoded;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execDecodeBase64_Parms
{
	// struct FString                                  Encoded;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002] 
struct UWebResponse_execSentResponse_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.SentText
// [0x00020002] 
struct UWebResponse_execSentText_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002] 
struct UWebResponse_execRedirect_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002] 
struct UWebResponse_execSendStandardHeaders_Parms
{
	// struct FString                                  ContentType;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bCache : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002] 
struct UWebResponse_execHTTPError_Parms
{
	// int                                             ErrorNum;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Data;                                             		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002] 
struct UWebResponse_execSendHeaders_Parms
{
	// struct FString                                  hdr;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002] 
struct UWebResponse_execAddHeader_Parms
{
	// struct FString                                  Header;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bReplace : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  Part;                                             		// 0x001C (0x0010) [0x0000000000000000]              
	// struct FString                                  Entry;                                            		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002] 
struct UWebResponse_execHTTPHeader_Parms
{
	// struct FString                                  Header;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.HttpResponse
// [0x00020002] 
struct UWebResponse_execHttpResponse_Parms
{
	// struct FString                                  Header;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002] 
struct UWebResponse_execFailAuthentication_Parms
{
	// struct FString                                  Realm;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002] 
struct UWebResponse_execSendCachedFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ContentType;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] ( FUNC_Event )
struct UWebResponse_eventSendBinary_Parms
{
	// int                                             Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] ( FUNC_Event )
struct UWebResponse_eventSendText_Parms
{
	// struct FString                                  Text;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bNoCRLF : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execDump_Parms
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execGetHTTPExpiration_Parms
{
	// int                                             OffsetSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execLoadParsedUHTM_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execIncludeBinaryFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execIncludeUHTM_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execClearSubst_Parms
{
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execSubst_Parms
{
	// struct FString                                  Variable;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Value;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bClear : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execFileExists_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020802] ( FUNC_Event )
struct UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Parms
{
	// int                                             PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00426002] 
struct UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Parms
{
	// struct FName                                    ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             PlaylistId;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ProviderIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// class UOnlinePlaylistProvider*                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UUIDataStore_OnlinePlaylists*             PlaylistDS;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        Providers;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UOnlinePlaylistProvider*                  OPP;                                              		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Parms
{
	// struct FName                                    ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ProviderIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UUIResourceDataProvider*                  out_Provider;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execGetResourceProviders_Parms
{
	// struct FName                                    ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< class UUIResourceDataProvider* >        out_Providers;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020802] ( FUNC_Event )
struct UUIDataStore_OnlinePlaylists_eventInit_Parms
{
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000] 
struct UWebApplication_execPostQuery_Parms
{
	// class UWebRequest*                              Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UWebResponse*                             Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.WebApplication.Query
// [0x00020000] 
struct UWebApplication_execQuery_Parms
{
	// class UWebRequest*                              Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UWebResponse*                             Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002] 
struct UWebApplication_execPreQuery_Parms
{
	// class UWebRequest*                              Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UWebResponse*                             Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002] 
struct UWebApplication_execCleanupApp_Parms
{
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] ( FUNC_Final )
struct UWebApplication_execCleanup_Parms
{
};

// Function IpDrv.WebApplication.Init
// [0x00020000] 
struct UWebApplication_execInit_Parms
{
};

// Function IpDrv.WebServer.GetApplication
// [0x00420002] 
struct AWebServer_execGetApplication_Parms
{
	// struct FString                                  URI;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SubURI;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UWebApplication*                          ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             L;                                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventLostChild_Parms
{
	// class AActor*                                   C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventGainedChild_Parms
{
	// class AActor*                                   C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventDestroyed_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002] 
struct AWebServer_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ApplicationClass;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FIpAddr                                  L;                                                		// 0x000C (0x0014) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] ( FUNC_Event )
struct UHelloWeb_eventQuery_Parms
{
	// class UWebRequest*                              Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UWebResponse*                             Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] 
struct UHelloWeb_execInit_Parms
{
};

// Function IpDrv.ImageServer.Query
// [0x00020802] ( FUNC_Event )
struct UImageServer_eventQuery_Parms
{
	// class UWebRequest*                              Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UWebResponse*                             Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  Image;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpServiceConfig.GetUserAuthTicket
// [0x00020000] 
struct UMcpServiceConfig_execGetUserAuthTicket_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserReward_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             UserReward;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnUpdateChallengeUserRewardComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
// [0x00020000] 
struct UMcpClashMobBase_execUpdateChallengeUserProgress_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bDidComplete : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GoalProgress;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnUpdateChallengeUserProgressComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeUserStatus_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FMcpClashMobChallengeUserStatus          OutChallengeUserStatus;                           		// 0x0020 (0x0080) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
// [0x00420000] 
struct UMcpClashMobBase_execQueryChallengeMultiUserStatus_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UserIdsToRead;                                    		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeUserStatus_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnQueryChallengeUserStatusComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
// [0x00020000] 
struct UMcpClashMobBase_execAcceptChallenge_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnAcceptChallengeComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDeleteCachedChallengeFile_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execClearCachedChallengeFile_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileContents_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         OutFileContents;                                  		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
// [0x00020000] 
struct UMcpClashMobBase_execDownloadChallengeFile_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeFileList_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpClashMobChallengeFile >      OutChallengeFiles;                                		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnDownloadChallengeFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.GetChallengeList
// [0x00420000] 
struct UMcpClashMobBase_execGetChallengeList_Parms
{
	// TArray< struct FMcpClashMobChallengeEvent >     OutChallengeEvents;                               		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
// [0x00020000] 
struct UMcpClashMobBase_execQueryChallengeList_Parms
{
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
// [0x00120000] 
struct UMcpClashMobBase_execOnQueryChallengeListComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpClashMobBase_execCreateInstance_Parms
{
	// class UMcpClashMobBase*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpClashMobBaseClass;                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpClashMobBase*                         NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
// [0x00020002] 
struct UMcpClashMobFileDownload_execGetUrlForFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
struct UMcpClashMobManager_execOnUpdateChallengeUserRewardHTTPRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0034 (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
// [0x00020002] 
struct UMcpClashMobManager_execUpdateChallengeUserReward_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             UserReward;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0034 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             UserQueryIdx;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
struct UMcpClashMobManager_execOnUpdateChallengeUserProgressHTTPRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0034 (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
// [0x00020002] 
struct UMcpClashMobManager_execUpdateChallengeUserProgress_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bDidComplete : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             GoalProgress;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0028 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0038 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             UserQueryIdx;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
// [0x00C20002] 
struct UMcpClashMobManager_execGetChallengeUserStatus_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FMcpClashMobChallengeUserStatus          OutChallengeUserStatus;                           		// 0x0020 (0x0080) [0x0000000000000000]              
	// int                                             UserStatusIdx;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	// struct FMcpClashMobChallengeUserStatus          DefaultStatus;                                    		// 0x00A4 (0x0080) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
struct UMcpClashMobManager_execOnQueryChallengeMultiStatusHTTPRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  JSONStr;                                          		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueChallengeId;                                		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0034 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0044 (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             UserStatusIdx;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             TempUserStatusIdx;                                		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
// [0x00420002] 
struct UMcpClashMobManager_execQueryChallengeMultiUserStatus_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UserIdsToRead;                                    		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FString                                  JSONStr;                                          		// 0x0050 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	// int                                             UserQueryIdx;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             UserIdIdx;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x0070 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
struct UMcpClashMobManager_execOnQueryChallengeStatusHTTPRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  JSONStr;                                          		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueChallengeId;                                		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0034 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0044 (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x005C (0x0004) [0x0000000000000000]              
	// int                                             UserStatusIdx;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
// [0x00020002] 
struct UMcpClashMobManager_execQueryChallengeUserStatus_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0030 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             UserQueryIdx;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
struct UMcpClashMobManager_execOnAcceptChallengeHTTPRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  UniqueChallengeId;                                		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0034 (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserQueryIdx;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
// [0x00020002] 
struct UMcpClashMobManager_execAcceptChallenge_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  UniqueUserId;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0030 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeQueryIdx;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             UserQueryIdx;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    Request;                                          		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execDeleteCachedChallengeFile_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeIdx;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execClearCachedChallengeFile_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeIdx;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeFileContents_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         OutFileContents;                                  		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeIdx;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
// [0x00020002] 
struct UMcpClashMobManager_execOnDownloadMcpFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  DLName;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeIdx;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
// [0x00040003] ( FUNC_Final )
struct UMcpClashMobManager_execOnLoadCachedFileComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  DLName;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           bRequiresDownload : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  FileHashCache;                                    		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  FileHashChallenge;                                		// 0x0028 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0038 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeIdx;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         FileContents;                                     		// 0x0050 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
// [0x00020002] 
struct UMcpClashMobManager_execDownloadChallengeFile_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DLName;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeIdx;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             FileIdx;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeFileList_Parms
{
	// struct FString                                  UniqueChallengeId;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpClashMobChallengeFile >      OutChallengeFiles;                                		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             ChallengeEventIdx;                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.GetChallengeList
// [0x00420002] 
struct UMcpClashMobManager_execGetChallengeList_Parms
{
	// TArray< struct FMcpClashMobChallengeEvent >     OutChallengeEvents;                               		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
struct UMcpClashMobManager_execOnQueryChallengeListHTTPRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  JSONStr;                                          		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0024 (0x0010) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
// [0x00020002] 
struct UMcpClashMobManager_execQueryChallengeList_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpClashMobManager.Init
// [0x00020002] 
struct UMcpClashMobManager_execInit_Parms
{
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnAcceptGroupInviteComplete_Parms
{
	// struct FString                                  GroupID;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
// [0x00020000] 
struct UMcpGroupsBase_execAcceptGroupInvite_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bShouldAccept : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupInviteList_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpGroupList                            InviteList;                                       		// 0x0010 (0x0020) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnQueryGroupInvitesComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroupInvites_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnDeleteAllGroupsComplete_Parms
{
	// struct FString                                  RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
// [0x00020000] 
struct UMcpGroupsBase_execDeleteAllGroups_Parms
{
	// struct FString                                  OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnRemoveGroupMembersComplete_Parms
{
	// struct FString                                  GroupID;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execRemoveGroupMembers_Parms
{
	// struct FString                                  OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnAddGroupMembersComplete_Parms
{
	// struct FString                                  GroupID;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execAddGroupMembers_Parms
{
	// struct FString                                  OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           bRequiresAcceptance : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupMembers_Parms
{
	// struct FString                                  GroupID;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpGroupMember >                GroupMembers;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnQueryGroupMembersComplete_Parms
{
	// struct FString                                  GroupID;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroupMembers_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.GetGroupList
// [0x00420000] 
struct UMcpGroupsBase_execGetGroupList_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpGroupList                            GroupList;                                        		// 0x0010 (0x0020) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnQueryGroupsComplete_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.QueryGroups
// [0x00020000] 
struct UMcpGroupsBase_execQueryGroups_Parms
{
	// struct FString                                  RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnDeleteGroupComplete_Parms
{
	// struct FString                                  GroupID;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.DeleteGroup
// [0x00020000] 
struct UMcpGroupsBase_execDeleteGroup_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
// [0x00120000] 
struct UMcpGroupsBase_execOnCreateGroupComplete_Parms
{
	// struct FMcpGroup                                Group;                                            		// 0x0000 (0x0044) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0048 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.CreateGroup
// [0x00020000] 
struct UMcpGroupsBase_execCreateGroup_Parms
{
	// struct FString                                  OwnerId;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupName;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpGroupsBase_execCreateInstance_Parms
{
	// class UMcpGroupsBase*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpGroupsManagerClass;                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpGroupsBase*                           NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
// [0x00820002] 
struct UMcpGroupsManager_execCacheGroupMember_Parms
{
	// struct FString                                  MemberId;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// unsigned char                                   AcceptState;                                      		// 0x0020 (0x0001) [0x0000000000000000]              
	// int                                             MemberIndex;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FMcpGroupList                            GroupList;                                        		// 0x0028 (0x0020) [0x0000000000000000]              
	// int                                             GroupListIndex;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FMcpGroup                                GroupTemp;                                        		// 0x004C (0x0044) [0x0000000000000000]              
	// int                                             GroupIndex;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.CacheGroup
// [0x00820002] 
struct UMcpGroupsManager_execCacheGroup_Parms
{
	// struct FString                                  RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpGroup                                Group;                                            		// 0x0010 (0x0044) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             GroupIndex;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             GroupListIndex;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FMcpGroupList                            UserGroupList;                                    		// 0x0060 (0x0020) [0x0000000000000000]              
	// DWORD                                           bWasFound : 1;                                    		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
// [0x00120002] 
struct UMcpGroupsManager_execOnAcceptGroupInviteRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
// [0x00020002] 
struct UMcpGroupsManager_execAcceptGroupInvite_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bShouldAccept : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  URL;                                              		// 0x0024 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    AcceptGroupInviteRequest;                         		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
// [0x00020002] 
struct UMcpGroupsManager_execOnDeleteAllGroupsRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  RequesterId;                                      		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
// [0x00020002] 
struct UMcpGroupsManager_execDeleteAllGroups_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    DeleteGroupRequest;                               		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
// [0x00020002] 
struct UMcpGroupsManager_execOnRemoveGroupMembersRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
// [0x00420002] 
struct UMcpGroupsManager_execRemoveGroupMembers_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    RemoveGroupMembersRequest;                        		// 0x0040 (0x0008) [0x0000000000000000]              
	// struct FString                                  JsonPayload;                                      		// 0x0048 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
// [0x00120002] 
struct UMcpGroupsManager_execOnAddGroupMembersRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
// [0x00420002] 
struct UMcpGroupsManager_execAddGroupMembers_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        MemberIds;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           bRequiresAcceptance : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  URL;                                              		// 0x0034 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    AddGroupMembersRequest;                           		// 0x0044 (0x0008) [0x0000000000000000]              
	// struct FString                                  JsonPayload;                                      		// 0x004C (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
// [0x00C20002] 
struct UMcpGroupsManager_execGetGroupMembers_Parms
{
	// struct FString                                  GroupID;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpGroupMember >                GroupMembers;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             GroupIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FMcpGroupList                            GroupList;                                        		// 0x0024 (0x0020) [0x0000000000000000]              
	// struct FMcpGroup                                GroupTemp;                                        		// 0x0044 (0x0044) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
// [0x00120002] 
struct UMcpGroupsManager_execOnQueryGroupMembersRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x0028 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	// unsigned char                                   AcceptState;                                      		// 0x0044 (0x0001) [0x0000000000000000]              
	// struct FString                                  MemberId;                                         		// 0x0048 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0058 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
// [0x00020002] 
struct UMcpGroupsManager_execQueryGroupMembers_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    QueryGroupMembersRequest;                         		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.GetGroupList
// [0x00420002] 
struct UMcpGroupsManager_execGetGroupList_Parms
{
	// struct FString                                  UserId;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpGroupList                            GroupList;                                        		// 0x0010 (0x0020) [0x0000000000000000]              
	// int                                             GroupListIndex;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
// [0x00920002] 
struct UMcpGroupsManager_execOnQueryGroupsRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FMcpGroup                                Group;                                            		// 0x0028 (0x0044) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x006C (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x007C (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	// struct FString                                  RequesterId;                                      		// 0x0088 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.QueryGroups
// [0x00020002] 
struct UMcpGroupsManager_execQueryGroups_Parms
{
	// struct FString                                  RequesterId;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    QueryGroupsRequest;                               		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
// [0x00020002] 
struct UMcpGroupsManager_execOnDeleteGroupRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.DeleteGroup
// [0x00020002] 
struct UMcpGroupsManager_execDeleteGroup_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupID;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    DeleteGroupRequest;                               		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
// [0x00820002] 
struct UMcpGroupsManager_execOnCreateGroupRequestComplete_Parms
{
	// class UHttpRequestInterface*                    CreateGroupRequest;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   HttpResponse;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ResponseCode;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  Content;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FMcpGroup                                CreatedGroup;                                     		// 0x0028 (0x0044) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x006C (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x007C (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpGroupsManager.CreateGroup
// [0x00820002] 
struct UMcpGroupsManager_execCreateGroup_Parms
{
	// struct FString                                  UniqueUserId;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  GroupName;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    CreateGroupRequest;                               		// 0x0030 (0x0008) [0x0000000000000000]              
	// struct FMcpGroup                                FailedGroup;                                      		// 0x0038 (0x0044) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
// [0x00420000] 
struct UMcpIdMappingBase_execGetIdMappings_Parms
{
	// struct FString                                  ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpIdMapping >                  IDMappings;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
// [0x00120000] 
struct UMcpIdMappingBase_execOnQueryMappingsComplete_Parms
{
	// struct FString                                  ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingBase.QueryMappings
// [0x00420000] 
struct UMcpIdMappingBase_execQueryMappings_Parms
{
	// TArray< struct FString >                        ExternalIds;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalType;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
// [0x00120000] 
struct UMcpIdMappingBase_execOnAddMappingComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingBase.AddMapping
// [0x00020000] 
struct UMcpIdMappingBase_execAddMapping_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpIdMappingBase_execCreateInstance_Parms
{
	// class UMcpIdMappingBase*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpIdMappingBaseClass;                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpIdMappingBase*                        NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
// [0x00420002] 
struct UMcpIdMappingManager_execGetIdMappings_Parms
{
	// struct FString                                  ExternalType;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpIdMapping >                  IDMappings;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
// [0x00020002] 
struct UMcpIdMappingManager_execOnQueryMappingsRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  JsonString;                                       		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             AccountIndex;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	// DWORD                                           bWasFound : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  McpId;                                            		// 0x0044 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalId;                                       		// 0x0054 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalType;                                     		// 0x0064 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingManager.QueryMappings
// [0x00420002] 
struct UMcpIdMappingManager_execQueryMappings_Parms
{
	// TArray< struct FString >                        ExternalIds;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalType;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FString                                  JsonPayload;                                      		// 0x003C (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	// DWORD                                           bFirst : 1;                                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
// [0x00020002] 
struct UMcpIdMappingManager_execOnAddMappingRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpIdMappingManager.AddMapping
// [0x00020002] 
struct UMcpIdMappingManager_execAddMapping_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ExternalType;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
// [0x00120000] 
struct UMcpManagedValueManagerBase_execOnDeleteValueComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.DeleteValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execDeleteValue_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
// [0x00120000] 
struct UMcpManagedValueManagerBase_execOnUpdateValueComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             Value;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0030 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.UpdateValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execUpdateValue_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             Value;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.GetValue
// [0x00020000] 
struct UMcpManagedValueManagerBase_execGetValue_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.GetValues
// [0x00020000] 
struct UMcpManagedValueManagerBase_execGetValues_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FManagedValue >                  ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
// [0x00120000] 
struct UMcpManagedValueManagerBase_execOnReadSaveSlotComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
// [0x00020000] 
struct UMcpManagedValueManagerBase_execReadSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
// [0x00120000] 
struct UMcpManagedValueManagerBase_execOnCreateSaveSlotComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
// [0x00020000] 
struct UMcpManagedValueManagerBase_execCreateSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManagerBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpManagedValueManagerBase_execCreateInstance_Parms
{
	// class UMcpManagedValueManagerBase*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpManagedValueManagerBaseClass;                  		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpManagedValueManagerBase*              NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
// [0x00020002] 
struct UMcpManagedValueManager_execOnDeleteValueRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ValueIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.DeleteValue
// [0x00020002] 
struct UMcpManagedValueManager_execDeleteValue_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0028 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0038 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
// [0x00020002] 
struct UMcpManagedValueManager_execOnUpdateValueRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
	// int                                             UpdatedValue;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.UpdateValue
// [0x00020002] 
struct UMcpManagedValueManager_execUpdateValue_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             Value;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x002C (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x003C (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.GetValue
// [0x00020002] 
struct UMcpManagedValueManager_execGetValue_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             ValueIndex;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             Value;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.GetValues
// [0x00020002] 
struct UMcpManagedValueManager_execGetValues_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FManagedValue >                  ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	// TArray< struct FManagedValue >                  EmptyArray;                                       		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
// [0x00020002] 
struct UMcpManagedValueManager_execOnReadSaveSlotRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.ReadSaveSlot
// [0x00020002] 
struct UMcpManagedValueManager_execReadSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
// [0x00020002] 
struct UMcpManagedValueManager_execParseValuesForSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  JsonPayload;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             ManagedValueIndex;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FName                                    ValueId;                                          		// 0x0044 (0x0008) [0x0000000000000000]              
	// int                                             Value;                                            		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
// [0x00020002] 
struct UMcpManagedValueManager_execFindSaveSlotIndex_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
// [0x00020002] 
struct UMcpManagedValueManager_execOnCreateSaveSlotRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpManagedValueManager.CreateSaveSlot
// [0x00020002] 
struct UMcpManagedValueManager_execCreateSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlot;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execGetLastServerTime_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
// [0x00120000] 
struct UMcpServerTimeBase_execOnQueryServerTimeComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  DateTimeStr;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
// [0x00020000] 
struct UMcpServerTimeBase_execQueryServerTime_Parms
{
};

// Function IpDrv.McpServerTimeBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpServerTimeBase_execCreateInstance_Parms
{
	// class UMcpServerTimeBase*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpServerTimeBaseClass;                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpServerTimeBase*                       NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
// [0x00020002] 
struct UMcpServerTimeManager_execGetLastServerTime_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
// [0x00040003] ( FUNC_Final )
struct UMcpServerTimeManager_execOnQueryServerTimeHTTPRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  TimeStr;                                          		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  ResponseStr;                                      		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0034 (0x0010) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0044 (0x0004) [0x0000000000000000]              
	// DWORD                                           bResult : 1;                                      		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
// [0x00020002] 
struct UMcpServerTimeManager_execQueryServerTime_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorStr;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bPending : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnRecordIapComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.RecordIap
// [0x00020000] 
struct UMcpUserInventoryBase_execRecordIap_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  Receipt;                                          		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnDeleteItemComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.DeleteItem
// [0x00020000] 
struct UMcpUserInventoryBase_execDeleteItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnConsumeItemComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0044 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.ConsumeItem
// [0x00020000] 
struct UMcpUserInventoryBase_execConsumeItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnEarnItemComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0044 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.EarnItem
// [0x00020000] 
struct UMcpUserInventoryBase_execEarnItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnSellItemComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0044 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.SellItem
// [0x00424000] 
struct UMcpUserInventoryBase_execSellItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// TArray< struct FMcpInventoryItemContainer >     ExpectedResultItems;                              		// 0x0038 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnPurchaseItemComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0044 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.PurchaseItem
// [0x00020000] 
struct UMcpUserInventoryBase_execPurchaseItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        PurchaseItemIds;                                  		// 0x0030 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           Scalar;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItem
// [0x00420000] 
struct UMcpUserInventoryBase_execGetInventoryItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FMcpInventoryItem                        OutInventoryItem;                                 		// 0x0030 (0x004C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItems
// [0x00420000] 
struct UMcpUserInventoryBase_execGetInventoryItems_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpInventoryItem >              OutInventoryItems;                                		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnQueryInventoryItemsComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
// [0x00020000] 
struct UMcpUserInventoryBase_execQueryInventoryItems_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnQuerySaveSlotListComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
// [0x00020000] 
struct UMcpUserInventoryBase_execGetSaveSlotList_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
// [0x00020000] 
struct UMcpUserInventoryBase_execQuerySaveSlotList_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnDeleteSaveSlotComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
// [0x00020000] 
struct UMcpUserInventoryBase_execDeleteSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
// [0x00120000] 
struct UMcpUserInventoryBase_execOnCreateSaveSlotComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
// [0x00024000] 
struct UMcpUserInventoryBase_execCreateSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ParentSaveSlotId;                                 		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpUserInventoryBase_execCreateInstance_Parms
{
	// class UMcpUserInventoryBase*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpUserInventoryBaseClass;                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpUserInventoryBase*                    NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnRecordIapRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.RecordIap
// [0x00020002] 
struct UMcpUserInventoryManager_execRecordIap_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  Receipt;                                          		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnDeleteItemRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ItemIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.DeleteItem
// [0x00020002] 
struct UMcpUserInventoryManager_execDeleteItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0034 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0044 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnConsumeItemRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.ConsumeItem
// [0x00020002] 
struct UMcpUserInventoryManager_execConsumeItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0038 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnEarnItemRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x002C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.EarnItem
// [0x00020002] 
struct UMcpUserInventoryManager_execEarnItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0038 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnSellItemRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             UpdatedItemIdIndex;                               		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             FoundItemIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x0028 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0038 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.SellItem
// [0x00424002] 
struct UMcpUserInventoryManager_execSellItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// TArray< struct FMcpInventoryItemContainer >     ExpectedResultItems;                              		// 0x0038 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0048 (0x0010) [0x0000000000000000]              
	// struct FString                                  expectedResultsItemsJson;                         		// 0x0058 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0068 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnPurchaseItemRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             UpdatedItemIdIndex;                               		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             FoundItemIndex;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x0028 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0038 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.PurchaseItem
// [0x00020002] 
struct UMcpUserInventoryManager_execPurchaseItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  GlobalItemId;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        PurchaseItemIds;                                  		// 0x0030 (0x0010) [0x0000000000000000]              
	// int                                             Quantity;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             StoreVersion;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           Scalar;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x004C (0x0010) [0x0000000000000000]              
	// struct FString                                  paymentItemsJson;                                 		// 0x005C (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x006C (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.FindItemRequest
// [0x00420002] 
struct UMcpUserInventoryManager_execFindItemRequest_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ItemId;                                           		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FInventoryItemRequestState >     InItemRequests;                                   		// 0x0030 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
// [0x00420002] 
struct UMcpUserInventoryManager_execFindSaveSlotRequest_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct UMcpUserInventoryManager_FSaveSlotRequestState > InSaveSlotRequests;                               		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
// [0x00020002] 
struct UMcpUserInventoryManager_execFindSaveSlotIndex_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
// [0x00020002] 
struct UMcpUserInventoryManager_execParseSaveSlotList_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  JsonPayload;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0030 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
// [0x00020002] 
struct UMcpUserInventoryManager_execParseInventoryForSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  JsonPayload;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        ReturnValue;                                      		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0040 (0x0008) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJsonAttrs;                                  		// 0x0048 (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	// int                                             ItemIndex;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	// int                                             JsonAttrsIndex;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FString                                  GlobalItemId;                                     		// 0x0060 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0070 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        UpdatedItemIds;                                   		// 0x0080 (0x0010) [0x0000000000000000]              
	// TArray< class UJsonObject* >                    ObjectArray;                                      		// 0x0090 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItem
// [0x00420002] 
struct UMcpUserInventoryManager_execGetInventoryItem_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  InstanceItemId;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FMcpInventoryItem                        OutInventoryItem;                                 		// 0x0030 (0x004C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             SaveSlotIndex;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	// int                                             ItemIndex;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItems
// [0x00420002] 
struct UMcpUserInventoryManager_execGetInventoryItems_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FMcpInventoryItem >              OutInventoryItems;                                		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnQueryInventoryItemsRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
// [0x00020002] 
struct UMcpUserInventoryManager_execQueryInventoryItems_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
// [0x00020002] 
struct UMcpUserInventoryManager_execGetSaveSlotList_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        OutSaveSlots;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnQuerySaveSlotListRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
// [0x00020002] 
struct UMcpUserInventoryManager_execQuerySaveSlotList_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnDeleteSaveSlotRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
// [0x00020002] 
struct UMcpUserInventoryManager_execDeleteSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
// [0x00020002] 
struct UMcpUserInventoryManager_execOnCreateSaveSlotRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             SaveSlotIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
// [0x00024002] 
struct UMcpUserInventoryManager_execCreateSaveSlot_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  SaveSlotId;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  ParentSaveSlotId;                                 		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             ExistingIndex;                                    		// 0x004C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
// [0x00120000] 
struct UMcpUserManagerBase_execOnDeleteUserComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.DeleteUser
// [0x00020000] 
struct UMcpUserManagerBase_execDeleteUser_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.GetUser
// [0x00420000] 
struct UMcpUserManagerBase_execGetUser_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpUserStatus                           User;                                             		// 0x0010 (0x0068) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserManagerBase.GetUsers
// [0x00420000] 
struct UMcpUserManagerBase_execGetUsers_Parms
{
	// TArray< struct FMcpUserStatus >                 Users;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
// [0x00120000] 
struct UMcpUserManagerBase_execOnQueryUsersComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.QueryUsers
// [0x00420000] 
struct UMcpUserManagerBase_execQueryUsers_Parms
{
	// TArray< struct FString >                        McpIds;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.QueryUser
// [0x00024000] 
struct UMcpUserManagerBase_execQueryUser_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bShouldUpdateLastActive : 1;                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
// [0x00120000] 
struct UMcpUserManagerBase_execOnAuthenticateUserComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Token;                                            		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
// [0x00020000] 
struct UMcpUserManagerBase_execAuthenticateUserMcp_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ClientSecret;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  UDID;                                             		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
// [0x00020000] 
struct UMcpUserManagerBase_execAuthenticateUserFacebook_Parms
{
	// struct FString                                  FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  FacebookToken;                                    		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  UDID;                                             		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
// [0x00120000] 
struct UMcpUserManagerBase_execOnRegisterUserComplete_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  Error;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
// [0x00020000] 
struct UMcpUserManagerBase_execRegisterUserFacebook_Parms
{
	// struct FString                                  FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  FacebookAuthToken;                                		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
// [0x00020000] 
struct UMcpUserManagerBase_execRegisterUserGenerated_Parms
{
};

// Function IpDrv.McpUserManagerBase.CreateInstance
// [0x00022003] ( FUNC_Final )
struct UMcpUserManagerBase_execCreateInstance_Parms
{
	// class UMcpUserManagerBase*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   McpUserManagerBaseClass;                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMcpUserManagerBase*                      NewInstance;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnDeleteUserRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             UserIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.DeleteUser
// [0x00020002] 
struct UMcpUserManager_execDeleteUser_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.GetUser
// [0x00420002] 
struct UMcpUserManager_execGetUser_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FMcpUserStatus                           User;                                             		// 0x0010 (0x0068) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             UserIndex;                                        		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.GetUsers
// [0x00420002] 
struct UMcpUserManager_execGetUsers_Parms
{
	// TArray< struct FMcpUserStatus >                 Users;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnQueryUsersRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.ParseUsers
// [0x00080002] 
struct UMcpUserManager_execParseUsers_Parms
{
	// struct FString                                  JsonPayload;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             JsonIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  McpId;                                            		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.QueryUsers
// [0x00420002] 
struct UMcpUserManager_execQueryUsers_Parms
{
	// TArray< struct FString >                        McpIds;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FString                                  JsonPayload;                                      		// 0x002C (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnQueryUserRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.QueryUser
// [0x00024002] 
struct UMcpUserManager_execQueryUser_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bShouldUpdateLastActive : 1;                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  URL;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnAuthenticateUserRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  McpId;                                            		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FString                                  Ticket;                                           		// 0x0040 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.AuthenticateUserMcp
// [0x00020002] 
struct UMcpUserManager_execAuthenticateUserMcp_Parms
{
	// struct FString                                  McpId;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ClientSecret;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  UDID;                                             		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.AuthenticateUserFacebook
// [0x00020002] 
struct UMcpUserManager_execAuthenticateUserFacebook_Parms
{
	// struct FString                                  FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  FacebookToken;                                    		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  UDID;                                             		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0030 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
// [0x00020002] 
struct UMcpUserManager_execOnRegisterUserRequestComplete_Parms
{
	// class UHttpRequestInterface*                    Request;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ResponseCode;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ResponseString;                                   		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FString                                  McpId;                                            		// 0x0030 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.ParseUser
// [0x00080002] 
struct UMcpUserManager_execParseUser_Parms
{
	// struct FString                                  JsonPayload;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UJsonObject*                              ParsedJson;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// int                                             UserIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  McpId;                                            		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
// [0x00020002] 
struct UMcpUserManager_execRegisterUserFacebook_Parms
{
	// struct FString                                  FacebookId;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  FacebookAuthToken;                                		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
// [0x00020002] 
struct UMcpUserManager_execRegisterUserGenerated_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UHttpRequestInterface*                    Request;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             AddAt;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execDebugDraw_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
// [0x00040003] ( FUNC_Final )
struct UOnlineImageDownloaderWeb_execOnDownloadComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             FoundIdx;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         JPEGData;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
// [0x00040003] ( FUNC_Final )
struct UOnlineImageDownloaderWeb_execDownloadNextImage_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PendingDownloads;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execClearAllDownloads_Parms
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execClearDownloads_Parms
{
	// TArray< struct FString >                        URLs;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execGetNumPendingDownloads_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execRequestOnlineImages_Parms
{
	// TArray< struct FString >                        URLs;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             FoundIdx;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
// [0x00020002] 
struct UOnlineImageDownloaderWeb_execGetOnlineImageTexture_Parms
{
	// struct FString                                  URL;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UTexture*                                 ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             FoundIdx;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
// [0x00120000] 
struct UOnlineImageDownloaderWeb_execOnOnlineImageDownloaded_Parms
{
	// struct FOnlineImageDownload                     CachedEntry;                                      		// 0x0000 (0x0028) [0x0000000000000000]              
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] ( FUNC_Final )
struct AWebConnection_execIsHanging_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002] 
struct AWebConnection_execCleanup_Parms
{
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002] 
struct AWebConnection_execCheckRawBytes_Parms
{
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002] 
struct AWebConnection_execEndOfHeaders_Parms
{
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002] 
struct AWebConnection_execCreateResponseObject_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002] 
struct AWebConnection_execProcessPost_Parms
{
	// struct FString                                  S;                                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002] 
struct AWebConnection_execProcessGet_Parms
{
	// struct FString                                  S;                                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002] 
struct AWebConnection_execProcessHead_Parms
{
	// struct FString                                  S;                                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] 
struct AWebConnection_execReceivedLine_Parms
{
	// struct FString                                  S;                                                		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventReceivedText_Parms
{
	// struct FString                                  Text;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventTimer_Parms
{
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventClosed_Parms
{
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventAccepted_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif