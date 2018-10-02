/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_functions.h
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

// Function AkAudio.AkComponent.IsPlaying
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UAkComponent::IsPlaying ( )
{
	static UFunction* pFnIsPlaying = NULL;

	if ( ! pFnIsPlaying )
		pFnIsPlaying = (UFunction*) UObject::GObjObjects()->Data[ 48006 ];

	UAkComponent_execIsPlaying_Parms IsPlaying_Parms;

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlaying, &IsPlaying_Parms, NULL );

	pFnIsPlaying->FunctionFlags |= 0x400;
};

// Function AkAudio.AkComponent.SetRTPCValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UAkComponent::SetRTPCValue ( )
{
	static UFunction* pFnSetRTPCValue = NULL;

	if ( ! pFnSetRTPCValue )
		pFnSetRTPCValue = (UFunction*) UObject::GObjObjects()->Data[ 48003 ];

	UAkComponent_execSetRTPCValue_Parms SetRTPCValue_Parms;

	pFnSetRTPCValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRTPCValue, &SetRTPCValue_Parms, NULL );

	pFnSetRTPCValue->FunctionFlags |= 0x400;
};

// Function AkAudio.AkComponent.PlayEvent
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UAkComponent::PlayEvent ( )
{
	static UFunction* pFnPlayEvent = NULL;

	if ( ! pFnPlayEvent )
		pFnPlayEvent = (UFunction*) UObject::GObjObjects()->Data[ 47998 ];

	UAkComponent_execPlayEvent_Parms PlayEvent_Parms;

	pFnPlayEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayEvent, &PlayEvent_Parms, NULL );

	pFnPlayEvent->FunctionFlags |= 0x400;
};

// Function AkAudio.AkComponent.StopEvents
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UAkComponent::StopEvents ( )
{
	static UFunction* pFnStopEvents = NULL;

	if ( ! pFnStopEvents )
		pFnStopEvents = (UFunction*) UObject::GObjObjects()->Data[ 47997 ];

	UAkComponent_execStopEvents_Parms StopEvents_Parms;

	pFnStopEvents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopEvents, &StopEvents_Parms, NULL );

	pFnStopEvents->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif