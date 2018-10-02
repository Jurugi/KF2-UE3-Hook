/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: KFGame_structs.h
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

// ScriptStruct KFGame.KFAfflictionManager.IncapSettingsInfo
// 0x0018
struct FIncapSettingsInfo
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Cooldown;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< float >                                    Vulnerability;                                    		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.KFHitFxInfo
// 0x0030
struct FKFHitFxInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EncodedHitDirection;                              		// 0x000C (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      HitBoneIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	DWORD                                              bRadialDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bObliterated : 1;                                 		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	class APlayerReplicationInfo*                      DamagerPRI;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.KFRadialHitFxInfo
// 0x0010
struct FKFRadialHitFxInfo
{
	unsigned char                                      RadiusDamageScale;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     RadiusHurtOrigin;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.HitZoneInfo
// 0x0024
struct FHitZoneInfo
{
	struct FName                                       ZoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                GoreHealth;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxGoreHealth;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DmgScale;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Limb;                                             		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      SkinID;                                           		// 0x001D (0x0001) [0x0000000000000000]              
	DWORD                                              bPlayedInjury : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFPawnSoundGroup.FootstepSoundInfo
// 0x000C
struct FFootstepSoundInfo
{
	unsigned char                                      MaterialType;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	class UAkBaseSoundObject*                          Sound;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawnSoundGroup.ImpactSoundCoolDownInfo
// 0x0010
struct FImpactSoundCoolDownInfo
{
	unsigned char                                      Limb;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              LastImpactSoundTime;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawnAnimInfo.AnimVariants
// 0x0010
struct FAnimVariants
{
	TArray< struct FName >                             Anims;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawnAnimInfo.DeathAnimInfo
// 0x0060
struct FDeathAnimInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             Anims_F;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             Anims_B;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             Anims_L;                                          		// 0x0028 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             Anims_R;                                          		// 0x0038 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             DismemberedAnims;                                 		// 0x0048 (0x0010) [0x0000000000000000]              
	float                                              RagdollChance;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              IgnoreChance;                                     		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.ReplicatedRootPosInfo
// 0x0010
struct FReplicatedRootPosInfo
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	DWORD                                              bNewData : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFPawnAnimInfo.AttackAnimInfo
// 0x0050
struct FAttackAnimInfo
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             Anims;                                            		// 0x0008 (0x0010) [0x0000000000000000]              
	DWORD                                              bUseRootMotion : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bPlayUpperBodyOnly : 1;                           		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bIsInterruptible : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bCannotBeParried : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bNoDamageImpulses : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bOnlyWhileSprinting : 1;                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00000020] 
	DWORD                                              bOnlyWhileNotSprinting : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000040] 
	DWORD                                              bOnlyWhileEnemyMoving : 1;                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000080] 
	DWORD                                              bOnlyWhileEnemyNotMoving : 1;                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000100] 
	DWORD                                              bOnlyWhileSurrounded : 1;                         		// 0x0018 (0x0004) [0x0000000000000000] [0x00000200] 
	DWORD                                              bHasCloaking : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000400] 
	DWORD                                              bOnlyWhileCloaked : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000800] 
	DWORD                                              bOnlyWhileDeCloaked : 1;                          		// 0x0018 (0x0004) [0x0000000000000000] [0x00001000] 
	float                                              SurroundedRadius;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MinSurroundedBy;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	DWORD                                              bOnlyWhileInSpecializedMode : 1;                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bOnlyWhileNotInSpecializedMode : 1;               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bOnlyWhileHeadless : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bOnlyWhilePathClear : 1;                          		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bIsBattlePhaseAttack : 1;                         		// 0x0024 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                BattlePhaseMinimum;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                BattlePhaseMaximum;                               		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Chance;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              MaxDistance;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              MinDistance;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              GlobalCooldown;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              InstancedCooldown;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned char                                      DifficultyRating;                                 		// 0x0044 (0x0001) [0x0000000000000000]              
	DWORD                                              bSkipIfDifficultyIsExceeded : 1;                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastTimePlayed;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawnAnimInfo.sTheatricAnimInfo
// 0x001C
struct FsTheatricAnimInfo
{
	struct FName                                       AnimationName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 CameraAnimation;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     CameraAnimOffset;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.KFSpecialMoveStruct
// 0x000D
struct FKFSpecialMoveStruct
{
	unsigned char                                      SpecialMove;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	class APawn*                                       InteractionPawn;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      Flags;                                            		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.LookAtInfo
// 0x0030
struct FLookAtInfo
{
	class AActor*                                      LookAtTarget;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bUseSpine : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BlendIn;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BlendOut;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     TargetOffset;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              LookAtPct;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector                                     ForcedLookAtLocation;                             		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeaponAmbientEchoHandler.EchoSet
// 0x0068
struct FEchoSet
{
	class UAkComponent*                                Components[ 0x4 ];                                		// 0x0000 (0x0020) [0x0000000000000000]              
	class UAkEvent*                                    Events[ 0x4 ];                                    		// 0x0020 (0x0020) [0x0000000000000000]              
	float                                              EchoStartTimes[ 0x4 ];                            		// 0x0040 (0x0010) [0x0000000000000000]              
	float                                              EchoStopTimes[ 0x4 ];                             		// 0x0050 (0x0010) [0x0000000000000000]              
	unsigned char                                      Started[ 0x4 ];                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      Stopped[ 0x4 ];                                   		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.DamageOverTimeInfo
// 0x0024
struct FDamageOverTimeInfo
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      DoT_Type;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              interval;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              TimeUntilNextDamage;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	class AController*                                 InstigatedBy;                                     		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.KnockdownImpulseInfo
// 0x0038
struct FKnockdownImpulseInfo
{
	struct FVector                                     LinearVelocity;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     AngularVelocity;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     ImpulsePosition;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     ImpulseStrength;                                  		// 0x0024 (0x000C) [0x0000000000000000]              
	unsigned char                                      PointImpulseHitZone;                              		// 0x0030 (0x0001) [0x0000000000000000]              
	DWORD                                              bIsRadialImpulse : 1;                             		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFPawn.DamageInfo
// 0x002C
struct FDamageInfo
{
	class AController*                                 DamagerController;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	class APlayerReplicationInfo*                      DamagerPRI;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              TotalDamage;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              LastTimeDamaged;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            DamagePerks;                                      		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn.ExplosiveStackInfo
// 0x000C
struct FExplosiveStackInfo
{
	class AGameExplosionActor*                         Explosion;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              LastHitTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBehaviorTypes.KFNavMeshMovementStepData
// 0x0050
struct FKFNavMeshMovementStepData
{
	unsigned char                                      EdgeType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     EdgeCenter;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Poly0Center;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Poly1Center;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     MovementPoint;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     EdgePos1;                                         		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FVector                                     EdgePos2;                                         		// 0x0040 (0x000C) [0x0000000000000000]              
	struct FColor                                      EdgeColor;                                        		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.KFAICmdHistoryItem
// 0x0034
struct FKFAICmdHistoryItem
{
	class UClass*                                      CmdClass;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     CmdName;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	DWORD                                              bAborted : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bFailure : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bSuccess : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     VerboseString;                                    		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.sBlockedPathInfo
// 0x0010
struct FsBlockedPathInfo
{
	class UReachSpec*                                  BlockedReachSpec;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                BlockedCost;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              BlockedTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.EphemeralMatchStats.ZedKillType
// 0x000C
struct FZedKillType
{
	class UClass*                                      MonsterClass;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.EphemeralMatchStats.WeaponDamage
// 0x0018
struct FWeaponDamage
{
	class UClass*                                      WeaponDef;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                DamageAmount;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HeadShots;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LargeZedKills;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.EphemeralMatchStats.PerkXPGain
// 0x001C
struct FPerkXPGain
{
	class UClass*                                      PerkClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                XPDelta;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SecondaryXPGain;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BonusXP;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              StartXPPercentage;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                StartLevel;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.EphemeralMatchStats.AARAward
// 0x0048
struct FAARAward
{
	struct FName                                       IconPath;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     TitleIdentifier;                                  		// 0x0008 (0x0010) [0x0000000000000000]              
	struct FString                                     DescriptionIdentifier;                            		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FString                                     ValueIdentifier;                                  		// 0x0028 (0x0010) [0x0000000000000000]              
	int                                                DisplayValue;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	DWORD                                              bHighLight : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0040 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.EphemeralMatchStats.TopWeaponReplicationInfo
// 0x003C
struct FTopWeaponReplicationInfo
{
	class UClass*                                      TopWeapon1;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      TopWeapon2;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UClass*                                      TopWeapon3;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector                                     TopWeapon1Info;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     TopWeapon2Info;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     TopWeapon3Info;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameInfo.GameMapCycle
// 0x0010
struct FGameMapCycle
{
	TArray< struct FString >                           Maps;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.PostWaveReplicationInfo
// 0x0029
struct FPostWaveReplicationInfo
{
	struct FVector                                     VectData1;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     VectData2;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      LargeZedKills;                                    		// 0x0018 (0x0001) [0x0000000000000000]              
	DWORD                                              bDiedDuringWave : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bBestTeammate : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bKilledMostZeds : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bEarnedMostDosh : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bAllSurvivedLastWave : 1;                         		// 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bSomeSurvivedLastWave : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000020] 
	DWORD                                              bOneSurvivedLastWave : 1;                         		// 0x001C (0x0004) [0x0000000000000000] [0x00000040] 
	DWORD                                              bKilledFleshpoundLastWave : 1;                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000080] 
	DWORD                                              bKilledScrakeLastWave : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000100] 
	DWORD                                              bOpeningTrader : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000200] 
	class UClass*                                      ClassKilledByLastWave;                            		// 0x0020 (0x0008) [0x0000000000000000]              
	unsigned char                                      RepCount;                                         		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFForcedReachSpec.ForcedSpecInfo
// 0x000C
struct FForcedSpecInfo
{
	struct FVector2D                                   SpecSize;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bSupports : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFAiBaseRangedBehavior.RangedLocValidationData
// 0x004C
struct FRangedLocValidationData
{
	DWORD                                              bCalulatedThisEngagement : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bLastLosArcCheckValid : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RadiusOfFireCheckPath;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     FireLastPointToStrikeFrom;                        		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     FireLastLocOfEndOfArc;                            		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     FireLastLocOfBlockage;                            		// 0x0020 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           LogAlgosSegmentEnds;                              		// 0x002C (0x0010) [0x0000000000000000]              
	TArray< DWORD >                                    LogAlgosSegmentValiditys;                         		// 0x003C (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBaseRangedBehavior.RangedStrikeData
// 0x0058
struct FRangedStrikeData
{
	float                                              HeightAboveTargetForRangedStrikeInUU;             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              XY_DistanceFromTargetForRangedStrikeInUU;         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              XY_DistanceSqFromTargetForRangedStrikeInUU;       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RangedFireIdealSpeed;                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              RangedFireMaxSpeed;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RangedFireMinSpeed;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DesiredZPercentOfArc;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              IntentionalMissRangedFireIdealSpeed;              		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              IntentionalMissRangedFireMaxSpeed;                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              IntentionalMissRangedFireMinSpeed;                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              IntentionalMissDesiredZPercentOf;                 		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              IntentionalMissFrontOffsetDistance;               		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              IntentionalMissSideOffsetDistance;                		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              IntentionalMissHeightOffsetDistance;              		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     ShapeOfProjectileForCalc;                         		// 0x0038 (0x000C) [0x0000000000000000]              
	float                                              PercentOfArcToCheckForCalc;                       		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< float >                                    AltDesiredZPercentOfList;                         		// 0x0048 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBehaviorTypes.ThrowImpulse
// 0x0019
struct FThrowImpulse
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Impulse;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              TimeToNextImpulse;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      ImpulseType;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBehaviorTypes.ThrowImpulseMultiplier
// 0x000C
struct FThrowImpulseMultiplier
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Multiplier;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBehaviorTypes.ThrowImpulseDataForKActors
// 0x000C
struct FThrowImpulseDataForKActors
{
	float                                              ImpulseStrength;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	DWORD                                              OverrideDirZ : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DirZ;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBehaviorTypes.ThrowAttractInfo
// 0x0018
struct FThrowAttractInfo
{
	class AActor*                                      Attractor;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class UMeshComponent*                              AttractToMesh;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       BoneOrSocketName;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBehaviorTypes.PathingFlags
// 0x0014
struct FPathingFlags
{
	unsigned char                                      PathToEnemiesLocationStatus;                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      PathToLocationNearEnemyStatus;                    		// 0x0001 (0x0001) [0x0000000000000000]              
	DWORD                                              bLastLatentMoveReportedMoveToLocationUnreachable : 1;		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bCanNotGetToEnemyLocationBecasuseOfMoveIteruption : 1;		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bCanNotGetToIntermediateLocationBecasuseOfMoveIteruption : 1;		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bIamOffNavMesh : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bMyEnemyIsOffNavMesh : 1;                         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              TimeMyEnemyWasLastSetToOffNavMesh;                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeIWasLastSetToOffNavMesh;                      		// 0x000C (0x0004) [0x0000000000000000]              
	DWORD                                              bStuckFixPlugInWantsForceLosMove : 1;             		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFAiBehaviorTypes.KFCombatMovementHistoryData
// 0x0050
struct FKFCombatMovementHistoryData
{
	struct FVector                                     MyPosition;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EnemyPosition;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     EnemyDisplacement;                                		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     Acceleration;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     Heading;                                          		// 0x003C (0x000C) [0x0000000000000000]              
	float                                              DistanceToEnemy;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAiBehaviorTypes.ThrowInfo
// 0x0048
struct FThrowInfo
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	DWORD                                              bInAir : 1;                                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDeadlyImpact : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bThrowAttracted : 1;                              		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      ThrowType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      PreviousThrowType;                                		// 0x0009 (0x0001) [0x0000000000000000]              
	class AKFPawn*                                     PawnInstigator;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	class AKFPawn*                                     PreviousThrowInstigator;                          		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector                                     ThrowDirection;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	struct FName                                       ThrowBone;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	float                                              ThrowTime;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                LastImpulseNr;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	class AActor*                                      ThrowCauser;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
	class UClass*                                      DamageTypeOnHit;                                  		// 0x0040 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSpawnVolume.DoorListInfo
// 0x000C
struct FDoorListInfo
{
	class AKFDoorActor*                                DoorActor;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bOnlyWhenWelded : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFSpawnVolume.SpawnMarkerInfo
// 0x0020
struct FSpawnMarkerInfo
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	DWORD                                              bSpawnDisabled : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastUsedTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FColor                                      SpawnMarkerColor;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.CooldownData
// 0x0010
struct FCooldownData
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ActivationTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.sForcedEvadeChanceInfo
// 0x0008
struct FsForcedEvadeChanceInfo
{
	float                                              FL;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FR;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.sDangerEvadeInfo
// 0x0060
struct FsDangerEvadeInfo
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< float >                                    Cooldowns;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< float >                                    EvadeChances;                                     		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FsForcedEvadeChanceInfo >           ForcedEvadeChances;                               		// 0x0028 (0x0010) [0x0000000000000000]              
	TArray< struct FVector2D >                         ReactionDelayRanges;                              		// 0x0038 (0x0010) [0x0000000000000000]              
	TArray< float >                                    BlockChances;                                     		// 0x0048 (0x0010) [0x0000000000000000]              
	float                                              SoloChanceMultiplier;                             		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              LastEvadeTime;                                    		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.sEvadeOnDamageInfo
// 0x0010
struct FsEvadeOnDamageInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamagedHealthPctToTrigger;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FsForcedEvadeChanceInfo                     ForcedEvadeChance;                                		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.sFriendlyDamageInfo
// 0x000C
struct FsFriendlyDamageInfo
{
	class AController*                                 DamagerController;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController.InvalidAnchorItem
// 0x000C
struct FInvalidAnchorItem
{
	class ANavigationPoint*                            InvalidNav;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              InvalidTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_Monster.sRallyInfo
// 0x0010
struct FsRallyInfo
{
	DWORD                                              bCanRally : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bCauseSprint : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RallyBuffTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TakenDamageModifier;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DealtDamageModifier;                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_Monster.AttachedGoreChunkInfo
// 0x000C
struct FAttachedGoreChunkInfo
{
	int                                                AttachmentIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        AttachedComponent;                                		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_Monster.ExtraVFXInfo
// 0x0028
struct FExtraVFXInfo
{
	class UParticleSystem*                             VFX;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       Label;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    SFXStartEvent;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    SFXStopEvent;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_Monster.ExtraVFXAttachmentInfo
// 0x0030
struct FExtraVFXAttachmentInfo
{
	class UParticleSystemComponent*                    VFXComponent;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FExtraVFXInfo                               Info;                                             		// 0x0008 (0x0028) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_Monster.DamageModifierInfo
// 0x0018
struct FDamageModifierInfo
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< float >                                    DamageScale;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_Monster.SpecialMoveCooldownInfo
// 0x002C
struct FSpecialMoveCooldownInfo
{
	float                                              CoolDownTime;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastUsedTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      SMHandle;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	class UTexture2D*                                  SpecialMoveIcon;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                Charges;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     NameLocalizationKey;                              		// 0x0018 (0x0010) [0x0000000000000000]              
	DWORD                                              bShowOnHud : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFPawn_Monster.sBlockInfo
// 0x0024
struct FsBlockInfo
{
	float                                              Chance;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MaxBlocks;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Cooldown;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DamagedHealthPctToTrigger;                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              MeleeDamageModifier;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              DamageModifier;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              AfflictionModifier;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              SoloChanceMultiplier;                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIController_Hans.TrackedEnemyInfo
// 0x0024
struct FTrackedEnemyInfo
{
	class AKFPawn*                                     TrackedEnemy;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              LastTimeVisible;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastVisibleLocation;                              		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              LastTimeFiredOn;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              LastTimeGrenadeAttacked;                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                NumTimesEngagedRecently;                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_ZedHansBase.HansBattlePhaseInfo
// 0x0074
struct FHansBattlePhaseInfo
{
	DWORD                                              bCanFrenzy : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bSprintingBehavior : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              GlobalOffensiveNadePhaseCooldown;                 		// 0x0004 (0x0004) [0x0000000000000000]              
	DWORD                                              bCanTossNerveGas : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NerveGasTossPhaseCooldown;                        		// 0x000C (0x0004) [0x0000000000000000]              
	DWORD                                              bCanBarrageNerveGas : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              NerveGasBarragePhaseCooldown;                     		// 0x0014 (0x0004) [0x0000000000000000]              
	DWORD                                              bCanUseGuns : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GunAttackPhaseCooldown;                           		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              GunAttackLengthPhase;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	DWORD                                              bCanTossGrenade : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HENadeTossPhaseCooldown;                          		// 0x0028 (0x0004) [0x0000000000000000]              
	DWORD                                              bCanBarrageGrenades : 1;                          		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HENadeBarragePhaseCooldown;                       		// 0x0030 (0x0004) [0x0000000000000000]              
	TArray< DWORD >                                    bCanMoveWhileThrowingGrenades;                    		// 0x0034 (0x0010) [0x0000000000000000]              
	TArray< float >                                    HealThresholds;                                   		// 0x0044 (0x0010) [0x0000000000000000]              
	TArray< float >                                    HealAmounts;                                      		// 0x0054 (0x0010) [0x0000000000000000]              
	TArray< int >                                      MaxShieldHealth;                                  		// 0x0064 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAIDirector.ActiveAIInfo
// 0x0008
struct FActiveAIInfo
{
	class AController*                                 Member;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAISpawnManager.PerPlayerMaxMonsters
// 0x0010
struct FPerPlayerMaxMonsters
{
	TArray< int >                                      MaxMonsters;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAISpawnManager.SpawnRateModifier
// 0x0010
struct FSpawnRateModifier
{
	TArray< float >                                    RateModifier;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAISpawnSquad.AISquadElement
// 0x000C
struct FAISquadElement
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Num;                                              		// 0x0001 (0x0001) [0x0000000000000000]              
	class UClass*                                      CustomClass;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAISpawnManager.DifficultyWaveInfo
// 0x0010
struct FDifficultyWaveInfo
{
	TArray< class UKFAIWaveInfo* >                     Waves;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAnim_ScaleRateBySpeed.KFScaleRateInfo
// 0x000C
struct FKFScaleRateInfo
{
	struct FName                                       OwnerClassName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              BaseSpeed;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAnim_TurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       TransName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAnimNotify_Decal.DecalData
// 0x001C
struct FDecalData
{
	DWORD                                              bIsValid : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInterface*                          DecalMaterial;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              Width;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Thickness;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	DWORD                                              bSkip_ForSlowPerf : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFAnimSeq_ByWeaponClass.WeaponClassNameInfo
// 0x0010
struct FWeaponClassNameInfo
{
	class UClass*                                      WeaponClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFAnimSeq_TurnInPlace.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxObject_TraderItems.STraderItemWeaponStats
// 0x0008
struct FSTraderItemWeaponStats
{
	unsigned char                                      StatType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              StatValue;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxObject_TraderItems.STraderItem
// 0x0094
struct FSTraderItem
{
	class UClass*                                      WeaponDef;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ClassName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       SingleClassName;                                  		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       DualClassName;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	TArray< class UClass* >                            AssociatedPerkClasses;                            		// 0x0020 (0x0010) [0x0000000000000000]              
	int                                                MaxSpareAmmo;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     SecondaryAmmoImagePath;                           		// 0x0034 (0x0010) [0x0000000000000000]              
	float                                              GroupPriority;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< struct FSTraderItemWeaponStats >           WeaponStats;                                      		// 0x0048 (0x0010) [0x0000000000000000]              
	int                                                WeaponUpgradeWeight[ 0x6 ];                       		// 0x0058 (0x0018) [0x0000000000000000]              
	float                                              WeaponUpgradeDmgMultiplier[ 0x6 ];                		// 0x0070 (0x0018) [0x0000000000000000]              
	unsigned char                                      InitialSpareMags;                                 		// 0x0088 (0x0001) [0x0000000000000000]              
	unsigned char                                      MagazineCapacity;                                 		// 0x0089 (0x0001) [0x0000000000000000]              
	unsigned char                                      BlocksRequired;                                   		// 0x008A (0x0001) [0x0000000000000000]              
	unsigned char                                      InitialSecondaryAmmo;                             		// 0x008B (0x0001) [0x0000000000000000]              
	unsigned char                                      MaxSecondaryAmmo;                                 		// 0x008C (0x0001) [0x0000000000000000]              
	unsigned char                                      TraderFilter;                                     		// 0x008D (0x0001) [0x0000000000000000]              
	unsigned char                                      AltTraderFilter;                                  		// 0x008E (0x0001) [0x0000000000000000]              
	unsigned char                                      InventoryGroup;                                   		// 0x008F (0x0001) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxMenu_Trader.SItemInformation
// 0x00BC
struct FSItemInformation
{
	DWORD                                              bIsSecondaryAmmo : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SpareAmmoCount;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxSpareAmmo;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaxSecondaryAmmo;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SellPrice;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SecondaryAmmoCount;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      MagazineCapacity;                                 		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                AutoFillDosh;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                AmmoPricePerMagazine;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FSTraderItem                                DefaultItem;                                      		// 0x0024 (0x0094) [0x0000000000000000]              
	int                                                ItemUpgradeLevel;                                 		// 0x00B8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFBossCamera.CameraOffsets
// 0x001C
struct FCameraOffsets
{
	struct FVector                                     ViewOffset;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotOffset;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                CameraDistance;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Human.SkinVariant
// 0x001C
struct FSkinVariant
{
	int                                                UnlockAssetID;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture*                                    UITexture;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	class UMaterialInstance*                           Skin;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	class UMaterialInstance*                           Skin1p;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Human.AttachmentOverrideList
// 0x0014
struct FAttachmentOverrideList
{
	DWORD                                              bHat : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bFace : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bEyes : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bJaw : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bArmband : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bBackpack : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	TArray< unsigned char >                            SpecialOverrideIds;                               		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Human.AttachmentVariants
// 0x00B8
struct FAttachmentVariants
{
	class UKFCharacterAttachment*                      AttachmentItem;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                UnlockAssetID;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UTexture*                                    UITexture;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	DWORD                                              bIsSkeletalAttachment : 1;                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bMaskHeadMesh : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     MeshName;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FString                                     MeshName1p;                                       		// 0x0030 (0x0010) [0x0000000000000000]              
	struct FName                                       SocketName1p;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeTranslation;                              		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FVector                                     RelativeScale;                                    		// 0x0060 (0x000C) [0x0000000000000000]              
	float                                              MaxDrawDistance;                                  		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                SkinMaterialID;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	TArray< struct FSkinVariant >                      SkinVariations;                                   		// 0x0074 (0x0010) [0x0000000000000000]              
	struct FAttachmentOverrideList                     OverrideList;                                     		// 0x0084 (0x0014) [0x0000000000000000]              
	TArray< unsigned char >                            SpecialOverrideIds;                               		// 0x0098 (0x0010) [0x0000000000000000]              
	TArray< class UKFCharacterAttachment* >            SpecialOverrideAttachments;                       		// 0x00A8 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Human.FirstPersonArmVariants
// 0x0020
struct FFirstPersonArmVariants
{
	struct FString                                     MeshName;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< class UMaterialInstance* >                 SkinVariants;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Human.OutfitVariants
// 0x0028
struct FOutfitVariants
{
	class UTexture*                                    UITexture;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     MeshName;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FSkinVariant >                      SkinVariations;                                   		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSkinTypeEffects.SkinEffectInfo
// 0x0028
struct FSkinEffectInfo
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class UParticleSystem*                             DefaultParticle;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	DWORD                                              bAttachParticle : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bAttachToHitLocation : 1;                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	class UAkEvent*                                    DefaultSound;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    LocalSound;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    LocalTakeHitSound;                                		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerReplicationInfo.CustomizationInfo
// 0x002C
struct FCustomizationInfo
{
	int                                                CharacterIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HeadMeshIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HeadSkinIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BodyMeshIndex;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BodySkinIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AttachmentMeshIndices[ 0x3 ];                     		// 0x0014 (0x000C) [0x0000000000000000]              
	int                                                AttachmentSkinIndices[ 0x3 ];                     		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Monster.ZedColorMod
// 0x0030
struct FZedColorMod
{
	struct FLinearColor                                MainColor;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                PatternColor;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                TrimColor;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Monster.StaticAttachments
// 0x001C
struct FStaticAttachments
{
	class UStaticMesh*                                 StaticAttachment;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AttachBoneName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Monster.DoorSoundFx
// 0x0010
struct FDoorSoundFx
{
	class UAkEvent*                                    Metal;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    Wood;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFCharacterInfo_Monster.MeleeSpecialDismembermentInfo
// 0x0020
struct FMeleeSpecialDismembermentInfo
{
	DWORD                                              bAllowHorizontalSplit : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       SpineBoneName;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	DWORD                                              bAllowVerticalSplit : 1;                          		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       LeftShoulderBoneName;                             		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       RightShoulderBoneName;                            		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.PerkInfo
// 0x0014
struct FPerkInfo
{
	class UClass*                                      PerkClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      PerkLevel;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      PrestigeLevel;                                    		// 0x0009 (0x0001) [0x0000000000000000]              
	class AKFPerk*                                     PerkArchetype;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPickupFactory_Item.ItemPickup
// 0x000C
struct FItemPickup
{
	class UClass*                                      ItemClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Priority;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFHUDBase.sHiddenHumanPawnInfo
// 0x0010
struct FsHiddenHumanPawnInfo
{
	class APawn*                                       HumanPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class APlayerReplicationInfo*                      HumanPRI;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDebugLines.DebugDrawInfo
// 0x0020
struct FDebugDrawInfo
{
	unsigned char                                      R;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      G;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      B;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	DWORD                                              bPersistent : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PersistentFrameCounter;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       OwnerName;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                DDID;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	DWORD                                              bHidden : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFDebugLines.DebugLine
// 0x001C(0x003C - 0x0020)
struct FDebugLine : FDebugDrawInfo
{
	struct FVector                                     Start;                                            		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     End;                                              		// 0x002C (0x000C) [0x0000000000000000]              
	DWORD                                              bDrawFromOwner : 1;                               		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDrawToOwner : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct KFGame.KFDebugLines.PawnDebugLine
// 0x0004(0x0040 - 0x003C)
struct FPawnDebugLine : FDebugLine
{
	DWORD                                              bDrawViewRotation : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDrawDesiredRotation : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct KFGame.KFDebugLines.DebugSphere
// 0x0014(0x0034 - 0x0020)
struct FDebugSphere : FDebugDrawInfo
{
	struct FVector                                     Center;                                           		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Segments;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDebugLines.DebugText3D
// 0x0040(0x0060 - 0x0020)
struct FDebugText3D : FDebugDrawInfo
{
	struct FVector                                     WorldPos;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     ScreenPos;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	struct FString                                     Text;                                             		// 0x0038 (0x0010) [0x0000000000000000]              
	DWORD                                              bUseDropShadow : 1;                               		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WorldTime;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              ZVelocity;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              ZOffset;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	class AActor*                                      Base;                                             		// 0x0058 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFOnlineStatsWrite.DailyEventInformation
// 0x0018
struct FDailyEventInformation
{
	unsigned char                                      ObjectiveType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SecondaryType;                                    		// 0x0001 (0x0001) [0x0000000000000000]              
	TArray< struct FName >                             ObjectiveClasses;                                 		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                CompletionAmount;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFTraderVoiceGroupBase.TraderDialogEventInfo
// 0x0018
struct FTraderDialogEventInfo
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    AudioCue;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x000C (0x0001) [0x0000000000000000]              
	float                                              Cooldown;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Chance;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.PlayerAvatarPS4
// 0x0028
struct FPlayerAvatarPS4
{
	struct FString                                     AvatarURL;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	class UKFHTTPImageDownloader*                      ImageDownLoader;                                  		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.PlayerSteamAvatar
// 0x0010
struct FPlayerSteamAvatar
{
	class UTexture2D*                                  Avatar;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.sSavedViewTargetInfo
// 0x001C
struct FsSavedViewTargetInfo
{
	class AActor*                                      SavedViewTarget;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SavedCameraMode;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FRotator                                    SavedRotation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.PlayerStats
// 0x0008
struct FPlayerStats
{
	int                                                PrimaryXP;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SecondaryXP;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.ObjectiveAnnouncementInfo
// 0x0018
struct FObjectiveAnnouncementInfo
{
	class USoundNodeWave*                              AnnouncementSound;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     AnnouncementText;                                 		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPlayerController.sPlayerZedSpawnInfo
// 0x0018
struct FsPlayerZedSpawnInfo
{
	class UClass*                                      PendingZedPawnClass;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     PendingZedSpawnLocation;                          		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              LastSpawnedTime;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.ReplicatedDamageModInfo
// 0x0008
struct FReplicatedDamageModInfo
{
	unsigned char                                      ObjIdx;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ModIdx;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	DWORD                                              bPartial : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFDestructibleActor.MaterialReplaceMod
// 0x000C
struct FMaterialReplaceMod
{
	class UMaterialInterface*                          NewMaterial;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                MaterialIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.MaterialScalarParamMod
// 0x0014
struct FMaterialScalarParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ParamName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              ScalarVal;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.MaterialTexParamMod
// 0x0018
struct FMaterialTexParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ParamName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	class UTexture*                                    NewTexture;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.MaterialVectorParamMod
// 0x0020
struct FMaterialVectorParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ParamName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                VectorVal;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.MaterialLightParamMod
// 0x0014
struct FMaterialLightParamMod
{
	int                                                MatID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	class ALight*                                      LightActor;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.ActorSpawnParams
// 0x0070
struct FActorSpawnParams
{
	class UStaticMesh*                                 RigidBodyMesh;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     MinLinearVel;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     MaxLinearVel;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     MinAngularVel;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     MaxAngularVel;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned char                                      CollisionType;                                    		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      RBChannel;                                        		// 0x0039 (0x0001) [0x0000000000000000]              
	struct FVector                                     RelativeOffset;                                   		// 0x003C (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0048 (0x000C) [0x0000000000000000]              
	float                                              LifeTimeSeconds;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDist;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	DWORD                                              bReplicated : 1;                                  		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FMaterialReplaceMod >               MaterialReplacements;                             		// 0x0060 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.DestroyedEffectParams
// 0x002C
struct FDestroyedEffectParams
{
	class UParticleSystem*                             ParticleEffect;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeOffset;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              MaxSpawnDist;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.ExplosionMod
// 0x0030
struct FExplosionMod
{
	class UKFGameExplosion*                            ExplosionTemplate;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x001C (0x000C) [0x0000000000000000]              
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.SplashDamageParams
// 0x001C
struct FSplashDamageParams
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.ObjDamageModifierDependency
// 0x0010
struct FObjDamageModifierDependency
{
	struct FName                                       DependentSubObjName;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                MaxHealthToAllow;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DependentSubObjIdx;                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDestructibleActor.LightDamageParams
// 0x001C
struct FLightDamageParams
{
	class ALight*                                      Light;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              MaxBrightness;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MinBrightness;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      AnimationType;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              AnimationFrequency;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	DWORD                                              bDisabled : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFDestructibleActor.ObjectDamageModifier
// 0x0110
struct FObjectDamageModifier
{
	struct FName                                       DamageModName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              HealthThreshold;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 NewMesh;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	TArray< struct FMaterialReplaceMod >               MaterialReplacements;                             		// 0x0014 (0x0010) [0x0000000000000000]              
	TArray< struct FMaterialScalarParamMod >           MaterialScalarParams;                             		// 0x0024 (0x0010) [0x0000000000000000]              
	TArray< struct FMaterialTexParamMod >              MaterialTexParams;                                		// 0x0034 (0x0010) [0x0000000000000000]              
	TArray< struct FMaterialVectorParamMod >           MaterialVectorParams;                             		// 0x0044 (0x0010) [0x0000000000000000]              
	TArray< class UAkBaseSoundObject* >                Sounds;                                           		// 0x0054 (0x0010) [0x0000000000000000]              
	DWORD                                              bSelfDestruct : 1;                                		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bSelfDestructAll : 1;                             		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bStopAmbientSound : 1;                            		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< struct FDestroyedEffectParams >            ParticleEffects;                                  		// 0x0068 (0x0010) [0x0000000000000000]              
	struct FSplashDamageParams                         SplashDamage;                                     		// 0x0078 (0x001C) [0x0000000000000000]              
	TArray< struct FActorSpawnParams >                 ActorsToSpawn;                                    		// 0x0094 (0x0010) [0x0000000000000000]              
	TArray< struct FObjDamageModifierDependency >      DependentSubObjs;                                 		// 0x00A4 (0x0010) [0x0000000000000000]              
	DWORD                                              bApplied : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                NextSpawnActorIdx;                                		// 0x00B8 (0x0004) [0x0000000000000000]              
	struct FExplosionMod                               ExploMod;                                         		// 0x00BC (0x0030) [0x0000000000000000]              
	TArray< class AStaticMeshActor* >                  BecomeDynamicActors;                              		// 0x00EC (0x0010) [0x0000000000000000]              
	TArray< struct FLightDamageParams >                LightParams;                                      		// 0x00FC (0x0010) [0x0000000000000000]              
	DWORD                                              bMeshBlockActors : 1;                             		// 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFDestructibleActor.DestructibleSubobject
// 0x0164
struct FDestructibleSubobject
{
	struct FName                                       SubObjName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	TArray< struct FObjectDamageModifier >             DamageMods;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	float                                              DefaultHealth;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FMaterialLightParamMod >            MaterialLightParams;                              		// 0x0024 (0x0010) [0x0000000000000000]              
	struct FObjectDamageModifier                       UndoMod;                                          		// 0x0034 (0x0110) [0x0000000000000000]              
	int                                                ActiveDamageModIdx;                               		// 0x0144 (0x0004) [0x0000000000000000]              
	class UClass*                                      LastHitDamageType;                                		// 0x0148 (0x0008) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         MICs;                                             		// 0x0150 (0x0010) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0160 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDialogManager.DialogCoolDownInfo
// 0x001C
struct FDialogCoolDownInfo
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class AKFPawn*                                     Speaker;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDialogManager.DelayedDialogInfo
// 0x0010
struct FDelayedDialogInfo
{
	class AKFPawn*                                     Speaker;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                EventID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawnVoiceGroupEventData.DialogEventInfo
// 0x0034
struct FDialogEventInfo
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Weight;                                           		// 0x0005 (0x0001) [0x0000000000000000]              
	float                                              Chance;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CoolDownTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CoolDownRadius;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              FOV;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	DWORD                                              bCanPlayAlone : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CoolDownCategory;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	DWORD                                              bOnlyPlayLocally : 1;                             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      bCanBeMinimized;                                  		// 0x002C (0x0001) [0x0000000000000000]              
	DWORD                                              bCanInterruptEqualPriority : 1;                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFPawn_Human.DialogResponseInfo
// 0x0018
struct FDialogResponseInfo
{
	class AKFPawn*                                     Speaker;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class AKFPawn*                                     RespondingToPawn;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                EventID;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RespondingToID;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeldableActor.FXTemplate
// 0x0020
struct FFXTemplate
{
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     RelativeOffset;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RelativeRotation;                                 		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFDoorActor.DoorMeshAttachment
// 0x0014
struct FDoorMeshAttachment
{
	class UStaticMeshComponent*                        Component;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AttachTo;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	DWORD                                              bSocketAttach : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFEmoteList.Emote
// 0x002C
struct FEmote
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FName                                       AnimName;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FString                                     IconPath;                                         		// 0x001C (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFLightPool.LightPoolInfo
// 0x0010
struct FLightPoolInfo
{
	class UPointLightComponent*                        Component;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	DWORD                                              bAllowReenable : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFImpactEffectInfo.MaterialImpactEffect
// 0x0044
struct FMaterialImpactEffect
{
	unsigned char                                      MaterialType;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	class UAkBaseSoundObject*                          Sound;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          StopSoundEvent;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0014 (0x0008) [0x0000000000000000]              
	TArray< class UMaterialInterface* >                DecalMaterials;                                   		// 0x001C (0x0010) [0x0000000000000000]              
	struct FName                                       DecalDissolveParamName;                           		// 0x002C (0x0008) [0x0000000000000000]              
	float                                              DecalDuration;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              DecalMinSize;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              DecalMaxSize;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	DWORD                                              bNoDecalRotation : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFExplosionLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Brightness;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameConductor.sLullInfo
// 0x0008
struct FsLullInfo
{
	float                                              MaxDuration;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Cooldown;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameDifficultyInfo.MapOverrideInfo
// 0x0014
struct FMapOverrideInfo
{
	struct FString                                     MapName;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                TraderTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameDifficultyInfo.DifficultySettings
// 0x0048
struct FDifficultySettings
{
	int                                                TraderTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              GlobalHealthMod;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MovementSpeedMod;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              WaveCountMod;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DoshKillMod;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                StartingDosh;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RespawnDosh;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              AmmoPickupsMod;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ItemPickupsMod;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              WeakAttackChance;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              MediumAttackChance;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              HardAttackChance;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              SelfInflictedDamageMod;                           		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              SpawnRateModifier;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	TArray< struct FMapOverrideInfo >                  TraderTimerMapOverride;                           		// 0x0038 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameDifficultyInfo.NumPlayerMods
// 0x001C
struct FNumPlayerMods
{
	float                                              PlayersMod[ 0x6 ];                                		// 0x0000 (0x0018) [0x0000000000000000]              
	float                                              ModCap;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFMonsterDifficultyInfo.ZedDifficultySettings
// 0x0064
struct FZedDifficultySettings
{
	float                                              HealthMod;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              HeadHealthMod;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SprintChance;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DamagedSprintChance;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DamageMod;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              SoloDamageMod;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ZedTimeSpeedScale;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MovementSpeedMod;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	struct FsEvadeOnDamageInfo                         EvadeOnDamageSettings;                            		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FsBlockInfo                                 BlockSettings;                                    		// 0x0030 (0x0024) [0x0000000000000000]              
	struct FsRallyInfo                                 RallySettings;                                    		// 0x0054 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameInfo.sGameMode
// 0x0030
struct FsGameMode
{
	struct FString                                     FriendlyName;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     ClassNameAndPath;                                 		// 0x0010 (0x0010) [0x0000000000000000]              
	DWORD                                              bSoloPlaySupported : 1;                           		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DifficultyLevels;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Lengths;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                LocalizeID;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameInfo.LateArrivalStart
// 0x0010
struct FLateArrivalStart
{
	TArray< int >                                      StartingDosh;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameInfo.KFPlayerReservation
// 0x000C
struct FKFPlayerReservation
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Timer;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameInfo.PlayerGroupStruct
// 0x0014
struct FPlayerGroupStruct
{
	unsigned char                                      Team;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      PlayerGroup;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFOutbreakEvent.SpawnReplacement
// 0x0010
struct FSpawnReplacement
{
	int                                                SpawnEntry;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      NewClass;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              PercentChance;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFOutbreakEvent.StatAdjustments
// 0x0074
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
	int                                                DoshGiven;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFOutbreakEvent.WeeklyOverrides
// 0x017C
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
	int                                                WeeklyOutbreakId;                                 		// 0x0178 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameReplicationInfo.PreGameServerAdInfo
// 0x0040
struct FPreGameServerAdInfo
{
	struct FString                                     BannerLink;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     ServerMOTD;                                       		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     WebsiteLink;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FString                                     ClanMotto;                                        		// 0x0030 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGamepadLayoutManager.GamepadButtonCommand
// 0x0018
struct FGamepadButtonCommand
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGamepadLayoutManager.GamepadLayout
// 0x0130
struct FGamepadLayout
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FGamepadButtonCommand                       ButtonCommands[ 0xC ];                            		// 0x0010 (0x0120) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameReplicationInfo.SpawnVolumeInfo
// 0x0015
struct FSpawnVolumeInfo
{
	struct FVector                                     VolumeLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              UsedTime;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	DWORD                                              bPortalSpawn : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      VolumeAge;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameReplicationInfo.ZedInfo
// 0x0040
struct FZedInfo
{
	struct FVector                                     ZedLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	class AKFPawn_Monster*                             Zed;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	class UClass*                                      ZedClass;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector                                     LastTeleportLocation;                             		// 0x001C (0x000C) [0x0000000000000000]              
	DWORD                                              bUsingSuperSpeed : 1;                             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     EnemyLocation;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	class AKFPawn*                                     Enemy;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameReplicationInfo.HumanInfo
// 0x001C
struct FHumanInfo
{
	struct FVector                                     HumanLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	class AKFPawn*                                     Human;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	class UClass*                                      HumanClass;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGameReplicationInfo.PickupInfo
// 0x0010
struct FPickupInfo
{
	struct FVector                                     PickupLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                PickupType;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFMapInfo.WaveObjectivePair
// 0x0014
struct FWaveObjectivePair
{
	TArray< class UKFInterface_MapObjective* >         PossibleObjectives;                               		// 0x0000 (0x0010) [0x0000000000000000]              
	DWORD                                              bUseEndlessSpawning : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFMapInfo.PresetWavePairs
// 0x01E0
struct FPresetWavePairs
{
	struct FWaveObjectivePair                          ShortObjectives[ 0x5 ];                           		// 0x0000 (0x0064) [0x0000000000000000]              
	struct FWaveObjectivePair                          MediumObjectives[ 0x8 ];                          		// 0x0064 (0x00A0) [0x0000000000000000]              
	struct FWaveObjectivePair                          LongObjectives[ 0xB ];                            		// 0x0104 (0x00DC) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxDailyObjectivesContainer.ObjectiveProgress
// 0x0008
struct FObjectiveProgress
{
	DWORD                                              bComplete : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                NumericValue;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxSpecialEventObjectivesContainer.SSpecialEventObjectiveInfo
// 0x0030
struct FSSpecialEventObjectiveInfo
{
	struct FString                                     TitleString;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     DescriptionString;                                		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     TierEventRewardName;                              		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxControlsContainer_ControllerPresets.KeyBinding
// 0x0030
struct FKeyBinding
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     HoldCommand;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxGearContainer_PerksSelection.PerkData
// 0x0018
struct UKFGFxGearContainer_PerksSelection_FPerkData
{
	struct FString                                     PerkTitle;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                PerkLevel;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PerkPercent;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxHUD_PlayerMoveList.HUDMoveInfo
// 0x0018
struct FHUDMoveInfo
{
	class UGFxObject*                                  GfxObj;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                AtkIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Cooldown;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Charges;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ButtonPriority;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxHud_PlayerRosterWidget.SZedPlayerInfo
// 0x0014
struct FSZedPlayerInfo
{
	struct FString                                     AvatarPath;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFTeamInfo_Human.sTeamScoreData
// 0x0014
struct FsTeamScoreData
{
	int                                                RoundScore;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WaveBonus;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BossDamageDone;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BossDamageTaken;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxMenu_Inventory.InventoryHelper
// 0x0014
struct FInventoryHelper
{
	int                                                ItemDefinition;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GfxItemObject;                                    		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeaponSkinList.WeaponSkin
// 0x003C
struct FWeaponSkin
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           MIC_1P;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     MIC_3P;                                           		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FString                                     MIC_Pickup;                                       		// 0x0024 (0x0010) [0x0000000000000000]              
	class UClass*                                      WeaponDef;                                        		// 0x0034 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFVoteCollector.sKickVoteInfo
// 0x0020
struct FsKickVoteInfo
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PlayerPRI;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerIPAddress;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFVoteCollector.MapVote
// 0x0014
struct FMapVote
{
	TArray< class APlayerReplicationInfo* >            VoterPRIList;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                MapIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFVoteCollector.TopVotes
// 0x0039
struct FTopVotes
{
	struct FString                                     Map1Name;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      Map1Votes;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	struct FString                                     Map2Name;                                         		// 0x0014 (0x0010) [0x0000000000000000]              
	unsigned char                                      Map2Votes;                                        		// 0x0024 (0x0001) [0x0000000000000000]              
	struct FString                                     Map3Name;                                         		// 0x0028 (0x0010) [0x0000000000000000]              
	unsigned char                                      Map3Votes;                                        		// 0x0038 (0x0001) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxStartGameContainer_FindGame.SWhatsNew
// 0x0040
struct FSWhatsNew
{
	struct FString                                     ImageURL;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     TextField;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     RedirectURL;                                      		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FString                                     PSNProductId;                                     		// 0x0030 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxMenu_Store.StoreItem
// 0x0040
struct FStoreItem
{
	int                                                SKU;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemDesciption;                                   		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     IconLocation;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0024 (0x0010) [0x0000000000000000]              
	float                                              ItemPrice;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FName                                       ItemType;                                         		// 0x0038 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFLocalMessage_Priority.SDelayedPriorityMessage
// 0x0025
struct FSDelayedPriorityMessage
{
	struct FString                                     InPrimaryMessageString;                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     InSecondaryMessageString;                         		// 0x0010 (0x0010) [0x0000000000000000]              
	int                                                Lifetime;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      MessageType;                                      		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxMoviePlayer_Manager.DelayedPopup
// 0x0094
struct FDelayedPopup
{
	DWORD                                              bShown : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Priority;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      PopUpType;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     TitleString;                                      		// 0x000C (0x0010) [0x0000000000000000]              
	struct FString                                     DescriptionString;                                		// 0x001C (0x0010) [0x0000000000000000]              
	struct FString                                     LeftButtonString;                                 		// 0x002C (0x0010) [0x0000000000000000]              
	struct FString                                     RightButtonString;                                		// 0x003C (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             LeftButtonDelegate;                               		// 0x004C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0050 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             RightButtonDelegate;                              		// 0x005C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FString                                     MiddleButtonString;                               		// 0x006C (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             MiddleButtonDelegate;                             		// 0x007C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       OverridingSoundEffect;                            		// 0x008C (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxMoviePlayer_Manager.SPopupData
// 0x0050
struct FSPopupData
{
	struct FString                                     SWFPath;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           TitleStrings;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           DescriptionStrings;                               		// 0x0020 (0x0010) [0x0000000000000000]              
	struct FString                                     LeftButtonString;                                 		// 0x0030 (0x0010) [0x0000000000000000]              
	struct FString                                     RightButtonString;                                		// 0x0040 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxMoviePlayer_Manager.SMenuPaths
// 0x0020
struct FSMenuPaths
{
	struct FString                                     BaseSWFPath;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     ConsoleSWFPath;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.ResolutionSetting
// 0x0008
struct FResolutionSetting
{
	int                                                ResX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ResY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.GraphicsQualitySetting
// 0x0038
struct FGraphicsQualitySetting
{
	int                                                EnvironmentDetailIndex;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CharacterDetailIndex;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FXQualityIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TextureResolutionIndex;                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TextureFilteringIndex;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ShadowQualityIndex;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RealtimeReflectionsIndex;                         		// 0x0018 (0x0004) [0x0000000000000000]              
	DWORD                                              LightShafts : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              VolumetricLighting : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              LensFlares : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                AntiAliasingIndex;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                BloomIndex;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MotionBlurIndex;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                AmbientOcclusionIndex;                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                DOFIndex;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                FlexIndex;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.DisplaySetting
// 0x0004
struct FDisplaySetting
{
	DWORD                                              Fullscreen : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              BorderlessWindow : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.VSyncSetting
// 0x0004
struct FVSyncSetting
{
	DWORD                                              VSync : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.VariableFramerateSetting
// 0x0004
struct FVariableFramerateSetting
{
	DWORD                                              VariableFrameRate : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.FilmGrainSetting
// 0x0004
struct FFilmGrainSetting
{
	float                                              FilmGrainScale;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.FlexSetting
// 0x0004
struct FFlexSetting
{
	int                                                FlexLevel;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.EnvironmentDetailSetting
// 0x0010
struct FEnvironmentDetailSetting
{
	int                                                DetailMode;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	DWORD                                              AllowLightFunctions : 1;                          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDisableCanBecomeDynamicWakeup : 1;               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MakeDynamicCollisionThreshold;                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DestructionLifetimeScale;                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.ShadowQualitySetting
// 0x0020
struct FShadowQualitySetting
{
	DWORD                                              bAllowWholeSceneDominantShadows : 1;              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bOverrideMapWholeSceneDominantShadowSetting : 1;  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bAllowDynamicShadows : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bAllowPerObjectShadows : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                MaxWholeSceneDominantShadowResolution;            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxShadowResolution;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ShadowFadeResolution;                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MinShadowResolution;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              ShadowTexelsPerPixel;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              GlobalShadowDistanceScale;                        		// 0x0018 (0x0004) [0x0000000000000000]              
	DWORD                                              AllowForegroundPreshadows : 1;                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.FXQualitySetting
// 0x0030
struct FFXQualitySetting
{
	int                                                ParticleLODBias;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DistanceFogQuality;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	DWORD                                              Distortion : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              FilteredDistortion : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              DropParticleDistortion : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              AllowSecondaryBloodEffects : 1;                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              EmitterPoolScale;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ShellEjectLifetime;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	DWORD                                              AllowExplosionLights : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              AllowSprayActorLights : 1;                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              AllowFootstepSounds : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              AllowBloodSplatterDecals : 1;                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              AllowRagdollAndGoreOnDeadBodies : 1;              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              AllowPilotLights : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                MaxImpactEffectDecals;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MaxExplosionDecals;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              GoreFXLifetimeMultiplier;                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MaxBloodEffects;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MaxGoreEffects;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MaxPersistentSplatsPerFrame;                      		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.RealtimeReflectionsSetting
// 0x0004
struct FRealtimeReflectionsSetting
{
	DWORD                                              bAllowScreenSpaceReflections : 1;                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.CharacterDetailSetting
// 0x001C
struct FCharacterDetailSetting
{
	int                                                SkeletalMeshLODBias;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	DWORD                                              AllowSubsurfaceScattering : 1;                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              KinematicUpdateDistFactorScale;                   		// 0x0008 (0x0004) [0x0000000000000000]              
	DWORD                                              ShouldCorpseCollideWithDead : 1;                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              ShouldCorpseCollideWithLiving : 1;                		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              ShouldCorpseCollideWithDeadAfterSleep : 1;        		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                MaxBodyWoundDecals;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxDeadBodies;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	DWORD                                              bAllowPhysics : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.LightShaftsSetting
// 0x0004
struct FLightShaftsSetting
{
	DWORD                                              bAllowLightShafts : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.VolumetricLightingSetting
// 0x0004
struct FVolumetricLightingSetting
{
	DWORD                                              bAllowLightCones : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.LensFlareSetting
// 0x0004
struct FLensFlareSetting
{
	DWORD                                              bAllowLensFlares : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.TextureResolutionSetting
// 0x001C
struct FTextureResolutionSetting
{
	int                                                UIBias;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ShadowmapBias;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CharacterBias;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Weapon1stBias;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Weapon3rdBias;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EnvironmentBias;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                FXBias;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.TextureFilterSetting
// 0x0014
struct FTextureFilterSetting
{
	struct FName                                       MinMagFilter;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       MipFilter;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                MaxAnisotropy;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.BloomSetting
// 0x0008
struct FBloomSetting
{
	DWORD                                              Bloom : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                BloomQuality;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.MotionBlurSetting
// 0x0008
struct FMotionBlurSetting
{
	DWORD                                              MotionBlur : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MotionBlurQuality;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.AntiAliasingSetting
// 0x0004
struct FAntiAliasingSetting
{
	DWORD                                              PostProcessAA : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.AmbientOcclusionSetting
// 0x0004
struct FAmbientOcclusionSetting
{
	DWORD                                              AmbientOcclusion : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              HBAO : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.DOFSetting
// 0x0008
struct FDOFSetting
{
	DWORD                                              DepthOfField : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DepthOfFieldQuality;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxOptionsMenu_Graphics.GFXSettings
// 0x00F8
struct FGFXSettings
{
	struct FResolutionSetting                          Resolution;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVSyncSetting                               VSync;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FDisplaySetting                             Display;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVariableFramerateSetting                   VariableFPS;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FFilmGrainSetting                           FilmGrain;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FFlexSetting                                Flex;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FEnvironmentDetailSetting                   EnvironmentDetail;                                		// 0x001C (0x0010) [0x0000000000000000]              
	struct FCharacterDetailSetting                     CharacterDetail;                                  		// 0x002C (0x001C) [0x0000000000000000]              
	struct FFXQualitySetting                           FX;                                               		// 0x0048 (0x0030) [0x0000000000000000]              
	struct FTextureResolutionSetting                   TextureResolution;                                		// 0x0078 (0x001C) [0x0000000000000000]              
	struct FTextureFilterSetting                       TextureFiltering;                                 		// 0x0094 (0x0014) [0x0000000000000000]              
	struct FShadowQualitySetting                       Shadows;                                          		// 0x00A8 (0x0020) [0x0000000000000000]              
	struct FRealtimeReflectionsSetting                 RealtimeReflections;                              		// 0x00C8 (0x0004) [0x0000000000000000]              
	struct FAntiAliasingSetting                        AntiAliasing;                                     		// 0x00CC (0x0004) [0x0000000000000000]              
	struct FBloomSetting                               Bloom;                                            		// 0x00D0 (0x0008) [0x0000000000000000]              
	struct FMotionBlurSetting                          MotionBlur;                                       		// 0x00D8 (0x0008) [0x0000000000000000]              
	struct FAmbientOcclusionSetting                    AmbientOcclusion;                                 		// 0x00E0 (0x0004) [0x0000000000000000]              
	struct FDOFSetting                                 DepthOfField;                                     		// 0x00E4 (0x0008) [0x0000000000000000]              
	struct FVolumetricLightingSetting                  VolumetricLighting;                               		// 0x00EC (0x0004) [0x0000000000000000]              
	struct FLensFlareSetting                           LensFlares;                                       		// 0x00F0 (0x0004) [0x0000000000000000]              
	struct FLightShaftsSetting                         LightShafts;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPerk.PassivePerk
// 0x0030
struct FPassivePerk
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FString                                     IconPath;                                         		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxPerksContainer_Selection.PerkData
// 0x0018
struct UKFGFxPerksContainer_Selection_FPerkData
{
	struct FString                                     PerkTitle;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                PerkLevel;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PerkPercent;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPerk.BuffedPlayerInfo
// 0x000C
struct FBuffedPlayerInfo
{
	int                                                PreBuffValue;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class AKFPawn_Human*                               BuffedPawn;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPerk.PerkSkill
// 0x0038
struct FPerkSkill
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              Increment;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Rank;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
	float                                              StartingValue;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MaxValue;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ModifierValue;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     IconPath;                                         		// 0x0024 (0x0010) [0x0000000000000000]              
	DWORD                                              bActive : 1;                                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFGFxServerBrowser_ServerList.ExtraServerInfo
// 0x0018
struct FExtraServerInfo
{
	DWORD                                              ServerHeardBackFrom : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              GameRunning : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              RequestDispatched : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                StartTimer;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Ping;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Survivors;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SurvivorsAvgLevel;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ZedPlayers;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFUnlockManager.SharedContent
// 0x001C
struct FSharedContent
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     IconPath;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxWidget_BaseParty.SMemberSlot
// 0x004C
struct FSMemberSlot
{
	DWORD                                              bIsReady : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bIsLeader : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     PerkLevel;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FString                                     PrestigeLevel;                                    		// 0x0014 (0x0010) [0x0000000000000000]              
	class UClass*                                      PerkClass;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  Avatar;                                           		// 0x002C (0x0008) [0x0000000000000000]              
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0034 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  MemberSlotObject;                                 		// 0x003C (0x0008) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0044 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGFxWidget_BossHealthBar.SCompressedArmorInfo
// 0x000C
struct FSCompressedArmorInfo
{
	float                                              Percentage;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  IconTexture;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.BloodJetSettings
// 0x0024
struct FBloodJetSettings
{
	DWORD                                              bAttachToSocket : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x000C (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            ConstrainToDamageGroups;                          		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.BloodTrailSettings
// 0x0024
struct FBloodTrailSettings
{
	DWORD                                              bAttachToSocket : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x000C (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            ConstrainToDamageGroups;                          		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.PartialBreakBone
// 0x0030
struct FPartialBreakBone
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FBloodJetSettings >                 BloodJets;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             BloodMICParamName;                                		// 0x0018 (0x0010) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.PartialBreakSettings
// 0x0030
struct FPartialBreakSettings
{
	TArray< struct FPartialBreakBone >                 PartialBreakBones;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            ConstrainToDamageGroups;                          		// 0x0010 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            KillingBlowDamageGroups;                          		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.ExplosionBreakBone
// 0x0038
struct FExplosionBreakBone
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FBloodJetSettings >                 BloodJets;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FBloodTrailSettings >               BloodTrails;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             BloodMICParamName;                                		// 0x0028 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.ExplosionBreakSettings
// 0x0028
struct FExplosionBreakSettings
{
	TArray< struct FExplosionBreakBone >               BreakBones;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x0010 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            ConstrainToDamageGroups;                          		// 0x0018 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.DependentBreakBone
// 0x0040
struct FDependentBreakBone
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FBloodJetSettings >                 BloodJets;                                        		// 0x0008 (0x0010) [0x0000000000000000]              
	TArray< struct FBloodTrailSettings >               BloodTrails;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             BloodMICParamName;                                		// 0x0028 (0x0010) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x0038 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.DependentBreakSettings
// 0x0020
struct FDependentBreakSettings
{
	TArray< struct FDependentBreakBone >               DependentBones;                                   		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            ConstrainToDamageGroups;                          		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreJointInfo.DismembermentEffect
// 0x0018
struct FDismembermentEffect
{
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            ConstrainToDamageGroups;                          		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFGoreManager.PersistentSplatInfo
// 0x0024
struct FPersistentSplatInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Normal;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	DWORD                                              bRandomize : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TraceLength;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFHeadShotEffectList.HeadshotEffect
// 0x0034
struct FHeadshotEffect
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
	class UParticleSystem*                             EffectPS;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FString                                     IconPath;                                         		// 0x001C (0x0010) [0x0000000000000000]              
	class UAkEvent*                                    HeadshotSoundEffect;                              		// 0x002C (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFInventoryCatalog.ItemCatalogEntry
// 0x0011
struct FItemCatalogEntry
{
	int                                                ContainerId;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                KeyId;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       ItemSeriesName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      ContainerType;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFInventoryManager.TransactionItem
// 0x0028
struct FTransactionItem
{
	struct FString                                     DLOString;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       ClassName;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                AddedAmmo[ 0x2 ];                                 		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                AddedWeight;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                WeaponUpgradeLevel;                               		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeapon.WeaponUpgradeInfo
// 0x0010
struct FWeaponUpgradeInfo
{
	int                                                IncrementWeight;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              IncrementDamage;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              IncrementHeal;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              IncrementHealFullRecharge;                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFLEDEffectsManager.S_LightingFrame
// 0x0008
struct FS_LightingFrame
{
	unsigned char                                      Red;                                              		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Green;                                            		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Blue;                                             		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      Brightness;                                       		// 0x0003 (0x0001) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFMapTravelData.sPersistentPlayerData
// 0x001C
struct FsPersistentPlayerData
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TeamIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Dosh;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                DamageDealt;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFMeleeHelperBase.MeleeHitboxInfo
// 0x0018
struct FMeleeHitboxInfo
{
	struct FVector                                     BoneOffset;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastLoc;                                          		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFMeleeHelperAI.SwipeHitActorData
// 0x000C
struct FSwipeHitActorData
{
	class AKFPawn*                                     HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              LastHitTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFMeleeHelperAI.DelayedMeleeInfo
// 0x001C
struct FDelayedMeleeInfo
{
	class APawn*                                       Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TimeOfDamage;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFMuzzleFlash.MuzzleEffectInfo
// 0x0040
struct FMuzzleEffectInfo
{
	class UKFExplosionLight*                           LightTemplate;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x0008 (0x0008) [0x0000000000000000]              
	DWORD                                              bPSCLoops : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bIgnoreStopFire : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              Duration;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      FirstPersonDepthPriorityGroup;                    		// 0x0020 (0x0001) [0x0000000000000000]              
	struct FName                                       TimerName;                                        		// 0x0024 (0x0008) [0x0000000000000000]              
	class UKFParticleSystemComponent*                  PSC;                                              		// 0x002C (0x0008) [0x0000000000000000]              
	class UKFExplosionLightComponent*                  LightComponent;                                   		// 0x0034 (0x0008) [0x0000000000000000]              
	DWORD                                              bIsActive : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct KFGame.KFOutbreakEvent.CachedOutbreakInfo
// 0x001C
struct FCachedOutbreakInfo
{
	class UKFGFxObject_TraderItems*                    TraderItems;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              GameAmmoCostScale;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	DWORD                                              bAllowGrenadePurchase : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bTradersEnabled : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      MaxPerkLevel;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              CachedWorldGravityZ;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              CachedGlobalGravityZ;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_Customization.sReplicatedMovementData
// 0x0018
struct FsReplicatedMovementData
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    NewRotation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawn_MonsterBoss.BossMinionWaveInfo
// 0x0020
struct FBossMinionWaveInfo
{
	class UKFAIWaveInfo*                               PhaseOneWave;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UKFAIWaveInfo*                               PhaseTwoWave;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	class UKFAIWaveInfo*                               PhaseThreeWave;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	class UKFAIWaveInfo*                               PhaseFourWave;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPawnVoiceGroup.DialogEventLineInfo
// 0x0010
struct FDialogEventLineInfo
{
	class UAkEvent*                                    DefaultAudioCue;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    TraderTimeAudioCue;                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFPerk_Support.sSuppliedPawnInfo
// 0x000C
struct FsSuppliedPawnInfo
{
	class AKFPawn_Human*                               SuppliedPawn;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bSuppliedAmmo : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bSuppliedArmor : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct KFGame.KFProfileSettings.WeaponSkinPairs
// 0x0014
struct FWeaponSkinPairs
{
	struct FString                                     ClassPath;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	int                                                SkinID;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFProjectile.TouchInfo
// 0x000C
struct FTouchInfo
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFProj_RicochetStickBullet.StickInfo
// 0x002C
struct FStickInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     RayDir;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFReverbVolume.WWiseEnvironmentSettings
// 0x000C
struct FWWiseEnvironmentSettings
{
	unsigned char                                      EnvironmentID;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              EnvironmentValue;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFReverbVolume.WwiseStateSettings
// 0x0010
struct FWwiseStateSettings
{
	struct FName                                       StateGroupName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       StateName;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSkelControl_SprayScaling.SprayScaleInParams
// 0x0014
struct FSprayScaleInParams
{
	struct FVector2D                                   ScaleInTimeRange;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ScaleRange;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              Pow;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSkelControl_SprayScaling.SprayVelocityScaleParams
// 0x0014
struct FSprayVelocityScaleParams
{
	struct FVector2D                                   VelocityRange;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ScaleRange;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              Pow;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSkelControl_SprayScaling.SprayBoneScaleParams
// 0x003C
struct FSprayBoneScaleParams
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              CachedBoneIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	DWORD                                              bScaleIn : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSprayScaleInParams                         ScaleInParams;                                    		// 0x0010 (0x0014) [0x0000000000000000]              
	DWORD                                              bScaleWithVelocity : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSprayVelocityScaleParams                   VelocityScaleParams;                              		// 0x0028 (0x0014) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSM_PlayerMeleeBase.PlayerZedAtkInfo
// 0x0020
struct FPlayerZedAtkInfo
{
	TArray< struct FName >                             Anims;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
	DWORD                                              bIsInputHeld : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Type;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      Stance;                                           		// 0x0015 (0x0001) [0x0000000000000000]              
	float                                              MomentumPush;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	DWORD                                              bForceDisableRootMotion : 1;                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bCannotBeParried : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct KFGame.KFSprayActor.SprayBoneInfo
// 0x004C
struct FSprayBoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              MaterialParam;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BoneScale;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              EffectScale;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate;                           		// 0x0018 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemTemplate1P;                         		// 0x0020 (0x0008) [0x0000000000000000]              
	class UKFParticleSystemComponent*                  BonePSC0;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	class UKFParticleSystemComponent*                  BonePSC1;                                         		// 0x0030 (0x0008) [0x0000000000000000]              
	float                                              SeedChainLoc;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastLoc;                                          		// 0x003C (0x000C) [0x0000000000000000]              
	float                                              ParticleActivationDelay;                          		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSprayActor.SprayFxInfo
// 0x0010
struct FSprayFxInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSprayActor.SprayLight
// 0x0018
struct FSprayLight
{
	class UPointLightComponent*                        Light;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                BoneChainIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              FlickerIntensity;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              FlickerInterpSpeed;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LastLightBrightness;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSprayActor.DamagedActorInfo
// 0x0010
struct FDamagedActorInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              RemainingDamage;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSprayActor.SprayMeshContact
// 0x0034
struct FSprayMeshContact
{
	int                                                BoneChainIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     ContactPosition;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     ContactNormal;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x002C (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFSprayActor.SpraySeed
// 0x001C
struct FSpraySeed
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Age;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFTraderDialogManager.TraderDialogCoolDownInfo
// 0x000C
struct FTraderDialogCoolDownInfo
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeapon.WeaponFireSndInfo
// 0x0010
struct FWeaponFireSndInfo
{
	class UAkEvent*                                    DefaultCue;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    FirstPersonCue;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeapon.ImpactRepInfo
// 0x0028
struct FImpactRepInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     RayDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FName                                       HitInfo_BoneName;                                 		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeap_PistolBase.CylinderRotationInfo
// 0x0020
struct FCylinderRotationInfo
{
	float                                              InC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PrevDegrees;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              NextDegrees;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Timer;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      Control;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                State;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeap_FlameBase.PilotLight
// 0x001C
struct AKFWeap_FlameBase_FPilotLight
{
	class UPointLightComponent*                        Light;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       LightAttachBone;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              FlickerIntensity;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FlickerInterpSpeed;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              LastLightBrightness;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeap_MeleeBase.BlockEffectInfo
// 0x0028
struct FBlockEffectInfo
{
	class UClass*                                      dmgType;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    BlockSound;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    ParrySound;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BlockParticleSys;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParryParticleSys;                                 		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeaponAttachment.KFTracerInfo
// 0x0020
struct FKFTracerInfo
{
	class UParticleSystem*                             TracerTemplate;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TracerVelocity;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	DWORD                                              bDoTracerDuringNormalTime : 1;                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDoTracerDuringZedTime : 1;                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                MinTracerEffectDistanceSquared;                   		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     VelocityVector;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFWeapAttach_SprayBase.PilotLight
// 0x001C
struct AKFWeapAttach_SprayBase_FPilotLight
{
	class UPointLightComponent*                        Light;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       LightAttachBone;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              FlickerIntensity;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FlickerInterpSpeed;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              LastLightBrightness;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct KFGame.KFZedArmorInfo.ArmorZoneInfo
// 0x0030
struct FArmorZoneInfo
{
	struct FName                                       ArmorZoneName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                ArmorHealth;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ArmorHealthMax;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ExplosionTemplate;                                		// 0x0018 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    ExplosionSFXTemplate;                             		// 0x0020 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  ZoneIcon;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct KFGame.Path_AroundDestructibles.DestructiblesInfo
// 0x000C
struct FDestructiblesInfo
{
	class AKFDestructibleActor*                        KFDA;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bBumpDamageFromStandardZeds : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bBumpDamageFromLargeZeds : 1;                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif