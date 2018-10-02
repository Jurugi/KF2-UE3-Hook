/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_functions.h
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

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// [0x00840003] ( FUNC_Final )
// Parameters infos:

void UFacebookWindows::OnFacebookFriendsRequestComplete ( )
{
	static UFunction* pFnOnFacebookFriendsRequestComplete = NULL;

	if ( ! pFnOnFacebookFriendsRequestComplete )
		pFnOnFacebookFriendsRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 42031 ];

	UFacebookWindows_execOnFacebookFriendsRequestComplete_Parms OnFacebookFriendsRequestComplete_Parms;

	this->ProcessEvent ( pFnOnFacebookFriendsRequestComplete, &OnFacebookFriendsRequestComplete_Parms, NULL );
};

// Function WinDrv.FacebookWindows.RequestFacebookFriends
// [0x00040803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UFacebookWindows::eventRequestFacebookFriends ( )
{
	static UFunction* pFnRequestFacebookFriends = NULL;

	if ( ! pFnRequestFacebookFriends )
		pFnRequestFacebookFriends = (UFunction*) UObject::GObjObjects()->Data[ 42030 ];

	UFacebookWindows_eventRequestFacebookFriends_Parms RequestFacebookFriends_Parms;

	this->ProcessEvent ( pFnRequestFacebookFriends, &RequestFacebookFriends_Parms, NULL );
};

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// [0x00840003] ( FUNC_Final )
// Parameters infos:

void UFacebookWindows::OnFacebookMeRequestComplete ( )
{
	static UFunction* pFnOnFacebookMeRequestComplete = NULL;

	if ( ! pFnOnFacebookMeRequestComplete )
		pFnOnFacebookMeRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 42023 ];

	UFacebookWindows_execOnFacebookMeRequestComplete_Parms OnFacebookMeRequestComplete_Parms;

	this->ProcessEvent ( pFnOnFacebookMeRequestComplete, &OnFacebookMeRequestComplete_Parms, NULL );
};

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// [0x00040803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UFacebookWindows::eventRequestFacebookMeInfo ( )
{
	static UFunction* pFnRequestFacebookMeInfo = NULL;

	if ( ! pFnRequestFacebookMeInfo )
		pFnRequestFacebookMeInfo = (UFunction*) UObject::GObjObjects()->Data[ 42022 ];

	UFacebookWindows_eventRequestFacebookMeInfo_Parms RequestFacebookMeInfo_Parms;

	this->ProcessEvent ( pFnRequestFacebookMeInfo, &RequestFacebookMeInfo_Parms, NULL );
};

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020002] 
// Parameters infos:

void UFacebookWindows::FacebookRequestCallback ( )
{
	static UFunction* pFnFacebookRequestCallback = NULL;

	if ( ! pFnFacebookRequestCallback )
		pFnFacebookRequestCallback = (UFunction*) UObject::GObjObjects()->Data[ 42017 ];

	UFacebookWindows_execFacebookRequestCallback_Parms FacebookRequestCallback_Parms;

	this->ProcessEvent ( pFnFacebookRequestCallback, &FacebookRequestCallback_Parms, NULL );
};

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UFacebookWindows::ProcessFacebookRequest ( )
{
	static UFunction* pFnProcessFacebookRequest = NULL;

	if ( ! pFnProcessFacebookRequest )
		pFnProcessFacebookRequest = (UFunction*) UObject::GObjObjects()->Data[ 42014 ];

	UFacebookWindows_execProcessFacebookRequest_Parms ProcessFacebookRequest_Parms;

	pFnProcessFacebookRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessFacebookRequest, &ProcessFacebookRequest_Parms, NULL );

	pFnProcessFacebookRequest->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x00020002] 
// Parameters infos:

void UFacebookWindows::FacebookRequest ( )
{
	static UFunction* pFnFacebookRequest = NULL;

	if ( ! pFnFacebookRequest )
		pFnFacebookRequest = (UFunction*) UObject::GObjObjects()->Data[ 42012 ];

	UFacebookWindows_execFacebookRequest_Parms FacebookRequest_Parms;

	this->ProcessEvent ( pFnFacebookRequest, &FacebookRequest_Parms, NULL );
};

// Function WinDrv.FacebookWindows.Disconnect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UFacebookWindows::Disconnect ( )
{
	static UFunction* pFnDisconnect = NULL;

	if ( ! pFnDisconnect )
		pFnDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 42011 ];

	UFacebookWindows_execDisconnect_Parms Disconnect_Parms;

	pFnDisconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisconnect, &Disconnect_Parms, NULL );

	pFnDisconnect->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UFacebookWindows::IsAuthorized ( )
{
	static UFunction* pFnIsAuthorized = NULL;

	if ( ! pFnIsAuthorized )
		pFnIsAuthorized = (UFunction*) UObject::GObjObjects()->Data[ 42009 ];

	UFacebookWindows_execIsAuthorized_Parms IsAuthorized_Parms;

	pFnIsAuthorized->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsAuthorized, &IsAuthorized_Parms, NULL );

	pFnIsAuthorized->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.Authorize
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UFacebookWindows::Authorize ( )
{
	static UFunction* pFnAuthorize = NULL;

	if ( ! pFnAuthorize )
		pFnAuthorize = (UFunction*) UObject::GObjObjects()->Data[ 42007 ];

	UFacebookWindows_execAuthorize_Parms Authorize_Parms;

	pFnAuthorize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAuthorize, &Authorize_Parms, NULL );

	pFnAuthorize->FunctionFlags |= 0x400;
};

// Function WinDrv.FacebookWindows.Init
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UFacebookWindows::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 42005 ];

	UFacebookWindows_execInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::ProcessRequest ( )
{
	static UFunction* pFnProcessRequest = NULL;

	if ( ! pFnProcessRequest )
		pFnProcessRequest = (UFunction*) UObject::GObjObjects()->Data[ 42083 ];

	UHttpRequestWindows_execProcessRequest_Parms ProcessRequest_Parms;

	pFnProcessRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessRequest, &ProcessRequest_Parms, NULL );

	pFnProcessRequest->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::SetHeader ( )
{
	static UFunction* pFnSetHeader = NULL;

	if ( ! pFnSetHeader )
		pFnSetHeader = (UFunction*) UObject::GObjObjects()->Data[ 42079 ];

	UHttpRequestWindows_execSetHeader_Parms SetHeader_Parms;

	pFnSetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHeader, &SetHeader_Parms, NULL );

	pFnSetHeader->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::SetContentAsString ( )
{
	static UFunction* pFnSetContentAsString = NULL;

	if ( ! pFnSetContentAsString )
		pFnSetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 42076 ];

	UHttpRequestWindows_execSetContentAsString_Parms SetContentAsString_Parms;

	pFnSetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContentAsString, &SetContentAsString_Parms, NULL );

	pFnSetContentAsString->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::SetContent ( )
{
	static UFunction* pFnSetContent = NULL;

	if ( ! pFnSetContent )
		pFnSetContent = (UFunction*) UObject::GObjObjects()->Data[ 42072 ];

	UHttpRequestWindows_execSetContent_Parms SetContent_Parms;

	pFnSetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContent, &SetContent_Parms, NULL );

	pFnSetContent->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::SetURL ( )
{
	static UFunction* pFnSetURL = NULL;

	if ( ! pFnSetURL )
		pFnSetURL = (UFunction*) UObject::GObjObjects()->Data[ 42069 ];

	UHttpRequestWindows_execSetURL_Parms SetURL_Parms;

	pFnSetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetURL, &SetURL_Parms, NULL );

	pFnSetURL->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::SetVerb ( )
{
	static UFunction* pFnSetVerb = NULL;

	if ( ! pFnSetVerb )
		pFnSetVerb = (UFunction*) UObject::GObjObjects()->Data[ 42066 ];

	UHttpRequestWindows_execSetVerb_Parms SetVerb_Parms;

	pFnSetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVerb, &SetVerb_Parms, NULL );

	pFnSetVerb->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetVerb ( )
{
	static UFunction* pFnGetVerb = NULL;

	if ( ! pFnGetVerb )
		pFnGetVerb = (UFunction*) UObject::GObjObjects()->Data[ 42064 ];

	UHttpRequestWindows_execGetVerb_Parms GetVerb_Parms;

	pFnGetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVerb, &GetVerb_Parms, NULL );

	pFnGetVerb->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetContent ( )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 42061 ];

	UHttpRequestWindows_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 42059 ];

	UHttpRequestWindows_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 42057 ];

	UHttpRequestWindows_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 42055 ];

	UHttpRequestWindows_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetURLParameter ( )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 42052 ];

	UHttpRequestWindows_execGetURLParameter_Parms GetURLParameter_Parms;

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 42049 ];

	UHttpRequestWindows_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpRequestWindows::GetHeader ( )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 42046 ];

	UHttpRequestWindows_execGetHeader_Parms GetHeader_Parms;

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetResponseCode ( )
{
	static UFunction* pFnGetResponseCode = NULL;

	if ( ! pFnGetResponseCode )
		pFnGetResponseCode = (UFunction*) UObject::GObjObjects()->Data[ 42115 ];

	UHttpResponseWindows_execGetResponseCode_Parms GetResponseCode_Parms;

	pFnGetResponseCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResponseCode, &GetResponseCode_Parms, NULL );

	pFnGetResponseCode->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetContentAsString ( )
{
	static UFunction* pFnGetContentAsString = NULL;

	if ( ! pFnGetContentAsString )
		pFnGetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 42113 ];

	UHttpResponseWindows_execGetContentAsString_Parms GetContentAsString_Parms;

	pFnGetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentAsString, &GetContentAsString_Parms, NULL );

	pFnGetContentAsString->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetContent ( )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 42110 ];

	UHttpResponseWindows_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 42108 ];

	UHttpResponseWindows_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 42106 ];

	UHttpResponseWindows_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 42104 ];

	UHttpResponseWindows_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetURLParameter ( )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 42101 ];

	UHttpResponseWindows_execGetURLParameter_Parms GetURLParameter_Parms;

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 42098 ];

	UHttpResponseWindows_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UHttpResponseWindows::GetHeader ( )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 42095 ];

	UHttpResponseWindows_execGetHeader_Parms GetHeader_Parms;

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;
};

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// [0x00020002] 
// Parameters infos:

void UHttpRequestWindowsMcp::ProcessRequest ( )
{
	static UFunction* pFnProcessRequest = NULL;

	if ( ! pFnProcessRequest )
		pFnProcessRequest = (UFunction*) UObject::GObjObjects()->Data[ 42088 ];

	UHttpRequestWindowsMcp_execProcessRequest_Parms ProcessRequest_Parms;

	this->ProcessEvent ( pFnProcessRequest, &ProcessRequest_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif