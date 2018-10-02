/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WinDrv.FacebookWindows
// 0x0010 (0x00F0 - 0x00E0)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x00E0 (0x0008) [0x0000000000000000]              
	struct FPointer                                    ChildProcHandle;                                  		// 0x00E8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3150 ];

		return pClassPointer;
	};

	void OnFacebookFriendsRequestComplete ( );
	void eventRequestFacebookFriends ( );
	void OnFacebookMeRequestComplete ( );
	void eventRequestFacebookMeInfo ( );
	void FacebookRequestCallback ( );
	void ProcessFacebookRequest ( );
	void FacebookRequest ( );
	void Disconnect ( );
	void IsAuthorized ( );
	void Authorize ( );
	void Init ( );
};

UClass* UFacebookWindows::pClassPointer = NULL;

// Class WinDrv.HttpRequestWindows
// 0x0030 (0x00A0 - 0x0070)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                          		// 0x0070 (0x0008) [0x0000000000000000]              
	struct FString                                     RequestVerb;                                      		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FPointer                                    RequestURL;                                       		// 0x0088 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            Payload;                                          		// 0x0090 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3152 ];

		return pClassPointer;
	};

	void ProcessRequest ( );
	void SetHeader ( );
	void SetContentAsString ( );
	void SetContent ( );
	void SetURL ( );
	void SetVerb ( );
	void GetVerb ( );
	void GetContent ( );
	void GetURL ( );
	void GetContentLength ( );
	void GetContentType ( );
	void GetURLParameter ( );
	void GetHeaders ( );
	void GetHeader ( );
};

UClass* UHttpRequestWindows::pClassPointer = NULL;

// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0078 - 0x0060)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                         		// 0x0060 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            Payload;                                          		// 0x0068 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3154 ];

		return pClassPointer;
	};

	void GetResponseCode ( );
	void GetContentAsString ( );
	void GetContent ( );
	void GetURL ( );
	void GetContentLength ( );
	void GetContentType ( );
	void GetURLParameter ( );
	void GetHeaders ( );
	void GetHeader ( );
};

UClass* UHttpResponseWindows::pClassPointer = NULL;

// Class WinDrv.SwrveAnalyticsWindows
// 0x0048 (0x00E0 - 0x0098)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0098 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3156 ];

		return pClassPointer;
	};

};

UClass* USwrveAnalyticsWindows::pClassPointer = NULL;

// Class WinDrv.WindowsClient
// 0x01C0 (0x0238 - 0x0078)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x16C ];                           		// 0x0078 (0x016C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x01E4 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x38 ];                            		// 0x01EC (0x0038) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x0224 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x10 ];                            		// 0x0228 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3158 ];

		return pClassPointer;
	};

};

UClass* UWindowsClient::pClassPointer = NULL;

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0088 - 0x0088)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3162 ];

		return pClassPointer;
	};

};

UClass* UXnaForceFeedbackManager::pClassPointer = NULL;

// Class WinDrv.HttpRequestWindowsMcp
// 0x0020 (0x00C0 - 0x00A0)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	struct FString                                     AppID;                                            		// 0x00A0 (0x0010) [0x0000000000000000]              
	struct FString                                     AppSecret;                                        		// 0x00B0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42085 ];

		return pClassPointer;
	};

	void ProcessRequest ( );
};

UClass* UHttpRequestWindowsMcp::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif