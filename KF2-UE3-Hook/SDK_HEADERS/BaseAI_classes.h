/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BaseAI_classes.h
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

#define CONST_kBreadCrumbsMax                                    10

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum BaseAI.AIDebugTool.ELogDrawingMode
/*enum ELogDrawingMode
{
	AIDH_DrawAll                                       = 0,
	AIDH_EntryDetails                                  = 1,
	AIDH_BlackBoard                                    = 2,
	AIDH_Preconditions                                 = 3,
	AIDH_SquadEnemy                                    = 4,
	AIDH_Animation                                     = 5,
	AIDH_Weapon                                        = 6,
	AIDH_MAX                                           = 7
};*/

// Enum BaseAI.BaseAITypes.EDebugLineType
/*enum EDebugLineType
{
	DLT_Generic                                        = 0,
	DLT_InstantFire                                    = 1,
	DLT_NoPath                                         = 2,
	DLT_LeaderFollowing                                = 3,
	DLT_Failed                                         = 4,
	DLT_Red                                            = 5,
	DLT_Green                                          = 6,
	DLT_Blue                                           = 7,
	DLT_MAX                                            = 8
};*/

// Enum BaseAI.BaseAITypes.EBTResult
/*enum EBTResult
{
	BTR_Error                                          = 0,
	BTR_Abort                                          = 1,
	BTR_Fail                                           = 2,
	BTR_Success                                        = 3,
	BTR_NotFinished                                    = 4,
	BTR_MAX                                            = 5
};*/

// Enum BaseAI.BaseAITypes.EWSSymbolicAngle
/*enum EWSSymbolicAngle
{
	WSSA_Front                                         = 0,
	WSSA_Side                                          = 1,
	WSSA_Back                                          = 2,
	WSSA_Unknown                                       = 3,
	WSSA_MAX                                           = 4
};*/

// Enum BaseAI.BaseAITypes.EWSPerceptionMode
/*enum EWSPerceptionMode
{
	WSPM_None                                          = 0,
	WSPM_Memory                                        = 1,
	WSPM_Belief                                        = 2,
	WSPM_Hearing                                       = 3,
	WSPM_Sight                                         = 4,
	WSPM_MAX                                           = 5
};*/

// Enum BaseAI.BaseAITypes.EBaseMoveType
/*enum EBaseMoveType
{
	BMT_Invalid                                        = 0,
	BMT_Normal                                         = 1,
	BMT_Combat                                         = 2,
	BMT_Careful                                        = 3,
	BMT_Pain                                           = 4,
	BMT_MAX                                            = 5
};*/

// Enum BaseAI.BaseAITypes.EBaseMoveMood
/*enum EBaseMoveMood
{
	BMM_Invalid                                        = 0,
	BMM_Static                                         = 1,
	BMM_Slow                                           = 2,
	BMM_Normal                                         = 3,
	BMM_Fast                                           = 4,
	BMM_MAX                                            = 5
};*/

// Enum BaseAI.BaseAITypes.EActionPriority
/*enum EActionPriority
{
	AP_Invalid                                         = 0,
	AP_Logic                                           = 1,
	AP_Kismet                                          = 2,
	AP_Reaction                                        = 3,
	AP_MAX                                             = 4
};*/

// Enum BaseAI.AIPluginMovement.EMoveRequestDestinationType
/*enum EMoveRequestDestinationType
{
	MRDT_Invalid                                       = 0,
	MRDT_Vector                                        = 1,
	MRDT_Actor                                         = 2,
	MRDT_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class BaseAI.BaseAIController
// 0x00A4 (0x054C - 0x04A8)
class ABaseAIController : public AGameAIController
{
public:
	class ABaseAIPawn*                                 MyBaseAIPawn;                                     		// 0x04A8 (0x0008) [0x0000000000000000]              
	class ABaseAISquad*                                BaseSquad;                                        		// 0x04B0 (0x0008) [0x0000000000000000]              
	TArray< class UAITickablePlugin* >                 TickablePlugins;                                  		// 0x04B8 (0x0010) [0x0000000000000000]              
	class UPluginSquad*                                SquadPlugin;                                      		// 0x04C8 (0x0008) [0x0000000000000000]              
	class UAIPluginMovement*                           MovementPlugin;                                   		// 0x04D0 (0x0008) [0x0000000000000000]              
	class UClass*                                      MovementPluginClass;                              		// 0x04D8 (0x0008) [0x0000000000000000]              
	class UAIPluginLeap*                               LeapPlugin;                                       		// 0x04E0 (0x0008) [0x0000000000000000]              
	class UClass*                                      LeapPluginClass;                                  		// 0x04E8 (0x0008) [0x0000000000000000]              
	class UAIPluginStuckFix*                           StuckFixPlugin;                                   		// 0x04F0 (0x0008) [0x0000000000000000]              
	class UClass*                                      StuckFixPluginClass;                              		// 0x04F8 (0x0008) [0x0000000000000000]              
	class UBaseAiPlugInHistory*                        MyAiPlugInHistory;                                		// 0x0500 (0x0008) [0x0000000000000000]              
	DWORD                                              bUsePerceptionHearing : 1;                        		// 0x0508 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bAlwaysAssignEnemy : 1;                           		// 0x0508 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bUseNavMesh : 1;                                  		// 0x0508 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bUsePluginsForMovement : 1;                       		// 0x0508 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              LastEnemySightedTime;                             		// 0x050C (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            TargetList;                                       		// 0x0510 (0x0010) [0x0000000000000000]              
	TArray< class AActor* >                            ProhibitedTargetList;                             		// 0x0520 (0x0010) [0x0000000000000000]              
	class ABaseAIPawn*                                 SquadAssignedTarget;                              		// 0x0530 (0x0008) [0x0000000000000000]              
	TArray< struct FLocalEnemyInfo >                   LocalEnemyList;                                   		// 0x0538 (0x0010) [0x0000000000000000]              
	int                                                PlugInHistoryNum;                                 		// 0x0548 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2833 ];

		return pClassPointer;
	};

	void DrawDebugTextToHud ( );
	void DrawEnemyPerception ( );
	void StopMovement ( );
	void NotifyKilled ( );
	void SelectTarget ( );
	void SelectEnemy ( );
	void eventSetEnemy ( );
	void SelectTargetInternal ( );
	void UpdateEnemyPerception ( );
	void IsFriendly ( );
	void IsFriendlyPawn ( );
	void RemoveAllEnemies ( );
	void RemoveEnemy ( );
	void BroadcastEnemyKnowledge ( );
	void GetTimeSince ( );
	void GetAiPlugInHistory ( );
	void Cleanup ( );
	void UpdateEnemyAngle ( );
	void UpdateEnemyRange ( );
	void PawnDied ( );
	void eventPossess ( );
	void eventInitializeAIClass ( );
};

UClass* ABaseAIController::pClassPointer = NULL;

// Class BaseAI.BaseAIPawn
// 0x00B8 (0x0614 - 0x055C)
class ABaseAIPawn : public AGamePawn
{
public:
	class ABaseAIController*                           MyBaseAI;                                         		// 0x055C (0x0008) [0x0000000000000000]              
	unsigned char                                      LastTeamNum;                                      		// 0x0564 (0x0001) [0x0000000000000000]              
	unsigned char                                      MyAIType;                                         		// 0x0565 (0x0001) [0x0000000000000000]              
	struct FBreadcrumbs                                MyBreadCrumbs;                                    		// 0x0568 (0x0080) [0x0000000000000000]              
	TArray< class ABaseAIPawn* >                       Attackers;                                        		// 0x05E8 (0x0010) [0x0000000000000000]              
	TArray< int >                                      AttackersPerTypeCount;                            		// 0x05F8 (0x0010) [0x0000000000000000]              
	DWORD                                              bLeaping : 1;                                     		// 0x0608 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimeStartedLeap;                                  		// 0x060C (0x0004) [0x0000000000000000]              
	float                                              TimeImmuneWhileLeaping;                           		// 0x0610 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2837 ];

		return pClassPointer;
	};

	void DrawCrumbs ( );
	void RemoveAttacker ( );
	void GetAttackerCount ( );
	void NotifyTeamChanged ( );
	void UnPossessed ( );
	void PossessedBy ( );
	void Died ( );
};

UClass* ABaseAIPawn::pClassPointer = NULL;

// Class BaseAI.BaseAISquad
// 0x001C (0x0260 - 0x0244)
class ABaseAISquad : public AInfo
{
public:
	class AController*                                 Leader;                                           		// 0x0244 (0x0008) [0x0000000000000000]              
	class AActor*                                      FormationCenter;                                  		// 0x024C (0x0008) [0x0000000000000000]              
	DWORD                                              bPlayerSquad : 1;                                 		// 0x0254 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bIsMP : 1;                                        		// 0x0254 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bSquadInCombat : 1;                               		// 0x0254 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              NextEnemySelectionTimestamp;                      		// 0x0258 (0x0004) [0x0000000000000000]              
	float                                              EnemySelectionInterval;                           		// 0x025C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2839 ];

		return pClassPointer;
	};

	void UpdateEnemySelection ( );
	void GetSquadCenterPawn ( );
	void GetSquadMembers ( );
	void GetSquadMemberCount ( );
	void UpdateLeader ( );
	void EnemyPerceivedBy ( );
	void NotifyKilled ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ABaseAISquad::pClassPointer = NULL;

// Class BaseAI.BaseAISubsystem
// 0x0038 (0x00A4 - 0x006C)
class UBaseAISubsystem : public UAISubsystem
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x006C (0x0008) [0x0000000000000000]              
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0074 (0x0008) [0x0000000000000000]              
	class UAIDebugTool*                                AIDebug;                                          		// 0x007C (0x0008) [0x0000000000000000]              
	TArray< class ABaseAISquad* >                      Squads;                                           		// 0x0084 (0x0010) [0x0000000000000000]              
	TArray< int >                                      TeamSizes;                                        		// 0x0094 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2841 ];

		return pClassPointer;
	};

	void NotifyKilled ( );
	void GetEnemyTeamsSize ( );
	void GetTeamSize ( );
	void DecreaseTeamSize ( );
	void IncreaseTeamSize ( );
	void UnRegisterSquad ( );
	void RegisterSquad ( );
	void GetAIDebugTool ( );
	void GetInstance ( );
};

UClass* UBaseAISubsystem::pClassPointer = NULL;

// Class BaseAI.CodeSpeedTestCommandlet
// 0x0008 (0x00BC - 0x00B4)
class UCodeSpeedTestCommandlet : public UCommandlet
{
public:
	class UObject*                                     CurrentPackage;                                   		// 0x00B4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2843 ];

		return pClassPointer;
	};

};

UClass* UCodeSpeedTestCommandlet::pClassPointer = NULL;

// Class BaseAI.LatentActionObserver
// 0x0000 (0x0060 - 0x0060)
class ULatentActionObserver : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2845 ];

		return pClassPointer;
	};

	void OnLatentFinished ( );
};

UClass* ULatentActionObserver::pClassPointer = NULL;

// Class BaseAI.BaseAITypes
// 0x0000 (0x0060 - 0x0060)
class UBaseAITypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2847 ];

		return pClassPointer;
	};

};

UClass* UBaseAITypes::pClassPointer = NULL;

// Class BaseAI.BaseAiPlugInHistory
// 0x001C (0x007C - 0x0060)
class UBaseAiPlugInHistory : public UObject
{
public:
	TArray< struct FBaseAIPlugInHistoryItem >          PlugInHistory;                                    		// 0x0060 (0x0010) [0x0000000000000000]              
	int                                                PlugInHistoryNum;                                 		// 0x0070 (0x0004) [0x0000000000000000]              
	class ABaseAIController*                           CtrlOwner;                                        		// 0x0074 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2849 ];

		return pClassPointer;
	};

	void DrawDebugToHud ( );
	void eventSetup ( );
};

UClass* UBaseAiPlugInHistory::pClassPointer = NULL;

// Class BaseAI.PluginBase
// 0x003C (0x009C - 0x0060)
class UPluginBase : public UObject
{
public:
	class UPlugInOwnerInterface*                       PlugInOwner;                                      		// 0x0060 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0068 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	DWORD                                              bIsPluginEnabled : 1;                             		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bAborted : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bFailure : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bSuccess : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	class UBaseAiPlugInHistory*                        OwnersAiPlugInHistory;                            		// 0x0074 (0x0008) [0x0000000000000000]              
	struct FString                                     HistoryString;                                    		// 0x007C (0x0010) [0x0000000000000000]              
	struct FString                                     StatusStr;                                        		// 0x008C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2851 ];

		return pClassPointer;
	};

	void eventGetDebugVerboseText ( );
	void UpdateHistoryString ( );
	void UpdateCommandHistory ( );
	void eventDrawDebug ( );
	void eventScriptInitialize ( );
	void DrawDebugToHud ( );
	void EnablePlugin ( );
	void DisablePlugin ( );
};

UClass* UPluginBase::pClassPointer = NULL;

// Class BaseAI.AIPlugin
// 0x000C (0x00A8 - 0x009C)
class UAIPlugin : public UPluginBase
{
public:
	class ABaseAIController*                           MyBaseAIController;                               		// 0x009C (0x0008) [0x0000000000000000]              
	DWORD                                              bCustomSetupController : 1;                       		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2853 ];

		return pClassPointer;
	};

	void eventScriptSetUp ( );
};

UClass* UAIPlugin::pClassPointer = NULL;

// Class BaseAI.AITickablePlugin
// 0x0008 (0x00B0 - 0x00A8)
class UAITickablePlugin : public UAIPlugin
{
public:
	float                                              LatentTime;                                       		// 0x00A8 (0x0004) [0x0000000000000000]              
	DWORD                                              bTickingEnabled : 1;                              		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2855 ];

		return pClassPointer;
	};

	void NotifyNpcInGrannyMode ( );
	void NotifyNpcTerminallyStuck ( );
	void eventScriptTick ( );
	void Sleep ( );
};

UClass* UAITickablePlugin::pClassPointer = NULL;

// Class BaseAI.AIPluginLeap
// 0x008C (0x013C - 0x00B0)
class UAIPluginLeap : public UAITickablePlugin
{
public:
	class AActor*                                      BaseForLanding;                                   		// 0x00B0 (0x0008) [0x0000000000000000]              
	struct FVector                                     LeapDirection;                                    		// 0x00B8 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocationAtStartOfLeap;                            		// 0x00C4 (0x000C) [0x0000000000000000]              
	struct FVector                                     ClosestLocOnEdge;                                 		// 0x00D0 (0x000C) [0x0000000000000000]              
	struct FVector                                     ExpectedLandingLoc;                               		// 0x00DC (0x000C) [0x0000000000000000]              
	unsigned char                                      ActionPriority;                                   		// 0x00E8 (0x0001) [0x0000000000000000]              
	DWORD                                              bObserverNotified : 1;                            		// 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDontNotifyObserver : 1;                          		// 0x00EC (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bDontRestartByKismet : 1;                         		// 0x00EC (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bCollisionOffPhase : 1;                           		// 0x00EC (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bConfigOnlyTraceUp : 1;                           		// 0x00EC (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bWantTotalMovementControl : 1;                    		// 0x00EC (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              ConfigFactorToIncreaseCalcedLeapVolBy;            		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              ConfigFactorToIncreasePlottedLeapVolBy;           		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              ConfigFactorToReduceLeapProjectionSizeBy;         		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              ConfigDistanceOutFromDropEdgeToCalcDropLoc;       		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              PercentageOfLeapImmuneFromCollision;              		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              ConfigPercentageOfLeapImmuneFromCollision;        		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              ConfigDesiredLeapSpeed;                           		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              ConfigMinSpeedAllowed;                            		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              ConfigMaxSpeedAllowed;                            		// 0x0110 (0x0004) [0x0000000000000000]              
	float                                              ConfigBaseLeapZ;                                  		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              ConfigDesiredZPct;                                		// 0x0118 (0x0004) [0x0000000000000000]              
	struct FLeapRequest                                MyLeapRequest;                                    		// 0x011C (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2857 ];

		return pClassPointer;
	};

	void NotifyLanded ( );
	void GetJumpVelForUsingJumpDownNavPointPathObject ( );
	void GetJumpVelForDropEdge ( );
	void TurnMeOn ( );
	void HasPercentOfZDiffBeenCovered ( );
	void TestForTimeToTurnCollisionBackOn ( );
	void AbortMove ( );
	void Failure ( );
	void Success ( );
	void eventScriptCleanUp ( );
	void eventScriptCommonMovePreparation ( );
	void eventGetDumpString ( );
	void Leap ( );
};

UClass* UAIPluginLeap::pClassPointer = NULL;

// Class BaseAI.AIPluginMovement
// 0x0078 (0x0128 - 0x00B0)
class UAIPluginMovement : public UAITickablePlugin
{
public:
	struct FMovementRequest                            MoveRequest;                                      		// 0x00B0 (0x0068) [0x0000000000000000]              
	float                                              GoalDistanceSq;                                   		// 0x0118 (0x0004) [0x0000000000000000]              
	unsigned char                                      ActionPriority;                                   		// 0x011C (0x0001) [0x0000000000000000]              
	unsigned char                                      MovementLock;                                     		// 0x011D (0x0001) [0x0000000000000000]              
	DWORD                                              bObserverNotified : 1;                            		// 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDontNotifyObserver : 1;                          		// 0x0120 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bDontRestartByKismet : 1;                         		// 0x0120 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              MinimumSuccessDistance;                           		// 0x0124 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2859 ];

		return pClassPointer;
	};

	void MoveUnreachable ( );
	void StopMovement ( );
	void GetDestinationType ( );
	void GetDestination ( );
	void RePath ( );
	void Failure ( );
	void Success ( );
	void SetMovementLock ( );
	void AbortMove ( );
	void FollowPlugInsPath ( );
	void MoveToActorRequest ( );
	void MoveToPointRequest ( );
	void MoveToRequest ( );
};

UClass* UAIPluginMovement::pClassPointer = NULL;

// Class BaseAI.AIPluginStuckFix
// 0x005C (0x010C - 0x00B0)
class UAIPluginStuckFix : public UAITickablePlugin
{
public:
	struct FFixStuckRequest                            MoveRequest;                                      		// 0x00B0 (0x0054) [0x0000000000000000]              
	unsigned char                                      ActionPriority;                                   		// 0x0104 (0x0001) [0x0000000000000000]              
	unsigned char                                      MovementLock;                                     		// 0x0105 (0x0001) [0x0000000000000000]              
	DWORD                                              bObserverNotified : 1;                            		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDontNotifyObserver : 1;                          		// 0x0108 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bDontRestartByKismet : 1;                         		// 0x0108 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2861 ];

		return pClassPointer;
	};

	void MoveUnreachable ( );
	void StopMovement ( );
	void GetDestinationType ( );
	void GetDestination ( );
	void Failure ( );
	void Success ( );
	void SetMovementLock ( );
	void eventAbortMove ( );
	void StuckFixToActorRequest ( );
	void StuckFixToPointRequest ( );
};

UClass* UAIPluginStuckFix::pClassPointer = NULL;

// Class BaseAI.PluginSquad
// 0x0008 (0x00B0 - 0x00A8)
class UPluginSquad : public UAIPlugin
{
public:
	class ABaseAISquad*                                Squad;                                            		// 0x00A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2863 ];

		return pClassPointer;
	};

	void EnemyPerceived ( );
};

UClass* UPluginSquad::pClassPointer = NULL;

// Class BaseAI.PlayerInputRecorder
// 0x0000 (0x0060 - 0x0060)
class UPlayerInputRecorder : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2865 ];

		return pClassPointer;
	};

	void StopReplay ( );
	void Replay ( );
	void StopRecording ( );
	void StartRecording ( );
};

UClass* UPlayerInputRecorder::pClassPointer = NULL;

// Class BaseAI.AIDebugTool
// 0x00D0 (0x0130 - 0x0060)
class UAIDebugTool : public UObject
{
public:
	float                                              GameFrameTime;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                BTPersonalLogSize;                                		// 0x0064 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           BTPersonalLog;                                    		// 0x0068 (0x0010) [0x0000000000000000]              
	class ABaseAIController*                           DebugTarget;                                      		// 0x0078 (0x0008) [0x0000000000000000]              
	int                                                EntryToDisplay;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             Filters;                                          		// 0x0084 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             ColorCategories;                                  		// 0x0094 (0x0010) [0x0000000000000000]              
	TArray< class AActor* >                            UnreachableActors;                                		// 0x00A4 (0x0010) [0x0000000000000000]              
	int                                                DrawingFlags;                                     		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FETQDebugEntry                              CurrentETQLog;                                    		// 0x00B8 (0x0014) [0x0000000000000000]              
	TArray< struct FETQDebugEntry >                    ETQLogHistory;                                    		// 0x00CC (0x0010) [0x0000000000000000]              
	DWORD                                              bLoadOldLogs : 1;                                 		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      LoggingContext;                                   		// 0x00E0 (0x0008) [0x0000000000000000]              
	struct FMap_Mirror                                 Logs;                                             		// 0x00E8 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2867 ];

		return pClassPointer;
	};

	void DumpNativeCallStack ( );
	void GetActorEntryLocation ( );
	void AddBTLogEntry ( );
	void FlushETQHistory ( );
	void AddETQLog ( );
	void FlushUnreachableActors ( );
	void LogUnreachableActor ( );
	void ClearHistoryColor ( );
	void ColorHistory ( );
	void ClearHistoryFilter ( );
	void SetHistoryFilter ( );
	void ToggleLogDrawingMode ( );
	void DisplayNextEntry ( );
	void SetContext ( );
	void LogSpaceLine ( );
	void Log ( );
	void SetDebugTarget ( );
	void FlushLogs ( );
	void LoadLogFile ( );
	void DrawLog ( );
};

UClass* UAIDebugTool::pClassPointer = NULL;

// Class BaseAI.PlugInOwnerInterface
// 0x0000 (0x0060 - 0x0060)
class UPlugInOwnerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48154 ];

		return pClassPointer;
	};

	void GetTimeSince ( );
	void GetAiPlugInHistory ( );
};

UClass* UPlugInOwnerInterface::pClassPointer = NULL;

// Class BaseAI.NavigationPath
// 0x0134 (0x0194 - 0x0060)
class UNavigationPath : public UObject
{
public:
	TArray< struct FPathPoint >                        PathPoints;                                       		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FPolyArray_Mirror                           PolysUsed;                                        		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FBaseTransform                              Base;                                             		// 0x0080 (0x0100) [0x0000000000000000]              
	struct FVector                                     LocalDestination;                                 		// 0x0180 (0x000C) [0x0000000000000000]              
	DWORD                                              bDynamic : 1;                                     		// 0x018C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Version;                                          		// 0x0190 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48368 ];

		return pClassPointer;
	};

	void DrawPath ( );
	void WorldToLocal ( );
	void SetRoute ( );
	void GetElementPos ( );
};

UClass* UNavigationPath::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif