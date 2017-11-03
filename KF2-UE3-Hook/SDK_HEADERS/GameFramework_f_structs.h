/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_f_structs.h
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

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] ( FUNC_Final | FUNC_Event )
struct AGameAIController_eventGetActionString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ActionStr;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UGameAICommand*                           ActiveCmd;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] 
struct AGameAIController_execSetDesiredRotation_Parms
{
	// struct FRotator                                 TargetDesiredRotation;                            		// 0x0000 (0x000C) [0x0000000000000000]              
	// DWORD                                           InLockDesiredRotation : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           InUnlockWhenReached : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           InterpolationTime;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024802] ( FUNC_Event )
struct AGameAIController_eventAILog_Internal_Parms
{
	// struct FString                                  LogText;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FName                                    LogCategory;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForce : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           BugIt : 1;                                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bSkipExtraInfo : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Idx;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  ActionStr;                                        		// 0x0028 (0x0010) [0x0000000000000000]              
	// struct FString                                  FinalStr;                                         		// 0x0038 (0x0010) [0x0000000000000000]              
	// struct FString                                  Filename;                                         		// 0x0048 (0x0010) [0x0000000000000000]              
	// class UGameAICommand*                           ActiveCommand;                                    		// 0x0058 (0x0008) [0x0000000000000000]              
	// int                                             FileNameLength;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	// class UEngine*                                  Eng;                                              		// 0x0064 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] 
struct AGameAIController_execRecordDemoAILog_Parms
{
	// struct FString                                  LogText;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] ( FUNC_Event )
struct AGameAIController_eventDestroyed_Parms
{
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// [0x00020000] 
struct AGameAIController_execReachedIntermediateMoveGoal_Parms
{
};

// Function GameFramework.GameAIController.ReachedMoveGoal
// [0x00020000] 
struct AGameAIController_execReachedMoveGoal_Parms
{
};

// Function GameFramework.GameAIController.GetDestinationOffset
// [0x00020000] 
struct AGameAIController_execGetDestinationOffset_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] ( FUNC_Native )
struct AGameAIController_execGetAICommandInStack_Parms
{
	// class UClass*                                   InClass;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameAICommand*                           ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execFindCommandOfClass_Parms
{
	// class UClass*                                   SearchClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameAICommand*                           ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execDumpCommandStack_Parms
{
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execCheckCommandCount_Parms
{
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execGetActiveCommand_Parms
{
	// class UGameAICommand*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024400] ( FUNC_Native )
struct AGameAIController_execAbortCommand_Parms
{
	// class UGameAICommand*                           AbortCmd;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   AbortClass;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020400] ( FUNC_Native )
struct AGameAIController_execPopCommand_Parms
{
	// class UGameAICommand*                           ToBePoppedCommand;                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020400] ( FUNC_Native )
struct AGameAIController_execPushCommand_Parms
{
	// class UGameAICommand*                           NewCommand;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.AllCommands
// [0x00420405] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execAllCommands_Parms
{
	// class UClass*                                   BaseClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameAICommand*                           Cmd;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] 
struct AGamePawn_execReattachMeshWithoutBeingSeen_Parms
{
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] 
struct AGamePawn_execReattachMesh_Parms
{
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] ( FUNC_Event )
struct AGamePawn_eventUpdateShadowSettings_Parms
{
	// DWORD                                           bInWantShadow : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bNewCastShadow : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bNewCastDynamicShadow : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICommand.HandlePathObstruction
// [0x00020002] 
struct UGameAICommand_execHandlePathObstruction_Parms
{
	// class AActor*                                   BlockedBy;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICommand.MoveUnreachable
// [0x00020000] 
struct UGameAICommand_execMoveUnreachable_Parms
{
	// struct FVector                                  AttemptedDest;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   AttemptedTarget;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
// [0x00020000] 
struct UGameAICommand_execNotifyNeedRepath_Parms
{
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
// [0x00020800] ( FUNC_Event )
struct UGameAICommand_eventGetDebugVerboseText_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] 
struct UGameAICommand_execGetDebugOverheadText_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FString >                        OutText;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] ( FUNC_Event )
struct UGameAICommand_eventDrawDebug_Parms
{
	// class AHUD*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    Category;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] ( FUNC_Event )
struct UGameAICommand_eventGetDumpString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] 
struct UGameAICommand_execResumed_Parms
{
	// struct FName                                    OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] 
struct UGameAICommand_execPaused_Parms
{
	// class UGameAICommand*                           NewCommand;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] 
struct UGameAICommand_execPopped_Parms
{
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] 
struct UGameAICommand_execPushed_Parms
{
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] 
struct UGameAICommand_execPostPopped_Parms
{
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] 
struct UGameAICommand_execPrePushed_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] 
struct UGameAICommand_execAllowStateTransitionTo_Parms
{
	// struct FName                                    StateName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] 
struct UGameAICommand_execAllowTransitionTo_Parms
{
	// class UClass*                                   AttemptCommand;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] 
struct UGameAICommand_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGameAICommand_execShouldIgnoreNotifies_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalResumed_Parms
{
	// struct FName                                    OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalPaused_Parms
{
	// class UGameAICommand*                           NewCommand;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] ( FUNC_Event )
struct UGameAICommand_eventInternalPopped_Parms
{
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalPushed_Parms
{
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalPrePushed_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] 
struct UGameAICommand_execInitCommand_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGameAICommand*                           Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] 
struct UGameAICommand_execInitCommandUserActor_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   UserActor;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] 
struct AGamePlayerController_execClientColorFade_Parms
{
	// struct FColor                                   FadeColor;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   FromAlpha;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ToAlpha;                                          		// 0x0005 (0x0001) [0x0000000000000000]              
	// float                                           FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] ( FUNC_Event )
struct AGamePlayerController_eventWarmupPause_Parms
{
	// DWORD                                           bDesiredPauseState : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FColor                                   FadeColor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  MovieName;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] 
struct AGamePlayerController_execCanUnpauseWarmup_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AGamePlayerController_execGetCurrentMovie_Parms
{
	// struct FString                                  MovieName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct AGamePlayerController_eventClientStopMovie_Parms
{
	// float                                           DelayInSeconds;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bAllowMovieToFinish : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bForceStopNonSkippable : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bForceStopLoadingMovie : 1;                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct AGamePlayerController_eventClientPlayMovie_Parms
{
	// struct FString                                  MovieName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             InStartOfRenderingMovieFrame;                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             InEndOfRenderingMovieFrame;                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           bRestrictPausing : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bPlayOnceFromStream : 1;                          		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bOnlyBackButtonSkipsMovie : 1;                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AGamePlayerController_execKeepPlayingLoadingMovie_Parms
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AGamePlayerController_execShowLoadingMovie_Parms
{
	// DWORD                                           bShowMovie : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bPauseAfterHide : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           PauseDuration;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           KeepPlayingDuration;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bOverridePreviousDelays : 1;                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] 
struct AGamePlayerController_execSetSoundMode_Parms
{
	// struct FName                                    InSoundModeName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UAudioDevice*                             Audio;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bSet : 1;                                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] 
struct AGamePlayerController_execDoForceFeedbackForScreenShake_Parms
{
	// class UCameraShake*                             ShakeData;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ShakeLevel;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           RotMag;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           LocMag;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           FOVMag;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] ( FUNC_Event )
struct AGamePlayerController_eventNotifyCrowdAgentInRadius_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] ( FUNC_Event )
struct AGamePlayerController_eventNotifyCrowdAgentRefresh_Parms
{
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] ( FUNC_Exec )
struct AGamePlayerController_execCrowdDebug_Parms
{
	// DWORD                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AGameCrowdAgent*                          GCA;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             AgentCount;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           DebugRadius;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] ( FUNC_Native )
struct AGamePlayerController_execGetUIPlayerIndex_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// [0x00020002] 
struct AGamePlayerController_execOnToggleMouseCursor_Parms
{
	// class USeqAct_ToggleMouseCursor*                inAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameViewportClient*                      GVC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCheatManager.OnRequestComplete
// [0x00020002] 
struct UGameCheatManager_execOnRequestComplete_Parms
{
	// class UHttpRequestInterface*                    OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UHttpResponseInterface*                   Response;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< struct FString >                        Headers;                                          		// 0x0014 (0x0010) [0x0000000000000000]              
	// struct FString                                  Header;                                           		// 0x0024 (0x0010) [0x0000000000000000]              
	// struct FString                                  Payload;                                          		// 0x0034 (0x0010) [0x0000000000000000]              
	// int                                             PayloadIndex;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCheatManager.TestHttp
// [0x00024202] ( FUNC_Exec )
struct UGameCheatManager_execTestHttp_Parms
{
	// struct FString                                  Verb;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Payload;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  URL;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           bSendParallelRequest : 1;                         		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UHttpRequestInterface*                    R;                                                		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
// [0x00820002] 
struct UGameCheatManager_execEnableDebugCamera_Parms
{
	// DWORD                                           bEnableDebugText : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UPlayer*                                  P;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  eyeLoc;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 eyeRot;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           CameraFOVAngle;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// [0x00824202] ( FUNC_Exec )
struct UGameCheatManager_execTeleportPawnToCamera_Parms
{
	// DWORD                                           bToggleDebugCameraOff : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ADebugCameraController*                   DCC;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
// [0x00024202] ( FUNC_Exec )
struct UGameCheatManager_execToggleDebugCamera_Parms
{
	// DWORD                                           bDrawDebugText : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ADebugCameraController*                   DCC;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
// [0x00020002] 
struct UGameCheatManager_execPatchDebugCameraController_Parms
{
	// class UClass*                                   TempCameraControllerClass;                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
// [0x00020102] 
struct AGameCrowdAgent_execInitDebugColor_Parms
{
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] 
struct AGameCrowdAgent_execGetBehaviorString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  BehaviorString;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] 
struct AGameCrowdAgent_execGetDestString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  DestString;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct AGameCrowdAgent_eventPostRenderFor_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  CameraPosition;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraDir;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           NameXL;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           TextXL;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           BehavXL;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           TextYL;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FString                                  ScreenName;                                       		// 0x004C (0x0010) [0x0000000000000000]              
	// struct FString                                  DestString;                                       		// 0x005C (0x0010) [0x0000000000000000]              
	// struct FString                                  BehaviorString;                                   		// 0x006C (0x0010) [0x0000000000000000]              
	// struct FFontRenderInfo                          FontInfo;                                         		// 0x007C (0x0028) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
struct AGameCrowdAgent_execNativePostRenderFor_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  CameraPosition;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CameraDir;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
struct AGameCrowdAgent_eventGeneratePathToActor_Parms
{
	// class AActor*                                   Goal;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           WithinDistance;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           bAllowPartialPath : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NextDest;                                         		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventInitNavigationHandle_Parms
{
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] ( FUNC_Event )
struct AGameCrowdAgent_eventOverlappedActorEvent_Parms
{
	// class AActor*                                   A;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] 
struct AGameCrowdAgent_execTakeDamage_Parms
{
	// int                                             DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] ( FUNC_Event )
struct AGameCrowdAgent_eventFireDeathEvent_Parms
{
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] ( FUNC_Native )
struct AGameCrowdAgent_execPlayDeath_Parms
{
	// struct FVector                                  KillMomentum;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] ( FUNC_Event )
struct AGameCrowdAgent_eventUpdateIntermediatePoint_Parms
{
	// class AActor*                                   DestinationActor;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] 
struct AGameCrowdAgent_execCalcCamera_Parms
{
	// float                                           fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_CamLoc;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_CamRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           out_FOV;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           Radius;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] ( FUNC_Native )
struct AGameCrowdAgent_execIsIdle_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameCrowdAgent_execSetCurrentBehavior_Parms
{
	// class UGameCrowdAgentBehavior*                  BehaviorArchetype;                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventHandleBehaviorEvent_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AActor*                                   InInstigator;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           bViralCause : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bPropagateViralFlag : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bActivatedBehavior : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] 
struct AGameCrowdAgent_execActivateInstancedBehavior_Parms
{
	// class UGameCrowdAgentBehavior*                  NewBehaviorObject;                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00024802] ( FUNC_Event )
struct AGameCrowdAgent_eventActivateBehavior_Parms
{
	// class UGameCrowdAgentBehavior*                  NewBehaviorArchetype;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   LookAtActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] 
struct AGameCrowdAgent_execResetSeePlayer_Parms
{
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] 
struct AGameCrowdAgent_execTryRandomBehavior_Parms
{
	// DWORD                                           bFoundBehavior : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventNotifySeePlayer_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bFoundBehavior : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] 
struct AGameCrowdAgent_execPlaySpawnBehavior_Parms
{
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventHandlePotentialAgentEncounter_Parms
{
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] ( FUNC_Event )
struct AGameCrowdAgent_eventStopIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] ( FUNC_Event )
struct AGameCrowdAgent_eventPlayIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] 
struct AGameCrowdAgent_execOnPlayAgentAnimation_Parms
{
	// class USeqAct_PlayAgentAnimation*               Action;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00C20102] 
struct AGameCrowdAgent_execInitializeAgent_Parms
{
	// class AActor*                                   SpawnLoc;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FCrowdSpawnerPlayerInfo >        PlayerInfo;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
	// class AGameCrowdAgent*                          AgentTemplate;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UGameCrowdGroup*                          NewGroup;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
	// float                                           AgentWarmupTime;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	// DWORD                                           bWarmupPosition : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCheckWarmupVisibility : 1;                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bGroupDestination : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bRealPreferVisible : 1;                           		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AGameCrowdDestination*                    SpawnDest;                                        		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           TryPct;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           MaxSpawnDist;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           DestDist;                                         		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           StartDist;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TryLoc;                                           		// 0x0054 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0060 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0068 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0074 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NearestViewLocation;                              		// 0x0080 (0x000C) [0x0000000000000000]              
	// struct FVector                                  YAdjust;                                          		// 0x008C (0x000C) [0x0000000000000000]              
	// DWORD                                           bVisibleTryLoc : 1;                               		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bFoundOption : 1;                                 		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             CheckCnt;                                         		// 0x00A0 (0x0004) [0x0000000000000000]              
	// int                                             MaxCheckCnt;                                      		// 0x00A4 (0x0004) [0x0000000000000000]              
	// int                                             OptionIdx;                                        		// 0x00A8 (0x0004) [0x0000000000000000]              
	// TArray< struct FVector >                        TryOptions;                                       		// 0x00AC (0x0010) [0x0000000000000000]              
	// float                                           SpawnDestRadius;                                  		// 0x00BC (0x0004) [0x0000000000000000]              
	// float                                           TravelDestRadius;                                 		// 0x00C0 (0x0004) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x00C4 (0x0004) [0x0000000000000000]              
	// float                                           NearestViewDistSq;                                		// 0x00C8 (0x0004) [0x0000000000000000]              
	// float                                           ViewDistSq;                                       		// 0x00CC (0x0004) [0x0000000000000000]              
	// DWORD                                           bVisibleOption : 1;                               		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// [0x00820102] 
struct AGameCrowdAgent_execGetAttemptedSpawnLocation_Parms
{
	// float                                           Pct;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  CurPos;                                           		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           CurRadius;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DestPos;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           DestRadius;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           MaxLateralOffset;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           LateralOffset;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector                                  LateralDir;                                       		// 0x0038 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] 
struct AGameCrowdAgent_execSetLighting_Parms
{
	// DWORD                                           bEnableLightEnvironment : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FLightingChannelContainer                AgentLightingChannel;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           bCastShadows : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] 
struct AGameCrowdAgent_execDisplayDebug_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FString                                  T;                                                		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] 
struct AGameCrowdAgent_execDestroyed_Parms
{
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00020002] 
struct AGameCrowdAgent_execResetPooledAgent_Parms
{
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventKillAgent_Parms
{
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] 
struct AGameCrowdAgent_execPostBeginPlay_Parms
{
	// struct FVector                                  AgentScale3D;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           MaxSeePlayerDist;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] 
struct AGameCrowdAgent_execSetMaxSpeed_Parms
{
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventSetCurrentDestination_Parms
{
	// class AGameCrowdDestination*                    NewDest;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgent_eventWaitForGroupMembers_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] 
struct AGameCrowdAgent_execPickBehaviorFrom_Parms
{
	// TArray< struct FBehaviorEntry >                 BehaviorList;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FVector                                  BestCameraLoc;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  CameraLoc;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CameraRot;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0038 (0x0008) [0x0000000000000000]              
	// float                                           BestDistSq;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           NewDistSq;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           FreqSum;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           RandPick;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020400] ( FUNC_Native )
struct AGameCrowdAgent_execIsPanicked_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
struct AGameCrowdAgent_eventFellOutOfWorld_Parms
{
	// class UClass*                                   dmgType;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// [0x00020400] ( FUNC_Native )
struct AGameCrowdAgent_execGetCollisionExtent_Parms
{
	// struct FVector                                  ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] 
struct AGameCrowdAgentSkeletal_execCreateAttachments_Parms
{
	// int                                             AttachIdx;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             InfoIdx;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             PickedInfoIdx;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ChanceTotal;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           RandVal;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UStaticMeshComponent*                     StaticMeshComp;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	// DWORD                                           bUseSocket : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bUseBone : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgentSkeletal_eventOnAnimEnd_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] ( FUNC_Event )
struct AGameCrowdAgentSkeletal_eventStopIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] ( FUNC_Event )
struct AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] ( FUNC_Event )
struct AGameCrowdAgentSkeletal_eventClearLatentAnimation_Parms
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] 
struct AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Parms
{
	// class USeqAct_PlayAgentAnimation*               Action;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] ( FUNC_Native )
struct AGameCrowdAgentSkeletal_execSetRootMotion_Parms
{
	// DWORD                                           bRootMotionEnabled : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] ( FUNC_Native )
struct AGameCrowdAgentSkeletal_execPlayDeath_Parms
{
	// struct FVector                                  KillMomentum;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] 
struct AGameCrowdAgentSkeletal_execSetLighting_Parms
{
	// DWORD                                           bEnableLightEnvironment : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FLightingChannelContainer                AgentLightingChannel;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           bCastShadows : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] 
struct AGameCrowdAgentSkeletal_execPostBeginPlay_Parms
{
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
// [0x00020002] 
struct AGameCrowdAgentSM_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// [0x00024002] 
struct AGameCrowdAgentSM_execActivateBehavior_Parms
{
	// class UGameCrowdAgentBehavior*                  NewBehaviorArchetype;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   LookAtActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// [0x00820102] 
struct AGameCrowdAgentSM_execChangeDebugColor_Parms
{
	// struct FColor                                   InC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             C;                                                		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// [0x00020102] 
struct AGameCrowdAgentSM_execInitDebugColor_Parms
{
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// [0x00020102] 
struct AGameCrowdAgentSM_execPostBeginPlay_Parms
{
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] 
struct UGameCrowdAgentBehavior_execAllowBehaviorAt_Parms
{
	// class AGameCrowdDestination*                    Destination;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] 
struct UGameCrowdAgentBehavior_execAllowThisDestination_Parms
{
	// class AGameCrowdDestination*                    Destination;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020802] ( FUNC_Event )
struct UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Parms
{
	// class AGameCrowdAgent*                          OtherAgent;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// [0x00020002] 
struct UGameCrowdAgentBehavior_execGetBehaviorInstigator_Parms
{
	// class AActor*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] 
struct UGameCrowdAgentBehavior_execActivatedBy_Parms
{
	// class AActor*                                   NewActionTarget;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] 
struct UGameCrowdAgentBehavior_execGetDestinationActor_Parms
{
	// class AActor*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] 
struct UGameCrowdAgentBehavior_execChangingDestination_Parms
{
	// class AGameCrowdDestination*                    NewDest;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] 
struct UGameCrowdAgentBehavior_execGetBehaviorString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] ( FUNC_Event )
struct UGameCrowdAgentBehavior_eventOnAnimEnd_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] 
struct UGameCrowdAgentBehavior_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] 
struct UGameCrowdAgentBehavior_execInitBehavior_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] ( FUNC_Native )
struct UGameCrowdAgentBehavior_execHandleMovement_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] ( FUNC_Event )
struct UGameCrowdAgentBehavior_eventFinishedTargetRotation_Parms
{
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] 
struct UGameCrowdAgentBehavior_execCanBeUsedBy_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  CameraLoc;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGameCrowdAgentBehavior_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
struct UGameCrowdAgentBehavior_execShouldEndIdle_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// [0x00026400] ( FUNC_Native )
struct UGameCrowdAgentBehavior_execTriggerCrowdBehavior_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AActor*                                   Instigator;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  AtLocation;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	// float                                           InRange;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           InDuration;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// class AActor*                                   BaseActor;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// DWORD                                           bRequireLOS : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AGameCrowdBehaviorPoint*                  ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] 
struct UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  BehaviorString;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] 
struct UGameCrowdBehavior_PlayAnimation_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] 
struct UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Parms
{
	// float                                           CurrentBlendInTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           CurrentBlendOutTime;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgentSkeletal*                  MySkAgent;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] ( FUNC_Event )
struct UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] ( FUNC_Native )
struct UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Parms
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] ( FUNC_Event )
struct UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Parms
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] 
struct UGameCrowdBehavior_PlayAnimation_execInitBehavior_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        ClosestPC;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           ClosestDist;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           newdist;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// class AGameCrowdAgentSkeletal*                  SkAgent;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] 
struct UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] 
struct UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Parms
{
	// class AGameCrowdDestination*                    Destination;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] 
struct UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Parms
{
	// class AGameCrowdDestination*                    Destination;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// [0x00020002] 
struct UGameCrowdBehavior_RunFromPanic_execGetBehaviorInstigator_Parms
{
	// class AActor*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] 
struct UGameCrowdBehavior_RunFromPanic_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] 
struct UGameCrowdBehavior_RunFromPanic_execInitBehavior_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] 
struct UGameCrowdBehavior_RunFromPanic_execActivatedBy_Parms
{
	// class AActor*                                   NewActionTarget;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGameCrowdDestination*                    TempDest;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AGameCrowdDestination*                    PrevDest;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] 
struct UGameCrowdBehavior_WaitForGroup_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
struct UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] 
struct UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  BehaviorString;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] 
struct UGameCrowdBehavior_WaitForGroup_execInitBehavior_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] 
struct UGameCrowdBehavior_WaitInQueue_execStopBehavior_Parms
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
struct UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] 
struct UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] 
struct UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Parms
{
	// class AActor*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] 
struct UGameCrowdBehavior_WaitInQueue_execChangingDestination_Parms
{
	// class AGameCrowdDestination*                    NewDest;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] ( FUNC_Native )
struct UGameCrowdBehavior_WaitInQueue_execHandleMovement_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] 
struct UGameCrowdGroup_execUpdateDestinations_Parms
{
	// class AGameCrowdDestination*                    NewDestination;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] 
struct UGameCrowdGroup_execRemoveMember_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] 
struct UGameCrowdGroup_execAddMember_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
// [0x00020102] 
struct AGameCrowdInfoVolume_execUnTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdInfoVolume.Touch
// [0x00020102] 
struct AGameCrowdInfoVolume_execTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0028 (0x0008) [0x0000000000000000]              
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] 
struct AGameCrowdInteractionPoint_execOnToggle_Parms
{
	// class USeqAct_Toggle*                           Action;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
// [0x00020802] ( FUNC_Event )
struct AGameCrowdBehaviorPoint_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// [0x00020002] 
struct AGameCrowdBehaviorPoint_execDestroySelf_Parms
{
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AGameCrowdBehaviorPoint_eventPostBeginPlay_Parms
{
};

// Function GameFramework.GameCrowdDestination.DrawDebug
// [0x00C24102] 
struct AGameCrowdDestination_execDrawDebug_Parms
{
	// TArray< struct FCrowdSpawnerPlayerInfo >        PlayerInfo;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bPresistent : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             PlayerIdx;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// [0x00020002] 
struct AGameCrowdDestination_execGetDestinationRadius_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// [0x00420102] 
struct AGameCrowdDestination_execPrioritizeSpawnPoint_Parms
{
	// TArray< struct FCrowdSpawnerPlayerInfo >        PlayerInfo;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           MaxSpawnDist;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           DistToSpawn;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// [0x00C20102] 
struct AGameCrowdDestination_execAnalyzeSpawnPoint_Parms
{
	// TArray< struct FCrowdSpawnerPlayerInfo >        PlayerInfo;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           MaxSpawnDistSq;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           bForceNavMeshPathing : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UNavigationHandle*                        NavHandle;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   HitActor;                                         		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// int                                             NextIdx;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    NextGCD;                                          		// 0x004C (0x0008) [0x0000000000000000]              
	// float                                           DistFromView;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	// float                                           DistFromPred;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20102] 
struct AGameCrowdDestination_execGetSpawnPosition_Parms
{
	// class USeqAct_GameCrowdSpawner*                 Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnPos;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnLine;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           RandScale;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// [0x00020102] 
struct AGameCrowdDestination_execGetSpawnRadius_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020902] ( FUNC_Event )
struct AGameCrowdDestination_eventAllowableDestinationFor_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bSupported : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00024102] 
struct AGameCrowdDestination_execAtCapacity_Parms
{
	// unsigned char                                   CheckCnt;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020902] ( FUNC_Event )
struct AGameCrowdDestination_eventIncrementCustomerCount_Parms
{
	// class AGameCrowdAgent*                          ArrivingAgent;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020902] ( FUNC_Event )
struct AGameCrowdDestination_eventDecrementCustomerCount_Parms
{
	// class AGameCrowdAgent*                          DepartingAgent;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGameCrowdDestinationQueuePoint*          QP;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsInQueue : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020102] 
struct AGameCrowdDestination_execPickNewDestinationFor_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIgnoreRestrictions : 1;                          		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           DestinationFrequencySum;                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           DestinationPickValue;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// TArray< class AGameCrowdDestination* >          DestOptions;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020902] ( FUNC_Event )
struct AGameCrowdDestination_eventReachedDestination_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USeqEvent_CrowdAgentReachedDestination*   ReachedEvent;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bEventActivated : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00020102] 
struct AGameCrowdDestination_execDestroyed_Parms
{
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] 
struct AGameCrowdDestination_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020500] ( FUNC_Native )
struct AGameCrowdDestination_execReachedByAgent_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  TestPosition;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// DWORD                                           bTestExactly : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020102] 
struct AGameCrowdDestinationQueuePoint_execHasCustomer_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020102] 
struct AGameCrowdDestinationQueuePoint_execClearQueue_Parms
{
	// class AGameCrowdAgent*                          OldCustomer;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020102] 
struct AGameCrowdDestinationQueuePoint_execAddCustomer_Parms
{
	// class AGameCrowdAgent*                          NewCustomer;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGameCrowdInteractionPoint*               PreviousPosition;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040103] ( FUNC_Final )
struct AGameCrowdDestinationQueuePoint_execActuallyAdvance_Parms
{
	// class AGameCrowdDestinationQueuePoint*          FrontQueuePosition;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGameCrowdDestination*                    QueueFront;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AGameCrowdAgent*                          TempAgent;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020102] 
struct AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Parms
{
	// class AGameCrowdInteractionPoint*               FrontPosition;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020902] ( FUNC_Event )
struct AGameCrowdDestinationQueuePoint_eventReachedDestination_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGameCrowdDestinationQueuePoint*          QueuePoint;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020102] 
struct AGameCrowdDestinationQueuePoint_execHasSpace_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00020400] ( FUNC_Native )
struct AGameCrowdDestinationQueuePoint_execQueueReachedBy_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  TestPosition;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00C20802] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventCreateNewAgent_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// class AGameCrowdDestination*                    SpawnLoc;                                         		// 0x0090 (0x0008) [0x0000000000000000]              
	// class AGameCrowdAgent*                          AgentTemplate;                                    		// 0x0098 (0x0008) [0x0000000000000000]              
	// class UGameCrowdGroup*                          NewGroup;                                         		// 0x00A0 (0x0008) [0x0000000000000000]              
	// class AGameCrowdAgent*                          ReturnValue;                                      		// 0x00A8 (0x0008) [0x0000000000000000]              
	// class AGameCrowdAgent*                          Agent;                                            		// 0x00B0 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x00B8 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnPos;                                         		// 0x00C4 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00D0 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
// [0x00420400] ( FUNC_Native )
struct AGameCrowdPopulationManager_execWarmup_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// int                                             WarmupNum;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00420400] ( FUNC_Native )
struct AGameCrowdPopulationManager_execSpawnAgent_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// class AGameCrowdDestination*                    SpawnLoc;                                         		// 0x0090 (0x0008) [0x0000000000000000]              
	// class AGameCrowdAgent*                          ReturnValue;                                      		// 0x0098 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// [0x00020400] ( FUNC_Native )
struct AGameCrowdPopulationManager_execSpawnAgentByIdx_Parms
{
	// int                                             SpawnerIdx;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    SpawnLoc;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AGameCrowdAgent*                          ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00C20002] 
struct AGameCrowdPopulationManager_execValidateSpawnAt_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// class AGameCrowdDestination*                    Candidate;                                        		// 0x0090 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   HitActor;                                         		// 0x009C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x00A4 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x00B0 (0x000C) [0x0000000000000000]              
	// float                                           DistSq;                                           		// 0x00BC (0x0004) [0x0000000000000000]              
	// float                                           MinDistFromViewSq;                                		// 0x00C0 (0x0004) [0x0000000000000000]              
	// float                                           DestDotView;                                      		// 0x00C4 (0x0004) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x00C8 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00420002] 
struct AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// class AGameCrowdDestination*                    GCD;                                              		// 0x0090 (0x0008) [0x0000000000000000]              
	// int                                             SpawnIdx;                                         		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             StartingIndex;                                    		// 0x009C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00420002] 
struct AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// int                                             StartIndex;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	// int                                             NumToUpdate;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	// int                                             UpdateIdx;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x009C (0x0004) [0x0000000000000000]              
	// int                                             NumUpdated;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    GCD;                                              		// 0x00A4 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00420802] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventPrioritizeSpawnPoints_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	// int                                             UpdateNum;                                        		// 0x0094 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// [0x00422500] ( FUNC_Native )
struct AGameCrowdPopulationManager_execStaticGetPlayerInfo_Parms
{
	// TArray< struct FCrowdSpawnerPlayerInfo >        out_PlayerInfo;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// [0x00020500] ( FUNC_Native )
struct AGameCrowdPopulationManager_execGetPlayerInfo_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00420802] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventPickSpawnPoint_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// class AGameCrowdDestination*                    ReturnValue;                                      		// 0x0090 (0x0008) [0x0000000000000000]              
	// int                                             StartingIndex;                                    		// 0x0098 (0x0004) [0x0000000000000000]              
	// int                                             SpawnIdx;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    Candidate;                                        		// 0x00A0 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// [0x00420802] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventUpdateSpawner_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AGameCrowdDestination*                    PickedSpawnPoint;                                 		// 0x0098 (0x0008) [0x0000000000000000]              
	// class AGameCrowdAgent*                          A;                                                		// 0x00A0 (0x0008) [0x0000000000000000]              
	// int                                             NumSpawned;                                       		// 0x00A8 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// [0x00020400] ( FUNC_Native )
struct AGameCrowdPopulationManager_execUpdateAllSpawners_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00020002] 
struct AGameCrowdPopulationManager_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGameCrowdDestination*                    PickedSpawnPoint;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// [0x00020102] 
struct AGameCrowdPopulationManager_execShouldDebugDestinations_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// [0x00020002] 
struct AGameCrowdPopulationManager_execIsSpawningActive_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             SpawnerIdx;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00C20102] 
struct AGameCrowdPopulationManager_execDisplayDebug_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             RenderedNum;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             LOSNum;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             SimNum;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             ActualCount;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             DistanceBucket[ 0x14 ];                           		// 0x0028 (0x0050) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             RVONum;                                           		// 0x007C (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0080 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0088 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0094 (0x000C) [0x0000000000000000]              
	// class AGameCrowdAgent*                          GCA;                                              		// 0x00A0 (0x0008) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x00A8 (0x0004) [0x0000000000000000]              
	// TArray< class AGameCrowdAgent* >                AgentList;                                        		// 0x00AC (0x0010) [0x0000000000000000]              
	// int                                             PlayerIdx;                                        		// 0x00BC (0x0004) [0x0000000000000000]              
	// int                                             SpawnIdx;                                         		// 0x00C0 (0x0004) [0x0000000000000000]              
	// DWORD                                           bHasLOS : 1;                                      		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           BucketSize;                                       		// 0x00C8 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00020002] 
struct AGameCrowdPopulationManager_execAgentDestroyed_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             SpawnerIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// [0x00020802] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventFlushAllAgents_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00020802] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventFlushAgents_Parms
{
	// struct FCrowdSpawnInfoItem                      Item;                                             		// 0x0000 (0x0090) [0x0000000000000000]              
	// int                                             AgentIdx;                                         		// 0x0090 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// [0x00020802] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventCreateSpawner_Parms
{
	// class USeqAct_GameCrowdPopulationManagerToggle* inAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// [0x00020002] 
struct AGameCrowdPopulationManager_execSetCrowdInfoVolume_Parms
{
	// class AGameCrowdInfoVolume*                     Vol;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00020002] 
struct AGameCrowdPopulationManager_execRemoveSpawnPoint_Parms
{
	// class AGameCrowdDestination*                    GCD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             AgentIdx;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00020002] 
struct AGameCrowdPopulationManager_execAddSpawnPoint_Parms
{
	// class AGameCrowdDestination*                    GCD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00020800] ( FUNC_Event )
struct AGameCrowdPopulationManager_eventNotifyPathChanged_Parms
{
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00020002] 
struct AGameCrowdPopulationManager_execPostBeginPlay_Parms
{
	// class AGameCrowdDestination*                    GCD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020900] ( FUNC_Event )
struct AGameCrowdReplicationActor_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880102] 
struct AGameExplosionActor_execChooseCameraShake_Parms
{
	// struct FVector                                  Epicenter;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// class UCameraShake*                             ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FVector                                  CamX;                                             		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamY;                                             		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamZ;                                             		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ToEpicenter;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// float                                           FwdDot;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           RtDot;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// class UCameraShake*                             ChosenShake;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 NoPitchRot;                                       		// 0x005C (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00020102] 
struct AGameExplosionActor_execSpawnCameraLensEffects_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] 
struct AGameExplosionActor_execDoExplosionCameraEffects_Parms
{
	// class UCameraShake*                             Shake;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ShakeScale;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] 
struct AGameExplosionActor_execDrawDebug_Parms
{
	// struct FColor                                   C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00020102] 
struct AGameExplosionActor_execDelayedExplosionDamage_Parms
{
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024102] 
struct AGameExplosionActor_execExplode_Parms
{
	// class UGameExplosion*                           NewExplosionTemplate;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           HowLongToLive;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterial*                        PhysMat;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// DWORD                                           bHurtSomeone : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
struct AGameExplosionActor_execSpawnExplosionFogVolume_Parms
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
struct AGameExplosionActor_execSpawnExplosionDecal_Parms
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
struct AGameExplosionActor_execSpawnExplosionParticleSystem_Parms
{
	// class UParticleSystem*                          Template;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
struct AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms
{
	// class UPhysicalMaterial*                        PhysMaterial;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// [0x00080000] 
struct AGameExplosionActor_execSpecialCringeEffectsFor_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           VictimDist;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00080000] 
struct AGameExplosionActor_execSpecialPawnEffectsFor_Parms
{
	// class AGamePawn*                                VictimPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           VictimDist;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.GetDamageFor
// [0x00020102] 
struct AGameExplosionActor_execGetDamageFor_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00020002] 
struct AGameExplosionActor_execGetEffectCheckRadius_Parms
{
	// DWORD                                           bCauseDamage : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseFractureEffects : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseEffects : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           CheckRadius;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.HandleIgnoredVictim
// [0x00020000] 
struct AGameExplosionActor_execHandleIgnoredVictim_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00880102] 
struct AGameExplosionActor_execDoExplosionDamage_Parms
{
	// DWORD                                           bCauseDamage : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseEffects : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   Victim;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FVector                                  BBoxCenter;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// DWORD                                           bDamageBlocked : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bDoFullDamage : 1;                                		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseFractureEffects : 1;                        		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCausePawnEffects : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseDamageEffects : 1;                          		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bHurtSomeone : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ColRadius;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           ColHeight;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           CheckRadius;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           VictimDist;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         VictimsList;                                      		// 0x0050 (0x0010) [0x0000000000000000]              
	// struct FBox                                     BBox;                                             		// 0x0060 (0x001C) [0x0000000000000000]              
	// class AController*                              ModInstigator;                                    		// 0x007C (0x0008) [0x0000000000000000]              
	// class AGamePawn*                                VictimPawn;                                       		// 0x0084 (0x0008) [0x0000000000000000]              
	// class AFracturedStaticMeshActor*                FracActor;                                        		// 0x008C (0x0008) [0x0000000000000000]              
	// unsigned char                                   WantPhysChunksAndParticles;                       		// 0x0094 (0x0001) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0098 (0x0028) [0x0000000000000000]              
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x00C0 (0x0008) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitStaticMesh;                                    		// 0x00C8 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AGameExplosionActor_execBoxDistanceToPoint_Parms
{
	// struct FVector                                  Start;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FBox                                     BBox;                                             		// 0x000C (0x001C) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] 
struct AGameExplosionActor_execIsBehindExplosion_Parms
{
	// class AActor*                                   A;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
struct AGameExplosionActor_execDoFullDamageToActor_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
struct AGameExplosionActor_execGetPhysicalMaterial_Parms
{
	// class UPhysicalMaterial*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPhysicalMaterial*                        Retval;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutHitNorm;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ExploNormal;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            OutHitInfo;                                       		// 0x0040 (0x0028) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AGameExplosionActor_eventPreBeginPlay_Parms
{
};

// Function GameFramework.GameExplosionActor.StaticTraceExplosive
// [0x00022400] ( FUNC_Native )
struct AGameExplosionActor_execStaticTraceExplosive_Parms
{
	// struct FVector                                  TraceEnd;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   SourceActor;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class AActor*                                   ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.TraceExplosive
// [0x00020002] 
struct AGameExplosionActor_execTraceExplosive_Parms
{
	// struct FVector                                  TraceEnd;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.DebugCameraController.ConsoleCommand
// [0x00024400] ( FUNC_Native )
struct ADebugCameraController_execConsoleCommand_Parms
{
	// struct FString                                  Command;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bWriteToLog : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// [0x00020202] ( FUNC_Exec )
struct ADebugCameraController_execShowDebugSelectedInfo_Parms
{
};

// Function GameFramework.DebugCameraController.NativeInputKey
// [0x00824002] 
struct ADebugCameraController_execNativeInputKey_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    Key;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Event;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	// float                                           AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  CamLoc;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ZeroVec;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CamRot;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0040 (0x0028) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0068 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x007C (0x000C) [0x0000000000000000]              
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
// [0x00020002] 
struct ADebugCameraController_execInitDebugInputSystem_Parms
{
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
// [0x00020002] 
struct ADebugCameraController_execDisableDebugCamera_Parms
{
};

// Function GameFramework.DebugCameraController.NormalSpeed
// [0x00020202] ( FUNC_Exec )
struct ADebugCameraController_execNormalSpeed_Parms
{
};

// Function GameFramework.DebugCameraController.MoreSpeed
// [0x00020202] ( FUNC_Exec )
struct ADebugCameraController_execMoreSpeed_Parms
{
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
// [0x00020202] ( FUNC_Exec )
struct ADebugCameraController_execSetFreezeRendering_Parms
{
};

// Function GameFramework.DebugCameraController.OnDeactivate
// [0x00020002] 
struct ADebugCameraController_execOnDeactivate_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.DebugCameraController.OnActivate
// [0x00020002] 
struct ADebugCameraController_execOnActivate_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.DebugCameraController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADebugCameraController_eventPostBeginPlay_Parms
{
};

// Function GameFramework.DebugCameraController.Unselect
// [0x00020400] ( FUNC_Native )
struct ADebugCameraController_execUnselect_Parms
{
};

// Function GameFramework.DebugCameraController.SecondarySelect
// [0x00020400] ( FUNC_Native )
struct ADebugCameraController_execSecondarySelect_Parms
{
	// struct FVector                                  HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0018 (0x0028) [0x0000000000000000]              
};

// Function GameFramework.DebugCameraController.PrimarySelect
// [0x00020400] ( FUNC_Native )
struct ADebugCameraController_execPrimarySelect_Parms
{
	// struct FVector                                  HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0018 (0x0028) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.RenderKismetHud
// [0x00020002] 
struct AMobileHUD_execRenderKismetHud_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< unsigned char >                         boolVars;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
// [0x00020002] 
struct AMobileHUD_execAddKismetRenderEvent_Parms
{
	// class USeqEvent_HudRender*                      NewEvent;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
// [0x00020002] 
struct AMobileHUD_execRefreshKismetLinks_Parms
{
	// TArray< class USequenceObject* >                HudEvents;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// [0x00820002] 
struct AMobileHUD_execDrawMobileZone_Slider_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FTextureUVs                              UVs;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UTexture2D*                               Tex;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00020002] 
struct AMobileHUD_execDrawMobileTilt_Parms
{
	// class UMobilePlayerInput*                       MobileInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Yaw;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Pitch;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00020002] 
struct AMobileHUD_execDrawMobileZone_Trackball_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Width;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00820002] 
struct AMobileHUD_execDrawMobileZone_Joystick_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Width;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Height;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FColor                                   LineColor;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           ClampedX;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           ClampedY;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FColor                                   TempColor;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00020002] 
struct AMobileHUD_execDrawMobileZone_Button_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Pressed;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           U;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           V;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           UL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           VL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           A;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// class UTexture2D*                               Tex;                                              		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00020002] 
struct AMobileHUD_execDrawInputZoneOverlays_Parms
{
	// int                                             ZoneIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMobileInputZone*                         Zone;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           Fade;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MobileInput;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< class UMobileInputZone* >               Zones;                                            		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00020002] 
struct AMobileHUD_execRenderMobileMenu_Parms
{
	// class UMobilePlayerInput*                       MobileInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.ShowMobileHud
// [0x00020002] 
struct AMobileHUD_execShowMobileHud_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
// [0x00020002] 
struct AMobileHUD_execDrawMobileDebugString_Parms
{
	// float                                           XPos;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           YPos;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  Str;                                              		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.PostRender
// [0x00020002] 
struct AMobileHUD_execPostRender_Parms
{
	// class UMobilePlayerInput*                       MPI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00020102] 
struct AMobileHUD_execPostBeginPlay_Parms
{
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
// [0x00020002] 
struct UMobileInputZone_execAddKismetEventHandler_Parms
{
	// class USeqEvent_MobileZoneBase*                 NewHandler;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
// [0x00120000] 
struct UMobileInputZone_execOnPostDrawZone_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
// [0x00120000] 
struct UMobileInputZone_execOnPreDrawZone_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileInputZone.OnProcessSlide
// [0x00120000] 
struct UMobileInputZone_execOnProcessSlide_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	// int                                             SlideValue;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector2D                                ViewportSize;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00120000] 
struct UMobileInputZone_execOnDoubleTapDelegate_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	// struct FVector2D                                TouchLocation;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00120000] 
struct UMobileInputZone_execOnTapDelegate_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	// struct FVector2D                                TouchLocation;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00120000] 
struct UMobileInputZone_execOnProcessInputDelegate_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Handle;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned char                                   EventType;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	// struct FVector2D                                TouchLocation;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00020400] ( FUNC_Native )
struct UMobileInputZone_execDeactivateZone_Parms
{
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00020400] ( FUNC_Native )
struct UMobileInputZone_execActivateZone_Parms
{
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00020000] 
struct UMobileMenuObject_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
// [0x00024002] 
struct UMobileMenuObject_execSetCanvasPos_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           OffsetX;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           OffsetY;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           PosX;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuObject.InitMenuObject
// [0x00020002] 
struct UMobileMenuObject_execInitMenuObject_Parms
{
	// class UMobilePlayerInput*                       PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuScene*                         Scene;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ScreenWidth;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ScreenHeight;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsFirstInitialization : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             X;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             W;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             H;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             oX;                                               		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             oY;                                               		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             RelativeIdx;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuObject.GetRealPosition
// [0x00420802] ( FUNC_Event )
struct UMobileMenuObject_eventGetRealPosition_Parms
{
	// float                                           PosX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           PosY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuObject.OnTouch
// [0x00020802] ( FUNC_Event )
struct UMobileMenuObject_eventOnTouch_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuObject*                        ObjectOver;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00820002] 
struct UMobileMenuImage_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           H;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           U;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           V;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           UL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           VL;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             DrawColor;                                        		// 0x0024 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00020002] 
struct UMobileMenuScene_execMobileMenuCommand_Parms
{
	// struct FString                                  Command;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00020002] 
struct UMobileMenuScene_execFindMenuObject_Parms
{
	// struct FString                                  Tag;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UMobileMenuObject*                        ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00020400] ( FUNC_Native )
struct UMobileMenuScene_execCleanUpScene_Parms
{
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00020002] 
struct UMobileMenuScene_execClosed_Parms
{
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00020002] 
struct UMobileMenuScene_execClosing_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
// [0x00020000] 
struct UMobileMenuScene_execMadeTopMenu_Parms
{
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00020000] 
struct UMobileMenuScene_execOpened_Parms
{
	// struct FString                                  Mode;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
// [0x00020802] ( FUNC_Event )
struct UMobileMenuScene_eventOnSceneTouch_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           bInside : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00020800] ( FUNC_Event )
struct UMobileMenuScene_eventOnTouch_Parms
{
	// class UMobileMenuObject*                        Sender;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// [0x00020000] 
struct UMobileMenuScene_execPreRenderMenuObject_Parms
{
	// class UMobileMenuObject*                        MenuObject;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           RenderDelta;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00020002] 
struct UMobileMenuScene_execRenderScene_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           RenderDelta;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuObject*                        MenuObject;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.GetSceneFont
// [0x00020002] 
struct UMobileMenuScene_execGetSceneFont_Parms
{
	// class UFont*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.InitMenuScene
// [0x00020802] ( FUNC_Event )
struct UMobileMenuScene_eventInitMenuScene_Parms
{
	// class UMobilePlayerInput*                       PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ScreenWidth;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ScreenHeight;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsFirstInitialization : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             X;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             W;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             H;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UMobileMenuScene_execGetGlobalScaleY_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct UMobileMenuScene_execGetGlobalScaleX_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00020202] ( FUNC_Exec )
struct UMobilePlayerInput_execOpenMobileMenuMode_Parms
{
	// struct FString                                  MenuClassName;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Mode;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UMobileMenuScene*                         ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// class UClass*                                   MenuClass;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00020202] ( FUNC_Exec )
struct UMobilePlayerInput_execOpenMobileMenu_Parms
{
	// struct FString                                  MenuClassName;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UMobileMenuScene*                         ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   MenuClass;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00020202] ( FUNC_Exec )
struct UMobilePlayerInput_execMobileMenuCommand_Parms
{
	// struct FString                                  MenuCommand;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// [0x00020202] ( FUNC_Exec )
struct UMobilePlayerInput_execSceneRenderToggle_Parms
{
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00020002] 
struct UMobilePlayerInput_execPreClientTravel_Parms
{
	// struct FString                                  PendingURL;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// unsigned char                                   TravelType;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	// DWORD                                           bIsSeamlessTravel : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00020802] ( FUNC_Event )
struct UMobilePlayerInput_eventRenderMenus_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           RenderDelta;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
// [0x00020802] ( FUNC_Event )
struct UMobilePlayerInput_eventCloseAllMenus_Parms
{
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00020802] ( FUNC_Event )
struct UMobilePlayerInput_eventCloseMenuScene_Parms
{
	// class UMobileMenuScene*                         SceneToClose;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bClosedTopMenu : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00824802] ( FUNC_Event )
struct UMobilePlayerInput_eventOpenMenuScene_Parms
{
	// class UClass*                                   SceneClass;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Mode;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
	// class UMobileMenuScene*                         ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UMobileMenuScene*                         Scene;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                ViewportSize;                                     		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// [0x00020202] ( FUNC_Exec )
struct UMobilePlayerInput_execSetMobileInputConfig_Parms
{
	// struct FString                                  GroupName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             NewConfig;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// [0x00020202] ( FUNC_Exec )
struct UMobilePlayerInput_execActivateInputGroup_Parms
{
	// struct FString                                  GroupName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00020002] 
struct UMobilePlayerInput_execGetCurrentZones_Parms
{
	// TArray< class UMobileInputZone* >               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00020002] 
struct UMobilePlayerInput_execHasZones_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00020002] 
struct UMobilePlayerInput_execFindorAddZone_Parms
{
	// struct FString                                  ZoneName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UMobileInputZone*                         ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UMobileInputZone*                         Zone;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UClass*                                   ClassType;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             ClassIndex;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00020002] 
struct UMobilePlayerInput_execFindZone_Parms
{
	// struct FString                                  ZoneName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UMobileInputZone*                         ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// [0x00020002] 
struct UMobilePlayerInput_execAddKismetRawInputEventHandler_Parms
{
	// class USeqEvent_MobileRawInput*                 NewHandler;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// [0x00020002] 
struct UMobilePlayerInput_execAddKismetEventHandler_Parms
{
	// class USeqEvent_MobileBase*                     NewHandler;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// [0x00020802] ( FUNC_Event )
struct UMobilePlayerInput_eventRefreshKismetLinks_Parms
{
	// TArray< class USequenceObject* >                MobileInputSeqEvents;                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// [0x00020002] 
struct UMobilePlayerInput_execSwapZoneOwners_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00020002] 
struct UMobilePlayerInput_execInitializeInputZones_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UMobileInputZone*                         Zone;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UClass*                                   FrameworkGameClass;                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
// [0x00020002] 
struct UMobilePlayerInput_execInitTouchSystem_Parms
{
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// [0x00020002] 
struct UMobilePlayerInput_execClientInitInputSystem_Parms
{
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00020002] 
struct UMobilePlayerInput_execInitInputSystem_Parms
{
};

// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execProcessWorldTouch_Parms
{
	// class UMobileInputZone*                         Zone;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	// struct FVector2D                                TouchLocation;                                    		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execSendInputAxis_Parms
{
	// struct FName                                    Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           Delta;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execSendInputKey_Parms
{
	// struct FName                                    Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Event;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
	// float                                           AmountDepressed;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execConditionalUpdateInputZones_Parms
{
	// int                                             NewViewportX;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NewViewportY;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             NewViewportSizeX;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NewViewportSizeY;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execNativeInitializeInputZones_Parms
{
	// DWORD                                           bIsFirstInitialize : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execNativeInitializeInputSystem_Parms
{
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
// [0x00120000] 
struct UMobilePlayerInput_execOnInputTouch_Parms
{
	// int                                             Handle;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	// struct FVector2D                                TouchLocation;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeviceTimestamp;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             TouchpadIndex;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// [0x00120000] 
struct UMobilePlayerInput_execOnPreviewTouch_Parms
{
	// float                                           X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             TouchpadIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// [0x00120000] 
struct UMobilePlayerInput_execOnTouchNotHandledInMenu_Parms
{
};

// Function GameFramework.MobilePlayerInput.PlayerInput
// [0x00020802] ( FUNC_Event )
struct UMobilePlayerInput_eventPlayerInput_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execCancelMobileInput_Parms
{
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// [0x00020400] ( FUNC_Native )
struct UMobilePlayerInput_execProcessMobileInput_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] 
struct UNavMeshGoal_OutOfViewFrom_execRecycle_Parms
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] 
struct UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Parms
{
	// class UNavigationHandle*                        NavHandle;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  InOutOfViewLocation;                              		// 0x0008 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UNavMeshGoal_OutOfViewFrom*               Eval;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] ( FUNC_Native )
struct UNavMeshGoal_OutOfViewFrom_execRecycleNative_Parms
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] 
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Parms
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] 
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Parms
{
	// class UNavigationHandle*                        NavHandle;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  InLocation;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 InRotation;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           InDistanceToCheck;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// TArray< struct FVector >                        InLocationsToCheck;                               		// 0x0024 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations* Con;                                              		// 0x0038 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SecondaryViewportClient.PostRender
// [0x00020800] ( FUNC_Event )
struct USecondaryViewportClient_eventPostRender_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
struct UMobileSecondaryViewportClient_eventPostRender_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MPI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AMobileHUD*                               MH;                                               		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// [0x00020002] 
struct USeqAct_GameCrowdPopulationManagerToggle_execAgentDestroyed_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// [0x00020002] 
struct USeqAct_GameCrowdPopulationManagerToggle_execGetMaxSpawnDist_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// [0x00420802] ( FUNC_Event )
struct USeqAct_GameCrowdPopulationManagerToggle_eventFillCrowdSpawnInfoItem_Parms
{
	// struct FCrowdSpawnInfoItem                      out_Item;                                         		// 0x0000 (0x0090) [0x0000000000000000]              
	// class AGameCrowdPopulationManager*              PopMgr;                                           		// 0x0090 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0098 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_GameCrowdPopulationManagerToggle_eventGetObjClassVersion_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_MobileSaveLoadValue_eventGetObjClassVersion_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] 
struct USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Parms
{
	// class AGameCrowdAgentSkeletal*                  Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameCrowdBehavior_PlayAnimation*         AnimBehavior;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_HudRender.Render
// [0x00020000] 
struct USeqEvent_HudRender_execRender_Parms
{
	// class UCanvas*                                  TargetCanvas;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AHUD*                                     TargetHud;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// [0x00020802] ( FUNC_Event )
struct USeqEvent_HudRender_eventRegisterEvent_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AGamePlayerController*                    GPC;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AMobileHUD*                               TargetHud;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
struct USeqEvent_MobileBase_eventAddToMobileInput_Parms
{
	// class UMobilePlayerInput*                       MPI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// [0x00020802] ( FUNC_Event )
struct USeqEvent_MobileBase_eventRegisterEvent_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerController*                    GPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MPI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqEvent_MobileMotion_eventGetObjClassVersion_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
struct USeqEvent_MobileZoneBase_eventAddToMobileInput_Parms
{
	// class UMobilePlayerInput*                       MPI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileInputZone*                         Zone;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// [0x00020802] ( FUNC_Event )
struct USeqEvent_MobileRawInput_eventRegisterEvent_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerController*                    GPC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MPI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] ( FUNC_Event )
struct UGameCameraBase_eventModifyPostProcessSettings_Parms
{
	// struct FPostProcessSettings                     PP;                                               		// 0x0000 (0x0220) [0x0000000000000000]              
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] 
struct UGameCameraBase_execInit_Parms
{
};

// Function GameFramework.GameCameraBase.DisplayDebug
// [0x00420100] 
struct UGameCameraBase_execDisplayDebug_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] 
struct UGameCameraBase_execProcessViewRotation_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ViewTarget;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRotation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_DeltaRot;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] 
struct UGameCameraBase_execUpdateCamera_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerCamera*                        CameraActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTViewTarget                             OutVT;                                            		// 0x0014 (0x0038) [0x0000000000000000]              
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] 
struct UGameCameraBase_execResetInterpolation_Parms
{
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] 
struct UGameCameraBase_execOnBecomeInActive_Parms
{
	// class UGameCameraBase*                          NewCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] 
struct UGameCameraBase_execOnBecomeActive_Parms
{
	// class UGameCameraBase*                          OldCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] 
struct UGameThirdPersonCamera_execResetInterpolation_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] ( FUNC_Event )
struct UGameThirdPersonCamera_eventModifyPostProcessSettings_Parms
{
	// struct FPostProcessSettings                     PP;                                               		// 0x0000 (0x0220) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] 
struct UGameThirdPersonCamera_execOnBecomeActive_Parms
{
	// class UGameCameraBase*                          OldCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] 
struct UGameThirdPersonCamera_execProcessViewRotation_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ViewTarget;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRotation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_DeltaRot;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] ( FUNC_Final )
struct UGameThirdPersonCamera_execUpdateCameraMode_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameThirdPersonCameraMode*               NewCamMode;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
struct UGameThirdPersonCamera_execFindBestCameraMode_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameThirdPersonCameraMode*               ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] 
struct UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Parms
{
	// struct FRotator                                 Delta;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] 
struct UGameThirdPersonCamera_execGetActualFocusLocation_Parms
{
	// struct FVector                                  ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FocusLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   ComponentIt;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] ( FUNC_Event )
struct UGameThirdPersonCamera_eventUpdateFocusPoint_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] 
struct UGameThirdPersonCamera_execClearFocusPoint_Parms
{
	// DWORD                                           bLeaveCameraRotation : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] 
struct UGameThirdPersonCamera_execGetFocusActor_Parms
{
	// class AActor*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] 
struct UGameThirdPersonCamera_execSetFocusOnActor_Parms
{
	// class AActor*                                   FocusActor;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    FocusBoneName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                InterpSpeedRange;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                InFocusFOV;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           CameraFOV;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// DWORD                                           bAlwaysFocus : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bAdjustCamera : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bIgnoreTrace : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           FocusPitchOffsetDeg;                              		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] 
struct UGameThirdPersonCamera_execSetFocusOnLoc_Parms
{
	// struct FVector                                  FocusWorldLoc;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector2D                                InterpSpeedRange;                                 		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector2D                                InFocusFOV;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           CameraFOV;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           bAlwaysFocus : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bAdjustCamera : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bIgnoreTrace : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           FocusPitchOffsetDeg;                              		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] 
struct UGameThirdPersonCamera_execAdjustTurn_Parms
{
	// int                                             AngleOffset;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] ( FUNC_Native )
struct UGameThirdPersonCamera_execEndTurn_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] 
struct UGameThirdPersonCamera_execBeginTurn_Parms
{
	// int                                             StartAngle;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             EndAngle;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TimeSec;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DelaySec;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bAlignTargetWhenFinished : 1;                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] ( FUNC_Native )
struct UGameThirdPersonCamera_execPlayerUpdateCamera_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerCamera*                        CameraActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTViewTarget                             OutVT;                                            		// 0x0014 (0x0038) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] 
struct UGameThirdPersonCamera_execUpdateCamera_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerCamera*                        CameraActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTViewTarget                             OutVT;                                            		// 0x0014 (0x0038) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] ( FUNC_Event )
struct UGameThirdPersonCamera_eventGetDesiredFOV_Parms
{
	// class APawn*                                    ViewedPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] 
struct UGameThirdPersonCamera_execInit_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] 
struct UGameThirdPersonCamera_execReset_Parms
{
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] 
struct UGameThirdPersonCamera_execCreateCameraMode_Parms
{
	// class UClass*                                   ModeClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameThirdPersonCameraMode*               ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGameThirdPersonCameraMode*               NewMode;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct AGamePlayerCamera_execAdjustFOVForViewport_Parms
{
	// float                                           inHorizFOV;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    CameraTargetPawn;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] 
struct AGamePlayerCamera_execProcessViewRotation_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] 
struct AGamePlayerCamera_execResetInterpolation_Parms
{
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] 
struct AGamePlayerCamera_execSetColorScale_Parms
{
	// struct FVector                                  NewColorScale;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] 
struct AGamePlayerCamera_execDisplayDebug_Parms
{
	// class AHUD*                                     HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420102] 
struct AGamePlayerCamera_execUpdateCameraLensEffects_Parms
{
	// struct FTViewTarget                             OutVT;                                            		// 0x0000 (0x0038) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] 
struct AGamePlayerCamera_execUpdateViewTarget_Parms
{
	// struct FTViewTarget                             OutVT;                                            		// 0x0000 (0x0038) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x003C (0x0008) [0x0000000000000000]              
	// class UGameCameraBase*                          NewCamera;                                        		// 0x0044 (0x0008) [0x0000000000000000]              
	// class ACameraActor*                             CamActor;                                         		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] 
struct AGamePlayerCamera_execShouldConstrainAspectRatio_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] 
struct AGamePlayerCamera_execFindBestCameraType_Parms
{
	// class AActor*                                   CameraTarget;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameCameraBase*                          ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGameCameraBase*                          BestCam;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] 
struct AGamePlayerCamera_execReset_Parms
{
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] 
struct AGamePlayerCamera_execPostBeginPlay_Parms
{
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] ( FUNC_Native )
struct AGamePlayerCamera_execCacheLastTargetBaseInfo_Parms
{
	// class AActor*                                   TargetBase;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] 
struct AGamePlayerCamera_execCreateCamera_Parms
{
	// class UClass*                                   CameraClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameCameraBase*                          ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGameCameraBase*                          NewCam;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGameThirdPersonCameraMode_execSetViewOffset_Parms
{
	// struct FViewOffsetData                          NewViewOffset;                                    		// 0x0000 (0x0024) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] 
struct UGameThirdPersonCameraMode_execModifyPostProcessSettings_Parms
{
	// struct FPostProcessSettings                     PP;                                               		// 0x0000 (0x0220) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] 
struct UGameThirdPersonCameraMode_execUpdatePostProcess_Parms
{
	// struct FTViewTarget                             VT;                                               		// 0x0000 (0x0038) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  FocusLoc;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamDir;                                           		// 0x0060 (0x000C) [0x0000000000000000]              
	// float                                           FocusDist;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           SubjectDist;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] 
struct UGameThirdPersonCameraMode_execDOFTrace_Parms
{
	// class AActor*                                   TraceOwner;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0044 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] 
struct UGameThirdPersonCameraMode_execGetDOFFocusLoc_Parms
{
	// class AActor*                                   TraceOwner;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] 
struct UGameThirdPersonCameraMode_execProcessViewRotation_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ViewTarget;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRotation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_DeltaRot;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] 
struct UGameThirdPersonCameraMode_execSetFocusPoint_Parms
{
	// class APawn*                                    ViewedPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] ( FUNC_Event )
struct UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Parms
{
	// class APawn*                                    TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FTViewTarget                             CurrentViewTarget;                                		// 0x0008 (0x0038) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] 
struct UGameThirdPersonCameraMode_execGetDesiredFOV_Parms
{
	// class APawn*                                    ViewedPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] ( FUNC_Event )
struct UGameThirdPersonCameraMode_eventAdjustViewOffset_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Offset;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] 
struct UGameThirdPersonCameraMode_execOnBecomeInActive_Parms
{
	// class APawn*                                    TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameThirdPersonCameraMode*               NewMode;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] 
struct UGameThirdPersonCameraMode_execOnBecomeActive_Parms
{
	// class APawn*                                    TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameThirdPersonCameraMode*               PrevMode;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] 
struct UGameThirdPersonCameraMode_execInit_Parms
{
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGameSpecialMove_execRelativeToWorldOffset_Parms
{
	// struct FRotator                                 InRotation;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RelativeSpaceOffset;                              		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGameSpecialMove_execWorldToRelativeOffset_Parms
{
	// struct FRotator                                 InRotation;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  WorldSpaceOffset;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGameSpecialMove_execForcePawnRotation_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// DWORD                                           bIgnoreHumanController : 1;                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00020002] 
struct UGameSpecialMove_execMessageEvent_Parms
{
	// struct FName                                    EventName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UObject*                                  Sender;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGameSpecialMove_execResetFacePreciseRotation_Parms
{
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00020800] ( FUNC_Event )
struct UGameSpecialMove_eventReachedPrecisePosition_Parms
{
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGameSpecialMove_execSetFacePreciseRotation_Parms
{
	// struct FRotator                                 RotationToFace;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	// float                                           InterpolationTime;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGameSpecialMove_execSetReachPreciseDestination_Parms
{
	// struct FVector                                  DestinationToReach;                               		// 0x0000 (0x000C) [0x0000000000000000]              
	// DWORD                                           bCancel : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00020002] 
struct UGameSpecialMove_execShouldReplicate_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00020000] 
struct UGameSpecialMove_execSpecialMoveFlagsUpdated_Parms
{
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00020000] 
struct UGameSpecialMove_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00020000] 
struct UGameSpecialMove_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00020000] 
struct UGameSpecialMove_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00080002] 
struct UGameSpecialMove_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00024003] ( FUNC_Final )
struct UGameSpecialMove_execCanDoSpecialMove_Parms
{
	// DWORD                                           bForceCheck : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00020002] 
struct UGameSpecialMove_execCanOverrideSpecialMove_Parms
{
	// struct FName                                    InMove;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00020002] 
struct UGameSpecialMove_execCanOverrideMoveWith_Parms
{
	// struct FName                                    NewMove;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00020002] 
struct UGameSpecialMove_execCanChainMove_Parms
{
	// struct FName                                    NextMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00020000] 
struct UGameSpecialMove_execExtractSpecialMoveFlags_Parms
{
	// int                                             Flags;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00420000] 
struct UGameSpecialMove_execInitSpecialMoveFlags_Parms
{
	// int                                             out_Flags;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00020002] 
struct UGameSpecialMove_execInitSpecialMove_Parms
{
	// class APawn*                                    inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    InHandle;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] ( FUNC_Native )
struct UGameStateObject_execReset_Parms
{
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGameStateObject_eventPreProcessStream_Parms
{
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] ( FUNC_Native )
struct UGameStatsAggregator_execGetAggregateMappingIDs_Parms
{
	// int                                             EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             AggregateID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             TargetAggregateID;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] ( FUNC_Native )
struct UGameStatsAggregator_execReset_Parms
{
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGameStatsAggregator_eventPostProcessStream_Parms
{
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGameStatsAggregator_eventPreProcessStream_Parms
{
};

// Function GameFramework.DebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
struct ADebugCameraHUD_eventPostRender_Parms
{
	// class ADebugCameraController*                   DCC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  MyText;                                           		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FVector                                  CamLoc;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ZeroVec;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CamRot;                                           		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x004C (0x0028) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0074 (0x0008) [0x0000000000000000]              
	// class UMeshComponent*                           MeshComp;                                         		// 0x007C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0090 (0x000C) [0x0000000000000000]              
	// DWORD                                           bFoundMaterial : 1;                               		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
// [0x00420002] 
struct ADebugCameraHUD_execDisplayMaterials_Parms
{
	// float                                           X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           DY;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMeshComponent*                           MeshComp;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MaterialIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// DWORD                                           bDisplayedMaterial : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UMaterialInterface*                       Material;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ADebugCameraHUD_eventPostBeginPlay_Parms
{
};

// Function GameFramework.DebugCameraInput.InputKey
// [0x00024002] 
struct UDebugCameraInput_execInputKey_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    Key;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Event;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	// float                                           AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x001C (0x0008) [0x0000000000000000]              
	// class ADebugCameraController*                   DCC;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] 
struct UGameCrowdSpawnInterface_execGetSpawnPosition_Parms
{
	// class USeqAct_GameCrowdSpawner*                 Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnPos;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_execIsEnemyBasedOnInterpActor_Parms
{
	// class APawn*                                    InEnemy;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_execHandlePathObstruction_Parms
{
	// class AActor*                                   BlockedBy;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_execPushed_Parms
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// [0x00022002] 
struct UGameAICmd_Hover_MoveToGoal_execMoveToGoal_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   InGoal;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           InGoalDistance;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           InHoverHeight;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGameAICmd_Hover_MoveToGoal*              Cmd;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// [0x00020802] ( FUNC_Event )
struct UGameAICmd_Hover_MoveToGoal_Mesh_eventDrawDebug_Parms
{
	// class AHUD*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    Category;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execIsEnemyBasedOnInterpActor_Parms
{
	// class APawn*                                    InEnemy;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execShouldUpdateBreadCrumbs_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execHasReachedGoal_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// [0x00020000] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execReEvaluatePath_Parms
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execHandlePathObstruction_Parms
{
	// class AActor*                                   BlockedBy;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execPopped_Parms
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// [0x00020002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execPushed_Parms
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// [0x00022002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execHoverBackToMesh_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGameAICmd_Hover_MoveToGoal_Mesh*         Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// [0x00022002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToPoint_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  InPoint;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           InGoalDistance;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           InHoverHeight;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGameAICmd_Hover_MoveToGoal_Mesh*         Cmd;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// [0x00022002] 
struct UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToGoal_Parms
{
	// class AGameAIController*                        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   InGoal;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           InGoalDistance;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           InHoverHeight;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGameAICmd_Hover_MoveToGoal_Mesh*         Cmd;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00020000] 
struct UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00020000] 
struct UGameCrowdSpawnerInterface_execAgentDestroyed_Parms
{
	// class AGameCrowdAgent*                          Agent;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] 
struct UGameFixedCamera_execOnBecomeActive_Parms
{
	// class UGameCameraBase*                          OldCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] 
struct UGameFixedCamera_execUpdateCamera_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerCamera*                        CameraActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTViewTarget                             OutVT;                                            		// 0x0014 (0x0038) [0x0000000000000000]              
	// class ACameraActor*                             CamActor;                                         		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// [0x00020102] 
struct AGameKActorSpawnableEffect_execStartScalingDown_Parms
{
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
struct AGameKActorSpawnableEffect_eventFellOutOfWorld_Parms
{
	// class UClass*                                   dmgType;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AGameKActorSpawnableEffect_eventPostBeginPlay_Parms
{
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// [0x00820002] 
struct AMobileDebugCameraController_execSetupDebugZones_Parms
{
	// float                                           Ratio;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Spacer;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UMobileInputZone*                         StickMoveZone;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMobileInputZone*                         StickLookZone;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                ViewportSize;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct AMobileDebugCameraController_eventInitInputSystem_Parms
{
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
// [0x00020002] 
struct AMobileDebugCameraController_execOnDeactivate_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MobileInput;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// [0x00020002] 
struct AMobileDebugCameraController_execInitDebugInputSystem_Parms
{
};

// Function GameFramework.MobileDebugCameraController.OnActivate
// [0x00020002] 
struct AMobileDebugCameraController_execOnActivate_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileDebugCameraInput.InputKey
// [0x00024002] 
struct UMobileDebugCameraInput_execInputKey_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    Key;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Event;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	// float                                           AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x001C (0x0008) [0x0000000000000000]              
	// class AMobileDebugCameraController*             DCC;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
struct AMobileDebugCameraHUD_eventPostRender_Parms
{
	// class AMobileDebugCameraController*             DCC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  MyText;                                           		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FVector                                  CamLoc;                                           		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ZeroVec;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 CamRot;                                           		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x004C (0x0028) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0074 (0x0008) [0x0000000000000000]              
	// class UMeshComponent*                           MeshComp;                                         		// 0x007C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0084 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0090 (0x000C) [0x0000000000000000]              
	// DWORD                                           bFoundMaterial : 1;                               		// 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bOldForceMobileHUD : 1;                           		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// [0x00420002] 
struct AMobileDebugCameraHUD_execDisplayMaterials_Parms
{
	// float                                           X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           DY;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMeshComponent*                           MeshComp;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             MaterialIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	// DWORD                                           bDisplayedMaterial : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UMaterialInterface*                       Material;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AMobileDebugCameraHUD_eventPostBeginPlay_Parms
{
};

// Function GameFramework.MobileMenuBar.UpdateItemViewports
// [0x00020002] 
struct UMobileMenuBar_execUpdateItemViewports_Parms
{
	// class UMobileMenuBarItem*                       Item;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           pos;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             CurIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuBar.SetFirstItem
// [0x00020002] 
struct UMobileMenuBar_execSetFirstItem_Parms
{
	// int                                             first;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuBar.RenderItem
// [0x00020002] 
struct UMobileMenuBar_execRenderItem_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ItemIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuBar.RenderObject
// [0x00020002] 
struct UMobileMenuBar_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           OrgX;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           OrgY;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurIndex;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuBar.OnTouch
// [0x00020802] ( FUNC_Event )
struct UMobileMenuBar_eventOnTouch_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuObject*                        ObjectOver;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuBar.GetSelected
// [0x00020002] 
struct UMobileMenuBar_execGetSelected_Parms
{
	// class UMobileMenuBarItem*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuBar.Num
// [0x00020002] 
struct UMobileMenuBar_execNum_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuBar.AddItem
// [0x00024002] 
struct UMobileMenuBar_execAddItem_Parms
{
	// class UMobileMenuBarItem*                       Item;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuBar.InitMenuObject
// [0x00020002] 
struct UMobileMenuBar_execInitMenuObject_Parms
{
	// class UMobilePlayerInput*                       PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuScene*                         Scene;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ScreenWidth;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ScreenHeight;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsFirstInitialization : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuBarItem.RenderItem
// [0x00020000] 
struct UMobileMenuBarItem_execRenderItem_Parms
{
	// class UMobileMenuBar*                           Bar;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00020002] 
struct UMobileMenuButton_execRenderCaption_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           UL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           VL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00820002] 
struct UMobileMenuButton_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             DrawColor;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuButton.InitMenuObject
// [0x00020002] 
struct UMobileMenuButton_execInitMenuObject_Parms
{
	// class UMobilePlayerInput*                       PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuScene*                         Scene;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ScreenWidth;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ScreenHeight;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsFirstInitialization : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuElement.RenderElement
// [0x00020000] 
struct UMobileMenuElement_execRenderElement_Parms
{
	// class UMobileMenuObject*                        Owner;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Opacity;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuElement.OnTouch
// [0x00020002] 
struct UMobileMenuElement_execOnTouch_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00020000] 
struct AMobileMenuGame_execRestartPlayer_Parms
{
	// class AController*                              NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00020000] 
struct AMobileMenuGame_execStartMatch_Parms
{
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00020802] ( FUNC_Event )
struct AMobileMenuGame_eventPostLogin_Parms
{
	// class APlayerController*                        NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobilePlayerInput*                       MI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.RenderDragItem
// [0x00020002] 
struct UMobileMenuInventory_execRenderDragItem_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuElement*                       Element;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           OrgX;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OrgY;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.RenderObject
// [0x00020002] 
struct UMobileMenuInventory_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuElement*                       Element;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           OrgX;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OrgY;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// [0x00020002] 
struct UMobileMenuInventory_execGetIndexOfItem_Parms
{
	// class UMobileMenuElement*                       Item;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// [0x00020002] 
struct UMobileMenuInventory_execFindSlotIndexAt_Parms
{
	// float                                           X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuElement*                       Element;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           ExtraX;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           ExtraY;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.InitDragAt
// [0x00020002] 
struct UMobileMenuInventory_execInitDragAt_Parms
{
	// int                                             TouchX;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             TouchY;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// [0x00080002] 
struct UMobileMenuInventory_execUpdateItemInSlot_Parms
{
	// int                                             InSlot;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMobileMenuElement*                       Element;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UMobileMenuElement*                       Slot;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.AddItemToSlot
// [0x00020002] 
struct UMobileMenuInventory_execAddItemToSlot_Parms
{
	// class UMobileMenuElement*                       Element;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ToSlot;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuElement*                       ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class UMobileMenuElement*                       PrevElement;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// [0x00020002] 
struct UMobileMenuInventory_execSwapItemsInSlots_Parms
{
	// int                                             Slot0;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Slot1;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UMobileMenuElement*                       Element0;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// class UMobileMenuElement*                       Element1;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.OnTouch
// [0x00820802] ( FUNC_Event )
struct UMobileMenuInventory_eventOnTouch_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuObject*                        ObjectOver;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FDragElementInfo                         OrigDrag;                                         		// 0x001C (0x0028) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// [0x00024002] 
struct UMobileMenuInventory_execCanPutItemInSlot_Parms
{
	// class UMobileMenuElement*                       Item;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuElement*                       ToSlot;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ToIdx;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             FromIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuInventory.ScaleSlot
// [0x00040003] ( FUNC_Final )
struct UMobileMenuInventory_execScaleSlot_Parms
{
	// class UMobileMenuElement*                       Slot;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.AddSlot
// [0x00020002] 
struct UMobileMenuInventory_execAddSlot_Parms
{
	// class UMobileMenuElement*                       Slot;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.InitMenuObject
// [0x00020002] 
struct UMobileMenuInventory_execInitMenuObject_Parms
{
	// class UMobilePlayerInput*                       PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuScene*                         Scene;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ScreenWidth;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ScreenHeight;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsFirstInitialization : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UMobileMenuElement*                       Element;                                          		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// [0x00520000] 
struct UMobileMenuInventory_execOnUpdateDrag_Parms
{
	// struct FDragElementInfo                         Before;                                           		// 0x0000 (0x0028) [0x0000000000000000]              
	// struct FDragElementInfo                         After;                                            		// 0x0028 (0x0028) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// [0x00120000] 
struct UMobileMenuInventory_execDoCanPutItemInSlot_Parms
{
	// class UMobileMenuInventory*                     FromInv;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuElement*                       Item;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMobileMenuElement*                       ToSlot;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             ToIdx;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             FromIdx;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// [0x00120000] 
struct UMobileMenuInventory_execOnUpdateItemInSlot_Parms
{
	// class UMobileMenuInventory*                     FromInv;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             SlotIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00020002] 
struct UMobileMenuLabel_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           CX;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           CY;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           TX;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           TY;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.ItemScrollSize
// [0x00020002] 
struct UMobileMenuList_execItemScrollSize_Parms
{
	// class UMobileMenuListItem*                      Item;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.RenderObject
// [0x00820002] 
struct UMobileMenuList_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Item;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           OrgX;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           OrgY;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             VpEnd;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             CurIndex;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             first;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             Last;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             SelectedIdx;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             NumItems;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             RealIndex;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                VpPos;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                VpSize;                                           		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.UpdateScroll
// [0x00020002] 
struct UMobileMenuList_execUpdateScroll_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           ScrollAmount;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.CalculateSelectedItem
// [0x00420002] 
struct UMobileMenuList_execCalculateSelectedItem_Parms
{
	// struct FSelectedMenuItem                        Selected;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// float                                           ScrollAmount;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bForceZeroAdjustment : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           AdjustValue;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           ScrollSize;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Scrolled;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           HalfScroll;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             CurIndex;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Item;                                             		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.GetItemClickPosition
// [0x00420002] 
struct UMobileMenuList_execGetItemClickPosition_Parms
{
	// float                                           MouseX;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           MouseY;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UMobileMenuListItem*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ScrollAmount;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             CurIndex;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             ScrollSize;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Item;                                             		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.OnTouch
// [0x00020802] ( FUNC_Event )
struct UMobileMenuList_eventOnTouch_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuObject*                        ObjectOver;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Velocity;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           SwipeDelta;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           FinalScrollDist;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           CalcScrollDist;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           SwipeTime;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Selected;                                         		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             Index0;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// DWORD                                           bUdpateTouchItem : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuList.SetSelectedItem
// [0x00024002] 
struct UMobileMenuList_execSetSelectedItem_Parms
{
	// int                                             ItemIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bForceAll : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuList.GetNumVisible
// [0x00020002] 
struct UMobileMenuList_execGetNumVisible_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// [0x00020002] 
struct UMobileMenuList_execSetSelectedToVisibleIndex_Parms
{
	// int                                             VisibleIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// [0x00020002] 
struct UMobileMenuList_execGetVisibleIndexOfSelected_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Item;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Selected;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.GetAmountSelected
// [0x00020002] 
struct UMobileMenuList_execGetAmountSelected_Parms
{
	// class UMobileMenuListItem*                      Item;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Selected;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           Half;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.GetSelected
// [0x00020002] 
struct UMobileMenuList_execGetSelected_Parms
{
	// class UMobileMenuListItem*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuListItem*                      Item;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.Num
// [0x00020002] 
struct UMobileMenuList_execNum_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.AddItem
// [0x00024002] 
struct UMobileMenuList_execAddItem_Parms
{
	// class UMobileMenuListItem*                      Item;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuList.InitMenuObject
// [0x00020002] 
struct UMobileMenuList_execInitMenuObject_Parms
{
	// class UMobilePlayerInput*                       PlayerInput;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMobileMenuScene*                         Scene;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ScreenWidth;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             ScreenHeight;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsFirstInitialization : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuListItem.RenderItem
// [0x00020000] 
struct UMobileMenuListItem_execRenderItem_Parms
{
	// class UMobileMenuList*                          List;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuObjectProxy.RenderObject
// [0x00020002] 
struct UMobileMenuObjectProxy_execRenderObject_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuObjectProxy.OnTouch
// [0x00020802] ( FUNC_Event )
struct UMobileMenuObjectProxy_eventOnTouch_Parms
{
	// unsigned char                                   EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMobileMenuObject*                        ObjectOver;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// [0x00120000] 
struct UMobileMenuObjectProxy_execOnRenderObject_Parms
{
	// class UMobileMenuObjectProxy*                   Proxy;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// [0x00120000] 
struct UMobileMenuObjectProxy_execOnTouchEvent_Parms
{
	// class UMobileMenuObjectProxy*                   Proxy;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   EventType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	// float                                           TouchX;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           TouchY;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UMobileMenuObject*                        ObjectOver;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// [0x00020002] 
struct AMobileTouchInputVolume_execHandleDragOver_Parms
{
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// [0x00020002] 
struct AMobileTouchInputVolume_execHandleDoubleClick_Parms
{
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
// [0x00020002] 
struct AMobileTouchInputVolume_execHandleClick_Parms
{
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
// [0x00020102] 
struct AMobileTouchInputVolume_execOnToggle_Parms
{
	// class USeqAct_Toggle*                           inAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.TouchableElement3D.HandleDragOver
// [0x00020000] 
struct UTouchableElement3D_execHandleDragOver_Parms
{
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
// [0x00020000] 
struct UTouchableElement3D_execHandleDoubleClick_Parms
{
};

// Function GameFramework.TouchableElement3D.HandleClick
// [0x00020000] 
struct UTouchableElement3D_execHandleClick_Parms
{
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] ( FUNC_Event )
struct APlayerCollectorGame_eventGetSeamlessTravelActorList_Parms
{
	// DWORD                                           bToEntry : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< class AActor* >                         ActorList;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] ( FUNC_Event )
struct APlayerCollectorGame_eventLogin_Parms
{
	// struct FString                                  Portal;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Options;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FUniqueNetId                             UniqueId;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FString                                  ErrorMessage;                                     		// 0x0028 (0x0010) [0x0000000000000000]              
	// class APlayerController*                        ReturnValue;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
// [0x00020002] 
struct USeqEvent_HudRenderImage_execRender_Parms
{
	// class UCanvas*                                  TargetCanvas;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AHUD*                                     TargetHud;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           UsedX;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           UsedY;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           UsedXL;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           UsedYL;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           GlobalScaleX;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           GlobalScaleY;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqEvent_HudRenderText_eventGetObjClassVersion_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.SeqEvent_HudRenderText.Render
// [0x00020002] 
struct USeqEvent_HudRenderText_execRender_Parms
{
	// class UCanvas*                                  TargetCanvas;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AHUD*                                     TargetHud;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           UsedX;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           UsedY;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           UsedScaleX;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           UsedScaleY;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           GlobalScaleX;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           GlobalScaleY;                                     		// 0x002C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif