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

// ScriptStruct kfgamecontent.KFPhysicsVolume.TouchThrottling
// 0x000C
struct FTouchThrottling
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
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

// ScriptStruct kfgamecontent.KFGameInfo_WeeklySurvival.SpawnReplacement
// 0x0010
struct FSpawnReplacement
{
	int                                                SpawnEntry;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      NewClass;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              PercentChance;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameInfo_WeeklySurvival.StatAdjustments
// 0x0070
struct FStatAdjustments
{
	class UClass*                                      ClassToAdjust;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HealthScale;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              HeadHealthScale;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ShieldScale;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	DWORD                                              bStartEnraged : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bExplosiveDeath : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	class UKFGameExplosion*                            ExplosionTemplate;                                		// 0x0018 (0x0008) [0x0000000000000000]              
	class UClass*                                      ExplosionIgnoreClass;                             		// 0x0020 (0x0008) [0x0000000000000000]              
	TArray< float >                                    BeefcakeScaleIncreases;                           		// 0x0028 (0x0010) [0x0000000000000000]              
	TArray< float >                                    BeefcakeHealthIncreases;                          		// 0x0038 (0x0010) [0x0000000000000000]              
	float                                              MaxBeefcake;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              MaxBeefcakeHealth;                                		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              DamageDealtScale;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              DamageTakenScale;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   OverrideDeflationRate;                            		// 0x0058 (0x0008) [0x0000000000000000]              
	class UKFAIWaveInfo*                               AdditionalSubSpawns;                              		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   AdditionalSubSpawnCount;                          		// 0x0068 (0x0008) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameInfo_WeeklySurvival.WeeklyOverrides
// 0x0178
struct FWeeklyOverrides
{
	int                                                EventDifficulty;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GameLength;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	DWORD                                              bHeadshotsOnly : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SpawnRateMultiplier;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              GlobalDamageTickRate;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              GlobalDamageTickAmount;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              GlobalAmmoCostScale;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	class UKFGFxObject_TraderItems*                    SpawnWeaponList;                                  		// 0x001C (0x0008) [0x0000000000000000]              
	class UKFGFxObject_TraderItems*                    TraderWeaponList;                                 		// 0x0024 (0x0008) [0x0000000000000000]              
	DWORD                                              bDisableGrenades : 1;                             		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FSpawnReplacement >                 SpawnReplacementList;                             		// 0x0030 (0x0010) [0x0000000000000000]              
	DWORD                                              bAllowSpawnReplacementDuringBossWave : 1;         		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FSpawnReplacement >                 BossSpawnReplacementList;                         		// 0x0044 (0x0010) [0x0000000000000000]              
	TArray< struct FStatAdjustments >                  ZedsToAdjust;                                     		// 0x0054 (0x0010) [0x0000000000000000]              
	DWORD                                              bDisableTraders : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      PickupResetTime;                                  		// 0x0068 (0x0001) [0x0000000000000000]              
	float                                              OverrideItemPickupModifier;                       		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              OverrideAmmoPickupModifier;                       		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< float >                                    WaveItemPickupModifiers;                          		// 0x0074 (0x0010) [0x0000000000000000]              
	TArray< float >                                    WaveAmmoPickupModifiers;                          		// 0x0084 (0x0010) [0x0000000000000000]              
	DWORD                                              bUseOverrideItemRespawnTime : 1;                  		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FNumPlayerMods                              OverrideItemRespawnTime;                          		// 0x0098 (0x001C) [0x0000000000000000]              
	DWORD                                              bUseOverrideAmmoRespawnTime : 1;                  		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FNumPlayerMods                              OverrideAmmoRespawnTime;                          		// 0x00B8 (0x001C) [0x0000000000000000]              
	DWORD                                              bPermanentZedTime : 1;                            		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PermanentZedTimeCutoff;                           		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              PermanentZedResetTime;                            		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              OverrideZedTimeSlomoScale;                        		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              ZedTimeRadius;                                    		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              ZedTimeBossRadius;                                		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              ZedTimeHeight;                                    		// 0x00EC (0x0004) [0x0000000000000000]              
	DWORD                                              bScaleOnHealth : 1;                               		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartingDamageSizeScale;                          		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              DeadDamageSizeScale;                              		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              OverrideSpawnDerateTime;                          		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              OverrideTeleportDerateTime;                       		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              GlobalGravityZ;                                   		// 0x0104 (0x0004) [0x0000000000000000]              
	DWORD                                              bUseBeefcakeRules : 1;                            		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    WaveAICountScale;                                 		// 0x010C (0x0010) [0x0000000000000000]              
	float                                              ZedSpawnHeadScale;                                		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              PlayerSpawnHeadScale;                             		// 0x0120 (0x0004) [0x0000000000000000]              
	DWORD                                              bHumanSprintEnabled : 1;                          		// 0x0124 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OffPerkCostScale;                                 		// 0x0128 (0x0004) [0x0000000000000000]              
	DWORD                                              bBackupMeleeSprintSpeed : 1;                      		// 0x012C (0x0004) [0x0000000000000000] [0x00000001] 
	class UKFAIWaveInfo*                               AdditionalBossWaveInfo;                           		// 0x0130 (0x0008) [0x0000000000000000]              
	float                                              AdditionalBossWaveFrequency;                      		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              AdditionalBossWaveStartDelay;                     		// 0x013C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   AdditionalBossSpawnCount;                         		// 0x0140 (0x0008) [0x0000000000000000]              
	DWORD                                              bContinuousAdditionalBossWave : 1;                		// 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CrushScale;                                       		// 0x014C (0x0004) [0x0000000000000000]              
	float                                              JumpDamageScale;                                  		// 0x0150 (0x0004) [0x0000000000000000]              
	int                                                NumJumpsAllowed;                                  		// 0x0154 (0x0004) [0x0000000000000000]              
	DWORD                                              bUseZedDamageInflation : 1;                       		// 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ZeroHealthInflation;                              		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              GlobalDeflationRate;                              		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              InflationDeathGravity;                            		// 0x0164 (0x0004) [0x0000000000000000]              
	float                                              InflationExplosionTimer;                          		// 0x0168 (0x0004) [0x0000000000000000]              
	DWORD                                              bDisableHeadless : 1;                             		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MaxPerkLevel;                                     		// 0x0170 (0x0001) [0x0000000000000000]              
	int                                                MaxBoomsPerFrame;                                 		// 0x0174 (0x0004) [0x0000000000000000]              
};

// ScriptStruct kfgamecontent.KFGameReplicationInfoVersus.sPlayerZedSpawnWaitTimeData
// 0x0009
struct FsPlayerZedSpawnWaitTimeData
{
	unsigned char                                      SpawnWaitTime;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	DWORD                                              bTakeOverActive : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      DirtyFlag;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
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