/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BaseAI_f_structs.h
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

// Function BaseAI.BaseAIController.DrawDebugTextToHud
// [0x00024000] 
struct ABaseAIController_execDrawDebugTextToHud_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Text;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FColor                                   TextColor;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.DrawEnemyPerception
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execDrawEnemyPerception_Parms
{
	// class UCanvas*                                  DrawCanvas;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.StopMovement
// [0x00024002] 
struct ABaseAIController_execStopMovement_Parms
{
	// unsigned char                                   ActionPriority;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.NotifyKilled
// [0x00020002] 
struct ABaseAIController_execNotifyKilled_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              Killed;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    KilledPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   damageTyp;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.SelectTarget
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execSelectTarget_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.SelectEnemy
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execSelectEnemy_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.SetEnemy
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct ABaseAIController_eventSetEnemy_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.SelectTargetInternal
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execSelectTargetInternal_Parms
{
	// DWORD                                           bOnlyFromTargetList : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.UpdateEnemyPerception
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct ABaseAIController_execUpdateEnemyPerception_Parms
{
	// DWORD                                           bSkipResponseDelay : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.IsFriendly
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execIsFriendly_Parms
{
	// class AController*                              TestPlayer;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.IsFriendlyPawn
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ABaseAIController_execIsFriendlyPawn_Parms
{
	// class APawn*                                    TestPlayer;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.RemoveAllEnemies
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execRemoveAllEnemies_Parms
{
};

// Function BaseAI.BaseAIController.RemoveEnemy
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execRemoveEnemy_Parms
{
	// class APawn*                                    EnemyPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.BroadcastEnemyKnowledge
// [0x00020400] ( FUNC_Native )
struct ABaseAIController_execBroadcastEnemyKnowledge_Parms
{
	// class APawn*                                    EnemyPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Perception;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.GetTimeSince
// [0x00020002] 
struct ABaseAIController_execGetTimeSince_Parms
{
	// float                                           Time2Test;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.GetAiPlugInHistory
// [0x00020002] 
struct ABaseAIController_execGetAiPlugInHistory_Parms
{
	// class UBaseAiPlugInHistory*                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.Cleanup
// [0x00024400] ( FUNC_Native )
struct ABaseAIController_execCleanup_Parms
{
	// DWORD                                           bBeingDestroyed : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.UpdateEnemyAngle
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ABaseAIController_execUpdateEnemyAngle_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.UpdateEnemyRange
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ABaseAIController_execUpdateEnemyRange_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.PawnDied
// [0x00020002] 
struct ABaseAIController_execPawnDied_Parms
{
	// class APawn*                                    inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAIController.Possess
// [0x00020802] ( FUNC_Event )
struct ABaseAIController_eventPossess_Parms
{
	// class APawn*                                    inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIController.InitializeAIClass
// [0x00020800] ( FUNC_Event )
struct ABaseAIController_eventInitializeAIClass_Parms
{
};

// Function BaseAI.BaseAIPawn.DrawCrumbs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ABaseAIPawn_execDrawCrumbs_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAIPawn.RemoveAttacker
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ABaseAIPawn_execRemoveAttacker_Parms
{
	// class ABaseAIPawn*                              Attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAIPawn.GetAttackerCount
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct ABaseAIPawn_execGetAttackerCount_Parms
{
	// int                                             AIType;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAIPawn.NotifyTeamChanged
// [0x00020102] 
struct ABaseAIPawn_execNotifyTeamChanged_Parms
{
};

// Function BaseAI.BaseAIPawn.UnPossessed
// [0x00020002] 
struct ABaseAIPawn_execUnPossessed_Parms
{
};

// Function BaseAI.BaseAIPawn.PossessedBy
// [0x00020002] 
struct ABaseAIPawn_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAIPawn.Died
// [0x00020002] 
struct ABaseAIPawn_execDied_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAISquad.UpdateEnemySelection
// [0x00020400] ( FUNC_Native )
struct ABaseAISquad_execUpdateEnemySelection_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAISquad.GetSquadCenterPawn
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ABaseAISquad_execGetSquadCenterPawn_Parms
{
	// class ABaseAIPawn*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAISquad.GetSquadMembers
// [0x00420400] ( FUNC_Native )
struct ABaseAISquad_execGetSquadMembers_Parms
{
	// TArray< class ABaseAIPawn* >                    Members;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAISquad.GetSquadMemberCount
// [0x00020400] ( FUNC_Native )
struct ABaseAISquad_execGetSquadMemberCount_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAISquad.UpdateLeader
// [0x00020400] ( FUNC_Native )
struct ABaseAISquad_execUpdateLeader_Parms
{
	// class AController*                              inLeader;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAISquad.EnemyPerceivedBy
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct ABaseAISquad_execEnemyPerceivedBy_Parms
{
	// class AController*                              Member;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   PerceptionType;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
	// class APawn*                                    Enemy;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAISquad.NotifyKilled
// [0x00020400] ( FUNC_Native )
struct ABaseAISquad_execNotifyKilled_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              Killed;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    KilledPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.BaseAISquad.Destroyed
// [0x00020802] ( FUNC_Event )
struct ABaseAISquad_eventDestroyed_Parms
{
};

// Function BaseAI.BaseAISquad.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ABaseAISquad_eventPostBeginPlay_Parms
{
};

// Function BaseAI.BaseAISubsystem.NotifyKilled
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execNotifyKilled_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              KilledController;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    KilledPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.GetEnemyTeamsSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execGetEnemyTeamsSize_Parms
{
	// unsigned char                                   TeamID;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.GetTeamSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execGetTeamSize_Parms
{
	// unsigned char                                   TeamID;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.DecreaseTeamSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execDecreaseTeamSize_Parms
{
	// unsigned char                                   TeamID;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.IncreaseTeamSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execIncreaseTeamSize_Parms
{
	// unsigned char                                   TeamID;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.UnRegisterSquad
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execUnRegisterSquad_Parms
{
	// class ABaseAISquad*                             Squad;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.RegisterSquad
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execRegisterSquad_Parms
{
	// class ABaseAISquad*                             Squad;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.GetAIDebugTool
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execGetAIDebugTool_Parms
{
	// class UAIDebugTool*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.BaseAISubsystem.GetInstance
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UBaseAISubsystem_execGetInstance_Parms
{
	// class UBaseAISubsystem*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.LatentActionObserver.OnLatentFinished
// [0x00020400] ( FUNC_Native )
struct ULatentActionObserver_execOnLatentFinished_Parms
{
	// class ABaseAIController*                        Observer;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UObject*                                  Action;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   FinishResult;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.BaseAiPlugInHistory.DrawDebugToHud
// [0x00820102] 
struct UBaseAiPlugInHistory_execDrawDebugToHud_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    Category;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             plugInCnt;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  canToUse;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FBaseAIPlugInHistoryItem                 plugInItem;                                       		// 0x001C (0x0034) [0x0000000000000000]              
};

// Function BaseAI.BaseAiPlugInHistory.Setup
// [0x00020802] ( FUNC_Event )
struct UBaseAiPlugInHistory_eventSetup_Parms
{
	// int                                             InPlugInHistoryNum;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABaseAIController*                        InCtrlOwner;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.PluginBase.GetDebugVerboseText
// [0x00020802] ( FUNC_Event )
struct UPluginBase_eventGetDebugVerboseText_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function BaseAI.PluginBase.UpdateHistoryString
// [0x00020002] 
struct UPluginBase_execUpdateHistoryString_Parms
{
	// struct FString                                  AddString;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function BaseAI.PluginBase.UpdateCommandHistory
// [0x00020002] 
struct UPluginBase_execUpdateCommandHistory_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.PluginBase.DrawDebug
// [0x00020800] ( FUNC_Event )
struct UPluginBase_eventDrawDebug_Parms
{
	// class AHUD*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    Category;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.PluginBase.ScriptInitialize
// [0x00020802] ( FUNC_Event )
struct UPluginBase_eventScriptInitialize_Parms
{
};

// Function BaseAI.PluginBase.DrawDebugToHud
// [0x00020100] 
struct UPluginBase_execDrawDebugToHud_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    Category;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.PluginBase.EnablePlugin
// [0x00020400] ( FUNC_Native )
struct UPluginBase_execEnablePlugin_Parms
{
};

// Function BaseAI.PluginBase.DisablePlugin
// [0x00020400] ( FUNC_Native )
struct UPluginBase_execDisablePlugin_Parms
{
};

// Function BaseAI.AIPlugin.ScriptSetUp
// [0x00020800] ( FUNC_Event )
struct UAIPlugin_eventScriptSetUp_Parms
{
};

// Function BaseAI.AITickablePlugin.NotifyNpcInGrannyMode
// [0x00020002] 
struct UAITickablePlugin_execNotifyNpcInGrannyMode_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AITickablePlugin.NotifyNpcTerminallyStuck
// [0x00020002] 
struct UAITickablePlugin_execNotifyNpcTerminallyStuck_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AITickablePlugin.ScriptTick
// [0x00020800] ( FUNC_Event )
struct UAITickablePlugin_eventScriptTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.AITickablePlugin.Sleep
// [0x00020409] ( FUNC_Final | FUNC_Native )
struct UAITickablePlugin_execSleep_Parms
{
	// float                                           Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.AIPluginLeap.NotifyLanded
// [0x00020000] 
struct UAIPluginLeap_execNotifyLanded_Parms
{
};

// Function BaseAI.AIPluginLeap.GetJumpVelForUsingJumpDownNavPointPathObject
// [0x00420000] 
struct UAIPluginLeap_execGetJumpVelForUsingJumpDownNavPointPathObject_Parms
{
	// float                                           TimeToReachLandLoc;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function BaseAI.AIPluginLeap.GetJumpVelForDropEdge
// [0x00420000] 
struct UAIPluginLeap_execGetJumpVelForDropEdge_Parms
{
	// float                                           TimeToReachLandLoc;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function BaseAI.AIPluginLeap.TurnMeOn
// [0x00020002] 
struct UAIPluginLeap_execTurnMeOn_Parms
{
};

// Function BaseAI.AIPluginLeap.HasPercentOfZDiffBeenCovered
// [0x00020000] 
struct UAIPluginLeap_execHasPercentOfZDiffBeenCovered_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginLeap.TestForTimeToTurnCollisionBackOn
// [0x00020002] 
struct UAIPluginLeap_execTestForTimeToTurnCollisionBackOn_Parms
{
	// float                                           TimeDelta;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.AIPluginLeap.AbortMove
// [0x00020400] ( FUNC_Native )
struct UAIPluginLeap_execAbortMove_Parms
{
	// DWORD                                           bNewRequest : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginLeap.Failure
// [0x00080400] ( FUNC_Native )
struct UAIPluginLeap_execFailure_Parms
{
};

// Function BaseAI.AIPluginLeap.Success
// [0x00080400] ( FUNC_Native )
struct UAIPluginLeap_execSuccess_Parms
{
};

// Function BaseAI.AIPluginLeap.ScriptCleanUp
// [0x00020802] ( FUNC_Event )
struct UAIPluginLeap_eventScriptCleanUp_Parms
{
};

// Function BaseAI.AIPluginLeap.ScriptCommonMovePreparation
// [0x00020802] ( FUNC_Event )
struct UAIPluginLeap_eventScriptCommonMovePreparation_Parms
{
	// unsigned char                                   Priority;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginLeap.GetDumpString
// [0x00020802] ( FUNC_Event )
struct UAIPluginLeap_eventGetDumpString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function BaseAI.AIPluginLeap.Leap
// [0x00420002] 
struct UAIPluginLeap_execLeap_Parms
{
	// struct FLeapRequest                             InLeapRequest;                                    		// 0x0000 (0x0020) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.MoveUnreachable
// [0x00020002] 
struct UAIPluginMovement_execMoveUnreachable_Parms
{
	// struct FVector                                  AttemptedDest;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   AttemptedTarget;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.StopMovement
// [0x00020000] 
struct UAIPluginMovement_execStopMovement_Parms
{
};

// Function BaseAI.AIPluginMovement.GetDestinationType
// [0x00020003] ( FUNC_Final )
struct UAIPluginMovement_execGetDestinationType_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.AIPluginMovement.GetDestination
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIPluginMovement_execGetDestination_Parms
{
	// struct FMovementRequest                         Request;                                          		// 0x0000 (0x0068) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0068 (0x000C) [0x0000000000000000]              
};

// Function BaseAI.AIPluginMovement.RePath
// [0x00020400] ( FUNC_Native )
struct UAIPluginMovement_execRePath_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.Failure
// [0x00080400] ( FUNC_Native )
struct UAIPluginMovement_execFailure_Parms
{
};

// Function BaseAI.AIPluginMovement.Success
// [0x00080400] ( FUNC_Native )
struct UAIPluginMovement_execSuccess_Parms
{
};

// Function BaseAI.AIPluginMovement.SetMovementLock
// [0x00024400] ( FUNC_Native )
struct UAIPluginMovement_execSetMovementLock_Parms
{
	// DWORD                                           bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   Priority;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	// DWORD                                           bNewRequest : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.AbortMove
// [0x00020400] ( FUNC_Native )
struct UAIPluginMovement_execAbortMove_Parms
{
	// DWORD                                           bNewRequest : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.FollowPlugInsPath
// [0x00024400] ( FUNC_Native )
struct UAIPluginMovement_execFollowPlugInsPath_Parms
{
	// class UNavigationPath*                          InPath;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   CommandPriority;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	// class UObject*                                  ActionObserver;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           bStopAtEnd : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   RotateAtEndToMatch;                               		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           AcceptableDistance;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.MoveToActorRequest
// [0x00024400] ( FUNC_Native )
struct UAIPluginMovement_execMoveToActorRequest_Parms
{
	// class AActor*                                   inPawnGoal;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   CommandPriority;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	// class UObject*                                  ActionObserver;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           bInAllowedToFire : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           AcceptableDistance;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DestOffset;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  MidPointOffset;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	// DWORD                                           bDynamicMidPoint : 1;                             		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bStopAtEnd : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bStickToNavmesh : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.MoveToPointRequest
// [0x00024400] ( FUNC_Native )
struct UAIPluginMovement_execMoveToPointRequest_Parms
{
	// struct FVector                                  InDestLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	// unsigned char                                   CommandPriority;                                  		// 0x000C (0x0001) [0x0000000000000000]              
	// class UObject*                                  ActionObserver;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bStopAtEnd : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bStickToNavmesh : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           AcceptableDistance;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// class AActor*                                   RotateAtEndToMatch;                               		// 0x0024 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginMovement.MoveToRequest
// [0x00420400] ( FUNC_Native )
struct UAIPluginMovement_execMoveToRequest_Parms
{
	// struct FMovementRequest                         Request;                                          		// 0x0000 (0x0068) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginStuckFix.MoveUnreachable
// [0x00020002] 
struct UAIPluginStuckFix_execMoveUnreachable_Parms
{
	// struct FVector                                  AttemptedDest;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   AttemptedTarget;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginStuckFix.StopMovement
// [0x00020000] 
struct UAIPluginStuckFix_execStopMovement_Parms
{
};

// Function BaseAI.AIPluginStuckFix.GetDestinationType
// [0x00020003] ( FUNC_Final )
struct UAIPluginStuckFix_execGetDestinationType_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.AIPluginStuckFix.GetDestination
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UAIPluginStuckFix_execGetDestination_Parms
{
	// struct FMovementRequest                         Request;                                          		// 0x0000 (0x0068) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0068 (0x000C) [0x0000000000000000]              
};

// Function BaseAI.AIPluginStuckFix.Failure
// [0x00080000] 
struct UAIPluginStuckFix_execFailure_Parms
{
};

// Function BaseAI.AIPluginStuckFix.Success
// [0x00080000] 
struct UAIPluginStuckFix_execSuccess_Parms
{
};

// Function BaseAI.AIPluginStuckFix.SetMovementLock
// [0x00024000] 
struct UAIPluginStuckFix_execSetMovementLock_Parms
{
	// DWORD                                           bLock : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   Priority;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	// DWORD                                           bNewRequest : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginStuckFix.AbortMove
// [0x00020800] ( FUNC_Event )
struct UAIPluginStuckFix_eventAbortMove_Parms
{
	// DWORD                                           bNewRequest : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginStuckFix.StuckFixToActorRequest
// [0x00024000] 
struct UAIPluginStuckFix_execStuckFixToActorRequest_Parms
{
	// class AActor*                                   inPawnGoal;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   CommandPriority;                                  		// 0x0008 (0x0001) [0x0000000000000000]              
	// class UObject*                                  ActionObserver;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           bInAllowedToFire : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           AcceptableDistance;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DestOffset;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  MidPointOffset;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	// DWORD                                           bDynamicMidPoint : 1;                             		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bStopAtEnd : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bStickToNavmesh : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIPluginStuckFix.StuckFixToPointRequest
// [0x00024000] 
struct UAIPluginStuckFix_execStuckFixToPointRequest_Parms
{
	// struct FVector                                  InDestLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	// unsigned char                                   CommandPriority;                                  		// 0x000C (0x0001) [0x0000000000000000]              
	// class UObject*                                  ActionObserver;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bStopAtEnd : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bStickToNavmesh : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           AcceptableDistance;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// class AActor*                                   RotateAtEndToMatch;                               		// 0x0024 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.PluginSquad.EnemyPerceived
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPluginSquad_execEnemyPerceived_Parms
{
	// unsigned char                                   PerceptionType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	// class APawn*                                    PerceivedEnemy;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.PlayerInputRecorder.StopReplay
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UPlayerInputRecorder_execStopReplay_Parms
{
};

// Function BaseAI.PlayerInputRecorder.Replay
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UPlayerInputRecorder_execReplay_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function BaseAI.PlayerInputRecorder.StopRecording
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UPlayerInputRecorder_execStopRecording_Parms
{
};

// Function BaseAI.PlayerInputRecorder.StartRecording
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UPlayerInputRecorder_execStartRecording_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.DumpNativeCallStack
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execDumpNativeCallStack_Parms
{
	// class AActor*                                   Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    LogCategory;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.GetActorEntryLocation
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execGetActorEntryLocation_Parms
{
	// class AActor*                                   inActor;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.AddBTLogEntry
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execAddBTLogEntry_Parms
{
	// struct FString                                  Entry;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.FlushETQHistory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execFlushETQHistory_Parms
{
};

// Function BaseAI.AIDebugTool.AddETQLog
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execAddETQLog_Parms
{
	// struct FString                                  QueryName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  TestName;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// class AActor*                                   Querier;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.FlushUnreachableActors
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execFlushUnreachableActors_Parms
{
};

// Function BaseAI.AIDebugTool.LogUnreachableActor
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execLogUnreachableActor_Parms
{
	// class AActor*                                   inActor;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.ClearHistoryColor
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execClearHistoryColor_Parms
{
};

// Function BaseAI.AIDebugTool.ColorHistory
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execColorHistory_Parms
{
	// struct FName                                    Filter;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.ClearHistoryFilter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execClearHistoryFilter_Parms
{
};

// Function BaseAI.AIDebugTool.SetHistoryFilter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execSetHistoryFilter_Parms
{
	// struct FName                                    Filter;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVal : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIDebugTool.ToggleLogDrawingMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execToggleLogDrawingMode_Parms
{
	// unsigned char                                   Mode;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.DisplayNextEntry
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execDisplayNextEntry_Parms
{
	// int                                             Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Direction;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.SetContext
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execSetContext_Parms
{
	// class AActor*                                   Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.LogSpaceLine
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execLogSpaceLine_Parms
{
	// class AActor*                                   Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Start;                                            		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  End;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// unsigned char                                   Type;                                             		// 0x0020 (0x0001) [0x0000000000000000]              
	// struct FString                                  Comment;                                          		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FName                                    Category;                                         		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.Log
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execLog_Parms
{
	// class AActor*                                   Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  LogText;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FName                                    LogCategory;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.SetDebugTarget
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execSetDebugTarget_Parms
{
	// class ABaseAIController*                        NewDebugTarget;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.FlushLogs
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execFlushLogs_Parms
{
	// struct FString                                  DirName;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// class ABaseAIController*                        AI;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.AIDebugTool.LoadLogFile
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execLoadLogFile_Parms
{
	// struct FString                                  Filename;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bAppendMapName : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.AIDebugTool.DrawLog
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UAIDebugTool_execDrawLog_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   Actor;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.PlugInOwnerInterface.GetTimeSince
// [0x00020000] 
struct UPlugInOwnerInterface_execGetTimeSince_Parms
{
	// float                                           Time2Test;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function BaseAI.PlugInOwnerInterface.GetAiPlugInHistory
// [0x00020000] 
struct UPlugInOwnerInterface_execGetAiPlugInHistory_Parms
{
	// class UBaseAiPlugInHistory*                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function BaseAI.NavigationPath.DrawPath
// [0x00024001] ( FUNC_Final )
struct UNavigationPath_execDrawPath_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   R;                                                		// 0x0008 (0x0001) [0x0000000000000000]              
	// unsigned char                                   G;                                                		// 0x0009 (0x0001) [0x0000000000000000]              
	// unsigned char                                   B;                                                		// 0x000A (0x0001) [0x0000000000000000]              
	// DWORD                                           bPersistent : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function BaseAI.NavigationPath.WorldToLocal
// [0x00020001] ( FUNC_Final )
struct UNavigationPath_execWorldToLocal_Parms
{
	// struct FVector                                  InLocation;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function BaseAI.NavigationPath.SetRoute
// [0x00020001] ( FUNC_Final )
struct UNavigationPath_execSetRoute_Parms
{
	// TArray< struct FPathPoint >                     Route;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function BaseAI.NavigationPath.GetElementPos
// [0x00020001] ( FUNC_Final )
struct UNavigationPath_execGetElementPos_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif