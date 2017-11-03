/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_f_structs.h
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

// Function AkAudio.AkComponent.IsPlaying
// [0x00024400] ( FUNC_Native )
struct UAkComponent_execIsPlaying_Parms
{
	// class UAkEvent*                                 Event;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function AkAudio.AkComponent.SetRTPCValue
// [0x00020400] ( FUNC_Native )
struct UAkComponent_execSetRTPCValue_Parms
{
	// struct FString                                  RTPCString;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           RTPCValue;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function AkAudio.AkComponent.PlayEvent
// [0x00024400] ( FUNC_Native )
struct UAkComponent_execPlayEvent_Parms
{
	// class UAkEvent*                                 in_Event;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsSpatialized : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bIsOccluded : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bDoNotCheckOcclusion : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function AkAudio.AkComponent.StopEvents
// [0x00020400] ( FUNC_Native )
struct UAkComponent_execStopEvents_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif