/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_classes.h
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

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 (0x00A4 - 0x009C)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x009C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3113 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAmbientSound
// 0x000C (0x0258 - 0x024C)
class AAkAmbientSound : public AKeypoint
{
public:
	DWORD                                              bAutoPlay : 1;                                    		// 0x024C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              StopWhenOwnerIsDestroyed : 1;                     		// 0x024C (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bIsPlaying : 1;                                   		// 0x024C (0x0004) [0x0000000000000000] [0x00000004] 
	class UAkEvent*                                    PlayEvent;                                        		// 0x0250 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3115 ];

		return pClassPointer;
	};

};

UClass* AAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAudioDevice
// 0x00B0 (0x0118 - 0x0068)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[ 0xB0 ];                            		// 0x0068 (0x00B0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3117 ];

		return pClassPointer;
	};

};

UClass* UAkAudioDevice::pClassPointer = NULL;

// Class AkAudio.AkComponent
// 0x005F (0x00E4 - 0x0085)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                         		// 0x0088 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    AutoPlayEvent;                                    		// 0x0090 (0x0008) [0x0000000000000000]              
	DWORD                                              bStopWhenOwnerDestroyed : 1;                      		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bPooled : 1;                                      		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bWaitingToReturnToPool : 1;                       		// 0x0098 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bFollowOwnerPosition : 1;                         		// 0x0098 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bUpdateDistanceToListener : 1;                    		// 0x0098 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bUpdateRelativeVelocityToListener : 1;            		// 0x0098 (0x0004) [0x0000000000000000] [0x00000020] 
	DWORD                                              bForceOcclusionUpdateInterval : 1;                		// 0x0098 (0x0004) [0x0000000000000000] [0x00000040] 
	DWORD                                              bWasOccluded : 1;                                 		// 0x0098 (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              OcclusionUpdateInterval;                          		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              LastOcclusionUpdateTime;                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              MaxAttenuationValue;                              		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x00A8 (0x000C) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x00B4 (0x000C) [0x0000000000000000]              
	struct FVector                                     CachedObjectPosition;                             		// 0x00C0 (0x000C) [0x0000000000000000]              
	class UAkEvent*                                    StopPlayEvent;                                    		// 0x00CC (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             CustomRTPCNames;                                  		// 0x00D4 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3119 ];

		return pClassPointer;
	};

	void IsPlaying ( );
	void SetRTPCValue ( );
	void PlayEvent ( );
	void StopEvents ( );
};

UClass* UAkComponent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkEvent
// 0x0010 (0x00D0 - 0x00C0)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray< struct FAkEventTrackKey >                  AkEvents;                                         		// 0x00C0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3121 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkRTPC
// 0x0010 (0x00E8 - 0x00D8)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x00D8 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3123 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkRTPC::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0064 - 0x0060)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x0060 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3125 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0060 - 0x0060)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3127 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkRTPC::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0150 - 0x0150)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3129 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkClearBanks::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 (0x0178 - 0x0168)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	DWORD                                              Async : 1;                                        		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bWaitingCallback : 1;                             		// 0x0168 (0x0004) [0x0000000000000000] [0x00000002] 
	class UAkBank*                                     Bank;                                             		// 0x016C (0x0008) [0x0000000000000000]              
	int                                                Signal;                                           		// 0x0174 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3131 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkLoadBank::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostEvent
// 0x0010 (0x0178 - 0x0168)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	DWORD                                              bReplicateToClients : 1;                          		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent*                                    Event;                                            		// 0x0170 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3133 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostEvent::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0010 (0x0160 - 0x0150)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x0150 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3135 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostTrigger::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0180 - 0x0168)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x0168 (0x0010) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0178 (0x0004) [0x0000000000000000]              
	DWORD                                              Running : 1;                                      		// 0x017C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3137 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetRTPCValue::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0170 - 0x0150)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x0150 (0x0010) [0x0000000000000000]              
	struct FString                                     State;                                            		// 0x0160 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3139 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetState::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0170 - 0x0150)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x0150 (0x0010) [0x0000000000000000]              
	struct FString                                     Switch;                                           		// 0x0160 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3141 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetSwitch::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0150 - 0x0150)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3143 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkStartAmbientSound::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0150 - 0x0150)
class USeqAct_AkStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3145 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkStopAll::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif