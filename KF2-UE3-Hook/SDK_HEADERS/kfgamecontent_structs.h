/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: kfgamecontent_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct kfgamecontent.KFAIController_ZedPatriarch.Patriarch_TrackedEnemyInfo
// 0x0020
struct FPatriarch_TrackedEnemyInfo
{
	class AKFPawn*                                     TrackedEnemy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              LastTimeVisible;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastVisibleLocation;                              		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              LastTakeDamageTime;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                AggroDamage;                                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFPawn_ZedHusk.sHuskFireballSettings
// 0x0008
struct FsHuskFireballSettings
{
	DWORD                                              bSpawnGroundFire : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ExplosionMomentum;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFDifficulty_ClotAlphaKing.sRallyTriggerInfo
// 0x0010
struct FsRallyTriggerInfo
{
	float                                              RallyChance;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Cooldown;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SelfDealtDamageModifier;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SelfTakenDamageModifier;                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFAISpawnManager_Endless.MacroDifficultyWaveInfo
// 0x0010
struct FMacroDifficultyWaveInfo
{
	TArray< struct FDifficultyWaveInfo >               MacroDifficultyWaveSettings;                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFPhysicsVolume.TouchThrottling
// 0x000C
struct FTouchThrottling
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFExplosion_HuskCannonFireballGroundFire.CachedExplosionInfo
// 0x0014
struct FCachedExplosionInfo
{
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameDifficulty_Endless.ZedAdjustments
// 0x0010
struct FZedAdjustments
{
	TArray< struct FStatAdjustments >                  ZedsToAdjust;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameDifficulty_Endless.SpecialWaveInfo
// 0x0014
struct FSpecialWaveInfo
{
	unsigned char                                      ZedType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              PctChance;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WaveScale;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SpawnRateMultiplier;                              		// 0x000C (0x0004) [0x0000000000000000]              
	DWORD                                              bSpawnEnraged : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct kfgamecontent.KFGameDifficulty_Endless.SpecialWaveDifficultyInfo
// 0x0010
struct FSpecialWaveDifficultyInfo
{
	TArray< struct FSpecialWaveInfo >                  SpecialWaveInfos;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameDifficulty_Endless.ZedDifficultyOverride
// 0x0014
struct FZedDifficultyOverride
{
	class UClass*                                      ClassToAdjust;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HealthMod;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DamageMod;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              SoloDamageMod;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameDifficulty_Endless.DifficultyOverride
// 0x0010
struct FDifficultyOverride
{
	TArray< struct FZedDifficultyOverride >            ZedsOverride;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameDifficulty_Endless.DifficultyScaling
// 0x0138
struct FDifficultyScaling
{
	TArray< struct FDifficultySettings >               Difficulties;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FDifficultySettings                         DifficultyIncrement;                              		// 0x0010 (0x0048) [0x0000000000000000]              
	int                                                CurrentDifficultyIndex;                           		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              BaseUpgradeZedPctChance;                          		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              IncreaseUpgradeZedPctChance;                      		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              UpgradeZedPctChance;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              BaseFullUpgradeZedPctChance;                      		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              IncreaseFullUpgradeZedPctChance;                  		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              FullUpgradeZedPctChance;                          		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< struct FZedAdjustments >                   ZedAdjustmentsByDifficulty;                       		// 0x0074 (0x0010) [0x0000000000000000]              
	struct FStatAdjustments                            ZedAdjustmentIncrement;                           		// 0x0084 (0x0074) [0x0000000000000000]              
	TArray< float >                                    OutbreakPctChances;                               		// 0x00F8 (0x0010) [0x0000000000000000]              
	TArray< float >                                    SpecialWavePctChance;                             		// 0x0108 (0x0010) [0x0000000000000000]              
	TArray< struct FSpecialWaveDifficultyInfo >        DifficultySpecialWaveTypes;                       		// 0x0118 (0x0010) [0x0000000000000000]              
	TArray< struct FDifficultyOverride >               ZedDiffOverride;                                  		// 0x0128 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFTutorialSectionInfo.STutorialSlide
// 0x003C
struct FSTutorialSlide
{
	struct FString                                     TitleKey;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     DescriptionKey;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  UIImage;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           KeyGBAs;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
	int                                                GamepadSlideIndex;                                		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFTutorialSectionInfo.SControllerTutorialSlide
// 0x0048
struct FSControllerTutorialSlide
{
	class UTexture2D*                                  PS4Image;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  XboxOneImage;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  PCImage;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FString                                     TitleKey;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FString                                     DescriptionKey;                                   		// 0x0028 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           KeyGBAs;                                          		// 0x0038 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameReplicationInfoVersus.sPlayerZedSpawnWaitTimeData
// 0x0009
struct FsPlayerZedSpawnWaitTimeData
{
	unsigned char                                      SpawnWaitTime;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	DWORD                                              bTakeOverActive : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      DirtyFlag;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFMapObjective_AreaDefense.DoshHoldMaxReward
// 0x002C
struct FDoshHoldMaxReward
{
	int                                                WaveMaxReward[ 0xB ];                             		// 0x0000 (0x002C) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFMapObjective_DoshHold.WaveLengthPctChances
// 0x002C
struct FWaveLengthPctChances
{
	float                                              PctChances[ 0xB ];                                		// 0x0000 (0x002C) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFMGA_TargetGame.sTargetGameData
// 0x0010
struct FsTargetGameData
{
	TArray< struct FName >                             MinigameAnimations;                               		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFvolume_RagdollThrow.HitTracking
// 0x000C
struct FHitTracking
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFPawn_ZedHans.ProjectileTossInfo
// 0x0030
struct FProjectileTossInfo
{
	struct FVector                                     TossVelocity;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     TossFromLocation;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     TossTargetLocation;                               		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              TossSpeed;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              TossZPct;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              TossTime;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFPawn_ZedPatriarch.Patriarch_MortarTarget
// 0x0014
struct FPatriarch_MortarTarget
{
	class AKFPawn*                                     TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     TargetVelocity;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFPawn_ZedPatriarch.PatriarchBattlePhaseInfo
// 0x0058
struct FPatriarchBattlePhaseInfo
{
	DWORD                                              bAllowedToSprint : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SprintCooldownTime;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	DWORD                                              bCanTentacleGrab : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TentacleGrabCooldownTime;                         		// 0x000C (0x0004) [0x0000000000000000]              
	DWORD                                              bCanUseMissiles : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MissileAttackCooldownTime;                        		// 0x0014 (0x0004) [0x0000000000000000]              
	DWORD                                              bCanUseMortar : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MortarAttackCooldownTime;                         		// 0x001C (0x0004) [0x0000000000000000]              
	DWORD                                              bCanDoMortarBarrage : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bCanChargeAttack : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ChargeAttackCooldownTime;                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaxRageAttacks;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TentacleDamage;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              MinigunAttackCooldownTime;                        		// 0x0030 (0x0004) [0x0000000000000000]              
	DWORD                                              bCanSummonMinions : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< DWORD >                                    bCanMoveWhenMinigunning;                          		// 0x0038 (0x0010) [0x0000000000000000]              
	TArray< float >                                    HealAmounts;                                      		// 0x0048 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFSM_DAR_EMPAttack.EMPBlastHitInfo
// 0x003C
struct FEMPBlastHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0014 (0x0028) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFTrigger_MinigameGenerator.GeneratorStatus
// 0x0014
struct FGeneratorStatus
{
	float                                              MinTimeRemaining;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                StatusColor;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFTrigger_MinigameGenerator.EmissiveActor
// 0x0010
struct FEmissiveActor
{
	class AActor*                                      EmissiveActor;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              GeneratorOnValue;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              GeneratorOffValue;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFTrigger_MinigameGenerator.EmissiveUpdateActorList
// 0x0024
struct FEmissiveUpdateActorList
{
	float                                              ActivationDelay;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            ActorList;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	TArray< struct FEmissiveActor >                    CachedActorList;                                  		// 0x0014 (0x0010) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif