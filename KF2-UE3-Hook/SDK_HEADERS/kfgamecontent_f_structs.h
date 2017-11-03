/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: kfgamecontent_f_structs.h
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

// Function kfgamecontent.KFAIController_ZedPatriarch.DrawDebug
// [0x00020102] 
struct AKFAIController_ZedPatriarch_execDrawDebug_Parms
{
	// class AKFHUDBase*                               HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    Category;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  C;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.PlayDamagePlayerDialog
// [0x00020000] 
struct AKFAIController_ZedPatriarch_execPlayDamagePlayerDialog_Parms
{
	// class UClass*                                   dmgType;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.EnterZedVictoryState
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execEnterZedVictoryState_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ForceHeal
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execForceHeal_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyFleeFinished
// [0x00024002] 
struct AKFAIController_ZedPatriarch_execNotifyFleeFinished_Parms
{
	// DWORD                                           bAcquireNewEnemy : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Flee
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execFlee_Parms
{
	// class AActor*                                   FleeFromTarget;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           FleeDuration;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UAICommand_SpecialMove*                   AICSM;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoFleeFrom
// [0x00024002] 
struct AKFAIController_ZedPatriarch_execDoFleeFrom_Parms
{
	// class AActor*                                   FleeFrom;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           FleeDuration;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           FleeDistance;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bShouldStopAtGoal : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bFromFear : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoHeavyZedBump
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execDoHeavyZedBump_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             BumpEffectDamage;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AKFPawn_Monster*                          BumpedMonster;                                    		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoHeavyBump
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execDoHeavyBump_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// class AKFPawn_Human*                            KFPH;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_SearchForChargeObstructions
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execTimer_SearchForChargeObstructions_Parms
{
	// class AKFPawn*                                  ObstructingEnemy;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_SearchForFleeObstructions
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execTimer_SearchForFleeObstructions_Parms
{
	// class AKFPawn*                                  ObstructingEnemy;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NextBattlePhase
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execNextBattlePhase_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_StopSummoningZeds
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execTimer_StopSummoningZeds_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.AmIAllowedToSuicideWhenStuck
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execAmIAllowedToSuicideWhenStuck_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_RageTimeOut
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execTimer_RageTimeOut_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.UpdateRageState
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execUpdateRageState_Parms
{
	// float                                           DistSq;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           BestDistSq;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  BestTarget;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.StartPaternalInstinct
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execStartPaternalInstinct_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyTakeHit
// [0x00820002] 
struct AKFAIController_ZedPatriarch_execNotifyTakeHit_Parms
{
	// class AController*                              InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  EnemyPawn;                                        		// 0x002C (0x0008) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             pawnDmg;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pawnRotToVec;                                     		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyKilled
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execNotifyKilled_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              Killed;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    KilledPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyMeleeDamageDealt
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execNotifyMeleeDamageDealt_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifySpecialMoveEnded
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execNotifySpecialMoveEnded_Parms
{
	// class UKFSpecialMove*                           SM;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyCommandFinished
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execNotifyCommandFinished_Parms
{
	// class UAICommand*                               FinishedCommand;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyAttackActor
// [0x00020000] 
struct AKFAIController_ZedPatriarch_execNotifyAttackActor_Parms
{
	// class AActor*                                   A;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoorFinished
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execDoorFinished_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bSuperFinished : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyAttackDoor
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execNotifyAttackDoor_Parms
{
	// class AKFDoorActor*                             door;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SomeEnemiesAreHidden
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execSomeEnemiesAreHidden_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn*                                  KFP;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           TargetDist;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             NumValidHiddenEnemies;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.IsCeilingClear
// [0x00820002] 
struct AKFAIController_ZedPatriarch_execIsCeilingClear_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  TraceStart;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.CanSetSprinting
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execCanSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ShouldSprint
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execShouldSprint_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.EvaluateSprinting
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execEvaluateSprinting_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoStrike
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execDoStrike_Parms
{
	// struct FName                                    AttackName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.GetAdjustedAimFor
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execGetAdjustedAimFor_Parms
{
	// class AWeapon*                                  W;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  StartFireLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.IsWeaponArmClear
// [0x00820002] 
struct AKFAIController_ZedPatriarch_execIsWeaponArmClear_Parms
{
	// struct FVector                                  EndTrace;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  StartTrace;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.EvaluateAttacks
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execEvaluateAttacks_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bCanFireMinigun : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCanFireMissile : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCanFireMortar : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bShouldFireMortar : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bShouldFireMissile : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bMortarBarrage : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.UpdateRecentlySeenEnemyList
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execUpdateRecentlySeenEnemyList_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bWantsNewEnemy : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SeePlayer
// [0x00820802] ( FUNC_Event )
struct AKFAIController_ZedPatriarch_eventSeePlayer_Parms
{
	// class APawn*                                    Seen;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             EnemyListIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             HiddenEnemyIndex;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FPatriarch_TrackedEnemyInfo              NewTrackedEnemy;                                  		// 0x0010 (0x0020) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Tick
// [0x00020102] 
struct AKFAIController_ZedPatriarch_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SetBestTarget
// [0x00C24002] 
struct AKFAIController_ZedPatriarch_execSetBestTarget_Parms
{
	// TArray< class AKFPawn* >                        RecentTargets;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           MinDistSQ;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           MaxDistSQ;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           ClampFOV;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// DWORD                                           bPreferFurtherTargets : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bIsWeaponAttack : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn_Human*                            KFPH;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x0030 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  BestTarget;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
	// int                                             FoundIndex;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	// int                                             BestIndex;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           TempRating;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TempDist;                                         		// 0x0054 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ChangeEnemy
// [0x00024802] ( FUNC_Event )
struct AKFAIController_ZedPatriarch_eventChangeEnemy_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bCanTaunt : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APawn*                                    OldEnemy;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ForceSetEnemy
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execForceSetEnemy_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SetEnemy
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedPatriarch_eventSetEnemy_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.FindNewEnemy
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedPatriarch_eventFindNewEnemy_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.GetAggroRating
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execGetAggroRating_Parms
{
	// class AKFPawn*                                  KFP;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           AggroDmg;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.CanSwitchEnemies
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execCanSwitchEnemies_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.IsAggroEnemySwitchAllowed
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execIsAggroEnemySwitchAllowed_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Destroyed
// [0x00020902] ( FUNC_Event )
struct AKFAIController_ZedPatriarch_eventDestroyed_Parms
{
};

// Function kfgamecontent.KFAIController_ZedPatriarch.PawnDied
// [0x00020002] 
struct AKFAIController_ZedPatriarch_execPawnDied_Parms
{
	// class APawn*                                    inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Possess
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedPatriarch_eventPossess_Parms
{
	// class APawn*                                    inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.AICommand_FleshpoundKing_ChestBeamAttack.Popped
// [0x00020002] 
struct UAICommand_FleshpoundKing_ChestBeamAttack_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_FleshpoundKing_ChestBeamAttack.Pushed
// [0x00020002] 
struct UAICommand_FleshpoundKing_ChestBeamAttack_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_FleshpoundKing_ChestBeamAttack.ChestBeamAttack
// [0x00022002] 
struct UAICommand_FleshpoundKing_ChestBeamAttack_execChestBeamAttack_Parms
{
	// class AKFAIController_ZedFleshpoundKing*        AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_FleshpoundKing_ChestBeamAttack* Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.ForceTargetChange
// [0x00020002] 
struct AKFAIController_ZedFleshpoundKing_execForceTargetChange_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.ChangeEnemy
// [0x00024802] ( FUNC_Event )
struct AKFAIController_ZedFleshpoundKing_eventChangeEnemy_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bCanTaunt : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.SetEnemy
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedFleshpoundKing_eventSetEnemy_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.FindNewEnemy
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedFleshpoundKing_eventFindNewEnemy_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.CanSwitchEnemies
// [0x00020002] 
struct AKFAIController_ZedFleshpoundKing_execCanSwitchEnemies_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.NotifySpecialMoveEnded
// [0x00020002] 
struct AKFAIController_ZedFleshpoundKing_execNotifySpecialMoveEnded_Parms
{
	// class UKFSpecialMove*                           SM;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.TransitionToPhase
// [0x00020002] 
struct AKFAIController_ZedFleshpoundKing_execTransitionToPhase_Parms
{
	// int                                             NewPhase;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.NotifyTakeHit
// [0x00020002] 
struct AKFAIController_ZedFleshpoundKing_execNotifyTakeHit_Parms
{
	// class AController*                              InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           CurrentHealth;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.CheckForBeamAttack
// [0x00820002] 
struct AKFAIController_ZedFleshpoundKing_execCheckForBeamAttack_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APawn*                                    BestTarget;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           MaxBeamTargetDistSQ;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           DotAngle;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Rating;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           BestRating;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Projection;                                       		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnDir;                                          		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.Tick
// [0x00020902] ( FUNC_Event )
struct AKFAIController_ZedFleshpoundKing_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.SeePlayer
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedFleshpoundKing_eventSeePlayer_Parms
{
	// class APawn*                                    Seen;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.Possess
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedFleshpoundKing_eventPossess_Parms
{
	// class APawn*                                    inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDifficulty_FleshpoundKing.GetChestBeamCooldownTime
// [0x00022002] 
struct UKFDifficulty_FleshpoundKing_execGetChestBeamCooldownTime_Parms
{
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Husk_Suicide.GetSpecialMove
// [0x00020000] 
struct UAICommand_Husk_Suicide_execGetSpecialMove_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Husk_Suicide.Popped
// [0x00020002] 
struct UAICommand_Husk_Suicide_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_Husk_Suicide.Paused
// [0x00020002] 
struct UAICommand_Husk_Suicide_execPaused_Parms
{
	// class UGameAICommand*                           NewCommand;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Husk_Suicide.Resumed
// [0x00020002] 
struct UAICommand_Husk_Suicide_execResumed_Parms
{
	// struct FName                                    OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Husk_Suicide.Pushed
// [0x00020002] 
struct UAICommand_Husk_Suicide_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_Husk_Suicide.Suicide
// [0x00022002] 
struct UAICommand_Husk_Suicide_execSuicide_Parms
{
	// class AKFAIController_ZedHusk*                  AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_Husk_Suicide*                  Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedHusk.DebugAimError
// [0x00820002] 
struct AKFAIController_ZedHusk_execDebugAimError_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AKFDebugLines*                            KFDL;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SocketLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirToEnemy;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRotation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedHusk.ShootFireball
// [0x00820002] 
struct AKFAIController_ZedHusk_execShootFireball_Parms
{
	// class UClass*                                   FireballClass;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  FireballOffset;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SocketLocation;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirToEnemy;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// class AKFProj_Husk_Fireball*                    MyFireball;                                       		// 0x0044 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x004C (0x0008) [0x0000000000000000]              
	// struct FVector                                  AimLocation;                                      		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  GroundAimLocation;                                		// 0x0060 (0x000C) [0x0000000000000000]              
	// float                                           SplashAimChance;                                  		// 0x006C (0x0004) [0x0000000000000000]              
	// struct FVector                                  randVectorDraw;                                   		// 0x0070 (0x000C) [0x0000000000000000]              
	// float                                           randDraw;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	// struct FVector                                  displacementToHitLoc;                             		// 0x0080 (0x000C) [0x0000000000000000]              
	// float                                           distanceToHitLoc;                                 		// 0x008C (0x0004) [0x0000000000000000]              
	// class AKFPawn_ZedHusk*                          MyHuskPawn;                                       		// 0x0090 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedHusk.DoStrike
// [0x00020002] 
struct AKFAIController_ZedHusk_execDoStrike_Parms
{
};

// Function kfgamecontent.KFAIController_ZedHusk.ShouldSprint
// [0x00020002] 
struct AKFAIController_ZedHusk_execShouldSprint_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedHusk.SetEnemy
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedHusk_eventSetEnemy_Parms
{
	// class APawn*                                    NewEnemy;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedHusk.CanDoFireball
// [0x00020002] 
struct AKFAIController_ZedHusk_execCanDoFireball_Parms
{
	// float                                           DistToTargetSq;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedHusk.CanDoFlamethrower
// [0x00020002] 
struct AKFAIController_ZedHusk_execCanDoFlamethrower_Parms
{
	// float                                           DistToTargetSq;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedHusk.CanDoSuicide
// [0x00020002] 
struct AKFAIController_ZedHusk_execCanDoSuicide_Parms
{
	// float                                           DistToTargetSq;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedHusk.IsSuicidal
// [0x00020002] 
struct AKFAIController_ZedHusk_execIsSuicidal_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedHusk.Tick
// [0x00020102] 
struct AKFAIController_ZedHusk_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           DistToTargetSq;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedHusk.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedHusk_eventPostBeginPlay_Parms
{
	// class AKFGameInfo*                              KFGI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedHusk.Possess
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedHusk_eventPossess_Parms
{
	// class APawn*                                    inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedHusk.IsNearDoor
// [0x00020002] 
struct AKFAIController_ZedHusk_execIsNearDoor_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.HandleAICommandSpecialAction
// [0x00020802] ( FUNC_Event )
struct UAICommand_HuskFireBallAttack_eventHandleAICommandSpecialAction_Parms
{
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.Popped
// [0x00020002] 
struct UAICommand_HuskFireBallAttack_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.Pushed
// [0x00020002] 
struct UAICommand_HuskFireBallAttack_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.FireBallAttack
// [0x00022002] 
struct UAICommand_HuskFireBallAttack_execFireBallAttack_Parms
{
	// class AKFAIController_ZedHusk*                  AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_HuskFireBallAttack*            Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.CanOverrideMoveWith
// [0x00020002] 
struct UKFSM_Husk_FireBallAttack_execCanOverrideMoveWith_Parms
{
	// struct FName                                    NewMove;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Husk_FireBallAttack_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.NotifyFireballFired
// [0x00020002] 
struct UKFSM_Husk_FireBallAttack_execNotifyFireballFired_Parms
{
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.PlayAnimation
// [0x00020002] 
struct UKFSM_Husk_FireBallAttack_execPlayAnimation_Parms
{
	// int                                             AnimNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Husk_FireBallAttack_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.GetFireOffset
// [0x00020002] 
struct UKFSM_Husk_FireBallAttack_execGetFireOffset_Parms
{
	// struct FVector                                  ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_Husk_FireBallAttack_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.PackFlagsBase
// [0x00022002] 
struct UKFSM_Husk_FireBallAttack_execPackFlagsBase_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_HuskFlameThrowerAttack.Popped
// [0x00020002] 
struct UAICommand_HuskFlameThrowerAttack_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_HuskFlameThrowerAttack.Pushed
// [0x00020002] 
struct UAICommand_HuskFlameThrowerAttack_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_HuskFlameThrowerAttack.FlameThrowerAttack
// [0x00022002] 
struct UAICommand_HuskFlameThrowerAttack_execFlameThrowerAttack_Parms
{
	// class AKFAIController_ZedHusk*                  AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_HuskFlameThrowerAttack*        Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Patriarch_Grab.Popped
// [0x00020002] 
struct UAICommand_Patriarch_Grab_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_Grab.Pushed
// [0x00020002] 
struct UAICommand_Patriarch_Grab_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_Grab.TentacleGrab
// [0x00022002] 
struct UAICommand_Patriarch_Grab_execTentacleGrab_Parms
{
	// class AKFAIController_ZedPatriarch*             AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_Patriarch_Grab*                Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayBossMusic
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execPlayBossMusic_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.Timer_TickPatriarchDialog
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execTimer_TickPatriarchDialog_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayGrabbedPlayerDialog
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execPlayGrabbedPlayerDialog_Parms
{
	// class AKFPawn_Human*                            Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayMinigunAttackDialog
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execPlayMinigunAttackDialog_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayMinigunWarnDialog
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execPlayMinigunWarnDialog_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayStealthSoundLoopEnd
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execPlayStealthSoundLoopEnd_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayStealthSoundLoop
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execPlayStealthSoundLoop_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetWeaponAmbientSound
// [0x00024102] 
struct AKFPawn_ZedPatriarch_execSetWeaponAmbientSound_Parms
{
	// class UAkEvent*                                 NewAmbientSound;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UAkEvent*                                 FirstPersonAmbientSound;                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventPlayFootStepSound_Parms
{
	// int                                             FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CauseHeadTrauma
// [0x00024002] 
struct AKFPawn_ZedPatriarch_execCauseHeadTrauma_Parms
{
	// float                                           BleedOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.TerminateEffectsOnDeath
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execTerminateEffectsOnDeath_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayDying
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execPlayDying_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanInjureHitZone
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanInjureHitZone_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             HitZoneIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   KFDmgType;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FName                                    HitZoneName;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetHitZoneSkinTypeEffects
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execGetHitZoneSkinTypeEffects_Parms
{
	// int                                             HitZoneIdx;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UKFSkinTypeEffects*                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayTakeHitEffects
// [0x00024102] 
struct AKFPawn_ZedPatriarch_execPlayTakeHitEffects_Parms
{
	// struct FVector                                  HitDirection;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// DWORD                                           bUseHitImpulse : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetDamageFXActive
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execSetDamageFXActive_Parms
{
	// DWORD                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateBattlePhaseFX
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execUpdateBattlePhaseFX_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateBattlePhaseLights
// [0x00820102] 
struct AKFPawn_ZedPatriarch_execUpdateBattlePhaseLights_Parms
{
	// struct FLinearColor                             LinearBoilColor;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FColor                                   BoilColor;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned char                                   BattlePhaseArrayNum;                              		// 0x0014 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateBattlePhaseMaterials
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execUpdateBattlePhaseMaterials_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.DoCloakFX
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execDoCloakFX_Parms
{
	// class UParticleSystemComponent*                 CloakPSC;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateGameplayMICParams
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execUpdateGameplayMICParams_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bIsSpotted : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bWasCloaked : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CallOutCloakingExpired
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCallOutCloakingExpired_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CallOutCloaking
// [0x00024002] 
struct AKFPawn_ZedPatriarch_execCallOutCloaking_Parms
{
	// class AKFPlayerController*                      CallOutController;                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateSpottedStatus
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventUpdateSpottedStatus_Parms
{
	// DWORD                                           bOldSpottedByLP : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerController*                      LocalPC;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPerk*                                  LocalPerk;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           DistanceSq;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Range;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CausePanicWander
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCausePanicWander_Parms
{
	// class AKFAIController_ZedPatriarch*             MyPatController;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.OnStackingAfflictionChanged
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execOnStackingAfflictionChanged_Parms
{
	// unsigned char                                   Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AKFAIController_ZedPatriarch*             MyPatController;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ClientCloakingStateUpdated
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execClientCloakingStateUpdated_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetCloaked
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execSetCloaked_Parms
{
	// DWORD                                           bNewCloaking : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.NotifyGoreMeshActive
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventNotifyGoreMeshActive_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateHealingSyringeTransparency
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execUpdateHealingSyringeTransparency_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMinCloakPct
// [0x00080102] 
struct AKFPawn_ZedPatriarch_execGetMinCloakPct_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateGunTrackingSkelCtrl
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execUpdateGunTrackingSkelCtrl_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.Tick
// [0x00820902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           MinCloakPct;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Intensity;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           BoilPulseSin;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             ActualBoilColor;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMortarAimDirAndTargetLoc
// [0x00C20002] 
struct AKFPawn_ZedPatriarch_execGetMortarAimDirAndTargetLoc_Parms
{
	// int                                             MissileNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MissileLoc;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 MissileRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           MissileSpeed;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FPatriarch_MortarTarget                  MissileTarget;                                    		// 0x0038 (0x0014) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0064 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMortarTarget
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execGetMortarTarget_Parms
{
	// int                                             MortarNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FPatriarch_MortarTarget                  ReturnValue;                                      		// 0x0004 (0x0014) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ClearMortarTargets
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execClearMortarTargets_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PreMortarAttack
// [0x00020000] 
struct AKFPawn_ZedPatriarch_execPreMortarAttack_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CollectMortarTargets
// [0x00824002] 
struct AKFPawn_ZedPatriarch_execCollectMortarTargets_Parms
{
	// DWORD                                           bInitialTarget : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bForceInitialTarget : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             NumTargets;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           TargetDistSQ;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  MortarVelocity;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  MortarStartLoc;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetProjection;                                 		// 0x0044 (0x000C) [0x0000000000000000]              
	// class AKFAIController_ZedPatriarch*             MyPatController;                                  		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMortarClass
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execGetMortarClass_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMissileAimDirAndTargetLoc
// [0x00C20002] 
struct AKFPawn_ZedPatriarch_execGetMissileAimDirAndTargetLoc_Parms
{
	// int                                             MissileNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MissileLoc;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 MissileRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// int                                             EnemyIndex;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	// class AKFAIController_ZedPatriarch*             MyPatController;                                  		// 0x005C (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  EnemyPawn;                                        		// 0x0064 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMissileClass
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execGetMissileClass_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetAdjustedAimFor
// [0x00820102] 
struct AKFPawn_ZedPatriarch_execGetAdjustedAimFor_Parms
{
	// class AWeapon*                                  W;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  StartFireLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SocketLoc;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ActualAimRot;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetWeaponStartTraceLocation
// [0x00824902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventGetWeaponStartTraceLocation_Parms
{
	// class AWeapon*                                  CurrentWeapon;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SocketLoc;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetGunTracking
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execSetGunTracking_Parms
{
	// DWORD                                           bEnableTracking : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SpinMinigunBarrels
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execSpinMinigunBarrels_Parms
{
	// DWORD                                           bEnableSpin : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanMoveWhenMinigunning
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execCanMoveWhenMinigunning_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanBlock
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanBlock_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFAIController_ZedPatriarch*             MyPatController;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanDoMortarBarrage
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanDoMortarBarrage_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanMortarAttack
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanMortarAttack_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanMissileAttack
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanMissileAttack_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanTentacleGrab
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanTentacleGrab_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanChargeAttack
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanChargeAttack_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.StartWeaponCooldown
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execStartWeaponCooldown_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetPhaseCooldowns
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execSetPhaseCooldowns_Parms
{
	// int                                             BattlePhase;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.OnBattlePhaseChanged
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execOnBattlePhaseChanged_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.IncrementBattlePhase
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execIncrementBattlePhase_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.DesireSprintingInThisPhase
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execDesireSprintingInThisPhase_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.FleeAndHealBump
// [0x00820002] 
struct AKFPawn_ZedPatriarch_execFleeAndHealBump_Parms
{
	// class AKFPawn*                                  KFP;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ClosestPoint;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           ClosestDist;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class AKFAIController_ZedPatriarch*             KFAICP;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.Bump
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventBump_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.BreakOffSyringe
// [0x00820102] 
struct AKFPawn_ZedPatriarch_execBreakOffSyringe_Parms
{
	// int                                             SyringeNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AKFKActorSpawnable*                       NewKActor;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  BoneLoc;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  LinearVel;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AngularVel;                                       		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FQuat                                    BoneQuat;                                         		// 0x0030 (0x0010) [0x0000000000000000]              
	// struct FRotator                                 BoneRot;                                          		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FName                                    SyringeBoneName;                                  		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ANIMNOTIFY_SpawnedKActor
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execANIMNOTIFY_SpawnedKActor_Parms
{
	// class AKFKActorSpawnable*                       NewKActor;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UAnimNodeSequence*                        AnimSeqInstigator;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                SyringeMIC;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ANIMNOTIFY_GrabSyringe
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execANIMNOTIFY_GrabSyringe_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanSummonChildren
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execCanSummonChildren_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SummonChildren
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execSummonChildren_Parms
{
	// class UKFAIWaveInfo*                            MinionWave;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFGameInfo*                              MyKFGameInfo;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetFleeAndHealMode
// [0x00020102] 
struct AKFPawn_ZedPatriarch_execSetFleeAndHealMode_Parms
{
	// DWORD                                           bNewFleeAndHealStatus : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetBumpAttackDamageType
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execGetBumpAttackDamageType_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PossessedBy
// [0x00020002] 
struct AKFPawn_ZedPatriarch_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventPostInitAnimTree_Parms
{
	// class USkeletalMeshComponent*                   SkelComp;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetCharacterArch
// [0x00024102] 
struct AKFPawn_ZedPatriarch_execSetCharacterArch_Parms
{
	// class UKFCharacterInfoBase*                     Info;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForce : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.GetSpecialMove
// [0x00020002] 
struct UAICommand_Patriarch_MinigunBarrage_execGetSpecialMove_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.Popped
// [0x00020002] 
struct UAICommand_Patriarch_MinigunBarrage_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.LockdownAI
// [0x00020000] 
struct UAICommand_Patriarch_MinigunBarrage_execLockdownAI_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.Pushed
// [0x00020002] 
struct UAICommand_Patriarch_MinigunBarrage_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.MinigunBarrage
// [0x00022002] 
struct UAICommand_Patriarch_MinigunBarrage_execMinigunBarrage_Parms
{
	// class AKFAIController_ZedPatriarch*             AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_Patriarch_MinigunBarrage*      Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.AnimEndNotify
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execAnimEndNotify_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayWindDownAnim
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execPlayWindDownAnim_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.Timer_SearchForMinigunTargets
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execTimer_SearchForMinigunTargets_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.Timer_CheckIfFireAllowed
// [0x00820002] 
struct UKFSM_Patriarch_MinigunBarrage_execTimer_CheckIfFireAllowed_Parms
{
	// class AKFPawn*                                  KFP;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  PawnDir;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Projection;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  OtherProjection;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PawnRot2D;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// float                                           DistSq;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayFireAnim
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execPlayFireAnim_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.SpecialMoveFlagsUpdated
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execSpecialMoveFlagsUpdated_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.Timer_CheckEnemyLOS
// [0x00820002] 
struct UKFSM_Patriarch_MinigunBarrage_execTimer_CheckEnemyLOS_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayWindUpAnimation
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execPlayWindUpAnimation_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayAnimation
// [0x00020000] 
struct UKFSM_Patriarch_MinigunBarrage_execPlayAnimation_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.GetAnimStance
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execGetAnimStance_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Patriarch_MinigunBarrage_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	// unsigned char                                   Variant;                                          		// 0x000D (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PackSMFlags
// [0x00022002] 
struct UKFSM_Patriarch_MinigunBarrage_execPackSMFlags_Parms
{
	// DWORD                                           bIsFanFireAttack : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Patriarch_MissileAttack.Popped
// [0x00020002] 
struct UAICommand_Patriarch_MissileAttack_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_MissileAttack.Pushed
// [0x00020002] 
struct UAICommand_Patriarch_MissileAttack_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_MissileAttack.FireMissiles
// [0x00022002] 
struct UAICommand_Patriarch_MissileAttack_execFireMissiles_Parms
{
	// class AKFAIController_ZedPatriarch*             AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_Patriarch_MissileAttack*       Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Patriarch_MortarAttack.Popped
// [0x00020002] 
struct UAICommand_Patriarch_MortarAttack_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_MortarAttack.Pushed
// [0x00020002] 
struct UAICommand_Patriarch_MortarAttack_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_Patriarch_MortarAttack.FireMortar
// [0x00022002] 
struct UAICommand_Patriarch_MortarAttack_execFireMortar_Parms
{
	// class AKFAIController_ZedPatriarch*             AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsBarrageAttack : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_Patriarch_MortarAttack*        Cmd;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.AICommand_Siren_Scream.Popped
// [0x00020002] 
struct UAICommand_Siren_Scream_execPopped_Parms
{
};

// Function kfgamecontent.AICommand_Siren_Scream.Pushed
// [0x00020002] 
struct UAICommand_Siren_Scream_execPushed_Parms
{
};

// Function kfgamecontent.AICommand_Siren_Scream.LockdownAI
// [0x00020000] 
struct UAICommand_Siren_Scream_execLockdownAI_Parms
{
};

// Function kfgamecontent.AICommand_Siren_Scream.Scream
// [0x00022002] 
struct UAICommand_Siren_Scream_execScream_Parms
{
	// class AKFAIController_ZedSiren*                 AI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAICommand_Siren_Scream*                  Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedSiren.EnterZedVictoryState
// [0x00020002] 
struct AKFAIController_ZedSiren_execEnterZedVictoryState_Parms
{
	// class UAICommand_Siren_Scream*                  ScreamCommand;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedSiren.DoPanicWander
// [0x00020002] 
struct AKFAIController_ZedSiren_execDoPanicWander_Parms
{
	// class UGameAICommand*                           ActiveCommand;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UAICommand_Siren_Scream*                  ScreamCommand;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifyCommandFinished
// [0x00020002] 
struct AKFAIController_ZedSiren_execNotifyCommandFinished_Parms
{
	// class UAICommand*                               FinishedCommand;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifyMeleeAttackFinished
// [0x00020002] 
struct AKFAIController_ZedSiren_execNotifyMeleeAttackFinished_Parms
{
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifyReachedLatentMoveGoal
// [0x00020002] 
struct AKFAIController_ZedSiren_execNotifyReachedLatentMoveGoal_Parms
{
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifySpecialMoveEnded
// [0x00020002] 
struct AKFAIController_ZedSiren_execNotifySpecialMoveEnded_Parms
{
	// class UKFSpecialMove*                           SM;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifySpecialMoveStarted
// [0x00020002] 
struct AKFAIController_ZedSiren_execNotifySpecialMoveStarted_Parms
{
	// class UKFSpecialMove*                           SM;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UAICommand_Siren_Scream*                  ScreamCommand;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedSiren.AcquireEnemyAndScream
// [0x00024002] 
struct AKFAIController_ZedSiren_execAcquireEnemyAndScream_Parms
{
	// DWORD                                           bStartScreamTimer : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ScreamTimer;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APawn*                                    BestTarget;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bScreamActive : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedSiren.DoScream
// [0x00024002] 
struct AKFAIController_ZedSiren_execDoScream_Parms
{
	// DWORD                                           bCalledFromPreMove : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedSiren.PreMoveToEnemy
// [0x00020002] 
struct AKFAIController_ZedSiren_execPreMoveToEnemy_Parms
{
};

// Function kfgamecontent.KFAffliction_Fire_Patriarch.SetMaterialParameter
// [0x00020002] 
struct UKFAffliction_Fire_Patriarch_execSetMaterialParameter_Parms
{
	// float                                           BurnedAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.NotifyTakeHit
// [0x00020002] 
struct AKFAIController_HansFriendlyTest_execNotifyTakeHit_Parms
{
	// class AController*                              InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.ShouldSprint
// [0x00020002] 
struct AKFAIController_HansFriendlyTest_execShouldSprint_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           RangeToEnemy;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
struct AKFAIController_HansFriendlyTest_eventScriptGetTeamNum_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.InitPlayerReplicationInfo
// [0x00020000] 
struct AKFAIController_HansFriendlyTest_execInitPlayerReplicationInfo_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHusk.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedHusk_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.OnStackingAfflictionChanged
// [0x00020002] 
struct AKFPawn_ZedHusk_execOnStackingAfflictionChanged_Parms
{
	// unsigned char                                   Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.PlayHit
// [0x00020002] 
struct AKFPawn_ZedHusk_execPlayHit_Parms
{
	// float                                           Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.NotifyTakeHit
// [0x00020002] 
struct AKFPawn_ZedHusk_execNotifyTakeHit_Parms
{
	// class AController*                              InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// class UKFAIDirector*                            KFAID;                                            		// 0x0034 (0x0008) [0x0000000000000000]              
	// class APawn*                                    NewEnemy;                                         		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.AdjustDamage
// [0x00420002] 
struct AKFPawn_ZedHusk_execAdjustDamage_Parms
{
	// int                                             InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.OnExploded
// [0x00020100] 
struct AKFPawn_ZedHusk_execOnExploded_Parms
{
	// class AController*                              SuicideController;                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.WeeklyShouldExplodeOnDeath
// [0x00020002] 
struct AKFPawn_ZedHusk_execWeeklyShouldExplodeOnDeath_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHusk.TriggerExplosion
// [0x00024002] 
struct AKFPawn_ZedHusk_execTriggerExplosion_Parms
{
	// DWORD                                           bIgnoreHumans : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFExplosionActorReplicated*              ExploActor;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AController*                              DamageInstigator;                                 		// 0x000C (0x0008) [0x0000000000000000]              
	// class AController*                              OldController;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// DWORD                                           bExplodeOnDeath : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHusk.HitZoneInjured
// [0x00024102] 
struct AKFPawn_ZedHusk_execHitZoneInjured_Parms
{
	// int                                             HitZoneIdx;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.CanInjureHitZone
// [0x00020002] 
struct AKFPawn_ZedHusk_execCanInjureHitZone_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             HitZoneIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHusk.ApplySpecialZoneHealthMod
// [0x00020002] 
struct AKFPawn_ZedHusk_execApplySpecialZoneHealthMod_Parms
{
	// float                                           HealthMod;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.GetSuicideSM
// [0x00020102] 
struct AKFPawn_ZedHusk_execGetSuicideSM_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.OnAnimNotifyParticleSystemSpawned
// [0x00020102] 
struct AKFPawn_ZedHusk_execOnAnimNotifyParticleSystemSpawned_Parms
{
	// class UAnimNotify_PlayParticleEffect*           AnimNotifyData;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.TerminateEffectsOnDeath
// [0x00020102] 
struct AKFPawn_ZedHusk_execTerminateEffectsOnDeath_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHusk.GetWeaponStartTraceLocation
// [0x00824902] ( FUNC_Event )
struct AKFPawn_ZedHusk_eventGetWeaponStartTraceLocation_Parms
{
	// class AWeapon*                                  CurrentWeapon;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Loc;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
	// class AKFAIController_ZedHusk*                  HuskAIC;                                          		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_HuskFireballAttack
// [0x00020102] 
struct AKFPawn_ZedHusk_execANIMNOTIFY_HuskFireballAttack_Parms
{
	// class AKFAIController_ZedHusk*                  HuskAIC;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UKFSM_Husk_FireBallAttack*                FireballSM;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.Tick
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedHusk_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.SetFireLightEnabled
// [0x00020102] 
struct AKFPawn_ZedHusk_execSetFireLightEnabled_Parms
{
	// DWORD                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_WarnZedsOfFireball
// [0x00820102] 
struct AKFPawn_ZedHusk_execANIMNOTIFY_WarnZedsOfFireball_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Monster*                          HitMonster;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  FireLocation;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DangerPoint;                                      		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDirection;                                     		// 0x0060 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.NotifyAnimInterrupt
// [0x00024002] 
struct AKFPawn_ZedHusk_execNotifyAnimInterrupt_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_FlameThrowerOff
// [0x00020102] 
struct AKFPawn_ZedHusk_execANIMNOTIFY_FlameThrowerOff_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_FlameThrowerOn
// [0x00020102] 
struct AKFPawn_ZedHusk_execANIMNOTIFY_FlameThrowerOn_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHusk.SetCharacterArch
// [0x00024102] 
struct AKFPawn_ZedHusk_execSetCharacterArch_Parms
{
	// class UKFCharacterInfoBase*                     Info;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForce : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHusk.PossessedBy
// [0x00020002] 
struct AKFPawn_ZedHusk_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Husk_Fireball.TriggerExplosion
// [0x00020102] 
struct AKFProj_Husk_Fireball_execTriggerExplosion_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// class AKFExplosionActorLingering*               GFExplosionActor;                                 		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Husk_Fireball.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_Husk_Fireball_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.CanDoFlamethrower
// [0x00020002] 
struct AKFAIController_HuskFriendlyTest_execCanDoFlamethrower_Parms
{
	// float                                           DistToTargetSq;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.CanDoFireball
// [0x00020002] 
struct AKFAIController_HuskFriendlyTest_execCanDoFireball_Parms
{
	// float                                           DistToTargetSq;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
struct AKFAIController_HuskFriendlyTest_eventScriptGetTeamNum_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.InitPlayerReplicationInfo
// [0x00020000] 
struct AKFAIController_HuskFriendlyTest_execInitPlayerReplicationInfo_Parms
{
};

// Function kfgamecontent.KFAIController_ZedClot_AlphaKing.Timer_CheckForRally
// [0x00020002] 
struct AKFAIController_ZedClot_AlphaKing_execTimer_CheckForRally_Parms
{
	// float                                           RallyDistSQ;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   NumPawnsForRally;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedClot_AlphaKing.SeePlayer
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedClot_AlphaKing_eventSeePlayer_Parms
{
	// class APawn*                                    Seen;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedClot_AlphaKing.InitRallySettings
// [0x00020002] 
struct AKFAIController_ZedClot_AlphaKing_execInitRallySettings_Parms
{
	// class UClass*                                   MyDifficultySettings;                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_AlphaRally.RallyZeds
// [0x00020002] 
struct UKFSM_AlphaRally_execRallyZeds_Parms
{
	// class AKFPawn_Monster*                          KFPM;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_AlphaRally.PlayAnimation
// [0x00020002] 
struct UKFSM_AlphaRally_execPlayAnimation_Parms
{
};

// Function kfgamecontent.KFSM_AlphaRally.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_AlphaRally_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_AlphaRally.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_AlphaRally_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_AlphaRally.PackRallyFlags
// [0x00022002] 
struct UKFSM_AlphaRally_execPackRallyFlags_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFDifficulty_ClotAlpha.GetSpecialAlphaChance
// [0x00022002] 
struct UKFDifficulty_ClotAlpha_execGetSpecialAlphaChance_Parms
{
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateShieldUI
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execUpdateShieldUI_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.DetachShieldFX
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execDetachShieldFX_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.BreakShield
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execBreakShield_Parms
{
	// class AKFExplosionActor*                        ExplosionActor;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.MakeVectorFromColor
// [0x00820102] 
struct AKFPawn_ZedFleshpoundKing_execMakeVectorFromColor_Parms
{
	// struct FColor                                   InColor;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             LinColor;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FVector                                  ColorVec;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateShield
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execUpdateShield_Parms
{
	// float                                           ShieldHealthPct;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ActivateShieldFX
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execActivateShieldFX_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ActivateShield
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execActivateShield_Parms
{
	// class AKFGameInfo*                              KFGI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           HealthMod;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           HeadHealthMod;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.SetShieldScale
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execSetShieldScale_Parms
{
	// float                                           InScale;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.AdjustDamage
// [0x00420002] 
struct AKFPawn_ZedFleshpoundKing_execAdjustDamage_Parms
{
	// int                                             InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.TriggerRagePoundExplosion
// [0x00024102] 
struct AKFPawn_ZedFleshpoundKing_execTriggerRagePoundExplosion_Parms
{
	// struct FVector                                  ExploLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// DWORD                                           bIsFinalPound : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFExplosionActor*                        ExploActor;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PauseBossWave
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execPauseBossWave_Parms
{
	// class AKFGameInfo*                              KFGI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.SpawnSubWave
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execSpawnSubWave_Parms
{
	// class UKFAIWaveInfo*                            SpawnInfo;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFGameInfo*                              KFGI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_RagePoundRightFinal
// [0x00820102] 
struct AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_RagePoundRightFinal_Parms
{
	// struct FVector                                  ExploLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_RagePoundRight
// [0x00820102] 
struct AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_RagePoundRight_Parms
{
	// struct FVector                                  ExploLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_RagePoundLeft
// [0x00820102] 
struct AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_RagePoundLeft_Parms
{
	// struct FVector                                  ExploLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateBattlePhaseLights
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execUpdateBattlePhaseLights_Parms
{
	// class UPointLightComponent*                     LightTemplate;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateGameplayMICParams
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execUpdateGameplayMICParams_Parms
{
	// class UMaterialInstanceConstant*                MIC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ToggleSMBeam
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execToggleSMBeam_Parms
{
	// DWORD                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UKFSM_FleshpoundKing_ChestBeam*           BeamSM;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_ChestBeamEnd
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_ChestBeamEnd_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_ChestBeamStart
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_ChestBeamStart_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ApplyHeadChunkGore
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execApplyHeadChunkGore_Parms
{
	// class UClass*                                   dmgType;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PlayHeadAsplode
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execPlayHeadAsplode_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PlayDismemberment
// [0x00024102] 
struct AKFPawn_ZedFleshpoundKing_execPlayDismemberment_Parms
{
	// int                                             InHitZoneIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   InDmgType;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.CauseHeadTrauma
// [0x00024002] 
struct AKFPawn_ZedFleshpoundKing_execCauseHeadTrauma_Parms
{
	// float                                           BleedOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PlayBossMusic
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execPlayBossMusic_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PossessedBy
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedFleshpoundKing_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetNumMinionsToSpawn
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execGetNumMinionsToSpawn_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetWaveInfo
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execGetWaveInfo_Parms
{
	// int                                             BattlePhase;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Difficulty;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UKFAIWaveInfo*                            ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.OnZedDied
// [0x00020002] 
struct AKFPawn_ZedFleshpoundKing_execOnZedDied_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetBossCameraOffset
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execGetBossCameraOffset_Parms
{
	// struct FVector                                  ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetBossCameraSocket
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execGetBossCameraSocket_Parms
{
	// struct FName                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UseAnimatedBossCamera
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execUseAnimatedBossCamera_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.SetAnimatedBossCamera
// [0x00024102] 
struct AKFPawn_ZedFleshpoundKing_execSetAnimatedBossCamera_Parms
{
	// DWORD                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  CameraOffset;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetHealthPercent
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execGetHealthPercent_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.IsABoss
// [0x00022902] ( FUNC_Event )
struct AKFPawn_ZedFleshpoundKing_eventIsABoss_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetRandomBossCaption
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execGetRandomBossCaption_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetMonsterPawn
// [0x00020102] 
struct AKFPawn_ZedFleshpoundKing_execGetMonsterPawn_Parms
{
	// class AKFPawn_Monster*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedFleshpound_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedFleshpound_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetOverheadDebugText
// [0x00C20102] 
struct AKFPawn_ZedFleshpound_execGetOverheadDebugText_Parms
{
	// class AKFHUDBase*                               HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FString >                        OverheadTexts;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	// TArray< struct FColor >                         OverheadColors;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  DebugText;                                        		// 0x0028 (0x0010) [0x0000000000000000]              
	// float                                           RedScalar;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           Scalar;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FColor                                   ModifyTextColor;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.Tick
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedFleshpound_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.AdjustAffliction
// [0x00420102] 
struct AKFPawn_ZedFleshpound_execAdjustAffliction_Parms
{
	// float                                           AfflictionPower;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetBumpAttackDamageType
// [0x00020002] 
struct AKFPawn_ZedFleshpound_execGetBumpAttackDamageType_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.PlayDying
// [0x00020102] 
struct AKFPawn_ZedFleshpound_execPlayDying_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.StopRageSound
// [0x00020102] 
struct AKFPawn_ZedFleshpound_execStopRageSound_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpound.SetGlowColors
// [0x00020102] 
struct AKFPawn_ZedFleshpound_execSetGlowColors_Parms
{
	// struct FLinearColor                             GlowColor;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                MIC;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.UpdateGameplayMICParams
// [0x00020102] 
struct AKFPawn_ZedFleshpound_execUpdateGameplayMICParams_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpound.SetEnraged
// [0x00020102] 
struct AKFPawn_ZedFleshpound_execSetEnraged_Parms
{
	// DWORD                                           bNewEnraged : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpound.IsEnraged
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedFleshpound_eventIsEnraged_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpound.ShouldPlaySpecialMeleeAnims
// [0x00020002] 
struct AKFPawn_ZedFleshpound_execShouldPlaySpecialMeleeAnims_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpound.UpdateBattlePhaseLights
// [0x00020102] 
struct AKFPawn_ZedFleshpound_execUpdateBattlePhaseLights_Parms
{
	// class UPointLightComponent*                     LightTemplate;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.TerminateEffectsOnDeath
// [0x00020102] 
struct AKFPawn_ZedFleshpound_execTerminateEffectsOnDeath_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpound.CanBlock
// [0x00020002] 
struct AKFPawn_ZedFleshpound_execCanBlock_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpound.CauseHeadTrauma
// [0x00024002] 
struct AKFPawn_ZedFleshpound_execCauseHeadTrauma_Parms
{
	// float                                           BleedOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedFleshpound_eventPlayFootStepSound_Parms
{
	// int                                             FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.SetSprinting
// [0x00020002] 
struct AKFPawn_ZedFleshpound_execSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshpound.StartSteering
// [0x00020100] 
struct AKFPawn_ZedFleshpound_execStartSteering_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpound.OnStackingAfflictionChanged
// [0x00020002] 
struct AKFPawn_ZedFleshpound_execOnStackingAfflictionChanged_Parms
{
	// unsigned char                                   Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AKFAIController_ZedFleshpound*            FpAIC;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedFleshpound_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshpound.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedFleshpound_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
struct AKFPawn_ZedFleshpound_eventGetAIPawnClassToSpawn_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_FleshpoundKing_ChestBeam_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.Timer_TickDamage
// [0x00820002] 
struct UKFSM_FleshpoundKing_ChestBeam_execTimer_TickDamage_Parms
{
	// struct FVector                                  SocketLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamDir;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0048 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0050 (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.Timer_AttemptTargetChange
// [0x00820002] 
struct UKFSM_FleshpoundKing_ChestBeam_execTimer_AttemptTargetChange_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APawn*                                    BestTarget;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFAIController_ZedFleshpoundKing*        KingFPController;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  PawnDir;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           DotAngle;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           BestAngle;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.DisableBeamFX
// [0x00020002] 
struct UKFSM_FleshpoundKing_ChestBeam_execDisableBeamFX_Parms
{
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.ToggleBeam
// [0x00820002] 
struct UKFSM_FleshpoundKing_ChestBeam_execToggleBeam_Parms
{
	// DWORD                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FParticleSysParam                        SourceParam;                                      		// 0x0004 (0x0040) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.SetBeamTarget
// [0x00820002] 
struct UKFSM_FleshpoundKing_ChestBeam_execSetBeamTarget_Parms
{
	// struct FVector                                  SocketLoc;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BeamEnd;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SocketRot;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0008) [0x0000000000000000]              
	// DWORD                                           bShouldActivateHit : 1;                           		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.IsValidBeamTarget
// [0x00020002] 
struct UKFSM_FleshpoundKing_ChestBeam_execIsValidBeamTarget_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.Tick
// [0x00020002] 
struct UKFSM_FleshpoundKing_ChestBeam_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_FleshpoundKing_ChestBeam_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedGorefast.IsFrustrated
// [0x00020002] 
struct AKFAIController_ZedGorefast_execIsFrustrated_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedGorefast.UpdateSprintFrustration
// [0x00024002] 
struct AKFAIController_ZedGorefast_execUpdateSprintFrustration_Parms
{
	// unsigned char                                   bForceFrustrationState;                           		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedGorefast.EnemyNotVisible
// [0x00020802] ( FUNC_Event )
struct AKFAIController_ZedGorefast_eventEnemyNotVisible_Parms
{
};

// Function kfgamecontent.KFAIController_ZedGorefast.CanSetSprinting
// [0x00020002] 
struct AKFAIController_ZedGorefast_execCanSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedGorefast.ShouldSprint
// [0x00020002] 
struct AKFAIController_ZedGorefast_execShouldSprint_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_Patriarch_Heal.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Patriarch_Heal_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_Heal.DoHeal
// [0x00020002] 
struct UKFSM_Patriarch_Heal_execDoHeal_Parms
{
	// float                                           HealPercent;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HealAmount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             MyDifficulty;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_Heal.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Patriarch_Heal_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_Heal.PackSMFlags
// [0x00022002] 
struct UKFSM_Patriarch_Heal_execPackSMFlags_Parms
{
	// int                                             inBattlePhase;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_Taunt.PackSMFlags
// [0x00022002] 
struct UKFSM_Patriarch_Taunt_execPackSMFlags_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   InTauntType;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0009 (0x0001) [0x0000000000000000]              
	// unsigned char                                   Variant;                                          		// 0x000A (0x0001) [0x0000000000000000]              
	// class UKFPawnAnimInfo*                          PAI;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedScrake.CanAttackDestructibles
// [0x00020002] 
struct AKFAIController_ZedScrake_execCanAttackDestructibles_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedScrake.CanEvadeGrenade
// [0x00020002] 
struct AKFAIController_ZedScrake_execCanEvadeGrenade_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedScrake.UpdateSprintFrustration
// [0x00024000] 
struct AKFAIController_ZedScrake_execUpdateSprintFrustration_Parms
{
	// unsigned char                                   bForceFrustrationState;                           		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFAIController_ZedScrake.CanSetSprinting
// [0x00020002] 
struct AKFAIController_ZedScrake_execCanSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedScrake.ShouldSprint
// [0x00020002] 
struct AKFAIController_ZedScrake_execShouldSprint_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAIController_ZedScrake.AmIAllowedToSuicideWhenStuck
// [0x00020002] 
struct AKFAIController_ZedScrake_execAmIAllowedToSuicideWhenStuck_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAISpawnManager_Versus.ResetSpawnManager
// [0x00020002] 
struct UKFAISpawnManager_Versus_execResetSpawnManager_Parms
{
};

// Function kfgamecontent.KFAISpawnManager_Versus.CanSpawnPlayerBoss
// [0x00080002] 
struct UKFAISpawnManager_Versus_execCanSpawnPlayerBoss_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetNumActiveZedsOfClass
// [0x00080002] 
struct UKFAISpawnManager_Versus_execGetNumActiveZedsOfClass_Parms
{
	// class UClass*                                   ZedClass;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AKFPawn_Monster*                          MonsterPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             NumZeds;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetNumWaitingZedPlayers
// [0x00080002] 
struct UKFAISpawnManager_Versus_execGetNumWaitingZedPlayers_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             NumWaiting;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.HaveZedPlayers
// [0x00080002] 
struct UKFAISpawnManager_Versus_execHaveZedPlayers_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.IsPlayerZedSpawnAllowed
// [0x00080002] 
struct UKFAISpawnManager_Versus_execIsPlayerZedSpawnAllowed_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAISpawnManager_Versus.RestartPlayerZed
// [0x00820002] 
struct UKFAISpawnManager_Versus_execRestartPlayerZed_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFSpawnVolume*                           SpawnVolume;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  SpawnLocation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.RecyclePendingZedPawnClass
// [0x00020002] 
struct UKFAISpawnManager_Versus_execRecyclePendingZedPawnClass_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.Timer_SpawnBossPlayerZeds
// [0x00020002] 
struct UKFAISpawnManager_Versus_execTimer_SpawnBossPlayerZeds_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      BestPlayer;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      SecondBestPlayer;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             LivingPlayerCount;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           LongestSpawnTime;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           TimeSinceSpawn;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           RandomFloat;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// DWORD                                           bNeedRespawn : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAISpawnManager_Versus.FindTakeoverZed
// [0x00020002] 
struct UKFAISpawnManager_Versus_execFindTakeoverZed_Parms
{
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Monster*                          KFPM;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bNextZed : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   AliveClass;                                       		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.SpawnRemainingReservedZeds
// [0x00024002] 
struct UKFAISpawnManager_Versus_execSpawnRemainingReservedZeds_Parms
{
	// DWORD                                           bSpawnAllReservedZeds : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             NumWaitingZedPlayers;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class UClass* >                         TempSquad;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.NeedPlayerSpawnVolume
// [0x00020002] 
struct UKFAISpawnManager_Versus_execNeedPlayerSpawnVolume_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAISpawnManager_Versus.Timer_CheckForZedTakeovers
// [0x00020002] 
struct UKFAISpawnManager_Versus_execTimer_CheckForZedTakeovers_Parms
{
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bNeedRespawn : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< class AKFPlayerControllerVersus* >      ZedPlayers;                                       		// 0x000C (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             LivingPlayerCount;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             DesiredTakeovers;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.CheckForTakeoverTimer
// [0x00020002] 
struct UKFAISpawnManager_Versus_execCheckForTakeoverTimer_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             ZedPlayers;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.RespawnZedHumanPlayers
// [0x00884002] 
struct UKFAISpawnManager_Versus_execRespawnZedHumanPlayers_Parms
{
	// class AKFSpawnVolume*                           SpawnVolume;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsTakeOverSpawn : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerController*                      KFPC;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnLocation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// unsigned char                                   SquadType;                                        		// 0x0020 (0x0001) [0x0000000000000000]              
	// TArray< class AKFPlayerController* >            CrawlerPlayers;                                   		// 0x0024 (0x0010) [0x0000000000000000]              
	// TArray< class AKFPlayerController* >            MediumPlayers;                                    		// 0x0034 (0x0010) [0x0000000000000000]              
	// TArray< class AKFPlayerController* >            LargePlayers;                                     		// 0x0044 (0x0010) [0x0000000000000000]              
	// TArray< class AKFPlayerController* >            BossPlayers;                                      		// 0x0054 (0x0010) [0x0000000000000000]              
	// int                                             NumSpawned;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             NumSquadMembers;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	// TArray< class UClass* >                         TempPawnClasses;                                  		// 0x006C (0x0010) [0x0000000000000000]              
	// TArray< class UClass* >                         CrawlerPawnClasses;                               		// 0x007C (0x0010) [0x0000000000000000]              
	// TArray< class UClass* >                         MediumPawnClasses;                                		// 0x008C (0x0010) [0x0000000000000000]              
	// TArray< class UClass* >                         LargePawnClasses;                                 		// 0x009C (0x0010) [0x0000000000000000]              
	// TArray< class UClass* >                         BossPawnClasses;                                  		// 0x00AC (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x00BC (0x0004) [0x0000000000000000]              
	// DWORD                                           bStopSpawning : 1;                                		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetSpawnLocation
// [0x00020002] 
struct UKFAISpawnManager_Versus_execGetSpawnLocation_Parms
{
	// class UClass*                                   MonsterPawnClass;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFSpawnVolume*                           SpawnVolume;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.ReserveStrongZedsForPlayers
// [0x00420002] 
struct UKFAISpawnManager_Versus_execReserveStrongZedsForPlayers_Parms
{
	// TArray< class UClass* >                         LeftoverZeds;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UClass*                                   LeftoverZedClass;                                 		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.GiveAvailableZedClass
// [0x00424002] 
struct UKFAISpawnManager_Versus_execGiveAvailableZedClass_Parms
{
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< class UClass* >                         AvailableZeds;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           bSecondPass : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bReservedCheck : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             ZedIndex;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   PassedOnZeds;                                     		// 0x002C (0x0010) [0x0000000000000000]              
	// TArray< class UClass* >                         PossibleZeds;                                     		// 0x003C (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.AssignZedsToPlayers
// [0x00420002] 
struct UKFAISpawnManager_Versus_execAssignZedsToPlayers_Parms
{
	// TArray< class UClass* >                         NewZeds;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetSpecialSquad
// [0x00020002] 
struct UKFAISpawnManager_Versus_execGetSpecialSquad_Parms
{
	// int                                             WaveArrayNum;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.CheckForSpecialSquadSpawn
// [0x00020002] 
struct UKFAISpawnManager_Versus_execCheckForSpecialSquadSpawn_Parms
{
	// int                                             WaveArrayNum;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bRequireEndWaveSpecialSquadSpawn : 1;             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFAISpawnManager_Versus.Timer_SpawnPlayerZeds
// [0x00020002] 
struct UKFAISpawnManager_Versus_execTimer_SpawnPlayerZeds_Parms
{
	// int                                             RandNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// TArray< class UClass* >                         NewSquad;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	// float                                           SpawnTimer;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.SpawnSquad
// [0x00424002] 
struct UKFAISpawnManager_Versus_execSpawnSquad_Parms
{
	// TArray< class UClass* >                         AIToSpawn;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           bSkipHumanZedSpawning : 1;                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             NumSpawned;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.SetupNextWave
// [0x00020002] 
struct UKFAISpawnManager_Versus_execSetupNextWave_Parms
{
	// unsigned char                                   NextWaveIndex;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             SquadZedCount;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class UKFAISpawnSquad* >                SquadList;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
	// float                                           SpawnWaitTime;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetAIAliveCount
// [0x00020002] 
struct UKFAISpawnManager_Versus_execGetAIAliveCount_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.SetHaveUpdatePerk
// [0x00020802] ( FUNC_Event )
struct AKFPlayerControllerVersus_eventSetHaveUpdatePerk_Parms
{
	// DWORD                                           bUsedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPlayerControllerVersus.InitInputSystem
// [0x00020802] ( FUNC_Event )
struct AKFPlayerControllerVersus_eventInitInputSystem_Parms
{
};

// Function kfgamecontent.KFPlayerControllerVersus.ClientReset
// [0x010201C2] 
struct AKFPlayerControllerVersus_execClientReset_Parms
{
	// class AActor*                                   A;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< class AActor* >                         BloodSplatActors;                                 		// 0x0008 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.Reset
// [0x00020002] 
struct AKFPlayerControllerVersus_execReset_Parms
{
};

// Function kfgamecontent.KFPlayerControllerVersus.NotifyChangeSpectateViewTarget
// [0x00020002] 
struct AKFPlayerControllerVersus_execNotifyChangeSpectateViewTarget_Parms
{
	// class AKFPawn_Monster*                          KFPM;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.ClientRecieveNewTeam
// [0x00020002] 
struct AKFPlayerControllerVersus_execClientRecieveNewTeam_Parms
{
};

// Function kfgamecontent.KFPlayerControllerVersus.ServerNotifyTeamChanged
// [0x00020002] 
struct AKFPlayerControllerVersus_execServerNotifyTeamChanged_Parms
{
};

// Function kfgamecontent.KFPlayerControllerVersus.RequestSwitchTeam
// [0x00020202] ( FUNC_Exec )
struct AKFPlayerControllerVersus_execRequestSwitchTeam_Parms
{
	// class AKFPlayerReplicationInfo*                 KFPRI;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.ChangeTeam
// [0x00024202] ( FUNC_Exec )
struct AKFPlayerControllerVersus_execChangeTeam_Parms
{
	// struct FString                                  TeamName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.NotifyOfAutoBalance
// [0x01020142] 
struct AKFPlayerControllerVersus_execNotifyOfAutoBalance_Parms
{
};

// Function kfgamecontent.KFPlayerControllerVersus.RecieveChatMessage
// [0x00024002] 
struct AKFPlayerControllerVersus_execRecieveChatMessage_Parms
{
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ChatMessage;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FName                                    Type;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           MsgLifeTime;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.ShouldDisplayGameplayPostProcessFX
// [0x00020002] 
struct AKFPlayerControllerVersus_execShouldDisplayGameplayPostProcessFX_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPlayerControllerVersus.AddTrackedDamage
// [0x00020002] 
struct AKFPlayerControllerVersus_execAddTrackedDamage_Parms
{
	// int                                             Amount;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamagerClass;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   VictimClass;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.AwardZedDamage
// [0x00020002] 
struct AKFPlayerControllerVersus_execAwardZedDamage_Parms
{
	// int                                             DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bDamagerIsMe : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPlayerControllerVersus.StopAltFire
// [0x00024202] ( FUNC_Exec )
struct AKFPlayerControllerVersus_execStopAltFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.StartAltFire
// [0x00024202] ( FUNC_Exec )
struct AKFPlayerControllerVersus_execStartAltFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.ClientRestart
// [0x010201C2] 
struct AKFPlayerControllerVersus_execClientRestart_Parms
{
	// class APawn*                                    NewPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerControllerVersus.Restart
// [0x00020002] 
struct AKFPlayerControllerVersus_execRestart_Parms
{
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetEndOfMatchTime
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execGetEndOfMatchTime_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ShowPostGameMenu
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execShowPostGameMenu_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.TryRestartGame
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execTryRestartGame_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CheckRoundEndAchievements
// [0x00080002] 
struct AKFGameInfo_VersusSurvival_execCheckRoundEndAchievements_Parms
{
	// unsigned char                                   WinningTeam;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SwitchOnePlayerToTeam
// [0x00080002] 
struct AKFGameInfo_VersusSurvival_execSwitchOnePlayerToTeam_Parms
{
	// unsigned char                                   TeamNum;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.StartSpawning
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execStartSpawning_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PreSelectPlayerStarts
// [0x00080002] 
struct AKFGameInfo_VersusSurvival_execPreSelectPlayerStarts_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   TeamNum;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsInitialSpawnPointSelection
// [0x00022002] 
struct AKFGameInfo_VersusSurvival_execIsInitialSpawnPointSelection_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BeginNextRound
// [0x00080002] 
struct AKFGameInfo_VersusSurvival_execBeginNextRound_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CheckTeamNumbers
// [0x00080002] 
struct AKFGameInfo_VersusSurvival_execCheckTeamNumbers_Parms
{
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             HumanPlayers;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ZedPlayers;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Timer_AnnounceNextRound
// [0x00080002] 
struct AKFGameInfo_VersusSurvival_execTimer_AnnounceNextRound_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ClosePostRoundMenu
// [0x00084002] 
struct AKFGameInfo_VersusSurvival_execClosePostRoundMenu_Parms
{
	// DWORD                                           bMatchOver : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Reset
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execReset_Parms
{
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.UpdateSecondRoundTeamScore
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execUpdateSecondRoundTeamScore_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.UpdateFirstRoundTeamScore
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execUpdateFirstRoundTeamScore_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.OpenPostRoundMenu
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execOpenPostRoundMenu_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ResetAllPickups
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execResetAllPickups_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CheckPawnsForGriefing
// [0x00084002] 
struct AKFGameInfo_VersusSurvival_execCheckPawnsForGriefing_Parms
{
	// DWORD                                           bInitial : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APawn*                                    TestPawn;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Monster*                          MonsterTestPawn;                                  		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BossDied
// [0x00024002] 
struct AKFGameInfo_VersusSurvival_execBossDied_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bCheckWaveEnded : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.WaveEnded
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execWaveEnded_Parms
{
	// unsigned char                                   WinCondition;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AKFPlayerReplicationInfoVersus*           KFPRIV;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             WaveKills;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Killed
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execKilled_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              KilledPlayer;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    KilledPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.EndOfMatch
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execEndOfMatch_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerController*                      KFPC;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             TempScore;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// class AKFPlayerReplicationInfoVersus*           KFPRIV;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ScoreKill
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execScoreKill_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              Other;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AKFPlayerReplicationInfo*                 DamagerKFPRI;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ScoreDamage
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execScoreDamage_Parms
{
	// int                                             DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HealthBeforeDamage;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    DamagedPawn;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UKFInterface_MonsterBoss*                 BossRef;                                          		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ReduceDamage
// [0x00420002] 
struct AKFGameInfo_VersusSurvival_execReduceDamage_Parms
{
	// int                                             Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    injured;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x003C (0x0028) [0x0000000000000000]              
	// class AKFPawn*                                  InstigatorPawn;                                   		// 0x0064 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  InjuredPawn;                                      		// 0x006C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetLivingPlayerCount
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execGetLivingPlayerCount_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              P;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             UsedLivingHumanPlayersCount;                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetDefaultPlayerClass
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execGetDefaultPlayerClass_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetAIControlledMonsterAliveCount
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execGetAIControlledMonsterAliveCount_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AAIController*                            AIP;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             UsedLivingAIMonsterCount;                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SetPlayerDefaults
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execSetPlayerDefaults_Parms
{
	// class APawn*                                    PlayerPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Human*                            P;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.RestartPlayer
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execRestartPlayer_Parms
{
	// class AController*                              NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             PlayerTeamIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AKFPawn_Monster*                          MonsterPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Logout
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execLogout_Parms
{
	// class AController*                              Exiting;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.OnWaitingPlayerTeamSwapped
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execOnWaitingPlayerTeamSwapped_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         Start;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PostLogin
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_VersusSurvival_eventPostLogin_Parms
{
	// class APlayerController*                        NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SetTeam
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execSetTeam_Parms
{
	// class AController*                              Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFTeamInfo_Human*                        NewTeam;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ATeamInfo*                                OldTeam;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ChangeTeam
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execChangeTeam_Parms
{
	// class AController*                              Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             N;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           bNewTeam : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PickTeam
// [0x00420002] 
struct AKFGameInfo_VersusSurvival_execPickTeam_Parms
{
	// unsigned char                                   Current;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AController*                              C;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             PlayerID;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0014 (0x0001) [0x0000000000000000]              
	// int                                             Group;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetReservedTotals
// [0x00C20002] 
struct AKFGameInfo_VersusSurvival_execGetReservedTotals_Parms
{
	// int                                             Human;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Zed;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FPlayerGroupStruct                       Group;                                            		// 0x0008 (0x0014) [0x0000000000000000]              
	// struct FUniqueNetId                             Id;                                               		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetPRIById
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execGetPRIById_Parms
{
	// struct FUniqueNetId                             Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PickGroupTeam
// [0x00024002] 
struct AKFGameInfo_VersusSurvival_execPickGroupTeam_Parms
{
	// int                                             GroupSize;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000000]              
	// int                                             Human;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Zed;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetPlayerGroup
// [0x00C24002] 
struct AKFGameInfo_VersusSurvival_execGetPlayerGroup_Parms
{
	// struct FUniqueNetId                             PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             IdIndex;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FPlayerGroupStruct                       Group;                                            		// 0x0010 (0x0014) [0x0000000000000000]              
	// struct FUniqueNetId                             Id;                                               		// 0x0024 (0x0008) [0x0000000000000000]              
	// int                                             GroupIndex;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CreateTeam
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execCreateTeam_Parms
{
	// int                                             TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SwapTeamFor
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execSwapTeamFor_Parms
{
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerControllerVersus*                KFPCV;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BalanceTeamsOld
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execBalanceTeamsOld_Parms
{
	// int                                             Delta;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             AutoBalanceRemaining;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ATeamInfo*                                TI;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// TArray< class APlayerReplicationInfo* >         AutoBalanceList;                                  		// 0x0014 (0x0010) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BalanceTeams
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execBalanceTeams_Parms
{
	// int                                             Delta;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// TArray< class APlayerReplicationInfo* >         HumanSingles;                                     		// 0x000C (0x0010) [0x0000000000000000]              
	// TArray< class APlayerReplicationInfo* >         ZedSingles;                                       		// 0x001C (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BalanceSingles
// [0x00424002] 
struct AKFGameInfo_VersusSurvival_execBalanceSingles_Parms
{
	// TArray< class APlayerReplicationInfo* >         HumanSingles;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< class APlayerReplicationInfo* >         ZedSingles;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	// DWORD                                           bTryAnyway : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Delta;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	// DWORD                                           RC : 1;                                           		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsLegal
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execIsLegal_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsBalanceable
// [0x00024002] 
struct AKFGameInfo_VersusSurvival_execIsBalanceable_Parms
{
	// int                                             NumHumanSingles;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             NumZedSingles;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             AdditionalDelta;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetDelta
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execGetDelta_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SplitGroups
// [0x00820002] 
struct AKFGameInfo_VersusSurvival_execSplitGroups_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FPlayerGroupStruct                       NewGroup;                                         		// 0x0004 (0x0014) [0x0000000000000000]              
	// struct FPlayerGroupStruct                       StupidUnrealscriptBS;                             		// 0x0018 (0x0014) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SplitArrayByTeam
// [0x00C20002] 
struct AKFGameInfo_VersusSurvival_execSplitArrayByTeam_Parms
{
	// struct FPlayerGroupStruct                       Group;                                            		// 0x0000 (0x0014) [0x0000000000000000]              
	// struct FPlayerGroupStruct                       Other;                                            		// 0x0014 (0x0014) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             StupidUnrealscriptBS;                             		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.StripAbsentPlayers
// [0x00820002] 
struct AKFGameInfo_VersusSurvival_execStripAbsentPlayers_Parms
{
	// int                                             GroupIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PlayerIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             StupidUnrealBS;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ShouldStartMatch
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execShouldStartMatch_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.StartMatch
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execStartMatch_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< class AKFPlayerController* >            PlayerControllers;                                		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsPlayerReady
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execIsPlayerReady_Parms
{
	// class AKFPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.InitGRIVariables
// [0x00020002] 
struct AKFGameInfo_VersusSurvival_execInitGRIVariables_Parms
{
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_VersusSurvival_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.DebugKillZeds
// [0x00020002] 
struct AKFGameInfo_Survival_execDebugKillZeds_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.TryRestartGame
// [0x00020002] 
struct AKFGameInfo_Survival_execTryRestartGame_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.UpdateCurrentMapVoteTime
// [0x00024002] 
struct AKFGameInfo_Survival_execUpdateCurrentMapVoteTime_Parms
{
	// unsigned char                                   NewTime;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bStartTime : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.ProcessAwards
// [0x00020002] 
struct AKFGameInfo_Survival_execProcessAwards_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.GetEndOfMatchTime
// [0x00020002] 
struct AKFGameInfo_Survival_execGetEndOfMatchTime_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.ShowPostGameMenu
// [0x00020002] 
struct AKFGameInfo_Survival_execShowPostGameMenu_Parms
{
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.SetZedsToVictoryState
// [0x00020002] 
struct AKFGameInfo_Survival_execSetZedsToVictoryState_Parms
{
	// class AKFAIController*                          KFAIC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.SetWonGameCamera
// [0x00020002] 
struct AKFGameInfo_Survival_execSetWonGameCamera_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.GetNextMap
// [0x00020002] 
struct AKFGameInfo_Survival_execGetNextMap_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             NextMapIndex;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.EndOfMatch
// [0x00020002] 
struct AKFGameInfo_Survival_execEndOfMatch_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerController*                      KFPC;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.NotifyTraderOpened
// [0x00020002] 
struct AKFGameInfo_Survival_execNotifyTraderOpened_Parms
{
	// TArray< class USequenceObject* >                AllTraderOpenedEvents;                            		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< int >                                   OutputLinksToActivate;                            		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UKFSeqEvent_TraderOpened*                 TraderOpenedEvt;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.OpenTrader
// [0x00020002] 
struct AKFGameInfo_Survival_execOpenTrader_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.DoTraderTimeCleanup
// [0x00020000] 
struct AKFGameInfo_Survival_execDoTraderTimeCleanup_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.CloseTraderTimer
// [0x00020000] 
struct AKFGameInfo_Survival_execCloseTraderTimer_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.LogWaveEndAnalyticsFor
// [0x00020002] 
struct AKFGameInfo_Survival_execLogWaveEndAnalyticsFor_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< struct FWeaponDamage >                  Weapons;                                          		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.Timer_FinalizeEndOfWaveStats
// [0x00020002] 
struct AKFGameInfo_Survival_execTimer_FinalizeEndOfWaveStats_Parms
{
	// DWORD                                           bOpeningTrader : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerController*                      KFPC;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.WaveEnded
// [0x00020002] 
struct AKFGameInfo_Survival_execWaveEnded_Parms
{
	// unsigned char                                   WinCondition;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllWaveEndEvents;                                 		// 0x0004 (0x0010) [0x0000000000000000]              
	// TArray< int >                                   OutputLinksToActivate;                            		// 0x0014 (0x0010) [0x0000000000000000]              
	// class UKFSeqEvent_WaveEnd*                      WaveEndEvt;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.CheckWaveEnd
// [0x00024002] 
struct AKFGameInfo_Survival_execCheckWaveEnd_Parms
{
	// DWORD                                           bForceWaveEnd : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.WaveStarted
// [0x00020002] 
struct AKFGameInfo_Survival_execWaveStarted_Parms
{
	// TArray< class USequenceObject* >                AllWaveStartEvents;                               		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< int >                                   OutputLinksToActivate;                            		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UKFSeqEvent_WaveStart*                    WaveStartEvt;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.DetermineNextTraderIndex
// [0x00020002] 
struct AKFGameInfo_Survival_execDetermineNextTraderIndex_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   NextTraderIndex;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.SetupNextTrader
// [0x00020002] 
struct AKFGameInfo_Survival_execSetupNextTrader_Parms
{
	// unsigned char                                   NextTraderIndex;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.ResetPickups
// [0x00020002] 
struct AKFGameInfo_Survival_execResetPickups_Parms
{
	// TArray< class AKFPickupFactory* >               PickupList;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             NumPickups;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.ResetAllPickups
// [0x00020002] 
struct AKFGameInfo_Survival_execResetAllPickups_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.StartWave
// [0x00020002] 
struct AKFGameInfo_Survival_execStartWave_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.IsWaveActive
// [0x00020000] 
struct AKFGameInfo_Survival_execIsWaveActive_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.WinMatch
// [0x00020202] ( FUNC_Exec )
struct AKFGameInfo_Survival_execWinMatch_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.SetWave
// [0x00020202] ( FUNC_Exec )
struct AKFGameInfo_Survival_execSetWave_Parms
{
	// unsigned char                                   NewWaveNum;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.EndCurrentWave
// [0x00020202] ( FUNC_Exec )
struct AKFGameInfo_Survival_execEndCurrentWave_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.ToggleSpawning
// [0x00024202] ( FUNC_Exec )
struct AKFGameInfo_Survival_execToggleSpawning_Parms
{
	// struct FString                                  ZedTypeString;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.AllowWaveCheats
// [0x00020002] 
struct AKFGameInfo_Survival_execAllowWaveCheats_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.GetAdjustedDeathPenalty
// [0x00024002] 
struct AKFGameInfo_Survival_execGetAdjustedDeathPenalty_Parms
{
	// class AKFPlayerReplicationInfo*                 KilledPlayerPRI;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bLateJoiner : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           MinimumRespawnDosh;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           PlayerRespawnDosh;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           UsedMaxRespawnDosh;                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.RewardSurvivingPlayers
// [0x00020002] 
struct AKFGameInfo_Survival_execRewardSurvivingPlayers_Parms
{
	// int                                             PlayerCut;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PlayerCount;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFTeamInfo_Human*                        T;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.UpdateWaveEndDialogInfo
// [0x00020002] 
struct AKFGameInfo_Survival_execUpdateWaveEndDialogInfo_Parms
{
	// int                                             PlayersAlive;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PlayersTotal;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             MostZedsKilled;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             MostDoshEarned;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             BestTeammateScore;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KilledMostZeds;                                   		// 0x001C (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      EarnedMostDosh;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      BestTeammate;                                     		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.IsMultiplayerGame
// [0x00020002] 
struct AKFGameInfo_Survival_execIsMultiplayerGame_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.Timer
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_Survival_eventTimer_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.CanSpectate
// [0x00020002] 
struct AKFGameInfo_Survival_execCanSpectate_Parms
{
	// class APlayerController*                        Viewer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   ViewTarget;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.UpdateGameSettings
// [0x00020002] 
struct AKFGameInfo_Survival_execUpdateGameSettings_Parms
{
	// struct FName                                    SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UKFOnlineGameSettings*                    KFGameSettings;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             NumHumanPlayers;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UKFGameEngine*                            KFEngine;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.BossDied
// [0x00024002] 
struct AKFGameInfo_Survival_execBossDied_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bCheckWaveEnded : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn_Monster*                          AIP;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.ReduceDamage
// [0x00420002] 
struct AKFGameInfo_Survival_execReduceDamage_Parms
{
	// int                                             Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    injured;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x003C (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.Killed
// [0x00020002] 
struct AKFGameInfo_Survival_execKilled_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              KilledPlayer;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    KilledPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.RestartPlayer
// [0x00020002] 
struct AKFGameInfo_Survival_execRestartPlayer_Parms
{
	// class AController*                              NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPlayerReplicationInfo*                 KFPRI;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bWasWaitingForClientPerkData : 1;                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.PlayerCanRestart
// [0x00020002] 
struct AKFGameInfo_Survival_execPlayerCanRestart_Parms
{
	// class APlayerController*                        aPlayer;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.IsPlayerReady
// [0x00020002] 
struct AKFGameInfo_Survival_execIsPlayerReady_Parms
{
	// class AKFPlayerReplicationInfo*                 PRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerController*                      KFPC;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.GetGameIntensityForMusic
// [0x00020002] 
struct AKFGameInfo_Survival_execGetGameIntensityForMusic_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.PlayWaveStartDialog
// [0x00020002] 
struct AKFGameInfo_Survival_execPlayWaveStartDialog_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.StartMatch
// [0x00020002] 
struct AKFGameInfo_Survival_execStartMatch_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Survival.InitSpawnManager
// [0x00020002] 
struct AKFGameInfo_Survival_execInitSpawnManager_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_Survival_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_Survival_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFGameInfo_Survival.ShouldPlayActionMusicTrack
// [0x00022002] 
struct AKFGameInfo_Survival_execShouldPlayActionMusicTrack_Parms
{
	// class AKFGameReplicationInfo*                   GRI;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Survival.ShouldPlayMusicAtStart
// [0x00022002] 
struct AKFGameInfo_Survival_execShouldPlayMusicAtStart_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedScrake.OnStackingAfflictionChanged
// [0x00020002] 
struct AKFPawn_ZedScrake_execOnStackingAfflictionChanged_Parms
{
	// unsigned char                                   Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.SetSprinting
// [0x00020002] 
struct AKFPawn_ZedScrake_execSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedScrake.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedScrake_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedScrake_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.CleanupChainsaw
// [0x00020102] 
struct AKFPawn_ZedScrake_execCleanupChainsaw_Parms
{
	// class UMaterialInstanceConstant*                ChainsawBladeMIC;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.TerminateEffectsOnDeath
// [0x00020102] 
struct AKFPawn_ZedScrake_execTerminateEffectsOnDeath_Parms
{
};

// Function kfgamecontent.KFPawn_ZedScrake.NotifyGoreMeshActive
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedScrake_eventNotifyGoreMeshActive_Parms
{
};

// Function kfgamecontent.KFPawn_ZedScrake.CauseHeadTrauma
// [0x00024002] 
struct AKFPawn_ZedScrake_execCauseHeadTrauma_Parms
{
	// float                                           BleedOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.CanBlock
// [0x00020002] 
struct AKFPawn_ZedScrake_execCanBlock_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedScrake.SetEnraged
// [0x00020102] 
struct AKFPawn_ZedScrake_execSetEnraged_Parms
{
	// DWORD                                           bNewEnraged : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedScrake.TakeDamage
// [0x00024802] ( FUNC_Event )
struct AKFPawn_ZedScrake_eventTakeDamage_Parms
{
	// int                                             Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.CreateExhaustFx
// [0x00820102] 
struct AKFPawn_ZedScrake_execCreateExhaustFx_Parms
{
	// struct FVector                                  Loc;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.PossessedBy
// [0x00020002] 
struct AKFPawn_ZedScrake_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFAIController_Monster*                  KFAICM;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake.SetCharacterArch
// [0x00024102] 
struct AKFPawn_ZedScrake_execSetCharacterArch_Parms
{
	// class UKFCharacterInfoBase*                     Info;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForce : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedScrake.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedScrake_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFCollectibleActor.Reset
// [0x00020100] 
struct AKFCollectibleActor_execReset_Parms
{
};

// Function kfgamecontent.KFCollectibleActor.AdjustDamage
// [0x00420002] 
struct AKFCollectibleActor_execAdjustDamage_Parms
{
	// int                                             InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFCollectibleActor.TriggerDestroyedEvent
// [0x00080802] ( FUNC_Event )
struct AKFCollectibleActor_eventTriggerDestroyedEvent_Parms
{
	// class AController*                              EventInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UKFMapInfo*                               KFMI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDifficulty_Bloat.GetPukeMinesToSpawnOnDeath
// [0x00022002] 
struct UKFDifficulty_Bloat_execGetPukeMinesToSpawnOnDeath_Parms
{
	// class AKFPawn_ZedBloat*                         BloatPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGameInfo*                                GI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedBloat_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.SpawnPukeMinesOnDeath
// [0x00020002] 
struct AKFPawn_ZedBloat_execSpawnPukeMinesOnDeath_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.SpawnPukeMine
// [0x00020002] 
struct AKFPawn_ZedBloat_execSpawnPukeMine_Parms
{
	// struct FVector                                  SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            PukeMine;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.DealExplosionDamage
// [0x00820002] 
struct AKFPawn_ZedBloat_execDealExplosionDamage_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.HitExplosiveBone
// [0x00020002] 
struct AKFPawn_ZedBloat_execHitExplosiveBone_Parms
{
	// struct FName                                    HitBoneName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   JointIndex;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.TakeHitZoneDamage
// [0x00020002] 
struct AKFPawn_ZedBloat_execTakeHitZoneDamage_Parms
{
	// float                                           Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             HitZoneIdx;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  InstigatorLocation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
	// int                                             HitZoneIndex;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FName                                    HitBoneName;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.Died
// [0x00020002] 
struct AKFPawn_ZedBloat_execDied_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedBloat.HasInjuredHitZones
// [0x00020102] 
struct AKFPawn_ZedBloat_execHasInjuredHitZones_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedBloat.CanInjureHitZone
// [0x00020002] 
struct AKFPawn_ZedBloat_execCanInjureHitZone_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             HitZoneIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedBloat.CanPukeOnTarget
// [0x00820002] 
struct AKFPawn_ZedBloat_execCanPukeOnTarget_Parms
{
	// class APawn*                                    PukeTarget;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  PukeLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PukeDirection;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  VectToEnemy;                                      		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FBox                                     ActorBox;                                         		// 0x0030 (0x001C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.DealPukeDamage
// [0x00820002] 
struct AKFPawn_ZedBloat_execDealPukeDamage_Parms
{
	// class APawn*                                    Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Origin;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VectToEnemy;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.Puke
// [0x00820002] 
struct AKFPawn_ZedBloat_execPuke_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  PukeLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  PukeDirection;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 PukeRotation;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0050 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x005C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedBloat.ANIMNOTIFY_PukeAttack
// [0x00020002] 
struct AKFPawn_ZedBloat_execANIMNOTIFY_PukeAttack_Parms
{
};

// Function kfgamecontent.KFPawn_ZedBloat.PostBeginPlay
// [0x00020102] 
struct AKFPawn_ZedBloat_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFDifficulty_Crawler.GetSpecialCrawlerChance
// [0x00022002] 
struct UKFDifficulty_Crawler_execGetSpecialCrawlerChance_Parms
{
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDifficulty_Fleshpound.GetSpecialFleshpoundChance
// [0x00022002] 
struct UKFDifficulty_Fleshpound_execGetSpecialFleshpoundChance_Parms
{
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDifficulty_Gorefast.GetSpecialGorefastChance
// [0x00022002] 
struct UKFDifficulty_Gorefast_execGetSpecialGorefastChance_Parms
{
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDifficulty_Husk.GetFireballSettings
// [0x00822002] 
struct UKFDifficulty_Husk_execGetFireballSettings_Parms
{
	// class AKFPawn_ZedHusk*                          HuskPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FsHuskFireballSettings                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FsHuskFireballSettings                   DefaultFireballSettings;                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_AA12Shotgun.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_AA12Shotgun_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_AK12.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_AK12_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_Assault_Medic.GetMedicToxicDmgType
// [0x00426002] 
struct UKFDT_Ballistic_Assault_Medic_execGetMedicToxicDmgType_Parms
{
	// int                                             out_Damage;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class AKFPerk*                                  InstigatorPerk;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_Assault_Medic.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Ballistic_Assault_Medic_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_Assault_Medic.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_Assault_Medic_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_CenterfireMB464.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_CenterfireMB464_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_DBShotgun.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_DBShotgun_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_Deagle.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_Deagle_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_DragonsBreath.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Ballistic_DragonsBreath_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_DragonsBreath.PlayImpactHitEffects
// [0x00026002] 
struct UKFDT_Ballistic_DragonsBreath_execPlayImpactHitEffects_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// unsigned char                                   HitZoneIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	// class APawn*                                    HitInstigator;                                    		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_DragonsBreath.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_DragonsBreath_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Fire_DragonsBreathDoT.GetDamageeDialogID
// [0x00022002] 
struct UKFDT_Fire_DragonsBreathDoT_execGetDamageeDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_DragonsBreathDoT.GetDamagerDialogID
// [0x00022002] 
struct UKFDT_Fire_DragonsBreathDoT_execGetDamagerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_DragonsBreathDoT.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Fire_DragonsBreathDoT_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_HansAK12.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Ballistic_HansAK12_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Ballistic_Hemogoblin_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.PlayImpactHitEffects
// [0x00826002] 
struct UKFDT_Ballistic_Hemogoblin_execPlayImpactHitEffects_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// unsigned char                                   HitZoneIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	// class APawn*                                    HitInstigator;                                    		// 0x0024 (0x0008) [0x0000000000000000]              
	// class AActor*                                   TubeAttachment;                                   		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FVector                                  StickLocation;                                    		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StickRotation;                                    		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x004C (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0054 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  RetracePawn;                                      		// 0x005C (0x0008) [0x0000000000000000]              
	// struct FVector                                  RetraceLocation;                                  		// 0x0064 (0x000C) [0x0000000000000000]              
	// struct FVector                                  RetraceNormal;                                    		// 0x0070 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x007C (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.CanDismemberHitZoneWhileAlive
// [0x00022102] 
struct UKFDT_Ballistic_Hemogoblin_execCanDismemberHitZoneWhileAlive_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_Hemogoblin_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.Tick
// [0x00820802] ( FUNC_Event )
struct AKFWeapActor_Hemogoblin_Tube_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  NewRelativeLocation;                              		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.ActualDestroy
// [0x00020002] 
struct AKFWeapActor_Hemogoblin_Tube_execActualDestroy_Parms
{
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.TearDown
// [0x00020002] 
struct AKFWeapActor_Hemogoblin_Tube_execTearDown_Parms
{
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFWeapActor_Hemogoblin_Tube_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFDT_Ballistic_HX25SubmunitionImpact.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_HX25SubmunitionImpact_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_HZ12.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_HZ12_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_M14EBR.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_M14EBR_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_M4Shotgun.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_M4Shotgun_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_MB500.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_MB500_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_NailShotgun.GetPinProjectileClass
// [0x00022102] 
struct UKFDT_Ballistic_NailShotgun_execGetPinProjectileClass_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Nail_Nailgun.Landed
// [0x00020102] 
struct AKFProj_Nail_Nailgun_execLanded_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   FloorActor;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Nail_Nailgun.Tick
// [0x00020102] 
struct AKFProj_Nail_Nailgun_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Nail_Nailgun.ProcessTouch
// [0x00020102] 
struct AKFProj_Nail_Nailgun_execProcessTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Nail_Nailgun.HitWall
// [0x00020902] ( FUNC_Event )
struct AKFProj_Nail_Nailgun_eventHitWall_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      WallComp;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_PatMinigun.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Ballistic_PatMinigun_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_Pistol_Medic.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Ballistic_Pistol_Medic_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_RailGun.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_RailGun_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_RailGun.GetBoneToDismember
// [0x00422102] 
struct UKFDT_Ballistic_RailGun_execGetBoneToDismember_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FName                                    OutBoneName;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_SCAR.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_SCAR_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_Shotgun_Medic.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Ballistic_Shotgun_Medic_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_Shotgun_Medic.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_Shotgun_Medic_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_SMG_Medic.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Ballistic_SMG_Medic_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Ballistic_SW500.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_SW500_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Ballistic_Winchester.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Ballistic_Winchester_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Bludgeon_Patriarch.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Bludgeon_Patriarch_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Bludgeon_PatriarchKick.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Bludgeon_PatriarchKick_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Bludgeon_PatriarchMetal.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Bludgeon_PatriarchMetal_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Explosive_CrawlerSuicide.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Explosive_CrawlerSuicide_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Explosive_HansHEGrenade.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Explosive_HansHEGrenade_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Explosive_HuskSuicide.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Explosive_HuskSuicide_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Explosive_PatMissile.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Explosive_PatMissile_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Explosive_PatMortar.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Explosive_PatMortar_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_CaulkBurn.GetDamageeDialogID
// [0x00022002] 
struct UKFDT_Fire_CaulkBurn_execGetDamageeDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_CaulkBurn.GetDamagerDialogID
// [0x00022002] 
struct UKFDT_Fire_CaulkBurn_execGetDamagerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_CaulkBurn.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Fire_CaulkBurn_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_FlameThrower.GetDamageeDialogID
// [0x00022002] 
struct UKFDT_Fire_FlameThrower_execGetDamageeDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_FlameThrower.GetDamagerDialogID
// [0x00022002] 
struct UKFDT_Fire_FlameThrower_execGetDamagerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_FlameThrower.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Fire_FlameThrower_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_FlareGun.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Fire_FlareGun_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_FlareGunDoT.GetDamageeDialogID
// [0x00022002] 
struct UKFDT_Fire_FlareGunDoT_execGetDamageeDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_FlareGunDoT.GetDamagerDialogID
// [0x00022002] 
struct UKFDT_Fire_FlareGunDoT_execGetDamagerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Fire_FlareGunDoT.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Fire_FlareGunDoT_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Freeze_FreezeGrenade.PlayImpactHitEffects
// [0x00026002] 
struct UKFDT_Freeze_FreezeGrenade_execPlayImpactHitEffects_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// unsigned char                                   HitZoneIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	// class APawn*                                    HitInstigator;                                    		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           ParamValue;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             MICIndex;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Microwave_Beam.CheckObliterate
// [0x00022002] 
struct UKFDT_Microwave_Beam_execCheckObliterate_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Piercing_KnifeStab_FieldMedic.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Piercing_KnifeStab_FieldMedic_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Piercing_NadeFragment.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Piercing_NadeFragment_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Piercing_NailFragment.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Piercing_NailFragment_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_Eviscerator.ModifyDismembermentHitImpulse
// [0x00422102] 
struct UKFDT_Slashing_Eviscerator_execModifyDismembermentHitImpulse_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutImpulseDir;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutParentImpulseDir;                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           OutImpulseScale;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           OutParentImpulseScale;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x003C (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Eviscerator.GetBoneToDismember
// [0x00422102] 
struct UKFDT_Slashing_Eviscerator_execGetBoneToDismember_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FName                                    OutBoneName;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x0024 (0x0001) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Eviscerator.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_Eviscerator_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_EvisceratorProj.GetBoneToDismember
// [0x00422102] 
struct UKFDT_Slashing_EvisceratorProj_execGetBoneToDismember_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FName                                    OutBoneName;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x0024 (0x0001) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_EvisceratorProj.GetLastSlashDirection
// [0x00822102] 
struct UKFDT_Slashing_EvisceratorProj_execGetLastSlashDirection_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0014 (0x0001) [0x0000000000000000]              
	// struct FVector                                  SlashPlaneNormal;                                 		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 InstigatorRotation;                               		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  InstigatorFaceDir;                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  InstigatorRightDir;                               		// 0x003C (0x000C) [0x0000000000000000]              
	// float                                           UpDotSlash;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	// float                                           RightDotSlash;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	// float                                           UpThresholdValue;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_EvisceratorProj.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_EvisceratorProj_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_Katana.ModifyDismembermentHitImpulse
// [0x00422102] 
struct UKFDT_Slashing_Katana_execModifyDismembermentHitImpulse_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutImpulseDir;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutParentImpulseDir;                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           OutImpulseScale;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           OutParentImpulseScale;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x003C (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Katana.GetBoneToDismember
// [0x00422102] 
struct UKFDT_Slashing_Katana_execGetBoneToDismember_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FName                                    OutBoneName;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x0024 (0x0001) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Katana.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_Katana_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_KatanaHeavy.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_KatanaHeavy_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_Knife.ModifyDismembermentHitImpulse
// [0x00422102] 
struct UKFDT_Slashing_Knife_execModifyDismembermentHitImpulse_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutImpulseDir;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutParentImpulseDir;                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           OutImpulseScale;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           OutParentImpulseScale;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x003C (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Knife.GetBoneToDismember
// [0x00422102] 
struct UKFDT_Slashing_Knife_execGetBoneToDismember_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FName                                    OutBoneName;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x0024 (0x0001) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Knife.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_Knife_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_Knife_Medic.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Slashing_Knife_Medic_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_KnifeHeavy.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_KnifeHeavy_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_KnifeHeavy_Medic.ApplySecondaryDamage
// [0x00026002] 
struct UKFDT_Slashing_KnifeHeavy_Medic_execApplySecondaryDamage_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             DamageTaken;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class UClass*                                   ToxicDT;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Patriarch.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Slashing_Patriarch_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_PatTentacle.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Slashing_PatTentacle_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Zweihander.ModifyDismembermentHitImpulse
// [0x00422102] 
struct UKFDT_Slashing_Zweihander_execModifyDismembermentHitImpulse_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutImpulseDir;                                    		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutParentImpulseDir;                              		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           OutImpulseScale;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           OutParentImpulseScale;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x003C (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Zweihander.GetBoneToDismember
// [0x00422102] 
struct UKFDT_Slashing_Zweihander_execGetBoneToDismember_Parms
{
	// class AKFPawn_Monster*                          inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FName                                    InHitZoneName;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FName                                    OutBoneName;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// unsigned char                                   SlashDir;                                         		// 0x0024 (0x0001) [0x0000000000000000]              
	// class UKFCharacterInfo_Monster*                 MonsterInfo;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Slashing_Zweihander.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_Zweihander_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_Slashing_ZweihanderHeavy.CanDismemberHitZone
// [0x00022102] 
struct UKFDT_Slashing_ZweihanderHeavy_execCanDismemberHitZone_Parms
{
	// struct FName                                    InHitZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFDT_SwingMinigame.PlayImpactHitEffects
// [0x00026002] 
struct UKFDT_SwingMinigame_execPlayImpactHitEffects_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// unsigned char                                   HitZoneIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	// class APawn*                                    HitInstigator;                                    		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFDT_Toxic_HansGrenade.GetKillerDialogID
// [0x00022002] 
struct UKFDT_Toxic_HansGrenade_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPhysicsVolume.Tick
// [0x00020902] ( FUNC_Event )
struct AKFPhysicsVolume_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPhysicsVolume.UnTouch
// [0x00020902] ( FUNC_Event )
struct AKFPhysicsVolume_eventUnTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             RecentHitIdx;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPhysicsVolume.CausePainTo
// [0x00020002] 
struct AKFPhysicsVolume_execCausePainTo_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             RecentHitIdx;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFDynamicPhysicsVolume.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFDynamicPhysicsVolume_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFExplosion_GroundFire.SpawnExplosionParticleSystem
// [0x00020102] 
struct AKFExplosion_GroundFire_execSpawnExplosionParticleSystem_Parms
{
	// class UParticleSystem*                          Template;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.GetEffectCheckRadius
// [0x00020002] 
struct AKFExplosion_HansSmokeGrenade_execGetEffectCheckRadius_Parms
{
	// DWORD                                           bCauseDamage : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseFractureEffects : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseEffects : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           CheckRadius;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.DoExplosionDamage
// [0x00080102] 
struct AKFExplosion_HansSmokeGrenade_execDoExplosionDamage_Parms
{
	// DWORD                                           bCauseDamage : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bCauseEffects : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.Destroyed
// [0x00020802] ( FUNC_Event )
struct AKFExplosion_HansSmokeGrenade_eventDestroyed_Parms
{
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.Explode
// [0x00024102] 
struct AKFExplosion_HansSmokeGrenade_execExplode_Parms
{
	// class UGameExplosion*                           NewExplosionTemplate;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFExplosion_MedicGrenade.SpawnExplosionParticleSystem
// [0x00020102] 
struct AKFExplosion_MedicGrenade_execSpawnExplosionParticleSystem_Parms
{
	// class UParticleSystem*                          Template;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFExplosion_MedicGrenade.AffectsPawn
// [0x00080102] 
struct AKFExplosion_MedicGrenade_execAffectsPawn_Parms
{
	// class APawn*                                    Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           DamageScale;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AKFPawn_Human*                            HumanVictim;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class AKFPawn_Monster*                          MonsterVictim;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	// class AKFProj_MedicGrenade*                     OwnerProjectile;                                  		// 0x001C (0x0008) [0x0000000000000000]              
	// DWORD                                           bCanRepairArmor : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFExplosion_MedicGrenade.Explode
// [0x00024102] 
struct AKFExplosion_MedicGrenade_execExplode_Parms
{
	// class UGameExplosion*                           NewExplosionTemplate;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MedicGrenade.StopFlightEffects
// [0x00080100] 
struct AKFProj_MedicGrenade_execStopFlightEffects_Parms
{
};

// Function kfgamecontent.KFProj_MedicGrenade.Destroyed
// [0x00020102] 
struct AKFProj_MedicGrenade_execDestroyed_Parms
{
};

// Function kfgamecontent.KFProj_MedicGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
struct AKFProj_MedicGrenade_eventGrenadeIsAtRest_Parms
{
};

// Function kfgamecontent.KFProj_MedicGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_MedicGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFExplosion_PlayerBloatPukeMine.SpawnExplosionParticleSystem
// [0x00020102] 
struct AKFExplosion_PlayerBloatPukeMine_execSpawnExplosionParticleSystem_Parms
{
	// class UParticleSystem*                          Template;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFExplosion_SirenScream.HandleIgnoredVictim
// [0x00020002] 
struct AKFExplosion_SirenScream_execHandleIgnoredVictim_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFExplosion_SirenScream.SpecialCringeEffectsFor
// [0x00080002] 
struct AKFExplosion_SirenScream_execSpecialCringeEffectsFor_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           VictimDist;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AKFProjectile*                            KFProj;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFExplosionActorC4.GetDamageFor
// [0x00020102] 
struct AKFExplosionActorC4_execGetDamageFor_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameConductorVersus.UpdateOverallStatus
// [0x00020002] 
struct UKFGameConductorVersus_execUpdateOverallStatus_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameConductorVersus.TimerUpdate
// [0x00020002] 
struct UKFGameConductorVersus_execTimerUpdate_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.OnInstigatorControllerLeft
// [0x00020102] 
struct AKFProj_BloatPukeMine_execOnInstigatorControllerLeft_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.Destroyed
// [0x00020902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventDestroyed_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.SpawnBurstEffect
// [0x00020102] 
struct AKFProj_BloatPukeMine_execSpawnBurstEffect_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.FadeOut
// [0x00020102] 
struct AKFProj_BloatPukeMine_execFadeOut_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.TornOff
// [0x00020902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventTornOff_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.Tick
// [0x00020902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           FadeOutSize;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.TriggerExplosion
// [0x00020102] 
struct AKFProj_BloatPukeMine_execTriggerExplosion_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.Timer_Explode
// [0x00020002] 
struct AKFProj_BloatPukeMine_execTimer_Explode_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.Detonate
// [0x00020002] 
struct AKFProj_BloatPukeMine_execDetonate_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.TakeDamage
// [0x00024822] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventTakeDamage_Parms
{
	// int                                             InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.Touch
// [0x00020902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.ValidTouch
// [0x00020102] 
struct AKFProj_BloatPukeMine_execValidTouch_Parms
{
	// class APawn*                                    Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFProj_BloatPukeMine.SpawnImpactDecal
// [0x00020102] 
struct AKFProj_BloatPukeMine_execSpawnImpactDecal_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.PlayImpactSound
// [0x00024102] 
struct AKFProj_BloatPukeMine_execPlayImpactSound_Parms
{
	// DWORD                                           bIsAtRest : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFProj_BloatPukeMine.SwapToGroundFX
// [0x00020102] 
struct AKFProj_BloatPukeMine_execSwapToGroundFX_Parms
{
	// struct FRotator                                 GroundRotation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.Stick
// [0x00820102] 
struct AKFProj_BloatPukeMine_execStick_Parms
{
	// struct FVector                                  StuckLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StuckNormal;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StuckRotation;                                    		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AKFProj_BloatPukeMine*                    PukeMine;                                         		// 0x003C (0x0008) [0x0000000000000000]              
	// struct FRotator                                 RandRot;                                          		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.Bounce
// [0x00820102] 
struct AKFProj_BloatPukeMine_execBounce_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   BouncedOff;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  VNorm;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.Bump
// [0x00020902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventBump_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.CanStick
// [0x00480102] 
struct AKFProj_BloatPukeMine_execCanStick_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFProj_BloatPukeMine.HitWall
// [0x00020902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventHitWall_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      WallComp;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.Explode
// [0x00020100] 
struct AKFProj_BloatPukeMine_execExplode_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.StopSimulating
// [0x00080100] 
struct AKFProj_BloatPukeMine_execStopSimulating_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.ShutDown
// [0x00020100] 
struct AKFProj_BloatPukeMine_execShutDown_Parms
{
};

// Function kfgamecontent.KFProj_BloatPukeMine.PostBeginPlay
// [0x00820902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventPostBeginPlay_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_BloatPukeMine.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFProj_BloatPukeMine_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPickupFactory_Ammo.CurrentPickupIsAmmo
// [0x00020002] 
struct AKFPickupFactory_Ammo_execCurrentPickupIsAmmo_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPickupFactory_Ammo.PickedUpBy
// [0x00020002] 
struct AKFPickupFactory_Ammo_execPickedUpBy_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFGameInfo*                              KFGI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPickupFactory_Ammo.GiveTo
// [0x00020002] 
struct AKFPickupFactory_Ammo_execGiveTo_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFInventoryManager*                      KFIM;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPickupFactory_Ammo.SetInitialState
// [0x00020902] ( FUNC_Event )
struct AKFPickupFactory_Ammo_eventSetInitialState_Parms
{
};

// Function kfgamecontent.KFPickupFactory_Ammo.InitializePickup
// [0x00020102] 
struct AKFPickupFactory_Ammo_execInitializePickup_Parms
{
	// class AKFGameInfo*                              KFGI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_Cyst.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedClot_Cyst_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedClot_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             EmergeType;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedClot_eventPostInitAnimTree_Parms
{
	// class USkeletalMeshComponent*                   SkelComp;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedClot_Slasher_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_Alpha.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedClot_Alpha_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_Alpha.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
struct AKFPawn_ZedClot_Alpha_eventGetAIPawnClassToSpawn_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedCrawler_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             EmergeType;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler.Tick
// [0x00020102] 
struct AKFPawn_ZedCrawler_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler.DrawDebugRotation
// [0x00820102] 
struct AKFPawn_ZedCrawler_execDrawDebugRotation_Parms
{
	// struct FVector                                  vExtent;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler.GetOverheadDebugText
// [0x00420102] 
struct AKFPawn_ZedCrawler_execGetOverheadDebugText_Parms
{
	// class AKFHUDBase*                               HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FString >                        OverheadTexts;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	// TArray< struct FColor >                         OverheadColors;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FString                                  DebugText;                                        		// 0x0028 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler.SpiderBumpLevel
// [0x00024802] ( FUNC_Event )
struct AKFPawn_ZedCrawler_eventSpiderBumpLevel_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UAICommand*                               ActiveCommand;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler.SpecialMoveTo_Leap
// [0x00024002] 
struct AKFPawn_ZedCrawler_execSpecialMoveTo_Leap_Parms
{
	// class ANavigationPoint*                         Start;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         End;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           JumpTime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedCrawler.PossessedBy
// [0x00020802] ( FUNC_Event )
struct AKFPawn_ZedCrawler_eventPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFAIController_ZedCrawler*               CrawlerController;                                		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
struct AKFPawn_ZedCrawler_eventGetAIPawnClassToSpawn_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedGorefast.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedGorefast_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedGorefast.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
struct AKFPawn_ZedGorefast_eventGetAIPawnClassToSpawn_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedStalker_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedStalker_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.GetKillerDialogID
// [0x00020002] 
struct AKFPawn_ZedStalker_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.IsStalkerPawn
// [0x00022002] 
struct AKFPawn_ZedStalker_execIsStalkerPawn_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedStalker.ReCloakTimer
// [0x00020102] 
struct AKFPawn_ZedStalker_execReCloakTimer_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayHeadAsplode
// [0x00020102] 
struct AKFPawn_ZedStalker_execPlayHeadAsplode_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayHit
// [0x00020002] 
struct AKFPawn_ZedStalker_execPlayHit_Parms
{
	// float                                           Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.OnStackingAfflictionChanged
// [0x00020002] 
struct AKFPawn_ZedStalker_execOnStackingAfflictionChanged_Parms
{
	// unsigned char                                   Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.CauseHeadTrauma
// [0x00024002] 
struct AKFPawn_ZedStalker_execCauseHeadTrauma_Parms
{
	// float                                           BleedOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayDying
// [0x00020102] 
struct AKFPawn_ZedStalker_execPlayDying_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.Rally
// [0x00024102] 
struct AKFPawn_ZedStalker_execRally_Parms
{
	// class AKFPawn*                                  RallyInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UParticleSystem*                          RallyEffect;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FName                                    EffectBoneName;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  EffectOffset;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UParticleSystem*                          AltRallyEffect;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FName                                    AltEffectBoneNames[ 0x2 ];                        		// 0x002C (0x0010) [0x0000000000000000]              
	// struct FVector                                  AltEffectOffset;                                  		// 0x003C (0x000C) [0x0000000000000000]              
	// DWORD                                           bSkipEffects : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.CallOutCloakingExpired
// [0x00020002] 
struct AKFPawn_ZedStalker_execCallOutCloakingExpired_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.CallOutCloaking
// [0x00024002] 
struct AKFPawn_ZedStalker_execCallOutCloaking_Parms
{
	// class AKFPlayerController*                      CallOutController;                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.UpdateSpottedStatus
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedStalker_eventUpdateSpottedStatus_Parms
{
	// DWORD                                           bOldSpottedByLP : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPerk*                                  LocalPerk;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           DistanceSq;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Range;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.GetMinCloakPct
// [0x00080102] 
struct AKFPawn_ZedStalker_execGetMinCloakPct_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.Tick
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedStalker_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           MinCloakPct;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayStealthSoundLoopEnd
// [0x00020102] 
struct AKFPawn_ZedStalker_execPlayStealthSoundLoopEnd_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayStealthSoundLoop
// [0x00020102] 
struct AKFPawn_ZedStalker_execPlayStealthSoundLoop_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.TerminateEffectsOnDeath
// [0x00020102] 
struct AKFPawn_ZedStalker_execTerminateEffectsOnDeath_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.NotifyGoreMeshActive
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedStalker_eventNotifyGoreMeshActive_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.UpdateGameplayMICParams
// [0x00020102] 
struct AKFPawn_ZedStalker_execUpdateGameplayMICParams_Parms
{
	// DWORD                                           bIsSpotted : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedStalker.ClientCloakingStateUpdated
// [0x00020102] 
struct AKFPawn_ZedStalker_execClientCloakingStateUpdated_Parms
{
};

// Function kfgamecontent.KFPawn_ZedStalker.SetCloaked
// [0x00020002] 
struct AKFPawn_ZedStalker_execSetCloaked_Parms
{
	// DWORD                                           bNewCloaking : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedStalker.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedStalker_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedStalker_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFPawn_ZedSiren.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedSiren_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedSiren.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedSiren_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedSiren.GetKillerDialogID
// [0x00020002] 
struct AKFPawn_ZedSiren_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedSiren.TerminateEffectsOnDeath
// [0x00020102] 
struct AKFPawn_ZedSiren_execTerminateEffectsOnDeath_Parms
{
};

// Function kfgamecontent.KFPawn_ZedSiren.EnableScreamFlicker
// [0x00020102] 
struct AKFPawn_ZedSiren_execEnableScreamFlicker_Parms
{
	// DWORD                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedSiren.ANIMNOTIFY_SirenScream
// [0x00020102] 
struct AKFPawn_ZedSiren_execANIMNOTIFY_SirenScream_Parms
{
	// class UKFSM_Siren_Scream*                       ScreamSM;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedSiren.SetCharacterArch
// [0x00024102] 
struct AKFPawn_ZedSiren_execSetCharacterArch_Parms
{
	// class UKFCharacterInfoBase*                     Info;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForce : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.GetHitZoneSkinTypeEffects
// [0x00020102] 
struct AKFPawn_ZedHans_execGetHitZoneSkinTypeEffects_Parms
{
	// int                                             HitZoneIdx;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UKFSkinTypeEffects*                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateBattlePhaseParticles
// [0x00020102] 
struct AKFPawn_ZedHans_execUpdateBattlePhaseParticles_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateBattlePhaseMaterials
// [0x00020102] 
struct AKFPawn_ZedHans_execUpdateBattlePhaseMaterials_Parms
{
	// class UMaterialInstanceConstant*                MIC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateBattlePhaseLights
// [0x00020102] 
struct AKFPawn_ZedHans_execUpdateBattlePhaseLights_Parms
{
	// class UPointLightComponent*                     LightTemplate;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.OnBattlePhaseChanged
// [0x00020102] 
struct AKFPawn_ZedHans_execOnBattlePhaseChanged_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.IncrementBattlePhase
// [0x00020002] 
struct AKFPawn_ZedHans_execIncrementBattlePhase_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.TerminateEffectsOnDeath
// [0x00020102] 
struct AKFPawn_ZedHans_execTerminateEffectsOnDeath_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.DetachShieldFX
// [0x00020102] 
struct AKFPawn_ZedHans_execDetachShieldFX_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.StopHuntAndHealModeFX
// [0x00020102] 
struct AKFPawn_ZedHans_execStopHuntAndHealModeFX_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.BreakShield
// [0x00020102] 
struct AKFPawn_ZedHans_execBreakShield_Parms
{
	// class AKFExplosionActor*                        ExplosionActor;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.MakeVectorFromColor
// [0x00820102] 
struct AKFPawn_ZedHans_execMakeVectorFromColor_Parms
{
	// struct FColor                                   InColor;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FLinearColor                             LinColor;                                         		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FVector                                  ColorVec;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateShieldUIOnLocalController
// [0x00020102] 
struct AKFPawn_ZedHans_execUpdateShieldUIOnLocalController_Parms
{
	// float                                           ShieldPercent;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateShieldColor
// [0x00020102] 
struct AKFPawn_ZedHans_execUpdateShieldColor_Parms
{
	// float                                           ShieldHealthPct;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.PlayHuntAndHealModeFX
// [0x00020102] 
struct AKFPawn_ZedHans_execPlayHuntAndHealModeFX_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.SetHuntAndHealMode
// [0x00020102] 
struct AKFPawn_ZedHans_execSetHuntAndHealMode_Parms
{
	// DWORD                                           bOn : 1;                                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.GetBumpAttackDamageType
// [0x00020002] 
struct AKFPawn_ZedHans_execGetBumpAttackDamageType_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.CanInjureHitZone
// [0x00020002] 
struct AKFPawn_ZedHans_execCanInjureHitZone_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             HitZoneIdx;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   KFDmgType;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FName                                    HitZoneName;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.TakeHitZoneDamage
// [0x00020002] 
struct AKFPawn_ZedHans_execTakeHitZoneDamage_Parms
{
	// float                                           Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             HitZoneIdx;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  InstigatorLocation;                               		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.HealDamage
// [0x00024802] ( FUNC_Event )
struct AKFPawn_ZedHans_eventHealDamage_Parms
{
	// int                                             Amount;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              Healer;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// DWORD                                           bCanRepairArmor : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bMessageHealer : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           Retval : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           OldHealthPct;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.TakeDamage
// [0x00024802] ( FUNC_Event )
struct AKFPawn_ZedHans_eventTakeDamage_Parms
{
	// int                                             Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
	// float                                           OldHealthPct;                                     		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.PlayBossMusic
// [0x00020002] 
struct AKFPawn_ZedHans_execPlayBossMusic_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.Timer_TickHansDialog
// [0x00020002] 
struct AKFPawn_ZedHans_execTimer_TickHansDialog_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.GetTraderAdviceID
// [0x00022002] 
struct AKFPawn_ZedHans_execGetTraderAdviceID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.GetSpotterDialogID
// [0x00020002] 
struct AKFPawn_ZedHans_execGetSpotterDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.GetKillerDialogID
// [0x00020002] 
struct AKFPawn_ZedHans_execGetKillerDialogID_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.DrawDebugOverheadText
// [0x00C20002] 
struct AKFPawn_ZedHans_execDrawDebugOverheadText_Parms
{
	// class AKFHUDBase*                               HUD;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector2D                                ScreenPos;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  Canvas;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ScreenLoc;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// DWORD                                           bShowAllCategories : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.IsThrowingGrenade
// [0x00020002] 
struct AKFPawn_ZedHans_execIsThrowingGrenade_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.AddGrenadeSpread
// [0x00820102] 
struct AKFPawn_ZedHans_execAddGrenadeSpread_Parms
{
	// struct FRotator                                 BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           RandZ;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.ThrowGrenade
// [0x00820102] 
struct AKFPawn_ZedHans_execThrowGrenade_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FRotator                                 DirToEnemy;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AKFProj_Grenade*                          MyGrenade;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           TossSpeed;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.StartThrowingGrenade
// [0x00024002] 
struct AKFPawn_ZedHans_execStartThrowingGrenade_Parms
{
	// DWORD                                           bLeftHand : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.CacheGrenadeThrowLocation
// [0x00824002] 
struct AKFPawn_ZedHans_execCacheGrenadeThrowLocation_Parms
{
	// DWORD                                           bLeftHand : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  StartThrowLocation;                               		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  UsedEnemyLocation;                                		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FName                                    HandSocketName;                                   		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FVector                                  TossVelocity;                                     		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Offset;                                           		// 0x004C (0x000C) [0x0000000000000000]              
	// DWORD                                           bFoundVel : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           XYExtent;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	// float                                           ZExtent;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           TossZPct;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	// DWORD                                           bUsingCachedValues : 1;                           		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   UsedGrenadeClass;                                 		// 0x006C (0x0008) [0x0000000000000000]              
	// int                                             RandIdx;                                          		// 0x0074 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0078 (0x0004) [0x0000000000000000]              
	// TArray< struct FTrackedEnemyInfo >              TargetCandidates;                                 		// 0x007C (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_AoENerveGas
// [0x00020102] 
struct AKFPawn_ZedHans_execANIMNOTIFY_AoENerveGas_Parms
{
	// class AKFExplosion_HansNerveGasGrenade*         ExplosionActor;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_AoEBlast
// [0x00020102] 
struct AKFPawn_ZedHans_execANIMNOTIFY_AoEBlast_Parms
{
	// class AKFExplosionActor*                        ExplosionActor;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_TossGrenade_LeftHand
// [0x00020102] 
struct AKFPawn_ZedHans_execANIMNOTIFY_TossGrenade_LeftHand_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_TossGrenade_RightHand
// [0x00020102] 
struct AKFPawn_ZedHans_execANIMNOTIFY_TossGrenade_RightHand_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.ShouldPlaySpecialMeleeAnims
// [0x00020102] 
struct AKFPawn_ZedHans_execShouldPlaySpecialMeleeAnims_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.SetSprinting
// [0x00020002] 
struct AKFPawn_ZedHans_execSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bWasSprinting : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.SetWeaponStance
// [0x00024102] 
struct AKFPawn_ZedHans_execSetWeaponStance_Parms
{
	// DWORD                                           bInEquipWeapons : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bForce : 1;                                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   WeapAnimSetIdx;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
	// DWORD                                           bUsingGunAnimSet : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans.SetCharacterAnimationInfo
// [0x00020102] 
struct AKFPawn_ZedHans_execSetCharacterAnimationInfo_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedHans_eventPostInitAnimTree_Parms
{
	// class USkeletalMeshComponent*                   SkelComp;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedHans_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedHans_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTutorialSectionInfo.OpenDelayTimer
// [0x00020002] 
struct UKFTutorialSectionInfo_execOpenDelayTimer_Parms
{
	// class AKFGameInfo_Tutorial*                     GI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTutorialSectionInfo.GetSlides
// [0x00820002] 
struct UKFTutorialSectionInfo_execGetSlides_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FSTutorialSlide >                ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	// TArray< struct FSTutorialSlide >                MergedSlides;                                     		// 0x0018 (0x0010) [0x0000000000000000]              
	// struct FSTutorialSlide                          NextSlide;                                        		// 0x0028 (0x003C) [0x0000000000000000]              
	// struct FSTutorialSlide                          NewSlide;                                         		// 0x0064 (0x003C) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.OnTraderMenuClosed
// [0x00020002] 
struct AKFGameInfo_Tutorial_execOnTraderMenuClosed_Parms
{
};

// Function kfgamecontent.KFGameInfo_Tutorial.CheckPlayerAction
// [0x00020002] 
struct AKFGameInfo_Tutorial_execCheckPlayerAction_Parms
{
};

// Function kfgamecontent.KFGameInfo_Tutorial.Tick
// [0x00020002] 
struct AKFGameInfo_Tutorial_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.NotifyControllerReconnected
// [0x00020002] 
struct AKFGameInfo_Tutorial_execNotifyControllerReconnected_Parms
{
};

// Function kfgamecontent.KFGameInfo_Tutorial.NotifyControllerDisconnected
// [0x00020002] 
struct AKFGameInfo_Tutorial_execNotifyControllerDisconnected_Parms
{
};

// Function kfgamecontent.KFGameInfo_Tutorial.RemoveTutorialHud
// [0x00020002] 
struct AKFGameInfo_Tutorial_execRemoveTutorialHud_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.CreateTutorialHUD
// [0x00024002] 
struct AKFGameInfo_Tutorial_execCreateTutorialHUD_Parms
{
	// class UKFTutorialSectionInfo*                   TutorialSectionInfo;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bViaTimer : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.AllowUnpause
// [0x00020002] 
struct AKFGameInfo_Tutorial_execAllowUnpause_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Tutorial.NotifyMenuOpened
// [0x00020002] 
struct AKFGameInfo_Tutorial_execNotifyMenuOpened_Parms
{
	// unsigned char                                   MenuIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.SetZedTimeDilation
// [0x00020002] 
struct AKFGameInfo_Tutorial_execSetZedTimeDilation_Parms
{
	// float                                           NewTimeDilation;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.ResetPickups
// [0x00020002] 
struct AKFGameInfo_Tutorial_execResetPickups_Parms
{
	// TArray< class AKFPickupFactory* >               PickupList;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             NumPickups;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.DetermineNextTraderIndex
// [0x00020002] 
struct AKFGameInfo_Tutorial_execDetermineNextTraderIndex_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AKFTraderTrigger*                         Trader;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.ShowPostGameMenu
// [0x00020002] 
struct AKFGameInfo_Tutorial_execShowPostGameMenu_Parms
{
};

// Function kfgamecontent.KFGameInfo_Tutorial.OnTutorialRewardsComplete
// [0x00020002] 
struct AKFGameInfo_Tutorial_execOnTutorialRewardsComplete_Parms
{
	// DWORD                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FString                                  FunctionName;                                     		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UJsonObject*                              FunctionResult;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.EndOfMatch
// [0x00020002] 
struct AKFGameInfo_Tutorial_execEndOfMatch_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Tutorial.WaveEnded
// [0x00020002] 
struct AKFGameInfo_Tutorial_execWaveEnded_Parms
{
	// unsigned char                                   WinCondition;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.PreventDeath
// [0x00020002] 
struct AKFGameInfo_Tutorial_execPreventDeath_Parms
{
	// class APawn*                                    KilledPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              Killer;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_Tutorial.ReduceDamage
// [0x00420002] 
struct AKFGameInfo_Tutorial_execReduceDamage_Parms
{
	// int                                             Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    injured;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x003C (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.RestartPlayer
// [0x00020002] 
struct AKFGameInfo_Tutorial_execRestartPlayer_Parms
{
	// class AController*                              NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.PostLogin
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_Tutorial_eventPostLogin_Parms
{
	// class APlayerController*                        NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_Tutorial.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_Tutorial_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFGameInfo_Tutorial.InitGame
// [0x00420802] ( FUNC_Event )
struct AKFGameInfo_Tutorial_eventInitGame_Parms
{
	// struct FString                                  Options;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorMessage;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.Callback_Skip
// [0x00020002] 
struct UKFGFxMoviePlayer_Tutorial_execCallback_Skip_Parms
{
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.Callback_Done
// [0x00020002] 
struct UKFGFxMoviePlayer_Tutorial_execCallback_Done_Parms
{
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.GetUsingGamepad
// [0x00020002] 
struct UKFGFxMoviePlayer_Tutorial_execGetUsingGamepad_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.OnInputTypeChanged
// [0x00020002] 
struct UKFGFxMoviePlayer_Tutorial_execOnInputTypeChanged_Parms
{
	// DWORD                                           bGamepad : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.CheckIfUsingGamepad
// [0x00020002] 
struct UKFGFxMoviePlayer_Tutorial_execCheckIfUsingGamepad_Parms
{
	// DWORD                                           bGamepad : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.FilterButtonInput
// [0x00020802] ( FUNC_Event )
struct UKFGFxMoviePlayer_Tutorial_eventFilterButtonInput_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct UKFGFxMoviePlayer_Tutorial_eventWidgetInitialized_Parms
{
	// struct FName                                    WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               Widget;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bHandled : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.Init
// [0x00024002] 
struct UKFGFxMoviePlayer_Tutorial_execInit_Parms
{
	// class ULocalPlayer*                             LocPlay;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxMoviePlayer_Manager_Tutorial.OpenMenu
// [0x00024002] 
struct UKFGFxMoviePlayer_Manager_Tutorial_execOpenMenu_Parms
{
	// unsigned char                                   NewMenuIndex;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bShowWidgets : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFGameInfo_Tutorial*                     GI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameReplicationInfoVersus.Reset
// [0x00020002] 
struct AKFGameReplicationInfoVersus_execReset_Parms
{
};

// Function kfgamecontent.KFGameReplicationInfoVersus.OnRoundIncremented
// [0x00020100] 
struct AKFGameReplicationInfoVersus_execOnRoundIncremented_Parms
{
};

// Function kfgamecontent.KFGameReplicationInfoVersus.ServerStartVoteKick
// [0x00020002] 
struct AKFGameReplicationInfoVersus_execServerStartVoteKick_Parms
{
	// class APlayerReplicationInfo*                   PRI_Kickee;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI_Kicker;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Monster*                          KFPM;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        C;                                                		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameReplicationInfoVersus.CanChangePerks
// [0x00020902] ( FUNC_Event )
struct AKFGameReplicationInfoVersus_eventCanChangePerks_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameReplicationInfoVersus.GetCurrentRoundNumber
// [0x00020102] 
struct AKFGameReplicationInfoVersus_execGetCurrentRoundNumber_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameReplicationInfoVersus.AreTeamsOutOfBalanced
// [0x00020102] 
struct AKFGameReplicationInfoVersus_execAreTeamsOutOfBalanced_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             ZedTeamSize;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             HumanTeamSize;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameReplicationInfoVersus.Timer
// [0x00020902] ( FUNC_Event )
struct AKFGameReplicationInfoVersus_eventTimer_Parms
{
	// class AKFGameInfo_VersusSurvival*               MyKFGameInfo;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameReplicationInfoVersus.SetTeam
// [0x00020102] 
struct AKFGameReplicationInfoVersus_execSetTeam_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ATeamInfo*                                TI;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameReplicationInfoVersus.Timer_TickDownSpawnTimer
// [0x00020102] 
struct AKFGameReplicationInfoVersus_execTimer_TickDownSpawnTimer_Parms
{
};

// Function kfgamecontent.KFGameReplicationInfoVersus.SetPlayerZedSpawnTime
// [0x00020002] 
struct AKFGameReplicationInfoVersus_execSetPlayerZedSpawnTime_Parms
{
	// unsigned char                                   NewSpawnTime;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bTakeOverActive : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameReplicationInfoVersus.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFGameReplicationInfoVersus_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTeamInfo_Zeds.GetHumanReadableName
// [0x00020102] 
struct AKFTeamInfo_Zeds_execGetHumanReadableName_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher_Versus.GetDirectionalJumpScale
// [0x00020102] 
struct AKFPawn_ZedClot_Slasher_Versus_execGetDirectionalJumpScale_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher_Versus.GetJumpZ
// [0x00020102] 
struct AKFPawn_ZedClot_Slasher_Versus_execGetJumpZ_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher_Versus.GetSprintJumpVelocity
// [0x00020102] 
struct AKFPawn_ZedClot_Slasher_Versus_execGetSprintJumpVelocity_Parms
{
	// struct FVector                                  ViewDirection;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawler_Versus.PlayDying
// [0x00020102] 
struct AKFPawn_ZedCrawler_Versus_execPlayDying_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker_Versus.CallOutCloaking
// [0x00024002] 
struct AKFPawn_ZedStalker_Versus_execCallOutCloaking_Parms
{
	// class AKFPlayerController*                      CallOutController;                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedStalker_Versus.UpdateSpottedStatus
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedStalker_Versus_eventUpdateSpottedStatus_Parms
{
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.PlayDying
// [0x00020102] 
struct AKFPawn_ZedScrake_Versus_execPlayDying_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.Timer_RageBump
// [0x00080102] 
struct AKFPawn_ZedScrake_Versus_execTimer_RageBump_Parms
{
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.SetEnraged
// [0x00020102] 
struct AKFPawn_ZedScrake_Versus_execSetEnraged_Parms
{
	// DWORD                                           bNewEnraged : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.SetSprinting
// [0x00020002] 
struct AKFPawn_ZedScrake_Versus_execSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.PlayDying
// [0x00020102] 
struct AKFPawn_ZedFleshPound_Versus_execPlayDying_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.EndRage
// [0x00020002] 
struct AKFPawn_ZedFleshPound_Versus_execEndRage_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.NotifyMeleeDamageDealt
// [0x00020002] 
struct AKFPawn_ZedFleshPound_Versus_execNotifyMeleeDamageDealt_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.Timer_RageBump
// [0x00080102] 
struct AKFPawn_ZedFleshPound_Versus_execTimer_RageBump_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.SetEnraged
// [0x00020102] 
struct AKFPawn_ZedFleshPound_Versus_execSetEnraged_Parms
{
	// DWORD                                           bNewEnraged : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.SetSprinting
// [0x00020002] 
struct AKFPawn_ZedFleshPound_Versus_execSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.PossessedBy
// [0x00020002] 
struct AKFPawn_ZedFleshPound_Versus_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedBloat_Versus.ANIMNOTIFY_PukeMineAttack
// [0x00820102] 
struct AKFPawn_ZedBloat_Versus_execANIMNOTIFY_PukeMineAttack_Parms
{
	// struct FVector                                  SpawnLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRotation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedSiren_Versus.SetSprinting
// [0x00020002] 
struct AKFPawn_ZedSiren_Versus_execSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.GetFireballStrengthPerSecond
// [0x00020102] 
struct AKFPawn_ZedHusk_Versus_execGetFireballStrengthPerSecond_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.GetFireballStrengthRange
// [0x00020102] 
struct AKFPawn_ZedHusk_Versus_execGetFireballStrengthRange_Parms
{
	// struct FVector2D                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.UseAdjustedControllerSensitivity
// [0x00020102] 
struct AKFPawn_ZedHusk_Versus_execUseAdjustedControllerSensitivity_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.GetSuicideSM
// [0x00020102] 
struct AKFPawn_ZedHusk_Versus_execGetSuicideSM_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.OnExploded
// [0x00020102] 
struct AKFPawn_ZedHusk_Versus_execOnExploded_Parms
{
	// class AController*                              SuicideController;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.ShootFireball
// [0x00820002] 
struct AKFPawn_ZedHusk_Versus_execShootFireball_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFProjectile*                            MyFireball;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFProj_Husk_Fireball_Versus*             HuskFireball;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SocketLocation;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ShootRotation;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0068 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.ANIMNOTIFY_HuskFireballAttack
// [0x00020102] 
struct AKFPawn_ZedHusk_Versus_execANIMNOTIFY_HuskFireballAttack_Parms
{
	// float                                           FireballStartTime;                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.ANIMNOTIFY_FlameThrowerOn
// [0x00020102] 
struct AKFPawn_ZedHusk_Versus_execANIMNOTIFY_FlameThrowerOn_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Timer_StopSummoningChildren
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execTimer_StopSummoningChildren_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.SummonChildren
// [0x00020022] 
struct AKFPawn_ZedPatriarch_Versus_execSummonChildren_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UseAdjustedControllerSensitivity
// [0x00020102] 
struct AKFPawn_ZedPatriarch_Versus_execUseAdjustedControllerSensitivity_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.ShouldDrawBossIcon
// [0x00020102] 
struct AKFPawn_ZedPatriarch_Versus_execShouldDrawBossIcon_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.NotifyHealed
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execNotifyHealed_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.NotifyTakeHit
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execNotifyTakeHit_Parms
{
	// class AController*                              InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.NotifySpecialMoveEnded
// [0x00020102] 
struct AKFPawn_ZedPatriarch_Versus_execNotifySpecialMoveEnded_Parms
{
	// class UKFSpecialMove*                           FinishedMove;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   SMHandle;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.CheckHealth
// [0x00040003] ( FUNC_Final )
struct AKFPawn_ZedPatriarch_Versus_execCheckHealth_Parms
{
	// float                                           HealthPct;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.IncrementBattlePhase
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execIncrementBattlePhase_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.ClearMortarTargets
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execClearMortarTargets_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.CollectMortarTargets
// [0x00824002] 
struct AKFPawn_ZedPatriarch_Versus_execCollectMortarTargets_Parms
{
	// DWORD                                           bInitialTarget : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bForceInitialTarget : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             NumTargets;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class AKFPawn_Human*                            KFP;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           TargetDistSQ;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MortarVelocity;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  MortarStartLoc;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetProjection;                                 		// 0x0040 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.PreMortarAttack
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execPreMortarAttack_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.GetMortarAimDirAndTargetLoc
// [0x00C20002] 
struct AKFPawn_ZedPatriarch_Versus_execGetMortarAimDirAndTargetLoc_Parms
{
	// int                                             MissileNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MissileLoc;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 MissileRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           MissileSpeed;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FPatriarch_MortarTarget                  MissileTarget;                                    		// 0x0038 (0x0014) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0064 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.GetMissileAimDirAndTargetLoc
// [0x00C20002] 
struct AKFPawn_ZedPatriarch_Versus_execGetMissileAimDirAndTargetLoc_Parms
{
	// int                                             MissileNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MissileLoc;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 MissileRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0060 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x006C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.IsHealAllowed
// [0x00040003] ( FUNC_Final )
struct AKFPawn_ZedPatriarch_Versus_execIsHealAllowed_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateCloakIconState
// [0x00040003] ( FUNC_Final )
struct AKFPawn_ZedPatriarch_Versus_execUpdateCloakIconState_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateHealAvailable
// [0x00040003] ( FUNC_Final )
struct AKFPawn_ZedPatriarch_Versus_execUpdateHealAvailable_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.GetMinCloakPct
// [0x00080102] 
struct AKFPawn_ZedPatriarch_Versus_execGetMinCloakPct_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateGunTrackingSkelCtrl
// [0x00820102] 
struct AKFPawn_ZedPatriarch_Versus_execUpdateGunTrackingSkelCtrl_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 ViewRot;                                          		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Tick
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_Versus_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Timer_EnableCloak
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execTimer_EnableCloak_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateCloakCharges
// [0x00040003] ( FUNC_Final )
struct AKFPawn_ZedPatriarch_Versus_execUpdateCloakCharges_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Timer_UpdateCloakCharge
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execTimer_UpdateCloakCharge_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateCloakedTimer
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execUpdateCloakedTimer_Parms
{
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.SetCloaked
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execSetCloaked_Parms
{
	// DWORD                                           bNewCloaking : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.PossessedBy
// [0x00020002] 
struct AKFPawn_ZedPatriarch_Versus_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedPatriarch_Versus_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_Human_Versus.NotifyLocalPlayerTeamReceived
// [0x00020102] 
struct AKFPawn_Human_Versus_execNotifyLocalPlayerTeamReceived_Parms
{
};

// Function kfgamecontent.KFPawn_Human_Versus.UpdateGameplayMICParams
// [0x00020102] 
struct AKFPawn_Human_Versus_execUpdateGameplayMICParams_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                MIC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_Human_Versus.SetCharacterArch
// [0x00024102] 
struct AKFPawn_Human_Versus_execSetCharacterArch_Parms
{
	// class UKFCharacterInfoBase*                     Info;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForce : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawRemainingTimeUntilSpawn
// [0x00820002] 
struct AKFGFXHudWrapper_Versus_execDrawRemainingTimeUntilSpawn_Parms
{
	// unsigned char                                   RemainingTime;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           bTakeOverIsActive : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector2D                                ScreenPos;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ShadowSize;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           textscale;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ActualString;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
	// struct FFontRenderInfo                          MyFontRenderInfo;                                 		// 0x0030 (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawBossPawnIcon
// [0x00820002] 
struct AKFGFXHudWrapper_Versus_execDrawBossPawnIcon_Parms
{
	// struct FVector                                  BossLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           IconSizeMult;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawPreciseHumanPlayerInfo
// [0x00820002] 
struct AKFGFXHudWrapper_Versus_execDrawPreciseHumanPlayerInfo_Parms
{
	// class AKFPawn_Human*                            KFPH;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Percentage;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           BarHeight;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           BarLength;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AKFPlayerReplicationInfo*                 KFPRI;                                            		// 0x0030 (0x0008) [0x0000000000000000]              
	// float                                           IconSizeMult;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawFriendlyZedPawnIcon
// [0x00820102] 
struct AKFGFXHudWrapper_Versus_execDrawFriendlyZedPawnIcon_Parms
{
	// class APawn*                                    MonsterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           Percentage;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           BarHeight;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           BarLength;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FFontRenderInfo                          MyFontRenderInfo;                                 		// 0x002C (0x0028) [0x0000000000000000]              
	// float                                           FontScale;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.CheckAndDrawBossPawnIcon
// [0x00820102] 
struct AKFGFXHudWrapper_Versus_execCheckAndDrawBossPawnIcon_Parms
{
	// struct FVector                                  ViewLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewVector;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	// float                                           ThisDot;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BossPawnLocation;                                 		// 0x001C (0x000C) [0x0000000000000000]              
	// class AKFPawn_Monster*                          BossPawn;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawHUD
// [0x00820002] 
struct AKFGFXHudWrapper_Versus_execDrawHUD_Parms
{
	// float                                           ThisDot;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewLocation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewVector;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TestPawnLocation;                                 		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
	// class APawn*                                    TestPawn;                                         		// 0x0034 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Human*                            HumanPawn;                                        		// 0x003C (0x0008) [0x0000000000000000]              
	// TArray< class APlayerReplicationInfo* >         VisibleHumanPlayers;                              		// 0x0044 (0x0010) [0x0000000000000000]              
	// TArray< struct FsHiddenHumanPawnInfo >          HiddenHumanPlayers;                               		// 0x0054 (0x0010) [0x0000000000000000]              
	// unsigned char                                   MyTeamNum;                                        		// 0x0064 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.GetHUDClass
// [0x00020002] 
struct AKFGFXHudWrapper_Versus_execGetHUDClass_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.CreateHUDMovie
// [0x00024002] 
struct AKFGFXHudWrapper_Versus_execCreateHUDMovie_Parms
{
	// DWORD                                           bForce : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.PostBeginPlay
// [0x00020102] 
struct AKFGFXHudWrapper_Versus_execPostBeginPlay_Parms
{
	// class AKFPawn_Monster*                          KFP;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ApplyGlobalDamage
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execApplyGlobalDamage_Parms
{
	// class AKFPawn_Human*                            Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ReduceDamage
// [0x00C20002] 
struct AKFGameInfo_WeeklySurvival_execReduceDamage_Parms
{
	// int                                             Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    injured;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x003C (0x0028) [0x0000000000000000]              
	// int                                             HitZoneIdx;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	// class AKFPawn*                                  InstigatorPawn;                                   		// 0x0068 (0x0008) [0x0000000000000000]              
	// struct FStatAdjustments                         ToAdjust;                                         		// 0x0070 (0x0070) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AdjustForBeefcakeRules
// [0x00824002] 
struct AKFGameInfo_WeeklySurvival_execAdjustForBeefcakeRules_Parms
{
	// class APawn*                                    Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	// float                                           CurrentScale;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           PercentIncrease;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AKFPawn_Monster*                          KFP;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FStatAdjustments                         StatAdjust;                                       		// 0x001C (0x0070) [0x0000000000000000]              
	// float                                           IntendedHeadScaling;                              		// 0x008C (0x0004) [0x0000000000000000]              
	// float                                           OldHealthMax;                                     		// 0x0090 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AdjustPawnScale
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execAdjustPawnScale_Parms
{
	// class APawn*                                    Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           ScalePercent;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AKFPawn_Monster*                          MonsterPawn;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	// class AKFPawn_Human*                            HumanPawn;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	// int                                             CurrentHealth;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.DoDeathExplosion
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execDoDeathExplosion_Parms
{
	// class APawn*                                    DeadPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UKFGameExplosion*                         ExplosionTemplate;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UClass*                                   ExplosionIgnoreClass;                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AKFExplosionActorReplicated*              ExploActor;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.NotifyIgnoredScream
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execNotifyIgnoredScream_Parms
{
	// class AKFPawn*                                  ScreamPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.NotifyRally
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execNotifyRally_Parms
{
	// class AKFPawn*                                  RalliedPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ScoreKill
// [0x00820002] 
struct AKFGameInfo_WeeklySurvival_execScoreKill_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              Other;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FStatAdjustments                         ToAdjust;                                         		// 0x0010 (0x0070) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PassiveHeal
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execPassiveHeal_Parms
{
	// int                                             HealAmount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HealthBeforeHeal;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    HealedPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ScoreHeal
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execScoreHeal_Parms
{
	// int                                             HealAmount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HealthBeforeHeal;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    HealedPawn;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ScoreDamage
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execScoreDamage_Parms
{
	// int                                             DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             HealthBeforeDamage;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    DamagedPawn;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.RestartPlayer
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execRestartPlayer_Parms
{
	// class AController*                              NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Human*                            KFPH;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFInventoryManager*                      KFIM;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AdjustStartingGrenadeCount
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execAdjustStartingGrenadeCount_Parms
{
	// int                                             CurrentCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AllowPrimaryWeapon
// [0x00820002] 
struct AKFGameInfo_WeeklySurvival_execAllowPrimaryWeapon_Parms
{
	// struct FString                                  ClassPath;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FSTraderItem                             Item;                                             		// 0x0014 (0x0064) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetGameInfoSpawnRateMod
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execGetGameInfoSpawnRateMod_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetMonsterDefaults
// [0x00820002] 
struct AKFGameInfo_WeeklySurvival_execSetMonsterDefaults_Parms
{
	// class AKFPawn_Monster*                          P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FStatAdjustments                         ToAdjust;                                         		// 0x0008 (0x0070) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetBossAISpawnType
// [0x00820002] 
struct AKFGameInfo_WeeklySurvival_execGetBossAISpawnType_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FSpawnReplacement                        Replacement;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	// int                                             BossIdx;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetAISpawnType
// [0x00820002] 
struct AKFGameInfo_WeeklySurvival_execGetAISpawnType_Parms
{
	// unsigned char                                   AIType;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UClass*                                   ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FSpawnReplacement                        Replacement;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	// float                                           RandF;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ResetPickups
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execResetPickups_Parms
{
	// TArray< class AKFPickupFactory* >               PickupList;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             NumPickups;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ResetAllPickups
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execResetAllPickups_Parms
{
	// DWORD                                           bCallReset : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.InitAllPickups
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execInitAllPickups_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetupNextTrader
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSetupNextTrader_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.OpenTrader
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execOpenTrader_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetAdditionalBossSpawns
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execGetAdditionalBossSpawns_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PauseAdditionalBossWaves
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execPauseAdditionalBossWaves_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SpawnBossWave
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSpawnBossWave_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.BossCameraZedTimeRecheck
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execBossCameraZedTimeRecheck_Parms
{
	// class AKFPawn_Monster*                          KFM;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UKFInterface_MonsterBoss*                 BossRef;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.StartWave
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execStartWave_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetTotalWaveCountScale
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execGetTotalWaveCountScale_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ModifyGroundSpeed
// [0x00420002] 
struct AKFGameInfo_WeeklySurvival_execModifyGroundSpeed_Parms
{
	// class AKFPawn*                                  PlayerPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           GroundSpeed;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AKFWeapon*                                KFW;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	// class AKFInventoryManager*                      KFIM;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.EndOfMatch
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execEndOfMatch_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPlayerController*                      KFPC;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ClearZedTimePCTimers
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execClearZedTimePCTimers_Parms
{
	// class AKFPlayerController_WeeklySurvival*       KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.WaveEnded
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execWaveEnded_Parms
{
	// unsigned char                                   WinCondition;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.TickZedTime
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execTickZedTime_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.Tick
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PostLogin
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_WeeklySurvival_eventPostLogin_Parms
{
	// class APlayerController*                        NewPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController_WeeklySurvival*       KFPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Customization*                    KFCustomizePawn;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.CreateDifficultyInfo
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execCreateDifficultyInfo_Parms
{
	// struct FString                                  Options;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.StartMatch
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execStartMatch_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ResetPermanentZed
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execResetPermanentZed_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  KFP;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetPermanentZedTime
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSetPermanentZedTime_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetWorldInfoOverrides
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSetWorldInfoOverrides_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetSpawnPointOverrides
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSetSpawnPointOverrides_Parms
{
	// class AKFSpawnVolume*                           KFSV;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetZedTimeOverrides
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSetZedTimeOverrides_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetPickupItemList
// [0x00820002] 
struct AKFGameInfo_WeeklySurvival_execSetPickupItemList_Parms
{
	// struct FSTraderItem                             TraderItem;                                       		// 0x0000 (0x0064) [0x0000000000000000]              
	// class AKFPickupFactory_Item*                    ItemFactory;                                      		// 0x0064 (0x0008) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetGameLength
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSetGameLength_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetGameDifficulty
// [0x00020002] 
struct AKFGameInfo_WeeklySurvival_execSetGameDifficulty_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFGameInfo_WeeklySurvival_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.InitGame
// [0x00420802] ( FUNC_Event )
struct AKFGameInfo_WeeklySurvival_eventInitGame_Parms
{
	// struct FString                                  Options;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ErrorMessage;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UKFGameEngine*                            KGE;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GametypeChecksWaveLength
// [0x00022002] 
struct AKFGameInfo_WeeklySurvival_execGametypeChecksWaveLength_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GametypeChecksDifficulty
// [0x00022002] 
struct AKFGameInfo_WeeklySurvival_execGametypeChecksDifficulty_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetGameType
// [0x00022802] ( FUNC_Event )
struct AKFGameInfo_WeeklySurvival_eventSetGameType_Parms
{
	// struct FString                                  MapName;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Options;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  Portal;                                           		// 0x0020 (0x0010) [0x0000000000000000]              
	// class UClass*                                   ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	// class UKFGameEngine*                            KGE;                                              		// 0x0038 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.GetRallyBoostResistance
// [0x00020102] 
struct AKFPawn_ZedClot_AlphaKing_execGetRallyBoostResistance_Parms
{
	// int                                             NewDamage;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.GetRallyBoostDamage
// [0x00020102] 
struct AKFPawn_ZedClot_AlphaKing_execGetRallyBoostDamage_Parms
{
	// int                                             NewDamage;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.Rally
// [0x00024102] 
struct AKFPawn_ZedClot_AlphaKing_execRally_Parms
{
	// class AKFPawn*                                  RallyInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UParticleSystem*                          RallyEffect;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FName                                    EffectBoneName;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  EffectOffset;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UParticleSystem*                          AltRallyEffect;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FName                                    AltEffectBoneNames[ 0x2 ];                        		// 0x002C (0x0010) [0x0000000000000000]              
	// struct FVector                                  AltEffectOffset;                                  		// 0x003C (0x000C) [0x0000000000000000]              
	// DWORD                                           bSkipEffects : 1;                                 		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.PossessedBy
// [0x00020802] ( FUNC_Event )
struct AKFPawn_ZedClot_AlphaKing_eventPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFAIController_ZedClot_AlphaKing*        AlphaController;                                  		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedClot_AlphaKing_eventPostBeginPlay_Parms
{
	// class UClass*                                   MyDifficultySettings;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFGameReplicationInfo*                   KFGRI;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.Timer_CheckForExplode
// [0x00820102] 
struct AKFPawn_ZedCrawlerKing_execTimer_CheckForExplode_Parms
{
	// class AKFGoreManager*                           GoreManager;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< struct FName >                          OutGibBoneList;                                   		// 0x0008 (0x0010) [0x0000000000000000]              
	// int                                             NumGibs;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Impulse;                                          		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.CancelExplosion
// [0x00020102] 
struct AKFPawn_ZedCrawlerKing_execCancelExplosion_Parms
{
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.PlayDying
// [0x00020102] 
struct AKFPawn_ZedCrawlerKing_execPlayDying_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.Died
// [0x00020002] 
struct AKFPawn_ZedCrawlerKing_execDied_Parms
{
	// class AController*                              Killer;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.PlayHeadAsplode
// [0x00020102] 
struct AKFPawn_ZedCrawlerKing_execPlayHeadAsplode_Parms
{
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.CauseHeadTrauma
// [0x00024002] 
struct AKFPawn_ZedCrawlerKing_execCauseHeadTrauma_Parms
{
	// float                                           BleedOutTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.ClearBuffIcons
// [0x00020000] 
struct UKFGFxHUD_PlayerStatusVersus_execClearBuffIcons_Parms
{
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.ShowActiveIndicators
// [0x00020000] 
struct UKFGFxHUD_PlayerStatusVersus_execShowActiveIndicators_Parms
{
	// TArray< struct FString >                        IconPathStrings;                                  		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateHealer
// [0x00020000] 
struct UKFGFxHUD_PlayerStatusVersus_execUpdateHealer_Parms
{
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdatePerk
// [0x00020000] 
struct UKFGFxHUD_PlayerStatusVersus_execUpdatePerk_Parms
{
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateArmor
// [0x00020000] 
struct UKFGFxHUD_PlayerStatusVersus_execUpdateArmor_Parms
{
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateXP
// [0x00020000] 
struct UKFGFxHUD_PlayerStatusVersus_execUpdateXP_Parms
{
	// int                                             XPDelta;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             XPPercent;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           bLevelUp : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   PerkClass;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateHealth
// [0x00020002] 
struct UKFGFxHUD_PlayerStatusVersus_execUpdateHealth_Parms
{
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateCharacterName
// [0x00020002] 
struct UKFGFxHUD_PlayerStatusVersus_execUpdateCharacterName_Parms
{
	// class AKFPawn*                                  MyKFPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.TickHud
// [0x00020002] 
struct UKFGFxHUD_PlayerStatusVersus_execTickHud_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.PawnDied
// [0x00020002] 
struct UKFGFxMoviePlayer_HUD_Versus_execPawnDied_Parms
{
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.ReceivePawn
// [0x00020002] 
struct UKFGFxMoviePlayer_HUD_Versus_execReceivePawn_Parms
{
	// class AKFPawn*                                  NewPawn;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.WidgetInitialized
// [0x00020802] ( FUNC_Event )
struct UKFGFxMoviePlayer_HUD_Versus_eventWidgetInitialized_Parms
{
	// struct FName                                    WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               Widget;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.TickHud
// [0x00020002] 
struct UKFGFxMoviePlayer_HUD_Versus_execTickHud_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxTutorialContainer.ReplaceTextArray
// [0x00422002] 
struct UKFGFxTutorialContainer_execReplaceTextArray_Parms
{
	// struct FString                                  Text;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  Replace;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	// TArray< struct FString >                        With;                                             		// 0x0020 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FString                                  Input;                                            		// 0x0038 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxTutorialContainer.SetPopUpData
// [0x00C20002] 
struct UKFGFxTutorialContainer_execSetPopUpData_Parms
{
	// TArray< struct FSTutorialSlide >                TutorialArray;                                    		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               DataObject;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  DescriptionString;                                		// 0x0028 (0x0010) [0x0000000000000000]              
	// struct FKeyBind                                 BoundKey;                                         		// 0x0038 (0x001C) [0x0000000000000000]              
	// TArray< struct FString >                        KeyStrings;                                       		// 0x0054 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxTutorialContainer.LocalizeText
// [0x00020002] 
struct UKFGFxTutorialContainer_execLocalizeText_Parms
{
	// class UGFxObject*                               LocalizedObject;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFGFxTutorialContainer.UpdateUsingGamePad
// [0x00020002] 
struct UKFGFxTutorialContainer_execUpdateUsingGamePad_Parms
{
	// DWORD                                           bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFGFxTutorialContainer.InitMenu
// [0x00020002] 
struct UKFGFxTutorialContainer_execInitMenu_Parms
{
};

// Function kfgamecontent.KFInventory_Money.DenyPickupQuery
// [0x00020002] 
struct AKFInventory_Money_execDenyPickupQuery_Parms
{
	// class UClass*                                   ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   Pickup;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFInventory_Money.DropFrom
// [0x00020002] 
struct AKFInventory_Money_execDropFrom_Parms
{
	// struct FVector                                  StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartVelocity;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// class AKFDroppedPickup_Cash*                    KFDP;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	// class APlayerReplicationInfo*                   PRI;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             Amount;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_TargetGame.NotifyWinners
// [0x00040003] ( FUNC_Final )
struct AKFMG_TargetGame_execNotifyWinners_Parms
{
	// class AController*                              Controller;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_TargetGame.MinigameComplete
// [0x00020002] 
struct AKFMG_TargetGame_execMinigameComplete_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UKFSeqEvent_MinigameEndCondition*         EndCondEvent;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_TargetGame.ResetGame
// [0x00020002] 
struct AKFMG_TargetGame_execResetGame_Parms
{
};

// Function kfgamecontent.KFMG_TargetGame.FinalizeGame
// [0x00020102] 
struct AKFMG_TargetGame_execFinalizeGame_Parms
{
};

// Function kfgamecontent.KFMG_TargetGame.TargetHit
// [0x00020002] 
struct AKFMG_TargetGame_execTargetHit_Parms
{
	// class AActor*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              HitInstigator;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_TargetGame.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
struct AKFMG_TargetGame_eventCanPlayAkEvent_Parms
{
	// class AActor*                                   InOwner;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMG_TargetGame.UpdateBase
// [0x00020100] 
struct AKFMG_TargetGame_execUpdateBase_Parms
{
	// class AKFMGA_Target*                            Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_TargetGame.CanBeActivated
// [0x00020002] 
struct AKFMG_TargetGame_execCanBeActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMG_TargetGame.Deactivated
// [0x00020002] 
struct AKFMG_TargetGame_execDeactivated_Parms
{
};

// Function kfgamecontent.KFMG_TargetGame.Activated
// [0x00020002] 
struct AKFMG_TargetGame_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSeqEvent_MinigameEndCondition.AllLevelsComplete
// [0x00020002] 
struct UKFSeqEvent_MinigameEndCondition_execAllLevelsComplete_Parms
{
	// class AActor*                                   InInstigator;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< int >                                   ActiveIndices;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFSeqEvent_MinigameEndCondition.MinigameComplete
// [0x00024002] 
struct UKFSeqEvent_MinigameEndCondition_execMinigameComplete_Parms
{
	// class AActor*                                   InInstigator;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVictory : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             CompletedLevel;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ActiveIndices;                                    		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Target.IsAlive
// [0x00020102] 
struct AKFMGA_Target_execIsAlive_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMGA_Target.PlayDeath
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_eventPlayDeath_Parms
{
};

// Function kfgamecontent.KFMGA_Target.Finalize
// [0x00020900] ( FUNC_Event )
struct AKFMGA_Target_eventFinalize_Parms
{
};

// Function kfgamecontent.KFMGA_Target.SetInactive
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_eventSetInactive_Parms
{
};

// Function kfgamecontent.KFMGA_Target.SetActive
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_eventSetActive_Parms
{
};

// Function kfgamecontent.KFMGA_Target.Reset
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_eventReset_Parms
{
};

// Function kfgamecontent.KFMGA_Target.InvalidHit
// [0x00020102] 
struct AKFMGA_Target_execInvalidHit_Parms
{
	// class AController*                              EventInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Target.ValidHit
// [0x00020002] 
struct AKFMGA_Target_execValidHit_Parms
{
	// class AController*                              EventInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFMG_TargetGame*                         TargetGame;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Target.TakeDamage
// [0x00024902] ( FUNC_Event )
struct AKFMGA_Target_eventTakeDamage_Parms
{
	// int                                             DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Target.TakeRadiusDamage
// [0x00024102] 
struct AKFMGA_Target_execTakeRadiusDamage_Parms
{
	// class AController*                              InstigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           BaseDamage;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DamageRadius;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           Momentum;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HurtOrigin;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// DWORD                                           bFullDamage : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AActor*                                   DamageCauser;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           DamageFalloffExponent;                            		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Target.AddToOwnerArray
// [0x00020102] 
struct AKFMGA_Target_execAddToOwnerArray_Parms
{
};

// Function kfgamecontent.KFMGA_Target.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.FinalizeVictory
// [0x00020102] 
struct AKFMG_BloatDunk_execFinalizeVictory_Parms
{
	// float                                           ResetTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.SetBloatRagdoll
// [0x00020102] 
struct AKFMG_BloatDunk_execSetBloatRagdoll_Parms
{
};

// Function kfgamecontent.KFMG_BloatDunk.HandleDelayedShutdown
// [0x00020102] 
struct AKFMG_BloatDunk_execHandleDelayedShutdown_Parms
{
	// float                                           DelayTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    DelayedShutdownAnim;                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.FinalizeGame
// [0x00020102] 
struct AKFMG_BloatDunk_execFinalizeGame_Parms
{
	// class AActor*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.MinigameComplete
// [0x00020002] 
struct AKFMG_BloatDunk_execMinigameComplete_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMG_BloatDunk.UpdateBase
// [0x00020102] 
struct AKFMG_BloatDunk_execUpdateBase_Parms
{
	// class AKFMGA_Target*                            Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.TargetHit
// [0x00020002] 
struct AKFMG_BloatDunk_execTargetHit_Parms
{
	// class AActor*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              HitInstigator;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.ActivateTargets
// [0x00020002] 
struct AKFMG_BloatDunk_execActivateTargets_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Activated;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         RandLookupList;                                   		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.StartupGame
// [0x00020102] 
struct AKFMG_BloatDunk_execStartupGame_Parms
{
};

// Function kfgamecontent.KFMG_BloatDunk.HandleDelayedStartup
// [0x00820102] 
struct AKFMG_BloatDunk_execHandleDelayedStartup_Parms
{
	// float                                           AnimLength;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  NewLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.Reset
// [0x00020102] 
struct AKFMG_BloatDunk_execReset_Parms
{
};

// Function kfgamecontent.KFMG_BloatDunk.Activated
// [0x00020002] 
struct AKFMG_BloatDunk_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.SpawnTarget
// [0x00020002] 
struct AKFMG_BloatDunk_execSpawnTarget_Parms
{
	// class AKFMGA_TargetGame*                        Wheel;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   NewTarget;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AKFMGA_Target*                            RiggedTarget;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFMG_BloatDunk_eventPostBeginPlay_Parms
{
	// struct FName                                    BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.Tick
// [0x00820902] ( FUNC_Event )
struct AKFMG_BloatDunk_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_BloatDunk.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFMG_BloatDunk_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_TargetGame.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
struct AKFMGA_TargetGame_eventCanPlayAkEvent_Parms
{
	// class AActor*                                   InOwner;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMGA_TargetGame.Deactivated
// [0x00020000] 
struct AKFMGA_TargetGame_execDeactivated_Parms
{
};

// Function kfgamecontent.KFMGA_TargetGame.Activated
// [0x00020000] 
struct AKFMGA_TargetGame_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_TargetGame.CanBeActivated
// [0x00020000] 
struct AKFMGA_TargetGame_execCanBeActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMG_RiggedTargetGame.Finalize
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execFinalize_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           ResetTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.HandleDelayedShutdown
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execHandleDelayedShutdown_Parms
{
	// float                                           DelayTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.FinalizeGame
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execFinalizeGame_Parms
{
	// class AActor*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.MinigameComplete
// [0x00020002] 
struct AKFMG_RiggedTargetGame_execMinigameComplete_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMG_RiggedTargetGame.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
struct AKFMG_RiggedTargetGame_eventCanPlayAkEvent_Parms
{
	// class AActor*                                   InOwner;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFMGA_Target*                            Target;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.UpdateBase
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execUpdateBase_Parms
{
	// class AKFMGA_Target*                            Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.TargetHit
// [0x00020002] 
struct AKFMG_RiggedTargetGame_execTargetHit_Parms
{
	// class AActor*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AController*                              HitInstigator;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.DelayedStart
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execDelayedStart_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.StartupGame
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execStartupGame_Parms
{
	// float                                           StartupTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.SwitchAnim
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execSwitchAnim_Parms
{
	// unsigned char                                   SelectedState;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    AnimName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           bLoop : 1;                                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAnimNodeBlendList*                       BlendList;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.Activated
// [0x00020002] 
struct AKFMG_RiggedTargetGame_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.Reset
// [0x00020102] 
struct AKFMG_RiggedTargetGame_execReset_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFMG_RiggedTargetGame_eventPostBeginPlay_Parms
{
	// struct FName                                    BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   NewTarget;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFMGA_Target*                            RiggedTarget;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_RiggedTargetGame.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFMG_RiggedTargetGame_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.ResetGame
// [0x00020002] 
struct AKFMG_MultilevelTargetGame_execResetGame_Parms
{
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.CheckFullCompletion
// [0x00020002] 
struct AKFMG_MultilevelTargetGame_execCheckFullCompletion_Parms
{
	// DWORD                                           bComplete : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UKFSeqEvent_MinigameEndCondition*         EndCondEvent;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.MinigameComplete
// [0x00020002] 
struct AKFMG_MultilevelTargetGame_execMinigameComplete_Parms
{
	// DWORD                                           bVictory : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UKFSeqEvent_MinigameEndCondition*         EndCondEvent;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.Deactivated
// [0x00020002] 
struct AKFMG_MultilevelTargetGame_execDeactivated_Parms
{
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.Activated
// [0x00020002] 
struct AKFMG_MultilevelTargetGame_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.CanBeActivated
// [0x00020002] 
struct AKFMG_MultilevelTargetGame_execCanBeActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFMG_MultilevelTargetGame_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFMG_SwingRide.RideStopped
// [0x00020000] 
struct AKFMG_SwingRide_execRideStopped_Parms
{
};

// Function kfgamecontent.KFMG_SwingRide.Deactivated
// [0x00020102] 
struct AKFMG_SwingRide_execDeactivated_Parms
{
};

// Function kfgamecontent.KFMG_SwingRide.Activated
// [0x00020102] 
struct AKFMG_SwingRide_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMG_SwingRide.SetSpinDownCurve
// [0x00020102] 
struct AKFMG_SwingRide_execSetSpinDownCurve_Parms
{
};

// Function kfgamecontent.KFMG_SwingRide.SetSpinUpCurve
// [0x00020102] 
struct AKFMG_SwingRide_execSetSpinUpCurve_Parms
{
};

// Function kfgamecontent.KFMG_SwingRide.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
struct AKFMG_SwingRide_eventCanPlayAkEvent_Parms
{
	// class AActor*                                   InOwner;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMG_SwingRide.CanBeActivated
// [0x00020002] 
struct AKFMG_SwingRide_execCanBeActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMG_SwingRide.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFMG_SwingRide_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_AnimatedTrap.EndMovement
// [0x00020100] 
struct AKFMGA_AnimatedTrap_execEndMovement_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.CanBeActivated
// [0x00020002] 
struct AKFMGA_AnimatedTrap_execCanBeActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMGA_AnimatedTrap.SetMoveDeactivationCurve
// [0x00020102] 
struct AKFMGA_AnimatedTrap_execSetMoveDeactivationCurve_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.SetMoveActivationCurve
// [0x00020102] 
struct AKFMGA_AnimatedTrap_execSetMoveActivationCurve_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayDeactivationIdle
// [0x00020102] 
struct AKFMGA_AnimatedTrap_execPlayDeactivationIdle_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayDeactivation
// [0x00020102] 
struct AKFMGA_AnimatedTrap_execPlayDeactivation_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayActivationIdle
// [0x00020102] 
struct AKFMGA_AnimatedTrap_execPlayActivationIdle_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayActivation
// [0x00020102] 
struct AKFMGA_AnimatedTrap_execPlayActivation_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.Deactivated
// [0x00020002] 
struct AKFMGA_AnimatedTrap_execDeactivated_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.Activated
// [0x00020002] 
struct AKFMGA_AnimatedTrap_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_AnimatedTrap.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
struct AKFMGA_AnimatedTrap_eventCanPlayAkEvent_Parms
{
	// class AActor*                                   InOwner;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFMGA_AnimatedTrap_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFMGA_AnimatedTrap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFMGA_AnimatedTrap_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_DoshTossPit.Finalize
// [0x00020902] ( FUNC_Event )
struct AKFMGA_DoshTossPit_eventFinalize_Parms
{
};

// Function kfgamecontent.KFMGA_DoshTossPit.SetInactive
// [0x00020902] ( FUNC_Event )
struct AKFMGA_DoshTossPit_eventSetInactive_Parms
{
};

// Function kfgamecontent.KFMGA_DoshTossPit.SetActive
// [0x00020902] ( FUNC_Event )
struct AKFMGA_DoshTossPit_eventSetActive_Parms
{
};

// Function kfgamecontent.KFMGA_DoshTossPit.PlayDeath
// [0x00020102] 
struct AKFMGA_DoshTossPit_execPlayDeath_Parms
{
};

// Function kfgamecontent.KFMGA_DoshTossPit.SetBucketLidState
// [0x00020102] 
struct AKFMGA_DoshTossPit_execSetBucketLidState_Parms
{
	// float                                           BlendAmount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    TopName;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFMG_RiggedTargetGame*                   TargetGame;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// int                                             BoneIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_DoshTossPit.Reset
// [0x00820902] ( FUNC_Event )
struct AKFMGA_DoshTossPit_eventReset_Parms
{
	// struct FVector                                  RelativeOffset;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_DoshTossPit.DoshHit
// [0x00020002] 
struct AKFMGA_DoshTossPit_execDoshHit_Parms
{
	// class AKFDroppedPickup_Cash*                    Cash;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPlayerReplicationInfo*                 KFPRI;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_DoshTossPit.ValidHit
// [0x00020002] 
struct AKFMGA_DoshTossPit_execValidHit_Parms
{
	// class AController*                              EventInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_DoshTossPit.Touch
// [0x00020902] ( FUNC_Event )
struct AKFMGA_DoshTossPit_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_DoshTossPit.Tick
// [0x00020902] ( FUNC_Event )
struct AKFMGA_DoshTossPit_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_DoshTossPit.TakeDamage
// [0x00024900] ( FUNC_Event )
struct AKFMGA_DoshTossPit_eventTakeDamage_Parms
{
	// int                                             DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AController*                              EventInstigator;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Rollercoaster.SetMoveActivationCurve
// [0x00020102] 
struct AKFMGA_Rollercoaster_execSetMoveActivationCurve_Parms
{
};

// Function kfgamecontent.KFMGA_Rollercoaster.PlayDeactivation
// [0x00020102] 
struct AKFMGA_Rollercoaster_execPlayDeactivation_Parms
{
};

// Function kfgamecontent.KFMGA_Rollercoaster.PlayActivationIdle
// [0x00020102] 
struct AKFMGA_Rollercoaster_execPlayActivationIdle_Parms
{
};

// Function kfgamecontent.KFMGA_Rollercoaster.Deactivated
// [0x00020002] 
struct AKFMGA_Rollercoaster_execDeactivated_Parms
{
};

// Function kfgamecontent.KFMGA_Rollercoaster.Activated
// [0x00020002] 
struct AKFMGA_Rollercoaster_execActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Rollercoaster.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Rollercoaster_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGA_Rollercoaster.CanBeActivated
// [0x00020002] 
struct AKFMGA_Rollercoaster_execCanBeActivated_Parms
{
	// class AKFTrigger_MinigameButton*                ActivationSource;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFMGA_Rollercoaster.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Rollercoaster_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.SetInactive
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_BloatDunk_eventSetInactive_Parms
{
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.SetActive
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_BloatDunk_eventSetActive_Parms
{
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.Reset
// [0x00020902] ( FUNC_Event )
struct AKFMGA_Target_BloatDunk_eventReset_Parms
{
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.ValidHit
// [0x00020002] 
struct AKFMGA_Target_BloatDunk_execValidHit_Parms
{
	// class AController*                              EventInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFMGVolume_DoshToss.Touch
// [0x00020802] ( FUNC_Event )
struct AKFMGVolume_DoshToss_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFvolume_RagdollThrow.Touch
// [0x00820902] ( FUNC_Event )
struct AKFvolume_RagdollThrow_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class AKFPawn_Human*                            KFPH;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Monster*                          KFPM;                                             		// 0x0030 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
	// int                                             LastHitIdx;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	// struct FHitTracking                             NewHit;                                           		// 0x0048 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Emerge_Crawler.PushOverlappingHumans
// [0x00020000] 
struct UKFSM_Emerge_Crawler_execPushOverlappingHumans_Parms
{
};

// Function kfgamecontent.KFSM_Emerge_Crawler.GetEmergeAnim
// [0x00020002] 
struct UKFSM_Emerge_Crawler_execGetEmergeAnim_Parms
{
	// unsigned char                                   EmergeType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Variant;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FName                                    ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Emerge_Crawler.SetCrawlerPostEmergeFlags
// [0x00020000] 
struct UKFSM_Emerge_Crawler_execSetCrawlerPostEmergeFlags_Parms
{
	// struct FName                                    EmergeAnim;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Emerge_Crawler.PlayEmerge
// [0x00020002] 
struct UKFSM_Emerge_Crawler_execPlayEmerge_Parms
{
	// struct FName                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    EmergeAnim;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerCrawler_Suicide.TriggerExplosion
// [0x00026002] 
struct UKFSM_PlayerCrawler_Suicide_execTriggerExplosion_Parms
{
	// class AKFPawn*                                  CrawlerOwner;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UKFGameExplosion*                         ExplosionTemplate;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForceExplosion : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFExplosion_PlayerCrawlerSuicide*        ExploActor;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedCrawler_Versus*                CrawlerOwnerV;                                    		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerCrawler_Suicide.SpecialMoveEnded
// [0x00020102] 
struct UKFSM_PlayerCrawler_Suicide_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerCrawler_Suicide.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerCrawler_Suicide_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPlayerCamera_Versus.FindBestCameraType
// [0x00080002] 
struct AKFPlayerCamera_Versus_execFindBestCameraType_Parms
{
	// class AActor*                                   CameraTarget;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGameCameraBase*                          ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerCamera_Versus.SwapToZedSuicideCam
// [0x00020002] 
struct AKFPlayerCamera_Versus_execSwapToZedSuicideCam_Parms
{
	// struct FVector                                  SuicideLocation;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	// class UGameCameraBase*                          NewCamera;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerCamera_Versus.PostBeginPlay
// [0x00020002] 
struct AKFPlayerCamera_Versus_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFPawn_ZedFleshpound_Mixer.UsePlayerControlledZedSkin
// [0x00020902] ( FUNC_Event )
struct AKFPawn_ZedFleshpound_Mixer_eventUsePlayerControlledZedSkin_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSkinTypeEffects_HansShield.AttachEffectToHitLocation
// [0x00020102] 
struct UKFSkinTypeEffects_HansShield_execAttachEffectToHitLocation_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UParticleSystem*                          ParticleTemplate;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             HitZoneIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDirection;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FName                                    HitBoneName;                                      		// 0x0034 (0x0008) [0x0000000000000000]              
	// int                                             HitBoneIdx;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_HansHEGrenade.SpecialRandSpin
// [0x00020102] 
struct AKFProj_HansHEGrenade_execSpecialRandSpin_Parms
{
	// float                                           spinRate;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_HansHEGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_HansHEGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_HansNerveGasGrenade_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.StopFlightEffects
// [0x00080100] 
struct AKFProj_HansNerveGasGrenade_execStopFlightEffects_Parms
{
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
struct AKFProj_HansNerveGasGrenade_eventGrenadeIsAtRest_Parms
{
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.SpecialRandSpin
// [0x00020102] 
struct AKFProj_HansNerveGasGrenade_execSpecialRandSpin_Parms
{
	// float                                           spinRate;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_HansNerveGasGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.StopFlightEffects
// [0x00080100] 
struct AKFProj_HansSmokeGrenade_execStopFlightEffects_Parms
{
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
struct AKFProj_HansSmokeGrenade_eventGrenadeIsAtRest_Parms
{
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.SpecialRandSpin
// [0x00020102] 
struct AKFProj_HansSmokeGrenade_execSpecialRandSpin_Parms
{
	// float                                           spinRate;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_HansSmokeGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFWeap_AssaultRifle_DualMKb42_Hans.ConsumeAmmo
// [0x00020100] 
struct AKFWeap_AssaultRifle_DualMKb42_Hans_execConsumeAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_DualMKb42_Hans.SpawnProjectile
// [0x00020102] 
struct AKFWeap_AssaultRifle_DualMKb42_Hans_execSpawnProjectile_Parms
{
	// class UClass*                                   KFProjClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AKFProjectile*                            SpawnedProjectile;                                		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             ProjDamage;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.NotifyOwnerTakeHit
// [0x00020000] 
struct UKFSM_GrappleAttack_Hans_execNotifyOwnerTakeHit_Parms
{
	// class UClass*                                   DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.OnFollowerLeavingSpecialMove
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execOnFollowerLeavingSpecialMove_Parms
{
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.AnimEndNotify
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execAnimEndNotify_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.Timer_DetachFollower
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execTimer_DetachFollower_Parms
{
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.Timer_DrainHealth
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execTimer_DrainHealth_Parms
{
	// class AKFPawn_ZedHansBase*                      HansPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UKFAISpawnManager*                        SpawnManager;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedHansBase*                      HansPawn;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.SpecialMoveFlagsUpdated
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execSpecialMoveFlagsUpdated_Parms
{
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.BeginGrapple
// [0x00024002] 
struct UKFSM_GrappleAttack_Hans_execBeginGrapple_Parms
{
	// class AKFPawn*                                  Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedHansBase*                      HansPawn;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFAIController*                          KFAIC;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AKFExplosionActor*                        ExplosionActor;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.PlayGrappleLoopAnim
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execPlayGrappleLoopAnim_Parms
{
	// float                                           Duration;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           InterruptTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           ActualDrainTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           DrainsPerSecond;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.PlayGrabAnim
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execPlayGrabAnim_Parms
{
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_GrappleAttack_Hans_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedHansBase*                      HansPawn;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.PackFlagsBase
// [0x00022002] 
struct UKFSM_GrappleAttack_Hans_execPackFlagsBase_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Hans_WeaponSwitch.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Hans_WeaponSwitch_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedHans*                          HansPawn;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Hans_WeaponSwitch.PlayAnimation
// [0x00020002] 
struct UKFSM_Hans_WeaponSwitch_execPlayAnimation_Parms
{
	// class AKFPawn_ZedHans*                          HansPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Hans_ThrowGrenade.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_Hans_ThrowGrenade_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_Hans_ThrowGrenade.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Hans_ThrowGrenade_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Hans_ThrowGrenade.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Hans_ThrowGrenade_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedHansBase*                      HansPawn;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Hans_GrenadeHalfBarrage.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Hans_GrenadeHalfBarrage_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedHansBase*                      HansPawn;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Hans_GrenadeBarrage.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Hans_GrenadeBarrage_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedHansBase*                      HansPawn;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ServerToggleShield
// [0x002200C2] 
struct AKFPawn_ZedHans_Versus_execServerToggleShield_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ToggleEquipment
// [0x00020102] 
struct AKFPawn_ZedHans_Versus_execToggleEquipment_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.SetSprinting
// [0x00020002] 
struct AKFPawn_ZedHans_Versus_execSetSprinting_Parms
{
	// DWORD                                           bNewSprintStatus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ThrowGrenade
// [0x00020102] 
struct AKFPawn_ZedHans_Versus_execThrowGrenade_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ToggleAim
// [0x002200C2] 
struct AKFPawn_ZedHans_Versus_execToggleAim_Parms
{
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.PlayWeaponSwitch
// [0x00020102] 
struct AKFPawn_ZedHans_Versus_execPlayWeaponSwitch_Parms
{
	// class AWeapon*                                  OldWeapon;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AWeapon*                                  NewWeapon;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.StartFire
// [0x00020102] 
struct AKFPawn_ZedHans_Versus_execStartFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.PossessedBy
// [0x00020002] 
struct AKFPawn_ZedHans_Versus_execPossessedBy_Parms
{
	// class AController*                              C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPawn_ZedHansFriendlyTest.CanBeGrabbed
// [0x00024002] 
struct AKFPawn_ZedHansFriendlyTest_execCanBeGrabbed_Parms
{
	// class AKFPawn*                                  GrabbingPawn;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIgnoreFalling : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bAllowSameTeamGrab : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.CanOverrideMoveWith
// [0x00020002] 
struct UKFSM_Husk_FlameThrowerAttack_execCanOverrideMoveWith_Parms
{
	// struct FName                                    NewMove;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.TurnOffFlamethrower
// [0x00020102] 
struct UKFSM_Husk_FlameThrowerAttack_execTurnOffFlamethrower_Parms
{
	// class AKFPawn_ZedHusk*                          HuskOwner;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Husk_FlameThrowerAttack_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.TurnOnFlamethrower
// [0x00020102] 
struct UKFSM_Husk_FlameThrowerAttack_execTurnOnFlamethrower_Parms
{
	// class AKFPawn_ZedHusk*                          HuskOwner;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Husk_FlameThrowerAttack_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.InternalCanDoSpecialMove
// [0x00880002] 
struct UKFSM_Husk_FlameThrowerAttack_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_Suicide.SpecialMoveEnded
// [0x00020102] 
struct UKFSM_Husk_Suicide_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_Suicide.AnimEndNotify
// [0x00020002] 
struct UKFSM_Husk_Suicide_execAnimEndNotify_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_Suicide.OnAnimNotifyParticleSystemSpawned
// [0x00020002] 
struct UKFSM_Husk_Suicide_execOnAnimNotifyParticleSystemSpawned_Parms
{
	// class UAnimNotify_PlayParticleEffect*           AnimNotifyData;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 PSC;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UAnimSequence*                            AnimSeq;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_Suicide.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Husk_Suicide_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Husk_Suicide.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_Husk_Suicide_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveButtonReleased
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveButtonReleased_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveButtonRetriggered
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveButtonRetriggered_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveFlagsUpdated
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveFlagsUpdated_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.Tick
// [0x00820102] 
struct UKFSM_PlayerHusk_FireBallAttack_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Strength;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector2D                                StrengthRange;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.AnimEndNotify
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execAnimEndNotify_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayFireAnimation
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execPlayFireAnimation_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayFireHeldAnimation
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execPlayFireHeldAnimation_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayWindUpAnimation
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execPlayWindUpAnimation_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayAnimation
// [0x00020000] 
struct UKFSM_PlayerHusk_FireBallAttack_execPlayAnimation_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHuskFriendlyTest.AdjustDamage
// [0x00420002] 
struct AKFPawn_ZedHuskFriendlyTest_execAdjustDamage_Parms
{
	// int                                             InDamage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AController*                              InstigatedBy;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x002C (0x0028) [0x0000000000000000]              
	// class AActor*                                   DamageCauser;                                     		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPawn_ZedHuskFriendlyTest.CanBeGrabbed
// [0x00024002] 
struct AKFPawn_ZedHuskFriendlyTest_execCanBeGrabbed_Parms
{
	// class AKFPawn*                                  GrabbingPawn;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIgnoreFalling : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bAllowSameTeamGrab : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFProj_Missile_Patriarch.Destroyed
// [0x00020102] 
struct AKFProj_Missile_Patriarch_execDestroyed_Parms
{
};

// Function kfgamecontent.KFProj_Missile_Patriarch.StopSimulating
// [0x00080102] 
struct AKFProj_Missile_Patriarch_execStopSimulating_Parms
{
};

// Function kfgamecontent.KFProj_Missile_Patriarch.TraceProjHitZones
// [0x00420102] 
struct AKFProj_Missile_Patriarch_execTraceProjHitZones_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    out_Hits;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFProj_Missile_Patriarch.DoFlocking
// [0x00820102] 
struct AKFProj_Missile_Patriarch_execDoFlocking_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ForceDir;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CurlDir;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           ForceMag;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Missile_Patriarch.CurlTimer
// [0x00820102] 
struct AKFProj_Missile_Patriarch_execCurlTimer_Parms
{
	// struct FVector                                  TargetVec;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SeekDir;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Missile_Patriarch.Tick
// [0x00020902] ( FUNC_Event )
struct AKFProj_Missile_Patriarch_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Missile_Patriarch.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFProj_Missile_Patriarch_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFProj_Missile_Patriarch*                R;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Missile_Patriarch.StartCurlTimer
// [0x00020102] 
struct AKFProj_Missile_Patriarch_execStartCurlTimer_Parms
{
};

// Function kfgamecontent.KFProj_Missile_Patriarch.InitEx
// [0x00020002] 
struct AKFProj_Missile_Patriarch_execInitEx_Parms
{
	// struct FVector                                  AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	// float                                           CurlForceMultiplier;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           InitialMissileSpeed;                              		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           NewSeekDelay;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           NewSeekForce;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           NewGravForce;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           NewDistToApplyGravitySQ;                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Missile_Patriarch.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_Missile_Patriarch_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFProj_Mortar_Patriarch.InitEx
// [0x00020002] 
struct AKFProj_Mortar_Patriarch_execInitEx_Parms
{
	// struct FVector                                  AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	// float                                           CurlForceMultiplier;                              		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           InitialMissileSpeed;                              		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           NewSeekDelay;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           NewSeekForce;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           NewGravForce;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	// float                                           NewDistToApplyGravitySQ;                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.AddSpread
// [0x00820102] 
struct AKFWeap_Minigun_Patriarch_execAddSpread_Parms
{
	// struct FRotator                                 BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// float                                           CurrentSpread;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           RandZ;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.StopPawnSprint
// [0x00020100] 
struct AKFWeap_Minigun_Patriarch_execStopPawnSprint_Parms
{
	// DWORD                                           bClearPlayerInput : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.ConsumeAmmo
// [0x00020100] 
struct AKFWeap_Minigun_Patriarch_execConsumeAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.SpawnProjectile
// [0x00020102] 
struct AKFWeap_Minigun_Patriarch_execSpawnProjectile_Parms
{
	// class UClass*                                   KFProjClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AKFProjectile*                            SpawnedProjectile;                                		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             ProjDamage;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Patriarch_MortarAttack_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.AnimEndNotify
// [0x00020002] 
struct UKFSM_Patriarch_MortarAttack_execAnimEndNotify_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.Timer_FireBarrage
// [0x00020002] 
struct UKFSM_Patriarch_MortarAttack_execTimer_FireBarrage_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.FireMissiles
// [0x00020002] 
struct UKFSM_Patriarch_MortarAttack_execFireMissiles_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.PlayFireAnimation
// [0x00020002] 
struct UKFSM_Patriarch_MortarAttack_execPlayFireAnimation_Parms
{
	// class UAnimNodeSequence*                        AnimNodeSeq;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.GetAimDirAndTargetLoc
// [0x00420002] 
struct UKFSM_Patriarch_MortarAttack_execGetAimDirAndTargetLoc_Parms
{
	// int                                             MissileNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MissileLoc;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 MissileRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.GetProjectileClass
// [0x00020002] 
struct UKFSM_Patriarch_MortarAttack_execGetProjectileClass_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Patriarch_MortarAttack_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.AnimEndNotify
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execAnimEndNotify_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FName                                    SeqNodeName;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayWindDownAnimation
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execPlayWindDownAnimation_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.FireMissiles
// [0x00820002] 
struct UKFSM_Patriarch_MissileAttack_execFireMissiles_Parms
{
	// class AKFProj_Missile_Patriarch*                Missile;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// TArray< class AKFProj_Missile_Patriarch* >      FiredMissiles;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0048 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x004C (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0050 (0x0004) [0x0000000000000000]              
	// DWORD                                           bCurl : 1;                                        		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           CurlForceMultiplier;                              		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.Tick
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.GetAimDirAndTargetLoc
// [0x00420002] 
struct UKFSM_Patriarch_MissileAttack_execGetAimDirAndTargetLoc_Parms
{
	// int                                             MissileNum;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MissileLoc;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 MissileRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayFireAnimation
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execPlayFireAnimation_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.StartGunTracking
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execStartGunTracking_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayLoadAnimation
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execPlayLoadAnimation_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayAnimation
// [0x00020000] 
struct UKFSM_Patriarch_MissileAttack_execPlayAnimation_Parms
{
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.GetProjectileClass
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execGetProjectileClass_Parms
{
	// class UClass*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Patriarch_MissileAttack_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch_Versus.ShouldWeaponIgnoreStartFire
// [0x00020102] 
struct AKFWeap_Minigun_Patriarch_Versus_execShouldWeaponIgnoreStartFire_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch_Versus.PostBeginPlay
// [0x00020102] 
struct AKFWeap_Minigun_Patriarch_Versus_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFSM_Siren_Scream.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_Siren_Scream_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Siren_Scream.CheckIfScreamWasInterrupted
// [0x00020002] 
struct UKFSM_Siren_Scream_execCheckIfScreamWasInterrupted_Parms
{
};

// Function kfgamecontent.KFSM_Siren_Scream.ScreamExplosion
// [0x00020002] 
struct UKFSM_Siren_Scream_execScreamExplosion_Parms
{
};

// Function kfgamecontent.KFSM_Siren_Scream.InitializeSirenExplosion
// [0x00020002] 
struct UKFSM_Siren_Scream_execInitializeSirenExplosion_Parms
{
};

// Function kfgamecontent.KFSM_Siren_Scream.DestroyProjectileShield
// [0x00020002] 
struct UKFSM_Siren_Scream_execDestroyProjectileShield_Parms
{
};

// Function kfgamecontent.KFSM_Siren_Scream.Timer_DestroyProjectileShield
// [0x00020002] 
struct UKFSM_Siren_Scream_execTimer_DestroyProjectileShield_Parms
{
};

// Function kfgamecontent.KFSM_Siren_Scream.SpawnProjectileShield
// [0x00820002] 
struct UKFSM_Siren_Scream_execSpawnProjectileShield_Parms
{
	// struct FVector                                  vExtent;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Siren_Scream.ScreamBegan
// [0x00020002] 
struct UKFSM_Siren_Scream_execScreamBegan_Parms
{
};

// Function kfgamecontent.KFSM_Siren_Scream.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_Siren_Scream_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_Siren_Scream.CanChainMove
// [0x00020002] 
struct UKFSM_Siren_Scream_execCanChainMove_Parms
{
	// struct FName                                    NextMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_Siren_Scream.CanOverrideMoveWith
// [0x00020002] 
struct UKFSM_Siren_Scream_execCanOverrideMoveWith_Parms
{
	// struct FName                                    NewMove;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Pistol_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Pistol_Medic_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.GetSecondaryAmmoForHUD
// [0x00020102] 
struct AKFWeap_MedicBase_execGetSecondaryAmmoForHUD_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.SetTraderWeaponStats
// [0x00422902] ( FUNC_Event )
struct AKFWeap_MedicBase_eventSetTraderWeaponStats_Parms
{
	// TArray< struct FSTraderItemWeaponStats >        WeaponStats;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.UpdateOpticsUI
// [0x00024102] 
struct AKFWeap_MedicBase_execUpdateOpticsUI_Parms
{
	// DWORD                                           bForceUpdate : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_MedicBase.DetachWeapon
// [0x00020102] 
struct AKFWeap_MedicBase_execDetachWeapon_Parms
{
	// class APawn*                                    OwnerPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.AttachWeaponTo
// [0x00024102] 
struct AKFWeap_MedicBase_execAttachWeaponTo_Parms
{
	// class USkeletalMeshComponent*                   MeshCpnt;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.ItemRemovedFromInvManager
// [0x00020002] 
struct AKFWeap_MedicBase_execItemRemovedFromInvManager_Parms
{
	// class AKFInventoryManager*                      KFIM;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFWeap_MedicBase*                        KFW;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.ClientWeaponSet
// [0x010241C2] 
struct AKFWeap_MedicBase_execClientWeaponSet_Parms
{
	// DWORD                                           bOptionalSet : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFInventoryManager*                      KFIM;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.GetWeaponFireAnim
// [0x00020102] 
struct AKFWeap_MedicBase_execGetWeaponFireAnim_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.PlayFiringSound
// [0x00020102] 
struct AKFWeap_MedicBase_execPlayFiringSound_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.ClientPlayTargetingSound
// [0x01020142] 
struct AKFWeap_MedicBase_execClientPlayTargetingSound_Parms
{
	// class UAkBaseSoundObject*                       Sound;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.CheckTargetLock
// [0x00820002] 
struct AKFWeap_MedicBase_execCheckTargetLock_Parms
{
	// class AActor*                                   BestTarget;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   TA;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Aim;                                              		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x0054 (0x000C) [0x0000000000000000]              
	// float                                           bestAim;                                          		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           bestDist;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.AllowTargetLockOn
// [0x00020002] 
struct AKFWeap_MedicBase_execAllowTargetLockOn_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_MedicBase.CanLockOnTo
// [0x00020102] 
struct AKFWeap_MedicBase_execCanLockOnTo_Parms
{
	// class AActor*                                   TA;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APawn*                                    PawnTarget;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.AdjustLockTarget
// [0x00020002] 
struct AKFWeap_MedicBase_execAdjustLockTarget_Parms
{
	// class AActor*                                   NewLockTarget;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.HasAnyAmmo
// [0x00020102] 
struct AKFWeap_MedicBase_execHasAnyAmmo_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_MedicBase.HealAmmoRegeneration
// [0x00020002] 
struct AKFWeap_MedicBase_execHealAmmoRegeneration_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.StartHealRecharge
// [0x00020002] 
struct AKFWeap_MedicBase_execStartHealRecharge_Parms
{
	// class AKFPerk*                                  InstigatorPerk;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           UsedHealRechargeTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.GivenTo
// [0x00024002] 
struct AKFWeap_MedicBase_execGivenTo_Parms
{
	// class APawn*                                    thisPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bDoNotActivate : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_MedicBase.StartFire
// [0x00020102] 
struct AKFWeap_MedicBase_execStartFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.ShakeView
// [0x00020102] 
struct AKFWeap_MedicBase_execShakeView_Parms
{
};

// Function kfgamecontent.KFWeap_MedicBase.HandleRecoil
// [0x00020902] ( FUNC_Event )
struct AKFWeap_MedicBase_eventHandleRecoil_Parms
{
};

// Function kfgamecontent.KFWeap_MedicBase.SpawnProjectile
// [0x00020102] 
struct AKFWeap_MedicBase_execSpawnProjectile_Parms
{
	// class UClass*                                   KFProjClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AKFProjectile*                            SpawnedProjectile;                                		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.ProcessInstantHitEx
// [0x00424102] 
struct AKFWeap_MedicBase_execProcessInstantHitEx_Parms
{
	// unsigned char                                   FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FImpactInfo                              Impact;                                           		// 0x0004 (0x0060) [0x0000000000000000]              
	// int                                             NumHits;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           out_PenetrationVal;                               		// 0x0068 (0x0004) [0x0000000000000000]              
	// int                                             ImpactNum;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// class AKFPawn*                                  HealTarget;                                       		// 0x0070 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      Healer;                                           		// 0x0078 (0x0008) [0x0000000000000000]              
	// class AKFPerk*                                  InstigatorPerk;                                   		// 0x0080 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.ConsumeAmmo
// [0x00020102] 
struct AKFWeap_MedicBase_execConsumeAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.AltFireMode
// [0x00020102] 
struct AKFWeap_MedicBase_execAltFireMode_Parms
{
};

// Function kfgamecontent.KFWeap_MedicBase.Tick
// [0x00020902] ( FUNC_Event )
struct AKFWeap_MedicBase_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_MedicBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFWeap_MedicBase_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.OnBecomeInActive
// [0x00020002] 
struct UKFPlayerZedSuicideCamera_execOnBecomeInActive_Parms
{
	// class UGameCameraBase*                          NewCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.UpdateCamera
// [0x00420102] 
struct UKFPlayerZedSuicideCamera_execUpdateCamera_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerCamera*                        CameraActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTViewTarget                             OutVT;                                            		// 0x0014 (0x0038) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.UpdateCameraFocalPoint
// [0x00820002] 
struct UKFPlayerZedSuicideCamera_execUpdateCameraFocalPoint_Parms
{
	// class AActor*                                   TraceActor;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.InitSuicideCam
// [0x00020002] 
struct UKFPlayerZedSuicideCamera_execInitSuicideCam_Parms
{
	// struct FVector                                  PawnLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.OnBecomeActive
// [0x00020002] 
struct UKFPlayerZedSuicideCamera_execOnBecomeActive_Parms
{
	// class UGameCameraBase*                          OldCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.OnBecomeInActive
// [0x00020002] 
struct UKFPlayerZedWaitingCamera_execOnBecomeInActive_Parms
{
	// class UGameCameraBase*                          NewCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.PlayExitFade
// [0x00020002] 
struct UKFPlayerZedWaitingCamera_execPlayExitFade_Parms
{
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.UpdateCamera
// [0x00420102] 
struct UKFPlayerZedWaitingCamera_execUpdateCamera_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AGamePlayerCamera*                        CameraActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           DeltaTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FTViewTarget                             OutVT;                                            		// 0x0014 (0x0038) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.UpdateCameraFocalPoint
// [0x00820002] 
struct UKFPlayerZedWaitingCamera_execUpdateCameraFocalPoint_Parms
{
	// int                                             FocalPointNum;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Projection;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// class AKFTraderTrigger*                         KFTT;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.PopulateFocalPoints
// [0x00020002] 
struct UKFPlayerZedWaitingCamera_execPopulateFocalPoints_Parms
{
	// class AKFPlayerStart*                           KFPS;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFTraderTrigger*                         KFTT;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFPathnode*                              KFPN;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bHostileGroundsHackFix : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.OnBecomeActive
// [0x00020002] 
struct UKFPlayerZedWaitingCamera_execOnBecomeActive_Parms
{
	// class UGameCameraBase*                          OldCamera;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Blade_Eviscerator.ShouldProcessBulletTouch
// [0x00020102] 
struct AKFProj_Blade_Eviscerator_execShouldProcessBulletTouch_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFProj_Blade_Eviscerator.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFProj_Blade_Eviscerator_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_Bolt_Crossbow.SyncOriginalLocation
// [0x00020102] 
struct AKFProj_Bolt_Crossbow_execSyncOriginalLocation_Parms
{
};

// Function kfgamecontent.KFProj_Bullet_Pellet.ShouldWarnAIWhenFired
// [0x00020002] 
struct AKFProj_Bullet_Pellet_execShouldWarnAIWhenFired_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFProj_Bullet_Pellet.Init
// [0x00020002] 
struct AKFProj_Bullet_Pellet_execInit_Parms
{
	// struct FVector                                  Direction;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_GroundFire.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_GroundFire_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFProj_GroundFire.PrepareExplosionActor
// [0x00080102] 
struct AKFProj_GroundFire_execPrepareExplosionActor_Parms
{
	// class AGameExplosionActor*                      GEA;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFExplosionActorLingering*               KFE_GroundFire;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_GroundFire.Touch
// [0x00020900] ( FUNC_Event )
struct AKFProj_GroundFire_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_GroundFire.PostBeginPlay
// [0x00020102] 
struct AKFProj_GroundFire_execPostBeginPlay_Parms
{
	// class AKFPlayerReplicationInfo*                 InstigatorPRI;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_GroundFire.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFProj_GroundFire_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_GroundFire.WarnAI
// [0x00820002] 
struct AKFProj_GroundFire_execWarnAI_Parms
{
	// struct FVector                                  Direction;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AKFPawn_Monster*                          KFPM;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  DangerPoint;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_DynamiteGrenade.SetExplosionActorClass
// [0x00080102] 
struct AKFProj_DynamiteGrenade_execSetExplosionActorClass_Parms
{
	// class AKFPlayerReplicationInfo*                 InstigatorPRI;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_DynamiteGrenade.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_DynamiteGrenade_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFProj_DynamiteGrenade.ProcessTouch
// [0x00020102] 
struct AKFProj_DynamiteGrenade_execProcessTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// class APawn*                                    ActorPawn;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_DynamiteGrenade.TriggerExplosion
// [0x00020102] 
struct AKFProj_DynamiteGrenade_execTriggerExplosion_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_DynamiteGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_DynamiteGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_EMPGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
struct AKFProj_EMPGrenade_eventGrenadeIsAtRest_Parms
{
};

// Function kfgamecontent.KFProj_EMPGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_EMPGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_FlareGun.StopSimulating
// [0x00880102] 
struct AKFProj_FlareGun_execStopSimulating_Parms
{
	// struct FVector                                  FlameSpawnVel;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_FlareGun.TriggerExplosion
// [0x00020102] 
struct AKFProj_FlareGun_execTriggerExplosion_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_FlareGun.ProcessTouch
// [0x00020102] 
struct AKFProj_FlareGun_execProcessTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_FlareGun.StopFlightEffects
// [0x00080102] 
struct AKFProj_FlareGun_execStopFlightEffects_Parms
{
};

// Function kfgamecontent.KFProj_FlareGun.MidFlightFXTimer
// [0x00020102] 
struct AKFProj_FlareGun_execMidFlightFXTimer_Parms
{
};

// Function kfgamecontent.KFProj_FlareGun.SpawnFlightEffects
// [0x00020102] 
struct AKFProj_FlareGun_execSpawnFlightEffects_Parms
{
};

// Function kfgamecontent.KFProj_MolotovSplash.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_MolotovSplash_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFProj_MolotovSplash.PrepareExplosionActor
// [0x00880102] 
struct AKFProj_MolotovSplash_execPrepareExplosionActor_Parms
{
	// class AGameExplosionActor*                      GEA;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFExplosion_Molotov*                     KFEM;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ExplosionDir;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  KFPInstigator;                                    		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MolotovSplash.ProcessTouch
// [0x00020102] 
struct AKFProj_MolotovSplash_execProcessTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MolotovSplash.HitWall
// [0x00020902] ( FUNC_Event )
struct AKFProj_MolotovSplash_eventHitWall_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      WallComp;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_FlashBangGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
struct AKFProj_FlashBangGrenade_eventGrenadeIsAtRest_Parms
{
};

// Function kfgamecontent.KFProj_FlashBangGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_FlashBangGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_FreezeGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
struct AKFProj_FreezeGrenade_eventGrenadeIsAtRest_Parms
{
};

// Function kfgamecontent.KFProj_FreezeGrenade.PostBeginPlay
// [0x00020102] 
struct AKFProj_FreezeGrenade_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_GrenadeShard.Tick
// [0x00020102] 
struct AKFProj_GrenadeShard_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_GrenadeShard.ProcessTouch
// [0x00020102] 
struct AKFProj_GrenadeShard_execProcessTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_GrenadeShard.HitWall
// [0x00020902] ( FUNC_Event )
struct AKFProj_GrenadeShard_eventHitWall_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      WallComp;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_HealingDart.HitWall
// [0x00020902] ( FUNC_Event )
struct AKFProj_HealingDart_eventHitWall_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      WallComp;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_HealingDart.Tick
// [0x00820902] ( FUNC_Event )
struct AKFProj_HealingDart_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SeekingVector;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ForceDir;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           VelMag;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_HealingDart.InitializeSeek
// [0x00020102] 
struct AKFProj_HealingDart_execInitializeSeek_Parms
{
	// class AKFPawn*                                  KFP;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MicrowaveImpact.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_MicrowaveImpact_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFProj_MicrowaveImpact.Touch
// [0x00020902] ( FUNC_Event )
struct AKFProj_MicrowaveImpact_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MicrowaveImpact.PostBeginPlay
// [0x00020102] 
struct AKFProj_MicrowaveImpact_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_MolotovFlare.Tick
// [0x00020902] ( FUNC_Event )
struct AKFProj_MolotovFlare_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           NewBrightness;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MolotovFlare.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFProj_MolotovFlare_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_MolotovGrenade.SpawnResidualFlames
// [0x00820002] 
struct AKFProj_MolotovGrenade_execSpawnResidualFlames_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitVelocity;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitVelDir;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// float                                           HitVelMag;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  SpawnVel;                                         		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MolotovGrenade.Explode
// [0x00820102] 
struct AKFProj_MolotovGrenade_execExplode_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitVelocity;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	// class AKFPerk*                                  InstigatorPerk;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 FlareRot;                                         		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MolotovGrenade.ProcessTouch
// [0x00020102] 
struct AKFProj_MolotovGrenade_execProcessTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MolotovGrenade.HitWall
// [0x00020902] ( FUNC_Event )
struct AKFProj_MolotovGrenade_eventHitWall_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      WallComp;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_MolotovGrenade.SpawnFlightEffects
// [0x00020102] 
struct AKFProj_MolotovGrenade_execSpawnFlightEffects_Parms
{
};

// Function kfgamecontent.KFProj_Rocket_Seeker6.Tick
// [0x00820902] ( FUNC_Event )
struct AKFProj_Rocket_Seeker6_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TargetImpactPos;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirToTarget;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Rocket_Seeker6.SetLockedTarget
// [0x00020002] 
struct AKFProj_Rocket_Seeker6_execSetLockedTarget_Parms
{
	// class AKFPawn*                                  NewTarget;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.DrawTargetingIcon
// [0x00820102] 
struct AKFWeap_RocketLauncher_Seeker6_execDrawTargetingIcon_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldPos;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ScreenPos;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           IconScale;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.DrawHUD
// [0x00020102] 
struct AKFWeap_RocketLauncher_Seeker6_execDrawHUD_Parms
{
	// class AHUD*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UCanvas*                                  C;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.SpawnProjectile
// [0x00020102] 
struct AKFWeap_RocketLauncher_Seeker6_execSpawnProjectile_Parms
{
	// class UClass*                                   KFProjClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AKFProj_Rocket_Seeker6*                   SeekerProj;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.PlayTargetLostEffects
// [0x00020102] 
struct AKFWeap_RocketLauncher_Seeker6_execPlayTargetLostEffects_Parms
{
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.PlayTargetLockOnEffects
// [0x00020102] 
struct AKFWeap_RocketLauncher_Seeker6_execPlayTargetLockOnEffects_Parms
{
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ZoomOut
// [0x00020102] 
struct AKFWeap_RocketLauncher_Seeker6_execZoomOut_Parms
{
	// DWORD                                           bAnimateTransition : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ZoomTimeToGo;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ZoomIn
// [0x00020102] 
struct AKFWeap_RocketLauncher_Seeker6_execZoomIn_Parms
{
	// DWORD                                           bAnimateTransition : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ZoomTimeToGo;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.GetLockedTargetLoc
// [0x00022102] 
struct AKFWeap_RocketLauncher_Seeker6_execGetLockedTargetLoc_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ServerSyncLockedTargets
// [0x002200C2] 
struct AKFWeap_RocketLauncher_Seeker6_execServerSyncLockedTargets_Parms
{
	// class APawn*                                    TargetPawns[ 0x6 ];                               		// 0x0000 (0x0030) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ValidateTargets
// [0x00824102] 
struct AKFWeap_RocketLauncher_Seeker6_execValidateTargets_Parms
{
	// class APawn*                                    RecentlyLocked;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// DWORD                                           bShouldRemoveTarget : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bAlteredTargets : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  AimStart;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.FindTargets
// [0x00C20102] 
struct AKFWeap_RocketLauncher_Seeker6_execFindTargets_Parms
{
	// class APawn*                                    RecentlyLocked;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class APawn*                                    P;                                                		// 0x000C (0x0008) [0x0000000000000000]              
	// class APawn*                                    BestTargetLock;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	// unsigned char                                   TeamNum;                                          		// 0x001C (0x0001) [0x0000000000000000]              
	// struct FVector                                  AimStart;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Projection;                                       		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  DirToPawn;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  LinePoint;                                        		// 0x005C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0068 (0x0008) [0x0000000000000000]              
	// float                                           PointDistSQ;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           Score;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           BestScore;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.Tick
// [0x00020902] ( FUNC_Event )
struct AKFWeap_RocketLauncher_Seeker6_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APawn*                                    RecentlyLocked;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	// class APawn*                                    StaticLockedTargets[ 0x6 ];                       		// 0x000C (0x0030) [0x0000000000000000]              
	// DWORD                                           bUpdateServerTargets : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.AltFireMode
// [0x00020102] 
struct AKFWeap_RocketLauncher_Seeker6_execAltFireMode_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.OnInstigatorControllerLeft
// [0x00020102] 
struct AKFProj_Thrown_C4_execOnInstigatorControllerLeft_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.Destroyed
// [0x00020902] ( FUNC_Event )
struct AKFProj_Thrown_C4_eventDestroyed_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.Timer_Explode
// [0x00020002] 
struct AKFProj_Thrown_C4_execTimer_Explode_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.SetExplosionActorClass
// [0x00080102] 
struct AKFProj_Thrown_C4_execSetExplosionActorClass_Parms
{
	// class AKFPlayerReplicationInfo*                 InstigatorPRI;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.PrepareExplosionTemplate
// [0x00080102] 
struct AKFProj_Thrown_C4_execPrepareExplosionTemplate_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.Disintegrate
// [0x00020102] 
struct AKFProj_Thrown_C4_execDisintegrate_Parms
{
	// struct FRotator                                 InDisintegrateEffectRotation;                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AKFWeap_Thrown_C4*                        C4WeaponOwner;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.Explode
// [0x00020102] 
struct AKFProj_Thrown_C4_execExplode_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.Detonate
// [0x00820002] 
struct AKFProj_Thrown_C4_execDetonate_Parms
{
	// class AKFWeap_Thrown_C4*                        C4WeaponOwner;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ExplosionNormal;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.RestartMovement
// [0x00020102] 
struct AKFProj_Thrown_C4_execRestartMovement_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.StopMovement
// [0x00020102] 
struct AKFProj_Thrown_C4_execStopMovement_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.GetBoneLocationFromActor
// [0x00420102] 
struct AKFProj_Thrown_C4_execGetBoneLocationFromActor_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             BoneIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BoneLoc;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ASkeletalMeshActor*                       SM;                                               		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.GetBoneIndexFromActor
// [0x00020102] 
struct AKFProj_Thrown_C4_execGetBoneIndexFromActor_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASkeletalMeshActor*                       SM;                                               		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.ReplicatedStick
// [0x00020102] 
struct AKFProj_Thrown_C4_execReplicatedStick_Parms
{
	// class AActor*                                   StickTo;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             BoneIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.ServerStick
// [0x002200C2] 
struct AKFProj_Thrown_C4_execServerStick_Parms
{
	// class AActor*                                   StickTo;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             BoneIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  StickLoc;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 StickRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.GetActorSkeletalMesh
// [0x00020102] 
struct AKFProj_Thrown_C4_execGetActorSkeletalMesh_Parms
{
	// class AActor*                                   StickActor;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USkeletalMeshComponent*                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASkeletalMeshActor*                       SM;                                               		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.StickToActor
// [0x00024102] 
struct AKFProj_Thrown_C4_execStickToActor_Parms
{
	// class AActor*                                   StickTo;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      HitComp;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             BoneIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// DWORD                                           bCalculateRelativeLocRot : 1;                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// class USkeletalMeshComponent*                   SkelMeshComp;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.GetImpactInfo
// [0x00C20102] 
struct AKFProj_Thrown_C4_execGetImpactInfo_Parms
{
	// struct FVector                                  in_Velocity;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            out_HitInfo;                                      		// 0x0024 (0x0028) [0x0000000000000000]              
	// struct FVector                                  VelNorm;                                          		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  VelScaled;                                        		// 0x0058 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.Stick
// [0x00C20102] 
struct AKFProj_Thrown_C4_execStick_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0020 (0x0028) [0x0000000000000000]              
	// int                                             BoneIdx;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 StickRot;                                         		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.GetImpactResult
// [0x00020102] 
struct AKFProj_Thrown_C4_execGetImpactResult_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      HitComp;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000000]              
	// class AKFPawn_Human*                            KFP;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	// class AKFDestructibleActor*                     D;                                                		// 0x001C (0x0008) [0x0000000000000000]              
	// class UStaticMeshComponent*                     StaticMeshComp;                                   		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.TryStick
// [0x00824102] 
struct AKFProj_Thrown_C4_execTryStick_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0020 (0x0028) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.HitWall
// [0x00020902] ( FUNC_Event )
struct AKFProj_Thrown_C4_eventHitWall_Parms
{
	// struct FVector                                  HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AActor*                                   Wall;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      WallComp;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.ProcessTouch
// [0x00020102] 
struct AKFProj_Thrown_C4_execProcessTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.BlinkOff
// [0x00020102] 
struct AKFProj_Thrown_C4_execBlinkOff_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.BlinkOn
// [0x00020102] 
struct AKFProj_Thrown_C4_execBlinkOn_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.UpdateAlert
// [0x00820102] 
struct AKFProj_Thrown_C4_execUpdateAlert_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ToInstigator;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BBoxCenter;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           DistToInstigator;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           DamageScale;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class AActor*                                   TraceActor;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FBox                                     BBox;                                             		// 0x002C (0x001C) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.Tick
// [0x00020902] ( FUNC_Event )
struct AKFProj_Thrown_C4_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFFracturedMeshActor*                    FracMesh;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class AKFDoorActor*                             door;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	// class AKFDestructibleActor*                     Destructible;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AActor*                                   StuckTo;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFProj_Thrown_C4.PostBeginPlay
// [0x00020102] 
struct AKFProj_Thrown_C4_execPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFProj_Thrown_C4.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFProj_Thrown_C4_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Thrown_C4_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.GotoActiveState
// [0x00020100] 
struct AKFWeap_Thrown_C4_execGotoActiveState_Parms
{
};

// Function kfgamecontent.KFWeap_Thrown_C4.HasAlwaysOnZedTimeResist
// [0x00020102] 
struct AKFWeap_Thrown_C4_execHasAlwaysOnZedTimeResist_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Thrown_C4.AltFireMode
// [0x00020100] 
struct AKFWeap_Thrown_C4_execAltFireMode_Parms
{
};

// Function kfgamecontent.KFWeap_Thrown_C4.PrepareAndDetonate
// [0x00020102] 
struct AKFWeap_Thrown_C4_execPrepareAndDetonate_Parms
{
	// struct FName                                    DetonateAnimName;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           AnimDuration;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// DWORD                                           bInSprintState : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Thrown_C4.BeginFire
// [0x00020102] 
struct AKFWeap_Thrown_C4_execBeginFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.HasAmmo
// [0x00024102] 
struct AKFWeap_Thrown_C4_execHasAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Thrown_C4.UsesAmmo
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Thrown_C4_eventUsesAmmo_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Thrown_C4.SetOriginalValuesFromPickup
// [0x00020002] 
struct AKFWeap_Thrown_C4_execSetOriginalValuesFromPickup_Parms
{
	// class AKFWeapon*                                PickedUpWeapon;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.RemoveDeployedCharge
// [0x00024002] 
struct AKFWeap_Thrown_C4_execRemoveDeployedCharge_Parms
{
	// int                                             ChargeIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   ChargeActor;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.Detonate
// [0x00020102] 
struct AKFWeap_Thrown_C4_execDetonate_Parms
{
};

// Function kfgamecontent.KFWeap_Thrown_C4.ProjectileFire
// [0x00020102] 
struct AKFWeap_Thrown_C4_execProjectileFire_Parms
{
	// class AProjectile*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AProjectile*                              P;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AKFProj_Thrown_C4*                        Charge;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.UpdateScreenUI
// [0x00020102] 
struct AKFWeap_Thrown_C4_execUpdateScreenUI_Parms
{
};

// Function kfgamecontent.KFWeap_Thrown_C4.Tick
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Thrown_C4_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.Destroyed
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Thrown_C4_eventDestroyed_Parms
{
};

// Function kfgamecontent.KFWeap_Thrown_C4.DetachWeapon
// [0x00020102] 
struct AKFWeap_Thrown_C4_execDetachWeapon_Parms
{
};

// Function kfgamecontent.KFWeap_Thrown_C4.AttachWeaponTo
// [0x00024102] 
struct AKFWeap_Thrown_C4_execAttachWeaponTo_Parms
{
	// class USkeletalMeshComponent*                   MeshCpnt;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Thrown_C4.SetIronSights
// [0x00020102] 
struct AKFWeap_Thrown_C4_execSetIronSights_Parms
{
	// DWORD                                           bNewIronSights : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSeqAct_MinigameActivateGenerator.Activated
// [0x00020802] ( FUNC_Event )
struct UKFSeqAct_MinigameActivateGenerator_eventActivated_Parms
{
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UpdateGeneratorState
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execUpdateGeneratorState_Parms
{
	// class UKFSeqEvent_MinigameGeneratorStateChanged* StateChangeEvent;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.GeneratorReactivated
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execGeneratorReactivated_Parms
{
	// class UKFSeqEvent_MinigameGeneratorStateChanged* StateChangeEvent;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.DeactivateMinigames
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execDeactivateMinigames_Parms
{
	// class AKFTrigger_MinigameButton*                MinigameButton;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.ActivateMinigames
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execActivateMinigames_Parms
{
	// class AKFTrigger_MinigameButton*                MinigameButton;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.AllowActivation
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execAllowActivation_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.TriggerObjectiveCompletion
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execTriggerObjectiveCompletion_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UsedBy
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execUsedBy_Parms
{
	// class APawn*                                    User;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.PostBeginPlay
// [0x00020102] 
struct AKFTrigger_MinigameGenerator_execPostBeginPlay_Parms
{
	// class AKFTrigger_MinigameButton*                MinigameTrigger;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UnTouch
// [0x00020802] ( FUNC_Event )
struct AKFTrigger_MinigameGenerator_eventUnTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.Touch
// [0x00020802] ( FUNC_Event )
struct AKFTrigger_MinigameGenerator_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.GetInteractionIndex
// [0x00020102] 
struct AKFTrigger_MinigameGenerator_execGetInteractionIndex_Parms
{
	// class APawn*                                    User;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.GetIsUsable
// [0x00020102] 
struct AKFTrigger_MinigameGenerator_execGetIsUsable_Parms
{
	// class APawn*                                    User;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.InitEmissiveActors
// [0x00820102] 
struct AKFTrigger_MinigameGenerator_execInitEmissiveActors_Parms
{
	// struct FEmissiveActor                           NewActor;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             J;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             K;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AStaticMeshActor*                         Smesh;                                            		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASkeletalMeshActor*                       Skmesh;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	// float                                           CurValue;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.DisableEmissiveActors
// [0x00820102] 
struct AKFTrigger_MinigameGenerator_execDisableEmissiveActors_Parms
{
	// struct FEmissiveUpdateActorList                 CurrentList;                                      		// 0x0000 (0x0024) [0x0000000000000000]              
	// struct FEmissiveActor                           CurrentActor;                                     		// 0x0024 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
	// class AStaticMeshActor*                         Smesh;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
	// class ASkeletalMeshActor*                       Skmesh;                                           		// 0x0040 (0x0008) [0x0000000000000000]              
	// class UMaterialInstance*                        MatInst;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.EnableNextEmissiveList
// [0x00820102] 
struct AKFTrigger_MinigameGenerator_execEnableNextEmissiveList_Parms
{
	// struct FEmissiveActor                           CurrentActor;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// class AStaticMeshActor*                         Smesh;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASkeletalMeshActor*                       Skmesh;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// class UMaterialInstance*                        MatInst;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.EnableEmissiveActors
// [0x00020102] 
struct AKFTrigger_MinigameGenerator_execEnableEmissiveActors_Parms
{
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UpdateGeneratorStatus
// [0x00820102] 
struct AKFTrigger_MinigameGenerator_execUpdateGeneratorStatus_Parms
{
	// float                                           CurrentTimeRemaining;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             ParamColor;                                       		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           bStatusChange : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             CurIndex;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.Tick
// [0x00020002] 
struct AKFTrigger_MinigameGenerator_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFTrigger_MinigameGenerator_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSeqEvent_MinigameGeneratorStateChanged.StateChanged
// [0x00020002] 
struct UKFSeqEvent_MinigameGeneratorStateChanged_execStateChanged_Parms
{
	// class AActor*                                   InInstigator;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AActor*                                   InTrigger;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bIsActive : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bReactivated : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// TArray< int >                                   ActiveIndices;                                    		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function kfgamecontent.SprayActor_Flame.SetSprayLength
// [0x00020102] 
struct ASprayActor_Flame_execSetSprayLength_Parms
{
	// class UAnimSet*                                 TempAnimSet;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPlayerReplicationInfo*                 OwningPawnPRI;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.SprayActor_Flame.BeginSpray
// [0x00020102] 
struct ASprayActor_Flame_execBeginSpray_Parms
{
	// class AKFPerk*                                  InstigatorPerk;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.SprayActor_Flame.Tick
// [0x00020902] ( FUNC_Event )
struct ASprayActor_Flame_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.SprayActor_Flame.SetBoneChainComponents
// [0x00020102] 
struct ASprayActor_Flame_execSetBoneChainComponents_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.SprayActor_Flame.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct ASprayActor_Flame_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFSM_PlayerAlpha_Grab.ProcessViewRotation
// [0x00420002] 
struct UKFSM_PlayerAlpha_Grab_execProcessViewRotation_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerAlpha_Grab.Tick
// [0x00820002] 
struct UKFSM_PlayerAlpha_Grab_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 DesiredRotation;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerAlpha_Grab.StartInteraction
// [0x00020002] 
struct UKFSM_PlayerAlpha_Grab_execStartInteraction_Parms
{
};

// Function kfgamecontent.KFSM_PlayerAlpha_Rally.PackFlagsBase
// [0x00022002] 
struct UKFSM_PlayerAlpha_Rally_execPackFlagsBase_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerAlpha_Rally.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerAlpha_Rally_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveButtonReleased
// [0x00020002] 
struct UKFSM_PlayerZedBlockBase_execSpecialMoveButtonReleased_Parms
{
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveButtonRetriggered
// [0x00020002] 
struct UKFSM_PlayerZedBlockBase_execSpecialMoveButtonRetriggered_Parms
{
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.Timer_CheckIfBlockReleased
// [0x00020002] 
struct UKFSM_PlayerZedBlockBase_execTimer_CheckIfBlockReleased_Parms
{
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_PlayerZedBlockBase_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerZedBlockBase_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerBloat_PukeMineAttack.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerBloat_PukeMineAttack_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Melee.IsInSpecialMode
// [0x00022002] 
struct UKFSM_PlayerFleshpound_Melee_execIsInSpecialMode_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn_ZedFleshPound_Versus*             MyFPPawn;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Rage.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerFleshpound_Rage_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedFleshPound_Versus*             MyFPPawn;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Rage.PackFlagsBase
// [0x00022002] 
struct UKFSM_PlayerFleshpound_Rage_execPackFlagsBase_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	// unsigned char                                   Variant;                                          		// 0x0009 (0x0001) [0x0000000000000000]              
	// class UKFPawnAnimInfo*                          PAI;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Rage.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerFleshpound_Rage_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn_ZedFleshPound_Versus*             MyFPPawn;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveButtonReleased
// [0x00020002] 
struct UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveButtonReleased_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveButtonRetriggered
// [0x00020002] 
struct UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveButtonRetriggered_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveFlagsUpdated
// [0x00020002] 
struct UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveFlagsUpdated_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.Timer_AnimInterrupt
// [0x00020002] 
struct UKFSM_PlayerHusk_FlameThrowerAttack_execTimer_AnimInterrupt_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerHusk_Suicide.SpecialMoveButtonReleased
// [0x00020002] 
struct UKFSM_PlayerHusk_Suicide_execSpecialMoveButtonReleased_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_Suicide.SpecialMoveFlagsUpdated
// [0x00020002] 
struct UKFSM_PlayerHusk_Suicide_execSpecialMoveFlagsUpdated_Parms
{
};

// Function kfgamecontent.KFSM_PlayerHusk_Suicide.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerHusk_Suicide_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.OnEMPDisrupted
// [0x00020000] 
struct UKFSM_PlayerPatriarch_Heal_execOnEMPDisrupted_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.DoHeal
// [0x00020002] 
struct UKFSM_PlayerPatriarch_Heal_execDoHeal_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerPatriarch_Heal_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerPatriarch_Heal_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveButtonReleased
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveButtonReleased_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveButtonRetriggered
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveButtonRetriggered_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveFlagsUpdated
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveFlagsUpdated_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.Timer_AnimInterrupt
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execTimer_AnimInterrupt_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.PlayWindDownAnim
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execPlayWindDownAnim_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.PlayFireAnim
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execPlayFireAnim_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MortarAttack.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerPatriarch_MortarAttack_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn_ZedPatriarch_Versus*              MyPatPawnV;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.ProcessViewRotation
// [0x00420002] 
struct UKFSM_PlayerPatriarch_TentacleGrab_execProcessViewRotation_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.Tick
// [0x00820002] 
struct UKFSM_PlayerPatriarch_TentacleGrab_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 DesiredRotation;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.StartInteraction
// [0x00020002] 
struct UKFSM_PlayerPatriarch_TentacleGrab_execStartInteraction_Parms
{
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerPatriarch_TentacleGrab_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_ZedPatriarch*                     MyPatPawn;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.InternalCanDoSpecialMove
// [0x00880002] 
struct UKFSM_PlayerPatriarch_TentacleGrab_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn*                                  KFP;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  BestTarget;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  CameraNormal;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Projection;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           FOV;                                              		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           DistSq;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// float                                           BestDistSq;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// float                                           TentacleRangeSQ;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerScrake_Melee.IsInSpecialMode
// [0x00022002] 
struct UKFSM_PlayerScrake_Melee_execIsInSpecialMode_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn_ZedScrake_Versus*                 MySCPawn;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_SirenProjectileShield.StopsProjectile
// [0x00020102] 
struct AKFTrigger_SirenProjectileShield_execStopsProjectile_Parms
{
	// class AProjectile*                              P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFTrigger_SirenProjectileShield.Touch
// [0x00020802] ( FUNC_Event )
struct AKFTrigger_SirenProjectileShield_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            KFProj;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFTrigger_SirenProjectileShield.BaseChange
// [0x00020802] ( FUNC_Event )
struct AKFTrigger_SirenProjectileShield_eventBaseChange_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_NormalScream.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerSiren_NormalScream_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_NormalScream.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerSiren_NormalScream_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveButtonReleased
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execSpecialMoveButtonReleased_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveButtonRetriggered
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execSpecialMoveButtonRetriggered_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Timer_VortexInterrupt
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execTimer_VortexInterrupt_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.ResetFollowerPhysics
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execResetFollowerPhysics_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.OnFollowerLeavingSpecialMove
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execOnFollowerLeavingSpecialMove_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.AnimEndNotify
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execAnimEndNotify_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveFlagsUpdated
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execSpecialMoveFlagsUpdated_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Timer_DamageFollower
// [0x00820002] 
struct UKFSM_PlayerSiren_VortexScream_execTimer_DamageFollower_Parms
{
	// struct FVector                                  GrabLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  GrabDirection;                                    		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.StartInteraction
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execStartInteraction_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.InteractionPawnUpdated
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execInteractionPawnUpdated_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Timer_CheckVortex
// [0x00820002] 
struct UKFSM_PlayerSiren_VortexScream_execTimer_CheckVortex_Parms
{
	// class AKFPawn*                                  KFP;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  BestTarget;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  CameraNormal;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Projection;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  GrabLocation;                                     		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           FOV;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           DistSq;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           BestDistSq;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.ProcessViewRotation
// [0x00420002] 
struct UKFSM_PlayerSiren_VortexScream_execProcessViewRotation_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.GetUncompressedViewPitch
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execGetUncompressedViewPitch_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Tick
// [0x00820002] 
struct UKFSM_PlayerSiren_VortexScream_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  EffectLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRot;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Projection;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 DesiredRotation;                                  		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.PlayGrabAnim
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execPlayGrabAnim_Parms
{
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexScream_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPawn_Monster*                          MonsterOwner;                                     		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerSiren_VortexScream_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexVictim.SetGrabEffect
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexVictim_execSetGrabEffect_Parms
{
	// class AKFPlayerController*                      KFPC;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bValue : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexVictim.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexVictim_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexVictim.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerSiren_VortexVictim_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.Tick
// [0x00020002] 
struct UKFSM_PlayerSlasher_Roll_execTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.PackFlagsBase
// [0x00022002] 
struct UKFSM_PlayerSlasher_Roll_execPackFlagsBase_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.InternalCanDoSpecialMove
// [0x00080002] 
struct UKFSM_PlayerSlasher_Roll_execInternalCanDoSpecialMove_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerSlasher_Roll_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerStalker_Roll.SpecialMoveEnded
// [0x00020002] 
struct UKFSM_PlayerStalker_Roll_execSpecialMoveEnded_Parms
{
	// struct FName                                    PrevMove;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    NextMove;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerStalker_Roll.SpecialMoveStarted
// [0x00020002] 
struct UKFSM_PlayerStalker_Roll_execSpecialMoveStarted_Parms
{
	// DWORD                                           bForced : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    PrevMove;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFSM_PlayerStalker_Roll.PackFlagsBase
// [0x00022002] 
struct UKFSM_PlayerStalker_Roll_execPackFlagsBase_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFStaticMeshActor_TrackLocalPC.Tick
// [0x00020902] ( FUNC_Event )
struct AKFStaticMeshActor_TrackLocalPC_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFVolume_CameraFade.Touch
// [0x00020902] ( FUNC_Event )
struct AKFVolume_CameraFade_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class APawn*                                    OtherPawn;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFVolume_DamageAdjust.UnTouch
// [0x00020802] ( FUNC_Event )
struct AKFVolume_DamageAdjust_eventUnTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFPawn*                                  UntouchPawn;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFVolume_DamageAdjust.Touch
// [0x00020802] ( FUNC_Event )
struct AKFVolume_DamageAdjust_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  TouchPawn;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFVolume_DisableZedJump.UnTouch
// [0x00020902] ( FUNC_Event )
struct AKFVolume_DisableZedJump_eventUnTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFVolume_DisableZedJump.Touch
// [0x00020902] ( FUNC_Event )
struct AKFVolume_DisableZedJump_eventTouch_Parms
{
	// class AActor*                                   Other;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UPrimitiveComponent*                      OtherComp;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_MultiAmmo.PlayReloadMagazineAnim
// [0x00020102] 
struct AKFWeapAttach_MultiAmmo_execPlayReloadMagazineAnim_Parms
{
	// unsigned char                                   NewWeaponState;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AKFPawn*                                  P;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FName                                    AnimName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_MultiAmmo.CauseMuzzleFlash
// [0x00020102] 
struct AKFWeapAttach_MultiAmmo_execCauseMuzzleFlash_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           AutoShellEject : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.TryToAltReload
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execTryToAltReload_Parms
{
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.CanAltAutoReload
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execCanAltAutoReload_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.CanOverrideMagReload
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execCanOverrideMagReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ServerSetAltAmmoCount
// [0x002200C2] 
struct AKFWeap_AssaultRifle_M16M203_execServerSetAltAmmoCount_Parms
{
	// unsigned char                                   Amount;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ServerSendToAltReload
// [0x002200C2] 
struct AKFWeap_AssaultRifle_M16M203_execServerSendToAltReload_Parms
{
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.SendToAltReload
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execSendToAltReload_Parms
{
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ShouldAutoReload
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execShouldAutoReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.CauseMuzzleFlash
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execCauseMuzzleFlash_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           AutoShellEject : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.SetOriginalValuesFromPickup
// [0x00020002] 
struct AKFWeap_AssaultRifle_M16M203_execSetOriginalValuesFromPickup_Parms
{
	// class AKFWeapon*                                PickedUpWeapon;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFWeap_AssaultRifle_M16M203*             Weap;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ClientGiveSecondaryAmmo
// [0x010201C2] 
struct AKFWeap_AssaultRifle_M16M203_execClientGiveSecondaryAmmo_Parms
{
	// unsigned char                                   Amount;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.AddSecondaryAmmo
// [0x00020002] 
struct AKFWeap_AssaultRifle_M16M203_execAddSecondaryAmmo_Parms
{
	// int                                             Amount;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             OldAmmo;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.HasAmmo
// [0x00024902] ( FUNC_Event )
struct AKFWeap_AssaultRifle_M16M203_eventHasAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned char                                   AmmoType;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ConsumeAmmo
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execConsumeAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   AmmoType;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	// DWORD                                           bNoInfiniteAmmo : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             OldAmmoCount;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.InitializeAmmo
// [0x00020002] 
struct AKFWeap_AssaultRifle_M16M203_execInitializeAmmo_Parms
{
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.AltFireMode
// [0x00020102] 
struct AKFWeap_AssaultRifle_M16M203_execAltFireMode_Parms
{
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_AssaultRifle_M16M203_eventGetAltTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_AssaultRifle_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_AssaultRifle_Medic_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Beam_Microwave.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Beam_Microwave_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Beam_Microwave.ShouldAutoReload
// [0x00020102] 
struct AKFWeap_Beam_Microwave_execShouldAutoReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bRequestReload : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Beam_Microwave.CustomFire
// [0x00820102] 
struct AKFWeap_Beam_Microwave_execCustomFire_Parms
{
	// class AKFExplosionActorReplicated*              ExploActor;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Beam_Microwave.AltFireMode
// [0x00020102] 
struct AKFWeap_Beam_Microwave_execAltFireMode_Parms
{
};

// Function kfgamecontent.KFWeap_Beam_Microwave.GetLoopEndFireAnim
// [0x00020102] 
struct AKFWeap_Beam_Microwave_execGetLoopEndFireAnim_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           bPlayFireLast : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Beam_Microwave.GetWeaponFireAnim
// [0x00020102] 
struct AKFWeap_Beam_Microwave_execGetWeaponFireAnim_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// DWORD                                           bPlayFireLast : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeapAttach_MaceAndShield.PlayWeaponMeshAnim
// [0x00020100] 
struct AKFWeapAttach_MaceAndShield_execPlayWeaponMeshAnim_Parms
{
	// struct FName                                    AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UAnimNodeSlot*                            SyncNode;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// DWORD                                           bLoop : 1;                                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeapAttach_MaceAndShield.PlayWeaponFireAnim
// [0x00020100] 
struct AKFWeapAttach_MaceAndShield_execPlayWeaponFireAnim_Parms
{
};

// Function kfgamecontent.KFWeap_Blunt_MaceAndShield.SwapToShieldMeleeSettings
// [0x00020102] 
struct AKFWeap_Blunt_MaceAndShield_execSwapToShieldMeleeSettings_Parms
{
};

// Function kfgamecontent.KFWeap_Blunt_MaceAndShield.SwapToMaceMeleeSettings
// [0x00020102] 
struct AKFWeap_Blunt_MaceAndShield_execSwapToMaceMeleeSettings_Parms
{
};

// Function kfgamecontent.KFWeapAttach_Pulverizer.UpdateThirdPersonWeaponAction
// [0x00020102] 
struct AKFWeapAttach_Pulverizer_execUpdateThirdPersonWeaponAction_Parms
{
	// unsigned char                                   NewWeaponState;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AKFPawn*                                  P;                                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ThirdPersonAnimRateByte;                          		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Pulverizer.PlayPulverizerShoot
// [0x00020102] 
struct AKFWeapAttach_Pulverizer_execPlayPulverizerShoot_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Pulverizer.ThirdPersonFireEffects
// [0x00020102] 
struct AKFWeapAttach_Pulverizer_execThirdPersonFireEffects_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  P;                                                		// 0x000C (0x0008) [0x0000000000000000]              
	// unsigned char                                   ThirdPersonAnimRateByte;                          		// 0x0014 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.CanReload
// [0x00024102] 
struct AKFWeap_Blunt_Pulverizer_execCanReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.SendToFiringState
// [0x00020102] 
struct AKFWeap_Blunt_Pulverizer_execSendToFiringState_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.ShouldRefire
// [0x00020102] 
struct AKFWeap_Blunt_Pulverizer_execShouldRefire_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.BeginPulverizerFire
// [0x00020102] 
struct AKFWeap_Blunt_Pulverizer_execBeginPulverizerFire_Parms
{
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.ServerBeginPulverizerFire
// [0x002440C3] ( FUNC_Final )
struct AKFWeap_Blunt_Pulverizer_execServerBeginPulverizerFire_Parms
{
	// class AActor*                                   HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.GetWeaponFireAnim
// [0x00020102] 
struct AKFWeap_Blunt_Pulverizer_execGetWeaponFireAnim_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.GetPulverizerAim
// [0x00820102] 
struct AKFWeap_Blunt_Pulverizer_execGetPulverizerAim_Parms
{
	// struct FVector                                  StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 R;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.CustomFire
// [0x00820102] 
struct AKFWeap_Blunt_Pulverizer_execCustomFire_Parms
{
	// class AKFExplosionActorReplicated*              ExploActor;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.CanOverrideMagReload
// [0x00020102] 
struct AKFWeap_Blunt_Pulverizer_execCanOverrideMagReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Blunt_Pulverizer_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFWeap_Bow_Crossbow.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Bow_Crossbow_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Bow_Crossbow.GetReloadAnimName
// [0x00020102] 
struct AKFWeap_Bow_Crossbow_execGetReloadAnimName_Parms
{
	// DWORD                                           bTacticalReload : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Bow_Crossbow.ShouldPlayFireLast
// [0x00020102] 
struct AKFWeap_Bow_Crossbow_execShouldPlayFireLast_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Edged_Knife.AllowedForAllPerks
// [0x00022102] 
struct AKFWeap_Edged_Knife_execAllowedForAllPerks_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeapAttach_Eviscerator.ThirdPersonFireEffects
// [0x00020102] 
struct AKFWeapAttach_Eviscerator_execThirdPersonFireEffects_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  P;                                                		// 0x000C (0x0008) [0x0000000000000000]              
	// unsigned char                                   ThirdPersonAnimRateByte;                          		// 0x0014 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Eviscerator.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AKFWeapAttach_Eviscerator_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFWeap_Eviscerator.BlockInterruptTimer
// [0x00020100] 
struct AKFWeap_Eviscerator_execBlockInterruptTimer_Parms
{
};

// Function kfgamecontent.KFWeap_Eviscerator.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Eviscerator_eventGetAltTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Eviscerator_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.CalculateTraderWeaponStatDamage
// [0x00022102] 
struct AKFWeap_Eviscerator_execCalculateTraderWeaponStatDamage_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           CalculatedDamage;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.CanOverrideMagReload
// [0x00020102] 
struct AKFWeap_Eviscerator_execCanOverrideMagReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Eviscerator.StopIdleMotorSound
// [0x00020102] 
struct AKFWeap_Eviscerator_execStopIdleMotorSound_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.PlayIdleMotorSound
// [0x00020102] 
struct AKFWeap_Eviscerator_execPlayIdleMotorSound_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.UpdateOutOfAmmoEffects
// [0x00020102] 
struct AKFWeap_Eviscerator_execUpdateOutOfAmmoEffects_Parms
{
	// float                                           BlendTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.UnHideBlade
// [0x00020100] 
struct AKFWeap_Eviscerator_execUnHideBlade_Parms
{
};

// Function kfgamecontent.KFWeap_Eviscerator.HideBlade
// [0x00020100] 
struct AKFWeap_Eviscerator_execHideBlade_Parms
{
};

// Function kfgamecontent.KFWeap_Eviscerator.RecieveClientImpact
// [0x00424802] ( FUNC_Event )
struct AKFWeap_Eviscerator_eventRecieveClientImpact_Parms
{
	// unsigned char                                   FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FImpactInfo                              Impact;                                           		// 0x0004 (0x0060) [0x0000000000000000]              
	// float                                           PenetrationValue;                                 		// 0x0064 (0x0004) [0x0000000000000000]              
	// int                                             ImpactNum;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.GetAmmoType
// [0x00020102] 
struct AKFWeap_Eviscerator_execGetAmmoType_Parms
{
	// unsigned char                                   FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.StartFire
// [0x00020102] 
struct AKFWeap_Eviscerator_execStartFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Eviscerator_eventPostInitAnimTree_Parms
{
	// class USkeletalMeshComponent*                   SkelComp;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Eviscerator.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Eviscerator_eventPreBeginPlay_Parms
{
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOffFireSpray
// [0x00080102] 
struct AKFWeapAttach_Flamethrower_execTurnOffFireSpray_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOnFireSpray
// [0x00080102] 
struct AKFWeapAttach_Flamethrower_execTurnOnFireSpray_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOffPilot
// [0x00080102] 
struct AKFWeapAttach_Flamethrower_execTurnOffPilot_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOnPilot
// [0x00080102] 
struct AKFWeapAttach_Flamethrower_execTurnOnPilot_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Flame_CaulkBurn.SetFOV
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Flame_CaulkBurn_eventSetFOV_Parms
{
	// float                                           NewFOV;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Flame_CaulkBurn.TurnOffPilot
// [0x00080102] 
struct AKFWeap_Flame_CaulkBurn_execTurnOffPilot_Parms
{
};

// Function kfgamecontent.KFWeap_Flame_CaulkBurn.TurnOnPilot
// [0x00080102] 
struct AKFWeap_Flame_CaulkBurn_execTurnOnPilot_Parms
{
	// float                                           OwnerMeshFOV;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.SetFOV
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Flame_Flamethrower_eventSetFOV_Parms
{
	// float                                           NewFOV;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOffFireSpray
// [0x00080102] 
struct AKFWeap_Flame_Flamethrower_execTurnOffFireSpray_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOnFireSpray
// [0x00080102] 
struct AKFWeap_Flame_Flamethrower_execTurnOnFireSpray_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOffPilot
// [0x00080102] 
struct AKFWeap_Flame_Flamethrower_execTurnOffPilot_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOnPilot
// [0x00080102] 
struct AKFWeap_Flame_Flamethrower_execTurnOnPilot_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           OwnerMeshFOV;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_GrenadeLauncher_HX25_eventGetAltTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.CalculateTraderWeaponStatDamage
// [0x00022102] 
struct AKFWeap_GrenadeLauncher_HX25_execCalculateTraderWeaponStatDamage_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           DoTDamage;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	// class UGameExplosion*                           ExplosionInstance;                                		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.AddMultiShotSpread
// [0x00820102] 
struct AKFWeap_GrenadeLauncher_HX25_execAddMultiShotSpread_Parms
{
	// struct FRotator                                 BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// unsigned char                                   PelletNum;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0034 (0x000C) [0x0000000000000000]              
	// float                                           CurrentSpread;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0044 (0x0004) [0x0000000000000000]              
	// float                                           RandZ;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.AddSpread
// [0x00020102] 
struct AKFWeap_GrenadeLauncher_HX25_execAddSpread_Parms
{
	// struct FRotator                                 BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.GetNumProjectilesToFire
// [0x00020102] 
struct AKFWeap_GrenadeLauncher_HX25_execGetNumProjectilesToFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.HandleWeaponShotTaken
// [0x00020002] 
struct AKFWeap_GrenadeLauncher_HX25_execHandleWeaponShotTaken_Parms
{
	// unsigned char                                   FireMode;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.SpawnProjectile
// [0x00820102] 
struct AKFWeap_GrenadeLauncher_HX25_execSpawnProjectile_Parms
{
	// class UClass*                                   KFProjClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Healer_Syringe.InitializeAmmo
// [0x00020002] 
struct AKFWeap_Healer_Syringe_execInitializeAmmo_Parms
{
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.GetReloadAnimName
// [0x00020102] 
struct AKFWeap_LMG_Stoner63A_execGetReloadAnimName_Parms
{
	// DWORD                                           bTacticalReload : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.Timer_AttemptAmmoBeltUpdate
// [0x00020102] 
struct AKFWeap_LMG_Stoner63A_execTimer_AttemptAmmoBeltUpdate_Parms
{
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.UpdateAmmoBeltBullets
// [0x00024102] 
struct AKFWeap_LMG_Stoner63A_execUpdateAmmoBeltBullets_Parms
{
	// int                                             ForcedBulletCount;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           bShowAll : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    BulletBoneName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             NumAmmo;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.ANIMNOTIFY_RestoreAmmoBelt
// [0x00020102] 
struct AKFWeap_LMG_Stoner63A_execANIMNOTIFY_RestoreAmmoBelt_Parms
{
	// int                                             AmmoType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             PendingAmmoCount;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.PerformReload
// [0x00024102] 
struct AKFWeap_LMG_Stoner63A_execPerformReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.ConsumeAmmo
// [0x00020102] 
struct AKFWeap_LMG_Stoner63A_execConsumeAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFWeap_LMG_Stoner63A_eventPostBeginPlay_Parms
{
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AKFWeap_LMG_Stoner63A_eventReplicatedEvent_Parms
{
	// struct FName                                    VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Pistol_DualFlare.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Pistol_DualFlare_eventGetAltTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Pistol_Flare.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Pistol_Flare_eventGetAltTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_Hemogoblin.ProcessInstantHitEx
// [0x00424102] 
struct AKFWeap_Rifle_Hemogoblin_execProcessInstantHitEx_Parms
{
	// unsigned char                                   FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FImpactInfo                              Impact;                                           		// 0x0004 (0x0060) [0x0000000000000000]              
	// int                                             NumHits;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           out_PenetrationVal;                               		// 0x0068 (0x0004) [0x0000000000000000]              
	// int                                             ImpactNum;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	// class AKFPerk*                                  InstigatorPerk;                                   		// 0x0070 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_Hemogoblin.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Rifle_Hemogoblin_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Railgun.SpawnTracer
// [0x00820102] 
struct AKFWeapAttach_Railgun_execSpawnTracer_Parms
{
	// struct FVector                                  EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	// class UParticleSystemComponent*                 E;                                                		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           DistSq;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           TracerDuration;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	// struct FKFTracerInfo                            TracerInfo;                                       		// 0x0034 (0x0020) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Railgun.Destroyed
// [0x00020102] 
struct AKFWeapAttach_Railgun_execDestroyed_Parms
{
};

// Function kfgamecontent.KFWeapAttach_Railgun.DetachFrom
// [0x00020102] 
struct AKFWeapAttach_Railgun_execDetachFrom_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Railgun.AttachTo
// [0x00020102] 
struct AKFWeapAttach_Railgun_execAttachTo_Parms
{
	// class AKFPawn*                                  P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Railgun.StopAmbientSound
// [0x00020102] 
struct AKFWeapAttach_Railgun_execStopAmbientSound_Parms
{
};

// Function kfgamecontent.KFWeapAttach_Railgun.StartAmbientSound
// [0x00020102] 
struct AKFWeapAttach_Railgun_execStartAmbientSound_Parms
{
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.WorldToCanvas
// [0x00820102] 
struct AKFWeap_Rifle_RailGun_execWorldToCanvas_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  WorldPoint;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector2D                                ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FVector                                  ViewLoc;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRot;                                          		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector2D                                ScreenPoint;                                      		// 0x0064 (0x0008) [0x0000000000000000]              
	// float                                           DotToZedUpDown;                                   		// 0x006C (0x0004) [0x0000000000000000]              
	// float                                           DotToZedLeftRight;                                		// 0x0070 (0x0004) [0x0000000000000000]              
	// float                                           UpDownScale;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           LeftRightScale;                                   		// 0x0078 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.DrawTargetingIcon
// [0x00820102] 
struct AKFWeap_Rifle_RailGun_execDrawTargetingIcon_Parms
{
	// class UCanvas*                                  Canvas;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  WorldPos;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// float                                           IconSize;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           IconScale;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector2D                                ScreenPos;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.OnRender
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execOnRender_Parms
{
	// class UCanvas*                                  C;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.InstantFireClient
// [0x00820102] 
struct AKFWeap_Rifle_RailGun_execInstantFireClient_Parms
{
	// struct FVector                                  StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0024 (0x0010) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FImpactInfo                              RealImpact;                                       		// 0x0038 (0x0060) [0x0000000000000000]              
	// float                                           CurPenetrationValue;                              		// 0x0098 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.Destroyed
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Rifle_RailGun_eventDestroyed_Parms
{
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.PlayTargetingBeepTimer
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execPlayTargetingBeepTimer_Parms
{
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.AddTargetingZones
// [0x00C20102] 
struct AKFWeap_Rifle_RailGun_execAddTargetingZones_Parms
{
	// class AKFPawn_Monster*                          KFPTarget;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Aim;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  BestZoneLocation;                                 		// 0x0020 (0x000C) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ZoneLocation;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	// int                                             BestZoneIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           BestZoneDot;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FVector                                  DirToZone;                                        		// 0x0044 (0x000C) [0x0000000000000000]              
	// float                                           DotToZone;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.ServerSetTargetingLocation
// [0x002400C3] ( FUNC_Final )
struct AKFWeap_Rifle_RailGun_execServerSetTargetingLocation_Parms
{
	// struct FVector                                  NewTargetingLocation;                             		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.CheckTargetLock
// [0x00820102] 
struct AKFWeap_Rifle_RailGun_execCheckTargetLock_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AKFPawn_Monster*                          KFP;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x003C (0x000C) [0x0000000000000000]              
	// class AActor*                                   BestTarget;                                       		// 0x0048 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0050 (0x0008) [0x0000000000000000]              
	// class AActor*                                   TA;                                               		// 0x0058 (0x0008) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Aim;                                              		// 0x006C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0078 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0084 (0x000C) [0x0000000000000000]              
	// float                                           bestAim;                                          		// 0x0090 (0x0004) [0x0000000000000000]              
	// float                                           bestDist;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BestZoneLocation;                                 		// 0x0098 (0x000C) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x00A4 (0x0008) [0x0000000000000000]              
	// int                                             OldHitZone;                                       		// 0x00AC (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.AllowTargetLockOn
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execAllowTargetLockOn_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.AdjustLockTarget
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execAdjustLockTarget_Parms
{
	// class AKFPawn_Monster*                          NewLockTarget;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.CanLockOnTo
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execCanLockOnTo_Parms
{
	// class AActor*                                   TA;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPawn*                                  PawnTarget;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.Tick
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Rifle_RailGun_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.DetachWeapon
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execDetachWeapon_Parms
{
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.StopAmbientSound
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execStopAmbientSound_Parms
{
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.StartAmbientSound
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execStartAmbientSound_Parms
{
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.GetReloadAnimName
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execGetReloadAnimName_Parms
{
	// DWORD                                           bTacticalReload : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.ShouldPlayFireLast
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execShouldPlayFireLast_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.PlayFireEffects
// [0x00024102] 
struct AKFWeap_Rifle_RailGun_execPlayFireEffects_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.ClientWeaponSet
// [0x010241C2] 
struct AKFWeap_Rifle_RailGun_execClientWeaponSet_Parms
{
	// DWORD                                           bOptionalSet : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bDoNotActivate : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.InitFOV
// [0x00020102] 
struct AKFWeap_Rifle_RailGun_execInitFOV_Parms
{
	// float                                           SizeX;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           SizeY;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           DefaultPlayerFOV;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NewScopeTextureSize;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_RPG7.ANIMNOTIFY_LockBolt
// [0x00020102] 
struct AKFWeap_RocketLauncher_RPG7_execANIMNOTIFY_LockBolt_Parms
{
};

// Function kfgamecontent.KFWeap_RocketLauncher_RPG7.GetBackBlastLocationAndRotation
// [0x00C20102] 
struct AKFWeap_RocketLauncher_RPG7_execGetBackBlastLocationAndRotation_Parms
{
	// struct FVector                                  BlastLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 BlastRotation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_RocketLauncher_RPG7.CustomFire
// [0x00820102] 
struct AKFWeap_RocketLauncher_RPG7_execCustomFire_Parms
{
	// class AKFExplosionActorReplicated*              ExploActor;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SpawnLoc;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpawnRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.CauseMuzzleFlash
// [0x00020102] 
struct AKFWeap_Shotgun_DoubleBarrel_execCauseMuzzleFlash_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.PlayFireEffects
// [0x00024102] 
struct AKFWeap_Shotgun_DoubleBarrel_execPlayFireEffects_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.GetWeaponFireAnim
// [0x00020102] 
struct AKFWeap_Shotgun_DoubleBarrel_execGetWeaponFireAnim_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.SendToFiringState
// [0x00020102] 
struct AKFWeap_Shotgun_DoubleBarrel_execSendToFiringState_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.AltFireMode
// [0x00020102] 
struct AKFWeap_Shotgun_DoubleBarrel_execAltFireMode_Parms
{
};

// Function kfgamecontent.KFWeap_Shotgun_DragonsBreath.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Shotgun_DragonsBreath_eventGetAltTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.ShouldPlayFireLast
// [0x00020102] 
struct AKFWeap_Shotgun_HZ12_execShouldPlayFireLast_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.PerformReload
// [0x00024102] 
struct AKFWeap_Shotgun_HZ12_execPerformReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.ConsumeAmmo
// [0x00020102] 
struct AKFWeap_Shotgun_HZ12_execConsumeAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.GetFireInterval
// [0x00020102] 
struct AKFWeap_Shotgun_HZ12_execGetFireInterval_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.IsPumpFire
// [0x00080102] 
struct AKFWeap_Shotgun_HZ12_execIsPumpFire_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_Shotgun_Medic_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.CalculateTraderWeaponStatDamage
// [0x00022102] 
struct AKFWeap_Shotgun_Medic_execCalculateTraderWeaponStatDamage_Parms
{
	// float                                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           DoTDamage;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.HandleWeaponShotTaken
// [0x00020002] 
struct AKFWeap_Shotgun_Medic_execHandleWeaponShotTaken_Parms
{
	// unsigned char                                   FireMode;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.AddSpread
// [0x00020102] 
struct AKFWeap_Shotgun_Medic_execAddSpread_Parms
{
	// struct FRotator                                 BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.SpawnProjectile
// [0x00820102] 
struct AKFWeap_Shotgun_Medic_execSpawnProjectile_Parms
{
	// class UClass*                                   KFProjClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  RealStartLoc;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AimDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	// class AKFProjectile*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 AimRot;                                           		// 0x002C (0x000C) [0x0000000000000000]              
	// class AKFPerk*                                  InstigatorPerk;                                   		// 0x0038 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_Nailgun.GetWeaponFireAnim
// [0x00020102] 
struct AKFWeap_Shotgun_Nailgun_execGetWeaponFireAnim_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// struct FName                                    ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_Nailgun.GetNumProjectilesToFire
// [0x00020102] 
struct AKFWeap_Shotgun_Nailgun_execGetNumProjectilesToFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// unsigned char                                   ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Shotgun_Nailgun.ConsumeAmmo
// [0x00020102] 
struct AKFWeap_Shotgun_Nailgun_execConsumeAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             AmountToConsume;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_SMG_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
struct AKFWeap_SMG_Medic_eventGetTraderFilter_Parms
{
	// unsigned char                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeapAttach_Dual_C4.UnHide
// [0x00020102] 
struct AKFWeapAttach_Dual_C4_execUnHide_Parms
{
};

// Function kfgamecontent.KFWeapAttach_Dual_C4.ThirdPersonFireEffects
// [0x00020102] 
struct AKFWeapAttach_Dual_C4_execThirdPersonFireEffects_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// class AKFPawn*                                  P;                                                		// 0x000C (0x0008) [0x0000000000000000]              
	// unsigned char                                   ThirdPersonAnimRateByte;                          		// 0x0014 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.TickAutoUnequip
// [0x00020102] 
struct AKFWeap_Welder_execTickAutoUnequip_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFDoorTrigger*                           Trigger;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AKFInventoryManager*                      KFIM;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.PlayReadyTransition
// [0x00020102] 
struct AKFWeap_Welder_execPlayReadyTransition_Parms
{
	// class AKFDoorActor*                             PreviousTarget;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FName                                    AnimName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           Duration;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.ServerSetWeldTarget
// [0x002400C3] ( FUNC_Final )
struct AKFWeap_Welder_execServerSetWeldTarget_Parms
{
	// class AKFDoorActor*                             NewTarget;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// DWORD                                           bDelayedStart : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Welder.FindRepairableDoor
// [0x00820102] 
struct AKFWeap_Welder_execFindRepairableDoor_Parms
{
	// class AKFDoorActor*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFDoorTrigger*                           DoorTrigger;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UKFInterface_Usable*                      UsableTrigger;                                    		// 0x0010 (0x0010) [0x0000000000000000]              
	// float                                           FacingDot;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Dir2d;                                            		// 0x0024 (0x000C) [0x0000000000000000]              
	// class AKFPlayerController*                      KFPC;                                             		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.TraceDoorActors
// [0x00820102] 
struct AKFWeap_Welder_execTraceDoorActors_Parms
{
	// class AKFDoorActor*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKFDoorActor*                             door;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitLoc;                                           		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNorm;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AdjustedAim;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.TickWeldTarget
// [0x00020102] 
struct AKFWeap_Welder_execTickWeldTarget_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFDoorActor*                             PreviousTarget;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.CheckDelayedStartFire
// [0x00020102] 
struct AKFWeap_Welder_execCheckDelayedStartFire_Parms
{
	// DWORD                                           bNotifyServer : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Welder.ClientRefire
// [0x010201C2] 
struct AKFWeap_Welder_execClientRefire_Parms
{
};

// Function kfgamecontent.KFWeap_Welder.Refire
// [0x00020102] 
struct AKFWeap_Welder_execRefire_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.RechargeAmmo
// [0x00020002] 
struct AKFWeap_Welder_execRechargeAmmo_Parms
{
};

// Function kfgamecontent.KFWeap_Welder.CanWeldTarget
// [0x00024102] 
struct AKFWeap_Welder_execCanWeldTarget_Parms
{
	// int                                             FireModeNum;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKFPerk*                                  WelderPerk;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.CustomFire
// [0x00020102] 
struct AKFWeap_Welder_execCustomFire_Parms
{
	// float                                           CurrentFastenRate;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           CurrentUnfastenRate;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.StartFire
// [0x00020102] 
struct AKFWeap_Welder_execStartFire_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.AltFireMode
// [0x00020102] 
struct AKFWeap_Welder_execAltFireMode_Parms
{
};

// Function kfgamecontent.KFWeap_Welder.SetIronSights
// [0x00020102] 
struct AKFWeap_Welder_execSetIronSights_Parms
{
	// DWORD                                           bNewIronSights : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Welder.ShouldAutoReload
// [0x00020102] 
struct AKFWeap_Welder_execShouldAutoReload_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Welder.HasAmmo
// [0x00024102] 
struct AKFWeap_Welder_execHasAmmo_Parms
{
	// unsigned char                                   FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	// int                                             Amount;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Welder.HasAnyAmmo
// [0x00020102] 
struct AKFWeap_Welder_execHasAnyAmmo_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Welder.UpdateScreenUI
// [0x00020102] 
struct AKFWeap_Welder_execUpdateScreenUI_Parms
{
	// float                                           WeldPercentageFloat;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned char                                   WeldPercentage;                                   		// 0x0004 (0x0001) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.Destroyed
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Welder_eventDestroyed_Parms
{
};

// Function kfgamecontent.KFWeap_Welder.Tick
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Welder_eventTick_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.DetachWeapon
// [0x00020102] 
struct AKFWeap_Welder_execDetachWeapon_Parms
{
};

// Function kfgamecontent.KFWeap_Welder.AttachWeaponTo
// [0x00024102] 
struct AKFWeap_Welder_execAttachWeaponTo_Parms
{
	// class USkeletalMeshComponent*                   MeshCpnt;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function kfgamecontent.KFWeap_Welder.SetShownInInventory
// [0x00020102] 
struct AKFWeap_Welder_execSetShownInInventory_Parms
{
	// DWORD                                           bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function kfgamecontent.KFWeap_Welder.PreBeginPlay
// [0x00020902] ( FUNC_Event )
struct AKFWeap_Welder_eventPreBeginPlay_Parms
{
	// class UKFGameEngine*                            KFGEngine;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif