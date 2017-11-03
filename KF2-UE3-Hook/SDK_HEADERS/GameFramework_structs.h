/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_structs.h
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

// ScriptStruct GameFramework.GameTypes.AgentArchetypeInfo
// 0x0024
struct FAgentArchetypeInfo
{
	class UObject*                                     AgentArchetype;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              FrequencyModifier;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaxAllowed;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                CurrSpawned;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< class UObject* >                           GroupMembers;                                     		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.CrowdSpawnInfoItem
// 0x0090
struct FCrowdSpawnInfoItem
{
	class USeqAct_GameCrowdPopulationManagerToggle*    SeqSpawner;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bSpawningActive : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SpawnRate;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SpawnNum;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Remainder;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdAgent* >                   ActiveAgents;                                     		// 0x0018 (0x0010) [0x0000000000000000]              
	TArray< struct FAgentArchetypeInfo >               AgentArchetypes;                                  		// 0x0028 (0x0010) [0x0000000000000000]              
	float                                              AgentFrequencySum;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDist;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDistSq;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              MinBehindSpawnDist;                               		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              MinBehindSpawnDistSq;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              AgentWarmupTime;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	DWORD                                              bForceObstacleChecking : 1;                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bForceNavMeshPathing : 1;                         		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bEnableCrowdLightEnvironment : 1;                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bCastShadows : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                NumAgentsToTickPerFrame;                          		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                LastAgentTickedIndex;                             		// 0x005C (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x0060 (0x0010) [0x0000000000000000]              
	float                                              SpawnPrioritizationInterval;                      		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                PrioritizationIndex;                              		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                PrioritizationUpdateIndex;                        		// 0x0078 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             PrioritizedSpawnPoints;                           		// 0x007C (0x0010) [0x0000000000000000]              
	float                                              PlayerPositionPredictionTime;                     		// 0x008C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.CrowdSpawnerPlayerInfo
// 0x002C
struct FCrowdSpawnerPlayerInfo
{
	struct FVector                                     ViewLocation;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ViewRotation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     PredictLocation;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	class APlayerController*                           PC;                                               		// 0x0024 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.NearbyDynamicItem
// 0x0008
struct FNearbyDynamicItem
{
	class AActor*                                      Dynamic;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.AICmdHistoryItem
// 0x001C
struct FAICmdHistoryItem
{
	class UClass*                                      CmdClass;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     VerboseString;                                    		// 0x000C (0x0010) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.SpecialMoveStruct
// 0x001C
struct FSpecialMoveStruct
{
	struct FName                                       SpecialMoveName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class AGamePawn*                                   InteractionPawn;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	class AActor*                                      InteractionActor;                                 		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                Flags;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.GameSpecialMoveInfo
// 0x0018
struct FGameSpecialMoveInfo
{
	struct FName                                       SpecialMoveName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      SpecialMoveClass;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	class UGameSpecialMove*                            SpecialMoveInstance;                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x0044
struct FTakeHitInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	class APawn*                                       InstigatedBy;                                     		// 0x0020 (0x0008) [0x0000000000000000]              
	unsigned char                                      HitBoneIndex;                                     		// 0x0028 (0x0001) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x002C (0x0008) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     RadialDamageOrigin;                               		// 0x0038 (0x000C) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeStruct
// 0x0078
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                RotParam;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	struct FVector                                     LocAmplitude;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocFrequency;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     LocSinOffset;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FShakeParams                                LocParam;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              FOVAmplitude;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              FOVFrequency;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              FOVSinOffset;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      FOVParam;                                         		// 0x0064 (0x0001) [0x0000000000000000]              
	struct FName                                       ShakeName;                                        		// 0x0068 (0x0008) [0x0000000000000000]              
	DWORD                                              bOverrideTargetingDampening : 1;                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TargetingDampening;                               		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeAnimStruct
// 0x0040
struct FScreenShakeAnimStruct
{
	class UCameraAnim*                                 Anim;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bUseDirectionalAnimVariants : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class UCameraAnim*                                 Anim_Left;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 Anim_Right;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 Anim_Rear;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	float                                              AnimPlayRate;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              AnimScale;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              AnimBlendInTime;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              AnimBlendOutTime;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	DWORD                                              bRandomSegment : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RandomSegmentDuration;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	DWORD                                              bSingleInstance : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GameFramework.GameCrowdAgent.AvoidOtherSampleItem
// 0x000C
struct FAvoidOtherSampleItem
{
	int                                                RotOffset;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      NumMagSamples;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	DWORD                                              bFallbackOnly : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GameFramework.GameCrowdAgent.RecentInteraction
// 0x000C
struct FRecentInteraction
{
	struct FName                                       InteractionTag;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              InteractionDelay;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameCrowdAgent.BehaviorEntry
// 0x0018
struct FBehaviorEntry
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      LookAtActor;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              BehaviorFrequency;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	DWORD                                              bNeverRepeat : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bHasBeenUsed : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bCanBeUsed : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct GameFramework.FrameworkGame.RequiredMobileInputConfig
// 0x0024
struct FRequiredMobileInputConfig
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           RequireZoneNames;                                 		// 0x0010 (0x0010) [0x0000000000000000]              
	DWORD                                              bIsAttractModeGroup : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentInfo
// 0x0018
struct FGameCrowdAttachmentInfo
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Chance;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     Scale3D;                                          		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentList
// 0x0018
struct FGameCrowdAttachmentList
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FGameCrowdAttachmentInfo >          List;                                             		// 0x0008 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeDuration;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     RotAmplitude;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotFrequency;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotSinOffset;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               RotParams;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	struct FRotator                                    RotOffset;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocAmplitude;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     LocFrequency;                                     		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocSinOffset;                                     		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FRecoilParams                               LocParams;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FVector                                     LocOffset;                                        		// 0x0064 (0x000C) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStateObject.TeamState
// 0x0014
struct FTeamState
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      PlayerIndices;                                    		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStateObject.PlayerState
// 0x0010
struct FPlayerState
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CurrentTeamIndex;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeSpawned;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeAliveSinceLastDeath;                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvents
// 0x0048
struct FGameEvents
{
	struct FMap_Mirror                                 Events;                                           		// 0x0000 (0x0048) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.EventsBase
// 0x0058
struct FEventsBase
{
	struct FGameEvents                                 TotalEvents;                                      		// 0x0000 (0x0048) [0x0000000000000000]              
	TArray< struct FGameEvents >                       EventsByClass;                                    		// 0x0048 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.WeaponEvents
// 0x0000(0x0058 - 0x0058)
struct FWeaponEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.ProjectileEvents
// 0x0000(0x0058 - 0x0058)
struct FProjectileEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.DamageEvents
// 0x0000(0x0058 - 0x0058)
struct FDamageEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvent
// 0x0010
struct FGameEvent
{
	TArray< float >                                    EventCountByTimePeriod;                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.PawnEvents
// 0x0000(0x0058 - 0x0058)
struct FPawnEvents : FEventsBase
{
};

// ScriptStruct GameFramework.GameStatsAggregator.TeamEvents
// 0x0200
struct FTeamEvents
{
	struct FGameEvents                                 TotalEvents;                                      		// 0x0000 (0x0048) [0x0000000000000000]              
	struct FWeaponEvents                               WeaponEvents;                                     		// 0x0048 (0x0058) [0x0000000000000000]              
	struct FDamageEvents                               DamageAsPlayerEvents;                             		// 0x00A0 (0x0058) [0x0000000000000000]              
	struct FDamageEvents                               DamageAsTargetEvents;                             		// 0x00F8 (0x0058) [0x0000000000000000]              
	struct FProjectileEvents                           ProjectileEvents;                                 		// 0x0150 (0x0058) [0x0000000000000000]              
	struct FPawnEvents                                 PawnEvents;                                       		// 0x01A8 (0x0058) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.PlayerEvents
// 0x0200
struct FPlayerEvents
{
	struct FGameEvents                                 TotalEvents;                                      		// 0x0000 (0x0048) [0x0000000000000000]              
	struct FWeaponEvents                               WeaponEvents;                                     		// 0x0048 (0x0058) [0x0000000000000000]              
	struct FDamageEvents                               DamageAsPlayerEvents;                             		// 0x00A0 (0x0058) [0x0000000000000000]              
	struct FDamageEvents                               DamageAsTargetEvents;                             		// 0x00F8 (0x0058) [0x0000000000000000]              
	struct FProjectileEvents                           ProjectileEvents;                                 		// 0x0150 (0x0058) [0x0000000000000000]              
	struct FPawnEvents                                 PawnEvents;                                       		// 0x01A8 (0x0058) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameStatsAggregator.AggregateEventMapping
// 0x000C
struct FAggregateEventMapping
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AggregateID;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TargetAggregateID;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameThirdPersonCamera.CamFocusPointParams
// 0x0038
struct FCamFocusPointParams
{
	class AActor*                                      FocusActor;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       FocusBoneName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector                                     FocusWorldLoc;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              CameraFOV;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   InterpSpeedRange;                                 		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   InFocusFOV;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
	DWORD                                              bAlwaysFocus : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bAdjustCamera : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bIgnoreTrace : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              FocusPitchOffsetDeg;                              		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameThirdPersonCamera.PenetrationAvoidanceFeeler
// 0x0028
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              WorldWeight;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PawnWeight;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     Extent;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
	int                                                TraceInterval;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                FramesUntilNextTrace;                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameThirdPersonCameraMode.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     OffsetMid;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     OffsetLow;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobileInputZone.TextureUVs
// 0x0010
struct FTextureUVs
{
	float                                              U;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchDataEvent
// 0x0014
struct FTouchDataEvent
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TouchpadIndex;                                    		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   Location;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FDouble                                     DeviceTime;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchData
// 0x0050
struct FTouchData
{
	int                                                Handle;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      TouchpadIndex;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FVector2D                                   Location;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              TotalMoveDistance;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FDouble                                     InitialDeviceTime;                                		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              TouchDuration;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	struct FDouble                                     MoveEventDeviceTime;                              		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              MoveDeltaTime;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	DWORD                                              bInUse : 1;                                       		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	class UMobileInputZone*                            Zone;                                             		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0038 (0x0001) [0x0000000000000000]              
	TArray< struct FTouchDataEvent >                   Events;                                           		// 0x003C (0x0010) [0x0000000000000000]              
	float                                              LastActiveTime;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputGroup
// 0x0020
struct FMobileInputGroup
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	TArray< class UMobileInputZone* >                  AssociatedZones;                                  		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputZoneClassMap
// 0x0018
struct FMobileInputZoneClassMap
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	class UClass*                                      ClassType;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobileMenuObject.UVCoords
// 0x0014
struct FUVCoords
{
	DWORD                                              bCustomCoords : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              U;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobileMenuInventory.RenderElementInfo
// 0x0008
struct FRenderElementInfo
{
	DWORD                                              bIsDragItem : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobileMenuInventory.DragElementInfo
// 0x0025
struct FDragElementInfo
{
	DWORD                                              bIsDragging : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                IndexFrom;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	DWORD                                              bIsOver : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                IndexOver;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	DWORD                                              bCanDropInOver : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector2D                                   OrigTouch;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   CurTouch;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	unsigned char                                      EventType;                                        		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobileMenuList.SelectedMenuItem
// 0x000C
struct FSelectedMenuItem
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Offset;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	DWORD                                              bEndOfList : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GameFramework.MobileMenuList.DragHistoryData
// 0x0008
struct FDragHistoryData
{
	float                                              TouchTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TouchCoord;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.MobileMenuList.MenuListDragInfo
// 0x0054
struct FMenuListDragInfo
{
	DWORD                                              bIsDragging : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMobileMenuListItem*                         TouchedItem;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FSelectedMenuItem                           OrigSelectedItem;                                 		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector2D                                   StartTouch;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              TouchTime;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              ScrollAmount;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              AbsScrollAmount;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FDragHistoryData                            UpdateHistory[ 0x4 ];                             		// 0x002C (0x0020) [0x0000000000000000]              
	int                                                NumUpdates;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	DWORD                                              bHasSelectedChanged : 1;                          		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GameFramework.MobileMenuList.MenuListMovementInfo
// 0x001C
struct FMenuListMovementInfo
{
	DWORD                                              bIsMoving : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSelectedMenuItem                           OrigSelectedItem;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              FullMovement;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              TotalTime;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              CurrentTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x001C
struct FPropertyInfo
{
	struct FName                                       PropertyName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	DWORD                                              bModifyProperty : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PropertyValue;                                    		// 0x000C (0x0010) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif