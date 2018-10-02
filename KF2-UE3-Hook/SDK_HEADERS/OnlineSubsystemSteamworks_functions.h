/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.InstallAllItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFWorkshopSteamworks::InstallAllItems ( )
{
	static UFunction* pFnInstallAllItems = NULL;

	if ( ! pFnInstallAllItems )
		pFnInstallAllItems = (UFunction*) UObject::GObjObjects()->Data[ 46174 ];

	UKFWorkshopSteamworks_execInstallAllItems_Parms InstallAllItems_Parms;

	pFnInstallAllItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInstallAllItems, &InstallAllItems_Parms, NULL );

	pFnInstallAllItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.UpdateWorkshopFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFWorkshopSteamworks::UpdateWorkshopFiles ( )
{
	static UFunction* pFnUpdateWorkshopFiles = NULL;

	if ( ! pFnUpdateWorkshopFiles )
		pFnUpdateWorkshopFiles = (UFunction*) UObject::GObjObjects()->Data[ 46173 ];

	UKFWorkshopSteamworks_execUpdateWorkshopFiles_Parms UpdateWorkshopFiles_Parms;

	pFnUpdateWorkshopFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateWorkshopFiles, &UpdateWorkshopFiles_Parms, NULL );

	pFnUpdateWorkshopFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.Initialize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFWorkshopSteamworks::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 46172 ];

	UKFWorkshopSteamworks_execInitialize_Parms Initialize_Parms;

	pFnInitialize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	pFnInitialize->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.GetUGCForPackage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFWorkshopSteamworks::GetUGCForPackage ( )
{
	static UFunction* pFnGetUGCForPackage = NULL;

	if ( ! pFnGetUGCForPackage )
		pFnGetUGCForPackage = (UFunction*) UObject::GObjObjects()->Data[ 46169 ];

	UKFWorkshopSteamworks_execGetUGCForPackage_Parms GetUGCForPackage_Parms;

	pFnGetUGCForPackage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUGCForPackage, &GetUGCForPackage_Parms, NULL );

	pFnGetUGCForPackage->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.ClearUGCDownloadProgressDelegate
// [0x00020002] 
// Parameters infos:

void UKFWorkshopSteamworks::ClearUGCDownloadProgressDelegate ( )
{
	static UFunction* pFnClearUGCDownloadProgressDelegate = NULL;

	if ( ! pFnClearUGCDownloadProgressDelegate )
		pFnClearUGCDownloadProgressDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46168 ];

	UKFWorkshopSteamworks_execClearUGCDownloadProgressDelegate_Parms ClearUGCDownloadProgressDelegate_Parms;

	this->ProcessEvent ( pFnClearUGCDownloadProgressDelegate, &ClearUGCDownloadProgressDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.SetUGCDownloadProgressDelegate
// [0x00020002] 
// Parameters infos:

void UKFWorkshopSteamworks::SetUGCDownloadProgressDelegate ( )
{
	static UFunction* pFnSetUGCDownloadProgressDelegate = NULL;

	if ( ! pFnSetUGCDownloadProgressDelegate )
		pFnSetUGCDownloadProgressDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46166 ];

	UKFWorkshopSteamworks_execSetUGCDownloadProgressDelegate_Parms SetUGCDownloadProgressDelegate_Parms;

	this->ProcessEvent ( pFnSetUGCDownloadProgressDelegate, &SetUGCDownloadProgressDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFWorkshopSteamworks.UGCDownloadProgressDelegate
// [0x00120000] 
// Parameters infos:

void UKFWorkshopSteamworks::UGCDownloadProgressDelegate ( )
{
	static UFunction* pFnUGCDownloadProgressDelegate = NULL;

	if ( ! pFnUGCDownloadProgressDelegate )
		pFnUGCDownloadProgressDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46162 ];

	UKFWorkshopSteamworks_execUGCDownloadProgressDelegate_Parms UGCDownloadProgressDelegate_Parms;

	this->ProcessEvent ( pFnUGCDownloadProgressDelegate, &UGCDownloadProgressDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::GetServerAddr ( )
{
	static UFunction* pFnGetServerAddr = NULL;

	if ( ! pFnGetServerAddr )
		pFnGetServerAddr = (UFunction*) UObject::GObjObjects()->Data[ 46207 ];

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Parms GetServerAddr_Parms;

	pFnGetServerAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerAddr, &GetServerAddr_Parms, NULL );

	pFnGetServerAddr->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::GetServerUniqueId ( )
{
	static UFunction* pFnGetServerUniqueId = NULL;

	if ( ! pFnGetServerUniqueId )
		pFnGetServerUniqueId = (UFunction*) UObject::GObjObjects()->Data[ 46139 ];

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Parms GetServerUniqueId_Parms;

	pFnGetServerUniqueId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerUniqueId, &GetServerUniqueId_Parms, NULL );

	pFnGetServerUniqueId->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession ( )
{
	static UFunction* pFnVerifyServerAuthSession = NULL;

	if ( ! pFnVerifyServerAuthSession )
		pFnVerifyServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 46201 ];

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Parms VerifyServerAuthSession_Parms;

	pFnVerifyServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyServerAuthSession, &VerifyServerAuthSession_Parms, NULL );

	pFnVerifyServerAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::CreateServerAuthSession ( )
{
	static UFunction* pFnCreateServerAuthSession = NULL;

	if ( ! pFnCreateServerAuthSession )
		pFnCreateServerAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 46195 ];

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Parms CreateServerAuthSession_Parms;

	pFnCreateServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateServerAuthSession, &CreateServerAuthSession_Parms, NULL );

	pFnCreateServerAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession ( )
{
	static UFunction* pFnVerifyClientAuthSession = NULL;

	if ( ! pFnVerifyClientAuthSession )
		pFnVerifyClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 46189 ];

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Parms VerifyClientAuthSession_Parms;

	pFnVerifyClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVerifyClientAuthSession, &VerifyClientAuthSession_Parms, NULL );

	pFnVerifyClientAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::CreateClientAuthSession ( )
{
	static UFunction* pFnCreateClientAuthSession = NULL;

	if ( ! pFnCreateClientAuthSession )
		pFnCreateClientAuthSession = (UFunction*) UObject::GObjObjects()->Data[ 46182 ];

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Parms CreateClientAuthSession_Parms;

	pFnCreateClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateClientAuthSession, &CreateClientAuthSession_Parms, NULL );

	pFnCreateClientAuthSession->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::SendServerAuthRequest ( )
{
	static UFunction* pFnSendServerAuthRequest = NULL;

	if ( ! pFnSendServerAuthRequest )
		pFnSendServerAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 46179 ];

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Parms SendServerAuthRequest_Parms;

	pFnSendServerAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendServerAuthRequest, &SendServerAuthRequest_Parms, NULL );

	pFnSendServerAuthRequest->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineAuthInterfaceSteamworks::SendClientAuthRequest ( )
{
	static UFunction* pFnSendClientAuthRequest = NULL;

	if ( ! pFnSendClientAuthRequest )
		pFnSendClientAuthRequest = (UFunction*) UObject::GObjObjects()->Data[ 46175 ];

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Parms SendClientAuthRequest_Parms;

	pFnSendClientAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendClientAuthRequest, &SendClientAuthRequest_Parms, NULL );

	pFnSendClientAuthRequest->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearOnlineDelegates
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::ClearOnlineDelegates ( )
{
	static UFunction* pFnClearOnlineDelegates = NULL;

	if ( ! pFnClearOnlineDelegates )
		pFnClearOnlineDelegates = (UFunction*) UObject::GObjObjects()->Data[ 46346 ];

	UOnlineGameInterfaceSteamworks_execClearOnlineDelegates_Parms ClearOnlineDelegates_Parms;

	this->ProcessEvent ( pFnClearOnlineDelegates, &ClearOnlineDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData ( )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 46342 ];

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate ( )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46339 ];

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate ( )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46337 ];

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete ( )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 46333 ];

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceSteamworks::UnregisterPlayer ( )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46329 ];

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Parms UnregisterPlayer_Parms;

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate ( )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46326 ];

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate ( )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46324 ];

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete ( )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 46320 ];

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceSteamworks::RegisterPlayer ( )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46315 ];

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Parms RegisterPlayer_Parms;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceSteamworks::AcceptGameInvite ( )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 46310 ];

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Parms AcceptGameInvite_Parms;

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	pFnAcceptGameInvite->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted ( )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 46307 ];

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate ( )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46303 ];

	UOnlineGameInterfaceSteamworks_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate ( )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46300 ];

	UOnlineGameInterfaceSteamworks_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceSteamworks::UpdateOnlineGame ( )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 46295 ];

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsSearchResultInFavoritesList
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceSteamworks::IsSearchResultInFavoritesList ( )
{
	static UFunction* pFnIsSearchResultInFavoritesList = NULL;

	if ( ! pFnIsSearchResultInFavoritesList )
		pFnIsSearchResultInFavoritesList = (UFunction*) UObject::GObjObjects()->Data[ 46292 ];

	UOnlineGameInterfaceSteamworks_execIsSearchResultInFavoritesList_Parms IsSearchResultInFavoritesList_Parms;

	pFnIsSearchResultInFavoritesList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSearchResultInFavoritesList, &IsSearchResultInFavoritesList_Parms, NULL );

	pFnIsSearchResultInFavoritesList->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RemoveSearchResultFromFavorites
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceSteamworks::RemoveSearchResultFromFavorites ( )
{
	static UFunction* pFnRemoveSearchResultFromFavorites = NULL;

	if ( ! pFnRemoveSearchResultFromFavorites )
		pFnRemoveSearchResultFromFavorites = (UFunction*) UObject::GObjObjects()->Data[ 46289 ];

	UOnlineGameInterfaceSteamworks_execRemoveSearchResultFromFavorites_Parms RemoveSearchResultFromFavorites_Parms;

	pFnRemoveSearchResultFromFavorites->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveSearchResultFromFavorites, &RemoveSearchResultFromFavorites_Parms, NULL );

	pFnRemoveSearchResultFromFavorites->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSearchResultToFavorites
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceSteamworks::AddSearchResultToFavorites ( )
{
	static UFunction* pFnAddSearchResultToFavorites = NULL;

	if ( ! pFnAddSearchResultToFavorites )
		pFnAddSearchResultToFavorites = (UFunction*) UObject::GObjObjects()->Data[ 46286 ];

	UOnlineGameInterfaceSteamworks_execAddSearchResultToFavorites_Parms AddSearchResultToFavorites_Parms;

	pFnAddSearchResultToFavorites->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddSearchResultToFavorites, &AddSearchResultToFavorites_Parms, NULL );

	pFnAddSearchResultToFavorites->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGetPlayerListCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::ClearGetPlayerListCompleteDelegate ( )
{
	static UFunction* pFnClearGetPlayerListCompleteDelegate = NULL;

	if ( ! pFnClearGetPlayerListCompleteDelegate )
		pFnClearGetPlayerListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46283 ];

	UOnlineGameInterfaceSteamworks_execClearGetPlayerListCompleteDelegate_Parms ClearGetPlayerListCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearGetPlayerListCompleteDelegate, &ClearGetPlayerListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGetPlayerListCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::AddGetPlayerListCompleteDelegate ( )
{
	static UFunction* pFnAddGetPlayerListCompleteDelegate = NULL;

	if ( ! pFnAddGetPlayerListCompleteDelegate )
		pFnAddGetPlayerListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46281 ];

	UOnlineGameInterfaceSteamworks_execAddGetPlayerListCompleteDelegate_Parms AddGetPlayerListCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddGetPlayerListCompleteDelegate, &AddGetPlayerListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetMatchmakingTypeMode
// [0x00020002] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::SetMatchmakingTypeMode ( )
{
	static UFunction* pFnSetMatchmakingTypeMode = NULL;

	if ( ! pFnSetMatchmakingTypeMode )
		pFnSetMatchmakingTypeMode = (UFunction*) UObject::GObjObjects()->Data[ 46279 ];

	UOnlineGameInterfaceSteamworks_execSetMatchmakingTypeMode_Parms SetMatchmakingTypeMode_Parms;

	this->ProcessEvent ( pFnSetMatchmakingTypeMode, &SetMatchmakingTypeMode_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGetPlayerListComplete
// [0x00120000] 
// Parameters infos:

void UOnlineGameInterfaceSteamworks::OnGetPlayerListComplete ( )
{
	static UFunction* pFnOnGetPlayerListComplete = NULL;

	if ( ! pFnOnGetPlayerListComplete )
		pFnOnGetPlayerListComplete = (UFunction*) UObject::GObjObjects()->Data[ 46276 ];

	UOnlineGameInterfaceSteamworks_execOnGetPlayerListComplete_Parms OnGetPlayerListComplete_Parms;

	this->ProcessEvent ( pFnOnGetPlayerListComplete, &OnGetPlayerListComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline ( )
{
	static UFunction* pFnGetLobbyFromCommandline = NULL;

	if ( ! pFnGetLobbyFromCommandline )
		pFnGetLobbyFromCommandline = (UFunction*) UObject::GObjObjects()->Data[ 45914 ];

	UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Parms GetLobbyFromCommandline_Parms;

	pFnGetLobbyFromCommandline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyFromCommandline, &GetLobbyFromCommandline_Parms, NULL );

	pFnGetLobbyFromCommandline->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyInviteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearLobbyInviteDelegate ( )
{
	static UFunction* pFnClearLobbyInviteDelegate = NULL;

	if ( ! pFnClearLobbyInviteDelegate )
		pFnClearLobbyInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45911 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyInviteDelegate_Parms ClearLobbyInviteDelegate_Parms;

	this->ProcessEvent ( pFnClearLobbyInviteDelegate, &ClearLobbyInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyInviteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddLobbyInviteDelegate ( )
{
	static UFunction* pFnAddLobbyInviteDelegate = NULL;

	if ( ! pFnAddLobbyInviteDelegate )
		pFnAddLobbyInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45909 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyInviteDelegate_Parms AddLobbyInviteDelegate_Parms;

	this->ProcessEvent ( pFnAddLobbyInviteDelegate, &AddLobbyInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyInvite
// [0x00120000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbyInvite ( )
{
	static UFunction* pFnOnLobbyInvite = NULL;

	if ( ! pFnOnLobbyInvite )
		pFnOnLobbyInvite = (UFunction*) UObject::GObjObjects()->Data[ 45905 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyInvite_Parms OnLobbyInvite_Parms;

	this->ProcessEvent ( pFnOnLobbyInvite, &OnLobbyInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::InviteToLobby ( )
{
	static UFunction* pFnInviteToLobby = NULL;

	if ( ! pFnInviteToLobby )
		pFnInviteToLobby = (UFunction*) UObject::GObjObjects()->Data[ 45901 ];

	UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Parms InviteToLobby_Parms;

	pFnInviteToLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteToLobby, &InviteToLobby_Parms, NULL );

	pFnInviteToLobby->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SetLobbyOwner ( )
{
	static UFunction* pFnSetLobbyOwner = NULL;

	if ( ! pFnSetLobbyOwner )
		pFnSetLobbyOwner = (UFunction*) UObject::GObjObjects()->Data[ 45897 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Parms SetLobbyOwner_Parms;

	pFnSetLobbyOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyOwner, &SetLobbyOwner_Parms, NULL );

	pFnSetLobbyOwner->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SetLobbyLock ( )
{
	static UFunction* pFnSetLobbyLock = NULL;

	if ( ! pFnSetLobbyLock )
		pFnSetLobbyLock = (UFunction*) UObject::GObjObjects()->Data[ 45893 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Parms SetLobbyLock_Parms;

	pFnSetLobbyLock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyLock, &SetLobbyLock_Parms, NULL );

	pFnSetLobbyLock->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SetLobbyType ( )
{
	static UFunction* pFnSetLobbyType = NULL;

	if ( ! pFnSetLobbyType )
		pFnSetLobbyType = (UFunction*) UObject::GObjObjects()->Data[ 45889 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Parms SetLobbyType_Parms;

	pFnSetLobbyType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyType, &SetLobbyType_Parms, NULL );

	pFnSetLobbyType->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SetLobbyServer ( )
{
	static UFunction* pFnSetLobbyServer = NULL;

	if ( ! pFnSetLobbyServer )
		pFnSetLobbyServer = (UFunction*) UObject::GObjObjects()->Data[ 45884 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Parms SetLobbyServer_Parms;

	pFnSetLobbyServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyServer, &SetLobbyServer_Parms, NULL );

	pFnSetLobbyServer->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting ( )
{
	static UFunction* pFnRemoveLobbySetting = NULL;

	if ( ! pFnRemoveLobbySetting )
		pFnRemoveLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 45880 ];

	UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Parms RemoveLobbySetting_Parms;

	pFnRemoveLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveLobbySetting, &RemoveLobbySetting_Parms, NULL );

	pFnRemoveLobbySetting->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SetLobbySetting ( )
{
	static UFunction* pFnSetLobbySetting = NULL;

	if ( ! pFnSetLobbySetting )
		pFnSetLobbySetting = (UFunction*) UObject::GObjObjects()->Data[ 45875 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Parms SetLobbySetting_Parms;

	pFnSetLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbySetting, &SetLobbySetting_Parms, NULL );

	pFnSetLobbySetting->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin ( )
{
	static UFunction* pFnGetLobbyAdmin = NULL;

	if ( ! pFnGetLobbyAdmin )
		pFnGetLobbyAdmin = (UFunction*) UObject::GObjObjects()->Data[ 45871 ];

	UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Parms GetLobbyAdmin_Parms;

	pFnGetLobbyAdmin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyAdmin, &GetLobbyAdmin_Parms, NULL );

	pFnGetLobbyAdmin->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked ( )
{
	static UFunction* pFnOnLobbyKicked = NULL;

	if ( ! pFnOnLobbyKicked )
		pFnOnLobbyKicked = (UFunction*) UObject::GObjObjects()->Data[ 45866 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Parms OnLobbyKicked_Parms;

	this->ProcessEvent ( pFnOnLobbyKicked, &OnLobbyKicked_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyJoinGameDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearLobbyJoinGameDelegate ( )
{
	static UFunction* pFnClearLobbyJoinGameDelegate = NULL;

	if ( ! pFnClearLobbyJoinGameDelegate )
		pFnClearLobbyJoinGameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45863 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyJoinGameDelegate_Parms ClearLobbyJoinGameDelegate_Parms;

	this->ProcessEvent ( pFnClearLobbyJoinGameDelegate, &ClearLobbyJoinGameDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyJoinGameDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddLobbyJoinGameDelegate ( )
{
	static UFunction* pFnAddLobbyJoinGameDelegate = NULL;

	if ( ! pFnAddLobbyJoinGameDelegate )
		pFnAddLobbyJoinGameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45861 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyJoinGameDelegate_Parms AddLobbyJoinGameDelegate_Parms;

	this->ProcessEvent ( pFnAddLobbyJoinGameDelegate, &AddLobbyJoinGameDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyJoinGameDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyJoinGameDelegates ( )
{
	static UFunction* pFnTriggerLobbyJoinGameDelegates = NULL;

	if ( ! pFnTriggerLobbyJoinGameDelegates )
		pFnTriggerLobbyJoinGameDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45854 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyJoinGameDelegates_Parms TriggerLobbyJoinGameDelegates_Parms;

	this->ProcessEvent ( pFnTriggerLobbyJoinGameDelegates, &TriggerLobbyJoinGameDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyJoinGame
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbyJoinGame ( )
{
	static UFunction* pFnOnLobbyJoinGame = NULL;

	if ( ! pFnOnLobbyJoinGame )
		pFnOnLobbyJoinGame = (UFunction*) UObject::GObjObjects()->Data[ 45848 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyJoinGame_Parms OnLobbyJoinGame_Parms;

	this->ProcessEvent ( pFnOnLobbyJoinGame, &OnLobbyJoinGame_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveBinaryDataDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearLobbyReceiveBinaryDataDelegate ( )
{
	static UFunction* pFnClearLobbyReceiveBinaryDataDelegate = NULL;

	if ( ! pFnClearLobbyReceiveBinaryDataDelegate )
		pFnClearLobbyReceiveBinaryDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45845 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveBinaryDataDelegate_Parms ClearLobbyReceiveBinaryDataDelegate_Parms;

	this->ProcessEvent ( pFnClearLobbyReceiveBinaryDataDelegate, &ClearLobbyReceiveBinaryDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveBinaryDataDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddLobbyReceiveBinaryDataDelegate ( )
{
	static UFunction* pFnAddLobbyReceiveBinaryDataDelegate = NULL;

	if ( ! pFnAddLobbyReceiveBinaryDataDelegate )
		pFnAddLobbyReceiveBinaryDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45843 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveBinaryDataDelegate_Parms AddLobbyReceiveBinaryDataDelegate_Parms;

	this->ProcessEvent ( pFnAddLobbyReceiveBinaryDataDelegate, &AddLobbyReceiveBinaryDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveBinaryDataDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyReceiveBinaryDataDelegates ( )
{
	static UFunction* pFnTriggerLobbyReceiveBinaryDataDelegates = NULL;

	if ( ! pFnTriggerLobbyReceiveBinaryDataDelegates )
		pFnTriggerLobbyReceiveBinaryDataDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45837 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveBinaryDataDelegates_Parms TriggerLobbyReceiveBinaryDataDelegates_Parms;

	this->ProcessEvent ( pFnTriggerLobbyReceiveBinaryDataDelegates, &TriggerLobbyReceiveBinaryDataDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveBinaryData
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbyReceiveBinaryData ( )
{
	static UFunction* pFnOnLobbyReceiveBinaryData = NULL;

	if ( ! pFnOnLobbyReceiveBinaryData )
		pFnOnLobbyReceiveBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 45830 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveBinaryData_Parms OnLobbyReceiveBinaryData_Parms;

	this->ProcessEvent ( pFnOnLobbyReceiveBinaryData, &OnLobbyReceiveBinaryData_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyReceiveMessageDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearLobbyReceiveMessageDelegate ( )
{
	static UFunction* pFnClearLobbyReceiveMessageDelegate = NULL;

	if ( ! pFnClearLobbyReceiveMessageDelegate )
		pFnClearLobbyReceiveMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45827 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyReceiveMessageDelegate_Parms ClearLobbyReceiveMessageDelegate_Parms;

	this->ProcessEvent ( pFnClearLobbyReceiveMessageDelegate, &ClearLobbyReceiveMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyReceiveMessageDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddLobbyReceiveMessageDelegate ( )
{
	static UFunction* pFnAddLobbyReceiveMessageDelegate = NULL;

	if ( ! pFnAddLobbyReceiveMessageDelegate )
		pFnAddLobbyReceiveMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45825 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyReceiveMessageDelegate_Parms AddLobbyReceiveMessageDelegate_Parms;

	this->ProcessEvent ( pFnAddLobbyReceiveMessageDelegate, &AddLobbyReceiveMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyReceiveMessageDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyReceiveMessageDelegates ( )
{
	static UFunction* pFnTriggerLobbyReceiveMessageDelegates = NULL;

	if ( ! pFnTriggerLobbyReceiveMessageDelegates )
		pFnTriggerLobbyReceiveMessageDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45817 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyReceiveMessageDelegates_Parms TriggerLobbyReceiveMessageDelegates_Parms;

	this->ProcessEvent ( pFnTriggerLobbyReceiveMessageDelegates, &TriggerLobbyReceiveMessageDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyReceiveMessage
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbyReceiveMessage ( )
{
	static UFunction* pFnOnLobbyReceiveMessage = NULL;

	if ( ! pFnOnLobbyReceiveMessage )
		pFnOnLobbyReceiveMessage = (UFunction*) UObject::GObjObjects()->Data[ 45810 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyReceiveMessage_Parms OnLobbyReceiveMessage_Parms;

	this->ProcessEvent ( pFnOnLobbyReceiveMessage, &OnLobbyReceiveMessage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberStatusUpdateDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearLobbyMemberStatusUpdateDelegate ( )
{
	static UFunction* pFnClearLobbyMemberStatusUpdateDelegate = NULL;

	if ( ! pFnClearLobbyMemberStatusUpdateDelegate )
		pFnClearLobbyMemberStatusUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45807 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberStatusUpdateDelegate_Parms ClearLobbyMemberStatusUpdateDelegate_Parms;

	this->ProcessEvent ( pFnClearLobbyMemberStatusUpdateDelegate, &ClearLobbyMemberStatusUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberStatusUpdateDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddLobbyMemberStatusUpdateDelegate ( )
{
	static UFunction* pFnAddLobbyMemberStatusUpdateDelegate = NULL;

	if ( ! pFnAddLobbyMemberStatusUpdateDelegate )
		pFnAddLobbyMemberStatusUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45805 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberStatusUpdateDelegate_Parms AddLobbyMemberStatusUpdateDelegate_Parms;

	this->ProcessEvent ( pFnAddLobbyMemberStatusUpdateDelegate, &AddLobbyMemberStatusUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberStatusUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyMemberStatusUpdateDelegates ( )
{
	static UFunction* pFnTriggerLobbyMemberStatusUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbyMemberStatusUpdateDelegates )
		pFnTriggerLobbyMemberStatusUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45797 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberStatusUpdateDelegates_Parms TriggerLobbyMemberStatusUpdateDelegates_Parms;

	this->ProcessEvent ( pFnTriggerLobbyMemberStatusUpdateDelegates, &TriggerLobbyMemberStatusUpdateDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberStatusUpdate
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbyMemberStatusUpdate ( )
{
	static UFunction* pFnOnLobbyMemberStatusUpdate = NULL;

	if ( ! pFnOnLobbyMemberStatusUpdate )
		pFnOnLobbyMemberStatusUpdate = (UFunction*) UObject::GObjObjects()->Data[ 45790 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberStatusUpdate_Parms OnLobbyMemberStatusUpdate_Parms;

	this->ProcessEvent ( pFnOnLobbyMemberStatusUpdate, &OnLobbyMemberStatusUpdate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearLobbyMemberSettingsUpdateDelegate ( )
{
	static UFunction* pFnClearLobbyMemberSettingsUpdateDelegate = NULL;

	if ( ! pFnClearLobbyMemberSettingsUpdateDelegate )
		pFnClearLobbyMemberSettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45787 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbyMemberSettingsUpdateDelegate_Parms ClearLobbyMemberSettingsUpdateDelegate_Parms;

	this->ProcessEvent ( pFnClearLobbyMemberSettingsUpdateDelegate, &ClearLobbyMemberSettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbyMemberSettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddLobbyMemberSettingsUpdateDelegate ( )
{
	static UFunction* pFnAddLobbyMemberSettingsUpdateDelegate = NULL;

	if ( ! pFnAddLobbyMemberSettingsUpdateDelegate )
		pFnAddLobbyMemberSettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45785 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbyMemberSettingsUpdateDelegate_Parms AddLobbyMemberSettingsUpdateDelegate_Parms;

	this->ProcessEvent ( pFnAddLobbyMemberSettingsUpdateDelegate, &AddLobbyMemberSettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbyMemberSettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbyMemberSettingsUpdateDelegates ( )
{
	static UFunction* pFnTriggerLobbyMemberSettingsUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbyMemberSettingsUpdateDelegates )
		pFnTriggerLobbyMemberSettingsUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45779 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbyMemberSettingsUpdateDelegates_Parms TriggerLobbyMemberSettingsUpdateDelegates_Parms;

	this->ProcessEvent ( pFnTriggerLobbyMemberSettingsUpdateDelegates, &TriggerLobbyMemberSettingsUpdateDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyMemberSettingsUpdate
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbyMemberSettingsUpdate ( )
{
	static UFunction* pFnOnLobbyMemberSettingsUpdate = NULL;

	if ( ! pFnOnLobbyMemberSettingsUpdate )
		pFnOnLobbyMemberSettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 45774 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbyMemberSettingsUpdate_Parms OnLobbyMemberSettingsUpdate_Parms;

	this->ProcessEvent ( pFnOnLobbyMemberSettingsUpdate, &OnLobbyMemberSettingsUpdate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearLobbySettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearLobbySettingsUpdateDelegate ( )
{
	static UFunction* pFnClearLobbySettingsUpdateDelegate = NULL;

	if ( ! pFnClearLobbySettingsUpdateDelegate )
		pFnClearLobbySettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45771 ];

	UOnlineLobbyInterfaceSteamworks_execClearLobbySettingsUpdateDelegate_Parms ClearLobbySettingsUpdateDelegate_Parms;

	this->ProcessEvent ( pFnClearLobbySettingsUpdateDelegate, &ClearLobbySettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddLobbySettingsUpdateDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddLobbySettingsUpdateDelegate ( )
{
	static UFunction* pFnAddLobbySettingsUpdateDelegate = NULL;

	if ( ! pFnAddLobbySettingsUpdateDelegate )
		pFnAddLobbySettingsUpdateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45769 ];

	UOnlineLobbyInterfaceSteamworks_execAddLobbySettingsUpdateDelegate_Parms AddLobbySettingsUpdateDelegate_Parms;

	this->ProcessEvent ( pFnAddLobbySettingsUpdateDelegate, &AddLobbySettingsUpdateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerLobbySettingsUpdateDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerLobbySettingsUpdateDelegates ( )
{
	static UFunction* pFnTriggerLobbySettingsUpdateDelegates = NULL;

	if ( ! pFnTriggerLobbySettingsUpdateDelegates )
		pFnTriggerLobbySettingsUpdateDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45764 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerLobbySettingsUpdateDelegates_Parms TriggerLobbySettingsUpdateDelegates_Parms;

	this->ProcessEvent ( pFnTriggerLobbySettingsUpdateDelegates, &TriggerLobbySettingsUpdateDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbySettingsUpdate
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnLobbySettingsUpdate ( )
{
	static UFunction* pFnOnLobbySettingsUpdate = NULL;

	if ( ! pFnOnLobbySettingsUpdate )
		pFnOnLobbySettingsUpdate = (UFunction*) UObject::GObjObjects()->Data[ 45760 ];

	UOnlineLobbyInterfaceSteamworks_execOnLobbySettingsUpdate_Parms OnLobbySettingsUpdate_Parms;

	this->ProcessEvent ( pFnOnLobbySettingsUpdate, &OnLobbySettingsUpdate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData ( )
{
	static UFunction* pFnSendLobbyBinaryData = NULL;

	if ( ! pFnSendLobbyBinaryData )
		pFnSendLobbyBinaryData = (UFunction*) UObject::GObjObjects()->Data[ 45755 ];

	UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Parms SendLobbyBinaryData_Parms;

	pFnSendLobbyBinaryData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendLobbyBinaryData, &SendLobbyBinaryData_Parms, NULL );

	pFnSendLobbyBinaryData->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SendLobbyMessage ( )
{
	static UFunction* pFnSendLobbyMessage = NULL;

	if ( ! pFnSendLobbyMessage )
		pFnSendLobbyMessage = (UFunction*) UObject::GObjObjects()->Data[ 45751 ];

	UOnlineLobbyInterfaceSteamworks_execSendLobbyMessage_Parms SendLobbyMessage_Parms;

	pFnSendLobbyMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendLobbyMessage, &SendLobbyMessage_Parms, NULL );

	pFnSendLobbyMessage->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting ( )
{
	static UFunction* pFnSetLobbyUserSetting = NULL;

	if ( ! pFnSetLobbyUserSetting )
		pFnSetLobbyUserSetting = (UFunction*) UObject::GObjObjects()->Data[ 45746 ];

	UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Parms SetLobbyUserSetting_Parms;

	pFnSetLobbyUserSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyUserSetting, &SetLobbyUserSetting_Parms, NULL );

	pFnSetLobbyUserSetting->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::LeaveLobby ( )
{
	static UFunction* pFnLeaveLobby = NULL;

	if ( ! pFnLeaveLobby )
		pFnLeaveLobby = (UFunction*) UObject::GObjObjects()->Data[ 45743 ];

	UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Parms LeaveLobby_Parms;

	pFnLeaveLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveLobby, &LeaveLobby_Parms, NULL );

	pFnLeaveLobby->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearJoinLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearJoinLobbyCompleteDelegate ( )
{
	static UFunction* pFnClearJoinLobbyCompleteDelegate = NULL;

	if ( ! pFnClearJoinLobbyCompleteDelegate )
		pFnClearJoinLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45740 ];

	UOnlineLobbyInterfaceSteamworks_execClearJoinLobbyCompleteDelegate_Parms ClearJoinLobbyCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearJoinLobbyCompleteDelegate, &ClearJoinLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddJoinLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddJoinLobbyCompleteDelegate ( )
{
	static UFunction* pFnAddJoinLobbyCompleteDelegate = NULL;

	if ( ! pFnAddJoinLobbyCompleteDelegate )
		pFnAddJoinLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45738 ];

	UOnlineLobbyInterfaceSteamworks_execAddJoinLobbyCompleteDelegate_Parms AddJoinLobbyCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddJoinLobbyCompleteDelegate, &AddJoinLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerJoinLobbyCompleteDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerJoinLobbyCompleteDelegates ( )
{
	static UFunction* pFnTriggerJoinLobbyCompleteDelegates = NULL;

	if ( ! pFnTriggerJoinLobbyCompleteDelegates )
		pFnTriggerJoinLobbyCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45730 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerJoinLobbyCompleteDelegates_Parms TriggerJoinLobbyCompleteDelegates_Parms;

	this->ProcessEvent ( pFnTriggerJoinLobbyCompleteDelegates, &TriggerJoinLobbyCompleteDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnJoinLobbyComplete
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnJoinLobbyComplete ( )
{
	static UFunction* pFnOnJoinLobbyComplete = NULL;

	if ( ! pFnOnJoinLobbyComplete )
		pFnOnJoinLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 45723 ];

	UOnlineLobbyInterfaceSteamworks_execOnJoinLobbyComplete_Parms OnJoinLobbyComplete_Parms;

	this->ProcessEvent ( pFnOnJoinLobbyComplete, &OnJoinLobbyComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::JoinLobby ( )
{
	static UFunction* pFnJoinLobby = NULL;

	if ( ! pFnJoinLobby )
		pFnJoinLobby = (UFunction*) UObject::GObjObjects()->Data[ 45720 ];

	UOnlineLobbyInterfaceSteamworks_execJoinLobby_Parms JoinLobby_Parms;

	pFnJoinLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinLobby, &JoinLobby_Parms, NULL );

	pFnJoinLobby->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearFindLobbiesCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearFindLobbiesCompleteDelegate ( )
{
	static UFunction* pFnClearFindLobbiesCompleteDelegate = NULL;

	if ( ! pFnClearFindLobbiesCompleteDelegate )
		pFnClearFindLobbiesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45717 ];

	UOnlineLobbyInterfaceSteamworks_execClearFindLobbiesCompleteDelegate_Parms ClearFindLobbiesCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearFindLobbiesCompleteDelegate, &ClearFindLobbiesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddFindLobbiesCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddFindLobbiesCompleteDelegate ( )
{
	static UFunction* pFnAddFindLobbiesCompleteDelegate = NULL;

	if ( ! pFnAddFindLobbiesCompleteDelegate )
		pFnAddFindLobbiesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45715 ];

	UOnlineLobbyInterfaceSteamworks_execAddFindLobbiesCompleteDelegate_Parms AddFindLobbiesCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddFindLobbiesCompleteDelegate, &AddFindLobbiesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.TriggerFindLobbiesCompleteDelegates
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::eventTriggerFindLobbiesCompleteDelegates ( )
{
	static UFunction* pFnTriggerFindLobbiesCompleteDelegates = NULL;

	if ( ! pFnTriggerFindLobbiesCompleteDelegates )
		pFnTriggerFindLobbiesCompleteDelegates = (UFunction*) UObject::GObjObjects()->Data[ 45710 ];

	UOnlineLobbyInterfaceSteamworks_eventTriggerFindLobbiesCompleteDelegates_Parms TriggerFindLobbiesCompleteDelegates_Parms;

	this->ProcessEvent ( pFnTriggerFindLobbiesCompleteDelegates, &TriggerFindLobbiesCompleteDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnFindLobbiesComplete
// [0x00520000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnFindLobbiesComplete ( )
{
	static UFunction* pFnOnFindLobbiesComplete = NULL;

	if ( ! pFnOnFindLobbiesComplete )
		pFnOnFindLobbiesComplete = (UFunction*) UObject::GObjObjects()->Data[ 45706 ];

	UOnlineLobbyInterfaceSteamworks_execOnFindLobbiesComplete_Parms OnFindLobbiesComplete_Parms;

	this->ProcessEvent ( pFnOnFindLobbiesComplete, &OnFindLobbiesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies ( )
{
	static UFunction* pFnUpdateFoundLobbies = NULL;

	if ( ! pFnUpdateFoundLobbies )
		pFnUpdateFoundLobbies = (UFunction*) UObject::GObjObjects()->Data[ 45703 ];

	UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Parms UpdateFoundLobbies_Parms;

	pFnUpdateFoundLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFoundLobbies, &UpdateFoundLobbies_Parms, NULL );

	pFnUpdateFoundLobbies->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::FindLobbies ( )
{
	static UFunction* pFnFindLobbies = NULL;

	if ( ! pFnFindLobbies )
		pFnFindLobbies = (UFunction*) UObject::GObjObjects()->Data[ 45694 ];

	UOnlineLobbyInterfaceSteamworks_execFindLobbies_Parms FindLobbies_Parms;

	pFnFindLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindLobbies, &FindLobbies_Parms, NULL );

	pFnFindLobbies->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ClearCreateLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::ClearCreateLobbyCompleteDelegate ( )
{
	static UFunction* pFnClearCreateLobbyCompleteDelegate = NULL;

	if ( ! pFnClearCreateLobbyCompleteDelegate )
		pFnClearCreateLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45691 ];

	UOnlineLobbyInterfaceSteamworks_execClearCreateLobbyCompleteDelegate_Parms ClearCreateLobbyCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearCreateLobbyCompleteDelegate, &ClearCreateLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.AddCreateLobbyCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::AddCreateLobbyCompleteDelegate ( )
{
	static UFunction* pFnAddCreateLobbyCompleteDelegate = NULL;

	if ( ! pFnAddCreateLobbyCompleteDelegate )
		pFnAddCreateLobbyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45689 ];

	UOnlineLobbyInterfaceSteamworks_execAddCreateLobbyCompleteDelegate_Parms AddCreateLobbyCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddCreateLobbyCompleteDelegate, &AddCreateLobbyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnCreateLobbyComplete
// [0x00120000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::OnCreateLobbyComplete ( )
{
	static UFunction* pFnOnCreateLobbyComplete = NULL;

	if ( ! pFnOnCreateLobbyComplete )
		pFnOnCreateLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 45685 ];

	UOnlineLobbyInterfaceSteamworks_execOnCreateLobbyComplete_Parms OnCreateLobbyComplete_Parms;

	this->ProcessEvent ( pFnOnCreateLobbyComplete, &OnCreateLobbyComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::CreateLobby ( )
{
	static UFunction* pFnCreateLobby = NULL;

	if ( ! pFnCreateLobby )
		pFnCreateLobby = (UFunction*) UObject::GObjObjects()->Data[ 45679 ];

	UOnlineLobbyInterfaceSteamworks_execCreateLobby_Parms CreateLobby_Parms;

	pFnCreateLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLobby, &CreateLobby_Parms, NULL );

	pFnCreateLobby->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.Initialize
// [0x00020000] 
// Parameters infos:

void UOnlineLobbyInterfaceSteamworks::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 45678 ];

	UOnlineLobbyInterfaceSteamworks_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::RecordPlayersRecentlyMet ( )
{
	static UFunction* pFnRecordPlayersRecentlyMet = NULL;

	if ( ! pFnRecordPlayersRecentlyMet )
		pFnRecordPlayersRecentlyMet = (UFunction*) UObject::GObjObjects()->Data[ 47699 ];

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Parms RecordPlayersRecentlyMet_Parms;

	this->ProcessEvent ( pFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUIByUsername
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowGamerCardUIByUsername ( )
{
	static UFunction* pFnShowGamerCardUIByUsername = NULL;

	if ( ! pFnShowGamerCardUIByUsername )
		pFnShowGamerCardUIByUsername = (UFunction*) UObject::GObjObjects()->Data[ 47695 ];

	UOnlineSubsystemSteamworks_execShowGamerCardUIByUsername_Parms ShowGamerCardUIByUsername_Parms;

	this->ProcessEvent ( pFnShowGamerCardUIByUsername, &ShowGamerCardUIByUsername_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddInGamePost ( )
{
	static UFunction* pFnAddInGamePost = NULL;

	if ( ! pFnAddInGamePost )
		pFnAddInGamePost = (UFunction*) UObject::GObjObjects()->Data[ 47691 ];

	UOnlineSubsystemSteamworks_execAddInGamePost_Parms AddInGamePost_Parms;

	this->ProcessEvent ( pFnAddInGamePost, &AddInGamePost_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckPlayerGroup
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::CheckPlayerGroup ( )
{
	static UFunction* pFnCheckPlayerGroup = NULL;

	if ( ! pFnCheckPlayerGroup )
		pFnCheckPlayerGroup = (UFunction*) UObject::GObjObjects()->Data[ 47688 ];

	UOnlineSubsystemSteamworks_execCheckPlayerGroup_Parms CheckPlayerGroup_Parms;

	pFnCheckPlayerGroup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckPlayerGroup, &CheckPlayerGroup_Parms, NULL );

	pFnCheckPlayerGroup->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerGroups
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetPlayerGroups ( )
{
	static UFunction* pFnGetPlayerGroups = NULL;

	if ( ! pFnGetPlayerGroups )
		pFnGetPlayerGroups = (UFunction*) UObject::GObjObjects()->Data[ 47685 ];

	UOnlineSubsystemSteamworks_execGetPlayerGroups_Parms GetPlayerGroups_Parms;

	pFnGetPlayerGroups->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerGroups, &GetPlayerGroups_Parms, NULL );

	pFnGetPlayerGroups->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::OpenURL ( )
{
	static UFunction* pFnOpenURL = NULL;

	if ( ! pFnOpenURL )
		pFnOpenURL = (UFunction*) UObject::GObjObjects()->Data[ 47683 ];

	UOnlineSubsystemSteamworks_execOpenURL_Parms OpenURL_Parms;

	pFnOpenURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenURL, &OpenURL_Parms, NULL );

	pFnOpenURL->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenItemPurchaseOverlay
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::OpenItemPurchaseOverlay ( )
{
	static UFunction* pFnOpenItemPurchaseOverlay = NULL;

	if ( ! pFnOpenItemPurchaseOverlay )
		pFnOpenItemPurchaseOverlay = (UFunction*) UObject::GObjObjects()->Data[ 47681 ];

	UOnlineSubsystemSteamworks_execOpenItemPurchaseOverlay_Parms OpenItemPurchaseOverlay_Parms;

	pFnOpenItemPurchaseOverlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenItemPurchaseOverlay, &OpenItemPurchaseOverlay_Parms, NULL );

	pFnOpenItemPurchaseOverlay->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenMarketPlaceSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::OpenMarketPlaceSearch ( )
{
	static UFunction* pFnOpenMarketPlaceSearch = NULL;

	if ( ! pFnOpenMarketPlaceSearch )
		pFnOpenMarketPlaceSearch = (UFunction*) UObject::GObjObjects()->Data[ 47679 ];

	UOnlineSubsystemSteamworks_execOpenMarketPlaceSearch_Parms OpenMarketPlaceSearch_Parms;

	pFnOpenMarketPlaceSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenMarketPlaceSearch, &OpenMarketPlaceSearch_Parms, NULL );

	pFnOpenMarketPlaceSearch->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshInventory
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::RefreshInventory ( )
{
	static UFunction* pFnRefreshInventory = NULL;

	if ( ! pFnRefreshInventory )
		pFnRefreshInventory = (UFunction*) UObject::GObjObjects()->Data[ 47678 ];

	UOnlineSubsystemSteamworks_execRefreshInventory_Parms RefreshInventory_Parms;

	pFnRefreshInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshInventory, &RefreshInventory_Parms, NULL );

	pFnRefreshInventory->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetItemDefs
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetItemDefs ( )
{
	static UFunction* pFnGetItemDefs = NULL;

	if ( ! pFnGetItemDefs )
		pFnGetItemDefs = (UFunction*) UObject::GObjObjects()->Data[ 47677 ];

	UOnlineSubsystemSteamworks_execGetItemDefs_Parms GetItemDefs_Parms;

	pFnGetItemDefs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetItemDefs, &GetItemDefs_Parms, NULL );

	pFnGetItemDefs->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubmitStatValidation
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SubmitStatValidation ( )
{
	static UFunction* pFnSubmitStatValidation = NULL;

	if ( ! pFnSubmitStatValidation )
		pFnSubmitStatValidation = (UFunction*) UObject::GObjObjects()->Data[ 47672 ];

	UOnlineSubsystemSteamworks_execSubmitStatValidation_Parms SubmitStatValidation_Parms;

	pFnSubmitStatValidation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubmitStatValidation, &SubmitStatValidation_Parms, NULL );

	pFnSubmitStatValidation->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ValidateStat
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ValidateStat ( )
{
	static UFunction* pFnValidateStat = NULL;

	if ( ! pFnValidateStat )
		pFnValidateStat = (UFunction*) UObject::GObjObjects()->Data[ 47667 ];

	UOnlineSubsystemSteamworks_execValidateStat_Parms ValidateStat_Parms;

	pFnValidateStat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnValidateStat, &ValidateStat_Parms, NULL );

	pFnValidateStat->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVoIPConfigUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowVoIPConfigUI ( )
{
	static UFunction* pFnShowVoIPConfigUI = NULL;

	if ( ! pFnShowVoIPConfigUI )
		pFnShowVoIPConfigUI = (UFunction*) UObject::GObjObjects()->Data[ 47666 ];

	UOnlineSubsystemSteamworks_execShowVoIPConfigUI_Parms ShowVoIPConfigUI_Parms;

	pFnShowVoIPConfigUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowVoIPConfigUI, &ShowVoIPConfigUI_Parms, NULL );

	pFnShowVoIPConfigUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentVOIPLevel
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetCurrentVOIPLevel ( )
{
	static UFunction* pFnGetCurrentVOIPLevel = NULL;

	if ( ! pFnGetCurrentVOIPLevel )
		pFnGetCurrentVOIPLevel = (UFunction*) UObject::GObjObjects()->Data[ 47664 ];

	UOnlineSubsystemSteamworks_execGetCurrentVOIPLevel_Parms GetCurrentVOIPLevel_Parms;

	pFnGetCurrentVOIPLevel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentVOIPLevel, &GetCurrentVOIPLevel_Parms, NULL );

	pFnGetCurrentVOIPLevel->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetVoIPVolume
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetVoIPVolume ( )
{
	static UFunction* pFnGetVoIPVolume = NULL;

	if ( ! pFnGetVoIPVolume )
		pFnGetVoIPVolume = (UFunction*) UObject::GObjObjects()->Data[ 47662 ];

	UOnlineSubsystemSteamworks_execGetVoIPVolume_Parms GetVoIPVolume_Parms;

	pFnGetVoIPVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVoIPVolume, &GetVoIPVolume_Parms, NULL );

	pFnGetVoIPVolume->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoIPVolume
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SetVoIPVolume ( )
{
	static UFunction* pFnSetVoIPVolume = NULL;

	if ( ! pFnSetVoIPVolume )
		pFnSetVoIPVolume = (UFunction*) UObject::GObjObjects()->Data[ 47660 ];

	UOnlineSubsystemSteamworks_execSetVoIPVolume_Parms SetVoIPVolume_Parms;

	pFnSetVoIPVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVoIPVolume, &SetVoIPVolume_Parms, NULL );

	pFnSetVoIPVolume->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAllDelegates ( )
{
	static UFunction* pFnClearAllDelegates = NULL;

	if ( ! pFnClearAllDelegates )
		pFnClearAllDelegates = (UFunction*) UObject::GObjObjects()->Data[ 47659 ];

	UOnlineSubsystemSteamworks_execClearAllDelegates_Parms ClearAllDelegates_Parms;

	this->ProcessEvent ( pFnClearAllDelegates, &ClearAllDelegates_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate ( )
{
	static UFunction* pFnClearWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteSharedFileCompleteDelegate )
		pFnClearWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47656 ];

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Parms ClearWriteSharedFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate ( )
{
	static UFunction* pFnAddWriteSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteSharedFileCompleteDelegate )
		pFnAddWriteSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47654 ];

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Parms AddWriteSharedFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::WriteSharedFile ( )
{
	static UFunction* pFnWriteSharedFile = NULL;

	if ( ! pFnWriteSharedFile )
		pFnWriteSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 47648 ];

	UOnlineSubsystemSteamworks_execWriteSharedFile_Parms WriteSharedFile_Parms;

	pFnWriteSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteSharedFile, &WriteSharedFile_Parms, NULL );

	pFnWriteSharedFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete ( )
{
	static UFunction* pFnOnWriteSharedFileComplete = NULL;

	if ( ! pFnOnWriteSharedFileComplete )
		pFnOnWriteSharedFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 47643 ];

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Parms OnWriteSharedFileComplete_Parms;

	this->ProcessEvent ( pFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate ( )
{
	static UFunction* pFnClearReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnClearReadSharedFileCompleteDelegate )
		pFnClearReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47640 ];

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Parms ClearReadSharedFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate ( )
{
	static UFunction* pFnAddReadSharedFileCompleteDelegate = NULL;

	if ( ! pFnAddReadSharedFileCompleteDelegate )
		pFnAddReadSharedFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47638 ];

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Parms AddReadSharedFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadSharedFile ( )
{
	static UFunction* pFnReadSharedFile = NULL;

	if ( ! pFnReadSharedFile )
		pFnReadSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 47635 ];

	UOnlineSubsystemSteamworks_execReadSharedFile_Parms ReadSharedFile_Parms;

	pFnReadSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadSharedFile, &ReadSharedFile_Parms, NULL );

	pFnReadSharedFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete ( )
{
	static UFunction* pFnOnReadSharedFileComplete = NULL;

	if ( ! pFnOnReadSharedFileComplete )
		pFnOnReadSharedFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 47632 ];

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Parms OnReadSharedFileComplete_Parms;

	this->ProcessEvent ( pFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearSharedFile ( )
{
	static UFunction* pFnClearSharedFile = NULL;

	if ( ! pFnClearSharedFile )
		pFnClearSharedFile = (UFunction*) UObject::GObjObjects()->Data[ 47629 ];

	UOnlineSubsystemSteamworks_execClearSharedFile_Parms ClearSharedFile_Parms;

	pFnClearSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFile, &ClearSharedFile_Parms, NULL );

	pFnClearSharedFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearSharedFiles ( )
{
	static UFunction* pFnClearSharedFiles = NULL;

	if ( ! pFnClearSharedFiles )
		pFnClearSharedFiles = (UFunction*) UObject::GObjObjects()->Data[ 47627 ];

	UOnlineSubsystemSteamworks_execClearSharedFiles_Parms ClearSharedFiles_Parms;

	pFnClearSharedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearSharedFiles, &ClearSharedFiles_Parms, NULL );

	pFnClearSharedFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetSharedFileContents ( )
{
	static UFunction* pFnGetSharedFileContents = NULL;

	if ( ! pFnGetSharedFileContents )
		pFnGetSharedFileContents = (UFunction*) UObject::GObjObjects()->Data[ 47622 ];

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Parms GetSharedFileContents_Parms;

	pFnGetSharedFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSharedFileContents, &GetSharedFileContents_Parms, NULL );

	pFnGetSharedFileContents->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate ( )
{
	static UFunction* pFnClearDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearDeleteUserFileCompleteDelegate )
		pFnClearDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47619 ];

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Parms ClearDeleteUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate ( )
{
	static UFunction* pFnAddDeleteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddDeleteUserFileCompleteDelegate )
		pFnAddDeleteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47617 ];

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Parms AddDeleteUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::DeleteUserFile ( )
{
	static UFunction* pFnDeleteUserFile = NULL;

	if ( ! pFnDeleteUserFile )
		pFnDeleteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 47611 ];

	UOnlineSubsystemSteamworks_execDeleteUserFile_Parms DeleteUserFile_Parms;

	pFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteUserFile, &DeleteUserFile_Parms, NULL );

	pFnDeleteUserFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete ( )
{
	static UFunction* pFnOnDeleteUserFileComplete = NULL;

	if ( ! pFnOnDeleteUserFileComplete )
		pFnOnDeleteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 47607 ];

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Parms OnDeleteUserFileComplete_Parms;

	this->ProcessEvent ( pFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate ( )
{
	static UFunction* pFnClearWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnClearWriteUserFileCompleteDelegate )
		pFnClearWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47604 ];

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Parms ClearWriteUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate ( )
{
	static UFunction* pFnAddWriteUserFileCompleteDelegate = NULL;

	if ( ! pFnAddWriteUserFileCompleteDelegate )
		pFnAddWriteUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47602 ];

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Parms AddWriteUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::WriteUserFile ( )
{
	static UFunction* pFnWriteUserFile = NULL;

	if ( ! pFnWriteUserFile )
		pFnWriteUserFile = (UFunction*) UObject::GObjObjects()->Data[ 47596 ];

	UOnlineSubsystemSteamworks_execWriteUserFile_Parms WriteUserFile_Parms;

	pFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFile, &WriteUserFile_Parms, NULL );

	pFnWriteUserFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete ( )
{
	static UFunction* pFnOnWriteUserFileComplete = NULL;

	if ( ! pFnOnWriteUserFileComplete )
		pFnOnWriteUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 47592 ];

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Parms OnWriteUserFileComplete_Parms;

	this->ProcessEvent ( pFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate ( )
{
	static UFunction* pFnClearReadUserFileCompleteDelegate = NULL;

	if ( ! pFnClearReadUserFileCompleteDelegate )
		pFnClearReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47589 ];

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Parms ClearReadUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate ( )
{
	static UFunction* pFnAddReadUserFileCompleteDelegate = NULL;

	if ( ! pFnAddReadUserFileCompleteDelegate )
		pFnAddReadUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47587 ];

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Parms AddReadUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadUserFile ( )
{
	static UFunction* pFnReadUserFile = NULL;

	if ( ! pFnReadUserFile )
		pFnReadUserFile = (UFunction*) UObject::GObjObjects()->Data[ 47583 ];

	UOnlineSubsystemSteamworks_execReadUserFile_Parms ReadUserFile_Parms;

	pFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadUserFile, &ReadUserFile_Parms, NULL );

	pFnReadUserFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadUserFileComplete ( )
{
	static UFunction* pFnOnReadUserFileComplete = NULL;

	if ( ! pFnOnReadUserFileComplete )
		pFnOnReadUserFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 47579 ];

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Parms OnReadUserFileComplete_Parms;

	this->ProcessEvent ( pFnOnReadUserFileComplete, &OnReadUserFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetUserFileList ( )
{
	static UFunction* pFnGetUserFileList = NULL;

	if ( ! pFnGetUserFileList )
		pFnGetUserFileList = (UFunction*) UObject::GObjObjects()->Data[ 47575 ];

	UOnlineSubsystemSteamworks_execGetUserFileList_Parms GetUserFileList_Parms;

	pFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUserFileList, &GetUserFileList_Parms, NULL );

	pFnGetUserFileList->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate ( )
{
	static UFunction* pFnClearEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnClearEnumerateUserFileCompleteDelegate )
		pFnClearEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47572 ];

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Parms ClearEnumerateUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate ( )
{
	static UFunction* pFnAddEnumerateUserFileCompleteDelegate = NULL;

	if ( ! pFnAddEnumerateUserFileCompleteDelegate )
		pFnAddEnumerateUserFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47570 ];

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Parms AddEnumerateUserFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::EnumerateUserFiles ( )
{
	static UFunction* pFnEnumerateUserFiles = NULL;

	if ( ! pFnEnumerateUserFiles )
		pFnEnumerateUserFiles = (UFunction*) UObject::GObjObjects()->Data[ 47568 ];

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Parms EnumerateUserFiles_Parms;

	pFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnumerateUserFiles, &EnumerateUserFiles_Parms, NULL );

	pFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete ( )
{
	static UFunction* pFnOnEnumerateUserFilesComplete = NULL;

	if ( ! pFnOnEnumerateUserFilesComplete )
		pFnOnEnumerateUserFilesComplete = (UFunction*) UObject::GObjObjects()->Data[ 47565 ];

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Parms OnEnumerateUserFilesComplete_Parms;

	this->ProcessEvent ( pFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearFile ( )
{
	static UFunction* pFnClearFile = NULL;

	if ( ! pFnClearFile )
		pFnClearFile = (UFunction*) UObject::GObjObjects()->Data[ 47561 ];

	UOnlineSubsystemSteamworks_execClearFile_Parms ClearFile_Parms;

	pFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFile, &ClearFile_Parms, NULL );

	pFnClearFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearFiles ( )
{
	static UFunction* pFnClearFiles = NULL;

	if ( ! pFnClearFiles )
		pFnClearFiles = (UFunction*) UObject::GObjObjects()->Data[ 47558 ];

	UOnlineSubsystemSteamworks_execClearFiles_Parms ClearFiles_Parms;

	pFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFiles, &ClearFiles_Parms, NULL );

	pFnClearFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetFileContents ( )
{
	static UFunction* pFnGetFileContents = NULL;

	if ( ! pFnGetFileContents )
		pFnGetFileContents = (UFunction*) UObject::GObjObjects()->Data[ 47552 ];

	UOnlineSubsystemSteamworks_execGetFileContents_Parms GetFileContents_Parms;

	pFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFileContents, &GetFileContents_Parms, NULL );

	pFnGetFileContents->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::WriteUserFileInternal ( )
{
	static UFunction* pFnWriteUserFileInternal = NULL;

	if ( ! pFnWriteUserFileInternal )
		pFnWriteUserFileInternal = (UFunction*) UObject::GObjObjects()->Data[ 47546 ];

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Parms WriteUserFileInternal_Parms;

	pFnWriteUserFileInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteUserFileInternal, &WriteUserFileInternal_Parms, NULL );

	pFnWriteUserFileInternal->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetFriendJoinURL ( )
{
	static UFunction* pFnGetFriendJoinURL = NULL;

	if ( ! pFnGetFriendJoinURL )
		pFnGetFriendJoinURL = (UFunction*) UObject::GObjObjects()->Data[ 47541 ];

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Parms GetFriendJoinURL_Parms;

	pFnGetFriendJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendJoinURL, &GetFriendJoinURL_Parms, NULL );

	pFnGetFriendJoinURL->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetCommandlineJoinURL ( )
{
	static UFunction* pFnGetCommandlineJoinURL = NULL;

	if ( ! pFnGetCommandlineJoinURL )
		pFnGetCommandlineJoinURL = (UFunction*) UObject::GObjObjects()->Data[ 47536 ];

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Parms GetCommandlineJoinURL_Parms;

	pFnGetCommandlineJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Parms, NULL );

	pFnGetCommandlineJoinURL->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::Int64ToUniqueNetId ( )
{
	static UFunction* pFnInt64ToUniqueNetId = NULL;

	if ( ! pFnInt64ToUniqueNetId )
		pFnInt64ToUniqueNetId = (UFunction*) UObject::GObjObjects()->Data[ 47532 ];

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Parms Int64ToUniqueNetId_Parms;

	pFnInt64ToUniqueNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Parms, NULL );

	pFnInt64ToUniqueNetId->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::UniqueNetIdToInt64 ( )
{
	static UFunction* pFnUniqueNetIdToInt64 = NULL;

	if ( ! pFnUniqueNetIdToInt64 )
		pFnUniqueNetIdToInt64 = (UFunction*) UObject::GObjObjects()->Data[ 47529 ];

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Parms UniqueNetIdToInt64_Parms;

	pFnUniqueNetIdToInt64->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Parms, NULL );

	pFnUniqueNetIdToInt64->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUGCInterface
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetUGCInterface ( )
{
	static UFunction* pFnGetUGCInterface = NULL;

	if ( ! pFnGetUGCInterface )
		pFnGetUGCInterface = (UFunction*) UObject::GObjObjects()->Data[ 47527 ];

	UOnlineSubsystemSteamworks_execGetUGCInterface_Parms GetUGCInterface_Parms;

	pFnGetUGCInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUGCInterface, &GetUGCInterface_Parms, NULL );

	pFnGetUGCInterface->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetWorkshopInterface
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SetWorkshopInterface ( )
{
	static UFunction* pFnSetWorkshopInterface = NULL;

	if ( ! pFnSetWorkshopInterface )
		pFnSetWorkshopInterface = (UFunction*) UObject::GObjObjects()->Data[ 47524 ];

	UOnlineSubsystemSteamworks_execSetWorkshopInterface_Parms SetWorkshopInterface_Parms;

	pFnSetWorkshopInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWorkshopInterface, &SetWorkshopInterface_Parms, NULL );

	pFnSetWorkshopInterface->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLobbyInterface
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetLobbyInterface ( )
{
	static UFunction* pFnGetLobbyInterface = NULL;

	if ( ! pFnGetLobbyInterface )
		pFnGetLobbyInterface = (UFunction*) UObject::GObjObjects()->Data[ 47522 ];

	UOnlineSubsystemSteamworks_execGetLobbyInterface_Parms GetLobbyInterface_Parms;

	this->ProcessEvent ( pFnGetLobbyInterface, &GetLobbyInterface_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetLobbyInterface
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventSetLobbyInterface ( )
{
	static UFunction* pFnSetLobbyInterface = NULL;

	if ( ! pFnSetLobbyInterface )
		pFnSetLobbyInterface = (UFunction*) UObject::GObjObjects()->Data[ 47519 ];

	UOnlineSubsystemSteamworks_eventSetLobbyInterface_Parms SetLobbyInterface_Parms;

	this->ProcessEvent ( pFnSetLobbyInterface, &SetLobbyInterface_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished ( )
{
	static UFunction* pFnNotifyVOIPPlaybackFinished = NULL;

	if ( ! pFnNotifyVOIPPlaybackFinished )
		pFnNotifyVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->Data[ 47517 ];

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Parms NotifyVOIPPlaybackFinished_Parms;

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Parms, NULL );

	pFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished ( )
{
	static UFunction* pFnOnVOIPPlaybackFinished = NULL;

	if ( ! pFnOnVOIPPlaybackFinished )
		pFnOnVOIPPlaybackFinished = (UFunction*) UObject::GObjObjects()->Data[ 47515 ];

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Parms OnVOIPPlaybackFinished_Parms;

	this->ProcessEvent ( pFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowProfileUI ( )
{
	static UFunction* pFnShowProfileUI = NULL;

	if ( ! pFnShowProfileUI )
		pFnShowProfileUI = (UFunction*) UObject::GObjObjects()->Data[ 47510 ];

	UOnlineSubsystemSteamworks_execShowProfileUI_Parms ShowProfileUI_Parms;

	pFnShowProfileUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowProfileUI, &ShowProfileUI_Parms, NULL );

	pFnShowProfileUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName ( )
{
	static UFunction* pFnUniqueNetIdToPlayerName = NULL;

	if ( ! pFnUniqueNetIdToPlayerName )
		pFnUniqueNetIdToPlayerName = (UFunction*) UObject::GObjObjects()->Data[ 46136 ];

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Parms UniqueNetIdToPlayerName_Parms;

	pFnUniqueNetIdToPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Parms, NULL );

	pFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::DisplayAchievementProgress ( )
{
	static UFunction* pFnDisplayAchievementProgress = NULL;

	if ( ! pFnDisplayAchievementProgress )
		pFnDisplayAchievementProgress = (UFunction*) UObject::GObjObjects()->Data[ 47504 ];

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Parms DisplayAchievementProgress_Parms;

	pFnDisplayAchievementProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayAchievementProgress, &DisplayAchievementProgress_Parms, NULL );

	pFnDisplayAchievementProgress->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::CreateLeaderboard ( )
{
	static UFunction* pFnCreateLeaderboard = NULL;

	if ( ! pFnCreateLeaderboard )
		pFnCreateLeaderboard = (UFunction*) UObject::GObjObjects()->Data[ 47499 ];

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Parms CreateLeaderboard_Parms;

	pFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateLeaderboard, &CreateLeaderboard_Parms, NULL );

	pFnCreateLeaderboard->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ResetStats ( )
{
	static UFunction* pFnResetStats = NULL;

	if ( ! pFnResetStats )
		pFnResetStats = (UFunction*) UObject::GObjObjects()->Data[ 47496 ];

	UOnlineSubsystemSteamworks_execResetStats_Parms ResetStats_Parms;

	pFnResetStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetStats, &ResetStats_Parms, NULL );

	pFnResetStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomErrorUI
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowCustomErrorUI ( )
{
	static UFunction* pFnShowCustomErrorUI = NULL;

	if ( ! pFnShowCustomErrorUI )
		pFnShowCustomErrorUI = (UFunction*) UObject::GObjObjects()->Data[ 47490 ];

	UOnlineSubsystemSteamworks_execShowCustomErrorUI_Parms ShowCustomErrorUI_Parms;

	this->ProcessEvent ( pFnShowCustomErrorUI, &ShowCustomErrorUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemErrorUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowSystemErrorUI ( )
{
	static UFunction* pFnShowSystemErrorUI = NULL;

	if ( ! pFnShowSystemErrorUI )
		pFnShowSystemErrorUI = (UFunction*) UObject::GObjObjects()->Data[ 47486 ];

	UOnlineSubsystemSteamworks_execShowSystemErrorUI_Parms ShowSystemErrorUI_Parms;

	this->ProcessEvent ( pFnShowSystemErrorUI, &ShowSystemErrorUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpsellPremiumOnlineService
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::UpsellPremiumOnlineService ( )
{
	static UFunction* pFnUpsellPremiumOnlineService = NULL;

	if ( ! pFnUpsellPremiumOnlineService )
		pFnUpsellPremiumOnlineService = (UFunction*) UObject::GObjObjects()->Data[ 47485 ];

	UOnlineSubsystemSteamworks_execUpsellPremiumOnlineService_Parms UpsellPremiumOnlineService_Parms;

	this->ProcessEvent ( pFnUpsellPremiumOnlineService, &UpsellPremiumOnlineService_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearOnEntitlementsReadDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearOnEntitlementsReadDelegate ( )
{
	static UFunction* pFnClearOnEntitlementsReadDelegate = NULL;

	if ( ! pFnClearOnEntitlementsReadDelegate )
		pFnClearOnEntitlementsReadDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47483 ];

	UOnlineSubsystemSteamworks_execClearOnEntitlementsReadDelegate_Parms ClearOnEntitlementsReadDelegate_Parms;

	this->ProcessEvent ( pFnClearOnEntitlementsReadDelegate, &ClearOnEntitlementsReadDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddOnEntitlementsReadDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddOnEntitlementsReadDelegate ( )
{
	static UFunction* pFnAddOnEntitlementsReadDelegate = NULL;

	if ( ! pFnAddOnEntitlementsReadDelegate )
		pFnAddOnEntitlementsReadDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47481 ];

	UOnlineSubsystemSteamworks_execAddOnEntitlementsReadDelegate_Parms AddOnEntitlementsReadDelegate_Parms;

	this->ProcessEvent ( pFnAddOnEntitlementsReadDelegate, &AddOnEntitlementsReadDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEntitlementsRead
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnEntitlementsRead ( )
{
	static UFunction* pFnOnEntitlementsRead = NULL;

	if ( ! pFnOnEntitlementsRead )
		pFnOnEntitlementsRead = (UFunction*) UObject::GObjObjects()->Data[ 47479 ];

	UOnlineSubsystemSteamworks_execOnEntitlementsRead_Parms OnEntitlementsRead_Parms;

	this->ProcessEvent ( pFnOnEntitlementsRead, &OnEntitlementsRead_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadEntitlements
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadEntitlements ( )
{
	static UFunction* pFnReadEntitlements = NULL;

	if ( ! pFnReadEntitlements )
		pFnReadEntitlements = (UFunction*) UObject::GObjObjects()->Data[ 47478 ];

	UOnlineSubsystemSteamworks_execReadEntitlements_Parms ReadEntitlements_Parms;

	this->ProcessEvent ( pFnReadEntitlements, &ReadEntitlements_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStoreDataReadCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearStoreDataReadCompleteDelegate ( )
{
	static UFunction* pFnClearStoreDataReadCompleteDelegate = NULL;

	if ( ! pFnClearStoreDataReadCompleteDelegate )
		pFnClearStoreDataReadCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47476 ];

	UOnlineSubsystemSteamworks_execClearStoreDataReadCompleteDelegate_Parms ClearStoreDataReadCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearStoreDataReadCompleteDelegate, &ClearStoreDataReadCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStoreDataReadCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddStoreDataReadCompleteDelegate ( )
{
	static UFunction* pFnAddStoreDataReadCompleteDelegate = NULL;

	if ( ! pFnAddStoreDataReadCompleteDelegate )
		pFnAddStoreDataReadCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47474 ];

	UOnlineSubsystemSteamworks_execAddStoreDataReadCompleteDelegate_Parms AddStoreDataReadCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddStoreDataReadCompleteDelegate, &AddStoreDataReadCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStoreDataRead
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStoreDataRead ( )
{
	static UFunction* pFnOnStoreDataRead = NULL;

	if ( ! pFnOnStoreDataRead )
		pFnOnStoreDataRead = (UFunction*) UObject::GObjObjects()->Data[ 47472 ];

	UOnlineSubsystemSteamworks_execOnStoreDataRead_Parms OnStoreDataRead_Parms;

	this->ProcessEvent ( pFnOnStoreDataRead, &OnStoreDataRead_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStoreData
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadStoreData ( )
{
	static UFunction* pFnReadStoreData = NULL;

	if ( ! pFnReadStoreData )
		pFnReadStoreData = (UFunction*) UObject::GObjObjects()->Data[ 47471 ];

	UOnlineSubsystemSteamworks_execReadStoreData_Parms ReadStoreData_Parms;

	this->ProcessEvent ( pFnReadStoreData, &ReadStoreData_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostActivityFeedPerkLevelUp
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::PostActivityFeedPerkLevelUp ( )
{
	static UFunction* pFnPostActivityFeedPerkLevelUp = NULL;

	if ( ! pFnPostActivityFeedPerkLevelUp )
		pFnPostActivityFeedPerkLevelUp = (UFunction*) UObject::GObjObjects()->Data[ 47468 ];

	UOnlineSubsystemSteamworks_execPostActivityFeedPerkLevelUp_Parms PostActivityFeedPerkLevelUp_Parms;

	this->ProcessEvent ( pFnPostActivityFeedPerkLevelUp, &PostActivityFeedPerkLevelUp_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostActivityFeedTeamAward
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::PostActivityFeedTeamAward ( )
{
	static UFunction* pFnPostActivityFeedTeamAward = NULL;

	if ( ! pFnPostActivityFeedTeamAward )
		pFnPostActivityFeedTeamAward = (UFunction*) UObject::GObjObjects()->Data[ 47466 ];

	UOnlineSubsystemSteamworks_execPostActivityFeedTeamAward_Parms PostActivityFeedTeamAward_Parms;

	this->ProcessEvent ( pFnPostActivityFeedTeamAward, &PostActivityFeedTeamAward_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostActivityFeedBossKill
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::PostActivityFeedBossKill ( )
{
	static UFunction* pFnPostActivityFeedBossKill = NULL;

	if ( ! pFnPostActivityFeedBossKill )
		pFnPostActivityFeedBossKill = (UFunction*) UObject::GObjObjects()->Data[ 47462 ];

	UOnlineSubsystemSteamworks_execPostActivityFeedBossKill_Parms PostActivityFeedBossKill_Parms;

	this->ProcessEvent ( pFnPostActivityFeedBossKill, &PostActivityFeedBossKill_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowCustomMessageUI ( )
{
	static UFunction* pFnShowCustomMessageUI = NULL;

	if ( ! pFnShowCustomMessageUI )
		pFnShowCustomMessageUI = (UFunction*) UObject::GObjObjects()->Data[ 47454 ];

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;

	this->ProcessEvent ( pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings ( )
{
	static UFunction* pFnClearCrossTitleProfileSettings = NULL;

	if ( ! pFnClearCrossTitleProfileSettings )
		pFnClearCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 47451 ];

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;

	this->ProcessEvent ( pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings ( )
{
	static UFunction* pFnGetCrossTitleProfileSettings = NULL;

	if ( ! pFnGetCrossTitleProfileSettings )
		pFnGetCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 47447 ];

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;

	this->ProcessEvent ( pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadCrossTitleProfileSettingsCompleteDelegate )
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47444 ];

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadCrossTitleProfileSettingsCompleteDelegate )
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47441 ];

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete ( )
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = NULL;

	if ( ! pFnOnReadCrossTitleProfileSettingsComplete )
		pFnOnReadCrossTitleProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 47437 ];

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;

	this->ProcessEvent ( pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings ( )
{
	static UFunction* pFnReadCrossTitleProfileSettings = NULL;

	if ( ! pFnReadCrossTitleProfileSettings )
		pFnReadCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 47432 ];

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;

	this->ProcessEvent ( pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::UnlockAvatarAward ( )
{
	static UFunction* pFnUnlockAvatarAward = NULL;

	if ( ! pFnUnlockAvatarAward )
		pFnUnlockAvatarAward = (UFunction*) UObject::GObjObjects()->Data[ 47428 ];

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Parms UnlockAvatarAward_Parms;

	this->ProcessEvent ( pFnUnlockAvatarAward, &UnlockAvatarAward_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetSteamClanData ( )
{
	static UFunction* pFnGetSteamClanData = NULL;

	if ( ! pFnGetSteamClanData )
		pFnGetSteamClanData = (UFunction*) UObject::GObjObjects()->Data[ 47425 ];

	UOnlineSubsystemSteamworks_execGetSteamClanData_Parms GetSteamClanData_Parms;

	pFnGetSteamClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSteamClanData, &GetSteamClanData_Parms, NULL );

	pFnGetSteamClanData->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate ( )
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnClearGetNumberOfCurrentPlayersCompleteDelegate )
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47422 ];

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate ( )
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnAddGetNumberOfCurrentPlayersCompleteDelegate )
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47420 ];

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete ( )
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = NULL;

	if ( ! pFnOnGetNumberOfCurrentPlayersComplete )
		pFnOnGetNumberOfCurrentPlayersComplete = (UFunction*) UObject::GObjObjects()->Data[ 47418 ];

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;

	this->ProcessEvent ( pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if ( ! pFnGetNumberOfCurrentPlayers )
		pFnGetNumberOfCurrentPlayers = (UFunction*) UObject::GObjObjects()->Data[ 47416 ];

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL );

	pFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadOnlineAvatar ( )
{
	static UFunction* pFnReadOnlineAvatar = NULL;

	if ( ! pFnReadOnlineAvatar )
		pFnReadOnlineAvatar = (UFunction*) UObject::GObjObjects()->Data[ 47412 ];

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Parms ReadOnlineAvatar_Parms;

	pFnReadOnlineAvatar->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineAvatar, &ReadOnlineAvatar_Parms, NULL );

	pFnReadOnlineAvatar->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete ( )
{
	static UFunction* pFnOnReadOnlineAvatarComplete = NULL;

	if ( ! pFnOnReadOnlineAvatarComplete )
		pFnOnReadOnlineAvatarComplete = (UFunction*) UObject::GObjObjects()->Data[ 47409 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Parms OnReadOnlineAvatarComplete_Parms;

	this->ProcessEvent ( pFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowCustomPlayersUI ( )
{
	static UFunction* pFnShowCustomPlayersUI = NULL;

	if ( ! pFnShowCustomPlayersUI )
		pFnShowCustomPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 47402 ];

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;

	pFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, NULL );

	pFnShowCustomPlayersUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetAchievements ( )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 47396 ];

	UOnlineSubsystemSteamworks_execGetAchievements_Parms GetAchievements_Parms;

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	pFnGetAchievements->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate ( )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47392 ];

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate ( )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47389 ];

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete ( )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 47387 ];

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAchievements
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAchievements ( )
{
	static UFunction* pFnClearAchievements = NULL;

	if ( ! pFnClearAchievements )
		pFnClearAchievements = (UFunction*) UObject::GObjObjects()->Data[ 47384 ];

	UOnlineSubsystemSteamworks_execClearAchievements_Parms ClearAchievements_Parms;

	this->ProcessEvent ( pFnClearAchievements, &ClearAchievements_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadAchievements ( )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 47378 ];

	UOnlineSubsystemSteamworks_execReadAchievements_Parms ReadAchievements_Parms;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	pFnReadAchievements->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowPlayersUI ( )
{
	static UFunction* pFnShowPlayersUI = NULL;

	if ( ! pFnShowPlayersUI )
		pFnShowPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 47375 ];

	UOnlineSubsystemSteamworks_execShowPlayersUI_Parms ShowPlayersUI_Parms;

	pFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPlayersUI, &ShowPlayersUI_Parms, NULL );

	pFnShowPlayersUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowFriendsInviteUI ( )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 47371 ];

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;

	pFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	pFnShowFriendsInviteUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowFriendsUI ( )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 47368 ];

	UOnlineSubsystemSteamworks_execShowFriendsUI_Parms ShowFriendsUI_Parms;

	pFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	pFnShowFriendsUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate ( )
{
	static UFunction* pFnClearProfileDataChangedDelegate = NULL;

	if ( ! pFnClearProfileDataChangedDelegate )
		pFnClearProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47364 ];

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;

	this->ProcessEvent ( pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate ( )
{
	static UFunction* pFnAddProfileDataChangedDelegate = NULL;

	if ( ! pFnAddProfileDataChangedDelegate )
		pFnAddProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47361 ];

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;

	this->ProcessEvent ( pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnProfileDataChanged ( )
{
	static UFunction* pFnOnProfileDataChanged = NULL;

	if ( ! pFnOnProfileDataChanged )
		pFnOnProfileDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 47360 ];

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent ( pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::UnlockGamerPicture ( )
{
	static UFunction* pFnUnlockGamerPicture = NULL;

	if ( ! pFnUnlockGamerPicture )
		pFnUnlockGamerPicture = (UFunction*) UObject::GObjObjects()->Data[ 47356 ];

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;

	this->ProcessEvent ( pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate ( )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47352 ];

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate ( )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47349 ];

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete ( )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 47347 ];

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::UnlockAchievement ( )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 47342 ];

	UOnlineSubsystemSteamworks_execUnlockAchievement_Parms UnlockAchievement_Parms;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	pFnUnlockAchievement->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::IsDeviceValid ( )
{
	static UFunction* pFnIsDeviceValid = NULL;

	if ( ! pFnIsDeviceValid )
		pFnIsDeviceValid = (UFunction*) UObject::GObjObjects()->Data[ 47338 ];

	UOnlineSubsystemSteamworks_execIsDeviceValid_Parms IsDeviceValid_Parms;

	this->ProcessEvent ( pFnIsDeviceValid, &IsDeviceValid_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetDeviceSelectionResults ( )
{
	static UFunction* pFnGetDeviceSelectionResults = NULL;

	if ( ! pFnGetDeviceSelectionResults )
		pFnGetDeviceSelectionResults = (UFunction*) UObject::GObjObjects()->Data[ 47334 ];

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;

	this->ProcessEvent ( pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate ( )
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnClearDeviceSelectionDoneDelegate )
		pFnClearDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47330 ];

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;

	this->ProcessEvent ( pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate ( )
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnAddDeviceSelectionDoneDelegate )
		pFnAddDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47326 ];

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;

	this->ProcessEvent ( pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete ( )
{
	static UFunction* pFnOnDeviceSelectionComplete = NULL;

	if ( ! pFnOnDeviceSelectionComplete )
		pFnOnDeviceSelectionComplete = (UFunction*) UObject::GObjObjects()->Data[ 47324 ];

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;

	this->ProcessEvent ( pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptReceivedDataDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAcceptReceivedDataDelegate ( )
{
	static UFunction* pFnClearAcceptReceivedDataDelegate = NULL;

	if ( ! pFnClearAcceptReceivedDataDelegate )
		pFnClearAcceptReceivedDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47321 ];

	UOnlineSubsystemSteamworks_execClearAcceptReceivedDataDelegate_Parms ClearAcceptReceivedDataDelegate_Parms;

	this->ProcessEvent ( pFnClearAcceptReceivedDataDelegate, &ClearAcceptReceivedDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptReceivedDataDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddAcceptReceivedDataDelegate ( )
{
	static UFunction* pFnAddAcceptReceivedDataDelegate = NULL;

	if ( ! pFnAddAcceptReceivedDataDelegate )
		pFnAddAcceptReceivedDataDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47318 ];

	UOnlineSubsystemSteamworks_execAddAcceptReceivedDataDelegate_Parms AddAcceptReceivedDataDelegate_Parms;

	this->ProcessEvent ( pFnAddAcceptReceivedDataDelegate, &AddAcceptReceivedDataDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptReceivedData
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnAcceptReceivedData ( )
{
	static UFunction* pFnOnAcceptReceivedData = NULL;

	if ( ! pFnOnAcceptReceivedData )
		pFnOnAcceptReceivedData = (UFunction*) UObject::GObjObjects()->Data[ 47316 ];

	UOnlineSubsystemSteamworks_execOnAcceptReceivedData_Parms OnAcceptReceivedData_Parms;

	this->ProcessEvent ( pFnOnAcceptReceivedData, &OnAcceptReceivedData_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDataSendingUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowDataSendingUI ( )
{
	static UFunction* pFnShowDataSendingUI = NULL;

	if ( ! pFnShowDataSendingUI )
		pFnShowDataSendingUI = (UFunction*) UObject::GObjObjects()->Data[ 47307 ];

	UOnlineSubsystemSteamworks_execShowDataSendingUI_Parms ShowDataSendingUI_Parms;

	this->ProcessEvent ( pFnShowDataSendingUI, &ShowDataSendingUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowHelpCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearShowHelpCompleteDelegate ( )
{
	static UFunction* pFnClearShowHelpCompleteDelegate = NULL;

	if ( ! pFnClearShowHelpCompleteDelegate )
		pFnClearShowHelpCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47305 ];

	UOnlineSubsystemSteamworks_execClearShowHelpCompleteDelegate_Parms ClearShowHelpCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearShowHelpCompleteDelegate, &ClearShowHelpCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowHelpCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddShowHelpCompleteDelegate ( )
{
	static UFunction* pFnAddShowHelpCompleteDelegate = NULL;

	if ( ! pFnAddShowHelpCompleteDelegate )
		pFnAddShowHelpCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47303 ];

	UOnlineSubsystemSteamworks_execAddShowHelpCompleteDelegate_Parms AddShowHelpCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddShowHelpCompleteDelegate, &AddShowHelpCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowHelpComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnShowHelpComplete ( )
{
	static UFunction* pFnOnShowHelpComplete = NULL;

	if ( ! pFnOnShowHelpComplete )
		pFnOnShowHelpComplete = (UFunction*) UObject::GObjObjects()->Data[ 47301 ];

	UOnlineSubsystemSteamworks_execOnShowHelpComplete_Parms OnShowHelpComplete_Parms;

	this->ProcessEvent ( pFnOnShowHelpComplete, &OnShowHelpComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpForErrorUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowHelpForErrorUI ( )
{
	static UFunction* pFnShowHelpForErrorUI = NULL;

	if ( ! pFnShowHelpForErrorUI )
		pFnShowHelpForErrorUI = (UFunction*) UObject::GObjObjects()->Data[ 47297 ];

	UOnlineSubsystemSteamworks_execShowHelpForErrorUI_Parms ShowHelpForErrorUI_Parms;

	this->ProcessEvent ( pFnShowHelpForErrorUI, &ShowHelpForErrorUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowHelpUI ( )
{
	static UFunction* pFnShowHelpUI = NULL;

	if ( ! pFnShowHelpUI )
		pFnShowHelpUI = (UFunction*) UObject::GObjObjects()->Data[ 47294 ];

	UOnlineSubsystemSteamworks_execShowHelpUI_Parms ShowHelpUI_Parms;

	this->ProcessEvent ( pFnShowHelpUI, &ShowHelpUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVideo
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowVideo ( )
{
	static UFunction* pFnShowVideo = NULL;

	if ( ! pFnShowVideo )
		pFnShowVideo = (UFunction*) UObject::GObjObjects()->Data[ 47291 ];

	UOnlineSubsystemSteamworks_execShowVideo_Parms ShowVideo_Parms;

	this->ProcessEvent ( pFnShowVideo, &ShowVideo_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowGamerCardCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearShowGamerCardCompleteDelegate ( )
{
	static UFunction* pFnClearShowGamerCardCompleteDelegate = NULL;

	if ( ! pFnClearShowGamerCardCompleteDelegate )
		pFnClearShowGamerCardCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47289 ];

	UOnlineSubsystemSteamworks_execClearShowGamerCardCompleteDelegate_Parms ClearShowGamerCardCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearShowGamerCardCompleteDelegate, &ClearShowGamerCardCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowGamerCardCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddShowGamerCardCompleteDelegate ( )
{
	static UFunction* pFnAddShowGamerCardCompleteDelegate = NULL;

	if ( ! pFnAddShowGamerCardCompleteDelegate )
		pFnAddShowGamerCardCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47287 ];

	UOnlineSubsystemSteamworks_execAddShowGamerCardCompleteDelegate_Parms AddShowGamerCardCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddShowGamerCardCompleteDelegate, &AddShowGamerCardCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowGamerCardComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnShowGamerCardComplete ( )
{
	static UFunction* pFnOnShowGamerCardComplete = NULL;

	if ( ! pFnOnShowGamerCardComplete )
		pFnOnShowGamerCardComplete = (UFunction*) UObject::GObjObjects()->Data[ 47285 ];

	UOnlineSubsystemSteamworks_execOnShowGamerCardComplete_Parms OnShowGamerCardComplete_Parms;

	this->ProcessEvent ( pFnOnShowGamerCardComplete, &OnShowGamerCardComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPeoplePickerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearPeoplePickerCompleteDelegate ( )
{
	static UFunction* pFnClearPeoplePickerCompleteDelegate = NULL;

	if ( ! pFnClearPeoplePickerCompleteDelegate )
		pFnClearPeoplePickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47282 ];

	UOnlineSubsystemSteamworks_execClearPeoplePickerCompleteDelegate_Parms ClearPeoplePickerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearPeoplePickerCompleteDelegate, &ClearPeoplePickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPeoplePickerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddPeoplePickerCompleteDelegate ( )
{
	static UFunction* pFnAddPeoplePickerCompleteDelegate = NULL;

	if ( ! pFnAddPeoplePickerCompleteDelegate )
		pFnAddPeoplePickerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47279 ];

	UOnlineSubsystemSteamworks_execAddPeoplePickerCompleteDelegate_Parms AddPeoplePickerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddPeoplePickerCompleteDelegate, &AddPeoplePickerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPeoplePickerComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnPeoplePickerComplete ( )
{
	static UFunction* pFnOnPeoplePickerComplete = NULL;

	if ( ! pFnOnPeoplePickerComplete )
		pFnOnPeoplePickerComplete = (UFunction*) UObject::GObjObjects()->Data[ 47275 ];

	UOnlineSubsystemSteamworks_execOnPeoplePickerComplete_Parms OnPeoplePickerComplete_Parms;

	this->ProcessEvent ( pFnOnPeoplePickerComplete, &OnPeoplePickerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPeoplePickerUI
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowPeoplePickerUI ( )
{
	static UFunction* pFnShowPeoplePickerUI = NULL;

	if ( ! pFnShowPeoplePickerUI )
		pFnShowPeoplePickerUI = (UFunction*) UObject::GObjObjects()->Data[ 47268 ];

	UOnlineSubsystemSteamworks_execShowPeoplePickerUI_Parms ShowPeoplePickerUI_Parms;

	this->ProcessEvent ( pFnShowPeoplePickerUI, &ShowPeoplePickerUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CloseCurrentContentUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CloseCurrentContentUI ( )
{
	static UFunction* pFnCloseCurrentContentUI = NULL;

	if ( ! pFnCloseCurrentContentUI )
		pFnCloseCurrentContentUI = (UFunction*) UObject::GObjObjects()->Data[ 47267 ];

	UOnlineSubsystemSteamworks_execCloseCurrentContentUI_Parms CloseCurrentContentUI_Parms;

	this->ProcessEvent ( pFnCloseCurrentContentUI, &CloseCurrentContentUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentRedeemCodeUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowContentRedeemCodeUI ( )
{
	static UFunction* pFnShowContentRedeemCodeUI = NULL;

	if ( ! pFnShowContentRedeemCodeUI )
		pFnShowContentRedeemCodeUI = (UFunction*) UObject::GObjObjects()->Data[ 47263 ];

	UOnlineSubsystemSteamworks_execShowContentRedeemCodeUI_Parms ShowContentRedeemCodeUI_Parms;

	this->ProcessEvent ( pFnShowContentRedeemCodeUI, &ShowContentRedeemCodeUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProductDetailsUI
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowProductDetailsUI ( )
{
	static UFunction* pFnShowProductDetailsUI = NULL;

	if ( ! pFnShowProductDetailsUI )
		pFnShowProductDetailsUI = (UFunction*) UObject::GObjObjects()->Data[ 47259 ];

	UOnlineSubsystemSteamworks_execShowProductDetailsUI_Parms ShowProductDetailsUI_Parms;

	this->ProcessEvent ( pFnShowProductDetailsUI, &ShowProductDetailsUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowContentPurchaseUI ( )
{
	static UFunction* pFnShowContentPurchaseUI = NULL;

	if ( ! pFnShowContentPurchaseUI )
		pFnShowContentPurchaseUI = (UFunction*) UObject::GObjObjects()->Data[ 47255 ];

	UOnlineSubsystemSteamworks_execShowContentPurchaseUI_Parms ShowContentPurchaseUI_Parms;

	this->ProcessEvent ( pFnShowContentPurchaseUI, &ShowContentPurchaseUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowContentMarketplaceUI ( )
{
	static UFunction* pFnShowContentMarketplaceUI = NULL;

	if ( ! pFnShowContentMarketplaceUI )
		pFnShowContentMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 47249 ];

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;

	pFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, NULL );

	pFnShowContentMarketplaceUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowDeviceSelectionUI ( )
{
	static UFunction* pFnShowDeviceSelectionUI = NULL;

	if ( ! pFnShowDeviceSelectionUI )
		pFnShowDeviceSelectionUI = (UFunction*) UObject::GObjObjects()->Data[ 47244 ];

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;

	pFnShowDeviceSelectionUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, NULL );

	pFnShowDeviceSelectionUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI ( )
{
	static UFunction* pFnShowMembershipMarketplaceUI = NULL;

	if ( ! pFnShowMembershipMarketplaceUI )
		pFnShowMembershipMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 47241 ];

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Parms ShowMembershipMarketplaceUI_Parms;

	pFnShowMembershipMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Parms, NULL );

	pFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowInviteUI ( )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 47237 ];

	UOnlineSubsystemSteamworks_execShowInviteUI_Parms ShowInviteUI_Parms;

	pFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	pFnShowInviteUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowAchievementsUI ( )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 47234 ];

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;

	pFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	pFnShowAchievementsUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowMessagesUI ( )
{
	static UFunction* pFnShowMessagesUI = NULL;

	if ( ! pFnShowMessagesUI )
		pFnShowMessagesUI = (UFunction*) UObject::GObjObjects()->Data[ 47231 ];

	UOnlineSubsystemSteamworks_execShowMessagesUI_Parms ShowMessagesUI_Parms;

	pFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMessagesUI, &ShowMessagesUI_Parms, NULL );

	pFnShowMessagesUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowGamerCardUI ( )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 47227 ];

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;

	pFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	pFnShowGamerCardUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowFeedbackUI ( )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 47223 ];

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;

	pFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	pFnShowFeedbackUI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::DeleteMessage ( )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 47219 ];

	UOnlineSubsystemSteamworks_execDeleteMessage_Parms DeleteMessage_Parms;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::UnmuteAll ( )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->Data[ 47216 ];

	UOnlineSubsystemSteamworks_execUnmuteAll_Parms UnmuteAll_Parms;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::MuteAll ( )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->Data[ 47212 ];

	UOnlineSubsystemSteamworks_execMuteAll_Parms MuteAll_Parms;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CalcAggregateSkill ( )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->Data[ 47205 ];

	UOnlineSubsystemSteamworks_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::RegisterStatGuid ( )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 47201 ];

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Parms RegisterStatGuid_Parms;

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 47199 ];

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate ( )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47196 ];

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate ( )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47194 ];

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete ( )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->Data[ 47192 ];

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::RegisterHostStatGuid ( )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 47189 ];

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 47187 ];

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendTestEvent
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SendTestEvent ( )
{
	static UFunction* pFnSendTestEvent = NULL;

	if ( ! pFnSendTestEvent )
		pFnSendTestEvent = (UFunction*) UObject::GObjObjects()->Data[ 47182 ];

	UOnlineSubsystemSteamworks_execSendTestEvent_Parms SendTestEvent_Parms;

	this->ProcessEvent ( pFnSendTestEvent, &SendTestEvent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionResume
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SendPlayerSessionResume ( )
{
	static UFunction* pFnSendPlayerSessionResume = NULL;

	if ( ! pFnSendPlayerSessionResume )
		pFnSendPlayerSessionResume = (UFunction*) UObject::GObjObjects()->Data[ 47176 ];

	UOnlineSubsystemSteamworks_execSendPlayerSessionResume_Parms SendPlayerSessionResume_Parms;

	this->ProcessEvent ( pFnSendPlayerSessionResume, &SendPlayerSessionResume_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionPause
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SendPlayerSessionPause ( )
{
	static UFunction* pFnSendPlayerSessionPause = NULL;

	if ( ! pFnSendPlayerSessionPause )
		pFnSendPlayerSessionPause = (UFunction*) UObject::GObjObjects()->Data[ 47172 ];

	UOnlineSubsystemSteamworks_execSendPlayerSessionPause_Parms SendPlayerSessionPause_Parms;

	this->ProcessEvent ( pFnSendPlayerSessionPause, &SendPlayerSessionPause_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionEnd
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SendPlayerSessionEnd ( )
{
	static UFunction* pFnSendPlayerSessionEnd = NULL;

	if ( ! pFnSendPlayerSessionEnd )
		pFnSendPlayerSessionEnd = (UFunction*) UObject::GObjObjects()->Data[ 47165 ];

	UOnlineSubsystemSteamworks_execSendPlayerSessionEnd_Parms SendPlayerSessionEnd_Parms;

	this->ProcessEvent ( pFnSendPlayerSessionEnd, &SendPlayerSessionEnd_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionStart
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SendPlayerSessionStart ( )
{
	static UFunction* pFnSendPlayerSessionStart = NULL;

	if ( ! pFnSendPlayerSessionStart )
		pFnSendPlayerSessionStart = (UFunction*) UObject::GObjObjects()->Data[ 47159 ];

	UOnlineSubsystemSteamworks_execSendPlayerSessionStart_Parms SendPlayerSessionStart_Parms;

	this->ProcessEvent ( pFnSendPlayerSessionStart, &SendPlayerSessionStart_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnsubscribeToStatisticEvent
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::UnsubscribeToStatisticEvent ( )
{
	static UFunction* pFnUnsubscribeToStatisticEvent = NULL;

	if ( ! pFnUnsubscribeToStatisticEvent )
		pFnUnsubscribeToStatisticEvent = (UFunction*) UObject::GObjObjects()->Data[ 47155 ];

	UOnlineSubsystemSteamworks_execUnsubscribeToStatisticEvent_Parms UnsubscribeToStatisticEvent_Parms;

	this->ProcessEvent ( pFnUnsubscribeToStatisticEvent, &UnsubscribeToStatisticEvent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribeToStatisticEvent
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SubscribeToStatisticEvent ( )
{
	static UFunction* pFnSubscribeToStatisticEvent = NULL;

	if ( ! pFnSubscribeToStatisticEvent )
		pFnSubscribeToStatisticEvent = (UFunction*) UObject::GObjObjects()->Data[ 47150 ];

	UOnlineSubsystemSteamworks_execSubscribeToStatisticEvent_Parms SubscribeToStatisticEvent_Parms;

	this->ProcessEvent ( pFnSubscribeToStatisticEvent, &SubscribeToStatisticEvent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStatisticChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStatisticChanged ( )
{
	static UFunction* pFnOnStatisticChanged = NULL;

	if ( ! pFnOnStatisticChanged )
		pFnOnStatisticChanged = (UFunction*) UObject::GObjObjects()->Data[ 47146 ];

	UOnlineSubsystemSteamworks_execOnStatisticChanged_Parms OnStatisticChanged_Parms;

	this->ProcessEvent ( pFnOnStatisticChanged, &OnStatisticChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate ( )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47142 ];

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate ( )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47139 ];

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendMessageReceived ( )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 47134 ];

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetFriendMessages ( )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 47130 ];

	UOnlineSubsystemSteamworks_execGetFriendMessages_Parms GetFriendMessages_Parms;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate ( )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47127 ];

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate ( )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47125 ];

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete ( )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 47123 ];

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::JoinFriendGame ( )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 47119 ];

	UOnlineSubsystemSteamworks_execJoinFriendGame_Parms JoinFriendGame_Parms;

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	pFnJoinFriendGame->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteByIdDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReceivedGameInviteByIdDelegate ( )
{
	static UFunction* pFnAddReceivedGameInviteByIdDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteByIdDelegate )
		pFnAddReceivedGameInviteByIdDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47116 ];

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteByIdDelegate_Parms AddReceivedGameInviteByIdDelegate_Parms;

	this->ProcessEvent ( pFnAddReceivedGameInviteByIdDelegate, &AddReceivedGameInviteByIdDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteByIdDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteByIdDelegate ( )
{
	static UFunction* pFnClearReceivedGameInviteByIdDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteByIdDelegate )
		pFnClearReceivedGameInviteByIdDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47113 ];

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteByIdDelegate_Parms ClearReceivedGameInviteByIdDelegate_Parms;

	this->ProcessEvent ( pFnClearReceivedGameInviteByIdDelegate, &ClearReceivedGameInviteByIdDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInviteById
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReceivedGameInviteById ( )
{
	static UFunction* pFnOnReceivedGameInviteById = NULL;

	if ( ! pFnOnReceivedGameInviteById )
		pFnOnReceivedGameInviteById = (UFunction*) UObject::GObjObjects()->Data[ 47110 ];

	UOnlineSubsystemSteamworks_execOnReceivedGameInviteById_Parms OnReceivedGameInviteById_Parms;

	this->ProcessEvent ( pFnOnReceivedGameInviteById, &OnReceivedGameInviteById_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckForGameInviteOnLaunch
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CheckForGameInviteOnLaunch ( )
{
	static UFunction* pFnCheckForGameInviteOnLaunch = NULL;

	if ( ! pFnCheckForGameInviteOnLaunch )
		pFnCheckForGameInviteOnLaunch = (UFunction*) UObject::GObjObjects()->Data[ 47109 ];

	UOnlineSubsystemSteamworks_execCheckForGameInviteOnLaunch_Parms CheckForGameInviteOnLaunch_Parms;

	this->ProcessEvent ( pFnCheckForGameInviteOnLaunch, &CheckForGameInviteOnLaunch_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate ( )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47105 ];

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate ( )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47102 ];

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReceivedGameInvite ( )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 47099 ];

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToUsers
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::SendGameInviteToUsers ( )
{
	static UFunction* pFnSendGameInviteToUsers = NULL;

	if ( ! pFnSendGameInviteToUsers )
		pFnSendGameInviteToUsers = (UFunction*) UObject::GObjObjects()->Data[ 47092 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToUsers_Parms SendGameInviteToUsers_Parms;

	this->ProcessEvent ( pFnSendGameInviteToUsers, &SendGameInviteToUsers_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SendGameInviteToFriends ( )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 47085 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SendGameInviteToFriend ( )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 47079 ];

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SendMessageToFriend ( )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 47074 ];

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Parms SendMessageToFriend_Parms;

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	pFnSendMessageToFriend->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate ( )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47070 ];

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate ( )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47067 ];

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendInviteReceived ( )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 47062 ];

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::DenyFriendInvite ( )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 47058 ];

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Parms DenyFriendInvite_Parms;

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	pFnDenyFriendInvite->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::AcceptFriendInvite ( )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 47054 ];

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::RemoveFriend ( )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 47050 ];

	UOnlineSubsystemSteamworks_execRemoveFriend_Parms RemoveFriend_Parms;

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	pFnRemoveFriend->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate ( )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47046 ];

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate ( )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47043 ];

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete ( )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 47041 ];

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::AddFriendByName ( )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 47036 ];

	UOnlineSubsystemSteamworks_execAddFriendByName_Parms AddFriendByName_Parms;

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	pFnAddFriendByName->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::AddFriend ( )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 47031 ];

	UOnlineSubsystemSteamworks_execAddFriend_Parms AddFriend_Parms;

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	pFnAddFriend->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetKeyboardInputResults ( )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 47028 ];

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate ( )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47026 ];

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate ( )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 47024 ];

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete ( )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 47022 ];

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::HideKeyboardUI ( )
{
	static UFunction* pFnHideKeyboardUI = NULL;

	if ( ! pFnHideKeyboardUI )
		pFnHideKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 47019 ];

	UOnlineSubsystemSteamworks_execHideKeyboardUI_Parms HideKeyboardUI_Parms;

	this->ProcessEvent ( pFnHideKeyboardUI, &HideKeyboardUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowKeyboardUI ( )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 47010 ];

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SetOnlineStatus ( )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 47006 ];

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Parms SetOnlineStatus_Parms;

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	pFnSetOnlineStatus->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetTitleFileState ( )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 47003 ];

	UOnlineSubsystemSteamworks_execGetTitleFileState_Parms GetTitleFileState_Parms;

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetTitleFileContents ( )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 46998 ];

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Parms GetTitleFileContents_Parms;

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate ( )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46995 ];

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate ( )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46993 ];

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadTitleFile ( )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 46990 ];

	UOnlineSubsystemSteamworks_execReadTitleFile_Parms ReadTitleFile_Parms;

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete ( )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 46987 ];

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate ( )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46985 ];

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate ( )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46983 ];

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->Data[ 46982 ];

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->Data[ 46980 ];

	UOnlineSubsystemSteamworks_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->Data[ 46978 ];

	UOnlineSubsystemSteamworks_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	pFnGetNATType->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate ( )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46975 ];

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate ( )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46973 ];

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnConnectionStatusChange ( )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 46971 ];

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetCurrentConnectionStatus ( )
{
	static UFunction* pFnGetCurrentConnectionStatus = NULL;

	if ( ! pFnGetCurrentConnectionStatus )
		pFnGetCurrentConnectionStatus = (UFunction*) UObject::GObjObjects()->Data[ 46969 ];

	UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Parms GetCurrentConnectionStatus_Parms;

	this->ProcessEvent ( pFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::IsControllerConnected ( )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->Data[ 46966 ];

	UOnlineSubsystemSteamworks_execIsControllerConnected_Parms IsControllerConnected_Parms;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate ( )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46963 ];

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate ( )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46961 ];

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnControllerChange ( )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->Data[ 46957 ];

	UOnlineSubsystemSteamworks_execOnControllerChange_Parms OnControllerChange_Parms;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition ( )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 46955 ];

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;

	pFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );

	pFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 46953 ];

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate ( )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46950 ];

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate ( )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46947 ];

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnExternalUIChange ( )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->Data[ 46945 ];

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Parms OnExternalUIChange_Parms;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate ( )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46942 ];

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate ( )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46940 ];

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLinkStatusChange ( )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 46938 ];

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->Data[ 46936 ];

	UOnlineSubsystemSteamworks_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	pFnHasLinkConnection->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerIDForPlayerNickname
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetPlayerIDForPlayerNickname ( )
{
	static UFunction* pFnGetPlayerIDForPlayerNickname = NULL;

	if ( ! pFnGetPlayerIDForPlayerNickname )
		pFnGetPlayerIDForPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 46932 ];

	UOnlineSubsystemSteamworks_execGetPlayerIDForPlayerNickname_Parms GetPlayerIDForPlayerNickname_Parms;

	this->ProcessEvent ( pFnGetPlayerIDForPlayerNickname, &GetPlayerIDForPlayerNickname_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameForPlayerId
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetPlayerNicknameForPlayerId ( )
{
	static UFunction* pFnGetPlayerNicknameForPlayerId = NULL;

	if ( ! pFnGetPlayerNicknameForPlayerId )
		pFnGetPlayerNicknameForPlayerId = (UFunction*) UObject::GObjObjects()->Data[ 46928 ];

	UOnlineSubsystemSteamworks_execGetPlayerNicknameForPlayerId_Parms GetPlayerNicknameForPlayerId_Parms;

	this->ProcessEvent ( pFnGetPlayerNicknameForPlayerId, &GetPlayerNicknameForPlayerId_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex ( )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 46925 ];

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::WriteOnlinePlayerScores ( )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->Data[ 46919 ];

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46916 ];

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46914 ];

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete ( )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46911 ];

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::FlushOnlineStats ( )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 46908 ];

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Parms FlushOnlineStats_Parms;

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	pFnFlushOnlineStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::WriteOnlineStats ( )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 46903 ];

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Parms WriteOnlineStats_Parms;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	pFnWriteOnlineStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::FreeStats ( )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->Data[ 46901 ];

	UOnlineSubsystemSteamworks_execFreeStats_Parms FreeStats_Parms;

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46898 ];

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46896 ];

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete ( )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46894 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer ( )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46889 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadOnlineStatsByRank ( )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->Data[ 46883 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends ( )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->Data[ 46877 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadOnlineStats ( )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 46871 ];

	UOnlineSubsystemSteamworks_execReadOnlineStats_Parms ReadOnlineStats_Parms;

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	pFnReadOnlineStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForPlayer
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadOnlineStatsForPlayer ( )
{
	static UFunction* pFnReadOnlineStatsForPlayer = NULL;

	if ( ! pFnReadOnlineStatsForPlayer )
		pFnReadOnlineStatsForPlayer = (UFunction*) UObject::GObjObjects()->Data[ 46867 ];

	UOnlineSubsystemSteamworks_execReadOnlineStatsForPlayer_Parms ReadOnlineStatsForPlayer_Parms;

	this->ProcessEvent ( pFnReadOnlineStatsForPlayer, &ReadOnlineStatsForPlayer_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineProfilesCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadOnlineProfilesCompleteDelegate ( )
{
	static UFunction* pFnClearReadOnlineProfilesCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineProfilesCompleteDelegate )
		pFnClearReadOnlineProfilesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46865 ];

	UOnlineSubsystemSteamworks_execClearReadOnlineProfilesCompleteDelegate_Parms ClearReadOnlineProfilesCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadOnlineProfilesCompleteDelegate, &ClearReadOnlineProfilesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineProfilesCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadOnlineProfilesCompleteDelegate ( )
{
	static UFunction* pFnAddReadOnlineProfilesCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineProfilesCompleteDelegate )
		pFnAddReadOnlineProfilesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46863 ];

	UOnlineSubsystemSteamworks_execAddReadOnlineProfilesCompleteDelegate_Parms AddReadOnlineProfilesCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadOnlineProfilesCompleteDelegate, &AddReadOnlineProfilesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineProfilesComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadOnlineProfilesComplete ( )
{
	static UFunction* pFnOnReadOnlineProfilesComplete = NULL;

	if ( ! pFnOnReadOnlineProfilesComplete )
		pFnOnReadOnlineProfilesComplete = (UFunction*) UObject::GObjObjects()->Data[ 46857 ];

	UOnlineSubsystemSteamworks_execOnReadOnlineProfilesComplete_Parms OnReadOnlineProfilesComplete_Parms;

	this->ProcessEvent ( pFnOnReadOnlineProfilesComplete, &OnReadOnlineProfilesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineProfilesForPlayers
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadOnlineProfilesForPlayers ( )
{
	static UFunction* pFnReadOnlineProfilesForPlayers = NULL;

	if ( ! pFnReadOnlineProfilesForPlayers )
		pFnReadOnlineProfilesForPlayers = (UFunction*) UObject::GObjObjects()->Data[ 46853 ];

	UOnlineSubsystemSteamworks_execReadOnlineProfilesForPlayers_Parms ReadOnlineProfilesForPlayers_Parms;

	this->ProcessEvent ( pFnReadOnlineProfilesForPlayers, &ReadOnlineProfilesForPlayers_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SetSpeechRecognitionObject ( )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->Data[ 46849 ];

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SelectVocabulary ( )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->Data[ 46845 ];

	UOnlineSubsystemSteamworks_execSelectVocabulary_Parms SelectVocabulary_Parms;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate ( )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46841 ];

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate ( )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46838 ];

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->Data[ 46837 ];

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetRecognitionResults ( )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->Data[ 46832 ];

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Parms GetRecognitionResults_Parms;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::StopSpeechRecognition ( )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 46829 ];

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::StartSpeechRecognition ( )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 46826 ];

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::StopNetworkedVoice ( )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 46824 ];

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::StartNetworkedVoice ( )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 46822 ];

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate ( )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46819 ];

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate ( )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46816 ];

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoteTalkerStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRemoteTalkerStatusChange ( )
{
	static UFunction* pFnOnRemoteTalkerStatusChange = NULL;

	if ( ! pFnOnRemoteTalkerStatusChange )
		pFnOnRemoteTalkerStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 46813 ];

	UOnlineSubsystemSteamworks_execOnRemoteTalkerStatusChange_Parms OnRemoteTalkerStatusChange_Parms;

	this->ProcessEvent ( pFnOnRemoteTalkerStatusChange, &OnRemoteTalkerStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange ( )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->Data[ 46810 ];

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdatePlayerMuteSetting
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::UpdatePlayerMuteSetting ( )
{
	static UFunction* pFnUpdatePlayerMuteSetting = NULL;

	if ( ! pFnUpdatePlayerMuteSetting )
		pFnUpdatePlayerMuteSetting = (UFunction*) UObject::GObjObjects()->Data[ 46807 ];

	UOnlineSubsystemSteamworks_execUpdatePlayerMuteSetting_Parms UpdatePlayerMuteSetting_Parms;

	this->ProcessEvent ( pFnUpdatePlayerMuteSetting, &UpdatePlayerMuteSetting_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTalkerMuted
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::IsTalkerMuted ( )
{
	static UFunction* pFnIsTalkerMuted = NULL;

	if ( ! pFnIsTalkerMuted )
		pFnIsTalkerMuted = (UFunction*) UObject::GObjObjects()->Data[ 46804 ];

	UOnlineSubsystemSteamworks_execIsTalkerMuted_Parms IsTalkerMuted_Parms;

	this->ProcessEvent ( pFnIsTalkerMuted, &IsTalkerMuted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::UnmuteRemoteTalker ( )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46799 ];

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::MuteRemoteTalker ( )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46794 ];

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::SetRemoteTalkerPriority ( )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->Data[ 46789 ];

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::IsHeadsetPresent ( )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->Data[ 46786 ];

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::IsRemotePlayerTalking ( )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 46783 ];

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::IsLocalPlayerTalking ( )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 46780 ];

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterRemoteTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearUnregisterRemoteTalkerCompleteDelegate ( )
{
	static UFunction* pFnClearUnregisterRemoteTalkerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterRemoteTalkerCompleteDelegate )
		pFnClearUnregisterRemoteTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46778 ];

	UOnlineSubsystemSteamworks_execClearUnregisterRemoteTalkerCompleteDelegate_Parms ClearUnregisterRemoteTalkerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearUnregisterRemoteTalkerCompleteDelegate, &ClearUnregisterRemoteTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterRemoteTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddUnregisterRemoteTalkerCompleteDelegate ( )
{
	static UFunction* pFnAddUnregisterRemoteTalkerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterRemoteTalkerCompleteDelegate )
		pFnAddUnregisterRemoteTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46776 ];

	UOnlineSubsystemSteamworks_execAddUnregisterRemoteTalkerCompleteDelegate_Parms AddUnregisterRemoteTalkerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddUnregisterRemoteTalkerCompleteDelegate, &AddUnregisterRemoteTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterRemoteTalkerComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnUnregisterRemoteTalkerComplete ( )
{
	static UFunction* pFnOnUnregisterRemoteTalkerComplete = NULL;

	if ( ! pFnOnUnregisterRemoteTalkerComplete )
		pFnOnUnregisterRemoteTalkerComplete = (UFunction*) UObject::GObjObjects()->Data[ 46773 ];

	UOnlineSubsystemSteamworks_execOnUnregisterRemoteTalkerComplete_Parms OnUnregisterRemoteTalkerComplete_Parms;

	this->ProcessEvent ( pFnOnUnregisterRemoteTalkerComplete, &OnUnregisterRemoteTalkerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearUnregisterLocalTalkerCompleteDelegate ( )
{
	static UFunction* pFnClearUnregisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterLocalTalkerCompleteDelegate )
		pFnClearUnregisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46771 ];

	UOnlineSubsystemSteamworks_execClearUnregisterLocalTalkerCompleteDelegate_Parms ClearUnregisterLocalTalkerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearUnregisterLocalTalkerCompleteDelegate, &ClearUnregisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddUnregisterLocalTalkerCompleteDelegate ( )
{
	static UFunction* pFnAddUnregisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterLocalTalkerCompleteDelegate )
		pFnAddUnregisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46769 ];

	UOnlineSubsystemSteamworks_execAddUnregisterLocalTalkerCompleteDelegate_Parms AddUnregisterLocalTalkerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddUnregisterLocalTalkerCompleteDelegate, &AddUnregisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterLocalTalkerComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnUnregisterLocalTalkerComplete ( )
{
	static UFunction* pFnOnUnregisterLocalTalkerComplete = NULL;

	if ( ! pFnOnUnregisterLocalTalkerComplete )
		pFnOnUnregisterLocalTalkerComplete = (UFunction*) UObject::GObjObjects()->Data[ 46766 ];

	UOnlineSubsystemSteamworks_execOnUnregisterLocalTalkerComplete_Parms OnUnregisterLocalTalkerComplete_Parms;

	this->ProcessEvent ( pFnOnUnregisterLocalTalkerComplete, &OnUnregisterLocalTalkerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearRegisterLocalTalkerCompleteDelegate ( )
{
	static UFunction* pFnClearRegisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterLocalTalkerCompleteDelegate )
		pFnClearRegisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46764 ];

	UOnlineSubsystemSteamworks_execClearRegisterLocalTalkerCompleteDelegate_Parms ClearRegisterLocalTalkerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearRegisterLocalTalkerCompleteDelegate, &ClearRegisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterLocalTalkerCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddRegisterLocalTalkerCompleteDelegate ( )
{
	static UFunction* pFnAddRegisterLocalTalkerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterLocalTalkerCompleteDelegate )
		pFnAddRegisterLocalTalkerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46762 ];

	UOnlineSubsystemSteamworks_execAddRegisterLocalTalkerCompleteDelegate_Parms AddRegisterLocalTalkerCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddRegisterLocalTalkerCompleteDelegate, &AddRegisterLocalTalkerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterLocalTalkerComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnRegisterLocalTalkerComplete ( )
{
	static UFunction* pFnOnRegisterLocalTalkerComplete = NULL;

	if ( ! pFnOnRegisterLocalTalkerComplete )
		pFnOnRegisterLocalTalkerComplete = (UFunction*) UObject::GObjObjects()->Data[ 46759 ];

	UOnlineSubsystemSteamworks_execOnRegisterLocalTalkerComplete_Parms OnRegisterLocalTalkerComplete_Parms;

	this->ProcessEvent ( pFnOnRegisterLocalTalkerComplete, &OnRegisterLocalTalkerComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::UnregisterRemoteTalker ( )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46756 ];

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::RegisterRemoteTalker ( )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 46753 ];

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReceiveReliableVoicePacket
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReceiveReliableVoicePacket ( )
{
	static UFunction* pFnReceiveReliableVoicePacket = NULL;

	if ( ! pFnReceiveReliableVoicePacket )
		pFnReceiveReliableVoicePacket = (UFunction*) UObject::GObjObjects()->Data[ 46748 ];

	UOnlineSubsystemSteamworks_execReceiveReliableVoicePacket_Parms ReceiveReliableVoicePacket_Parms;

	this->ProcessEvent ( pFnReceiveReliableVoicePacket, &ReceiveReliableVoicePacket_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyLocalTalkersRegistered
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AreAnyLocalTalkersRegistered ( )
{
	static UFunction* pFnAreAnyLocalTalkersRegistered = NULL;

	if ( ! pFnAreAnyLocalTalkersRegistered )
		pFnAreAnyLocalTalkersRegistered = (UFunction*) UObject::GObjObjects()->Data[ 46746 ];

	UOnlineSubsystemSteamworks_execAreAnyLocalTalkersRegistered_Parms AreAnyLocalTalkersRegistered_Parms;

	this->ProcessEvent ( pFnAreAnyLocalTalkersRegistered, &AreAnyLocalTalkersRegistered_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::UnregisterLocalTalker ( )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 46742 ];

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::RegisterLocalTalker ( )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 46738 ];

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetFriendsList ( )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 46143 ];

	UOnlineSubsystemSteamworks_execGetFriendsList_Parms GetFriendsList_Parms;

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	pFnGetFriendsList->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate ( )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46729 ];

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate ( )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46726 ];

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadFriendsComplete ( )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46724 ];

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadFriendsList ( )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 46719 ];

	UOnlineSubsystemSteamworks_execReadFriendsList_Parms ReadFriendsList_Parms;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	pFnReadFriendsList->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46715 ];

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46712 ];

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete ( )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 46709 ];

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::WritePlayerStorage ( )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 46704 ];

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Parms WritePlayerStorage_Parms;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetPlayerStorage ( )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 46701 ];

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Parms GetPlayerStorage_Parms;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate ( )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46697 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate ( )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46694 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete ( )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 46691 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId ( )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 46686 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46682 ];

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46679 ];

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete ( )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 46676 ];

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadPlayerStorage ( )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 46671 ];

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46667 ];

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46664 ];

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete ( )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46661 ];

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::WriteProfileSettings ( )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46657 ];

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Parms WriteProfileSettings_Parms;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetProfileSettings ( )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46654 ];

	UOnlineSubsystemSteamworks_execGetProfileSettings_Parms GetProfileSettings_Parms;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46650 ];

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46647 ];

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete ( )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 46644 ];

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::ReadProfileSettings ( )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 46640 ];

	UOnlineSubsystemSteamworks_execReadProfileSettings_Parms ReadProfileSettings_Parms;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate ( )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46636 ];

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate ( )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46633 ];

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate ( )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46630 ];

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate ( )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46628 ];

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearCurrentUserChangedDelegate ( )
{
	static UFunction* pFnClearCurrentUserChangedDelegate = NULL;

	if ( ! pFnClearCurrentUserChangedDelegate )
		pFnClearCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46626 ];

	UOnlineSubsystemSteamworks_execClearCurrentUserChangedDelegate_Parms ClearCurrentUserChangedDelegate_Parms;

	this->ProcessEvent ( pFnClearCurrentUserChangedDelegate, &ClearCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCurrentUserChangedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddCurrentUserChangedDelegate ( )
{
	static UFunction* pFnAddCurrentUserChangedDelegate = NULL;

	if ( ! pFnAddCurrentUserChangedDelegate )
		pFnAddCurrentUserChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46624 ];

	UOnlineSubsystemSteamworks_execAddCurrentUserChangedDelegate_Parms AddCurrentUserChangedDelegate_Parms;

	this->ProcessEvent ( pFnAddCurrentUserChangedDelegate, &AddCurrentUserChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCurrentUserChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnCurrentUserChanged ( )
{
	static UFunction* pFnOnCurrentUserChanged = NULL;

	if ( ! pFnOnCurrentUserChanged )
		pFnOnCurrentUserChanged = (UFunction*) UObject::GObjObjects()->Data[ 46620 ];

	UOnlineSubsystemSteamworks_execOnCurrentUserChanged_Parms OnCurrentUserChanged_Parms;

	this->ProcessEvent ( pFnOnCurrentUserChanged, &OnCurrentUserChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate ( )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46618 ];

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate ( )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46616 ];

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate ( )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46613 ];

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate ( )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46610 ];

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginStatusChange ( )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 46607 ];

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate ( )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46604 ];

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate ( )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46602 ];

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::IsMuted ( )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 46598 ];

	UOnlineSubsystemSteamworks_execIsMuted_Parms IsMuted_Parms;

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::AreAnyFriends ( )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 46593 ];

	UOnlineSubsystemSteamworks_execAreAnyFriends_Parms AreAnyFriends_Parms;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	pFnAreAnyFriends->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::IsFriend ( )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 46589 ];

	UOnlineSubsystemSteamworks_execIsFriend_Parms IsFriend_Parms;

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	pFnIsFriend->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanUploadFitnessData ( )
{
	static UFunction* pFnCanUploadFitnessData = NULL;

	if ( ! pFnCanUploadFitnessData )
		pFnCanUploadFitnessData = (UFunction*) UObject::GObjObjects()->Data[ 46583 ];

	UOnlineSubsystemSteamworks_execCanUploadFitnessData_Parms CanUploadFitnessData_Parms;

	this->ProcessEvent ( pFnCanUploadFitnessData, &CanUploadFitnessData_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanShareKinectContent ( )
{
	static UFunction* pFnCanShareKinectContent = NULL;

	if ( ! pFnCanShareKinectContent )
		pFnCanShareKinectContent = (UFunction*) UObject::GObjObjects()->Data[ 46577 ];

	UOnlineSubsystemSteamworks_execCanShareKinectContent_Parms CanShareKinectContent_Parms;

	this->ProcessEvent ( pFnCanShareKinectContent, &CanShareKinectContent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanShareWithSocialNetwork ( )
{
	static UFunction* pFnCanShareWithSocialNetwork = NULL;

	if ( ! pFnCanShareWithSocialNetwork )
		pFnCanShareWithSocialNetwork = (UFunction*) UObject::GObjObjects()->Data[ 46571 ];

	UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Parms CanShareWithSocialNetwork_Parms;

	this->ProcessEvent ( pFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanBrowseInternet ( )
{
	static UFunction* pFnCanBrowseInternet = NULL;

	if ( ! pFnCanBrowseInternet )
		pFnCanBrowseInternet = (UFunction*) UObject::GObjObjects()->Data[ 46565 ];

	UOnlineSubsystemSteamworks_execCanBrowseInternet_Parms CanBrowseInternet_Parms;

	this->ProcessEvent ( pFnCanBrowseInternet, &CanBrowseInternet_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent ( )
{
	static UFunction* pFnCanAccessPremiumVideoContent = NULL;

	if ( ! pFnCanAccessPremiumVideoContent )
		pFnCanAccessPremiumVideoContent = (UFunction*) UObject::GObjObjects()->Data[ 46559 ];

	UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Parms CanAccessPremiumVideoContent_Parms;

	this->ProcessEvent ( pFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanAccessPremiumContent ( )
{
	static UFunction* pFnCanAccessPremiumContent = NULL;

	if ( ! pFnCanAccessPremiumContent )
		pFnCanAccessPremiumContent = (UFunction*) UObject::GObjObjects()->Data[ 46553 ];

	UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Parms CanAccessPremiumContent_Parms;

	this->ProcessEvent ( pFnCanAccessPremiumContent, &CanAccessPremiumContent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanUseCloudStorage ( )
{
	static UFunction* pFnCanUseCloudStorage = NULL;

	if ( ! pFnCanUseCloudStorage )
		pFnCanUseCloudStorage = (UFunction*) UObject::GObjObjects()->Data[ 46547 ];

	UOnlineSubsystemSteamworks_execCanUseCloudStorage_Parms CanUseCloudStorage_Parms;

	this->ProcessEvent ( pFnCanUseCloudStorage, &CanUseCloudStorage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanRecordDVRClips ( )
{
	static UFunction* pFnCanRecordDVRClips = NULL;

	if ( ! pFnCanRecordDVRClips )
		pFnCanRecordDVRClips = (UFunction*) UObject::GObjObjects()->Data[ 46541 ];

	UOnlineSubsystemSteamworks_execCanRecordDVRClips_Parms CanRecordDVRClips_Parms;

	this->ProcessEvent ( pFnCanRecordDVRClips, &CanRecordDVRClips_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanShowPresenceInformation ( )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 46535 ];

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanViewPlayerProfiles ( )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 46529 ];

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanPurchaseContent ( )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 46523 ];

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Parms CanPurchaseContent_Parms;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanShareUserCreatedContent ( )
{
	static UFunction* pFnCanShareUserCreatedContent = NULL;

	if ( ! pFnCanShareUserCreatedContent )
		pFnCanShareUserCreatedContent = (UFunction*) UObject::GObjObjects()->Data[ 46517 ];

	UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Parms CanShareUserCreatedContent_Parms;

	this->ProcessEvent ( pFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanCommunicateVoice ( )
{
	static UFunction* pFnCanCommunicateVoice = NULL;

	if ( ! pFnCanCommunicateVoice )
		pFnCanCommunicateVoice = (UFunction*) UObject::GObjObjects()->Data[ 46511 ];

	UOnlineSubsystemSteamworks_execCanCommunicateVoice_Parms CanCommunicateVoice_Parms;

	this->ProcessEvent ( pFnCanCommunicateVoice, &CanCommunicateVoice_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanCommunicateVideo ( )
{
	static UFunction* pFnCanCommunicateVideo = NULL;

	if ( ! pFnCanCommunicateVideo )
		pFnCanCommunicateVideo = (UFunction*) UObject::GObjObjects()->Data[ 46505 ];

	UOnlineSubsystemSteamworks_execCanCommunicateVideo_Parms CanCommunicateVideo_Parms;

	this->ProcessEvent ( pFnCanCommunicateVideo, &CanCommunicateVideo_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::CanCommunicateText ( )
{
	static UFunction* pFnCanCommunicateText = NULL;

	if ( ! pFnCanCommunicateText )
		pFnCanCommunicateText = (UFunction*) UObject::GObjObjects()->Data[ 46499 ];

	UOnlineSubsystemSteamworks_execCanCommunicateText_Parms CanCommunicateText_Parms;

	this->ProcessEvent ( pFnCanCommunicateText, &CanCommunicateText_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::CanPlayOnline ( )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 46493 ];

	UOnlineSubsystemSteamworks_execCanPlayOnline_Parms CanPlayOnline_Parms;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeLevelCheckedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearPrivilegeLevelCheckedDelegate ( )
{
	static UFunction* pFnClearPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnClearPrivilegeLevelCheckedDelegate )
		pFnClearPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46491 ];

	UOnlineSubsystemSteamworks_execClearPrivilegeLevelCheckedDelegate_Parms ClearPrivilegeLevelCheckedDelegate_Parms;

	this->ProcessEvent ( pFnClearPrivilegeLevelCheckedDelegate, &ClearPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeLevelCheckedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddPrivilegeLevelCheckedDelegate ( )
{
	static UFunction* pFnAddPrivilegeLevelCheckedDelegate = NULL;

	if ( ! pFnAddPrivilegeLevelCheckedDelegate )
		pFnAddPrivilegeLevelCheckedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46489 ];

	UOnlineSubsystemSteamworks_execAddPrivilegeLevelCheckedDelegate_Parms AddPrivilegeLevelCheckedDelegate_Parms;

	this->ProcessEvent ( pFnAddPrivilegeLevelCheckedDelegate, &AddPrivilegeLevelCheckedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeLevelChecked
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnPrivilegeLevelChecked ( )
{
	static UFunction* pFnOnPrivilegeLevelChecked = NULL;

	if ( ! pFnOnPrivilegeLevelChecked )
		pFnOnPrivilegeLevelChecked = (UFunction*) UObject::GObjObjects()->Data[ 46484 ];

	UOnlineSubsystemSteamworks_execOnPrivilegeLevelChecked_Parms OnPrivilegeLevelChecked_Parms;

	this->ProcessEvent ( pFnOnPrivilegeLevelChecked, &OnPrivilegeLevelChecked_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::CanCommunicate ( )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 46481 ];

	UOnlineSubsystemSteamworks_execCanCommunicate_Parms CanCommunicate_Parms;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetPlayerNickname ( )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 46478 ];

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Parms GetPlayerNickname_Parms;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerIdFromNetId
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetControllerIdFromNetId ( )
{
	static UFunction* pFnGetControllerIdFromNetId = NULL;

	if ( ! pFnGetControllerIdFromNetId )
		pFnGetControllerIdFromNetId = (UFunction*) UObject::GObjObjects()->Data[ 46474 ];

	UOnlineSubsystemSteamworks_execGetControllerIdFromNetId_Parms GetControllerIdFromNetId_Parms;

	this->ProcessEvent ( pFnGetControllerIdFromNetId, &GetControllerIdFromNetId_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetUniquePlayerId ( )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 46141 ];

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::IsLocalLogin ( )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 46469 ];

	UOnlineSubsystemSteamworks_execIsLocalLogin_Parms IsLocalLogin_Parms;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::IsGuestLogin ( )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 46466 ];

	UOnlineSubsystemSteamworks_execIsGuestLogin_Parms IsGuestLogin_Parms;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::GetLoginStatus ( )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 46463 ];

	UOnlineSubsystemSteamworks_execGetLoginStatus_Parms GetLoginStatus_Parms;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PairUserAndControllerAtIndex
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::PairUserAndControllerAtIndex ( )
{
	static UFunction* pFnPairUserAndControllerAtIndex = NULL;

	if ( ! pFnPairUserAndControllerAtIndex )
		pFnPairUserAndControllerAtIndex = (UFunction*) UObject::GObjObjects()->Data[ 46458 ];

	UOnlineSubsystemSteamworks_execPairUserAndControllerAtIndex_Parms PairUserAndControllerAtIndex_Parms;

	this->ProcessEvent ( pFnPairUserAndControllerAtIndex, &PairUserAndControllerAtIndex_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearSystemUserContrllerPairingChangedDelegate ( )
{
	static UFunction* pFnClearSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnClearSystemUserContrllerPairingChangedDelegate )
		pFnClearSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46456 ];

	UOnlineSubsystemSteamworks_execClearSystemUserContrllerPairingChangedDelegate_Parms ClearSystemUserContrllerPairingChangedDelegate_Parms;

	this->ProcessEvent ( pFnClearSystemUserContrllerPairingChangedDelegate, &ClearSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserContrllerPairingChangedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddSystemUserContrllerPairingChangedDelegate ( )
{
	static UFunction* pFnAddSystemUserContrllerPairingChangedDelegate = NULL;

	if ( ! pFnAddSystemUserContrllerPairingChangedDelegate )
		pFnAddSystemUserContrllerPairingChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46454 ];

	UOnlineSubsystemSteamworks_execAddSystemUserContrllerPairingChangedDelegate_Parms AddSystemUserContrllerPairingChangedDelegate_Parms;

	this->ProcessEvent ( pFnAddSystemUserContrllerPairingChangedDelegate, &AddSystemUserContrllerPairingChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnSystemUserControllerPairingChanged ( )
{
	static UFunction* pFnOnSystemUserControllerPairingChanged = NULL;

	if ( ! pFnOnSystemUserControllerPairingChanged )
		pFnOnSystemUserControllerPairingChanged = (UFunction*) UObject::GObjObjects()->Data[ 46451 ];

	UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Parms OnSystemUserControllerPairingChanged_Parms;

	this->ProcessEvent ( pFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate ( )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46447 ];

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate ( )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46444 ];

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLogoutCompleted ( )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 46442 ];

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::Logout ( )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 46439 ];

	UOnlineSubsystemSteamworks_execLogout_Parms Logout_Parms;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate ( )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46435 ];

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate ( )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46432 ];

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginFailed ( )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 46429 ];

	UOnlineSubsystemSteamworks_execOnLoginFailed_Parms OnLoginFailed_Parms;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 46427 ];

	UOnlineSubsystemSteamworks_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	pFnAutoLogin->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearLoginCompleteDelegate ( )
{
	static UFunction* pFnClearLoginCompleteDelegate = NULL;

	if ( ! pFnClearLoginCompleteDelegate )
		pFnClearLoginCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46424 ];

	UOnlineSubsystemSteamworks_execClearLoginCompleteDelegate_Parms ClearLoginCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginCompleteDelegate, &ClearLoginCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddLoginCompleteDelegate ( )
{
	static UFunction* pFnAddLoginCompleteDelegate = NULL;

	if ( ! pFnAddLoginCompleteDelegate )
		pFnAddLoginCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46421 ];

	UOnlineSubsystemSteamworks_execAddLoginCompleteDelegate_Parms AddLoginCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginCompleteDelegate, &AddLoginCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginComplete ( )
{
	static UFunction* pFnOnLoginComplete = NULL;

	if ( ! pFnOnLoginComplete )
		pFnOnLoginComplete = (UFunction*) UObject::GObjObjects()->Data[ 46417 ];

	UOnlineSubsystemSteamworks_execOnLoginComplete_Parms OnLoginComplete_Parms;

	this->ProcessEvent ( pFnOnLoginComplete, &OnLoginComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::Login ( )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 46411 ];

	UOnlineSubsystemSteamworks_execLogin_Parms Login_Parms;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ShowLoginUI ( )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 46407 ];

	UOnlineSubsystemSteamworks_execShowLoginUI_Parms ShowLoginUI_Parms;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearURLTokenRetrievedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::ClearURLTokenRetrievedDelegate ( )
{
	static UFunction* pFnClearURLTokenRetrievedDelegate = NULL;

	if ( ! pFnClearURLTokenRetrievedDelegate )
		pFnClearURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46404 ];

	UOnlineSubsystemSteamworks_execClearURLTokenRetrievedDelegate_Parms ClearURLTokenRetrievedDelegate_Parms;

	this->ProcessEvent ( pFnClearURLTokenRetrievedDelegate, &ClearURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddURLTokenRetrievedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::AddURLTokenRetrievedDelegate ( )
{
	static UFunction* pFnAddURLTokenRetrievedDelegate = NULL;

	if ( ! pFnAddURLTokenRetrievedDelegate )
		pFnAddURLTokenRetrievedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46401 ];

	UOnlineSubsystemSteamworks_execAddURLTokenRetrievedDelegate_Parms AddURLTokenRetrievedDelegate_Parms;

	this->ProcessEvent ( pFnAddURLTokenRetrievedDelegate, &AddURLTokenRetrievedDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTokenAndSignatureForURL
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::GetTokenAndSignatureForURL ( )
{
	static UFunction* pFnGetTokenAndSignatureForURL = NULL;

	if ( ! pFnGetTokenAndSignatureForURL )
		pFnGetTokenAndSignatureForURL = (UFunction*) UObject::GObjObjects()->Data[ 46398 ];

	UOnlineSubsystemSteamworks_execGetTokenAndSignatureForURL_Parms GetTokenAndSignatureForURL_Parms;

	this->ProcessEvent ( pFnGetTokenAndSignatureForURL, &GetTokenAndSignatureForURL_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTokenAndSignatureRetrieved
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnTokenAndSignatureRetrieved ( )
{
	static UFunction* pFnOnTokenAndSignatureRetrieved = NULL;

	if ( ! pFnOnTokenAndSignatureRetrieved )
		pFnOnTokenAndSignatureRetrieved = (UFunction*) UObject::GObjObjects()->Data[ 46393 ];

	UOnlineSubsystemSteamworks_execOnTokenAndSignatureRetrieved_Parms OnTokenAndSignatureRetrieved_Parms;

	this->ProcessEvent ( pFnOnTokenAndSignatureRetrieved, &OnTokenAndSignatureRetrieved_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 46392 ];

	UOnlineSubsystemSteamworks_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 46391 ];

	UOnlineSubsystemSteamworks_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 46390 ];

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemSteamworks::OnLoginChange ( )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 46388 ];

	UOnlineSubsystemSteamworks_execOnLoginChange_Parms OnLoginChange_Parms;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventExit ( )
{
	static UFunction* pFnExit = NULL;

	if ( ! pFnExit )
		pFnExit = (UFunction*) UObject::GObjObjects()->Data[ 46387 ];

	UOnlineSubsystemSteamworks_eventExit_Parms Exit_Parms;

	pFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExit, &Exit_Parms, NULL );

	pFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemSteamworks::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 46385 ];

	UOnlineSubsystemSteamworks_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetServerPassword
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::SetServerPassword ( )
{
	static UFunction* pFnSetServerPassword = NULL;

	if ( ! pFnSetServerPassword )
		pFnSetServerPassword = (UFunction*) UObject::GObjObjects()->Data[ 46132 ];

	UKFOnlineLobbySteamworks_execSetServerPassword_Parms SetServerPassword_Parms;

	this->ProcessEvent ( pFnSetServerPassword, &SetServerPassword_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetFriendNickname
// [0x00024002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::GetFriendNickname ( )
{
	static UFunction* pFnGetFriendNickname = NULL;

	if ( ! pFnGetFriendNickname )
		pFnGetFriendNickname = (UFunction*) UObject::GObjObjects()->Data[ 46127 ];

	UKFOnlineLobbySteamworks_execGetFriendNickname_Parms GetFriendNickname_Parms;

	this->ProcessEvent ( pFnGetFriendNickname, &GetFriendNickname_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetCurrentLobby
// [0x00C20002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::GetCurrentLobby ( )
{
	static UFunction* pFnGetCurrentLobby = NULL;

	if ( ! pFnGetCurrentLobby )
		pFnGetCurrentLobby = (UFunction*) UObject::GObjObjects()->Data[ 46123 ];

	UKFOnlineLobbySteamworks_execGetCurrentLobby_Parms GetCurrentLobby_Parms;

	this->ProcessEvent ( pFnGetCurrentLobby, &GetCurrentLobby_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetLobbyURLString
// [0x00820002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::GetLobbyURLString ( )
{
	static UFunction* pFnGetLobbyURLString = NULL;

	if ( ! pFnGetLobbyURLString )
		pFnGetLobbyURLString = (UFunction*) UObject::GObjObjects()->Data[ 46117 ];

	UKFOnlineLobbySteamworks_execGetLobbyURLString_Parms GetLobbyURLString_Parms;

	this->ProcessEvent ( pFnGetLobbyURLString, &GetLobbyURLString_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.TestFindLobbies
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UKFOnlineLobbySteamworks::eventTestFindLobbies ( )
{
	static UFunction* pFnTestFindLobbies = NULL;

	if ( ! pFnTestFindLobbies )
		pFnTestFindLobbies = (UFunction*) UObject::GObjObjects()->Data[ 46116 ];

	UKFOnlineLobbySteamworks_eventTestFindLobbies_Parms TestFindLobbies_Parms;

	this->ProcessEvent ( pFnTestFindLobbies, &TestFindLobbies_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyMessage
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::LobbyMessage ( )
{
	static UFunction* pFnLobbyMessage = NULL;

	if ( ! pFnLobbyMessage )
		pFnLobbyMessage = (UFunction*) UObject::GObjObjects()->Data[ 46113 ];

	UKFOnlineLobbySteamworks_execLobbyMessage_Parms LobbyMessage_Parms;

	this->ProcessEvent ( pFnLobbyMessage, &LobbyMessage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyReceiveMessage
// [0x00C20002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::OnLobbyReceiveMessage ( )
{
	static UFunction* pFnOnLobbyReceiveMessage = NULL;

	if ( ! pFnOnLobbyReceiveMessage )
		pFnOnLobbyReceiveMessage = (UFunction*) UObject::GObjObjects()->Data[ 46104 ];

	UKFOnlineLobbySteamworks_execOnLobbyReceiveMessage_Parms OnLobbyReceiveMessage_Parms;

	this->ProcessEvent ( pFnOnLobbyReceiveMessage, &OnLobbyReceiveMessage_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.ConsolePrint
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UKFOnlineLobbySteamworks::eventConsolePrint ( )
{
	static UFunction* pFnConsolePrint = NULL;

	if ( ! pFnConsolePrint )
		pFnConsolePrint = (UFunction*) UObject::GObjObjects()->Data[ 46102 ];

	UKFOnlineLobbySteamworks_eventConsolePrint_Parms ConsolePrint_Parms;

	this->ProcessEvent ( pFnConsolePrint, &ConsolePrint_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetPC
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::GetPC ( )
{
	static UFunction* pFnGetPC = NULL;

	if ( ! pFnGetPC )
		pFnGetPC = (UFunction*) UObject::GObjObjects()->Data[ 46099 ];

	UKFOnlineLobbySteamworks_execGetPC_Parms GetPC_Parms;

	this->ProcessEvent ( pFnGetPC, &GetPC_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetVisibility
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::SetVisibility ( )
{
	static UFunction* pFnSetVisibility = NULL;

	if ( ! pFnSetVisibility )
		pFnSetVisibility = (UFunction*) UObject::GObjObjects()->Data[ 46096 ];

	UKFOnlineLobbySteamworks_execSetVisibility_Parms SetVisibility_Parms;

	this->ProcessEvent ( pFnSetVisibility, &SetVisibility_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetLobbyData
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::SetLobbyData ( )
{
	static UFunction* pFnSetLobbyData = NULL;

	if ( ! pFnSetLobbyData )
		pFnSetLobbyData = (UFunction*) UObject::GObjObjects()->Data[ 46093 ];

	UKFOnlineLobbySteamworks_execSetLobbyData_Parms SetLobbyData_Parms;

	this->ProcessEvent ( pFnSetLobbyData, &SetLobbyData_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetLobbyData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::GetLobbyData ( )
{
	static UFunction* pFnGetLobbyData = NULL;

	if ( ! pFnGetLobbyData )
		pFnGetLobbyData = (UFunction*) UObject::GObjObjects()->Data[ 46089 ];

	UKFOnlineLobbySteamworks_execGetLobbyData_Parms GetLobbyData_Parms;

	pFnGetLobbyData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyData, &GetLobbyData_Parms, NULL );

	pFnGetLobbyData->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.NotifyLobbyStatusChanged
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::NotifyLobbyStatusChanged ( )
{
	static UFunction* pFnNotifyLobbyStatusChanged = NULL;

	if ( ! pFnNotifyLobbyStatusChanged )
		pFnNotifyLobbyStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 46086 ];

	UKFOnlineLobbySteamworks_execNotifyLobbyStatusChanged_Parms NotifyLobbyStatusChanged_Parms;

	this->ProcessEvent ( pFnNotifyLobbyStatusChanged, &NotifyLobbyStatusChanged_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.NotifyUnsuccessfulSearch
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::NotifyUnsuccessfulSearch ( )
{
	static UFunction* pFnNotifyUnsuccessfulSearch = NULL;

	if ( ! pFnNotifyUnsuccessfulSearch )
		pFnNotifyUnsuccessfulSearch = (UFunction*) UObject::GObjObjects()->Data[ 46084 ];

	UKFOnlineLobbySteamworks_execNotifyUnsuccessfulSearch_Parms NotifyUnsuccessfulSearch_Parms;

	this->ProcessEvent ( pFnNotifyUnsuccessfulSearch, &NotifyUnsuccessfulSearch_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.FindLobbiesComplete
// [0x00420002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::FindLobbiesComplete ( )
{
	static UFunction* pFnFindLobbiesComplete = NULL;

	if ( ! pFnFindLobbiesComplete )
		pFnFindLobbiesComplete = (UFunction*) UObject::GObjObjects()->Data[ 46080 ];

	UKFOnlineLobbySteamworks_execFindLobbiesComplete_Parms FindLobbiesComplete_Parms;

	this->ProcessEvent ( pFnFindLobbiesComplete, &FindLobbiesComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.FindLobbies
// [0x00024002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::FindLobbies ( )
{
	static UFunction* pFnFindLobbies = NULL;

	if ( ! pFnFindLobbies )
		pFnFindLobbies = (UFunction*) UObject::GObjObjects()->Data[ 46071 ];

	UKFOnlineLobbySteamworks_execFindLobbies_Parms FindLobbies_Parms;

	this->ProcessEvent ( pFnFindLobbies, &FindLobbies_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyJoinGame
// [0x00420002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::OnLobbyJoinGame ( )
{
	static UFunction* pFnOnLobbyJoinGame = NULL;

	if ( ! pFnOnLobbyJoinGame )
		pFnOnLobbyJoinGame = (UFunction*) UObject::GObjObjects()->Data[ 46064 ];

	UKFOnlineLobbySteamworks_execOnLobbyJoinGame_Parms OnLobbyJoinGame_Parms;

	this->ProcessEvent ( pFnOnLobbyJoinGame, &OnLobbyJoinGame_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyJoinServer
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::LobbyJoinServer ( )
{
	static UFunction* pFnLobbyJoinServer = NULL;

	if ( ! pFnLobbyJoinServer )
		pFnLobbyJoinServer = (UFunction*) UObject::GObjObjects()->Data[ 46061 ];

	UKFOnlineLobbySteamworks_execLobbyJoinServer_Parms LobbyJoinServer_Parms;

	this->ProcessEvent ( pFnLobbyJoinServer, &LobbyJoinServer_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyJoinGameDelegate
// [0x00820002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::LobbyJoinGameDelegate ( )
{
	static UFunction* pFnLobbyJoinGameDelegate = NULL;

	if ( ! pFnLobbyJoinGameDelegate )
		pFnLobbyJoinGameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 46059 ];

	UKFOnlineLobbySteamworks_execLobbyJoinGameDelegate_Parms LobbyJoinGameDelegate_Parms;

	this->ProcessEvent ( pFnLobbyJoinGameDelegate, &LobbyJoinGameDelegate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyJoinGame
// [0x00024002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::LobbyJoinGame ( )
{
	static UFunction* pFnLobbyJoinGame = NULL;

	if ( ! pFnLobbyJoinGame )
		pFnLobbyJoinGame = (UFunction*) UObject::GObjObjects()->Data[ 46056 ];

	UKFOnlineLobbySteamworks_execLobbyJoinGame_Parms LobbyJoinGame_Parms;

	this->ProcessEvent ( pFnLobbyJoinGame, &LobbyJoinGame_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.AppendPasswordToURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::AppendPasswordToURL ( )
{
	static UFunction* pFnAppendPasswordToURL = NULL;

	if ( ! pFnAppendPasswordToURL )
		pFnAppendPasswordToURL = (UFunction*) UObject::GObjObjects()->Data[ 46052 ];

	UKFOnlineLobbySteamworks_execAppendPasswordToURL_Parms AppendPasswordToURL_Parms;

	pFnAppendPasswordToURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAppendPasswordToURL, &AppendPasswordToURL_Parms, NULL );

	pFnAppendPasswordToURL->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetConnectedServerIP
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::GetConnectedServerIP ( )
{
	static UFunction* pFnGetConnectedServerIP = NULL;

	if ( ! pFnGetConnectedServerIP )
		pFnGetConnectedServerIP = (UFunction*) UObject::GObjObjects()->Data[ 46050 ];

	UKFOnlineLobbySteamworks_execGetConnectedServerIP_Parms GetConnectedServerIP_Parms;

	pFnGetConnectedServerIP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetConnectedServerIP, &GetConnectedServerIP_Parms, NULL );

	pFnGetConnectedServerIP->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetLobbyServerIP
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::GetLobbyServerIP ( )
{
	static UFunction* pFnGetLobbyServerIP = NULL;

	if ( ! pFnGetLobbyServerIP )
		pFnGetLobbyServerIP = (UFunction*) UObject::GObjObjects()->Data[ 46047 ];

	UKFOnlineLobbySteamworks_execGetLobbyServerIP_Parms GetLobbyServerIP_Parms;

	pFnGetLobbyServerIP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLobbyServerIP, &GetLobbyServerIP_Parms, NULL );

	pFnGetLobbyServerIP->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetServerConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::GetServerConnected ( )
{
	static UFunction* pFnGetServerConnected = NULL;

	if ( ! pFnGetServerConnected )
		pFnGetServerConnected = (UFunction*) UObject::GObjObjects()->Data[ 46045 ];

	UKFOnlineLobbySteamworks_execGetServerConnected_Parms GetServerConnected_Parms;

	pFnGetServerConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerConnected, &GetServerConnected_Parms, NULL );

	pFnGetServerConnected->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.SetLobbyServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::SetLobbyServer ( )
{
	static UFunction* pFnSetLobbyServer = NULL;

	if ( ! pFnSetLobbyServer )
		pFnSetLobbyServer = (UFunction*) UObject::GObjObjects()->Data[ 46040 ];

	UKFOnlineLobbySteamworks_execSetLobbyServer_Parms SetLobbyServer_Parms;

	pFnSetLobbyServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLobbyServer, &SetLobbyServer_Parms, NULL );

	pFnSetLobbyServer->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.JoinServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::JoinServer ( )
{
	static UFunction* pFnJoinServer = NULL;

	if ( ! pFnJoinServer )
		pFnJoinServer = (UFunction*) UObject::GObjObjects()->Data[ 46036 ];

	UKFOnlineLobbySteamworks_execJoinServer_Parms JoinServer_Parms;

	pFnJoinServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinServer, &JoinServer_Parms, NULL );

	pFnJoinServer->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetMyId
// [0x00820002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::GetMyId ( )
{
	static UFunction* pFnGetMyId = NULL;

	if ( ! pFnGetMyId )
		pFnGetMyId = (UFunction*) UObject::GObjObjects()->Data[ 46033 ];

	UKFOnlineLobbySteamworks_execGetMyId_Parms GetMyId_Parms;

	this->ProcessEvent ( pFnGetMyId, &GetMyId_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.QuitLobby
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::QuitLobby ( )
{
	static UFunction* pFnQuitLobby = NULL;

	if ( ! pFnQuitLobby )
		pFnQuitLobby = (UFunction*) UObject::GObjObjects()->Data[ 46030 ];

	UKFOnlineLobbySteamworks_execQuitLobby_Parms QuitLobby_Parms;

	this->ProcessEvent ( pFnQuitLobby, &QuitLobby_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnJoinLobbyComplete
// [0x00420002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::OnJoinLobbyComplete ( )
{
	static UFunction* pFnOnJoinLobbyComplete = NULL;

	if ( ! pFnOnJoinLobbyComplete )
		pFnOnJoinLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 46022 ];

	UKFOnlineLobbySteamworks_execOnJoinLobbyComplete_Parms OnJoinLobbyComplete_Parms;

	this->ProcessEvent ( pFnOnJoinLobbyComplete, &OnJoinLobbyComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyInvite
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::OnLobbyInvite ( )
{
	static UFunction* pFnOnLobbyInvite = NULL;

	if ( ! pFnOnLobbyInvite )
		pFnOnLobbyInvite = (UFunction*) UObject::GObjObjects()->Data[ 46018 ];

	UKFOnlineLobbySteamworks_execOnLobbyInvite_Parms OnLobbyInvite_Parms;

	this->ProcessEvent ( pFnOnLobbyInvite, &OnLobbyInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.LobbyInvite
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::LobbyInvite ( )
{
	static UFunction* pFnLobbyInvite = NULL;

	if ( ! pFnLobbyInvite )
		pFnLobbyInvite = (UFunction*) UObject::GObjObjects()->Data[ 46014 ];

	UKFOnlineLobbySteamworks_execLobbyInvite_Parms LobbyInvite_Parms;

	this->ProcessEvent ( pFnLobbyInvite, &LobbyInvite_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnLobbyMemberStatusUpdate
// [0x00C20002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::OnLobbyMemberStatusUpdate ( )
{
	static UFunction* pFnOnLobbyMemberStatusUpdate = NULL;

	if ( ! pFnOnLobbyMemberStatusUpdate )
		pFnOnLobbyMemberStatusUpdate = (UFunction*) UObject::GObjObjects()->Data[ 46005 ];

	UKFOnlineLobbySteamworks_execOnLobbyMemberStatusUpdate_Parms OnLobbyMemberStatusUpdate_Parms;

	this->ProcessEvent ( pFnOnLobbyMemberStatusUpdate, &OnLobbyMemberStatusUpdate_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetFriendUniqueId
// [0x00824002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::GetFriendUniqueId ( )
{
	static UFunction* pFnGetFriendUniqueId = NULL;

	if ( ! pFnGetFriendUniqueId )
		pFnGetFriendUniqueId = (UFunction*) UObject::GObjObjects()->Data[ 45997 ];

	UKFOnlineLobbySteamworks_execGetFriendUniqueId_Parms GetFriendUniqueId_Parms;

	this->ProcessEvent ( pFnGetFriendUniqueId, &GetFriendUniqueId_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.InviteFriendToLobby
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UKFOnlineLobbySteamworks::eventInviteFriendToLobby ( )
{
	static UFunction* pFnInviteFriendToLobby = NULL;

	if ( ! pFnInviteFriendToLobby )
		pFnInviteFriendToLobby = (UFunction*) UObject::GObjObjects()->Data[ 45992 ];

	UKFOnlineLobbySteamworks_eventInviteFriendToLobby_Parms InviteFriendToLobby_Parms;

	this->ProcessEvent ( pFnInviteFriendToLobby, &InviteFriendToLobby_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.ShowLobbyInviteInterface
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::ShowLobbyInviteInterface ( )
{
	static UFunction* pFnShowLobbyInviteInterface = NULL;

	if ( ! pFnShowLobbyInviteInterface )
		pFnShowLobbyInviteInterface = (UFunction*) UObject::GObjObjects()->Data[ 45990 ];

	UKFOnlineLobbySteamworks_execShowLobbyInviteInterface_Parms ShowLobbyInviteInterface_Parms;

	this->ProcessEvent ( pFnShowLobbyInviteInterface, &ShowLobbyInviteInterface_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.ShowLobbyInviteInterfaceInternal
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UKFOnlineLobbySteamworks::ShowLobbyInviteInterfaceInternal ( )
{
	static UFunction* pFnShowLobbyInviteInterfaceInternal = NULL;

	if ( ! pFnShowLobbyInviteInterfaceInternal )
		pFnShowLobbyInviteInterfaceInternal = (UFunction*) UObject::GObjObjects()->Data[ 45988 ];

	UKFOnlineLobbySteamworks_execShowLobbyInviteInterfaceInternal_Parms ShowLobbyInviteInterfaceInternal_Parms;

	pFnShowLobbyInviteInterfaceInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLobbyInviteInterfaceInternal, &ShowLobbyInviteInterfaceInternal_Parms, NULL );

	pFnShowLobbyInviteInterfaceInternal->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.OnCreateLobbyComplete
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::OnCreateLobbyComplete ( )
{
	static UFunction* pFnOnCreateLobbyComplete = NULL;

	if ( ! pFnOnCreateLobbyComplete )
		pFnOnCreateLobbyComplete = (UFunction*) UObject::GObjObjects()->Data[ 45983 ];

	UKFOnlineLobbySteamworks_execOnCreateLobbyComplete_Parms OnCreateLobbyComplete_Parms;

	this->ProcessEvent ( pFnOnCreateLobbyComplete, &OnCreateLobbyComplete_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.MakeLobby
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::MakeLobby ( )
{
	static UFunction* pFnMakeLobby = NULL;

	if ( ! pFnMakeLobby )
		pFnMakeLobby = (UFunction*) UObject::GObjObjects()->Data[ 45979 ];

	UKFOnlineLobbySteamworks_execMakeLobby_Parms MakeLobby_Parms;

	this->ProcessEvent ( pFnMakeLobby, &MakeLobby_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.Initialize
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 45978 ];

	UKFOnlineLobbySteamworks_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.IsLobbyOwner
// [0x00820002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::IsLobbyOwner ( )
{
	static UFunction* pFnIsLobbyOwner = NULL;

	if ( ! pFnIsLobbyOwner )
		pFnIsLobbyOwner = (UFunction*) UObject::GObjObjects()->Data[ 45974 ];

	UKFOnlineLobbySteamworks_execIsLobbyOwner_Parms IsLobbyOwner_Parms;

	this->ProcessEvent ( pFnIsLobbyOwner, &IsLobbyOwner_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.IsInLobby
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::IsInLobby ( )
{
	static UFunction* pFnIsInLobby = NULL;

	if ( ! pFnIsInLobby )
		pFnIsInLobby = (UFunction*) UObject::GObjObjects()->Data[ 45972 ];

	UKFOnlineLobbySteamworks_execIsInLobby_Parms IsInLobby_Parms;

	this->ProcessEvent ( pFnIsInLobby, &IsInLobby_Parms, NULL );
};

// Function OnlineSubsystemSteamworks.KFOnlineLobbySteamworks.GetCurrentLobbyId
// [0x00020002] 
// Parameters infos:

void UKFOnlineLobbySteamworks::GetCurrentLobbyId ( )
{
	static UFunction* pFnGetCurrentLobbyId = NULL;

	if ( ! pFnGetCurrentLobbyId )
		pFnGetCurrentLobbyId = (UFunction*) UObject::GObjObjects()->Data[ 45970 ];

	UKFOnlineLobbySteamworks_execGetCurrentLobbyId_Parms GetCurrentLobbyId_Parms;

	this->ProcessEvent ( pFnGetCurrentLobbyId, &GetCurrentLobbyId_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif