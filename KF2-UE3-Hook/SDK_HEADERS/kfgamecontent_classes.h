/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: kfgamecontent_classes.h
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

#define CONST_MaxPhases                                          4
#define CONST_ObjectiveChance                                    0.5f
#define CONST_MAX_ACTIVE_PUKE_MINES                              30
#define CONST_FriendlyZedInfoShowDistanceSQ                      562000
#define CONST_BackpackZoneIndex                                  3
#define CONST_MINMINEFLOORZ                                      0.8f
#define CONST_EquipGunsAnim                                      'Equip_Gun'
#define CONST_PutAwayGunsAnim                                    'PutAway_Gun'
#define CONST_DAMAGE_COUNT_PER_SCREAM                            4
#define CONST_SecondaryReloadAnim                                'Reload_Secondary'
#define CONST_CH_SecondaryReloadAnim                             'Reload_Secondary_CH'
#define CONST_SecondaryReloadEliteAnim                           'Reload_Secondary_Elite'
#define CONST_CH_SecondaryReloadEliteAnim                        'Reload_Secondary_Elite_CH'
#define CONST_SecondaryFireAnim                                  'Shoot_Secondary'
#define CONST_SecondaryFireIronAnim                              'Shoot_Secondary_Iron'
#define CONST_SecondaryReloadAnim_Elite                          'Reload_Secondary_Elite'
#define CONST_ShootDartAnim                                      'Shoot_Dart'
#define CONST_ShootDartIronAnim                                  'Shoot_Iron_Dart'
#define CONST_PulverizerShoot_F                                  'Atk_F_Shoot'
#define CONST_PulverizerShoot_B                                  'Atk_B_Shoot'
#define CONST_PulverizerShoot_L                                  'Atk_L_Shoot'
#define CONST_PulverizerShoot_R                                  'Atk_R_Shoot'
#define CONST_CH_PulverizerShoot_F                               'Atk_F_Shoot_CH'
#define CONST_CH_PulverizerShoot_B                               'Atk_B_Shoot_CH'
#define CONST_CH_PulverizerShoot_L                               'Atk_L_Shoot_CH'
#define CONST_CH_PulverizerShoot_R                               'Atk_R_Shoot_CH'
#define CONST_ShootAnim_L                                        'HardFire_L'
#define CONST_ShootAnim_R                                        'HardFire_R'
#define CONST_ShootAnim_F                                        'HardFire_F'
#define CONST_ShootAnim_B                                        'HardFire_B'
#define CONST_WeaponShoot                                        'Shoot'
#define CONST_IdleNoGasAnim                                      'Idle_NoGas'
#define CONST_BlockLoopNoGasAnim                                 'Brace_loop_NoGas'
#define CONST_ReloadLowAmmoAnim                                  'Reload_Empty_Half'
#define CONST_ReloadLowAmmoEliteAnim                             'Reload_Empty_Half_Elite'
#define CONST_MAX_LOCKED_TARGETS                                 6
#define CONST_ThrowAnim                                          'C4_Throw'
#define CONST_CrouchThrowAnim                                    'C4_Throw_CH'
#define CONST_DetonateAnim                                       'Shoot'
#define CONST_CrouchDetonateAnim                                 'CH_Shoot'
#define CONST_DETONATE_FIREMODE                                  5

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum kfgamecontent.KFGameInfo_Survival.EWaveEndCondition
/*enum EWaveEndCondition
{
	WEC_WaveWon                                        = 0,
	WEC_TeamWipedOut                                   = 1,
	WEC_GameWon                                        = 2,
	WEC_MAX                                            = 3
};*/

// Enum kfgamecontent.KFGameInfo_WeeklySurvival.BeefcakeType
/*enum BeefcakeType
{
	EBT_Damage                                         = 0,
	EBT_Rally                                          = 1,
	EBT_Scream                                         = 2,
	EBT_StalkerPoison                                  = 3,
	EBT_MAX                                            = 4
};*/

// Enum kfgamecontent.KFGameInfo_WeeklySurvival.PickupResetTime
/*enum PickupResetTime
{
	PRS_Wave                                           = 0,
	PRS_Trader                                         = 1,
	PRS_WaveAndTrader                                  = 2,
	PRS_Never                                          = 3,
	PRS_MAX                                            = 4
};*/

// Enum kfgamecontent.KFMG_BloatDunk.eBloatGameState
/*enum eBloatGameState
{
	BGS_Off                                            = 0,
	BGS_On                                             = 1,
	BGS_Victory                                        = 2,
	BGS_Defeat                                         = 3,
	BGS_MAX                                            = 4
};*/

// Enum kfgamecontent.KFMG_RiggedTargetGame.eAnimationState
/*enum eAnimationState
{
	EAS_Closed                                         = 0,
	EAS_Open                                           = 1,
	EAS_Active                                         = 2,
	EAS_Idle                                           = 3,
	EAS_Close                                          = 4,
	EAS_MAX                                            = 5
};*/

// Enum kfgamecontent.KFProj_Thrown_C4.EImpactResult
/*enum EImpactResult
{
	EIR_None                                           = 0,
	EIR_Stick                                          = 1,
	EIR_Bounce                                         = 2,
	EIR_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class kfgamecontent.AICommand_Base_Patriarch
// 0x0000 (0x00E8 - 0x00E8)
class UAICommand_Base_Patriarch : public UAICommand_Base_Boss
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110573 ];

		return pClassPointer;
	};

};

UClass* UAICommand_Base_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedPatriarch
// 0x0110 (0x0BD4 - 0x0AC4)
class AKFAIController_ZedPatriarch : public AKFAIController_ZedBoss
{
public:
	class AKFPawn_ZedPatriarch*                        MyPatPawn;                                        		// 0x0AC4 (0x0008) [0x0000000000000000]              
	DWORD                                              bCanEvaluateAttacks : 1;                          		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDoingChargeAttack : 1;                           		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bWantsToCharge : 1;                               		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bHadMinigunAttack : 1;                            		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bSprintUntilAttack : 1;                           		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bRaging : 1;                                      		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000020] 
	DWORD                                              bRagedThisPhase : 1;                              		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000040] 
	DWORD                                              bWantsToFlee : 1;                                 		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000080] 
	DWORD                                              bFleeing : 1;                                     		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000100] 
	DWORD                                              bFleeInterrupted : 1;                             		// 0x0ACC (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              LostSightSprintDelay;                             		// 0x0AD0 (0x0004) [0x0000000000000000]              
	float                                              AggroFalloffWaitTime;                             		// 0x0AD4 (0x0004) [0x0000000000000000]              
	float                                              AggroFalloffPerSecond;                            		// 0x0AD8 (0x0004) [0x0000000000000000]              
	float                                              VisibleAggroDmgThreshold;                         		// 0x0ADC (0x0004) [0x0000000000000000]              
	float                                              HiddenAggroDmgThreshold;                          		// 0x0AE0 (0x0004) [0x0000000000000000]              
	TArray< struct FPatriarch_TrackedEnemyInfo >       RecentlySeenEnemyList;                            		// 0x0AE4 (0x0010) [0x0000000000000000]              
	TArray< struct FPatriarch_TrackedEnemyInfo >       HiddenEnemies;                                    		// 0x0AF4 (0x0010) [0x0000000000000000]              
	TArray< class AKFPawn* >                           LastMinigunEnemies;                               		// 0x0B04 (0x0010) [0x0000000000000000]              
	float                                              MinMinigunRangeSQ;                                		// 0x0B14 (0x0004) [0x0000000000000000]              
	float                                              MaxMinigunRangeSQ;                                		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxFanFireRangeSQ;                                		// 0x0B1C (0x0004) [0x0000000000000000]              
	TArray< class AKFPawn* >                           LastChargedPlayers;                               		// 0x0B20 (0x0010) [0x0000000000000000]              
	float                                              MinChargeRangeSQ;                                 		// 0x0B30 (0x0004) [0x0000000000000000]              
	float                                              LastChargeAttackTime;                             		// 0x0B34 (0x0004) [0x0000000000000000]              
	class APawn*                                       CachedChargeTarget;                               		// 0x0B38 (0x0008) [0x0000000000000000]              
	TArray< class AKFPawn* >                           LastGrabbedPlayers;                               		// 0x0B40 (0x0010) [0x0000000000000000]              
	float                                              LastGrabAttackTime;                               		// 0x0B50 (0x0004) [0x0000000000000000]              
	float                                              MinTentacleRangeSQ;                               		// 0x0B54 (0x0004) [0x0000000000000000]              
	TArray< class AKFPawn* >                           LastMissileEnemies;                               		// 0x0B58 (0x0010) [0x0000000000000000]              
	float                                              LastMissileAttackTime;                            		// 0x0B68 (0x0004) [0x0000000000000000]              
	float                                              MinMissileRangeSQ;                                		// 0x0B6C (0x0004) [0x0000000000000000]              
	float                                              MaxMissileRangeSQ;                                		// 0x0B70 (0x0004) [0x0000000000000000]              
	float                                              LastMortarAttackTime;                             		// 0x0B74 (0x0004) [0x0000000000000000]              
	float                                              LastSuccessfulAttackTime;                         		// 0x0B78 (0x0004) [0x0000000000000000]              
	float                                              RecentSeenEnemyListUpdateInterval;                		// 0x0B7C (0x0004) [0x0000000000000000]              
	float                                              LastRecentSeenEnemyListUpdateTime;                		// 0x0B80 (0x0004) [0x0000000000000000]              
	float                                              LastAttackMoveFinishTime;                         		// 0x0B84 (0x0004) [0x0000000000000000]              
	float                                              NextAttackCheckTime;                              		// 0x0B88 (0x0004) [0x0000000000000000]              
	float                                              LastSprintTime;                                   		// 0x0B8C (0x0004) [0x0000000000000000]              
	float                                              LastRetargetTime;                                 		// 0x0B90 (0x0004) [0x0000000000000000]              
	float                                              RetargetWaitTime;                                 		// 0x0B94 (0x0004) [0x0000000000000000]              
	int                                                MaxRageAttacks;                                   		// 0x0B98 (0x0004) [0x0000000000000000]              
	int                                                RageAttackCount;                                  		// 0x0B9C (0x0004) [0x0000000000000000]              
	float                                              MaxRageRangeSQ;                                   		// 0x0BA0 (0x0004) [0x0000000000000000]              
	float                                              RageTimeOut;                                      		// 0x0BA4 (0x0004) [0x0000000000000000]              
	TArray< class AKFPawn* >                           RageAttackedTargets;                              		// 0x0BA8 (0x0010) [0x0000000000000000]              
	int                                                HumanBumpDamage;                                  		// 0x0BB8 (0x0004) [0x0000000000000000]              
	int                                                HumanBumpMomentum;                                		// 0x0BBC (0x0004) [0x0000000000000000]              
	float                                              FleeHealthThreshold;                              		// 0x0BC0 (0x0004) [0x0000000000000000]              
	float                                              MaxFleeDuration;                                  		// 0x0BC4 (0x0004) [0x0000000000000000]              
	float                                              MaxFleeDistance;                                  		// 0x0BC8 (0x0004) [0x0000000000000000]              
	float                                              FleeStartTime;                                    		// 0x0BCC (0x0004) [0x0000000000000000]              
	float                                              TotalFleeTime;                                    		// 0x0BD0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110579 ];

		return pClassPointer;
	};

	void DrawDebug ( );
	void PlayDamagePlayerDialog ( );
	void EnterZedVictoryState ( );
	void ForceHeal ( );
	void NotifyFleeFinished ( );
	void Flee ( );
	void DoFleeFrom ( );
	void DoHeavyZedBump ( );
	void DoHeavyBump ( );
	void Timer_SearchForChargeObstructions ( );
	void Timer_SearchForFleeObstructions ( );
	void NextBattlePhase ( );
	void Timer_StopSummoningZeds ( );
	void AmIAllowedToSuicideWhenStuck ( );
	void Timer_RageTimeOut ( );
	void UpdateRageState ( );
	void StartPaternalInstinct ( );
	void NotifyTakeHit ( );
	void NotifyKilled ( );
	void NotifyMeleeDamageDealt ( );
	void NotifySpecialMoveEnded ( );
	void NotifyCommandFinished ( );
	void NotifyAttackActor ( );
	void DoorFinished ( );
	void NotifyAttackDoor ( );
	void SomeEnemiesAreHidden ( );
	void IsCeilingClear ( );
	void CanSetSprinting ( );
	void ShouldSprint ( );
	void EvaluateSprinting ( );
	void DoStrike ( );
	void GetAdjustedAimFor ( );
	void IsWeaponArmClear ( );
	void EvaluateAttacks ( );
	void UpdateRecentlySeenEnemyList ( );
	void eventSeePlayer ( );
	void Tick ( );
	void SetBestTarget ( );
	void eventChangeEnemy ( );
	void ForceSetEnemy ( );
	void eventSetEnemy ( );
	void eventFindNewEnemy ( );
	void GetAggroRating ( );
	void CanSwitchEnemies ( );
	void IsAggroEnemySwitchAllowed ( );
	void eventDestroyed ( );
	void PawnDied ( );
	void eventPossess ( );
};

UClass* AKFAIController_ZedPatriarch::pClassPointer = NULL;

// Class kfgamecontent.AICommand_FleshpoundKing_ChestBeamAttack
// 0x0000 (0x00F4 - 0x00F4)
class UAICommand_FleshpoundKing_ChestBeamAttack : public UAICommand_SpecialMove
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110584 ];

		return pClassPointer;
	};

	void Popped ( );
	void Pushed ( );
	void ChestBeamAttack ( );
};

UClass* UAICommand_FleshpoundKing_ChestBeamAttack::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedFleshpoundKing
// 0x0038 (0x0B48 - 0x0B10)
class AKFAIController_ZedFleshpoundKing : public AKFAIController_ZedFleshpound
{
public:
	class AKFPawn_ZedFleshpoundKing*                   MyPawn;                                           		// 0x0B10 (0x0008) [0x0000000000000000]              
	float                                              NextBeamCheckTime;                                		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              LastBeamTickTime;                                 		// 0x0B1C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   BeamAttackWaitTimeRange;                          		// 0x0B20 (0x0008) [0x0000000000000000]              
	float                                              MinChestBeamTargetAngle;                          		// 0x0B28 (0x0004) [0x0000000000000000]              
	float                                              MaxChestBeamHeightOffset;                         		// 0x0B2C (0x0004) [0x0000000000000000]              
	int                                                CurrentPhase;                                     		// 0x0B30 (0x0004) [0x0000000000000000]              
	float                                              PhaseThresholds[ 0x4 ];                           		// 0x0B34 (0x0010) [0x0000000000000000]              
	int                                                ChestBeamMinPhase;                                		// 0x0B44 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110596 ];

		return pClassPointer;
	};

	void ForceTargetChange ( );
	void eventChangeEnemy ( );
	void eventSetEnemy ( );
	void eventFindNewEnemy ( );
	void CanSwitchEnemies ( );
	void NotifySpecialMoveEnded ( );
	void TransitionToPhase ( );
	void NotifyTakeHit ( );
	void CheckForBeamAttack ( );
	void eventTick ( );
	void eventSeePlayer ( );
	void eventPossess ( );
};

UClass* AKFAIController_ZedFleshpoundKing::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_FleshpoundKing
// 0x0010 (0x0290 - 0x0280)
class UKFDifficulty_FleshpoundKing : public UKFMonsterDifficultyInfo
{
public:
	TArray< float >                                    ChestBeamCooldowns;                               		// 0x0280 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110598 ];

		return pClassPointer;
	};

	void GetChestBeamCooldownTime ( );
};

UClass* UKFDifficulty_FleshpoundKing::pClassPointer = NULL;

// Class kfgamecontent.AICommand_Husk_Suicide
// 0x0000 (0x00F4 - 0x00F4)
class UAICommand_Husk_Suicide : public UAICommand_SpecialMove
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110602 ];

		return pClassPointer;
	};

	void GetSpecialMove ( );
	void Popped ( );
	void Paused ( );
	void Resumed ( );
	void Pushed ( );
	void Suicide ( );
};

UClass* UAICommand_Husk_Suicide::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedHusk
// 0x007C (0x0B3C - 0x0AC0)
class AKFAIController_ZedHusk : public AKFAIController_Monster
{
public:
	DWORD                                              bBaseCommandInitialized : 1;                      		// 0x0AC0 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bCanUseFlameThrower : 1;                          		// 0x0AC0 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bDebugAimError : 1;                               		// 0x0AC0 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bCanLeadTarget : 1;                               		// 0x0AC0 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              MinDistanceToSuicide;                             		// 0x0AC4 (0x0004) [0x0000000000000000]              
	float                                              RequiredHealthPercentForSuicide;                  		// 0x0AC8 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastEnemySeenPosition;                            		// 0x0ACC (0x000C) [0x0000000000000000]              
	float                                              LastFireBallTime;                                 		// 0x0AD8 (0x0004) [0x0000000000000000]              
	float                                              LastFlameThrowerTime;                             		// 0x0ADC (0x0004) [0x0000000000000000]              
	float                                              BaseTimeBetweenFireBalls;                         		// 0x0AE0 (0x0004) [0x0000000000000000]              
	float                                              TimeBetweenFireBalls;                             		// 0x0AE4 (0x0004) [0x0000000000000000]              
	float                                              TimeBetweenFlameThrower;                          		// 0x0AE8 (0x0004) [0x0000000000000000]              
	float                                              FireballRandomizedValue;                          		// 0x0AEC (0x0004) [0x0000000000000000]              
	int                                                MaxDistanceForFlameThrower;                       		// 0x0AF0 (0x0004) [0x0000000000000000]              
	int                                                MinDistanceForFireBall;                           		// 0x0AF4 (0x0004) [0x0000000000000000]              
	int                                                MaxDistanceForFireBall;                           		// 0x0AF8 (0x0004) [0x0000000000000000]              
	float                                              LastCheckSpecialMoveTime;                         		// 0x0AFC (0x0004) [0x0000000000000000]              
	float                                              CheckSpecialMoveTime;                             		// 0x0B00 (0x0004) [0x0000000000000000]              
	struct FName                                       FireballSocketName;                               		// 0x0B04 (0x0008) [0x0000000000000000]              
	float                                              FireballAimError;                                 		// 0x0B0C (0x0004) [0x0000000000000000]              
	float                                              FireballLeadTargetAimError;                       		// 0x0B10 (0x0004) [0x0000000000000000]              
	float                                              FireballSpeed;                                    		// 0x0B14 (0x0004) [0x0000000000000000]              
	float                                              SplashAimChanceNormal;                            		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              SplashAimChanceHard;                              		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              SplashAimChanceSuicidal;                          		// 0x0B20 (0x0004) [0x0000000000000000]              
	float                                              SplashAimChanceHellOnEarth;                       		// 0x0B24 (0x0004) [0x0000000000000000]              
	float                                              FireballFireIntervalNormal;                       		// 0x0B28 (0x0004) [0x0000000000000000]              
	float                                              FireballFireIntervalHard;                         		// 0x0B2C (0x0004) [0x0000000000000000]              
	float                                              FireballFireIntervalSuicidal;                     		// 0x0B30 (0x0004) [0x0000000000000000]              
	float                                              FireballFireIntervalHellOnEarth;                  		// 0x0B34 (0x0004) [0x0000000000000000]              
	float                                              LowIntensityAttackScaleOfFireballInterval;        		// 0x0B38 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110622 ];

		return pClassPointer;
	};

	void DebugAimError ( );
	void ShootFireball ( );
	void DoStrike ( );
	void ShouldSprint ( );
	void eventSetEnemy ( );
	void CanDoFireball ( );
	void CanDoFlamethrower ( );
	void CanDoSuicide ( );
	void IsSuicidal ( );
	void Tick ( );
	void eventPostBeginPlay ( );
	void eventPossess ( );
	void IsNearDoor ( );
};

UClass* AKFAIController_ZedHusk::pClassPointer = NULL;

// Class kfgamecontent.AICommand_HuskFireBallAttack
// 0x0010 (0x0104 - 0x00F4)
class UAICommand_HuskFireBallAttack : public UAICommand_SpecialMove
{
public:
	struct FVector                                     LastKnownEnemyLocation;                           		// 0x00F4 (0x000C) [0x0000000000000000]              
	float                                              LastEnemyLocationCheckTime;                       		// 0x0100 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110624 ];

		return pClassPointer;
	};

	void eventHandleAICommandSpecialAction ( );
	void Popped ( );
	void Pushed ( );
	void FireBallAttack ( );
};

UClass* UAICommand_HuskFireBallAttack::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Husk_FireBallAttack
// 0x002C (0x017C - 0x0150)
class UKFSM_Husk_FireBallAttack : public UKFSM_PlaySingleAnim
{
public:
	TArray< struct FName >                             AnimNames;                                        		// 0x0150 (0x0010) [0x0000000000000000]              
	TArray< struct FVector >                           FireOffsets;                                      		// 0x0160 (0x0010) [0x0000000000000000]              
	struct FVector                                     FireOffset;                                       		// 0x0170 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110641 ];

		return pClassPointer;
	};

	void CanOverrideMoveWith ( );
	void SpecialMoveEnded ( );
	void NotifyFireballFired ( );
	void PlayAnimation ( );
	void SpecialMoveStarted ( );
	void GetFireOffset ( );
	void InternalCanDoSpecialMove ( );
	void PackFlagsBase ( );
};

UClass* UKFSM_Husk_FireBallAttack::pClassPointer = NULL;

// Class kfgamecontent.AICommand_HuskFlameThrowerAttack
// 0x0000 (0x00F4 - 0x00F4)
class UAICommand_HuskFlameThrowerAttack : public UAICommand_SpecialMove
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110646 ];

		return pClassPointer;
	};

	void Popped ( );
	void Pushed ( );
	void FlameThrowerAttack ( );
};

UClass* UAICommand_HuskFlameThrowerAttack::pClassPointer = NULL;

// Class kfgamecontent.AICommand_Patriarch_Grab
// 0x0000 (0x00F4 - 0x00F4)
class UAICommand_Patriarch_Grab : public UAICommand_SpecialMove
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110662 ];

		return pClassPointer;
	};

	void Popped ( );
	void Pushed ( );
	void TentacleGrab ( );
};

UClass* UAICommand_Patriarch_Grab::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedPatriarch
// 0x02C8 (0x1138 - 0x0E70)
class AKFPawn_ZedPatriarch : public AKFPawn_MonsterBoss
{
public:
	class UAkEvent*                                    AmbientBreathingEvent;                            		// 0x0E70 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    LowHealthAmbientBreathingEvent;                   		// 0x0E78 (0x0008) [0x0000000000000000]              
	class UAkComponent*                                CloakedAkComponent;                               		// 0x0E80 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    CloakedLoop;                                      		// 0x0E88 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    CloakedLoopEnd;                                   		// 0x0E90 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BodyMaterial;                                     		// 0x0E98 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   BodyAltMaterial;                                  		// 0x0EA0 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   SpottedMaterial;                                  		// 0x0EA8 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   CloakedBodyMaterial;                              		// 0x0EB0 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   CloakedBodyAltMaterial;                           		// 0x0EB8 (0x0008) [0x0000000000000000]              
	class UKFSkelControl_SpinBone*                     BarrelSpinSkelCtrl;                               		// 0x0EC0 (0x0008) [0x0000000000000000]              
	class USkelControlLookAt*                          GunTrackingSkelCtrl;                              		// 0x0EC8 (0x0008) [0x0000000000000000]              
	TArray< class UStaticMeshComponent* >              HealingSyringeMeshes;                             		// 0x0ED0 (0x0010) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         HealingSyringeMICs;                               		// 0x0EE0 (0x0010) [0x0000000000000000]              
	int                                                CurrentSyringeMeshNum;                            		// 0x0EF0 (0x0004) [0x0000000000000000]              
	int                                                ActiveSyringe;                                    		// 0x0EF4 (0x0004) [0x0000000000000000]              
	float                                              SyringeInjectTimeDuration;                        		// 0x0EF8 (0x0004) [0x0000000000000000]              
	float                                              SyringeInjectTimeRemaining;                       		// 0x0EFC (0x0004) [0x0000000000000000]              
	struct FLinearColor                                MechColors[ 0x4 ];                                		// 0x0F00 (0x0040) [0x0000000000000000]              
	struct FLinearColor                                DeadMechColor;                                    		// 0x0F40 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BoilColors[ 0x4 ];                                		// 0x0F50 (0x0040) [0x0000000000000000]              
	struct FLinearColor                                DeadBoilColor;                                    		// 0x0F90 (0x0010) [0x0000000000000000]              
	DWORD                                              bPulseBoils : 1;                                  		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bSprayingFire : 1;                                		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bSpinBarrels : 1;                                 		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bUseServerSideGunTracking : 1;                    		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bGunTracking : 1;                                 		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bInFleeAndHealMode : 1;                           		// 0x0FA0 (0x0004) [0x00000000006A0000] [0x00000020] ( CPF_EditConst | CPF_Component | CPF_NeedCtorLink )
	DWORD                                              bHealedThisPhase : 1;                             		// 0x0FA0 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              BoilPulseRate;                                    		// 0x0FA4 (0x0004) [0x0000000000000000]              
	float                                              BoilPulseAccum;                                   		// 0x0FA8 (0x0004) [0x0000000000000000]              
	float                                              BoilLightBrightness[ 0x4 ];                       		// 0x0FAC (0x0010) [0x0000000000000000]              
	struct FName                                       BoilLightSocketName;                              		// 0x0FBC (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BoilLightComponent;                               		// 0x0FC4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             CloakFX;                                          		// 0x0FCC (0x0008) [0x0000000000000000]              
	struct FName                                       CloakFXSocketName;                                		// 0x0FD4 (0x0008) [0x0000000000000000]              
	float                                              CloakShimmerAmount;                               		// 0x0FDC (0x0004) [0x0000000000000000]              
	float                                              LastCloakShimmerTime;                             		// 0x0FE0 (0x0004) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_LeftHip;                 		// 0x0FE4 (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_LeftKnee;                		// 0x0FEC (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_LeftFoot;                		// 0x0FF4 (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_LeftArm;                 		// 0x0FFC (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_Weapon;                  		// 0x1004 (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_LowerSpike;              		// 0x100C (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_UpperSpike;              		// 0x1014 (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_BackSpike;               		// 0x101C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_LeftHip;                          		// 0x1024 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_LeftKnee;                         		// 0x102C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_LeftFoot;                         		// 0x1034 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_LeftArm;                          		// 0x103C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_Weapon;                           		// 0x1044 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_LowerSpike;                       		// 0x104C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_UpperSpike;                       		// 0x1054 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_BackSpike;                        		// 0x105C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_LowDmg;                     		// 0x1064 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_MidDmg;                     		// 0x106C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_HighDmg;                    		// 0x1074 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Tentacle_LowDmg;                   		// 0x107C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Tentacle_MidDmg;                   		// 0x1084 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Tentacle_HighDmg;                  		// 0x108C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Smoke_HighDmg;                     		// 0x1094 (0x0008) [0x0000000000000000]              
	float                                              TickDialogInterval;                               		// 0x109C (0x0004) [0x0000000000000000]              
	float                                              FootstepCameraShakePitchAmplitude;                		// 0x10A0 (0x0004) [0x0000000000000000]              
	float                                              FootstepCameraShakeRollAmplitude;                 		// 0x10A4 (0x0004) [0x0000000000000000]              
	int                                                LastFXBattlePhase;                                		// 0x10A8 (0x0004) [0x0000000000000000]              
	TArray< struct FPatriarchBattlePhaseInfo >         BattlePhases;                                     		// 0x10AC (0x0010) [0x0000000000000000]              
	float                                              SprintCooldownTime;                               		// 0x10BC (0x0004) [0x0000000000000000]              
	float                                              TentacleGrabCooldownTime;                         		// 0x10C0 (0x0004) [0x0000000000000000]              
	float                                              MissileAttackCooldownTime;                        		// 0x10C4 (0x0004) [0x0000000000000000]              
	float                                              MortarAttackCooldownTime;                         		// 0x10C8 (0x0004) [0x0000000000000000]              
	float                                              ChargeAttackCooldownTime;                         		// 0x10CC (0x0004) [0x0000000000000000]              
	float                                              MinigunAttackCooldownTime;                        		// 0x10D0 (0x0004) [0x0000000000000000]              
	int                                                MaxRageAttacks;                                   		// 0x10D4 (0x0004) [0x0000000000000000]              
	int                                                TentacleDamage;                                   		// 0x10D8 (0x0004) [0x0000000000000000]              
	class UClass*                                      TentacleDamageType;                               		// 0x10DC (0x0008) [0x0000000000000000]              
	class UClass*                                      HeavyBumpDamageType;                              		// 0x10E4 (0x0008) [0x0000000000000000]              
	float                                              BarrelSpinSpeed;                                  		// 0x10EC (0x0004) [0x0000000000000000]              
	class AActor*                                      GunTarget;                                        		// 0x10F0 (0x0008) [0x00000000006B0000]              ( CPF_Travel | CPF_EditConst | CPF_Component | CPF_NeedCtorLink )
	class UClass*                                      MissileProjectileClass;                           		// 0x10F8 (0x0008) [0x0000000000000000]              
	class UClass*                                      MortarProjectileClass;                            		// 0x1100 (0x0008) [0x0000000000000000]              
	TArray< struct FPatriarch_MortarTarget >           MortarTargets;                                    		// 0x1108 (0x0010) [0x0000000000000000]              
	float                                              MinMortarRangeSQ;                                 		// 0x1118 (0x0004) [0x0000000000000000]              
	float                                              MaxMortarRangeSQ;                                 		// 0x111C (0x0004) [0x0000000000000000]              
	float                                              FleeSprintSpeedModifier;                          		// 0x1120 (0x0004) [0x0000000000000000]              
	float                                              CloakPercent;                                     		// 0x1124 (0x0004) [0x0000000000000000]              
	float                                              CloakSpeed;                                       		// 0x1128 (0x0004) [0x0000000000000000]              
	float                                              DeCloakSpeed;                                     		// 0x112C (0x0004) [0x0000000000000000]              
	int                                                NumFleeAndHealEnemyBumps;                         		// 0x1130 (0x0004) [0x0000000000000000]              
	float                                              LastFleeAndHealEnemyBumpTime;                     		// 0x1134 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110676 ];

		return pClassPointer;
	};

	void PlayBossMusic ( );
	void Timer_TickPatriarchDialog ( );
	void PlayGrabbedPlayerDialog ( );
	void PlayMinigunAttackDialog ( );
	void PlayMinigunWarnDialog ( );
	void PlayStealthSoundLoopEnd ( );
	void PlayStealthSoundLoop ( );
	void GetSpotterDialogID ( );
	void SetWeaponAmbientSound ( );
	void eventPlayFootStepSound ( );
	void CauseHeadTrauma ( );
	void TerminateEffectsOnDeath ( );
	void PlayDying ( );
	void CanInjureHitZone ( );
	void GetHitZoneSkinTypeEffects ( );
	void PlayTakeHitEffects ( );
	void SetDamageFXActive ( );
	void UpdateBattlePhaseFX ( );
	void UpdateBattlePhaseLights ( );
	void UpdateBattlePhaseMaterials ( );
	void DoCloakFX ( );
	void UpdateGameplayMICParams ( );
	void CallOutCloakingExpired ( );
	void CallOutCloaking ( );
	void eventUpdateSpottedStatus ( );
	void CausePanicWander ( );
	void OnStackingAfflictionChanged ( );
	void ClientCloakingStateUpdated ( );
	void SetCloaked ( );
	void eventNotifyGoreMeshActive ( );
	void UpdateHealingSyringeTransparency ( );
	void GetMinCloakPct ( );
	void UpdateGunTrackingSkelCtrl ( );
	void eventTick ( );
	void GetMortarAimDirAndTargetLoc ( );
	void GetMortarTarget ( );
	void ClearMortarTargets ( );
	void PreMortarAttack ( );
	void CollectMortarTargets ( );
	void GetMortarClass ( );
	void GetMissileAimDirAndTargetLoc ( );
	void GetMissileClass ( );
	void GetAdjustedAimFor ( );
	void eventGetWeaponStartTraceLocation ( );
	void SetGunTracking ( );
	void SpinMinigunBarrels ( );
	void CanMoveWhenMinigunning ( );
	void CanBlock ( );
	void CanDoMortarBarrage ( );
	void CanMortarAttack ( );
	void CanMissileAttack ( );
	void CanTentacleGrab ( );
	void CanChargeAttack ( );
	void StartWeaponCooldown ( );
	void SetPhaseCooldowns ( );
	void OnBattlePhaseChanged ( );
	void IncrementBattlePhase ( );
	void DesireSprintingInThisPhase ( );
	void FleeAndHealBump ( );
	void eventBump ( );
	void BreakOffSyringe ( );
	void ANIMNOTIFY_SpawnedKActor ( );
	void ANIMNOTIFY_GrabSyringe ( );
	void CanSummonChildren ( );
	void SummonChildren ( );
	void SetFleeAndHealMode ( );
	void GetBumpAttackDamageType ( );
	void PossessedBy ( );
	void eventPostInitAnimTree ( );
	void SetCharacterArch ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( );
};

UClass* AKFPawn_ZedPatriarch::pClassPointer = NULL;

// Class kfgamecontent.AICommand_Patriarch_MinigunBarrage
// 0x0004 (0x00F8 - 0x00F4)
class UAICommand_Patriarch_MinigunBarrage : public UAICommand_SpecialMove
{
public:
	DWORD                                              bIsFanFire : 1;                                   		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bBeganFire : 1;                                   		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110680 ];

		return pClassPointer;
	};

	void GetSpecialMove ( );
	void Popped ( );
	void LockdownAI ( );
	void Pushed ( );
	void MinigunBarrage ( );
};

UClass* UAICommand_Patriarch_MinigunBarrage::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Patriarch_MinigunBarrage
// 0x005C (0x01AC - 0x0150)
class UKFSM_Patriarch_MinigunBarrage : public UKFSM_PlaySingleAnim
{
public:
	class AKFPawn_ZedPatriarch*                        MyPatPawn;                                        		// 0x0150 (0x0008) [0x0000000000000000]              
	class AKFAIController_ZedPatriarch*                MyPatController;                                  		// 0x0158 (0x0008) [0x0000000000000000]              
	struct FName                                       AimOffsetProfileName;                             		// 0x0160 (0x0008) [0x0000000000000000]              
	struct FName                                       WindUpAnimName;                                   		// 0x0168 (0x0008) [0x0000000000000000]              
	struct FName                                       WindDownAnimName;                                 		// 0x0170 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             FanAnimNames;                                     		// 0x0178 (0x0010) [0x0000000000000000]              
	DWORD                                              bIsFanFire : 1;                                   		// 0x0188 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bInterrupted : 1;                                 		// 0x0188 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bObstructed : 1;                                  		// 0x0188 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FRotator                                    FocusFireRotationRate;                            		// 0x018C (0x000C) [0x0000000000000000]              
	class UAkEvent*                                    MinigunLoop;                                      		// 0x0198 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    MinigunLoopEnd;                                   		// 0x01A0 (0x0008) [0x0000000000000000]              
	float                                              VisibilityCheckTime;                              		// 0x01A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110710 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void AnimEndNotify ( );
	void PlayWindDownAnim ( );
	void Timer_SearchForMinigunTargets ( );
	void Timer_CheckIfFireAllowed ( );
	void PlayFireAnim ( );
	void SpecialMoveFlagsUpdated ( );
	void Timer_CheckEnemyLOS ( );
	void PlayWindUpAnimation ( );
	void PlayAnimation ( );
	void GetAnimStance ( );
	void SpecialMoveStarted ( );
	void PackSMFlags ( );
};

UClass* UKFSM_Patriarch_MinigunBarrage::pClassPointer = NULL;

// Class kfgamecontent.AICommand_Patriarch_MissileAttack
// 0x0000 (0x00F4 - 0x00F4)
class UAICommand_Patriarch_MissileAttack : public UAICommand_SpecialMove
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110715 ];

		return pClassPointer;
	};

	void Popped ( );
	void Pushed ( );
	void FireMissiles ( );
};

UClass* UAICommand_Patriarch_MissileAttack::pClassPointer = NULL;

// Class kfgamecontent.AICommand_Patriarch_MortarAttack
// 0x0004 (0x00F8 - 0x00F4)
class UAICommand_Patriarch_MortarAttack : public UAICommand_SpecialMove
{
public:
	DWORD                                              bDoBarrage : 1;                                   		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110732 ];

		return pClassPointer;
	};

	void Popped ( );
	void Pushed ( );
	void FireMortar ( );
};

UClass* UAICommand_Patriarch_MortarAttack::pClassPointer = NULL;

// Class kfgamecontent.AICommand_Siren_Scream
// 0x0008 (0x00FC - 0x00F4)
class UAICommand_Siren_Scream : public UAICommand_SpecialMove
{
public:
	int                                                MinScreamRangeSQ;                                 		// 0x00F4 (0x0004) [0x0000000000000000]              
	int                                                MaxScreamRangeSQ;                                 		// 0x00F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110750 ];

		return pClassPointer;
	};

	void Popped ( );
	void Pushed ( );
	void LockdownAI ( );
	void Scream ( );
};

UClass* UAICommand_Siren_Scream::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedSiren
// 0x000C (0x0ACC - 0x0AC0)
class AKFAIController_ZedSiren : public AKFAIController_Monster
{
public:
	float                                              ScreamDelayTime;                                  		// 0x0AC0 (0x0004) [0x0000000000000000]              
	float                                              ScreamCooldown;                                   		// 0x0AC4 (0x0004) [0x0000000000000000]              
	float                                              LastScreamTime;                                   		// 0x0AC8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110772 ];

		return pClassPointer;
	};

	void EnterZedVictoryState ( );
	void DoPanicWander ( );
	void NotifyCommandFinished ( );
	void NotifyMeleeAttackFinished ( );
	void NotifyReachedLatentMoveGoal ( );
	void NotifySpecialMoveEnded ( );
	void NotifySpecialMoveStarted ( );
	void AcquireEnemyAndScream ( );
	void DoScream ( );
	void PreMoveToEnemy ( );
};

UClass* AKFAIController_ZedSiren::pClassPointer = NULL;

// Class kfgamecontent.KFAffliction_Fire_Patriarch
// 0x0000 (0x00CC - 0x00CC)
class UKFAffliction_Fire_Patriarch : public UKFAffliction_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110777 ];

		return pClassPointer;
	};

	void SetMaterialParameter ( );
};

UClass* UKFAffliction_Fire_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_HansFriendlyTest
// 0x0008 (0x0BEC - 0x0BE4)
class AKFAIController_HansFriendlyTest : public AKFAIController_Hans
{
public:
	float                                              EnemyVisionCheckInterval;                         		// 0x0BE4 (0x0004) [0x0000000000000000]              
	float                                              LastEnemyVisionCheckTime;                         		// 0x0BE8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110781 ];

		return pClassPointer;
	};

	void NotifyTakeHit ( );
	void ShouldSprint ( );
	void eventScriptGetTeamNum ( );
	void InitPlayerReplicationInfo ( );
};

UClass* AKFAIController_HansFriendlyTest::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedHusk
// 0x004C (0x0DF0 - 0x0DA4)
class AKFPawn_ZedHusk : public AKFPawn_Monster
{
public:
	class UClass*                                      FireballClass;                                    		// 0x0DA4 (0x0008) [0x0000000000000000]              
	struct FsHuskFireballSettings                      FireballSettings;                                 		// 0x0DAC (0x0008) [0x0000000000000000]              
	struct FVector                                     PlayerFireOffset;                                 		// 0x0DB4 (0x000C) [0x0000000000000000]              
	class UKFGameExplosion*                            ExplosionTemplate;                                		// 0x0DC0 (0x0008) [0x0000000000000000]              
	DWORD                                              bHasExploded : 1;                                 		// 0x0DC8 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bHasSuicideExploded : 1;                          		// 0x0DC8 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bUseFireballLightRadius : 1;                      		// 0x0DC8 (0x0004) [0x0000000000000000] [0x00000004] 
	class UPointLightComponent*                        ChestLightComponent;                              		// 0x0DCC (0x0008) [0x0000000000000000]              
	struct FName                                       ChestLightSocketName;                             		// 0x0DD4 (0x0008) [0x0000000000000000]              
	float                                              FireballChargeLightRadius;                        		// 0x0DDC (0x0004) [0x0000000000000000]              
	float                                              AmbientLightRadiusInterpSpeed;                    		// 0x0DE0 (0x0004) [0x0000000000000000]              
	float                                              FireballLightRadiusInterpSpeed;                   		// 0x0DE4 (0x0004) [0x0000000000000000]              
	float                                              FireballLightMinBrightness;                       		// 0x0DE8 (0x0004) [0x0000000000000000]              
	float                                              FireballLightMaxBrightness;                       		// 0x0DEC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110876 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
	void OnStackingAfflictionChanged ( );
	void PlayHit ( );
	void NotifyTakeHit ( );
	void AdjustDamage ( );
	void OnExploded ( );
	void WeeklyShouldExplodeOnDeath ( );
	void TriggerExplosion ( );
	void HitZoneInjured ( );
	void CanInjureHitZone ( );
	void ApplySpecialZoneHealthMod ( );
	void GetSuicideSM ( );
	void OnAnimNotifyParticleSystemSpawned ( );
	void TerminateEffectsOnDeath ( );
	void eventGetWeaponStartTraceLocation ( );
	void ANIMNOTIFY_HuskFireballAttack ( );
	void eventTick ( );
	void SetFireLightEnabled ( );
	void ANIMNOTIFY_WarnZedsOfFireball ( );
	void NotifyAnimInterrupt ( );
	void ANIMNOTIFY_FlameThrowerOff ( );
	void ANIMNOTIFY_FlameThrowerOn ( );
	void SetCharacterArch ( );
	void PossessedBy ( );
};

UClass* AKFPawn_ZedHusk::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Husk_Fireball
// 0x001C (0x03B8 - 0x039C)
class AKFProj_Husk_Fireball : public AKFProjectile
{
public:
	float                                              BurnDuration;                                     		// 0x039C (0x0004) [0x0000000000000000]              
	float                                              BurnDamageInterval;                               		// 0x03A0 (0x0004) [0x0000000000000000]              
	class UClass*                                      GroundFireExplosionActorClass;                    		// 0x03A4 (0x0008) [0x0000000000000000]              
	DWORD                                              bSpawnGroundFire : 1;                             		// 0x03AC (0x0004) [0x00000000001E0000] [0x00000001] ( CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	class UKFGameExplosion*                            GroundFireExplosionTemplate;                      		// 0x03B0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110880 ];

		return pClassPointer;
	};

	void TriggerExplosion ( );
	void PrepareExplosionTemplate ( );
};

UClass* AKFProj_Husk_Fireball::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_HuskFriendlyTest
// 0x0000 (0x0B3C - 0x0B3C)
class AKFAIController_HuskFriendlyTest : public AKFAIController_ZedHusk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110884 ];

		return pClassPointer;
	};

	void CanDoFlamethrower ( );
	void CanDoFireball ( );
	void eventScriptGetTeamNum ( );
	void InitPlayerReplicationInfo ( );
};

UClass* AKFAIController_HuskFriendlyTest::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedBloat
// 0x0000 (0x0AC0 - 0x0AC0)
class AKFAIController_ZedBloat : public AKFAIController_Monster
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110895 ];

		return pClassPointer;
	};

};

UClass* AKFAIController_ZedBloat::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedClot_Alpha
// 0x0000 (0x0AC0 - 0x0AC0)
class AKFAIController_ZedClot_Alpha : public AKFAIController_ZedClot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110897 ];

		return pClassPointer;
	};

};

UClass* AKFAIController_ZedClot_Alpha::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedClot_AlphaKing
// 0x000C (0x0ACC - 0x0AC0)
class AKFAIController_ZedClot_AlphaKing : public AKFAIController_ZedClot_Alpha
{
public:
	unsigned char                                      MinAIRequiredForRally;                            		// 0x0AC0 (0x0001) [0x0000000000000000]              
	float                                              RallyChance;                                      		// 0x0AC4 (0x0004) [0x0000000000000000]              
	float                                              RallyCooldown;                                    		// 0x0AC8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110899 ];

		return pClassPointer;
	};

	void Timer_CheckForRally ( );
	void eventSeePlayer ( );
	void InitRallySettings ( );
};

UClass* AKFAIController_ZedClot_AlphaKing::pClassPointer = NULL;

// Class kfgamecontent.KFSM_AlphaRally
// 0x0058 (0x01A8 - 0x0150)
class UKFSM_AlphaRally : public UKFSM_PlaySingleAnim
{
public:
	struct FAnimVariants                               RallyAnims;                                       		// 0x0150 (0x0010) [0x0000000000000000]              
	DWORD                                              bRallySelf : 1;                                   		// 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RallyRadius;                                      		// 0x0164 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             RallyEffect;                                      		// 0x0168 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             AltRallyEffect;                                   		// 0x0170 (0x0008) [0x0000000000000000]              
	struct FName                                       RallyEffectBoneName;                              		// 0x0178 (0x0008) [0x0000000000000000]              
	struct FName                                       AltRallyEffectBoneNames[ 0x2 ];                   		// 0x0180 (0x0010) [0x0000000000000000]              
	struct FVector                                     RallyEffectOffset;                                		// 0x0190 (0x000C) [0x0000000000000000]              
	struct FVector                                     AltRallyEffectOffset;                             		// 0x019C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110911 ];

		return pClassPointer;
	};

	void RallyZeds ( );
	void PlayAnimation ( );
	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
	void PackRallyFlags ( );
};

UClass* UKFSM_AlphaRally::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_ClotAlpha
// 0x0010 (0x0290 - 0x0280)
class UKFDifficulty_ClotAlpha : public UKFMonsterDifficultyInfo
{
public:
	TArray< float >                                    ChanceToSpawnAsSpecial;                           		// 0x0280 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110916 ];

		return pClassPointer;
	};

	void GetSpecialAlphaChance ( );
};

UClass* UKFDifficulty_ClotAlpha::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_ClotAlphaKing
// 0x0010 (0x02A0 - 0x0290)
class UKFDifficulty_ClotAlphaKing : public UKFDifficulty_ClotAlpha
{
public:
	TArray< struct FsRallyTriggerInfo >                RallyTriggerSettings;                             		// 0x0290 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110915 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_ClotAlphaKing::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedClot_Cyst
// 0x0000 (0x0AC0 - 0x0AC0)
class AKFAIController_ZedClot_Cyst : public AKFAIController_ZedClot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110922 ];

		return pClassPointer;
	};

};

UClass* AKFAIController_ZedClot_Cyst::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedClot_Slasher
// 0x0000 (0x0AC0 - 0x0AC0)
class AKFAIController_ZedClot_Slasher : public AKFAIController_ZedClot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110924 ];

		return pClassPointer;
	};

};

UClass* AKFAIController_ZedClot_Slasher::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedCrawlerKing
// 0x0000 (0x0B08 - 0x0B08)
class AKFAIController_ZedCrawlerKing : public AKFAIController_ZedCrawler
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110926 ];

		return pClassPointer;
	};

};

UClass* AKFAIController_ZedCrawlerKing::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedFleshpound
// 0x0078 (0x0E1C - 0x0DA4)
class AKFPawn_ZedFleshpound : public AKFPawn_Monster
{
public:
	class UAkComponent*                                RageAkComponent;                                  		// 0x0DA4 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    RageLoopSound;                                    		// 0x0DAC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    RageStopSound;                                    		// 0x0DB4 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                DefaultGlowColor;                                 		// 0x0DBC (0x0010) [0x0000000000000000]              
	struct FLinearColor                                EnragedGlowColor;                                 		// 0x0DCC (0x0010) [0x0000000000000000]              
	struct FLinearColor                                DeadGlowColor;                                    		// 0x0DDC (0x0010) [0x0000000000000000]              
	class UClass*                                      RageBumpDamageType;                               		// 0x0DEC (0x0008) [0x0000000000000000]              
	struct FName                                       BattlePhaseLightFrontSocketName;                  		// 0x0DF4 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightTemplateYellow;                   		// 0x0DFC (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightTemplateRed;                      		// 0x0E04 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightFront;                            		// 0x0E0C (0x0008) [0x0000000000000000]              
	float                                              FootstepCameraShakePitchAmplitude;                		// 0x0E14 (0x0004) [0x0000000000000000]              
	float                                              FootstepCameraShakeRollAmplitude;                 		// 0x0E18 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110980 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
	void GetSpotterDialogID ( );
	void GetOverheadDebugText ( );
	void eventTick ( );
	void AdjustAffliction ( );
	void GetBumpAttackDamageType ( );
	void PlayDying ( );
	void StopRageSound ( );
	void SetGlowColors ( );
	void UpdateGameplayMICParams ( );
	void SetEnraged ( );
	void eventIsEnraged ( );
	void ShouldPlaySpecialMeleeAnims ( );
	void UpdateBattlePhaseLights ( );
	void TerminateEffectsOnDeath ( );
	void CanBlock ( );
	void CauseHeadTrauma ( );
	void eventPlayFootStepSound ( );
	void SetSprinting ( );
	void StartSteering ( );
	void OnStackingAfflictionChanged ( );
	void eventReplicatedEvent ( );
	void eventPreBeginPlay ( );
	void eventGetAIPawnClassToSpawn ( );
};

UClass* AKFPawn_ZedFleshpound::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedFleshpoundKing
// 0x014C (0x0F68 - 0x0E1C)
class AKFPawn_ZedFleshpoundKing : public AKFPawn_ZedFleshpound
{
public:
	class UKFGameExplosion*                            RagePoundExplosionTemplate;                       		// 0x0E1C (0x0008) [0x0000000000000000]              
	class UKFGameExplosion*                            RagePoundFinalExplosionTemplate;                  		// 0x0E24 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                BeamAttackGlowColor;                              		// 0x0E2C (0x0010) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightTemplateBlue;                     		// 0x0E3C (0x0008) [0x0000000000000000]              
	int                                                CurrentPhase;                                     		// 0x0E44 (0x0004) [0x0000000000690000]              ( CPF_Travel | CPF_Component | CPF_NeedCtorLink )
	int                                                RageExplosionMinPhase;                            		// 0x0E48 (0x0004) [0x0000000000000000]              
	struct FBossMinionWaveInfo                         SummonWaves[ 0x4 ];                               		// 0x0E4C (0x0080) [0x0000000000000000]              
	struct FVector2D                                   NumMinionsToSpawn;                                		// 0x0ECC (0x0008) [0x0000000000000000]              
	class UAkComponent*                                BeamHitAC;                                        		// 0x0ED4 (0x0008) [0x0000000000000000]              
	float                                              ShieldHealth;                                     		// 0x0EDC (0x0004) [0x0000000000000000]              
	float                                              ShieldHealthMax;                                  		// 0x0EE0 (0x0004) [0x0000000000000000]              
	TArray< float >                                    ShieldHealthMaxDefaults;                          		// 0x0EE4 (0x0010) [0x0000000000000000]              
	float                                              ShieldHealthScale;                                		// 0x0EF4 (0x0004) [0x0000000000000000]              
	unsigned char                                      ShieldHealthPctByte;                              		// 0x0EF8 (0x0001) [0x00000000006A0000]              ( CPF_EditConst | CPF_Component | CPF_NeedCtorLink )
	float                                              LastShieldHealthPct;                              		// 0x0EFC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             InvulnerableShieldFX;                             		// 0x0F00 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    InvulnerableShieldPSC;                            		// 0x0F08 (0x0008) [0x0000000000000000]              
	struct FName                                       ShieldSocketName;                                 		// 0x0F10 (0x0008) [0x0000000000000000]              
	class UKFSkinTypeEffects*                          ShieldImpactEffects;                              		// 0x0F18 (0x0008) [0x0000000000000000]              
	class UKFGameExplosion*                            ShieldShatterExplosionTemplate;                   		// 0x0F20 (0x0008) [0x0000000000000000]              
	struct FColor                                      ShieldColorGreen;                                 		// 0x0F28 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorGreen;                             		// 0x0F2C (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldColorYellow;                                		// 0x0F30 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorYellow;                            		// 0x0F34 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldColorOrange;                                		// 0x0F38 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorOrange;                            		// 0x0F3C (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldColorRed;                                   		// 0x0F40 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorRed;                               		// 0x0F44 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           BossCaptionStrings;                               		// 0x0F48 (0x0010) [0x0000000000000000]              
	DWORD                                              bUseAnimatedCamera : 1;                           		// 0x0F58 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     AnimatedBossCameraOffset;                         		// 0x0F5C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110979 ];

		return pClassPointer;
	};

	void UpdateShieldUI ( );
	void DetachShieldFX ( );
	void BreakShield ( );
	void MakeVectorFromColor ( );
	void UpdateShield ( );
	void ActivateShieldFX ( );
	void ActivateShield ( );
	void SetShieldScale ( );
	void AdjustDamage ( );
	void TriggerRagePoundExplosion ( );
	void PauseBossWave ( );
	void SpawnSubWave ( );
	void ANIMNOTIFY_RagePoundRightFinal ( );
	void ANIMNOTIFY_RagePoundRight ( );
	void ANIMNOTIFY_RagePoundLeft ( );
	void UpdateBattlePhaseLights ( );
	void UpdateGameplayMICParams ( );
	void ToggleSMBeam ( );
	void ANIMNOTIFY_ChestBeamEnd ( );
	void ANIMNOTIFY_ChestBeamStart ( );
	void ApplyHeadChunkGore ( );
	void PlayHeadAsplode ( );
	void PlayDismemberment ( );
	void CauseHeadTrauma ( );
	void PlayBossMusic ( );
	void PossessedBy ( );
	void eventReplicatedEvent ( );
	void GetNumMinionsToSpawn ( );
	void GetWaveInfo ( );
	void OnZedDied ( );
	void GetBossCameraOffset ( );
	void GetBossCameraSocket ( );
	void UseAnimatedBossCamera ( );
	void SetAnimatedBossCamera ( );
	void GetHealthPercent ( );
	void eventIsABoss ( );
	void GetRandomBossCaption ( );
	void GetMonsterPawn ( );
};

UClass* AKFPawn_ZedFleshpoundKing::pClassPointer = NULL;

// Class kfgamecontent.KFSM_FleshpoundKing_ChestBeam
// 0x0084 (0x01D4 - 0x0150)
class UKFSM_FleshpoundKing_ChestBeam : public UKFSM_PlaySingleAnim
{
public:
	class AKFPawn_ZedFleshpoundKing*                   KingPawnOwner;                                    		// 0x0150 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BeamPSCTemplate;                                  		// 0x0158 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BeamPSC;                                          		// 0x0160 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BeamHitPSCTemplate;                               		// 0x0168 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BeamHitPSC;                                       		// 0x0170 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    BeamStartSFX;                                     		// 0x0178 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    BeamEndSFX;                                       		// 0x0180 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    BeamHitSFX;                                       		// 0x0188 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    BeamHitStopSFX;                                   		// 0x0190 (0x0008) [0x0000000000000000]              
	class UCameraShake*                                BeamHitShake;                                     		// 0x0198 (0x0008) [0x0000000000000000]              
	struct FName                                       ChestBeamSocketName;                              		// 0x01A0 (0x0008) [0x0000000000000000]              
	float                                              TimeUntilTargetChange;                            		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UClass*                                      BeamDamageType;                                   		// 0x01AC (0x0008) [0x0000000000000000]              
	float                                              MaxBeamLength;                                    		// 0x01B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     BeamExtent;                                       		// 0x01B8 (0x000C) [0x0000000000000000]              
	float                                              DamageInterval;                                   		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                DamagePerTick;                                    		// 0x01C8 (0x0004) [0x0000000000000000]              
	float                                              DamageMomentumImpulse;                            		// 0x01CC (0x0004) [0x0000000000000000]              
	DWORD                                              bDrawDebugBeam : 1;                               		// 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110982 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void Timer_TickDamage ( );
	void Timer_AttemptTargetChange ( );
	void DisableBeamFX ( );
	void ToggleBeam ( );
	void SetBeamTarget ( );
	void IsValidBeamTarget ( );
	void Tick ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_FleshpoundKing_ChestBeam::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedGorefast
// 0x0004 (0x0AC4 - 0x0AC0)
class AKFAIController_ZedGorefast : public AKFAIController_Monster
{
public:
	DWORD                                              bExecutedSprint : 1;                              		// 0x0AC0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110985 ];

		return pClassPointer;
	};

	void IsFrustrated ( );
	void UpdateSprintFrustration ( );
	void eventEnemyNotVisible ( );
	void CanSetSprinting ( );
	void ShouldSprint ( );
};

UClass* AKFAIController_ZedGorefast::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedGorefastDualBlade
// 0x0000 (0x0AC4 - 0x0AC4)
class AKFAIController_ZedGorefastDualBlade : public AKFAIController_ZedGorefast
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110998 ];

		return pClassPointer;
	};

};

UClass* AKFAIController_ZedGorefastDualBlade::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Patriarch_Heal
// 0x001C (0x016C - 0x0150)
class UKFSM_Patriarch_Heal : public UKFSM_PlaySingleAnim
{
public:
	class AKFPawn_ZedPatriarch*                        MyPatPawn;                                        		// 0x0150 (0x0008) [0x0000000000000000]              
	int                                                BattlePhase;                                      		// 0x0158 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             HealAnimNames;                                    		// 0x015C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111278 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void DoHeal ( );
	void SpecialMoveStarted ( );
	void PackSMFlags ( );
};

UClass* UKFSM_Patriarch_Heal::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Patriarch_Taunt
// 0x0003 (0x0154 - 0x0151)
class UKFSM_Patriarch_Taunt : public UKFSM_Zed_Taunt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111285 ];

		return pClassPointer;
	};

	void PackSMFlags ( );
};

UClass* UKFSM_Patriarch_Taunt::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedScrake
// 0x0000 (0x0AC0 - 0x0AC0)
class AKFAIController_ZedScrake : public AKFAIController_Monster
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111294 ];

		return pClassPointer;
	};

	void CanAttackDestructibles ( );
	void CanEvadeGrenade ( );
	void UpdateSprintFrustration ( );
	void CanSetSprinting ( );
	void ShouldSprint ( );
	void AmIAllowedToSuicideWhenStuck ( );
};

UClass* AKFAIController_ZedScrake::pClassPointer = NULL;

// Class kfgamecontent.KFAIController_ZedStalker
// 0x0000 (0x0AC0 - 0x0AC0)
class AKFAIController_ZedStalker : public AKFAIController_Monster
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111332 ];

		return pClassPointer;
	};

};

UClass* AKFAIController_ZedStalker::pClassPointer = NULL;

// Class kfgamecontent.KFAISpawnManager_Tutorial
// 0x0000 (0x01CC - 0x01CC)
class UKFAISpawnManager_Tutorial : public UKFAISpawnManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111334 ];

		return pClassPointer;
	};

};

UClass* UKFAISpawnManager_Tutorial::pClassPointer = NULL;

// Class kfgamecontent.KFAISpawnManager_Versus
// 0x0088 (0x0254 - 0x01CC)
class UKFAISpawnManager_Versus : public UKFAISpawnManager
{
public:
	TArray< class UKFAISpawnSquad* >                   PlayerZedSquads;                                  		// 0x01CC (0x0010) [0x0000000000000000]              
	TArray< class UKFAIWaveInfo* >                     PlayerZedWaves;                                   		// 0x01DC (0x0010) [0x0000000000000000]              
	TArray< float >                                    PlayerZedSpawnInterval;                           		// 0x01EC (0x0010) [0x0000000000000000]              
	float                                              FirstWaveStartSpawnWaitTime;                      		// 0x01FC (0x0004) [0x0000000000000000]              
	float                                              LaterWaveStartSpawnWaitTime;                      		// 0x0200 (0x0004) [0x0000000000000000]              
	DWORD                                              bSpawnedSpecialSquad : 1;                         		// 0x0204 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bBossSpawned : 1;                                 		// 0x0204 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              SpecialSquadRandomChance;                         		// 0x0208 (0x0004) [0x0000000000000000]              
	TArray< int >                                      MaxPlayerSpecialSquadSpawns;                      		// 0x020C (0x0010) [0x0000000000000000]              
	int                                                NumPlayerSpecialSquadSpawns;                      		// 0x021C (0x0004) [0x0000000000000000]              
	float                                              AdditionalSpecialSquadChancePerSpawn;             		// 0x0220 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            ReservedPlayerZeds;                               		// 0x0224 (0x0010) [0x0000000000000000]              
	int                                                ReservedZedQueueLimit;                            		// 0x0234 (0x0004) [0x0000000000000000]              
	int                                                MaxActivePlayerScrakes;                           		// 0x0238 (0x0004) [0x0000000000000000]              
	int                                                MaxActivePlayerFleshpounds;                       		// 0x023C (0x0004) [0x0000000000000000]              
	int                                                NumScrakesThisSpawnCycle;                         		// 0x0240 (0x0004) [0x0000000000000000]              
	int                                                NumFleshpoundsThisSpawnCycle;                     		// 0x0244 (0x0004) [0x0000000000000000]              
	float                                              BossSpawnPlayerInterval;                          		// 0x0248 (0x0004) [0x0000000000000000]              
	float                                              FinalSurvivorBossSpawnPlayerInterval;             		// 0x024C (0x0004) [0x0000000000000000]              
	int                                                LargestSquadSize;                                 		// 0x0250 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111338 ];

		return pClassPointer;
	};

	void ResetSpawnManager ( );
	void CanSpawnPlayerBoss ( );
	void GetNumActiveZedsOfClass ( );
	void GetNumWaitingZedPlayers ( );
	void HaveZedPlayers ( );
	void IsPlayerZedSpawnAllowed ( );
	void RestartPlayerZed ( );
	void RecyclePendingZedPawnClass ( );
	void Timer_SpawnBossPlayerZeds ( );
	void FindTakeoverZed ( );
	void SpawnRemainingReservedZeds ( );
	void NeedPlayerSpawnVolume ( );
	void Timer_CheckForZedTakeovers ( );
	void CheckForTakeoverTimer ( );
	void RespawnZedHumanPlayers ( );
	void GetSpawnLocation ( );
	void ReserveStrongZedsForPlayers ( );
	void GiveAvailableZedClass ( );
	void AssignZedsToPlayers ( );
	void GetSpecialSquad ( );
	void CheckForSpecialSquadSpawn ( );
	void Timer_SpawnPlayerZeds ( );
	void SpawnSquad ( );
	void SetupNextWave ( );
	void GetAIAliveCount ( );
};

UClass* UKFAISpawnManager_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPlayerControllerVersus
// 0x0025 (0x0DF5 - 0x0DD0)
class AKFPlayerControllerVersus : public AKFPlayerController
{
public:
	struct FString                                     BossName;                                         		// 0x0DD0 (0x0010) [0x0000000000000000]              
	TArray< DWORD >                                    HasSpawnedZeds;                                   		// 0x0DE0 (0x0010) [0x0000000000000000]              
	int                                                ZedXPAmount;                                      		// 0x0DF0 (0x0004) [0x00000000001D0000]              ( CPF_Travel | CPF_GlobalConfig | CPF_Component )
	unsigned char                                      ZedXPLevel;                                       		// 0x0DF4 (0x0001) [0x00000000001E0000]              ( CPF_EditConst | CPF_GlobalConfig | CPF_Component )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111507 ];

		return pClassPointer;
	};

	void eventSetHaveUpdatePerk ( );
	void eventInitInputSystem ( );
	void ClientReset ( );
	void Reset ( );
	void NotifyChangeSpectateViewTarget ( );
	void ClientRecieveNewTeam ( );
	void ServerNotifyTeamChanged ( );
	void RequestSwitchTeam ( );
	void ChangeTeam ( );
	void NotifyOfAutoBalance ( );
	void RecieveChatMessage ( );
	void ShouldDisplayGameplayPostProcessFX ( );
	void AddTrackedDamage ( );
	void AwardZedDamage ( );
	void StopAltFire ( );
	void StartAltFire ( );
	void ClientRestart ( );
	void Restart ( );
};

UClass* AKFPlayerControllerVersus::pClassPointer = NULL;

// Class kfgamecontent.KFGameInfo_Survival
// 0x0034 (0x0758 - 0x0724)
class AKFGameInfo_Survival : public AKFGameInfo
{
public:
	int                                                TimeBetweenWaves;                                 		// 0x0724 (0x0004) [0x0000000000000000]              
	float                                              EndCinematicDelay;                                		// 0x0728 (0x0004) [0x0000000000000000]              
	float                                              AARDisplayDelay;                                  		// 0x072C (0x0004) [0x0000000000000000]              
	TArray< struct FAARAward >                         TeamAwardList;                                    		// 0x0730 (0x0010) [0x0000000000000000]              
	unsigned char                                      WaveMax;                                          		// 0x0740 (0x0001) [0x0000000000000000]              
	int                                                WaveNum;                                          		// 0x0744 (0x0004) [0x0000000000000000]              
	DWORD                                              bHumanDeathsLastWave : 1;                         		// 0x0748 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bObjectivePlayed : 1;                             		// 0x0748 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bLogCheckObjective : 1;                           		// 0x0748 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                PlayedObjectives;                                 		// 0x074C (0x0004) [0x0000000000000000]              
	float                                              ObjectiveCheckIntervall;                          		// 0x0750 (0x0004) [0x0000000000000000]              
	float                                              MinAIAlivePercReqForObjStart;                     		// 0x0754 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111509 ];

		return pClassPointer;
	};

	void DebugKillZeds ( );
	void TryRestartGame ( );
	void UpdateCurrentMapVoteTime ( );
	void ProcessAwards ( );
	void GetEndOfMatchTime ( );
	void ShowPostGameMenu ( );
	void SetZedsToVictoryState ( );
	void SetWonGameCamera ( );
	void GetNextMap ( );
	void EndOfMatch ( );
	void NotifyTraderOpened ( );
	void OpenTrader ( );
	void DoTraderTimeCleanup ( );
	void CloseTraderTimer ( );
	void LogWaveEndAnalyticsFor ( );
	void Timer_FinalizeEndOfWaveStats ( );
	void WaveEnded ( );
	void CheckWaveEnd ( );
	void WaveStarted ( );
	void DetermineNextTraderIndex ( );
	void SetupNextTrader ( );
	void ResetPickups ( );
	void ResetAllPickups ( );
	void StartWave ( );
	void IsWaveActive ( );
	void WinMatch ( );
	void SetWave ( );
	void EndCurrentWave ( );
	void ToggleSpawning ( );
	void AllowWaveCheats ( );
	void GetAdjustedDeathPenalty ( );
	void RewardSurvivingPlayers ( );
	void UpdateWaveEndDialogInfo ( );
	void IsMultiplayerGame ( );
	void eventTimer ( );
	void CanSpectate ( );
	void UpdateGameSettings ( );
	void BossDied ( );
	void ReduceDamage ( );
	void Killed ( );
	void RestartPlayer ( );
	void PlayerCanRestart ( );
	void IsPlayerReady ( );
	void GetGameIntensityForMusic ( );
	void PlayWaveStartDialog ( );
	void StartMatch ( );
	void InitSpawnManager ( );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
	void ShouldPlayActionMusicTrack ( );
	void ShouldPlayMusicAtStart ( );
};

UClass* AKFGameInfo_Survival::pClassPointer = NULL;

// Class kfgamecontent.KFGameInfo_VersusSurvival
// 0x0060 (0x07B8 - 0x0758)
class AKFGameInfo_VersusSurvival : public AKFGameInfo_Survival
{
public:
	float                                              ANTI_GRIEF_DELAY;                                 		// 0x0758 (0x0004) [0x0000000000000000]              
	float                                              ANTI_GRIEF_INTERVAL;                              		// 0x075C (0x0004) [0x0000000000000000]              
	float                                              ANTI_GRIEF_DAMAGE_PERCENTAGE;                     		// 0x0760 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            PlayerZedClasses;                                 		// 0x0764 (0x0010) [0x0000000000000000]              
	TArray< class UClass* >                            PlayerBossClassList;                              		// 0x0774 (0x0010) [0x0000000000000000]              
	class AKFGameReplicationInfoVersus*                MyKFGRIV;                                         		// 0x0784 (0x0008) [0x0000000000000000]              
	class UClass*                                      AntiGriefDamageTypeClass;                         		// 0x078C (0x0008) [0x0000000000000000]              
	DWORD                                              bTeamBalanceEnabled : 1;                          		// 0x0794 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ScoreRadius;                                      		// 0x0798 (0x0004) [0x0000000000000000]              
	int                                                TimeUntilNextRound;                               		// 0x079C (0x0004) [0x0000000000000000]              
	float                                              RoundEndCinematicDelay;                           		// 0x07A0 (0x0004) [0x0000000000000000]              
	float                                              PostRoundWaitTime;                                		// 0x07A4 (0x0004) [0x0000000000000000]              
	int                                                WaveBonus;                                        		// 0x07A8 (0x0004) [0x0000000000000000]              
	int                                                BossDamageDone;                                   		// 0x07AC (0x0004) [0x0000000000000000]              
	int                                                BossSurvivorDamageTaken;                          		// 0x07B0 (0x0004) [0x0000000000000000]              
	float                                              PercentOfZedsKilledBeforeWipe;                    		// 0x07B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111508 ];

		return pClassPointer;
	};

	void GetEndOfMatchTime ( );
	void ShowPostGameMenu ( );
	void TryRestartGame ( );
	void CheckRoundEndAchievements ( );
	void SwitchOnePlayerToTeam ( );
	void StartSpawning ( );
	void PreSelectPlayerStarts ( );
	void IsInitialSpawnPointSelection ( );
	void BeginNextRound ( );
	void CheckTeamNumbers ( );
	void Timer_AnnounceNextRound ( );
	void ClosePostRoundMenu ( );
	void Reset ( );
	void UpdateSecondRoundTeamScore ( );
	void UpdateFirstRoundTeamScore ( );
	void OpenPostRoundMenu ( );
	void ResetAllPickups ( );
	void CheckPawnsForGriefing ( );
	void BossDied ( );
	void WaveEnded ( );
	void Killed ( );
	void EndOfMatch ( );
	void ScoreKill ( );
	void ScoreDamage ( );
	void ReduceDamage ( );
	void GetLivingPlayerCount ( );
	void GetDefaultPlayerClass ( );
	void GetAIControlledMonsterAliveCount ( );
	void SetPlayerDefaults ( );
	void RestartPlayer ( );
	void Logout ( );
	void OnWaitingPlayerTeamSwapped ( );
	void eventPostLogin ( );
	void SetTeam ( );
	void ChangeTeam ( );
	void PickTeam ( );
	void GetReservedTotals ( );
	void GetPRIById ( );
	void PickGroupTeam ( );
	void GetPlayerGroup ( );
	void CreateTeam ( );
	void SwapTeamFor ( );
	void BalanceTeamsOld ( );
	void BalanceTeams ( );
	void BalanceSingles ( );
	void IsLegal ( );
	void IsBalanceable ( );
	void GetDelta ( );
	void SplitGroups ( );
	void SplitArrayByTeam ( );
	void StripAbsentPlayers ( );
	void ShouldStartMatch ( );
	void StartMatch ( );
	void IsPlayerReady ( );
	void InitGRIVariables ( );
	void eventPreBeginPlay ( );
};

UClass* AKFGameInfo_VersusSurvival::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_PlayerZedTakeover
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_PlayerZedTakeover : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111516 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_PlayerZedTakeover::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedScrake
// 0x0044 (0x0DE8 - 0x0DA4)
class AKFPawn_ZedScrake : public AKFPawn_Monster
{
public:
	class UAkComponent*                                ChainsawIdleAkComponent;                          		// 0x0DA4 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    PlayChainsawIdleAkEvent;                          		// 0x0DAC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    StopChainsawIdleAkEvent;                          		// 0x0DB4 (0x0008) [0x0000000000000000]              
	struct FName                                       ExhaustSocketName;                                		// 0x0DBC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ExhaustTemplate;                                  		// 0x0DC4 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    ExhaustPSC;                                       		// 0x0DCC (0x0008) [0x0000000000000000]              
	float                                              RageHealthThresholdNormal;                        		// 0x0DD4 (0x0004) [0x0000000000000000]              
	float                                              RageHealthThresholdHard;                          		// 0x0DD8 (0x0004) [0x0000000000000000]              
	float                                              RageHealthThresholdSuicidal;                      		// 0x0DDC (0x0004) [0x0000000000000000]              
	float                                              RageHealthThresholdHellOnEarth;                   		// 0x0DE0 (0x0004) [0x0000000000000000]              
	float                                              RageHealthThreshold;                              		// 0x0DE4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111519 ];

		return pClassPointer;
	};

	void OnStackingAfflictionChanged ( );
	void SetSprinting ( );
	void GetTraderAdviceID ( );
	void GetSpotterDialogID ( );
	void CleanupChainsaw ( );
	void TerminateEffectsOnDeath ( );
	void eventNotifyGoreMeshActive ( );
	void CauseHeadTrauma ( );
	void CanBlock ( );
	void SetEnraged ( );
	void eventTakeDamage ( );
	void CreateExhaustFx ( );
	void PossessedBy ( );
	void SetCharacterArch ( );
	void eventPostBeginPlay ( );
};

UClass* AKFPawn_ZedScrake::pClassPointer = NULL;

// Class kfgamecontent.KFCollectibleActor
// 0x0004 (0x037C - 0x0378)
class AKFCollectibleActor : public AKFDestructibleActor
{
public:
	DWORD                                              bFound : 1;                                       		// 0x0378 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111531 ];

		return pClassPointer;
	};

	void Reset ( );
	void AdjustDamage ( );
	void eventTriggerDestroyedEvent ( );
};

UClass* AKFCollectibleActor::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Bloat
// 0x0012 (0x0292 - 0x0280)
class UKFDifficulty_Bloat : public UKFMonsterDifficultyInfo
{
public:
	TArray< unsigned char >                            PukeMinesToSpawnOnDeathByDifficulty;              		// 0x0280 (0x0010) [0x0000000000000000]              
	unsigned char                                      PukeMinesToSpawnOnDeath_Versus;                   		// 0x0290 (0x0001) [0x0000000000000000]              
	unsigned char                                      PukeMinesToSpawnOnDeath_Player_Versus;            		// 0x0291 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111546 ];

		return pClassPointer;
	};

	void GetPukeMinesToSpawnOnDeath ( );
};

UClass* UKFDifficulty_Bloat::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedBloat
// 0x004C (0x0DF0 - 0x0DA4)
class AKFPawn_ZedBloat : public AKFPawn_Monster
{
public:
	struct FName                                       PukeSocketName;                                   		// 0x0DA4 (0x0008) [0x0000000000000000]              
	float                                              VomitRange;                                       		// 0x0DAC (0x0004) [0x0000000000000000]              
	int                                                VomitDamage;                                      		// 0x0DB0 (0x0004) [0x0000000000000000]              
	float                                              ExplodeRange;                                     		// 0x0DB4 (0x0004) [0x0000000000000000]              
	DWORD                                              bHasExploded : 1;                                 		// 0x0DB8 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bWasDismembered : 1;                              		// 0x0DB8 (0x0004) [0x0000000000000000] [0x00000002] 
	class UClass*                                      PukeMineProjectileClass;                          		// 0x0DBC (0x0008) [0x0000000000000000]              
	TArray< struct FRotator >                          DeathPukeMineRotations;                           		// 0x0DC4 (0x0010) [0x0000000000000000]              
	unsigned char                                      NumPukeMinesToSpawnOnDeath;                       		// 0x0DD4 (0x0001) [0x0000000000000000]              
	struct FVector                                     OldLocation;                                      		// 0x0DD8 (0x000C) [0x0000000000000000]              
	struct FRotator                                    OldRotation;                                      		// 0x0DE4 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111555 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
	void SpawnPukeMinesOnDeath ( );
	void SpawnPukeMine ( );
	void DealExplosionDamage ( );
	void HitExplosiveBone ( );
	void TakeHitZoneDamage ( );
	void Died ( );
	void HasInjuredHitZones ( );
	void CanInjureHitZone ( );
	void CanPukeOnTarget ( );
	void DealPukeDamage ( );
	void Puke ( );
	void ANIMNOTIFY_PukeAttack ( );
	void PostBeginPlay ( );
};

UClass* AKFPawn_ZedBloat::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_ClotCyst
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_ClotCyst : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111567 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_ClotCyst::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_ClotSlasher
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_ClotSlasher : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111569 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_ClotSlasher::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Crawler
// 0x0010 (0x0290 - 0x0280)
class UKFDifficulty_Crawler : public UKFMonsterDifficultyInfo
{
public:
	TArray< float >                                    ChanceToSpawnAsSpecial;                           		// 0x0280 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111571 ];

		return pClassPointer;
	};

	void GetSpecialCrawlerChance ( );
};

UClass* UKFDifficulty_Crawler::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_CrawlerKing
// 0x0000 (0x0290 - 0x0290)
class UKFDifficulty_CrawlerKing : public UKFDifficulty_Crawler
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111578 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_CrawlerKing::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Fleshpound
// 0x0010 (0x0290 - 0x0280)
class UKFDifficulty_Fleshpound : public UKFMonsterDifficultyInfo
{
public:
	TArray< float >                                    ChanceToSpawnAsSpecial;                           		// 0x0280 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111580 ];

		return pClassPointer;
	};

	void GetSpecialFleshpoundChance ( );
};

UClass* UKFDifficulty_Fleshpound::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_FleshpoundMini
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_FleshpoundMini : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111591 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_FleshpoundMini::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Gorefast
// 0x0010 (0x0290 - 0x0280)
class UKFDifficulty_Gorefast : public UKFMonsterDifficultyInfo
{
public:
	TArray< float >                                    ChanceToSpawnAsSpecial;                           		// 0x0280 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111593 ];

		return pClassPointer;
	};

	void GetSpecialGorefastChance ( );
};

UClass* UKFDifficulty_Gorefast::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_GorefastDualBlade
// 0x0000 (0x0290 - 0x0290)
class UKFDifficulty_GorefastDualBlade : public UKFDifficulty_Gorefast
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111600 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_GorefastDualBlade::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Hans
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_Hans : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111602 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_Hans::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Husk
// 0x0018 (0x0298 - 0x0280)
class UKFDifficulty_Husk : public UKFMonsterDifficultyInfo
{
public:
	TArray< struct FsHuskFireballSettings >            FireballSettings;                                 		// 0x0280 (0x0010) [0x0000000000000000]              
	struct FsHuskFireballSettings                      FireballSettings_Versus;                          		// 0x0290 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111604 ];

		return pClassPointer;
	};

	void GetFireballSettings ( );
};

UClass* UKFDifficulty_Husk::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Patriarch
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_Patriarch : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111614 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Scrake
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_Scrake : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111616 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_Scrake::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Siren
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_Siren : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111618 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_Siren::pClassPointer = NULL;

// Class kfgamecontent.KFDifficulty_Stalker
// 0x0000 (0x0280 - 0x0280)
class UKFDifficulty_Stalker : public UKFMonsterDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111620 ];

		return pClassPointer;
	};

};

UClass* UKFDifficulty_Stalker::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Handgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Handgun : public UKFDT_Ballistic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111622 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Handgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_9mm
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_9mm : public UKFDT_Ballistic_Handgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111624 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_9mm::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Shotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Shotgun : public UKFDT_Ballistic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111626 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Shotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_AA12Shotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_AA12Shotgun : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111628 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_AA12Shotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_AssaultRifle
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_AssaultRifle : public UKFDT_Ballistic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111633 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_AssaultRifle::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_AK12
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_AK12 : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111635 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_AK12::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_AR15
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_AR15 : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111640 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_AR15::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Assault_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Assault_Medic : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111642 ];

		return pClassPointer;
	};

	void GetMedicToxicDmgType ( );
	void ApplySecondaryDamage ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_Assault_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Bullpup
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Bullpup : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111657 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Bullpup::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Rifle
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Rifle : public UKFDT_Ballistic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111659 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Rifle::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_CenterfireMB464
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_CenterfireMB464 : public UKFDT_Ballistic_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111661 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_CenterfireMB464::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Colt1911
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Colt1911 : public UKFDT_Ballistic_Handgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111666 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Colt1911::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_DBShotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_DBShotgun : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111668 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_DBShotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Deagle
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Deagle : public UKFDT_Ballistic_Handgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111673 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_Deagle::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_DragonsBreath
// 0x0008 (0x016C - 0x0164)
class UKFDT_Ballistic_DragonsBreath : public UKFDT_Ballistic_Shotgun
{
public:
	class UClass*                                      BurnDamageType;                                   		// 0x0164 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111678 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
	void PlayImpactHitEffects ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_DragonsBreath::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_DragonsBreathDoT
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_DragonsBreathDoT : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111694 ];

		return pClassPointer;
	};

	void GetDamageeDialogID ( );
	void GetDamagerDialogID ( );
	void GetKillerDialogID ( );
};

UClass* UKFDT_Fire_DragonsBreathDoT::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_HansAK12
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_HansAK12 : public UKFDT_Ballistic_AK12
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111695 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Ballistic_HansAK12::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Hemogoblin
// 0x0008 (0x016C - 0x0164)
class UKFDT_Ballistic_Hemogoblin : public UKFDT_Ballistic_Rifle
{
public:
	class UClass*                                      TubeAttachClass;                                  		// 0x0164 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111699 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
	void PlayImpactHitEffects ( );
	void CanDismemberHitZoneWhileAlive ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_Hemogoblin::pClassPointer = NULL;

// Class kfgamecontent.KFWeapActor_Hemogoblin_Tube
// 0x0038 (0x027C - 0x0244)
class AKFWeapActor_Hemogoblin_Tube : public AActor
{
public:
	class UStaticMeshComponent*                        TubeMesh;                                         		// 0x0244 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BloodSprayFX;                                     		// 0x024C (0x0008) [0x0000000000000000]              
	class UAkComponent*                                BleederSFXComponent;                              		// 0x0254 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    BleederSFX;                                       		// 0x025C (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    BleederSFXEnd;                                    		// 0x0264 (0x0008) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x026C (0x0004) [0x0000000000000000]              
	float                                              TubeLength;                                       		// 0x0270 (0x0004) [0x0000000000000000]              
	float                                              DestroyDelay;                                     		// 0x0274 (0x0004) [0x0000000000000000]              
	DWORD                                              bStopTick : 1;                                    		// 0x0278 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111728 ];

		return pClassPointer;
	};

	void eventTick ( );
	void ActualDestroy ( );
	void TearDown ( );
	void eventPostBeginPlay ( );
};

UClass* AKFWeapActor_Hemogoblin_Tube::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_HX25Impact
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_HX25Impact : public UKFDT_Ballistic_Shell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111729 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_HX25Impact::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_HX25SubmunitionImpact
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_HX25SubmunitionImpact : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111731 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_HX25SubmunitionImpact::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_HZ12
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_HZ12 : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111736 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_HZ12::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Submachinegun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Submachinegun : public UKFDT_Ballistic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111741 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Submachinegun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Kriss
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Kriss : public UKFDT_Ballistic_Submachinegun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111743 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Kriss::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_M14EBR
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_M14EBR : public UKFDT_Ballistic_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111745 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_M14EBR::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_M16M203
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_M16M203 : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111750 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_M16M203::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_M203Impact
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_M203Impact : public UKFDT_Ballistic_Shell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111752 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_M203Impact::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_M4Shotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_M4Shotgun : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111754 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_M4Shotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_M79Impact
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_M79Impact : public UKFDT_Ballistic_Shell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111759 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_M79Impact::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_MB500
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_MB500 : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111761 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_MB500::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_MP5RAS
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_MP5RAS : public UKFDT_Ballistic_Submachinegun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111766 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_MP5RAS::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_MP7
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_MP7 : public UKFDT_Ballistic_Submachinegun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111768 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_MP7::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_NailShotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_NailShotgun : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111770 ];

		return pClassPointer;
	};

	void GetPinProjectileClass ( );
};

UClass* UKFDT_Ballistic_NailShotgun::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Nail_Nailgun
// 0x0000 (0x03BC - 0x03BC)
class AKFProj_Nail_Nailgun : public AKFProj_PinningBullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111773 ];

		return pClassPointer;
	};

	void Landed ( );
	void Tick ( );
	void ProcessTouch ( );
	void eventHitWall ( );
};

UClass* AKFProj_Nail_Nailgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_P90
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_P90 : public UKFDT_Ballistic_Submachinegun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111775 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_P90::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_PatMinigun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_PatMinigun : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111777 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Ballistic_PatMinigun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Pistol_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Pistol_Medic : public UKFDT_Ballistic_Handgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111781 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
};

UClass* UKFDT_Ballistic_Pistol_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_RailGun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_RailGun : public UKFDT_Ballistic_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111788 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
	void GetBoneToDismember ( );
};

UClass* UKFDT_Ballistic_RailGun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Rem1858
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Rem1858 : public UKFDT_Ballistic_Handgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111799 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Rem1858::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Rem1858_Dual
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Rem1858_Dual : public UKFDT_Ballistic_Rem1858
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111801 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Rem1858_Dual::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_RPG7Impact
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_RPG7Impact : public UKFDT_Ballistic_Shell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111803 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_RPG7Impact::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_SCAR
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_SCAR : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111805 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_SCAR::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Seeker6Impact
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Seeker6Impact : public UKFDT_Ballistic_Shell
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111810 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Seeker6Impact::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Shotgun_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Shotgun_Medic : public UKFDT_Ballistic_Shotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111812 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_Shotgun_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_SMG_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_SMG_Medic : public UKFDT_Ballistic_Submachinegun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111822 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
};

UClass* UKFDT_Ballistic_SMG_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Stoner63A
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Stoner63A : public UKFDT_Ballistic_AssaultRifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111829 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_Stoner63A::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_SW500
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_SW500 : public UKFDT_Ballistic_Handgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111831 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_SW500::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_SW500_Dual
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_SW500_Dual : public UKFDT_Ballistic_SW500
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111836 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Ballistic_SW500_Dual::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Ballistic_Winchester
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Ballistic_Winchester : public UKFDT_Ballistic_Rifle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111838 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Ballistic_Winchester::pClassPointer = NULL;

// Class kfgamecontent.KFDT_BloatPuke
// 0x0000 (0x0164 - 0x0164)
class UKFDT_BloatPuke : public UKFDT_Toxic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111843 ];

		return pClassPointer;
	};

};

UClass* UKFDT_BloatPuke::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_RifleButt
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_RifleButt : public UKFDT_Bludgeon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111845 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_RifleButt::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_9mm
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_9mm : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111847 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_9mm::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_AA12Shotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_AA12Shotgun : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111849 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_AA12Shotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_AK12
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_AK12 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111851 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_AK12::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_AR15
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_AR15 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111853 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_AR15::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Assault_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Assault_Medic : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111855 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Assault_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Bullpup
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Bullpup : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111857 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Bullpup::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_C4
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_C4 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111859 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_C4::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_CaulkBurn
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_CaulkBurn : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111861 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_CaulkBurn::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_CenterfireMB464
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_CenterfireMB464 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111863 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_CenterfireMB464::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Colt1911
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Colt1911 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111865 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Colt1911::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Crossbow
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Crossbow : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111867 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Crossbow::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Crovel
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Crovel : public UKFDT_Bludgeon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111869 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Crovel::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_CrovelBash
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_CrovelBash : public UKFDT_Bludgeon_Crovel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111871 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_CrovelBash::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_DBShotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_DBShotgun : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111873 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_DBShotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Deagle
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Deagle : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111875 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Deagle::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_DragonsBreath
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_DragonsBreath : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111877 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_DragonsBreath::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Flamethrower
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Flamethrower : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111879 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Flamethrower::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_FlareGun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_FlareGun : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111881 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_FlareGun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Fleshpound
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Fleshpound : public UKFDT_Bludgeon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111883 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Fleshpound::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Fleshpound_AOE
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Fleshpound_AOE : public UKFDT_Bludgeon_Fleshpound
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111885 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Fleshpound_AOE::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Healer
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Healer : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111887 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Healer::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Hemogoblin
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Hemogoblin : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111889 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Hemogoblin::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_HX25
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_HX25 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111891 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_HX25::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_HZ12
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_HZ12 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111893 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_HZ12::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Kriss
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Kriss : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111895 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Kriss::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_M14EBR
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_M14EBR : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111897 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_M14EBR::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_M16M203
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_M16M203 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111899 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_M16M203::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_M4Shotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_M4Shotgun : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111901 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_M4Shotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_M79
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_M79 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111903 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_M79::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MaceAndShield
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MaceAndShield : public UKFDT_Bludgeon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111905 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MaceAndShield::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MaceAndShield_Bash
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MaceAndShield_Bash : public UKFDT_Bludgeon_MaceAndShield
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111907 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MaceAndShield_Bash::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MaceAndShield_MaceHeavy
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MaceAndShield_MaceHeavy : public UKFDT_Bludgeon_MaceAndShield
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111909 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MaceAndShield_MaceHeavy::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MaceAndShield_ShieldHeavy
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MaceAndShield_ShieldHeavy : public UKFDT_Bludgeon_MaceAndShield
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111911 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MaceAndShield_ShieldHeavy::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MaceAndShield_ShieldLight
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MaceAndShield_ShieldLight : public UKFDT_Bludgeon_MaceAndShield
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111913 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MaceAndShield_ShieldLight::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MB500
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MB500 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111915 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MB500::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MicrowaveGun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MicrowaveGun : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111917 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MicrowaveGun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MP5RAS
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MP5RAS : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111919 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MP5RAS::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_MP7
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_MP7 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111921 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_MP7::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_NailShotgun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_NailShotgun : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111923 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_NailShotgun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_P90
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_P90 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111925 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_P90::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Patriarch
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Patriarch : public UKFDT_Bludgeon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111927 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Bludgeon_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_PatriarchKick
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_PatriarchKick : public UKFDT_Bludgeon_Patriarch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111931 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Bludgeon_PatriarchKick::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_PatriarchMetal
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_PatriarchMetal : public UKFDT_Bludgeon_Patriarch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111936 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Bludgeon_PatriarchMetal::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Pistol_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Pistol_Medic : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111940 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Pistol_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Pulverizer
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Pulverizer : public UKFDT_Bludgeon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111942 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Pulverizer::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_PulverizerBash
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_PulverizerBash : public UKFDT_Bludgeon_Pulverizer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111944 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_PulverizerBash::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_PulverizerHeavy
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_PulverizerHeavy : public UKFDT_Bludgeon_Pulverizer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111946 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_PulverizerHeavy::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_RailGun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_RailGun : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111948 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_RailGun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Rem1858
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Rem1858 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111950 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Rem1858::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_RPG7
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_RPG7 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111952 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_RPG7::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_SCAR
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_SCAR : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111954 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_SCAR::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Seeker6
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Seeker6 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111956 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Seeker6::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Shotgun_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Shotgun_Medic : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111958 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Shotgun_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_SMG_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_SMG_Medic : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111960 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_SMG_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Stoner63A
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Stoner63A : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111962 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Stoner63A::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_SW500
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_SW500 : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111964 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_SW500::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Welder
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Welder : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111966 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Welder::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_Winchester
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_Winchester : public UKFDT_Bludgeon_RifleButt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111968 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_Winchester::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Bludgeon_ZedJump
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Bludgeon_ZedJump : public UKFDT_Bludgeon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111970 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Bludgeon_ZedJump::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Dart_Healing
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Dart_Healing : public UKFDT_Healing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111972 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Dart_Healing::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Dart_Toxic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Dart_Toxic : public UKFDT_Toxic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111974 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Dart_Toxic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_EMP_EMPGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_EMP_EMPGrenade : public UKFDT_EMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111976 ];

		return pClassPointer;
	};

};

UClass* UKFDT_EMP_EMPGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_C4
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_C4 : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111978 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_C4::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_CrawlerSuicide
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_CrawlerSuicide : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111980 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Explosive_CrawlerSuicide::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_DynamiteGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_DynamiteGrenade : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111985 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_DynamiteGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_FlashBangGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_FlashBangGrenade : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111987 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_FlashBangGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_FleshpoundKingRage_Heavy
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_FleshpoundKingRage_Heavy : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111989 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_FleshpoundKingRage_Heavy::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_FleshpoundKingRage_Light
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_FleshpoundKingRage_Light : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111991 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_FleshpoundKingRage_Light::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_FragGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_FragGrenade : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111993 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_FragGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_HEGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_HEGrenade : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111995 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_HEGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_HansHEGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_HansHEGrenade : public UKFDT_Explosive_HEGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 111997 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Explosive_HansHEGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_HuskSuicide
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_HuskSuicide : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112001 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Explosive_HuskSuicide::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_HX25
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_HX25 : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112006 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_HX25::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_M16M203
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_M16M203 : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112008 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_M16M203::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_M79
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_M79 : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112010 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_M79::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_NailBombGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_NailBombGrenade : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112012 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_NailBombGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_PatMissile
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_PatMissile : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112014 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Explosive_PatMissile::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_PatMortar
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_PatMortar : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112018 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Explosive_PatMortar::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_Pulverizer
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_Pulverizer : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112023 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_Pulverizer::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_RPG7
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_RPG7 : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112025 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_RPG7::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_RPG7BackBlast
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_RPG7BackBlast : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112027 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_RPG7BackBlast::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Explosive_Seeker6
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Explosive_Seeker6 : public UKFDT_Explosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112029 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Explosive_Seeker6::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_CaulkBurn
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_CaulkBurn : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112031 ];

		return pClassPointer;
	};

	void GetDamageeDialogID ( );
	void GetDamagerDialogID ( );
	void GetKillerDialogID ( );
};

UClass* UKFDT_Fire_CaulkBurn::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_Environment
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_Environment : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112046 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_Environment::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_FlameThrower
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_FlameThrower : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112048 ];

		return pClassPointer;
	};

	void GetDamageeDialogID ( );
	void GetDamagerDialogID ( );
	void GetKillerDialogID ( );
};

UClass* UKFDT_Fire_FlameThrower::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_FlareGun
// 0x0008 (0x016C - 0x0164)
class UKFDT_Fire_FlareGun : public UKFDT_Ballistic_Handgun
{
public:
	class UClass*                                      BurnDamageType;                                   		// 0x0164 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112056 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
};

UClass* UKFDT_Fire_FlareGun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_FlareGunDoT
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_FlareGunDoT : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112063 ];

		return pClassPointer;
	};

	void GetDamageeDialogID ( );
	void GetDamagerDialogID ( );
	void GetKillerDialogID ( );
};

UClass* UKFDT_Fire_FlareGunDoT::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_FlareGun_Dual
// 0x0000 (0x016C - 0x016C)
class UKFDT_Fire_FlareGun_Dual : public UKFDT_Fire_FlareGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112064 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_FlareGun_Dual::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_Ground_CaulkNBurn
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_Ground_CaulkNBurn : public UKFDT_Fire_Ground
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112073 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_Ground_CaulkNBurn::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_Ground_FlameThrower
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_Ground_FlameThrower : public UKFDT_Fire_Ground
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112075 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_Ground_FlameThrower::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_Ground_MicrowaveGun
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_Ground_MicrowaveGun : public UKFDT_Fire_Ground
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112077 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_Ground_MicrowaveGun::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_HuskFireball
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_HuskFireball : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112079 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_HuskFireball::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_HuskFlamethrower
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_HuskFlamethrower : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112081 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_HuskFlamethrower::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_MolotovGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_MolotovGrenade : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112083 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_MolotovGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Fire_ZedGround
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Fire_ZedGround : public UKFDT_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112085 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Fire_ZedGround::pClassPointer = NULL;

// Class kfgamecontent.KFDT_FleshpoundKing_ChestBeam
// 0x0000 (0x0164 - 0x0164)
class UKFDT_FleshpoundKing_ChestBeam : public UKFDT_EMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112087 ];

		return pClassPointer;
	};

};

UClass* UKFDT_FleshpoundKing_ChestBeam::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Freeze_FreezeGrenade
// 0x0000 (0x0174 - 0x0174)
class UKFDT_Freeze_FreezeGrenade : public UKFDT_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112089 ];

		return pClassPointer;
	};

	void PlayImpactHitEffects ( );
};

UClass* UKFDT_Freeze_FreezeGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Healing_MedicGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Healing_MedicGrenade : public UKFDT_Healing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112099 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Healing_MedicGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_HeavyZedBump
// 0x0000 (0x0164 - 0x0164)
class UKFDT_HeavyZedBump : public UKFDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112101 ];

		return pClassPointer;
	};

};

UClass* UKFDT_HeavyZedBump::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Microwave
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Microwave : public UKFDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112103 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Microwave::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Microwave_Beam
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Microwave_Beam : public UKFDT_Microwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112105 ];

		return pClassPointer;
	};

	void CheckObliterate ( );
};

UClass* UKFDT_Microwave_Beam::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Microwave_Blast
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Microwave_Blast : public UKFDT_Microwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112111 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Microwave_Blast::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_Crossbow
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_Crossbow : public UKFDT_Piercing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112113 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Piercing_Crossbow::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_KatanaStab
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_KatanaStab : public UKFDT_Piercing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112115 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Piercing_KatanaStab::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_KnifeStab
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_KnifeStab : public UKFDT_Piercing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112117 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Piercing_KnifeStab::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_KnifeStab_Berserker
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_KnifeStab_Berserker : public UKFDT_Piercing_KnifeStab
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112119 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Piercing_KnifeStab_Berserker::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_KnifeStab_FieldMedic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_KnifeStab_FieldMedic : public UKFDT_Piercing_KnifeStab
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112121 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
};

UClass* UKFDT_Piercing_KnifeStab_FieldMedic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_KnifeStab_SWAT
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_KnifeStab_SWAT : public UKFDT_Piercing_KnifeStab
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112128 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Piercing_KnifeStab_SWAT::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_NadeFragment
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_NadeFragment : public UKFDT_Piercing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112130 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Piercing_NadeFragment::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_NailFragment
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_NailFragment : public UKFDT_Piercing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112135 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Piercing_NailFragment::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Piercing_ZweihanderStab
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Piercing_ZweihanderStab : public UKFDT_Piercing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112140 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Piercing_ZweihanderStab::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Crovel
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Crovel : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112142 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Crovel::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Eviscerator
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Eviscerator : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112144 ];

		return pClassPointer;
	};

	void ModifyDismembermentHitImpulse ( );
	void GetBoneToDismember ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_Eviscerator::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_EvisceratorProj
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_EvisceratorProj : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112165 ];

		return pClassPointer;
	};

	void GetBoneToDismember ( );
	void GetLastSlashDirection ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_EvisceratorProj::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Gorefast
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Gorefast : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112188 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Gorefast::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Gorefast_AOE
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Gorefast_AOE : public UKFDT_Slashing_Gorefast
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112190 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Gorefast_AOE::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Hans
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Hans : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112192 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Hans::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Katana
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Katana : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112194 ];

		return pClassPointer;
	};

	void ModifyDismembermentHitImpulse ( );
	void GetBoneToDismember ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_Katana::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_KatanaHeavy
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_KatanaHeavy : public UKFDT_Slashing_Katana
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112215 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_KatanaHeavy::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Knife
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Knife : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112220 ];

		return pClassPointer;
	};

	void ModifyDismembermentHitImpulse ( );
	void GetBoneToDismember ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_Knife::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Knife_Berserker
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Knife_Berserker : public UKFDT_Slashing_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112241 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Knife_Berserker::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Knife_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Knife_Medic : public UKFDT_Slashing_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112243 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
};

UClass* UKFDT_Slashing_Knife_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Knife_SWAT
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Knife_SWAT : public UKFDT_Slashing_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112250 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Knife_SWAT::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_KnifeHeavy
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_KnifeHeavy : public UKFDT_Slashing_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112252 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_KnifeHeavy::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_KnifeHeavy_Berserker
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_KnifeHeavy_Berserker : public UKFDT_Slashing_KnifeHeavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112257 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_KnifeHeavy_Berserker::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_KnifeHeavy_Medic
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_KnifeHeavy_Medic : public UKFDT_Slashing_KnifeHeavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112259 ];

		return pClassPointer;
	};

	void ApplySecondaryDamage ( );
};

UClass* UKFDT_Slashing_KnifeHeavy_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_KnifeHeavy_SWAT
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_KnifeHeavy_SWAT : public UKFDT_Slashing_KnifeHeavy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112266 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_KnifeHeavy_SWAT::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Patriarch
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Patriarch : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112268 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Slashing_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_PatTentacle
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_PatTentacle : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112272 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Slashing_PatTentacle::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Scrake
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Scrake : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112276 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Scrake::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Scrake_AOE
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Scrake_AOE : public UKFDT_Slashing_Scrake
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112278 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_Scrake_AOE::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_ZedWeak
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_ZedWeak : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112280 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Slashing_ZedWeak::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_Zweihander
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_Zweihander : public UKFDT_Slashing
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112282 ];

		return pClassPointer;
	};

	void ModifyDismembermentHitImpulse ( );
	void GetBoneToDismember ( );
	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_Zweihander::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Slashing_ZweihanderHeavy
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Slashing_ZweihanderHeavy : public UKFDT_Slashing_Katana
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112303 ];

		return pClassPointer;
	};

	void CanDismemberHitZone ( );
};

UClass* UKFDT_Slashing_ZweihanderHeavy::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Sonic_VortexScream
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Sonic_VortexScream : public UKFDT_Sonic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112308 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Sonic_VortexScream::pClassPointer = NULL;

// Class kfgamecontent.KFDT_SwingMinigame
// 0x0000 (0x0164 - 0x0164)
class UKFDT_SwingMinigame : public UKFDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112310 ];

		return pClassPointer;
	};

	void PlayImpactHitEffects ( );
};

UClass* UKFDT_SwingMinigame::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Toxic_BloatPukeMine
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Toxic_BloatPukeMine : public UKFDT_Toxic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112322 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Toxic_BloatPukeMine::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Toxic_HansGrenade
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Toxic_HansGrenade : public UKFDT_Toxic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112324 ];

		return pClassPointer;
	};

	void GetKillerDialogID ( );
};

UClass* UKFDT_Toxic_HansGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFDT_Toxic_PlayerCrawlerSuicide
// 0x0000 (0x0164 - 0x0164)
class UKFDT_Toxic_PlayerCrawlerSuicide : public UKFDT_Toxic
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112328 ];

		return pClassPointer;
	};

};

UClass* UKFDT_Toxic_PlayerCrawlerSuicide::pClassPointer = NULL;

// Class kfgamecontent.KFPhysicsVolume
// 0x0014 (0x02E4 - 0x02D0)
class AKFPhysicsVolume : public APhysicsVolume
{
public:
	TArray< struct FTouchThrottling >                  RecentUntouchEvents;                              		// 0x02D0 (0x0010) [0x0000000000000000]              
	float                                              ThrottleTime;                                     		// 0x02E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112330 ];

		return pClassPointer;
	};

	void eventTick ( );
	void eventUnTouch ( );
	void CausePainTo ( );
};

UClass* AKFPhysicsVolume::pClassPointer = NULL;

// Class kfgamecontent.KFDynamicPhysicsVolume
// 0x0004 (0x02E8 - 0x02E4)
class AKFDynamicPhysicsVolume : public AKFPhysicsVolume
{
public:
	DWORD                                              bEnabled : 1;                                     		// 0x02E4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112348 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
};

UClass* AKFDynamicPhysicsVolume::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_GroundFire
// 0x0000 (0x0344 - 0x0344)
class AKFExplosion_GroundFire : public AKFExplosionActorLingering
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112353 ];

		return pClassPointer;
	};

	void SpawnExplosionParticleSystem ( );
};

UClass* AKFExplosion_GroundFire::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_HansNerveGasGrenade
// 0x0000 (0x0344 - 0x0344)
class AKFExplosion_HansNerveGasGrenade : public AKFExplosionActorLingering
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112359 ];

		return pClassPointer;
	};

};

UClass* AKFExplosion_HansNerveGasGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_HansSmokeGrenade
// 0x0014 (0x032C - 0x0318)
class AKFExplosion_HansSmokeGrenade : public AKFExplosionActor
{
public:
	float                                              MaxSmokeTime;                                     		// 0x0318 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    SmokeLoopStartEvent;                              		// 0x031C (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    SmokeLoopStopEvent;                               		// 0x0324 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112361 ];

		return pClassPointer;
	};

	void GetEffectCheckRadius ( );
	void DoExplosionDamage ( );
	void eventDestroyed ( );
	void Explode ( );
};

UClass* AKFExplosion_HansSmokeGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_HuskFireballGroundFire
// 0x0010 (0x0354 - 0x0344)
class AKFExplosion_HuskFireballGroundFire : public AKFExplosionActorLingering
{
public:
	class UParticleSystem*                             LoopingParticleEffectCeiling;                     		// 0x0344 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             LoopingParticleEffectWall;                        		// 0x034C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112380 ];

		return pClassPointer;
	};

};

UClass* AKFExplosion_HuskFireballGroundFire::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_MedicGrenade
// 0x0024 (0x0368 - 0x0344)
class AKFExplosion_MedicGrenade : public AKFExplosionActorLingering
{
public:
	class UClass*                                      HealingDamageType;                                		// 0x0344 (0x0008) [0x0000000000000000]              
	float                                              HealingAmount;                                    		// 0x034C (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    SmokeLoopStartEvent;                              		// 0x0350 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    SmokeLoopStopEvent;                               		// 0x0358 (0x0008) [0x0000000000000000]              
	class AKFPerk*                                     CachedInstigatorPerk;                             		// 0x0360 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112389 ];

		return pClassPointer;
	};

	void SpawnExplosionParticleSystem ( );
	void AffectsPawn ( );
	void Explode ( );
};

UClass* AKFExplosion_MedicGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_MedicGrenade
// 0x0013 (0x03DC - 0x03C9)
class AKFProj_MedicGrenade : public AKFProj_Grenade
{
public:
	TArray< class AKFPawn* >                           HealedPawns;                                      		// 0x03CC (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112408 ];

		return pClassPointer;
	};

	void StopFlightEffects ( );
	void Destroyed ( );
	void eventGrenadeIsAtRest ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_MedicGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_Molotov
// 0x0010 (0x0354 - 0x0344)
class AKFExplosion_Molotov : public AKFExplosionActorLingering
{
public:
	class UParticleSystem*                             LoopingParticleEffectCeiling;                     		// 0x0344 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             LoopingParticleEffectWall;                        		// 0x034C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112411 ];

		return pClassPointer;
	};

};

UClass* AKFExplosion_Molotov::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_PlayerBloatPukeMine
// 0x0000 (0x0318 - 0x0318)
class AKFExplosion_PlayerBloatPukeMine : public AKFExplosionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112415 ];

		return pClassPointer;
	};

	void SpawnExplosionParticleSystem ( );
};

UClass* AKFExplosion_PlayerBloatPukeMine::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_PlayerCrawlerSuicide
// 0x0000 (0x0344 - 0x0344)
class AKFExplosion_PlayerCrawlerSuicide : public AKFExplosionActorLingering
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112420 ];

		return pClassPointer;
	};

};

UClass* AKFExplosion_PlayerCrawlerSuicide::pClassPointer = NULL;

// Class kfgamecontent.KFExplosion_SirenScream
// 0x0000 (0x0318 - 0x0318)
class AKFExplosion_SirenScream : public AKFExplosionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112422 ];

		return pClassPointer;
	};

	void HandleIgnoredVictim ( );
	void SpecialCringeEffectsFor ( );
};

UClass* AKFExplosion_SirenScream::pClassPointer = NULL;

// Class kfgamecontent.KFExplosionActorC4
// 0x0000 (0x0318 - 0x0318)
class AKFExplosionActorC4 : public AKFExplosionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112430 ];

		return pClassPointer;
	};

	void GetDamageFor ( );
};

UClass* AKFExplosionActorC4::pClassPointer = NULL;

// Class kfgamecontent.KFGameConductorVersus
// 0x0028 (0x0260 - 0x0238)
class UKFGameConductorVersus : public UKFGameConductor
{
public:
	struct FInterpCurveFloat                           HumanRankZedHealthScaleCurve;                     		// 0x0238 (0x0014) [0x0000000000000000]              
	struct FInterpCurveFloat                           HumanRankZedDamageScaleCurve;                     		// 0x024C (0x0014) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112435 ];

		return pClassPointer;
	};

	void UpdateOverallStatus ( );
	void TimerUpdate ( );
};

UClass* UKFGameConductorVersus::pClassPointer = NULL;

// Class kfgamecontent.KFGameContentRoot
// 0x0010 (0x0070 - 0x0060)
class UKFGameContentRoot : public UObject
{
public:
	TArray< class UObject* >                           Loaded;                                           		// 0x0060 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112442 ];

		return pClassPointer;
	};

};

UClass* UKFGameContentRoot::pClassPointer = NULL;

// Class kfgamecontent.KFGameDifficulty_Survival
// 0x0000 (0x0204 - 0x0204)
class UKFGameDifficulty_Survival : public UKFGameDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112446 ];

		return pClassPointer;
	};

};

UClass* UKFGameDifficulty_Survival::pClassPointer = NULL;

// Class kfgamecontent.KFGameDifficulty_Survival_Console
// 0x0000 (0x0204 - 0x0204)
class UKFGameDifficulty_Survival_Console : public UKFGameDifficulty_Survival
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112448 ];

		return pClassPointer;
	};

};

UClass* UKFGameDifficulty_Survival_Console::pClassPointer = NULL;

// Class kfgamecontent.KFGameDifficulty_Versus
// 0x0000 (0x0204 - 0x0204)
class UKFGameDifficulty_Versus : public UKFGameDifficultyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112450 ];

		return pClassPointer;
	};

};

UClass* UKFGameDifficulty_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFGameDifficulty_Versus_Console
// 0x0000 (0x0204 - 0x0204)
class UKFGameDifficulty_Versus_Console : public UKFGameDifficulty_Versus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112452 ];

		return pClassPointer;
	};

};

UClass* UKFGameDifficulty_Versus_Console::pClassPointer = NULL;

// Class kfgamecontent.KFProj_BloatPukeMine
// 0x0070 (0x040C - 0x039C)
class AKFProj_BloatPukeMine : public AKFProjectile
{
public:
	class UParticleSystem*                             GroundFXTemplate;                                 		// 0x039C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BurstFXTemplate;                                  		// 0x03A4 (0x0008) [0x0000000000000000]              
	unsigned char                                      TeamNum;                                          		// 0x03AC (0x0001) [0x0000000000000000]              
	int                                                Health;                                           		// 0x03B0 (0x0004) [0x0000000000000000]              
	float                                              DampenFactor;                                     		// 0x03B4 (0x0004) [0x0000000000000000]              
	float                                              DampenFactorParallel;                             		// 0x03B8 (0x0004) [0x0000000000000000]              
	float                                              SpawnCollisionOffsetAmt;                          		// 0x03BC (0x0004) [0x0000000000000000]              
	struct FVector                                     LandedFXOffset;                                   		// 0x03C0 (0x000C) [0x0000000000000000]              
	float                                              ExplodeTriggerRadius;                             		// 0x03CC (0x0004) [0x0000000000000000]              
	float                                              ExplodeTriggerHeight;                             		// 0x03D0 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    BounceAkEvent;                                    		// 0x03D4 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    ImpactAkEvent;                                    		// 0x03DC (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          ImpactDecalMaterial;                              		// 0x03E4 (0x0008) [0x0000000000000000]              
	float                                              ImpactDecalWidth;                                 		// 0x03EC (0x0004) [0x0000000000000000]              
	float                                              ImpactDecalHeight;                                		// 0x03F0 (0x0004) [0x0000000000000000]              
	float                                              ImpactDecalThickness;                             		// 0x03F4 (0x0004) [0x0000000000000000]              
	float                                              FuseDuration;                                     		// 0x03F8 (0x0004) [0x0000000000000000]              
	DWORD                                              bClientExplode : 1;                               		// 0x03FC (0x0004) [0x00000000001E0000] [0x00000001] ( CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	DWORD                                              bFadingOut : 1;                                   		// 0x03FC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              FadeOutTime;                                      		// 0x0400 (0x0004) [0x0000000000000000]              
	int                                                MaxBounces;                                       		// 0x0404 (0x0004) [0x0000000000000000]              
	int                                                NumBounces;                                       		// 0x0408 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112662 ];

		return pClassPointer;
	};

	void OnInstigatorControllerLeft ( );
	void eventDestroyed ( );
	void SpawnBurstEffect ( );
	void FadeOut ( );
	void eventTornOff ( );
	void eventTick ( );
	void TriggerExplosion ( );
	void Timer_Explode ( );
	void Detonate ( );
	void eventTakeDamage ( );
	void eventTouch ( );
	void ValidTouch ( );
	void SpawnImpactDecal ( );
	void PlayImpactSound ( );
	void SwapToGroundFX ( );
	void Stick ( );
	void Bounce ( );
	void eventBump ( );
	void CanStick ( );
	void eventHitWall ( );
	void Explode ( );
	void StopSimulating ( );
	void ShutDown ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( );
};

UClass* AKFProj_BloatPukeMine::pClassPointer = NULL;

// Class kfgamecontent.KFPickupFactory_Ammo
// 0x0008 (0x03B8 - 0x03B0)
class AKFPickupFactory_Ammo : public AKFPickupFactory
{
public:
	class UAkEvent*                                    AmmoPickupSound;                                  		// 0x03B0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112663 ];

		return pClassPointer;
	};

	void CurrentPickupIsAmmo ( );
	void PickedUpBy ( );
	void GiveTo ( );
	void eventSetInitialState ( );
	void InitializePickup ( );
};

UClass* AKFPickupFactory_Ammo::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedClot
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedClot : public AKFPawn_Monster
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112666 ];

		return pClassPointer;
	};

	void GetSpotterDialogID ( );
	void eventPostInitAnimTree ( );
};

UClass* AKFPawn_ZedClot::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedClot_Cyst
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedClot_Cyst : public AKFPawn_ZedClot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112665 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
};

UClass* AKFPawn_ZedClot_Cyst::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedClot_Slasher
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedClot_Slasher : public AKFPawn_ZedClot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112667 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
};

UClass* AKFPawn_ZedClot_Slasher::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedClot_Alpha
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedClot_Alpha : public AKFPawn_ZedClot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112668 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
	void eventGetAIPawnClassToSpawn ( );
};

UClass* AKFPawn_ZedClot_Alpha::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedCrawler
// 0x0018 (0x0DBC - 0x0DA4)
class AKFPawn_ZedCrawler : public AKFPawn_Monster
{
public:
	class AActor*                                      LastBumpLevelActor;                               		// 0x0DA4 (0x0008) [0x0000000000000000]              
	float                                              LastBumpLevelTime;                                		// 0x0DAC (0x0004) [0x0000000000000000]              
	class UKFGameExplosion*                            DeathExplosionTemplate;                           		// 0x0DB0 (0x0008) [0x0000000000000000]              
	float                                              LowGoreExplosionImpulse;                          		// 0x0DB8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112669 ];

		return pClassPointer;
	};

	void GetSpotterDialogID ( );
	void Tick ( );
	void DrawDebugRotation ( );
	void GetOverheadDebugText ( );
	void eventSpiderBumpLevel ( );
	void SpecialMoveTo_Leap ( );
	void eventPossessedBy ( );
	void eventGetAIPawnClassToSpawn ( );
};

UClass* AKFPawn_ZedCrawler::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedGorefast
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedGorefast : public AKFPawn_Monster
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112670 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
	void eventGetAIPawnClassToSpawn ( );
};

UClass* AKFPawn_ZedGorefast::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedStalker
// 0x0034 (0x0DD8 - 0x0DA4)
class AKFPawn_ZedStalker : public AKFPawn_Monster
{
public:
	class UMaterialInstanceConstant*                   SpottedMaterial;                                  		// 0x0DA4 (0x0008) [0x0000000000000000]              
	class UAkComponent*                                CloakedAkComponent;                               		// 0x0DAC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    CloakedLoop;                                      		// 0x0DB4 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    CloakedLoopEnd;                                   		// 0x0DBC (0x0008) [0x0000000000000000]              
	float                                              CloakPercent;                                     		// 0x0DC4 (0x0004) [0x0000000000000000]              
	class AKFPlayerController*                         ViewerPlayer;                                     		// 0x0DC8 (0x0008) [0x0000000000000000]              
	float                                              CloakSpeed;                                       		// 0x0DD0 (0x0004) [0x0000000000000000]              
	float                                              DeCloakSpeed;                                     		// 0x0DD4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112671 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
	void GetSpotterDialogID ( );
	void GetKillerDialogID ( );
	void IsStalkerPawn ( );
	void ReCloakTimer ( );
	void PlayHeadAsplode ( );
	void PlayHit ( );
	void OnStackingAfflictionChanged ( );
	void CauseHeadTrauma ( );
	void PlayDying ( );
	void Rally ( );
	void CallOutCloakingExpired ( );
	void CallOutCloaking ( );
	void eventUpdateSpottedStatus ( );
	void GetMinCloakPct ( );
	void eventTick ( );
	void PlayStealthSoundLoopEnd ( );
	void PlayStealthSoundLoop ( );
	void TerminateEffectsOnDeath ( );
	void eventNotifyGoreMeshActive ( );
	void UpdateGameplayMICParams ( );
	void ClientCloakingStateUpdated ( );
	void SetCloaked ( );
	void eventReplicatedEvent ( );
	void eventPostBeginPlay ( );
};

UClass* AKFPawn_ZedStalker::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedFleshpoundMini
// 0x0000 (0x0E1C - 0x0E1C)
class AKFPawn_ZedFleshpoundMini : public AKFPawn_ZedFleshpound
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112672 ];

		return pClassPointer;
	};

};

UClass* AKFPawn_ZedFleshpoundMini::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedSiren
// 0x0024 (0x0DC8 - 0x0DA4)
class AKFPawn_ZedSiren : public AKFPawn_Monster
{
public:
	class UPointLightComponent*                        NeckLightComponent;                               		// 0x0DA4 (0x0008) [0x0000000000000000]              
	struct FName                                       NeckLightSocketName;                              		// 0x0DAC (0x0008) [0x0000000000000000]              
	float                                              ScreamLightFlickerRate;                           		// 0x0DB4 (0x0004) [0x0000000000000000]              
	float                                              ScreamLightRadius;                                		// 0x0DB8 (0x0004) [0x0000000000000000]              
	float                                              ScreamLightFalloffExponent;                       		// 0x0DBC (0x0004) [0x0000000000000000]              
	float                                              MinFlickerBrightness;                             		// 0x0DC0 (0x0004) [0x0000000000000000]              
	float                                              MaxFlickerBrightness;                             		// 0x0DC4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112673 ];

		return pClassPointer;
	};

	void GetTraderAdviceID ( );
	void GetSpotterDialogID ( );
	void GetKillerDialogID ( );
	void TerminateEffectsOnDeath ( );
	void EnableScreamFlicker ( );
	void ANIMNOTIFY_SirenScream ( );
	void SetCharacterArch ( );
};

UClass* AKFPawn_ZedSiren::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedHans
// 0x0220 (0x1140 - 0x0F20)
class AKFPawn_ZedHans : public AKFPawn_ZedHansBase
{
public:
	class UAnimSet*                                    MeleeAnimSet;                                     		// 0x0F20 (0x0008) [0x0000000000000000]              
	class UAnimSet*                                    GunsAnimSet;                                      		// 0x0F28 (0x0008) [0x0000000000000000]              
	class USkelControlSingleBone*                      RightHolsterSkelCtrl;                             		// 0x0F30 (0x0008) [0x0000000000000000]              
	class USkelControlSingleBone*                      LeftHolsterSkelCtrl;                              		// 0x0F38 (0x0008) [0x0000000000000000]              
	class UKFGameExplosion*                            NerveGasExplosiveBlastTemplate;                   		// 0x0F40 (0x0008) [0x0000000000000000]              
	class UKFGameExplosion*                            NerveGasAttackTemplate;                           		// 0x0F48 (0x0008) [0x0000000000000000]              
	class UClass*                                      HeavyBumpDamageType;                              		// 0x0F50 (0x0008) [0x0000000000000000]              
	struct FProjectileTossInfo                         CachedGoodGrenadeToss;                            		// 0x0F58 (0x0030) [0x0000000000000000]              
	class UAkEvent*                                    AmbientBreathingEvent;                            		// 0x0F88 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    LowHealthAmbientBreathingEvent;                   		// 0x0F90 (0x0008) [0x0000000000000000]              
	float                                              TickDialogInterval;                               		// 0x0F98 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BackPackSmokeEffectTemplate;                      		// 0x0F9C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BackPackSmokePSC;                                 		// 0x0FA4 (0x0008) [0x0000000000000000]              
	struct FName                                       BattlePhaseLightFrontSocketName;                  		// 0x0FAC (0x0008) [0x0000000000000000]              
	struct FName                                       BattlePhaseLightBackSocketName;                   		// 0x0FB4 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightTemplateGreen;                    		// 0x0FBC (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightTemplateYellow;                   		// 0x0FC4 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightTemplateRed;                      		// 0x0FCC (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightTemplateBlinking;                 		// 0x0FD4 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightFront;                            		// 0x0FDC (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BattlePhaseLightBack;                             		// 0x0FE4 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                BattlePhaseGlowColorParamGreen;                   		// 0x0FEC (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BattlePhaseGlowColorParamYellow;                  		// 0x0FFC (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BattlePhaseGlowColorParamRed;                     		// 0x100C (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BattlePhaseGlowColorParamBlinking;                		// 0x101C (0x0010) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_LegR;                    		// 0x102C (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_LegL;                    		// 0x1034 (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_ArmR;                    		// 0x103C (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_ArmL;                    		// 0x1044 (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_Chest;                   		// 0x104C (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_TorsoR;                  		// 0x1054 (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_TorsoL;                  		// 0x105C (0x0008) [0x0000000000000000]              
	struct FName                                       BattleDamageFXSocketName_Back;                    		// 0x1064 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_LegR;                             		// 0x106C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_LegL;                             		// 0x1074 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_ArmR;                             		// 0x107C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_ArmL;                             		// 0x1084 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_Chest;                            		// 0x108C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_TorsoR;                           		// 0x1094 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_TorsoL;                           		// 0x109C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BattleDamagePSC_Back;                             		// 0x10A4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_Low;                        		// 0x10AC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_Mid;                        		// 0x10B4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_High;                       		// 0x10BC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_Chest_Mid;                  		// 0x10C4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_Chest_High;                 		// 0x10CC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_Back_Mid;                   		// 0x10D4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Sparks_Back_High;                  		// 0x10DC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Blood_Mid;                         		// 0x10E4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             BattleDamageFX_Blood_High;                        		// 0x10EC (0x0008) [0x0000000000000000]              
	float                                              LastShieldHealthPct;                              		// 0x10F4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             InvulnerableShieldFX;                             		// 0x10F8 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    InvulnerableShieldPSC;                            		// 0x1100 (0x0008) [0x0000000000000000]              
	struct FName                                       ShieldSocketName;                                 		// 0x1108 (0x0008) [0x0000000000000000]              
	class UKFSkinTypeEffects*                          ShieldImpactEffects;                              		// 0x1110 (0x0008) [0x0000000000000000]              
	class UKFGameExplosion*                            ShieldShatterExplosionTemplate;                   		// 0x1118 (0x0008) [0x0000000000000000]              
	struct FColor                                      ShieldColorGreen;                                 		// 0x1120 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorGreen;                             		// 0x1124 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldColorYellow;                                		// 0x1128 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorYellow;                            		// 0x112C (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldColorOrange;                                		// 0x1130 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorOrange;                            		// 0x1134 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldColorRed;                                   		// 0x1138 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShieldCoreColorRed;                               		// 0x113C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112674 ];

		return pClassPointer;
	};

	void GetHitZoneSkinTypeEffects ( );
	void UpdateBattlePhaseParticles ( );
	void UpdateBattlePhaseMaterials ( );
	void UpdateBattlePhaseLights ( );
	void OnBattlePhaseChanged ( );
	void IncrementBattlePhase ( );
	void TerminateEffectsOnDeath ( );
	void DetachShieldFX ( );
	void StopHuntAndHealModeFX ( );
	void BreakShield ( );
	void MakeVectorFromColor ( );
	void UpdateShieldUIOnLocalController ( );
	void UpdateShieldColor ( );
	void PlayHuntAndHealModeFX ( );
	void SetHuntAndHealMode ( );
	void GetBumpAttackDamageType ( );
	void CanInjureHitZone ( );
	void TakeHitZoneDamage ( );
	void eventHealDamage ( );
	void eventTakeDamage ( );
	void PlayBossMusic ( );
	void Timer_TickHansDialog ( );
	void GetTraderAdviceID ( );
	void GetSpotterDialogID ( );
	void GetKillerDialogID ( );
	void DrawDebugOverheadText ( );
	void IsThrowingGrenade ( );
	void AddGrenadeSpread ( );
	void ThrowGrenade ( );
	void StartThrowingGrenade ( );
	void CacheGrenadeThrowLocation ( );
	void ANIMNOTIFY_AoENerveGas ( );
	void ANIMNOTIFY_AoEBlast ( );
	void ANIMNOTIFY_TossGrenade_LeftHand ( );
	void ANIMNOTIFY_TossGrenade_RightHand ( );
	void ShouldPlaySpecialMeleeAnims ( );
	void SetSprinting ( );
	void SetWeaponStance ( );
	void SetCharacterAnimationInfo ( );
	void eventPostInitAnimTree ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( );
};

UClass* AKFPawn_ZedHans::pClassPointer = NULL;

// Class kfgamecontent.KFTraderVoiceGroup_Default
// 0x0000 (0x1154 - 0x1154)
class UKFTraderVoiceGroup_Default : public UKFTraderVoiceGroupBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112675 ];

		return pClassPointer;
	};

};

UClass* UKFTraderVoiceGroup_Default::pClassPointer = NULL;

// Class kfgamecontent.KFTutorialSectionInfo
// 0x0044 (0x00A4 - 0x0060)
class UKFTutorialSectionInfo : public UObject
{
public:
	TArray< struct FSTutorialSlide >                   TutorialSlides;                                   		// 0x0060 (0x0010) [0x0000000000000000]              
	TArray< struct FSTutorialSlide >                   GamepadReplacementSlides;                         		// 0x0070 (0x0010) [0x0000000000000000]              
	TArray< struct FSControllerTutorialSlide >         ControllerReplacementSlides;                      		// 0x0080 (0x0010) [0x0000000000000000]              
	class UAkEvent*                                    VoiceOverOpenEvent;                               		// 0x0090 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    VoiceOverCloseEvent;                              		// 0x0098 (0x0008) [0x0000000000000000]              
	float                                              OpenDelay;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112676 ];

		return pClassPointer;
	};

	void OpenDelayTimer ( );
	void GetSlides ( );
};

UClass* UKFTutorialSectionInfo::pClassPointer = NULL;

// Class kfgamecontent.KFGameInfo_Tutorial
// 0x0094 (0x07EC - 0x0758)
class AKFGameInfo_Tutorial : public AKFGameInfo_Survival
{
public:
	class UClass*                                      MoviePlayerTutorialClass;                         		// 0x0758 (0x0008) [0x0000000000000000]              
	class UKFGFxMoviePlayer_Tutorial*                  MyGFXTutorial;                                    		// 0x0760 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      LobbyStartInfo;                                   		// 0x0768 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      StartMatchInfo;                                   		// 0x0770 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      Wave1EndInfo;                                     		// 0x0778 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      TraderCloseInfo;                                  		// 0x0780 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      VictoryInfo;                                      		// 0x0788 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      HealSelfInfo;                                     		// 0x0790 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      ZedTimeInfo;                                      		// 0x0798 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      MeleeTutorial;                                    		// 0x07A0 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      TraderMenuTutorial;                               		// 0x07A8 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      PerkMenuTutorial;                                 		// 0x07B0 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      GearMenuTutorial;                                 		// 0x07B8 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      InventoryMenuTutorial;                            		// 0x07C0 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      StoreMenuTutorial;                                		// 0x07C8 (0x0008) [0x0000000000000000]              
	DWORD                                              bShowedHealSelf : 1;                              		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bShowedZedTime : 1;                               		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bShowedTraderTutorial : 1;                        		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bShowedMeleeTutorial : 1;                         		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bShowedPerkMenuTutorial : 1;                      		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bShowedGearMenuTutorial : 1;                      		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000020] 
	DWORD                                              bShowedInventoryMenuTutorial : 1;                 		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000040] 
	DWORD                                              bShowedStoreMenuTutorial : 1;                     		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000080] 
	DWORD                                              bShowedTraderCloseInfo : 1;                       		// 0x07D0 (0x0004) [0x0000000000000000] [0x00000100] 
	int                                                TimeAfterTrading;                                 		// 0x07D4 (0x0004) [0x0000000000000000]              
	int                                                StartingDosh;                                     		// 0x07D8 (0x0004) [0x0000000000000000]              
	class AKFPlayerController*                         MyPC;                                             		// 0x07DC (0x0008) [0x0000000000000000]              
	class AWeapon*                                     CurrentWeapon;                                    		// 0x07E4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112711 ];

		return pClassPointer;
	};

	void OnTraderMenuClosed ( );
	void CheckPlayerAction ( );
	void Tick ( );
	void NotifyControllerReconnected ( );
	void NotifyControllerDisconnected ( );
	void RemoveTutorialHud ( );
	void CreateTutorialHUD ( );
	void AllowUnpause ( );
	void NotifyMenuOpened ( );
	void SetZedTimeDilation ( );
	void ResetPickups ( );
	void DetermineNextTraderIndex ( );
	void ShowPostGameMenu ( );
	void OnTutorialRewardsComplete ( );
	void EndOfMatch ( );
	void WaveEnded ( );
	void PreventDeath ( );
	void ReduceDamage ( );
	void RestartPlayer ( );
	void eventPostLogin ( );
	void eventPostBeginPlay ( );
	void eventInitGame ( );
};

UClass* AKFGameInfo_Tutorial::pClassPointer = NULL;

// Class kfgamecontent.KFGFxMoviePlayer_Tutorial
// 0x003C (0x0220 - 0x01E4)
class UKFGFxMoviePlayer_Tutorial : public UGFxMoviePlayer
{
public:
	struct FName                                       SoundThemeName;                                   		// 0x01E4 (0x0008) [0x0000000000000000]              
	class UKFGFxTutorialContainer*                     TutorialContainer;                                		// 0x01EC (0x0008) [0x0000000000000000]              
	TArray< struct FSTutorialSlide >                   TargetTutorialArray;                              		// 0x01F4 (0x0010) [0x0000000000000000]              
	class AKFGameInfo_Tutorial*                        KFGI;                                             		// 0x0204 (0x0008) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      TutorialSectionInfo;                              		// 0x020C (0x0008) [0x0000000000000000]              
	DWORD                                              bUsingGamepad : 1;                                		// 0x0214 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  ManagerObject;                                    		// 0x0218 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112803 ];

		return pClassPointer;
	};

	void Callback_Skip ( );
	void Callback_Done ( );
	void GetUsingGamepad ( );
	void OnInputTypeChanged ( );
	void CheckIfUsingGamepad ( );
	void eventFilterButtonInput ( );
	void eventWidgetInitialized ( );
	void Init ( );
};

UClass* UKFGFxMoviePlayer_Tutorial::pClassPointer = NULL;

// Class kfgamecontent.KFGFxMoviePlayer_Manager_Tutorial
// 0x0000 (0x03F8 - 0x03F8)
class UKFGFxMoviePlayer_Manager_Tutorial : public UKFGFxMoviePlayer_Manager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112822 ];

		return pClassPointer;
	};

	void OpenMenu ( );
};

UClass* UKFGFxMoviePlayer_Manager_Tutorial::pClassPointer = NULL;

// Class kfgamecontent.KFGameReplicationInfoVersus
// 0x0018 (0x1250 - 0x1238)
class AKFGameReplicationInfoVersus : public AKFGameReplicationInfo
{
public:
	DWORD                                              bTeamBalanceEnabled : 1;                          		// 0x1238 (0x0004) [0x0000000001200000] [0x00000001] 
	unsigned char                                      TeamBalanceDelta;                                 		// 0x123C (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentRound;                                     		// 0x123D (0x0001) [0x000000000121000A]              ( CPF_Const | CPF_ExportObject | CPF_Travel )
	unsigned char                                      TimeUntilNextSpawn;                               		// 0x123E (0x0001) [0x0000000000000000]              
	float                                              TimeToLockSwitchTeam;                             		// 0x1240 (0x0004) [0x0000000000000000]              
	struct FsPlayerZedSpawnWaitTimeData                PlayerZedSpawnWaitTimeData;                       		// 0x1244 (0x000C) [0x000000000122000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113055 ];

		return pClassPointer;
	};

	void Reset ( );
	void OnRoundIncremented ( );
	void ServerStartVoteKick ( );
	void eventCanChangePerks ( );
	void GetCurrentRoundNumber ( );
	void AreTeamsOutOfBalanced ( );
	void eventTimer ( );
	void SetTeam ( );
	void Timer_TickDownSpawnTimer ( );
	void SetPlayerZedSpawnTime ( );
	void eventReplicatedEvent ( );
};

UClass* AKFGameReplicationInfoVersus::pClassPointer = NULL;

// Class kfgamecontent.KFTeamInfo_Zeds
// 0x0000 (0x0278 - 0x0278)
class AKFTeamInfo_Zeds : public AKFTeamInfo_Human
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113057 ];

		return pClassPointer;
	};

	void GetHumanReadableName ( );
};

UClass* AKFTeamInfo_Zeds::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedClot_Slasher_Versus
// 0x0008 (0x0DAC - 0x0DA4)
class AKFPawn_ZedClot_Slasher_Versus : public AKFPawn_ZedClot_Slasher
{
public:
	float                                              MegaJumpZ;                                        		// 0x0DA4 (0x0004) [0x0000000000000000]              
	float                                              MegaJumpForwardScale;                             		// 0x0DA8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113061 ];

		return pClassPointer;
	};

	void GetDirectionalJumpScale ( );
	void GetJumpZ ( );
	void GetSprintJumpVelocity ( );
};

UClass* AKFPawn_ZedClot_Slasher_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedClot_Alpha_Versus
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedClot_Alpha_Versus : public AKFPawn_ZedClot_Alpha
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113062 ];

		return pClassPointer;
	};

};

UClass* AKFPawn_ZedClot_Alpha_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedCrawler_Versus
// 0x0008 (0x0DC4 - 0x0DBC)
class AKFPawn_ZedCrawler_Versus : public AKFPawn_ZedCrawler
{
public:
	class AController*                                 OldController;                                    		// 0x0DBC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113063 ];

		return pClassPointer;
	};

	void PlayDying ( );
};

UClass* AKFPawn_ZedCrawler_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedGorefast_Versus
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedGorefast_Versus : public AKFPawn_ZedGorefast
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113064 ];

		return pClassPointer;
	};

};

UClass* AKFPawn_ZedGorefast_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedStalker_Versus
// 0x0000 (0x0DD8 - 0x0DD8)
class AKFPawn_ZedStalker_Versus : public AKFPawn_ZedStalker
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113065 ];

		return pClassPointer;
	};

	void CallOutCloaking ( );
	void eventUpdateSpottedStatus ( );
};

UClass* AKFPawn_ZedStalker_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedScrake_Versus
// 0x0018 (0x0E00 - 0x0DE8)
class AKFPawn_ZedScrake_Versus : public AKFPawn_ZedScrake
{
public:
	float                                              RageSprintSpeed;                                  		// 0x0DE8 (0x0004) [0x0000000000000000]              
	class UClass*                                      RageBumpDamageType;                               		// 0x0DEC (0x0008) [0x0000000000000000]              
	int                                                RageBumpDamage;                                   		// 0x0DF4 (0x0004) [0x0000000000000000]              
	float                                              RageBumpRadius;                                   		// 0x0DF8 (0x0004) [0x0000000000000000]              
	float                                              RageBumpMomentum;                                 		// 0x0DFC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113066 ];

		return pClassPointer;
	};

	void PlayDying ( );
	void Timer_RageBump ( );
	void SetEnraged ( );
	void SetSprinting ( );
};

UClass* AKFPawn_ZedScrake_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedFleshPound_Versus
// 0x0010 (0x0E2C - 0x0E1C)
class AKFPawn_ZedFleshPound_Versus : public AKFPawn_ZedFleshpound
{
public:
	float                                              RageSprintSpeed;                                  		// 0x0E1C (0x0004) [0x0000000000000000]              
	int                                                RageBumpDamage;                                   		// 0x0E20 (0x0004) [0x0000000000000000]              
	float                                              RageBumpRadius;                                   		// 0x0E24 (0x0004) [0x0000000000000000]              
	float                                              RageBumpMomentum;                                 		// 0x0E28 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113067 ];

		return pClassPointer;
	};

	void PlayDying ( );
	void EndRage ( );
	void NotifyMeleeDamageDealt ( );
	void Timer_RageBump ( );
	void SetEnraged ( );
	void SetSprinting ( );
	void PossessedBy ( );
};

UClass* AKFPawn_ZedFleshPound_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedBloat_Versus
// 0x0000 (0x0DF0 - 0x0DF0)
class AKFPawn_ZedBloat_Versus : public AKFPawn_ZedBloat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113068 ];

		return pClassPointer;
	};

	void ANIMNOTIFY_PukeMineAttack ( );
};

UClass* AKFPawn_ZedBloat_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedSiren_Versus
// 0x0000 (0x0DC8 - 0x0DC8)
class AKFPawn_ZedSiren_Versus : public AKFPawn_ZedSiren
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113069 ];

		return pClassPointer;
	};

	void SetSprinting ( );
};

UClass* AKFPawn_ZedSiren_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedHusk_Versus
// 0x0018 (0x0E08 - 0x0DF0)
class AKFPawn_ZedHusk_Versus : public AKFPawn_ZedHusk
{
public:
	float                                              FireballSpeed;                                    		// 0x0DF0 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   FireballStrengthRange;                            		// 0x0DF4 (0x0008) [0x0000000000000000]              
	float                                              FireballStrengthPerSecond;                        		// 0x0DFC (0x0004) [0x0000000000000000]              
	float                                              FireballStrengthRadiusMultiplier;                 		// 0x0E00 (0x0004) [0x0000000000000000]              
	float                                              FireballStrength;                                 		// 0x0E04 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113070 ];

		return pClassPointer;
	};

	void GetFireballStrengthPerSecond ( );
	void GetFireballStrengthRange ( );
	void UseAdjustedControllerSensitivity ( );
	void GetSuicideSM ( );
	void OnExploded ( );
	void ShootFireball ( );
	void ANIMNOTIFY_HuskFireballAttack ( );
	void ANIMNOTIFY_FlameThrowerOn ( );
};

UClass* AKFPawn_ZedHusk_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedPatriarch_Versus
// 0x0058 (0x1190 - 0x1138)
class AKFPawn_ZedPatriarch_Versus : public AKFPawn_ZedPatriarch
{
public:
	class AKFPlayerController*                         MyKFPC;                                           		// 0x1138 (0x0008) [0x00000000006C0000]              ( CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink )
	class AKFPlayerController*                         ViewerPlayer;                                     		// 0x1140 (0x0008) [0x0000000000000000]              
	float                                              LowHealthThreshold;                               		// 0x1148 (0x0004) [0x0000000000000000]              
	DWORD                                              bWarnedLowHealthThisPhase : 1;                    		// 0x114C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bIsQuickHealMessageShowing : 1;                   		// 0x114C (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bAutoHealed : 1;                                  		// 0x114C (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bSummonedThisPhase : 1;                           		// 0x114C (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              HealThreshold;                                    		// 0x1150 (0x0004) [0x0000000000000000]              
	float                                              AutoHealThreshold;                                		// 0x1154 (0x0004) [0x0000000000000000]              
	float                                              SummonChildrenDuration;                           		// 0x1158 (0x0004) [0x0000000000000000]              
	unsigned char                                      CloakCharges;                                     		// 0x115C (0x0001) [0x00000000006D0019]              ( CPF_Edit | CPF_ExportObject | CPF_OptionalParm | CPF_Travel | CPF_GlobalConfig | CPF_Component | CPF_NeedCtorLink )
	struct FString                                     LowHealthMsg;                                     		// 0x1160 (0x0010) [0x0000000000000000]              
	struct FString                                     NoHealsRemainingMsg;                              		// 0x1170 (0x0010) [0x0000000000000000]              
	struct FString                                     NoMortarTargetsMsg;                               		// 0x1180 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113071 ];

		return pClassPointer;
	};

	void Timer_StopSummoningChildren ( );
	void SummonChildren ( );
	void UseAdjustedControllerSensitivity ( );
	void ShouldDrawBossIcon ( );
	void NotifyHealed ( );
	void NotifyTakeHit ( );
	void NotifySpecialMoveEnded ( );
	void CheckHealth ( );
	void IncrementBattlePhase ( );
	void ClearMortarTargets ( );
	void CollectMortarTargets ( );
	void PreMortarAttack ( );
	void GetMortarAimDirAndTargetLoc ( );
	void GetMissileAimDirAndTargetLoc ( );
	void IsHealAllowed ( );
	void UpdateCloakIconState ( );
	void UpdateHealAvailable ( );
	void GetMinCloakPct ( );
	void UpdateGunTrackingSkelCtrl ( );
	void eventTick ( );
	void Timer_EnableCloak ( );
	void UpdateCloakCharges ( );
	void Timer_UpdateCloakCharge ( );
	void UpdateCloakedTimer ( );
	void SetCloaked ( );
	void PossessedBy ( );
	void eventReplicatedEvent ( );
};

UClass* AKFPawn_ZedPatriarch_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_Human_Versus
// 0x0000 (0x0C80 - 0x0C80)
class AKFPawn_Human_Versus : public AKFPawn_Human
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113072 ];

		return pClassPointer;
	};

	void NotifyLocalPlayerTeamReceived ( );
	void UpdateGameplayMICParams ( );
	void SetCharacterArch ( );
};

UClass* AKFPawn_Human_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFGFXHudWrapper_Versus
// 0x0064 (0x06F4 - 0x0690)
class AKFGFXHudWrapper_Versus : public AKFGFxHudWrapper
{
public:
	class AKFGameReplicationInfoVersus*                MyKFGRIV;                                         		// 0x0690 (0x0008) [0x0000000000000000]              
	class UClass*                                      HumanHUDClass;                                    		// 0x0698 (0x0008) [0x0000000000000000]              
	class UClass*                                      ZedHUDClass;                                      		// 0x06A0 (0x0008) [0x0000000000000000]              
	float                                              ZedPlayerHudLocX;                                 		// 0x06A8 (0x0004) [0x0000000000000000]              
	float                                              ZedPlayerHudLocY;                                 		// 0x06AC (0x0004) [0x0000000000000000]              
	int                                                HumanStatusBarLengthMax;                          		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  BossIconTexture;                                  		// 0x06B4 (0x0008) [0x0000000000000000]              
	struct FColor                                      BossIconColor;                                    		// 0x06BC (0x0004) [0x0000000000000000]              
	struct FString                                     WaitingToSpawnString;                             		// 0x06C0 (0x0010) [0x0000000000000000]              
	struct FString                                     ZedTakeOverActiveString;                          		// 0x06D0 (0x0010) [0x0000000000000000]              
	struct FString                                     PerkSwitchAllowedString;                          		// 0x06E0 (0x0010) [0x0000000000000000]              
	int                                                LastTeamIndex;                                    		// 0x06F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113073 ];

		return pClassPointer;
	};

	void DrawRemainingTimeUntilSpawn ( );
	void DrawBossPawnIcon ( );
	void DrawPreciseHumanPlayerInfo ( );
	void DrawFriendlyZedPawnIcon ( );
	void CheckAndDrawBossPawnIcon ( );
	void DrawHUD ( );
	void GetHUDClass ( );
	void CreateHUDMovie ( );
	void PostBeginPlay ( );
};

UClass* AKFGFXHudWrapper_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFGameInfo_WeeklySurvival
// 0x01A0 (0x08F8 - 0x0758)
class AKFGameInfo_WeeklySurvival : public AKFGameInfo_Survival
{
public:
	TArray< struct FWeeklyOverrides >                  SetEvents;                                        		// 0x0758 (0x0010) [0x0000000000000000]              
	TArray< struct FWeeklyOverrides >                  TestEvents;                                       		// 0x0768 (0x0010) [0x0000000000000000]              
	struct FWeeklyOverrides                            ActiveEvent;                                      		// 0x0778 (0x0178) [0x0000000000000000]              
	int                                                ActiveEventIdx;                                   		// 0x08F0 (0x0004) [0x0000000000000000]              
	int                                                CurrentFrameBooms;                                		// 0x08F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113074 ];

		return pClassPointer;
	};

	void ApplyGlobalDamage ( );
	void ReduceDamage ( );
	void AdjustForBeefcakeRules ( );
	void AdjustPawnScale ( );
	void DoDeathExplosion ( );
	void NotifyIgnoredScream ( );
	void NotifyRally ( );
	void ScoreKill ( );
	void PassiveHeal ( );
	void ScoreHeal ( );
	void ScoreDamage ( );
	void RestartPlayer ( );
	void AdjustStartingGrenadeCount ( );
	void AllowPrimaryWeapon ( );
	void GetGameInfoSpawnRateMod ( );
	void SetMonsterDefaults ( );
	void GetBossAISpawnType ( );
	void GetAISpawnType ( );
	void ResetPickups ( );
	void ResetAllPickups ( );
	void InitAllPickups ( );
	void SetupNextTrader ( );
	void OpenTrader ( );
	void GetAdditionalBossSpawns ( );
	void PauseAdditionalBossWaves ( );
	void SpawnBossWave ( );
	void BossCameraZedTimeRecheck ( );
	void StartWave ( );
	void GetTotalWaveCountScale ( );
	void ModifyGroundSpeed ( );
	void EndOfMatch ( );
	void ClearZedTimePCTimers ( );
	void WaveEnded ( );
	void TickZedTime ( );
	void Tick ( );
	void eventPostLogin ( );
	void CreateDifficultyInfo ( );
	void StartMatch ( );
	void ResetPermanentZed ( );
	void SetPermanentZedTime ( );
	void SetWorldInfoOverrides ( );
	void SetSpawnPointOverrides ( );
	void SetZedTimeOverrides ( );
	void SetPickupItemList ( );
	void SetGameLength ( );
	void SetGameDifficulty ( );
	void eventPreBeginPlay ( );
	void eventInitGame ( );
	void GametypeChecksWaveLength ( );
	void GametypeChecksDifficulty ( );
	void eventSetGameType ( );
};

UClass* AKFGameInfo_WeeklySurvival::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedClot_AlphaKing
// 0x000C (0x0DB0 - 0x0DA4)
class AKFPawn_ZedClot_AlphaKing : public AKFPawn_ZedClot_Alpha
{
public:
	float                                              SelfRallyDealtDamageModifier;                     		// 0x0DA4 (0x0004) [0x0000000000000000]              
	float                                              SelfRallyTakenDamageModifier;                     		// 0x0DA8 (0x0004) [0x0000000000000000]              
	DWORD                                              bWasSelfRally : 1;                                		// 0x0DAC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113338 ];

		return pClassPointer;
	};

	void GetRallyBoostResistance ( );
	void GetRallyBoostDamage ( );
	void Rally ( );
	void eventPossessedBy ( );
	void eventPostBeginPlay ( );
};

UClass* AKFPawn_ZedClot_AlphaKing::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedCrawlerKing
// 0x0004 (0x0DC0 - 0x0DBC)
class AKFPawn_ZedCrawlerKing : public AKFPawn_ZedCrawler
{
public:
	DWORD                                              bShouldExplode : 1;                               		// 0x0DBC (0x0004) [0x0000000000690000] [0x00000001] ( CPF_Travel | CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113340 ];

		return pClassPointer;
	};

	void Timer_CheckForExplode ( );
	void CancelExplosion ( );
	void PlayDying ( );
	void Died ( );
	void PlayHeadAsplode ( );
	void CauseHeadTrauma ( );
};

UClass* AKFPawn_ZedCrawlerKing::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedGorefastDualBlade
// 0x0000 (0x0DA4 - 0x0DA4)
class AKFPawn_ZedGorefastDualBlade : public AKFPawn_ZedGorefast
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113341 ];

		return pClassPointer;
	};

};

UClass* AKFPawn_ZedGorefastDualBlade::pClassPointer = NULL;

// Class kfgamecontent.KFGFxHUD_PlayerStatusVersus
// 0x0008 (0x00EC - 0x00E4)
class UKFGFxHUD_PlayerStatusVersus : public UKFGFxHUD_PlayerStatus
{
public:
	class UClass*                                      LastPawnClass;                                    		// 0x00E4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113378 ];

		return pClassPointer;
	};

	void ClearBuffIcons ( );
	void ShowActiveIndicators ( );
	void UpdateHealer ( );
	void UpdatePerk ( );
	void UpdateArmor ( );
	void UpdateXP ( );
	void UpdateHealth ( );
	void UpdateCharacterName ( );
	void TickHud ( );
};

UClass* UKFGFxHUD_PlayerStatusVersus::pClassPointer = NULL;

// Class kfgamecontent.KFGFxMoviePlayer_HUD_Versus
// 0x0010 (0x0318 - 0x0308)
class UKFGFxMoviePlayer_HUD_Versus : public UKFGFxMoviePlayer_HUD
{
public:
	class UKFGFxHUD_PlayerMoveList*                    MoveListContainer;                                		// 0x0308 (0x0008) [0x0000000000000000]              
	class UKFGFxHud_PlayerRosterWidget*                PlayerRoster;                                     		// 0x0310 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113471 ];

		return pClassPointer;
	};

	void PawnDied ( );
	void ReceivePawn ( );
	void eventWidgetInitialized ( );
	void TickHud ( );
};

UClass* UKFGFxMoviePlayer_HUD_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFGFxTutorialContainer
// 0x0070 (0x0150 - 0x00E0)
class UKFGFxTutorialContainer : public UKFGFxObject_Menu
{
public:
	struct FString                                     ControllerStringPrefix;                           		// 0x00E0 (0x0010) [0x0000000000000000]              
	struct FString                                     BackString;                                       		// 0x00F0 (0x0010) [0x0000000000000000]              
	struct FString                                     NextString;                                       		// 0x0100 (0x0010) [0x0000000000000000]              
	struct FString                                     DoneString;                                       		// 0x0110 (0x0010) [0x0000000000000000]              
	struct FString                                     SkipString;                                       		// 0x0120 (0x0010) [0x0000000000000000]              
	class UKFTutorialSectionInfo*                      TutorialArch;                                     		// 0x0130 (0x0008) [0x0000000000000000]              
	struct FString                                     KeyReplaceString;                                 		// 0x0138 (0x0010) [0x0000000000000000]              
	class UKFPlayerInput*                              KFPI;                                             		// 0x0148 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113522 ];

		return pClassPointer;
	};

	void ReplaceTextArray ( );
	void SetPopUpData ( );
	void LocalizeText ( );
	void UpdateUsingGamePad ( );
	void InitMenu ( );
};

UClass* UKFGFxTutorialContainer::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Arm
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Arm : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113560 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Arm::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Chest
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Chest : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113564 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Chest::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Foot
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Foot : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113566 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Foot::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_ForeArm
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_ForeArm : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113568 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_ForeArm::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Hand
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Hand : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113570 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Hand::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Head
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Head : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113572 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Head::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Hips
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Hips : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113578 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Hips::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Leg
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Leg : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113580 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Leg::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Neck
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Neck : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113582 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Neck::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Shoulder
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Shoulder : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113584 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Shoulder::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Spine1
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Spine1 : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113587 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Spine1::pClassPointer = NULL;

// Class kfgamecontent.KFGoreJoint_Thigh
// 0x0000 (0x00DC - 0x00DC)
class UKFGoreJoint_Thigh : public UKFGoreJointInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113590 ];

		return pClassPointer;
	};

};

UClass* UKFGoreJoint_Thigh::pClassPointer = NULL;

// Class kfgamecontent.KFInventory_Armor
// 0x0000 (0x02B8 - 0x02B8)
class AKFInventory_Armor : public AInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113592 ];

		return pClassPointer;
	};

};

UClass* AKFInventory_Armor::pClassPointer = NULL;

// Class kfgamecontent.KFInventory_Money
// 0x0008 (0x02C0 - 0x02B8)
class AKFInventory_Money : public AInventory
{
public:
	float                                              NextDropCashMessageTime;                          		// 0x02B8 (0x0004) [0x0000000000000000]              
	float                                              DropCashMessageDelay;                             		// 0x02BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113595 ];

		return pClassPointer;
	};

	void DenyPickupQuery ( );
	void DropFrom ( );
};

UClass* AKFInventory_Money::pClassPointer = NULL;

// Class kfgamecontent.KFMG_TargetGame
// 0x0034 (0x0278 - 0x0244)
class AKFMG_TargetGame : public AActor
{
public:
	DWORD                                              bGameRunning : 1;                                 		// 0x0244 (0x0004) [0x0000000000150000] [0x00000001] ( CPF_Travel | CPF_GlobalConfig )
	DWORD                                              bClearControllerOnCompletion : 1;                 		// 0x0244 (0x0004) [0x0000000000000000] [0x00000002] 
	class AKFTrigger_MinigameButton*                   Activator;                                        		// 0x0248 (0x0008) [0x0000000000000000]              
	TArray< class AController* >                       KillerControllers;                                		// 0x0250 (0x0010) [0x0000000000000000]              
	TArray< class AActor* >                            MinigameTargets;                                  		// 0x0260 (0x0010) [0x0000000000000000]              
	int                                                EventIndex;                                       		// 0x0270 (0x0004) [0x0000000000000000]              
	int                                                ObjectiveIndex;                                   		// 0x0274 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113610 ];

		return pClassPointer;
	};

	void NotifyWinners ( );
	void MinigameComplete ( );
	void ResetGame ( );
	void FinalizeGame ( );
	void TargetHit ( );
	void eventCanPlayAkEvent ( );
	void UpdateBase ( );
	void CanBeActivated ( );
	void Deactivated ( );
	void Activated ( );
};

UClass* AKFMG_TargetGame::pClassPointer = NULL;

// Class kfgamecontent.KFSeqEvent_MinigameEndCondition
// 0x0004 (0x0174 - 0x0170)
class UKFSeqEvent_MinigameEndCondition : public USequenceEvent
{
public:
	int                                                LevelCompleted;                                   		// 0x0170 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113643 ];

		return pClassPointer;
	};

	void AllLevelsComplete ( );
	void MinigameComplete ( );
};

UClass* UKFSeqEvent_MinigameEndCondition::pClassPointer = NULL;

// Class kfgamecontent.KFMGA_Target
// 0x005C (0x02A0 - 0x0244)
class AKFMGA_Target : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0244 (0x0008) [0x0000000000000000]              
	class UCylinderComponent*                          CollisionCylinder;                                		// 0x024C (0x0008) [0x0000000000000000]              
	int                                                NumHits;                                          		// 0x0254 (0x0004) [0x0000000000150000]              ( CPF_Travel | CPF_GlobalConfig )
	class AKFMG_TargetGame*                            SpawnerOwner;                                     		// 0x0258 (0x0008) [0x0000000000160000]              ( CPF_EditConst | CPF_GlobalConfig )
	int                                                SpawnerOwnerIndex;                                		// 0x0260 (0x0004) [0x0000000000170000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig )
	DWORD                                              bIgnoreRadiusDamage : 1;                          		// 0x0264 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bActiveTarget : 1;                                		// 0x0264 (0x0004) [0x0000000000180000] [0x00000002] ( CPF_Component )
	TArray< class UClass* >                            AcceptedDamageTypes;                              		// 0x0268 (0x0010) [0x0000000000000000]              
	struct FName                                       AttachBoneName;                                   		// 0x0278 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             DeathVFXTemplate;                                 		// 0x0280 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    DeathSFX;                                         		// 0x0288 (0x0008) [0x0000000000000000]              
	class UAkComponent*                                DeathSFXComponent;                                		// 0x0290 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    InvalidHitSFX;                                    		// 0x0298 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113644 ];

		return pClassPointer;
	};

	void IsAlive ( );
	void eventPlayDeath ( );
	void eventFinalize ( );
	void eventSetInactive ( );
	void eventSetActive ( );
	void eventReset ( );
	void InvalidHit ( );
	void ValidHit ( );
	void eventTakeDamage ( );
	void TakeRadiusDamage ( );
	void AddToOwnerArray ( );
	void eventReplicatedEvent ( );
};

UClass* AKFMGA_Target::pClassPointer = NULL;

// Class kfgamecontent.KFMG_BloatDunk
// 0x0074 (0x02EC - 0x0278)
class AKFMG_BloatDunk : public AKFMG_TargetGame
{
public:
	class AActor*                                      TargetArchetype;                                  		// 0x0278 (0x0008) [0x0000000000000000]              
	class AKFMGA_TargetGame*                           OuterWheel;                                       		// 0x0280 (0x0008) [0x0000000000160000]              ( CPF_EditConst | CPF_GlobalConfig )
	class AKFMGA_TargetGame*                           InnerWheel;                                       		// 0x0288 (0x0008) [0x0000000000170000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig )
	class ASkeletalMeshActor*                          DunkTankRig;                                      		// 0x0290 (0x0008) [0x0000000000180000]              ( CPF_Component )
	class ASkeletalMeshActor*                          BloatRig;                                         		// 0x0298 (0x0008) [0x0000000000190000]              ( CPF_Travel | CPF_Component )
	float                                              TargetActivationDelay;                            		// 0x02A0 (0x0004) [0x0000000000000000]              
	float                                              StartingRotationRate;                             		// 0x02A4 (0x0004) [0x0000000000000000]              
	float                                              PerHitRotationIncrease;                           		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                NumActiveTargets;                                 		// 0x02AC (0x0004) [0x0000000000000000]              
	float                                              CurrentRotationRate;                              		// 0x02B0 (0x0004) [0x00000000001A000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component )
	int                                                TargetsRemaining;                                 		// 0x02B4 (0x0004) [0x0000000000000000]              
	unsigned char                                      BloatGameState;                                   		// 0x02B8 (0x0001) [0x00000000001B000A]              ( CPF_Const | CPF_ExportObject | CPF_Travel | CPF_EditConst | CPF_Component )
	struct FName                                       IdleClosedAnim;                                   		// 0x02BC (0x0008) [0x0000000000000000]              
	struct FName                                       IdleOpenAnim;                                     		// 0x02C4 (0x0008) [0x0000000000000000]              
	struct FName                                       OpenAnim;                                         		// 0x02CC (0x0008) [0x0000000000000000]              
	struct FName                                       DunkVictoryAnim;                                  		// 0x02D4 (0x0008) [0x0000000000000000]              
	struct FName                                       VictoryCloseAnim;                                 		// 0x02DC (0x0008) [0x0000000000000000]              
	struct FName                                       DefeatCloseAnim;                                  		// 0x02E4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113646 ];

		return pClassPointer;
	};

	void FinalizeVictory ( );
	void SetBloatRagdoll ( );
	void HandleDelayedShutdown ( );
	void FinalizeGame ( );
	void MinigameComplete ( );
	void UpdateBase ( );
	void TargetHit ( );
	void ActivateTargets ( );
	void StartupGame ( );
	void HandleDelayedStartup ( );
	void Reset ( );
	void Activated ( );
	void SpawnTarget ( );
	void eventPostBeginPlay ( );
	void eventTick ( );
	void eventReplicatedEvent ( );
};

UClass* AKFMG_BloatDunk::pClassPointer = NULL;

// Class kfgamecontent.KFMGA_TargetGame
// 0x0050 (0x02F4 - 0x02A4)
class AKFMGA_TargetGame : public ASkeletalMeshActor
{
public:
	TArray< struct FsTargetGameData >                  MinigameAnimData;                                 		// 0x02A4 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             TargetBones;                                      		// 0x02B4 (0x0010) [0x0000000000000000]              
	struct FName                                       GameStartAnim;                                    		// 0x02C4 (0x0008) [0x0000000000000000]              
	struct FName                                       GameEndAnim;                                      		// 0x02CC (0x0008) [0x0000000000000000]              
	struct FName                                       IdleClosedAnim;                                   		// 0x02D4 (0x0008) [0x0000000000000000]              
	struct FName                                       IdleOpenAnim;                                     		// 0x02DC (0x0008) [0x0000000000000000]              
	float                                              PostVictoryIdleTime;                              		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              PostDefeatIdleTime;                               		// 0x02E8 (0x0004) [0x0000000000000000]              
	class AKFMG_TargetGame*                            ParentGame;                                       		// 0x02EC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113708 ];

		return pClassPointer;
	};

	void eventCanPlayAkEvent ( );
	void Deactivated ( );
	void Activated ( );
	void CanBeActivated ( );
};

UClass* AKFMGA_TargetGame::pClassPointer = NULL;

// Class kfgamecontent.KFMG_RiggedTargetGame
// 0x0034 (0x02AC - 0x0278)
class AKFMG_RiggedTargetGame : public AKFMG_TargetGame
{
public:
	class AActor*                                      TargetArchetype;                                  		// 0x0278 (0x0008) [0x0000000000000000]              
	class AKFMGA_TargetGame*                           MinigameRig;                                      		// 0x0280 (0x0008) [0x000000000016000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_GlobalConfig )
	int                                                TargetsRemaining;                                 		// 0x0288 (0x0004) [0x0000000000000000]              
	int                                                AnimationIndex;                                   		// 0x028C (0x0004) [0x0000000000170000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig )
	int                                                RigIndex;                                         		// 0x0290 (0x0004) [0x0000000000180000]              ( CPF_Component )
	DWORD                                              bLocalStarted : 1;                                		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                EndGameState;                                     		// 0x0298 (0x0004) [0x0000000000190000]              ( CPF_Travel | CPF_Component )
	TArray< float >                                    BlendToTimes;                                     		// 0x029C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113714 ];

		return pClassPointer;
	};

	void Finalize ( );
	void HandleDelayedShutdown ( );
	void FinalizeGame ( );
	void MinigameComplete ( );
	void eventCanPlayAkEvent ( );
	void UpdateBase ( );
	void TargetHit ( );
	void DelayedStart ( );
	void StartupGame ( );
	void SwitchAnim ( );
	void Activated ( );
	void Reset ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( );
};

UClass* AKFMG_RiggedTargetGame::pClassPointer = NULL;

// Class kfgamecontent.KFMG_MultilevelTargetGame
// 0x0020 (0x02CC - 0x02AC)
class AKFMG_MultilevelTargetGame : public AKFMG_RiggedTargetGame
{
public:
	TArray< class AKFTrigger_MinigameButton* >         StarterButtons;                                   		// 0x02AC (0x0010) [0x0000000000000000]              
	TArray< DWORD >                                    LevelsCleared;                                    		// 0x02BC (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113776 ];

		return pClassPointer;
	};

	void ResetGame ( );
	void CheckFullCompletion ( );
	void MinigameComplete ( );
	void Deactivated ( );
	void Activated ( );
	void CanBeActivated ( );
	void eventPostBeginPlay ( );
};

UClass* AKFMG_MultilevelTargetGame::pClassPointer = NULL;

// Class kfgamecontent.KFMG_SwingRide
// 0x0038 (0x02DC - 0x02A4)
class AKFMG_SwingRide : public ASkeletalMeshActor
{
public:
	float                                              SpinUpTime;                                       		// 0x02A4 (0x0004) [0x0000000000000000]              
	float                                              SpinDownTime;                                     		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              RotationPerSecond;                                		// 0x02AC (0x0004) [0x0000000000000000]              
	DWORD                                              bSwingActive : 1;                                 		// 0x02B0 (0x0004) [0x0000000000180000] [0x00000001] ( CPF_Component )
	struct FInterpCurveFloat                           SpinUpCurve;                                      		// 0x02B4 (0x0014) [0x0000000000000000]              
	struct FInterpCurveFloat                           SpinDownCurve;                                    		// 0x02C8 (0x0014) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113800 ];

		return pClassPointer;
	};

	void RideStopped ( );
	void Deactivated ( );
	void Activated ( );
	void SetSpinDownCurve ( );
	void SetSpinUpCurve ( );
	void eventCanPlayAkEvent ( );
	void CanBeActivated ( );
	void eventReplicatedEvent ( );
};

UClass* AKFMG_SwingRide::pClassPointer = NULL;

// Class kfgamecontent.KFMGA_AnimatedTrap
// 0x00B0 (0x0354 - 0x02A4)
class AKFMGA_AnimatedTrap : public ASkeletalMeshActor
{
public:
	struct FName                                       DeactivatedIdleAnim;                              		// 0x02A4 (0x0008) [0x0000000000000000]              
	struct FName                                       ActivationAnim;                                   		// 0x02AC (0x0008) [0x0000000000000000]              
	struct FName                                       ActivatedIdleAnim;                                		// 0x02B4 (0x0008) [0x0000000000000000]              
	struct FName                                       DeactivationAnim;                                 		// 0x02BC (0x0008) [0x0000000000000000]              
	DWORD                                              bActivated : 1;                                   		// 0x02C4 (0x0004) [0x0000000000180000] [0x00000001] ( CPF_Component )
	struct FVector                                     MovementVector;                                   		// 0x02C8 (0x000C) [0x0000000000000000]              
	float                                              MovementTime;                                     		// 0x02D4 (0x0004) [0x0000000000000000]              
	struct FInterpCurveVector                          MovementCurve;                                    		// 0x02D8 (0x0014) [0x0000000000000000]              
	class UAkEvent*                                    ActivationStart;                                  		// 0x02EC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    ActivationEnd;                                    		// 0x02F4 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    DeactivationStart;                                		// 0x02FC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    DeactivationEnd;                                  		// 0x0304 (0x0008) [0x0000000000000000]              
	class UAkComponent*                                CageSFXComponent;                                 		// 0x030C (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    CurStartSound;                                    		// 0x0314 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    CurEndSound;                                      		// 0x031C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    ActivationStartFX;                                		// 0x0324 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    ActivationEndFX;                                  		// 0x032C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    DeactivationStartFX;                              		// 0x0334 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    DeactivationEndFX;                                		// 0x033C (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    CurStartFX;                                       		// 0x0344 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    CurEndFX;                                         		// 0x034C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113849 ];

		return pClassPointer;
	};

	void EndMovement ( );
	void CanBeActivated ( );
	void SetMoveDeactivationCurve ( );
	void SetMoveActivationCurve ( );
	void PlayDeactivationIdle ( );
	void PlayDeactivation ( );
	void PlayActivationIdle ( );
	void PlayActivation ( );
	void Deactivated ( );
	void Activated ( );
	void eventCanPlayAkEvent ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( );
};

UClass* AKFMGA_AnimatedTrap::pClassPointer = NULL;

// Class kfgamecontent.KFMGA_DoshTossPit
// 0x0028 (0x02C8 - 0x02A0)
class AKFMGA_DoshTossPit : public AKFMGA_Target
{
public:
	int                                                DoshReward;                                       		// 0x02A0 (0x0004) [0x0000000000000000]              
	float                                              TimeToBlend;                                      		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendPerBone*                       CachedBlendNode;                                  		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    InnerGlowPSC;                                     		// 0x02B0 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    OuterGlowPSC;                                     		// 0x02B8 (0x0008) [0x0000000000000000]              
	struct FColor                                      ActiveGlowColor;                                  		// 0x02C0 (0x0004) [0x0000000000000000]              
	struct FColor                                      InactiveGlowColor;                                		// 0x02C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113959 ];

		return pClassPointer;
	};

	void eventFinalize ( );
	void eventSetInactive ( );
	void eventSetActive ( );
	void PlayDeath ( );
	void SetBucketLidState ( );
	void eventReset ( );
	void DoshHit ( );
	void ValidHit ( );
	void eventTouch ( );
	void eventTick ( );
	void eventTakeDamage ( );
};

UClass* AKFMGA_DoshTossPit::pClassPointer = NULL;

// Class kfgamecontent.KFMGA_Rollercoaster
// 0x004C (0x03A0 - 0x0354)
class AKFMGA_Rollercoaster : public AKFMGA_AnimatedTrap
{
public:
	float                                              MovementStartTime;                                		// 0x0354 (0x0004) [0x0000000000000000]              
	float                                              MovementBackTime;                                 		// 0x0358 (0x0004) [0x0000000000000000]              
	class AKFTrigger_MinigameButton*                   MoveLeftButton;                                   		// 0x035C (0x0008) [0x0000000000000000]              
	class AKFTrigger_MinigameButton*                   MoveRightButton;                                  		// 0x0364 (0x0008) [0x0000000000000000]              
	int                                                MoveDirection;                                    		// 0x036C (0x0004) [0x0000000000190000]              ( CPF_Travel | CPF_Component )
	struct FVector                                     CachedMovementVector;                             		// 0x0370 (0x000C) [0x0000000000000000]              
	struct FVector                                     RightMoveVector;                                  		// 0x037C (0x000C) [0x0000000000000000]              
	float                                              RightMovementTime;                                		// 0x0388 (0x0004) [0x0000000000000000]              
	float                                              RightMovementBackTime;                            		// 0x038C (0x0004) [0x0000000000000000]              
	class AKFDynamicPhysicsVolume*                     LeftPhysicsVolume;                                		// 0x0390 (0x0008) [0x0000000000000000]              
	class AKFDynamicPhysicsVolume*                     RightPhysicsVolume;                               		// 0x0398 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114007 ];

		return pClassPointer;
	};

	void SetMoveActivationCurve ( );
	void PlayDeactivation ( );
	void PlayActivationIdle ( );
	void Deactivated ( );
	void Activated ( );
	void eventReplicatedEvent ( );
	void CanBeActivated ( );
	void eventPostBeginPlay ( );
};

UClass* AKFMGA_Rollercoaster::pClassPointer = NULL;

// Class kfgamecontent.KFMGA_Target_BloatDunk
// 0x0018 (0x02B8 - 0x02A0)
class AKFMGA_Target_BloatDunk : public AKFMGA_Target
{
public:
	class UPointLightComponent*                        OnLight;                                          		// 0x02A0 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        OffLight;                                         		// 0x02A8 (0x0008) [0x0000000000000000]              
	class UStaticMeshComponent*                        OnMesh;                                           		// 0x02B0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114042 ];

		return pClassPointer;
	};

	void eventSetInactive ( );
	void eventSetActive ( );
	void eventReset ( );
	void ValidHit ( );
};

UClass* AKFMGA_Target_BloatDunk::pClassPointer = NULL;

// Class kfgamecontent.KFMGVolume_DoshToss
// 0x0000 (0x0280 - 0x0280)
class AKFMGVolume_DoshToss : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114076 ];

		return pClassPointer;
	};

	void eventTouch ( );
};

UClass* AKFMGVolume_DoshToss::pClassPointer = NULL;

// Class kfgamecontent.KFvolume_RagdollThrow
// 0x0034 (0x031C - 0x02E8)
class AKFvolume_RagdollThrow : public AKFDynamicPhysicsVolume
{
public:
	TArray< struct FHitTracking >                      TrackedHits;                                      		// 0x02E8 (0x0010) [0x0000000000000000]              
	float                                              RateLimiter;                                      		// 0x02F8 (0x0004) [0x0000000000000000]              
	DWORD                                              bKnockdownZeds : 1;                               		// 0x02FC (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bFixedThrowVector : 1;                            		// 0x02FC (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bExcludeAnyBoss : 1;                              		// 0x02FC (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     ThrowDirection;                                   		// 0x0300 (0x000C) [0x0000000000000000]              
	TArray< class UClass* >                            HitExclusionList;                                 		// 0x030C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114084 ];

		return pClassPointer;
	};

	void eventTouch ( );
};

UClass* AKFvolume_RagdollThrow::pClassPointer = NULL;

// Class kfgamecontent.KFMGVolume_SwingHit
// 0x0000 (0x031C - 0x031C)
class AKFMGVolume_SwingHit : public AKFvolume_RagdollThrow
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114109 ];

		return pClassPointer;
	};

};

UClass* AKFMGVolume_SwingHit::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Evade_Fear
// 0x0000 (0x0160 - 0x0160)
class UKFSM_Evade_Fear : public UKFSM_Evade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114220 ];

		return pClassPointer;
	};

};

UClass* UKFSM_Evade_Fear::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Emerge_Crawler
// 0x0001 (0x017D - 0x017C)
class UKFSM_Emerge_Crawler : public UKFSM_Emerge
{
public:
	unsigned char                                      LastEmergeType;                                   		// 0x017C (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114459 ];

		return pClassPointer;
	};

	void PushOverlappingHumans ( );
	void GetEmergeAnim ( );
	void SetCrawlerPostEmergeFlags ( );
	void PlayEmerge ( );
};

UClass* UKFSM_Emerge_Crawler::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerCrawler_Suicide
// 0x0010 (0x0160 - 0x0150)
class UKFSM_PlayerCrawler_Suicide : public UKFSM_PlaySingleAnim
{
public:
	class UKFGameExplosion*                            SuicideGasExplosionTemplate;                      		// 0x0150 (0x0008) [0x0000000000000000]              
	class UClass*                                      SuicideDamageType;                                		// 0x0158 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114465 ];

		return pClassPointer;
	};

	void TriggerExplosion ( );
	void SpecialMoveEnded ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerCrawler_Suicide::pClassPointer = NULL;

// Class kfgamecontent.KFPlayerCamera_Versus
// 0x0020 (0x0740 - 0x0720)
class AKFPlayerCamera_Versus : public AKFPlayerCamera
{
public:
	class UKFPlayerZedWaitingCamera*                   PlayerZedWaitingCam;                              		// 0x0720 (0x0008) [0x0000000000000000]              
	class UClass*                                      PlayerZedWaitingCameraClass;                      		// 0x0728 (0x0008) [0x0000000000000000]              
	class UKFPlayerZedSuicideCamera*                   PlayerZedSuicideCam;                              		// 0x0730 (0x0008) [0x0000000000000000]              
	class UClass*                                      PlayerZedSuicideCameraClass;                      		// 0x0738 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114467 ];

		return pClassPointer;
	};

	void FindBestCameraType ( );
	void SwapToZedSuicideCam ( );
	void PostBeginPlay ( );
};

UClass* AKFPlayerCamera_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedFleshpound_Mixer
// 0x0000 (0x0E1C - 0x0E1C)
class AKFPawn_ZedFleshpound_Mixer : public AKFPawn_ZedFleshpound
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114614 ];

		return pClassPointer;
	};

	void eventUsePlayerControlledZedSkin ( );
};

UClass* AKFPawn_ZedFleshpound_Mixer::pClassPointer = NULL;

// Class kfgamecontent.KFSkinTypeEffects_HansShield
// 0x0000 (0x0258 - 0x0258)
class UKFSkinTypeEffects_HansShield : public UKFSkinTypeEffects
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 114674 ];

		return pClassPointer;
	};

	void AttachEffectToHitLocation ( );
};

UClass* UKFSkinTypeEffects_HansShield::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HansHEGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_HansHEGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115155 ];

		return pClassPointer;
	};

	void SpecialRandSpin ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_HansHEGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HansNerveGasGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_HansNerveGasGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115156 ];

		return pClassPointer;
	};

	void PrepareExplosionTemplate ( );
	void StopFlightEffects ( );
	void eventGrenadeIsAtRest ( );
	void SpecialRandSpin ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_HansNerveGasGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HansSmokeGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_HansSmokeGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115157 ];

		return pClassPointer;
	};

	void StopFlightEffects ( );
	void eventGrenadeIsAtRest ( );
	void SpecialRandSpin ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_HansSmokeGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_DualMKb42_Hans
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_AssaultRifle_DualMKb42_Hans : public AKFWeap_RifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115173 ];

		return pClassPointer;
	};

	void ConsumeAmmo ( );
	void SpawnProjectile ( );
};

UClass* AKFWeap_AssaultRifle_DualMKb42_Hans::pClassPointer = NULL;

// Class kfgamecontent.KFSM_GrappleAttack_Hans
// 0x0070 (0x020C - 0x019C)
class UKFSM_GrappleAttack_Hans : public UKFSM_GrappleCombined
{
public:
	struct FName                                       GrabStartAnimNameLunge;                           		// 0x019C (0x0008) [0x0000000000000000]              
	DWORD                                              bAlreadyDetachedFollower : 1;                     		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000001] 
	class AKFPawn*                                     CachedFollower;                                   		// 0x01A8 (0x0008) [0x0000000000000000]              
	float                                              DrainInterval;                                    		// 0x01B0 (0x0004) [0x0000000000000000]              
	float                                              DelayBeforeDrain;                                 		// 0x01B4 (0x0004) [0x0000000000000000]              
	int                                                HealthGainPerDrainInterval;                       		// 0x01B8 (0x0004) [0x0000000000000000]              
	int                                                DamageDrainRemaining;                             		// 0x01BC (0x0004) [0x0000000000000000]              
	int                                                NumDrainsRemaining;                               		// 0x01C0 (0x0004) [0x0000000000000000]              
	int                                                FollowerStartingHealth;                           		// 0x01C4 (0x0004) [0x0000000000000000]              
	float                                              EnemyDrawLifeThreshold;                           		// 0x01C8 (0x0004) [0x0000000000000000]              
	float                                              MaxEnemyLifeDrawThresholdNormal;                  		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              MaxEnemyLifeDrawThresholdHard;                    		// 0x01D0 (0x0004) [0x0000000000000000]              
	float                                              MaxEnemyLifeDrawThresholdSuicidal;                		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              MaxEnemyLifeDrawThresholdHellOnEarth;             		// 0x01D8 (0x0004) [0x0000000000000000]              
	float                                              MinEnemyLifeDrawThreshold;                        		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              PostDrainAttackCooldown;                          		// 0x01E0 (0x0004) [0x0000000000000000]              
	class UClass*                                      LifeDrainSmokeExplosionActorClass;                		// 0x01E4 (0x0008) [0x0000000000000000]              
	class UKFGameExplosion*                            LifeDrainSmokeExplosionTemplate;                  		// 0x01EC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             InvulnerableEnergyFX;                             		// 0x01F4 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    InvulnerableEnergyPSC;                            		// 0x01FC (0x0008) [0x0000000000000000]              
	struct FName                                       InvulnerableEnergySocketName;                     		// 0x0204 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115182 ];

		return pClassPointer;
	};

	void NotifyOwnerTakeHit ( );
	void OnFollowerLeavingSpecialMove ( );
	void AnimEndNotify ( );
	void Timer_DetachFollower ( );
	void Timer_DrainHealth ( );
	void SpecialMoveEnded ( );
	void SpecialMoveFlagsUpdated ( );
	void BeginGrapple ( );
	void PlayGrappleLoopAnim ( );
	void PlayGrabAnim ( );
	void SpecialMoveStarted ( );
	void PackFlagsBase ( );
};

UClass* UKFSM_GrappleAttack_Hans::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Hans_WeaponSwitch
// 0x0004 (0x0154 - 0x0150)
class UKFSM_Hans_WeaponSwitch : public UKFSM_PlaySingleAnim
{
public:
	DWORD                                              bIsEquipping : 1;                                 		// 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115183 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void PlayAnimation ( );
};

UClass* UKFSM_Hans_WeaponSwitch::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Hans_ThrowGrenade
// 0x0000 (0x0150 - 0x0150)
class UKFSM_Hans_ThrowGrenade : public UKFSM_PlaySingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115184 ];

		return pClassPointer;
	};

	void InternalCanDoSpecialMove ( );
	void SpecialMoveEnded ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_Hans_ThrowGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Hans_GrenadeBarrage
// 0x0000 (0x0150 - 0x0150)
class UKFSM_Hans_GrenadeBarrage : public UKFSM_Hans_ThrowGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115186 ];

		return pClassPointer;
	};

	void SpecialMoveStarted ( );
};

UClass* UKFSM_Hans_GrenadeBarrage::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Hans_GrenadeHalfBarrage
// 0x0000 (0x0150 - 0x0150)
class UKFSM_Hans_GrenadeHalfBarrage : public UKFSM_Hans_GrenadeBarrage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115185 ];

		return pClassPointer;
	};

	void SpecialMoveStarted ( );
};

UClass* UKFSM_Hans_GrenadeHalfBarrage::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedHans_Versus
// 0x0000 (0x1140 - 0x1140)
class AKFPawn_ZedHans_Versus : public AKFPawn_ZedHans
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115187 ];

		return pClassPointer;
	};

	void ServerToggleShield ( );
	void ToggleEquipment ( );
	void SetSprinting ( );
	void ThrowGrenade ( );
	void ToggleAim ( );
	void PlayWeaponSwitch ( );
	void StartFire ( );
	void PossessedBy ( );
};

UClass* AKFPawn_ZedHans_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedHansFriendlyTest
// 0x0000 (0x1140 - 0x1140)
class AKFPawn_ZedHansFriendlyTest : public AKFPawn_ZedHans
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115225 ];

		return pClassPointer;
	};

	void CanBeGrabbed ( );
};

UClass* AKFPawn_ZedHansFriendlyTest::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_DualMKb42_HansFriendlyTest
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_AssaultRifle_DualMKb42_HansFriendlyTest : public AKFWeap_AssaultRifle_DualMKb42_Hans
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115254 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_AssaultRifle_DualMKb42_HansFriendlyTest::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Husk_FlameThrowerAttack
// 0x002C (0x017C - 0x0150)
class UKFSM_Husk_FlameThrowerAttack : public UKFSM_PlaySingleAnim
{
public:
	class AKFSprayActor*                               FlameSprayArchetype;                              		// 0x0150 (0x0008) [0x0000000000000000]              
	class AKFSprayActor*                               MyFlameSpray;                                     		// 0x0158 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_EndSpray;                                     		// 0x0160 (0x0008) [0x0000000000000000]              
	DWORD                                              bFlameThrowerActive : 1;                          		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent*                                    FlameAttackPlayEvent;                             		// 0x016C (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    FlameAttackStopEvent;                             		// 0x0174 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115360 ];

		return pClassPointer;
	};

	void CanOverrideMoveWith ( );
	void TurnOffFlamethrower ( );
	void SpecialMoveEnded ( );
	void TurnOnFlamethrower ( );
	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_Husk_FlameThrowerAttack::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Husk_Suicide
// 0x0014 (0x0164 - 0x0150)
class UKFSM_Husk_Suicide : public UKFSM_PlaySingleAnim
{
public:
	DWORD                                              bSuicideAnimFinished : 1;                         		// 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UParticleSystemComponent* >          AnimFlamePSCs;                                    		// 0x0154 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115377 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void AnimEndNotify ( );
	void OnAnimNotifyParticleSystemSpawned ( );
	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_Husk_Suicide::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Husk_Fireball_Versus
// 0x0000 (0x03B8 - 0x03B8)
class AKFProj_Husk_Fireball_Versus : public AKFProj_Husk_Fireball
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115409 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Husk_Fireball_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerHusk_FireBallAttack
// 0x0038 (0x0188 - 0x0150)
class UKFSM_PlayerHusk_FireBallAttack : public UKFSM_PlaySingleAnim
{
public:
	class AKFPawn_ZedHusk_Versus*                      MyHuskPawn;                                       		// 0x0150 (0x0008) [0x0000000000000000]              
	float                                              HoldStartTime;                                    		// 0x0158 (0x0004) [0x0000000000000000]              
	DWORD                                              bReadyToFire : 1;                                 		// 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       WindUpAnimName;                                   		// 0x0160 (0x0008) [0x0000000000000000]              
	struct FName                                       FireHeldAnimName;                                 		// 0x0168 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             LoopingMuzzleEffect;                              		// 0x0170 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    MuzzlePSC;                                        		// 0x0178 (0x0008) [0x0000000000000000]              
	struct FName                                       MuzzleFXSocketName;                               		// 0x0180 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115410 ];

		return pClassPointer;
	};

	void SpecialMoveButtonReleased ( );
	void SpecialMoveButtonRetriggered ( );
	void SpecialMoveFlagsUpdated ( );
	void SpecialMoveEnded ( );
	void Tick ( );
	void AnimEndNotify ( );
	void PlayFireAnimation ( );
	void PlayFireHeldAnimation ( );
	void PlayWindUpAnimation ( );
	void PlayAnimation ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_PlayerHusk_FireBallAttack::pClassPointer = NULL;

// Class kfgamecontent.KFPawn_ZedHuskFriendlyTest
// 0x0000 (0x0DF0 - 0x0DF0)
class AKFPawn_ZedHuskFriendlyTest : public AKFPawn_ZedHusk
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115439 ];

		return pClassPointer;
	};

	void AdjustDamage ( );
	void CanBeGrabbed ( );
};

UClass* AKFPawn_ZedHuskFriendlyTest::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Missile_Patriarch
// 0x0064 (0x0400 - 0x039C)
class AKFProj_Missile_Patriarch : public AKFProjectile
{
public:
	class AKFProj_Missile_Patriarch*                   Flock[ 0x2 ];                                     		// 0x039C (0x0010) [0x0000000000000000]              
	float                                              InitialSpeed;                                     		// 0x03AC (0x0004) [0x00000000001E0000]              ( CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	float                                              FlockRadius;                                      		// 0x03B0 (0x0004) [0x0000000000000000]              
	float                                              FlockStiffness;                                   		// 0x03B4 (0x0004) [0x0000000000000000]              
	float                                              FlockMaxForce;                                    		// 0x03B8 (0x0004) [0x0000000000000000]              
	float                                              FlockCurlForce;                                   		// 0x03BC (0x0004) [0x00000000001F0000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	unsigned char                                      bCurl;                                            		// 0x03C0 (0x0001) [0x0000000000200000]              
	float                                              VelocityScale;                                    		// 0x03C4 (0x0004) [0x0000000000210000]              ( CPF_Travel )
	struct FVector                                     Dir;                                              		// 0x03C8 (0x000C) [0x0000000000000000]              
	DWORD                                              bWobble : 1;                                      		// 0x03D4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WobbleForce;                                      		// 0x03D8 (0x0004) [0x0000000000000000]              
	float                                              SeekDelay;                                        		// 0x03DC (0x0004) [0x0000000000220000]              ( CPF_EditConst )
	float                                              SeekForce;                                        		// 0x03E0 (0x0004) [0x0000000000230000]              ( CPF_Travel | CPF_EditConst )
	float                                              GravForce;                                        		// 0x03E4 (0x0004) [0x0000000000240000]              ( CPF_GlobalConfig )
	float                                              DistToApplyGravitySQ;                             		// 0x03E8 (0x0004) [0x0000000000250000]              ( CPF_Travel | CPF_GlobalConfig )
	struct FVector                                     TargetImpactLoc;                                  		// 0x03EC (0x000C) [0x0000000000260000]              ( CPF_EditConst | CPF_GlobalConfig )
	class UPointLightComponent*                        FlightLight;                                      		// 0x03F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115763 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void StopSimulating ( );
	void TraceProjHitZones ( );
	void DoFlocking ( );
	void CurlTimer ( );
	void eventTick ( );
	void eventReplicatedEvent ( );
	void StartCurlTimer ( );
	void InitEx ( );
	void PrepareExplosionTemplate ( );
};

UClass* AKFProj_Missile_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Mortar_Patriarch
// 0x0000 (0x0400 - 0x0400)
class AKFProj_Mortar_Patriarch : public AKFProj_Missile_Patriarch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115801 ];

		return pClassPointer;
	};

	void InitEx ( );
};

UClass* AKFProj_Mortar_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Minigun_Patriarch
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_Minigun_Patriarch : public AKFWeap_RifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115820 ];

		return pClassPointer;
	};

	void AddSpread ( );
	void StopPawnSprint ( );
	void ConsumeAmmo ( );
	void SpawnProjectile ( );
};

UClass* AKFWeap_Minigun_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Patriarch_MissileAttack
// 0x0074 (0x01C4 - 0x0150)
class UKFSM_Patriarch_MissileAttack : public UKFSM_PlaySingleAnim
{
public:
	class AKFPawn_ZedPatriarch*                        MyPatPawn;                                        		// 0x0150 (0x0008) [0x0000000000000000]              
	class AKFAIController_ZedPatriarch*                MyPatController;                                  		// 0x0158 (0x0008) [0x0000000000000000]              
	class UClass*                                      MissileClass;                                     		// 0x0160 (0x0008) [0x0000000000000000]              
	struct FName                                       LoadAnimNames[ 0x2 ];                             		// 0x0168 (0x0010) [0x0000000000000000]              
	struct FName                                       LoadAnim;                                         		// 0x0178 (0x0008) [0x0000000000000000]              
	struct FName                                       WindDownAnimName;                                 		// 0x0180 (0x0008) [0x0000000000000000]              
	struct FString                                     BaseSocketName;                                   		// 0x0188 (0x0010) [0x0000000000000000]              
	struct FRotator                                    MissileFireRotationRate;                          		// 0x0198 (0x000C) [0x0000000000000000]              
	DWORD                                              bAllowGunTracking : 1;                            		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bMissileFlocking : 1;                             		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              InitialMissileSpeed;                              		// 0x01A8 (0x0004) [0x0000000000000000]              
	float                                              SeekDelay;                                        		// 0x01AC (0x0004) [0x0000000000000000]              
	float                                              SeekForce;                                        		// 0x01B0 (0x0004) [0x0000000000000000]              
	float                                              GravForce;                                        		// 0x01B4 (0x0004) [0x0000000000000000]              
	float                                              DistToApplyGravitySQ;                             		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    FireSound;                                        		// 0x01BC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115827 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void AnimEndNotify ( );
	void PlayWindDownAnimation ( );
	void FireMissiles ( );
	void Tick ( );
	void GetAimDirAndTargetLoc ( );
	void PlayFireAnimation ( );
	void StartGunTracking ( );
	void PlayLoadAnimation ( );
	void PlayAnimation ( );
	void GetProjectileClass ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_Patriarch_MissileAttack::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Patriarch_MortarAttack
// 0x0014 (0x01D8 - 0x01C4)
class UKFSM_Patriarch_MortarAttack : public UKFSM_Patriarch_MissileAttack
{
public:
	DWORD                                              bIsBarrage : 1;                                   		// 0x01C4 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                NumBarrages;                                      		// 0x01C8 (0x0004) [0x0000000000000000]              
	int                                                MaxBarrages;                                      		// 0x01CC (0x0004) [0x0000000000000000]              
	struct FName                                       BarrageFireAnimName;                              		// 0x01D0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115826 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void AnimEndNotify ( );
	void Timer_FireBarrage ( );
	void FireMissiles ( );
	void PlayFireAnimation ( );
	void GetAimDirAndTargetLoc ( );
	void GetProjectileClass ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_Patriarch_MortarAttack::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Missile_Patriarch_Versus
// 0x0000 (0x0400 - 0x0400)
class AKFProj_Missile_Patriarch_Versus : public AKFProj_Missile_Patriarch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115934 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Missile_Patriarch_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Minigun_Patriarch_Versus
// 0x0008 (0x08C8 - 0x08C0)
class AKFWeap_Minigun_Patriarch_Versus : public AKFWeap_Minigun_Patriarch
{
public:
	class AKFPawn_ZedPatriarch_Versus*                 MyPatPawn;                                        		// 0x08C0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 115946 ];

		return pClassPointer;
	};

	void ShouldWeaponIgnoreStartFire ( );
	void PostBeginPlay ( );
};

UClass* AKFWeap_Minigun_Patriarch_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFSM_Siren_Scream
// 0x0048 (0x0198 - 0x0150)
class UKFSM_Siren_Scream : public UKFSM_PlaySingleAnim
{
public:
	class AKFPawn_ZedSiren*                            MySirenPawn;                                      		// 0x0150 (0x0008) [0x0000000000000000]              
	float                                              ScreamDamageFrequency;                            		// 0x0158 (0x0004) [0x0000000000000000]              
	unsigned char                                      ScreamCount;                                      		// 0x015C (0x0001) [0x0000000000000000]              
	float                                              LastScreamTime;                                   		// 0x0160 (0x0004) [0x0000000000000000]              
	int                                                ScreamDamage;                                     		// 0x0164 (0x0004) [0x0000000000000000]              
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x0168 (0x0008) [0x0000000000000000]              
	class UClass*                                      ExplosionActorClass;                              		// 0x0170 (0x0008) [0x0000000000000000]              
	DWORD                                              bEndedNormally : 1;                               		// 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bDrawWaveRadius : 1;                              		// 0x0178 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bDrawProjectileShield : 1;                        		// 0x0178 (0x0004) [0x0000000000000000] [0x00000004] 
	class UAkEvent*                                    ScreamInterruptSound;                             		// 0x017C (0x0008) [0x0000000000000000]              
	class AGameExplosionActor*                         ExplosionActor;                                   		// 0x0184 (0x0008) [0x0000000000000000]              
	class AKFTrigger_SirenProjectileShield*            ProjectileShield;                                 		// 0x018C (0x0008) [0x0000000000000000]              
	float                                              ProjectileShieldLifetime;                         		// 0x0194 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116075 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void CheckIfScreamWasInterrupted ( );
	void ScreamExplosion ( );
	void InitializeSirenExplosion ( );
	void DestroyProjectileShield ( );
	void Timer_DestroyProjectileShield ( );
	void SpawnProjectileShield ( );
	void ScreamBegan ( );
	void SpecialMoveStarted ( );
	void CanChainMove ( );
	void CanOverrideMoveWith ( );
};

UClass* UKFSM_Siren_Scream::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Alberts
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Alberts : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116227 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Alberts::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroupEventData_Player
// 0x0000 (0x0070 - 0x0070)
class UKFPawnVoiceGroupEventData_Player : public UKFPawnVoiceGroupEventData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116229 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroupEventData_Player::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Ana
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Ana : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116458 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Ana::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Banner
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Banner : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116688 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Banner::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Briar
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Briar : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116918 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Briar::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Briar_Classic
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Briar_Classic : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 117148 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Briar_Classic::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Coleman
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Coleman : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 117378 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Coleman::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_DJSkully
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_DJSkully : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 117608 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_DJSkully::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Hans
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Hans : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 117838 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Hans::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroupEventData_Hans
// 0x0000 (0x0070 - 0x0070)
class UKFPawnVoiceGroupEventData_Hans : public UKFPawnVoiceGroupEventData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 117840 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroupEventData_Hans::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Jaeger
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Jaeger : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 117874 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Jaeger::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Masterson
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Masterson : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118104 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Masterson::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Masterson_Classic
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Masterson_Classic : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118334 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Masterson_Classic::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_MrFoster
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_MrFoster : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118564 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_MrFoster::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Patriarch
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Patriarch : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118794 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroupEventData_Patriarch
// 0x0000 (0x0070 - 0x0070)
class UKFPawnVoiceGroupEventData_Patriarch : public UKFPawnVoiceGroupEventData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118796 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroupEventData_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Rae
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Rae : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118831 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Rae::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Strasser
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Strasser : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119061 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Strasser::pClassPointer = NULL;

// Class kfgamecontent.KFPawnVoiceGroup_Tanaka
// 0x0000 (0x0088 - 0x0088)
class UKFPawnVoiceGroup_Tanaka : public UKFPawnVoiceGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119291 ];

		return pClassPointer;
	};

};

UClass* UKFPawnVoiceGroup_Tanaka::pClassPointer = NULL;

// Class kfgamecontent.KFPickupFactory_ItemDefault
// 0x0003 (0x03CC - 0x03C9)
class AKFPickupFactory_ItemDefault : public AKFPickupFactory_Item
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119539 ];

		return pClassPointer;
	};

};

UClass* AKFPickupFactory_ItemDefault::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_AR15
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_AssaultRifle_AR15 : public AKFWeap_RifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119543 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_AssaultRifle_AR15::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_MB500
// 0x0000 (0x08D0 - 0x08D0)
class AKFWeap_Shotgun_MB500 : public AKFWeap_ShotgunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119544 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Shotgun_MB500::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Blunt_Crovel
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Blunt_Crovel : public AKFWeap_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119545 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Blunt_Crovel::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_9mm
// 0x0000 (0x0914 - 0x0914)
class AKFWeap_Pistol_9mm : public AKFWeap_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119546 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Pistol_9mm::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Revolver_Rem1858
// 0x0000 (0x0914 - 0x0914)
class AKFWeap_Revolver_Rem1858 : public AKFWeap_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119547 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Revolver_Rem1858::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Rifle_Winchester1894
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_Rifle_Winchester1894 : public AKFWeap_RifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119548 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Rifle_Winchester1894::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_MedicBase
// 0x00C4 (0x0984 - 0x08C0)
class AKFWeap_MedicBase : public AKFWeapon
{
public:
	class UClass*                                      HealingDartDamageType;                            		// 0x08C0 (0x0008) [0x0000000000000000]              
	int                                                HealAmount;                                       		// 0x08C8 (0x0004) [0x0000000000000000]              
	float                                              HealFullRechargeSeconds;                          		// 0x08CC (0x0004) [0x0000000000000000]              
	float                                              HealingIncrement;                                 		// 0x08D0 (0x0004) [0x0000000000000000]              
	float                                              HealRechargePerSecond;                            		// 0x08D4 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    HealImpactSoundPlayEvent;                         		// 0x08D8 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    HurtImpactSoundPlayEvent;                         		// 0x08E0 (0x0008) [0x0000000000000000]              
	struct FWeaponFireSndInfo                          DartFireSnd;                                      		// 0x08E8 (0x0010) [0x0000000000000000]              
	float                                              HealDartShotWeakZedGrabCooldown;                  		// 0x08F8 (0x0004) [0x0000000000000000]              
	int                                                DartMaxRecoilPitch;                               		// 0x08FC (0x0004) [0x0000000000000000]              
	int                                                DartMinRecoilPitch;                               		// 0x0900 (0x0004) [0x0000000000000000]              
	int                                                DartMaxRecoilYaw;                                 		// 0x0904 (0x0004) [0x0000000000000000]              
	int                                                DartMinRecoilYaw;                                 		// 0x0908 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      HealingDartWaveForm;                              		// 0x090C (0x0008) [0x0000000000000000]              
	unsigned char                                      HealingDartAmmo;                                  		// 0x0914 (0x0001) [0x0000000000200000]              
	unsigned char                                      StoredPrimaryAmmo;                                		// 0x0915 (0x0001) [0x0000000000000000]              
	unsigned char                                      StoredSecondaryAmmo;                              		// 0x0916 (0x0001) [0x0000000000000000]              
	float                                              LockCheckTime;                                    		// 0x0918 (0x0004) [0x0000000000000000]              
	float                                              LockRange;                                        		// 0x091C (0x0004) [0x0000000000000000]              
	float                                              LockAcquireTime;                                  		// 0x0920 (0x0004) [0x0000000000000000]              
	float                                              LockTolerance;                                    		// 0x0924 (0x0004) [0x0000000000000000]              
	DWORD                                              bLockedOnTarget : 1;                              		// 0x0928 (0x0004) [0x0000000000210000] [0x00000001] ( CPF_Travel )
	DWORD                                              bTargetLockingActive : 1;                         		// 0x0928 (0x0004) [0x0000000000000000] [0x00000002] 
	class AActor*                                      LockedTarget;                                     		// 0x092C (0x0008) [0x0000000000220000]              ( CPF_EditConst )
	class AActor*                                      PendingLockedTarget;                              		// 0x0934 (0x0008) [0x0000000000230000]              ( CPF_Travel | CPF_EditConst )
	float                                              LockAim;                                          		// 0x093C (0x0004) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockAcquiredSoundFirstPerson;                     		// 0x0940 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockTargetingStopEvent;                           		// 0x0948 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockTargetingStopEventFirstPerson;                		// 0x0950 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockLostSoundFirstPerson;                         		// 0x0958 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockTargetingSoundFirstPerson;                    		// 0x0960 (0x0008) [0x0000000000000000]              
	float                                              PendingLockAcquireTimeLeft;                       		// 0x0968 (0x0004) [0x0000000000000000]              
	float                                              PendingLockTimeout;                               		// 0x096C (0x0004) [0x0000000000000000]              
	float                                              LockedOnTimeout;                                  		// 0x0970 (0x0004) [0x0000000000000000]              
	class UClass*                                      OpticsUIClass;                                    		// 0x0974 (0x0008) [0x0000000000000000]              
	class UKFGFxWorld_MedicOptics*                     OpticsUI;                                         		// 0x097C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119550 ];

		return pClassPointer;
	};

	void GetSecondaryAmmoForHUD ( );
	void eventSetTraderWeaponStats ( );
	void UpdateOpticsUI ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( );
	void ItemRemovedFromInvManager ( );
	void ClientWeaponSet ( );
	void GetWeaponFireAnim ( );
	void PlayFiringSound ( );
	void ClientPlayTargetingSound ( );
	void CheckTargetLock ( );
	void AllowTargetLockOn ( );
	void CanLockOnTo ( );
	void AdjustLockTarget ( );
	void HasAnyAmmo ( );
	void HealAmmoRegeneration ( );
	void StartHealRecharge ( );
	void GivenTo ( );
	void StartFire ( );
	void ShakeView ( );
	void eventHandleRecoil ( );
	void SpawnProjectile ( );
	void ProcessInstantHitEx ( );
	void ConsumeAmmo ( );
	void AltFireMode ( );
	void eventTick ( );
	void eventReplicatedEvent ( );
};

UClass* AKFWeap_MedicBase::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_Medic
// 0x0000 (0x0984 - 0x0984)
class AKFWeap_Pistol_Medic : public AKFWeap_MedicBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119549 ];

		return pClassPointer;
	};

	void eventGetTraderFilter ( );
};

UClass* AKFWeap_Pistol_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_SMG_MP7
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_SMG_MP7 : public AKFWeap_SMGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119551 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_SMG_MP7::pClassPointer = NULL;

// Class kfgamecontent.KFPlayerCamera_Patriarch
// 0x0000 (0x0720 - 0x0720)
class AKFPlayerCamera_Patriarch : public AKFPlayerCamera
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119552 ];

		return pClassPointer;
	};

};

UClass* AKFPlayerCamera_Patriarch::pClassPointer = NULL;

// Class kfgamecontent.KFPlayerZedSuicideCamera
// 0x0050 (0x00C0 - 0x0070)
class UKFPlayerZedSuicideCamera : public UGameFixedCamera
{
public:
	struct FVector                                     InitialCameraLocation;                            		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FVector                                     CameraOffset;                                     		// 0x007C (0x000C) [0x0000000000000000]              
	float                                              CameraInterpSpeed;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	struct FVector                                     DesiredLocation;                                  		// 0x008C (0x000C) [0x0000000000000000]              
	struct FRotator                                    DesiredRotation;                                  		// 0x0098 (0x000C) [0x0000000000000000]              
	int                                                CameraPitchAngle;                                 		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              CameraPanSpeed;                                   		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                CameraPanYaw;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              CameraFOV;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              CameraFOVInterpSpeed;                             		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              InterpolatedFOV;                                  		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              CameraCollisionZOffset;                           		// 0x00BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119565 ];

		return pClassPointer;
	};

	void OnBecomeInActive ( );
	void UpdateCamera ( );
	void UpdateCameraFocalPoint ( );
	void InitSuicideCam ( );
	void OnBecomeActive ( );
};

UClass* UKFPlayerZedSuicideCamera::pClassPointer = NULL;

// Class kfgamecontent.KFPlayerZedWaitingCamera
// 0x005C (0x00CC - 0x0070)
class UKFPlayerZedWaitingCamera : public UGameFixedCamera
{
public:
	class AActor*                                      FocalPoint;                                       		// 0x0070 (0x0008) [0x0000000000000000]              
	TArray< class AActor* >                            AvailableFocalPoints;                             		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FVector                                     CameraOffset;                                     		// 0x0088 (0x000C) [0x0000000000000000]              
	int                                                CameraPitchAngle;                                 		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              CameraLingerDuration;                             		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              LastCameraChangeTime;                             		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              CameraFOV;                                        		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              CameraYaw;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              CameraPanSpeed;                                   		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FColor                                      FadeColor;                                        		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x00B0 (0x0004) [0x0000000000000000]              
	DWORD                                              bPlayedCameraFade : 1;                            		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bPlayedExitFade : 1;                              		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FColor                                      ExitFadeColor;                                    		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        CameraLightTemplate;                              		// 0x00BC (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        CameraLight;                                      		// 0x00C4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119566 ];

		return pClassPointer;
	};

	void OnBecomeInActive ( );
	void PlayExitFade ( );
	void UpdateCamera ( );
	void UpdateCameraFocalPoint ( );
	void PopulateFocalPoints ( );
	void OnBecomeActive ( );
};

UClass* UKFPlayerZedWaitingCamera::pClassPointer = NULL;

// Class kfgamecontent.KFThirdPersonCamera_Versus
// 0x0000 (0x01D8 - 0x01D8)
class UKFThirdPersonCamera_Versus : public UKFThirdPersonCamera
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119568 ];

		return pClassPointer;
	};

};

UClass* UKFThirdPersonCamera_Versus::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Blade_Eviscerator
// 0x0000 (0x0444 - 0x0444)
class AKFProj_Blade_Eviscerator : public AKFProj_RicochetStickBullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119690 ];

		return pClassPointer;
	};

	void ShouldProcessBulletTouch ( );
	void eventPostBeginPlay ( );
};

UClass* AKFProj_Blade_Eviscerator::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bolt_Crossbow
// 0x0000 (0x0444 - 0x0444)
class AKFProj_Bolt_Crossbow : public AKFProj_RicochetStickBullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119827 ];

		return pClassPointer;
	};

	void SyncOriginalLocation ( );
};

UClass* AKFProj_Bolt_Crossbow::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_AssaultRifle
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_AssaultRifle : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119842 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_AssaultRifle::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_DragonsBreath
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_DragonsBreath : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119850 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_DragonsBreath::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_Hemogoblin
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_Hemogoblin : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119867 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_Hemogoblin::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_M14EBR
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_M14EBR : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119877 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_M14EBR::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_Pellet
// 0x0008 (0x03A8 - 0x03A0)
class AKFProj_Bullet_Pellet : public AKFProj_Bullet
{
public:
	class AKFWeapon*                                   OwnerWeapon;                                      		// 0x03A0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119881 ];

		return pClassPointer;
	};

	void ShouldWarnAIWhenFired ( );
	void Init ( );
};

UClass* AKFProj_Bullet_Pellet::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_Pistol50AE
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_Pistol50AE : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119894 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_Pistol50AE::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_Pistol9mm
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_Pistol9mm : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119901 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_Pistol9mm::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_PistolColt1911
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_PistolColt1911 : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119905 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_PistolColt1911::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_PistolDeagle
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_PistolDeagle : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119909 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_PistolDeagle::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_RailGun
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_RailGun : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119913 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_RailGun::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_RevolverRem1858
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_RevolverRem1858 : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119920 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_RevolverRem1858::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_RevolverSW500
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_RevolverSW500 : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119924 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_RevolverSW500::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Bullet_Winchester1894
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_Bullet_Winchester1894 : public AKFProj_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119928 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Bullet_Winchester1894::pClassPointer = NULL;

// Class kfgamecontent.KFProj_GroundFire
// 0x0004 (0x03A0 - 0x039C)
class AKFProj_GroundFire : public AKFProjectile
{
public:
	float                                              DamageInterval;                                   		// 0x039C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119932 ];

		return pClassPointer;
	};

	void PrepareExplosionTemplate ( );
	void PrepareExplosionActor ( );
	void eventTouch ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( );
	void WarnAI ( );
};

UClass* AKFProj_GroundFire::pClassPointer = NULL;

// Class kfgamecontent.KFProj_CaulkNBurn_GroundFire
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_CaulkNBurn_GroundFire : public AKFProj_GroundFire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119959 ];

		return pClassPointer;
	};

};

UClass* AKFProj_CaulkNBurn_GroundFire::pClassPointer = NULL;

// Class kfgamecontent.KFProj_DynamiteGrenade
// 0x0017 (0x03E0 - 0x03C9)
class AKFProj_DynamiteGrenade : public AKFProj_Grenade
{
public:
	DWORD                                              bExplodeOnContact : 1;                            		// 0x03CC (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent*                                    FuseEvent;                                        		// 0x03D0 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        FuseLight;                                        		// 0x03D8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119965 ];

		return pClassPointer;
	};

	void SetExplosionActorClass ( );
	void PrepareExplosionTemplate ( );
	void ProcessTouch ( );
	void TriggerExplosion ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_DynamiteGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_EMPGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_EMPGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 119993 ];

		return pClassPointer;
	};

	void eventGrenadeIsAtRest ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_EMPGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Explosive_HX25
// 0x0000 (0x03C8 - 0x03C8)
class AKFProj_Explosive_HX25 : public AKFProj_BallisticExplosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120004 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Explosive_HX25::pClassPointer = NULL;

// Class kfgamecontent.KFProj_FlameThrower_GroundFire
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_FlameThrower_GroundFire : public AKFProj_GroundFire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120018 ];

		return pClassPointer;
	};

};

UClass* AKFProj_FlameThrower_GroundFire::pClassPointer = NULL;

// Class kfgamecontent.KFProj_FlareGun
// 0x0014 (0x03B4 - 0x03A0)
class AKFProj_FlareGun : public AKFProj_Bullet
{
public:
	float                                              FlameDisperalDelay;                               		// 0x03A0 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastHitNormal;                                    		// 0x03A4 (0x000C) [0x0000000000000000]              
	float                                              ResidualFlameChance;                              		// 0x03B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120024 ];

		return pClassPointer;
	};

	void StopSimulating ( );
	void TriggerExplosion ( );
	void ProcessTouch ( );
	void StopFlightEffects ( );
	void MidFlightFXTimer ( );
	void SpawnFlightEffects ( );
};

UClass* AKFProj_FlareGun::pClassPointer = NULL;

// Class kfgamecontent.KFProj_MolotovSplash
// 0x0004 (0x03A0 - 0x039C)
class AKFProj_MolotovSplash : public AKFProjectile
{
public:
	float                                              MaxTimeFlarotov;                                  		// 0x039C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120042 ];

		return pClassPointer;
	};

	void PrepareExplosionTemplate ( );
	void PrepareExplosionActor ( );
	void ProcessTouch ( );
	void eventHitWall ( );
};

UClass* AKFProj_MolotovSplash::pClassPointer = NULL;

// Class kfgamecontent.KFProj_FlareGunSplash
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_FlareGunSplash : public AKFProj_MolotovSplash
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120041 ];

		return pClassPointer;
	};

};

UClass* AKFProj_FlareGunSplash::pClassPointer = NULL;

// Class kfgamecontent.KFProj_FlashBangGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_FlashBangGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120082 ];

		return pClassPointer;
	};

	void eventGrenadeIsAtRest ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_FlashBangGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_FragGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_FragGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120093 ];

		return pClassPointer;
	};

};

UClass* AKFProj_FragGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_FreezeGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_FreezeGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120102 ];

		return pClassPointer;
	};

	void eventGrenadeIsAtRest ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_FreezeGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_GrenadeShard
// 0x0000 (0x03B0 - 0x03B0)
class AKFProj_GrenadeShard : public AKFProj_RicochetBullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120113 ];

		return pClassPointer;
	};

	void Tick ( );
	void ProcessTouch ( );
	void eventHitWall ( );
};

UClass* AKFProj_GrenadeShard::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HealingDart
// 0x0028 (0x03C8 - 0x03A0)
class AKFProj_HealingDart : public AKFProj_Bullet
{
public:
	class AActor*                                      SeekTarget;                                       		// 0x03A0 (0x0008) [0x00000000001E0000]              ( CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	struct FVector                                     InitialDir;                                       		// 0x03A8 (0x000C) [0x00000000001F0000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	float                                              TrackingStrength;                                 		// 0x03B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     SeekOffset;                                       		// 0x03B8 (0x000C) [0x0000000000000000]              
	DWORD                                              bSeekInitialized : 1;                             		// 0x03C4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120161 ];

		return pClassPointer;
	};

	void eventHitWall ( );
	void eventTick ( );
	void InitializeSeek ( );
};

UClass* AKFProj_HealingDart::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HEGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_HEGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120186 ];

		return pClassPointer;
	};

};

UClass* AKFProj_HEGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HighExplosive_M16M203
// 0x0000 (0x03C8 - 0x03C8)
class AKFProj_HighExplosive_M16M203 : public AKFProj_BallisticExplosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120194 ];

		return pClassPointer;
	};

};

UClass* AKFProj_HighExplosive_M16M203::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HighExplosive_M79
// 0x0000 (0x03C8 - 0x03C8)
class AKFProj_HighExplosive_M79 : public AKFProj_BallisticExplosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120208 ];

		return pClassPointer;
	};

};

UClass* AKFProj_HighExplosive_M79::pClassPointer = NULL;

// Class kfgamecontent.KFProj_HuskGroundFire
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_HuskGroundFire : public AKFProj_GroundFire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120253 ];

		return pClassPointer;
	};

};

UClass* AKFProj_HuskGroundFire::pClassPointer = NULL;

// Class kfgamecontent.KFProj_MicrowaveGun_GroundFire
// 0x0000 (0x03A0 - 0x03A0)
class AKFProj_MicrowaveGun_GroundFire : public AKFProj_GroundFire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120270 ];

		return pClassPointer;
	};

};

UClass* AKFProj_MicrowaveGun_GroundFire::pClassPointer = NULL;

// Class kfgamecontent.KFProj_MicrowaveImpact
// 0x0000 (0x039C - 0x039C)
class AKFProj_MicrowaveImpact : public AKFProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120276 ];

		return pClassPointer;
	};

	void PrepareExplosionTemplate ( );
	void eventTouch ( );
	void PostBeginPlay ( );
};

UClass* AKFProj_MicrowaveImpact::pClassPointer = NULL;

// Class kfgamecontent.KFProj_MolotovFlare
// 0x002C (0x0270 - 0x0244)
class AKFProj_MolotovFlare : public AActor
{
public:
	class UParticleSystemComponent*                    ProjEffects;                                      		// 0x0244 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ProjFlightTemplate;                               		// 0x024C (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        PointLight;                                       		// 0x0254 (0x0008) [0x0000000000000000]              
	float                                              LightFadeStartTime;                               		// 0x025C (0x0004) [0x0000000000000000]              
	float                                              LightFadeTime;                                    		// 0x0260 (0x0004) [0x0000000000000000]              
	float                                              LightFadePerSecond;                               		// 0x0264 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    FuseEvent;                                        		// 0x0268 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120360 ];

		return pClassPointer;
	};

	void eventTick ( );
	void eventPostBeginPlay ( );
};

UClass* AKFProj_MolotovFlare::pClassPointer = NULL;

// Class kfgamecontent.KFProj_MolotovGrenade
// 0x0017 (0x03E0 - 0x03C9)
class AKFProj_MolotovGrenade : public AKFProj_Grenade
{
public:
	class UClass*                                      ResidualFlameProjClass;                           		// 0x03CC (0x0008) [0x0000000000000000]              
	int                                                NumResidualFlames;                                		// 0x03D4 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    ThrowAkEvent;                                     		// 0x03D8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120376 ];

		return pClassPointer;
	};

	void SpawnResidualFlames ( );
	void Explode ( );
	void ProcessTouch ( );
	void eventHitWall ( );
	void SpawnFlightEffects ( );
};

UClass* AKFProj_MolotovGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_NailBombGrenade
// 0x0003 (0x03CC - 0x03C9)
class AKFProj_NailBombGrenade : public AKFProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120457 ];

		return pClassPointer;
	};

};

UClass* AKFProj_NailBombGrenade::pClassPointer = NULL;

// Class kfgamecontent.KFProj_NailShard
// 0x0000 (0x03BC - 0x03BC)
class AKFProj_NailShard : public AKFProj_Nail_Nailgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120471 ];

		return pClassPointer;
	};

};

UClass* AKFProj_NailShard::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Rocket_RPG7
// 0x0000 (0x03C8 - 0x03C8)
class AKFProj_Rocket_RPG7 : public AKFProj_BallisticExplosive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120477 ];

		return pClassPointer;
	};

};

UClass* AKFProj_Rocket_RPG7::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Rocket_Seeker6
// 0x000C (0x03D4 - 0x03C8)
class AKFProj_Rocket_Seeker6 : public AKFProj_BallisticExplosive
{
public:
	class AKFPawn*                                     LockedTarget;                                     		// 0x03C8 (0x0008) [0x0000000000200000]              
	float                                              SeekStrength;                                     		// 0x03D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120494 ];

		return pClassPointer;
	};

	void eventTick ( );
	void SetLockedTarget ( );
};

UClass* AKFProj_Rocket_Seeker6::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_RocketLauncher_Seeker6
// 0x006C (0x0930 - 0x08C4)
class AKFWeap_RocketLauncher_Seeker6 : public AKFWeap_GrenadeLauncher_Base
{
public:
	TArray< class APawn* >                             LockedTargets;                                    		// 0x08C4 (0x0010) [0x0000000000000000]              
	float                                              BurstFireRecoilModifier;                          		// 0x08D4 (0x0004) [0x0000000000000000]              
	float                                              LastTargetLockTime;                               		// 0x08D8 (0x0004) [0x0000000000000000]              
	float                                              LastTargetValidationCheckTime;                    		// 0x08DC (0x0004) [0x0000000000000000]              
	float                                              TimeBetweenLockOns;                               		// 0x08E0 (0x0004) [0x0000000000000000]              
	float                                              TargetValidationCheckInterval;                    		// 0x08E4 (0x0004) [0x0000000000000000]              
	float                                              MinTargetDistFromCrosshairSQ;                     		// 0x08E8 (0x0004) [0x0000000000000000]              
	float                                              MaxLockMaintainFOVDotThreshold;                   		// 0x08EC (0x0004) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockAcquiredSoundFirstPerson;                     		// 0x08F0 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockLostSoundFirstPerson;                         		// 0x08F8 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  LockedOnIcon;                                     		// 0x0900 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                LockedIconColor;                                  		// 0x0908 (0x0010) [0x0000000000000000]              
	class UAkComponent*                                IronsightsComponent;                              		// 0x0918 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    IronsightsZoomInSound;                            		// 0x0920 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    IronsightsZoomOutSound;                           		// 0x0928 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120503 ];

		return pClassPointer;
	};

	void DrawTargetingIcon ( );
	void DrawHUD ( );
	void SpawnProjectile ( );
	void PlayTargetLostEffects ( );
	void PlayTargetLockOnEffects ( );
	void ZoomOut ( );
	void ZoomIn ( );
	void GetLockedTargetLoc ( );
	void ServerSyncLockedTargets ( );
	void ValidateTargets ( );
	void FindTargets ( );
	void eventTick ( );
	void AltFireMode ( );
};

UClass* AKFWeap_RocketLauncher_Seeker6::pClassPointer = NULL;

// Class kfgamecontent.KFProj_Thrown_C4
// 0x00A8 (0x0444 - 0x039C)
class AKFProj_Thrown_C4 : public AKFProjectile
{
public:
	class AActor*                                      StuckToActor;                                     		// 0x039C (0x0008) [0x00000000001E0000]              ( CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	int                                                StuckToBoneIdx;                                   		// 0x03A4 (0x0004) [0x00000000001F0000]              ( CPF_Travel | CPF_EditConst | CPF_GlobalConfig | CPF_Component )
	struct FVector                                     StuckToLocation;                                  		// 0x03A8 (0x000C) [0x0000000000200000]              
	struct FRotator                                    StuckToRotation;                                  		// 0x03B4 (0x000C) [0x0000000000210000]              ( CPF_Travel )
	class AActor*                                      PrevStuckToActor;                                 		// 0x03C0 (0x0008) [0x0000000000000000]              
	class UKFImpactEffectInfo*                         ImpactEffectInfo;                                 		// 0x03C8 (0x0008) [0x0000000000000000]              
	struct FVector                                     LandedTranslationOffset;                          		// 0x03D0 (0x000C) [0x0000000000000000]              
	class UAkEvent*                                    StickAkEvent;                                     		// 0x03DC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    ProximityAlertAkEvent;                            		// 0x03E4 (0x0008) [0x0000000000000000]              
	float                                              ProximityAlertInterval;                           		// 0x03EC (0x0004) [0x0000000000000000]              
	float                                              ProximityAlertIntervalClose;                      		// 0x03F0 (0x0004) [0x0000000000000000]              
	float                                              ProximityAlertTimer;                              		// 0x03F4 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        ChargeMesh;                                       		// 0x03F8 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   ChargeMIC;                                        		// 0x0400 (0x0008) [0x0000000000000000]              
	class UPointLightComponent*                        BlinkLightComp;                                   		// 0x0408 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                BlinkColorOn;                                     		// 0x0410 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BlinkColorOff;                                    		// 0x0420 (0x0010) [0x0000000000000000]              
	float                                              BlinkTime;                                        		// 0x0430 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             BlinkFX;                                          		// 0x0434 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    BlinkPSC;                                         		// 0x043C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120523 ];

		return pClassPointer;
	};

	void OnInstigatorControllerLeft ( );
	void eventDestroyed ( );
	void Timer_Explode ( );
	void SetExplosionActorClass ( );
	void PrepareExplosionTemplate ( );
	void Disintegrate ( );
	void Explode ( );
	void Detonate ( );
	void RestartMovement ( );
	void StopMovement ( );
	void GetBoneLocationFromActor ( );
	void GetBoneIndexFromActor ( );
	void ReplicatedStick ( );
	void ServerStick ( );
	void GetActorSkeletalMesh ( );
	void StickToActor ( );
	void GetImpactInfo ( );
	void Stick ( );
	void GetImpactResult ( );
	void TryStick ( );
	void eventHitWall ( );
	void ProcessTouch ( );
	void BlinkOff ( );
	void BlinkOn ( );
	void UpdateAlert ( );
	void eventTick ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( );
};

UClass* AKFProj_Thrown_C4::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Thrown_C4
// 0x004C (0x0950 - 0x0904)
class AKFWeap_Thrown_C4 : public AKFWeap_ThrownBase
{
public:
	struct FName                                       DetonateAnim;                                     		// 0x0904 (0x0008) [0x0000000000000000]              
	struct FName                                       DetonateLastAnim;                                 		// 0x090C (0x0008) [0x0000000000000000]              
	TArray< class AKFProj_Thrown_C4* >                 DeployedCharges;                                  		// 0x0914 (0x0010) [0x0000000000000000]              
	class UClass*                                      ScreenUIClass;                                    		// 0x0924 (0x0008) [0x0000000000000000]              
	class UKFGFxWorld_C4Screen*                        ScreenUI;                                         		// 0x092C (0x0008) [0x0000000000000000]              
	float                                              TimeSinceLastUpdate;                              		// 0x0934 (0x0004) [0x0000000000000000]              
	float                                              UpdateInterval;                                   		// 0x0938 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    DetonateAkEvent;                                  		// 0x093C (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    DryFireAkEvent;                                   		// 0x0944 (0x0008) [0x0000000000000000]              
	int                                                NumDeployedCharges;                               		// 0x094C (0x0004) [0x0000000000200000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120650 ];

		return pClassPointer;
	};

	void eventGetTraderFilter ( );
	void GotoActiveState ( );
	void HasAlwaysOnZedTimeResist ( );
	void AltFireMode ( );
	void PrepareAndDetonate ( );
	void BeginFire ( );
	void HasAmmo ( );
	void eventUsesAmmo ( );
	void SetOriginalValuesFromPickup ( );
	void RemoveDeployedCharge ( );
	void Detonate ( );
	void ProjectileFire ( );
	void UpdateScreenUI ( );
	void eventTick ( );
	void eventDestroyed ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( );
	void SetIronSights ( );
};

UClass* AKFWeap_Thrown_C4::pClassPointer = NULL;

// Class kfgamecontent.KFSeqAct_MinigameActivateGenerator
// 0x0008 (0x0158 - 0x0150)
class UKFSeqAct_MinigameActivateGenerator : public USequenceAction
{
public:
	class AKFTrigger_MinigameGenerator*                Generator;                                        		// 0x0150 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120668 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UKFSeqAct_MinigameActivateGenerator::pClassPointer = NULL;

// Class kfgamecontent.KFTrigger_MinigameGenerator
// 0x0068 (0x02BC - 0x0254)
class AKFTrigger_MinigameGenerator : public ATrigger_PawnsOnly
{
public:
	float                                              ActiveTime;                                       		// 0x0254 (0x0004) [0x0000000000000000]              
	float                                              ReactivationTime;                                 		// 0x0258 (0x0004) [0x0000000000000000]              
	DWORD                                              bActiveGenerator : 1;                             		// 0x025C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bCanBeActivated : 1;                              		// 0x025C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class AKFTrigger_MinigameButton* >         LevelButtons;                                     		// 0x0260 (0x0010) [0x0000000000000000]              
	int                                                ObjectiveIndex;                                   		// 0x0270 (0x0004) [0x0000000000000000]              
	int                                                EventIndex;                                       		// 0x0274 (0x0004) [0x0000000000000000]              
	unsigned char                                      GeneratorTimeRemaining;                           		// 0x0278 (0x0001) [0x0000000000150000]              ( CPF_Travel | CPF_GlobalConfig )
	float                                              PreviousTimeRemaining;                            		// 0x027C (0x0004) [0x0000000000000000]              
	TArray< class AStaticMeshActor* >                  GeneratorStatusIndicators;                        		// 0x0280 (0x0010) [0x0000000000000000]              
	int                                                GlowIndex;                                        		// 0x0290 (0x0004) [0x0000000000000000]              
	TArray< struct FGeneratorStatus >                  StatusIndicator;                                  		// 0x0294 (0x0010) [0x0000000000000000]              
	int                                                CurrentStatusIndex;                               		// 0x02A4 (0x0004) [0x0000000000000000]              
	TArray< struct FEmissiveUpdateActorList >          MapEmissiveActorList;                             		// 0x02A8 (0x0010) [0x0000000000000000]              
	int                                                CurrentEmissiveActorListIndex;                    		// 0x02B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120671 ];

		return pClassPointer;
	};

	void UpdateGeneratorState ( );
	void GeneratorReactivated ( );
	void DeactivateMinigames ( );
	void ActivateMinigames ( );
	void AllowActivation ( );
	void TriggerObjectiveCompletion ( );
	void UsedBy ( );
	void PostBeginPlay ( );
	void eventUnTouch ( );
	void eventTouch ( );
	void GetInteractionIndex ( );
	void GetIsUsable ( );
	void InitEmissiveActors ( );
	void DisableEmissiveActors ( );
	void EnableNextEmissiveList ( );
	void EnableEmissiveActors ( );
	void UpdateGeneratorStatus ( );
	void Tick ( );
	void eventReplicatedEvent ( );
};

UClass* AKFTrigger_MinigameGenerator::pClassPointer = NULL;

// Class kfgamecontent.KFSeqEvent_MinigameGeneratorStateChanged
// 0x0000 (0x0170 - 0x0170)
class UKFSeqEvent_MinigameGeneratorStateChanged : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120687 ];

		return pClassPointer;
	};

	void StateChanged ( );
};

UClass* UKFSeqEvent_MinigameGeneratorStateChanged::pClassPointer = NULL;

// Class kfgamecontent.SprayActor_Flame
// 0x0028 (0x060C - 0x05E4)
class ASprayActor_Flame : public AKFSprayActor
{
public:
	TArray< class UKFParticleSystemComponent* >        BoneChainComponents;                              		// 0x05E4 (0x0010) [0x0000000000000000]              
	TArray< class UKFParticleSystemComponent* >        BoneChainComponents_1stP;                         		// 0x05F4 (0x0010) [0x0000000000000000]              
	class UAnimSet*                                    AltSprayAnimSet;                                  		// 0x0604 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120904 ];

		return pClassPointer;
	};

	void SetSprayLength ( );
	void BeginSpray ( );
	void eventTick ( );
	void SetBoneChainComponents ( );
	void eventPreBeginPlay ( );
};

UClass* ASprayActor_Flame::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerAlpha_Grab
// 0x0000 (0x019C - 0x019C)
class UKFSM_PlayerAlpha_Grab : public UKFSM_GrappleCombined
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121189 ];

		return pClassPointer;
	};

	void ProcessViewRotation ( );
	void Tick ( );
	void StartInteraction ( );
};

UClass* UKFSM_PlayerAlpha_Grab::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerAlpha_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerAlpha_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121199 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerAlpha_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerAlpha_Rally
// 0x0000 (0x01A8 - 0x01A8)
class UKFSM_PlayerAlpha_Rally : public UKFSM_AlphaRally
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121201 ];

		return pClassPointer;
	};

	void PackFlagsBase ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerAlpha_Rally::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerZedBlockBase
// 0x0004 (0x0154 - 0x0150)
class UKFSM_PlayerZedBlockBase : public UKFSM_PlaySingleAnim
{
public:
	float                                              MinimumBlockTime;                                 		// 0x0150 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121208 ];

		return pClassPointer;
	};

	void SpecialMoveButtonReleased ( );
	void SpecialMoveButtonRetriggered ( );
	void Timer_CheckIfBlockReleased ( );
	void SpecialMoveEnded ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_PlayerZedBlockBase::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerBloat_Block
// 0x0000 (0x0154 - 0x0154)
class UKFSM_PlayerBloat_Block : public UKFSM_PlayerZedBlockBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121220 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerBloat_Block::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerBloat_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerBloat_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121222 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerBloat_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerBloat_Melee2
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerBloat_Melee2 : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121224 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerBloat_Melee2::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerBloat_PukeMineAttack
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerBloat_PukeMineAttack : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121226 ];

		return pClassPointer;
	};

	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerBloat_PukeMineAttack::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerCrawler_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerCrawler_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121230 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerCrawler_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerCrawler_Melee2
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerCrawler_Melee2 : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121232 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerCrawler_Melee2::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerFleshpound_Block
// 0x0000 (0x0154 - 0x0154)
class UKFSM_PlayerFleshpound_Block : public UKFSM_PlayerZedBlockBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121248 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerFleshpound_Block::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerFleshpound_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerFleshpound_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121250 ];

		return pClassPointer;
	};

	void IsInSpecialMode ( );
};

UClass* UKFSM_PlayerFleshpound_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerFleshpound_Melee2
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerFleshpound_Melee2 : public UKFSM_PlayerFleshpound_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121257 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerFleshpound_Melee2::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerFleshpound_Rage
// 0x0003 (0x0154 - 0x0151)
class UKFSM_PlayerFleshpound_Rage : public UKFSM_Zed_Taunt
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121259 ];

		return pClassPointer;
	};

	void SpecialMoveStarted ( );
	void PackFlagsBase ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerFleshpound_Rage::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerGorefast_Block
// 0x0000 (0x0154 - 0x0154)
class UKFSM_PlayerGorefast_Block : public UKFSM_PlayerZedBlockBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121273 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerGorefast_Block::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerGorefast_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerGorefast_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121275 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerGorefast_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerGorefast_Melee2
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerGorefast_Melee2 : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121277 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerGorefast_Melee2::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerGorefast_Melee3
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerGorefast_Melee3 : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121279 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerGorefast_Melee3::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack
// 0x0004 (0x0180 - 0x017C)
class UKFSM_PlayerHusk_FlameThrowerAttack : public UKFSM_Husk_FlameThrowerAttack
{
public:
	DWORD                                              bAnimCanBeInterrupted : 1;                        		// 0x017C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121311 ];

		return pClassPointer;
	};

	void SpecialMoveButtonReleased ( );
	void SpecialMoveButtonRetriggered ( );
	void SpecialMoveFlagsUpdated ( );
	void Timer_AnimInterrupt ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_PlayerHusk_FlameThrowerAttack::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerHusk_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerHusk_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121323 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerHusk_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerHusk_Suicide
// 0x0000 (0x0164 - 0x0164)
class UKFSM_PlayerHusk_Suicide : public UKFSM_Husk_Suicide
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121325 ];

		return pClassPointer;
	};

	void SpecialMoveButtonReleased ( );
	void SpecialMoveFlagsUpdated ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerHusk_Suicide::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerPatriarch_Heal
// 0x0000 (0x016C - 0x016C)
class UKFSM_PlayerPatriarch_Heal : public UKFSM_Patriarch_Heal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121331 ];

		return pClassPointer;
	};

	void OnEMPDisrupted ( );
	void DoHeal ( );
	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerPatriarch_Heal::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerPatriarch_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerPatriarch_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121340 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerPatriarch_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage
// 0x0004 (0x01B0 - 0x01AC)
class UKFSM_PlayerPatriarch_MinigunBarrage : public UKFSM_Patriarch_MinigunBarrage
{
public:
	DWORD                                              bAnimCanBeInterrupted : 1;                        		// 0x01AC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121342 ];

		return pClassPointer;
	};

	void SpecialMoveButtonReleased ( );
	void SpecialMoveButtonRetriggered ( );
	void SpecialMoveFlagsUpdated ( );
	void SpecialMoveEnded ( );
	void Timer_AnimInterrupt ( );
	void PlayWindDownAnim ( );
	void PlayFireAnim ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_PlayerPatriarch_MinigunBarrage::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerPatriarch_MissileAttack
// 0x0000 (0x01C4 - 0x01C4)
class UKFSM_PlayerPatriarch_MissileAttack : public UKFSM_Patriarch_MissileAttack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121357 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerPatriarch_MissileAttack::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerPatriarch_MortarAttack
// 0x0000 (0x01D8 - 0x01D8)
class UKFSM_PlayerPatriarch_MortarAttack : public UKFSM_Patriarch_MortarAttack
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121359 ];

		return pClassPointer;
	};

	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerPatriarch_MortarAttack::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab
// 0x0004 (0x01F8 - 0x01F4)
class UKFSM_PlayerPatriarch_TentacleGrab : public UKFSM_Patriarch_Grapple
{
public:
	float                                              MinGrabTargetFOV;                                 		// 0x01F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121364 ];

		return pClassPointer;
	};

	void ProcessViewRotation ( );
	void Tick ( );
	void StartInteraction ( );
	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerPatriarch_TentacleGrab::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerScrake_Block
// 0x0000 (0x0154 - 0x0154)
class UKFSM_PlayerScrake_Block : public UKFSM_PlayerZedBlockBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121389 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerScrake_Block::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerScrake_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerScrake_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121391 ];

		return pClassPointer;
	};

	void IsInSpecialMode ( );
};

UClass* UKFSM_PlayerScrake_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerScrake_Melee2
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerScrake_Melee2 : public UKFSM_PlayerScrake_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121397 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerScrake_Melee2::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerScrake_Melee3
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerScrake_Melee3 : public UKFSM_PlayerScrake_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121399 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerScrake_Melee3::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerSiren_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerSiren_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121401 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerSiren_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFTrigger_SirenProjectileShield
// 0x0008 (0x025C - 0x0254)
class AKFTrigger_SirenProjectileShield : public ATrigger
{
public:
	class AKFPawn_Monster*                             Siren;                                            		// 0x0254 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121438 ];

		return pClassPointer;
	};

	void StopsProjectile ( );
	void eventTouch ( );
	void eventBaseChange ( );
};

UClass* AKFTrigger_SirenProjectileShield::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerSiren_NormalScream
// 0x0000 (0x0198 - 0x0198)
class UKFSM_PlayerSiren_NormalScream : public UKFSM_Siren_Scream
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121445 ];

		return pClassPointer;
	};

	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerSiren_NormalScream::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerSiren_VortexScream
// 0x0070 (0x020C - 0x019C)
class UKFSM_PlayerSiren_VortexScream : public UKFSM_GrappleCombined
{
public:
	class UAkEvent*                                    VortexLoopAkEvent;                                		// 0x019C (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    VortexLoopEndAkEvent;                             		// 0x01A4 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    VortexGrabAkEvent;                                		// 0x01AC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    VortexGrabEndAkEvent;                             		// 0x01B4 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ViewPitchConstraints;                             		// 0x01BC (0x0008) [0x0000000000000000]              
	float                                              VortexCheckTime;                                  		// 0x01C4 (0x0004) [0x0000000000000000]              
	float                                              MaxRangeSQ;                                       		// 0x01C8 (0x0004) [0x0000000000000000]              
	float                                              MinGrabTargetFOV;                                 		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              FollowerAttachTime;                               		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             VortexEffect;                                     		// 0x01D4 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    VortexPSC;                                        		// 0x01DC (0x0008) [0x0000000000000000]              
	float                                              VortexDuration;                                   		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              MinVortexDuration;                                		// 0x01E8 (0x0004) [0x0000000000000000]              
	DWORD                                              bVortexCanBeInterrupted : 1;                      		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              InterpViewPitch;                                  		// 0x01F0 (0x0004) [0x0000000000000000]              
	float                                              ViewRotInterpSpeed;                               		// 0x01F4 (0x0004) [0x0000000000000000]              
	float                                              InterpolatedRotation;                             		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              DamageOverDuration;                               		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                FollowerDamagePerSec;                             		// 0x0200 (0x0004) [0x0000000000000000]              
	class UClass*                                      VortexDamageType;                                 		// 0x0204 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121453 ];

		return pClassPointer;
	};

	void SpecialMoveButtonReleased ( );
	void SpecialMoveButtonRetriggered ( );
	void Timer_VortexInterrupt ( );
	void SpecialMoveEnded ( );
	void ResetFollowerPhysics ( );
	void OnFollowerLeavingSpecialMove ( );
	void AnimEndNotify ( );
	void SpecialMoveFlagsUpdated ( );
	void Timer_DamageFollower ( );
	void StartInteraction ( );
	void InteractionPawnUpdated ( );
	void Timer_CheckVortex ( );
	void ProcessViewRotation ( );
	void GetUncompressedViewPitch ( );
	void Tick ( );
	void PlayGrabAnim ( );
	void SpecialMoveStarted ( );
	void InternalCanDoSpecialMove ( );
};

UClass* UKFSM_PlayerSiren_VortexScream::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerSiren_VortexVictim
// 0x0018 (0x0174 - 0x015C)
class UKFSM_PlayerSiren_VortexVictim : public UKFSM_GrappleVictim
{
public:
	struct FName                                       AnimName;                                         		// 0x015C (0x0008) [0x0000000000000000]              
	struct FString                                     VortexGrabTeamWarningMsg;                         		// 0x0164 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121527 ];

		return pClassPointer;
	};

	void SetGrabEffect ( );
	void SpecialMoveEnded ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_PlayerSiren_VortexVictim::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerSlasher_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerSlasher_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121541 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerSlasher_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerSlasher_Melee2
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerSlasher_Melee2 : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121543 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerSlasher_Melee2::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerSlasher_Roll
// 0x000C (0x016C - 0x0160)
class UKFSM_PlayerSlasher_Roll : public UKFSM_Evade
{
public:
	struct FRotator                                    InitialRotation;                                  		// 0x0160 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121545 ];

		return pClassPointer;
	};

	void Tick ( );
	void PackFlagsBase ( );
	void InternalCanDoSpecialMove ( );
	void SpecialMoveStarted ( );
};

UClass* UKFSM_PlayerSlasher_Roll::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerStalker_Melee
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerStalker_Melee : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121558 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerStalker_Melee::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerStalker_Melee2
// 0x0000 (0x0170 - 0x0170)
class UKFSM_PlayerStalker_Melee2 : public UKFSM_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121560 ];

		return pClassPointer;
	};

};

UClass* UKFSM_PlayerStalker_Melee2::pClassPointer = NULL;

// Class kfgamecontent.KFSM_PlayerStalker_Roll
// 0x0000 (0x0160 - 0x0160)
class UKFSM_PlayerStalker_Roll : public UKFSM_Evade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121562 ];

		return pClassPointer;
	};

	void SpecialMoveEnded ( );
	void SpecialMoveStarted ( );
	void PackFlagsBase ( );
};

UClass* UKFSM_PlayerStalker_Roll::pClassPointer = NULL;

// Class kfgamecontent.KFStaticMeshActor_TrackLocalPC
// 0x0000 (0x02B0 - 0x02B0)
class AKFStaticMeshActor_TrackLocalPC : public AStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121573 ];

		return pClassPointer;
	};

	void eventTick ( );
};

UClass* AKFStaticMeshActor_TrackLocalPC::pClassPointer = NULL;

// Class kfgamecontent.KFVolume_CameraFade
// 0x000C (0x028C - 0x0280)
class AKFVolume_CameraFade : public AVolume
{
public:
	float                                              FadeOpacityStart;                                 		// 0x0280 (0x0004) [0x0000000000000000]              
	float                                              FadeOpacityEnd;                                   		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x0288 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121853 ];

		return pClassPointer;
	};

	void eventTouch ( );
};

UClass* AKFVolume_CameraFade::pClassPointer = NULL;

// Class kfgamecontent.KFVolume_DamageAdjust
// 0x0004 (0x0284 - 0x0280)
class AKFVolume_DamageAdjust : public AVolume
{
public:
	float                                              DamageScale;                                      		// 0x0280 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121866 ];

		return pClassPointer;
	};

	void eventUnTouch ( );
	void eventTouch ( );
};

UClass* AKFVolume_DamageAdjust::pClassPointer = NULL;

// Class kfgamecontent.KFVolume_DisableZedJump
// 0x0000 (0x0280 - 0x0280)
class AKFVolume_DisableZedJump : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121879 ];

		return pClassPointer;
	};

	void eventUnTouch ( );
	void eventTouch ( );
};

UClass* AKFVolume_DisableZedJump::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_AK12
// 0x004C (0x090C - 0x08C0)
class AKFWeap_AssaultRifle_AK12 : public AKFWeap_RifleBase
{
public:
	float                                              BurstFireRecoilRate;                              		// 0x08C0 (0x0004) [0x0000000000000000]              
	float                                              BurstFireRecoilModifier;                          		// 0x08C4 (0x0004) [0x0000000000000000]              
	struct FName                                       BurstFire2RdAnim;                                 		// 0x08C8 (0x0008) [0x0000000000000000]              
	struct FName                                       BurstFire3RdAnim;                                 		// 0x08D0 (0x0008) [0x0000000000000000]              
	struct FName                                       BurstFire2RdSightedAnim;                          		// 0x08D8 (0x0008) [0x0000000000000000]              
	struct FName                                       BurstFire3RdSightedAnim;                          		// 0x08E0 (0x0008) [0x0000000000000000]              
	struct FWeaponFireSndInfo                          WeaponFire2RdSnd;                                 		// 0x08E8 (0x0010) [0x0000000000000000]              
	struct FWeaponFireSndInfo                          WeaponFire3RdSnd;                                 		// 0x08F8 (0x0010) [0x0000000000000000]              
	DWORD                                              bBurstPlayedFireEffects : 1;                      		// 0x0908 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121889 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_AssaultRifle_AK12::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_Bullpup
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_AssaultRifle_Bullpup : public AKFWeap_RifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121952 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_AssaultRifle_Bullpup::pClassPointer = NULL;

// Class kfgamecontent.KFWeapAttach_MultiAmmo
// 0x0000 (0x03E8 - 0x03E8)
class AKFWeapAttach_MultiAmmo : public AKFWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 121996 ];

		return pClassPointer;
	};

	void PlayReloadMagazineAnim ( );
	void CauseMuzzleFlash ( );
};

UClass* AKFWeapAttach_MultiAmmo::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_M16M203
// 0x0010 (0x08D0 - 0x08C0)
class AKFWeap_AssaultRifle_M16M203 : public AKFWeap_RifleBase
{
public:
	struct FVector                                     SecondaryFireOffset;                              		// 0x08C0 (0x000C) [0x0000000000000000]              
	int                                                ServerTotalAltAmmo;                               		// 0x08CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122010 ];

		return pClassPointer;
	};

	void TryToAltReload ( );
	void CanAltAutoReload ( );
	void CanOverrideMagReload ( );
	void ServerSetAltAmmoCount ( );
	void ServerSendToAltReload ( );
	void SendToAltReload ( );
	void ShouldAutoReload ( );
	void CauseMuzzleFlash ( );
	void SetOriginalValuesFromPickup ( );
	void ClientGiveSecondaryAmmo ( );
	void AddSecondaryAmmo ( );
	void eventHasAmmo ( );
	void ConsumeAmmo ( );
	void InitializeAmmo ( );
	void AltFireMode ( );
	void eventGetAltTraderFilter ( );
};

UClass* AKFWeap_AssaultRifle_M16M203::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_Medic
// 0x0000 (0x0984 - 0x0984)
class AKFWeap_AssaultRifle_Medic : public AKFWeap_MedicBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122260 ];

		return pClassPointer;
	};

	void eventGetTraderFilter ( );
};

UClass* AKFWeap_AssaultRifle_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssaultRifle_SCAR
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_AssaultRifle_SCAR : public AKFWeap_RifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122283 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_AssaultRifle_SCAR::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_AssetDummy
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_AssetDummy : public AKFWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122302 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_AssetDummy::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Beam_Microwave
// 0x0032 (0x095C - 0x092A)
class AKFWeap_Beam_Microwave : public AKFWeap_FlameBase
{
public:
	struct FName                                       FireHeavyAnim;                                    		// 0x092C (0x0008) [0x0000000000000000]              
	struct FName                                       FireLastHeavyAnim;                                		// 0x0934 (0x0008) [0x0000000000000000]              
	struct FName                                       FireLastHeavySightedAnim;                         		// 0x093C (0x0008) [0x0000000000000000]              
	struct FName                                       FireLoopEndLastAnim;                              		// 0x0944 (0x0008) [0x0000000000000000]              
	struct FName                                       FireLoopEndLastSightedAnim;                       		// 0x094C (0x0008) [0x0000000000000000]              
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x0954 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122307 ];

		return pClassPointer;
	};

	void eventGetTraderFilter ( );
	void ShouldAutoReload ( );
	void CustomFire ( );
	void AltFireMode ( );
	void GetLoopEndFireAnim ( );
	void GetWeaponFireAnim ( );
};

UClass* AKFWeap_Beam_Microwave::pClassPointer = NULL;

// Class kfgamecontent.KFWeapAttach_MaceAndShield
// 0x0000 (0x0420 - 0x0420)
class AKFWeapAttach_MaceAndShield : public AKFWeapAttach_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122369 ];

		return pClassPointer;
	};

	void PlayWeaponMeshAnim ( );
	void PlayWeaponFireAnim ( );
};

UClass* AKFWeapAttach_MaceAndShield::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Blunt_MaceAndShield
// 0x0048 (0x09A0 - 0x0958)
class AKFWeap_Blunt_MaceAndShield : public AKFWeap_MeleeBase
{
public:
	float                                              MaxMaceHitRange;                                  		// 0x0958 (0x0004) [0x0000000000000000]              
	float                                              MaxShieldHitRange;                                		// 0x095C (0x0004) [0x0000000000000000]              
	TArray< struct FMeleeHitboxInfo >                  MaceHitboxChain;                                  		// 0x0960 (0x0010) [0x0000000000000000]              
	TArray< struct FMeleeHitboxInfo >                  ShieldHitboxChain;                                		// 0x0970 (0x0010) [0x0000000000000000]              
	class UClass*                                      MaceLightDamageType;                              		// 0x0980 (0x0008) [0x0000000000000000]              
	class UClass*                                      ShieldLightDamageType;                            		// 0x0988 (0x0008) [0x0000000000000000]              
	class UClass*                                      MaceHeavyDamageType;                              		// 0x0990 (0x0008) [0x0000000000000000]              
	class UClass*                                      ShieldHeavyDamageType;                            		// 0x0998 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122378 ];

		return pClassPointer;
	};

	void SwapToShieldMeleeSettings ( );
	void SwapToMaceMeleeSettings ( );
};

UClass* AKFWeap_Blunt_MaceAndShield::pClassPointer = NULL;

// Class kfgamecontent.KFWeapAttach_Pulverizer
// 0x0001 (0x03E9 - 0x03E8)
class AKFWeapAttach_Pulverizer : public AKFWeaponAttachment
{
public:
	unsigned char                                      NextPulverizerShootType;                          		// 0x03E8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122416 ];

		return pClassPointer;
	};

	void UpdateThirdPersonWeaponAction ( );
	void PlayPulverizerShoot ( );
	void ThirdPersonFireEffects ( );
};

UClass* AKFWeapAttach_Pulverizer::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Blunt_Pulverizer
// 0x0018 (0x0970 - 0x0958)
class AKFWeap_Blunt_Pulverizer : public AKFWeap_MeleeBase
{
public:
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x0958 (0x0008) [0x0000000000000000]              
	class AActor*                                      BlastAttachee;                                    		// 0x0960 (0x0008) [0x0000000000000000]              
	float                                              BlastSpawnOffset;                                 		// 0x0968 (0x0004) [0x0000000000000000]              
	DWORD                                              bPulverizerFireReleased : 1;                      		// 0x096C (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bFriendlyFireEnabled : 1;                         		// 0x096C (0x0004) [0x0000000000200000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122439 ];

		return pClassPointer;
	};

	void CanReload ( );
	void SendToFiringState ( );
	void ShouldRefire ( );
	void BeginPulverizerFire ( );
	void ServerBeginPulverizerFire ( );
	void GetWeaponFireAnim ( );
	void GetPulverizerAim ( );
	void CustomFire ( );
	void CanOverrideMagReload ( );
	void eventPreBeginPlay ( );
};

UClass* AKFWeap_Blunt_Pulverizer::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Bow_Crossbow
// 0x0000 (0x08F8 - 0x08F8)
class AKFWeap_Bow_Crossbow : public AKFWeap_ScopedBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122499 ];

		return pClassPointer;
	};

	void eventGetTraderFilter ( );
	void GetReloadAnimName ( );
	void ShouldPlayFireLast ( );
};

UClass* AKFWeap_Bow_Crossbow::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Edged_Katana
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Edged_Katana : public AKFWeap_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122526 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Edged_Katana::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Edged_Knife
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Edged_Knife : public AKFWeap_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122536 ];

		return pClassPointer;
	};

	void AllowedForAllPerks ( );
};

UClass* AKFWeap_Edged_Knife::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Edged_Zweihander
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Edged_Zweihander : public AKFWeap_MeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122547 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Edged_Zweihander::pClassPointer = NULL;

// Class kfgamecontent.KFWeapAttach_Eviscerator
// 0x0008 (0x03F0 - 0x03E8)
class AKFWeapAttach_Eviscerator : public AKFWeaponAttachment
{
public:
	class UAnimTree*                                   CustomAnimTree;                                   		// 0x03E8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122558 ];

		return pClassPointer;
	};

	void ThirdPersonFireEffects ( );
	void eventPreBeginPlay ( );
};

UClass* AKFWeapAttach_Eviscerator::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Eviscerator
// 0x001C (0x0974 - 0x0958)
class AKFWeap_Eviscerator : public AKFWeap_MeleeBase
{
public:
	class UAnimNodeAdditiveBlending*                   AdditiveBlendNode;                                		// 0x0958 (0x0008) [0x0000000000000000]              
	class UAnimNodeBlendPerBone*                       OutOfBladesBlendNode;                             		// 0x0960 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    IdleMotorSound;                                   		// 0x0968 (0x0008) [0x0000000000000000]              
	float                                              BlockInterruptFiringTime;                         		// 0x0970 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122571 ];

		return pClassPointer;
	};

	void BlockInterruptTimer ( );
	void eventGetAltTraderFilter ( );
	void eventGetTraderFilter ( );
	void CalculateTraderWeaponStatDamage ( );
	void CanOverrideMagReload ( );
	void StopIdleMotorSound ( );
	void PlayIdleMotorSound ( );
	void UpdateOutOfAmmoEffects ( );
	void UnHideBlade ( );
	void HideBlade ( );
	void eventRecieveClientImpact ( );
	void GetAmmoType ( );
	void StartFire ( );
	void eventPostInitAnimTree ( );
	void eventPreBeginPlay ( );
};

UClass* AKFWeap_Eviscerator::pClassPointer = NULL;

// Class kfgamecontent.KFWeapAttach_Flamethrower
// 0x0040 (0x04A0 - 0x0460)
class AKFWeapAttach_Flamethrower : public AKFWeapAttach_SprayBase
{
public:
	class UKFParticleSystemComponent*                  PSC_SpineLights[ 0x4 ];                           		// 0x0460 (0x0020) [0x0000000000000000]              
	struct FName                                       SpineLightSocketNames[ 0x4 ];                     		// 0x0480 (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122652 ];

		return pClassPointer;
	};

	void TurnOffFireSpray ( );
	void TurnOnFireSpray ( );
	void TurnOffPilot ( );
	void TurnOnPilot ( );
};

UClass* AKFWeapAttach_Flamethrower::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Flame_CaulkBurn
// 0x0012 (0x093C - 0x092A)
class AKFWeap_Flame_CaulkBurn : public AKFWeap_FlameBase
{
public:
	class UKFParticleSystemComponent*                  PSC_PilotLight2;                                  		// 0x092C (0x0008) [0x0000000000000000]              
	struct FName                                       PilotLight2SocketName;                            		// 0x0934 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122676 ];

		return pClassPointer;
	};

	void eventSetFOV ( );
	void TurnOffPilot ( );
	void TurnOnPilot ( );
};

UClass* AKFWeap_Flame_CaulkBurn::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Flame_Flamethrower
// 0x0042 (0x096C - 0x092A)
class AKFWeap_Flame_Flamethrower : public AKFWeap_FlameBase
{
public:
	class UKFParticleSystemComponent*                  PSC_SpineLights[ 0x4 ];                           		// 0x092C (0x0020) [0x0000000000000000]              
	struct FName                                       SpineLightSocketNames[ 0x4 ];                     		// 0x094C (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122709 ];

		return pClassPointer;
	};

	void eventSetFOV ( );
	void TurnOffFireSpray ( );
	void TurnOnFireSpray ( );
	void TurnOffPilot ( );
	void TurnOnPilot ( );
};

UClass* AKFWeap_Flame_Flamethrower::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_GrenadeLauncher_HX25
// 0x0024 (0x08E8 - 0x08C4)
class AKFWeap_GrenadeLauncher_HX25 : public AKFWeap_GrenadeLauncher_Base
{
public:
	TArray< unsigned char >                            NumPellets;                                       		// 0x08C4 (0x0010) [0x0000000000000000]              
	TArray< struct FVector2D >                         PelletSpread;                                     		// 0x08D4 (0x0010) [0x0000000000000000]              
	float                                              LastSubmunitionFireTime;                          		// 0x08E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122744 ];

		return pClassPointer;
	};

	void eventGetAltTraderFilter ( );
	void CalculateTraderWeaponStatDamage ( );
	void AddMultiShotSpread ( );
	void AddSpread ( );
	void GetNumProjectilesToFire ( );
	void HandleWeaponShotTaken ( );
	void SpawnProjectile ( );
};

UClass* AKFWeap_GrenadeLauncher_HX25::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_GrenadeLauncher_M79
// 0x0000 (0x08C4 - 0x08C4)
class AKFWeap_GrenadeLauncher_M79 : public AKFWeap_GrenadeLauncher_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122795 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_GrenadeLauncher_M79::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Healer_Syringe
// 0x0000 (0x0918 - 0x0918)
class AKFWeap_Healer_Syringe : public AKFWeap_HealerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122805 ];

		return pClassPointer;
	};

	void InitializeAmmo ( );
};

UClass* AKFWeap_Healer_Syringe::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_Berserker
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_Berserker : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122824 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_Berserker::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_Commando
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_Commando : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122833 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_Commando::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_Demolitionist
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_Demolitionist : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122838 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_Demolitionist::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_FieldMedic
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_FieldMedic : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122849 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_FieldMedic::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_Firebug
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_Firebug : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122858 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_Firebug::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_Gunslinger
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_Gunslinger : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122869 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_Gunslinger::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_Sharpshooter
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_Sharpshooter : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122880 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_Sharpshooter::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_Support
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_Support : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122891 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_Support::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Knife_SWAT
// 0x0000 (0x0958 - 0x0958)
class AKFWeap_Knife_SWAT : public AKFWeap_Edged_Knife
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122900 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Knife_SWAT::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_LMG_Stoner63A
// 0x001C (0x08DC - 0x08C0)
class AKFWeap_LMG_Stoner63A : public AKFWeap_RifleBase
{
public:
	struct FString                                     AmmoBeltBulletBonePrefix;                         		// 0x08C0 (0x0010) [0x0000000000000000]              
	int                                                NumAmmoBeltBullets;                               		// 0x08D0 (0x0004) [0x0000000000000000]              
	int                                                LastAmmoCount;                                    		// 0x08D4 (0x0004) [0x0000000000000000]              
	DWORD                                              bAmmoBeltInitialized : 1;                         		// 0x08D8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122911 ];

		return pClassPointer;
	};

	void GetReloadAnimName ( );
	void Timer_AttemptAmmoBeltUpdate ( );
	void UpdateAmmoBeltBullets ( );
	void ANIMNOTIFY_RestoreAmmoBelt ( );
	void PerformReload ( );
	void ConsumeAmmo ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( );
};

UClass* AKFWeap_LMG_Stoner63A::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_Dual9mm
// 0x0000 (0x09F4 - 0x09F4)
class AKFWeap_Pistol_Dual9mm : public AKFWeap_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123001 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Pistol_Dual9mm::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_Colt1911
// 0x0000 (0x0914 - 0x0914)
class AKFWeap_Pistol_Colt1911 : public AKFWeap_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123012 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Pistol_Colt1911::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_DualColt1911
// 0x0000 (0x09F4 - 0x09F4)
class AKFWeap_Pistol_DualColt1911 : public AKFWeap_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123019 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Pistol_DualColt1911::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_Deagle
// 0x0000 (0x0914 - 0x0914)
class AKFWeap_Pistol_Deagle : public AKFWeap_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123030 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Pistol_Deagle::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_DualDeagle
// 0x0000 (0x09F4 - 0x09F4)
class AKFWeap_Pistol_DualDeagle : public AKFWeap_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123037 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Pistol_DualDeagle::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_DualFlare
// 0x0000 (0x09F4 - 0x09F4)
class AKFWeap_Pistol_DualFlare : public AKFWeap_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123081 ];

		return pClassPointer;
	};

	void eventGetAltTraderFilter ( );
};

UClass* AKFWeap_Pistol_DualFlare::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_Flare
// 0x0000 (0x0914 - 0x0914)
class AKFWeap_Pistol_Flare : public AKFWeap_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123087 ];

		return pClassPointer;
	};

	void eventGetAltTraderFilter ( );
};

UClass* AKFWeap_Pistol_Flare::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Pistol_Dummy
// 0x0000 (0x0914 - 0x0914)
class AKFWeap_Pistol_Dummy : public AKFWeap_Pistol_9mm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123105 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Pistol_Dummy::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Random
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_Random : public AKFWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123136 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Random::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Revolver_DualRem1858
// 0x0000 (0x09F4 - 0x09F4)
class AKFWeap_Revolver_DualRem1858 : public AKFWeap_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123141 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Revolver_DualRem1858::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Revolver_DualSW500
// 0x0000 (0x09F4 - 0x09F4)
class AKFWeap_Revolver_DualSW500 : public AKFWeap_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123174 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Revolver_DualSW500::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Revolver_SW500
// 0x0000 (0x0914 - 0x0914)
class AKFWeap_Revolver_SW500 : public AKFWeap_PistolBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123188 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Revolver_SW500::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Rifle_CenterfireMB464
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_Rifle_CenterfireMB464 : public AKFWeap_RifleBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123239 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Rifle_CenterfireMB464::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Rifle_Hemogoblin
// 0x0000 (0x0984 - 0x0984)
class AKFWeap_Rifle_Hemogoblin : public AKFWeap_MedicBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123256 ];

		return pClassPointer;
	};

	void ProcessInstantHitEx ( );
	void eventGetTraderFilter ( );
};

UClass* AKFWeap_Rifle_Hemogoblin::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Rifle_M14EBR
// 0x0000 (0x08F8 - 0x08F8)
class AKFWeap_Rifle_M14EBR : public AKFWeap_ScopedBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123284 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Rifle_M14EBR::pClassPointer = NULL;

// Class kfgamecontent.KFWeapAttach_Railgun
// 0x0010 (0x03F8 - 0x03E8)
class AKFWeapAttach_Railgun : public AKFWeaponAttachment
{
public:
	class UAkEvent*                                    AmbientSoundPlayEvent;                            		// 0x03E8 (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    AmbientSoundStopEvent;                            		// 0x03F0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123302 ];

		return pClassPointer;
	};

	void SpawnTracer ( );
	void Destroyed ( );
	void DetachFrom ( );
	void AttachTo ( );
	void StopAmbientSound ( );
	void StartAmbientSound ( );
};

UClass* AKFWeapAttach_Railgun::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Rifle_RailGun
// 0x00EC (0x09E4 - 0x08F8)
class AKFWeap_Rifle_RailGun : public AKFWeap_ScopedBase
{
public:
	float                                              ForceReloadTime;                                  		// 0x08F8 (0x0004) [0x0000000000000000]              
	class UScriptedTexture*                            CanvasTexture;                                    		// 0x08FC (0x0008) [0x0000000000000000]              
	int                                                CurrentCanvasTextureSize;                         		// 0x0904 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  LockedHitZoneIcon;                                		// 0x0908 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  DefaultHitZoneIcon;                               		// 0x0910 (0x0008) [0x0000000000000000]              
	struct FLinearColor                                RedIconColor;                                     		// 0x0918 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                YellowIconColor;                                  		// 0x0928 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BlueIconColor;                                    		// 0x0938 (0x0010) [0x0000000000000000]              
	float                                              LockRange;                                        		// 0x0948 (0x0004) [0x0000000000000000]              
	float                                              LockAcquireTime;                                  		// 0x094C (0x0004) [0x0000000000000000]              
	float                                              LockAcquireTime_Large;                            		// 0x0950 (0x0004) [0x0000000000000000]              
	float                                              LockAcquireTime_Boss;                             		// 0x0954 (0x0004) [0x0000000000000000]              
	float                                              LockAcquireTime_Versus;                           		// 0x0958 (0x0004) [0x0000000000000000]              
	float                                              LockTolerance;                                    		// 0x095C (0x0004) [0x0000000000000000]              
	DWORD                                              bLockedOnTarget : 1;                              		// 0x0960 (0x0004) [0x0000000000000000] [0x00000001] 
	class AKFPawn_Monster*                             LockedTarget;                                     		// 0x0964 (0x0008) [0x0000000000000000]              
	int                                                LockedHitZone;                                    		// 0x096C (0x0004) [0x0000000000000000]              
	class AKFPawn_Monster*                             PendingLockedTarget;                              		// 0x0970 (0x0008) [0x0000000000000000]              
	int                                                PendingHitZone;                                   		// 0x0978 (0x0004) [0x0000000000000000]              
	float                                              LockAim;                                          		// 0x097C (0x0004) [0x0000000000000000]              
	float                                              MaxScopeScreenDot;                                		// 0x0980 (0x0004) [0x0000000000000000]              
	float                                              LockTargetingSoundInterval;                       		// 0x0984 (0x0004) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockAcquiredSoundFirstPerson;                     		// 0x0988 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockLostSoundFirstPerson;                         		// 0x0990 (0x0008) [0x0000000000000000]              
	class UAkBaseSoundObject*                          LockTargetingSoundFirstPerson;                    		// 0x0998 (0x0008) [0x0000000000000000]              
	float                                              PendingLockAcquireTimeLeft;                       		// 0x09A0 (0x0004) [0x0000000000000000]              
	float                                              PendingLockTimeout;                               		// 0x09A4 (0x0004) [0x0000000000000000]              
	float                                              LockedOnTimeout;                                  		// 0x09A8 (0x0004) [0x0000000000000000]              
	struct FVector                                     LockedAimLocation;                                		// 0x09AC (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           TargetVulnerableLocations;                        		// 0x09B8 (0x0010) [0x0000000000000000]              
	float                                              TargetLocationReplicationInterval;                		// 0x09C8 (0x0004) [0x0000000000000000]              
	class UAkEvent*                                    AmbientSoundPlayEvent;                            		// 0x09CC (0x0008) [0x0000000000000000]              
	class UAkEvent*                                    AmbientSoundStopEvent;                            		// 0x09D4 (0x0008) [0x0000000000000000]              
	struct FName                                       AmbientSoundSocketName;                           		// 0x09DC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123326 ];

		return pClassPointer;
	};

	void WorldToCanvas ( );
	void DrawTargetingIcon ( );
	void OnRender ( );
	void InstantFireClient ( );
	void eventDestroyed ( );
	void PlayTargetingBeepTimer ( );
	void AddTargetingZones ( );
	void ServerSetTargetingLocation ( );
	void CheckTargetLock ( );
	void AllowTargetLockOn ( );
	void AdjustLockTarget ( );
	void CanLockOnTo ( );
	void eventTick ( );
	void DetachWeapon ( );
	void StopAmbientSound ( );
	void StartAmbientSound ( );
	void GetReloadAnimName ( );
	void ShouldPlayFireLast ( );
	void PlayFireEffects ( );
	void ClientWeaponSet ( );
	void InitFOV ( );
};

UClass* AKFWeap_Rifle_RailGun::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_RocketLauncher_RPG7
// 0x0014 (0x08D8 - 0x08C4)
class AKFWeap_RocketLauncher_RPG7 : public AKFWeap_GrenadeLauncher_Base
{
public:
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x08C4 (0x0008) [0x0000000000000000]              
	struct FVector                                     BackBlastOffset;                                  		// 0x08CC (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123514 ];

		return pClassPointer;
	};

	void ANIMNOTIFY_LockBolt ( );
	void GetBackBlastLocationAndRotation ( );
	void CustomFire ( );
};

UClass* AKFWeap_RocketLauncher_RPG7::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_AA12
// 0x0000 (0x08D0 - 0x08D0)
class AKFWeap_Shotgun_AA12 : public AKFWeap_ShotgunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123649 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Shotgun_AA12::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_DoubleBarrel
// 0x0018 (0x08E8 - 0x08D0)
class AKFWeap_Shotgun_DoubleBarrel : public AKFWeap_ShotgunBase
{
public:
	float                                              DoubleFireRecoilModifier;                         		// 0x08D0 (0x0004) [0x0000000000000000]              
	struct FName                                       FireDoubleAnim;                                   		// 0x08D4 (0x0008) [0x0000000000000000]              
	float                                              ForceReloadTime;                                  		// 0x08DC (0x0004) [0x0000000000000000]              
	float                                              DoubleBarrelKickMomentum;                         		// 0x08E0 (0x0004) [0x0000000000000000]              
	float                                              FallingMomentumReduction;                         		// 0x08E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123665 ];

		return pClassPointer;
	};

	void CauseMuzzleFlash ( );
	void PlayFireEffects ( );
	void GetWeaponFireAnim ( );
	void SendToFiringState ( );
	void AltFireMode ( );
};

UClass* AKFWeap_Shotgun_DoubleBarrel::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_DragonsBreath
// 0x0000 (0x08D0 - 0x08D0)
class AKFWeap_Shotgun_DragonsBreath : public AKFWeap_ShotgunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123703 ];

		return pClassPointer;
	};

	void eventGetAltTraderFilter ( );
};

UClass* AKFWeap_Shotgun_DragonsBreath::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_HZ12
// 0x0008 (0x08D8 - 0x08D0)
class AKFWeap_Shotgun_HZ12 : public AKFWeap_ShotgunBase
{
public:
	int                                                NumShotsFired;                                    		// 0x08D0 (0x0004) [0x0000000000000000]              
	float                                              PumpFireInterval;                                 		// 0x08D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123720 ];

		return pClassPointer;
	};

	void ShouldPlayFireLast ( );
	void PerformReload ( );
	void ConsumeAmmo ( );
	void GetFireInterval ( );
	void IsPumpFire ( );
};

UClass* AKFWeap_Shotgun_HZ12::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_M4
// 0x0000 (0x08D0 - 0x08D0)
class AKFWeap_Shotgun_M4 : public AKFWeap_ShotgunBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123753 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_Shotgun_M4::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_Medic
// 0x0010 (0x0994 - 0x0984)
class AKFWeap_Shotgun_Medic : public AKFWeap_MedicBase
{
public:
	TArray< unsigned char >                            NumPellets;                                       		// 0x0984 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123778 ];

		return pClassPointer;
	};

	void eventGetTraderFilter ( );
	void CalculateTraderWeaponStatDamage ( );
	void HandleWeaponShotTaken ( );
	void AddSpread ( );
	void SpawnProjectile ( );
};

UClass* AKFWeap_Shotgun_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Shotgun_Nailgun
// 0x001C (0x08EC - 0x08D0)
class AKFWeap_Shotgun_Nailgun : public AKFWeap_ShotgunBase
{
public:
	TArray< struct FName >                             AltFireSightedAnims;                              		// 0x08D0 (0x0010) [0x0000000000000000]              
	struct FName                                       AltFireAnim;                                      		// 0x08E0 (0x0008) [0x0000000000000000]              
	float                                              AltFireRecoilModifier;                            		// 0x08E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123815 ];

		return pClassPointer;
	};

	void GetWeaponFireAnim ( );
	void GetNumProjectilesToFire ( );
	void ConsumeAmmo ( );
};

UClass* AKFWeap_Shotgun_Nailgun::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_SMG_Kriss
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_SMG_Kriss : public AKFWeap_SMGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123848 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_SMG_Kriss::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_SMG_Medic
// 0x0000 (0x0984 - 0x0984)
class AKFWeap_SMG_Medic : public AKFWeap_MedicBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123871 ];

		return pClassPointer;
	};

	void eventGetTraderFilter ( );
};

UClass* AKFWeap_SMG_Medic::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_SMG_MP5RAS
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_SMG_MP5RAS : public AKFWeap_SMGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123889 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_SMG_MP5RAS::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_SMG_P90
// 0x0000 (0x08C0 - 0x08C0)
class AKFWeap_SMG_P90 : public AKFWeap_SMGBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123928 ];

		return pClassPointer;
	};

};

UClass* AKFWeap_SMG_P90::pClassPointer = NULL;

// Class kfgamecontent.KFWeapAttach_Dual_C4
// 0x0000 (0x0420 - 0x0420)
class AKFWeapAttach_Dual_C4 : public AKFWeapAttach_DualBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123948 ];

		return pClassPointer;
	};

	void UnHide ( );
	void ThirdPersonFireEffects ( );
};

UClass* AKFWeapAttach_Dual_C4::pClassPointer = NULL;

// Class kfgamecontent.KFWeap_Welder
// 0x0050 (0x0910 - 0x08C0)
class AKFWeap_Welder : public AKFWeapon
{
public:
	DWORD                                              bAutoUnequip : 1;                                 		// 0x08C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WeldingRange;                                     		// 0x08C4 (0x0004) [0x0000000000000000]              
	float                                              FastenRate;                                       		// 0x08C8 (0x0004) [0x0000000000000000]              
	float                                              UnfastenRate;                                     		// 0x08CC (0x0004) [0x0000000000000000]              
	float                                              RepairRate;                                       		// 0x08D0 (0x0004) [0x0000000000000000]              
	float                                              ExtraWeldingRange;                                		// 0x08D4 (0x0004) [0x0000000000000000]              
	float                                              AmmoRechargeRate;                                 		// 0x08D8 (0x0004) [0x0000000000000000]              
	struct FName                                       IdleWeldAnim;                                     		// 0x08DC (0x0008) [0x0000000000000000]              
	struct FName                                       WeldOpenAnim;                                     		// 0x08E4 (0x0008) [0x0000000000000000]              
	struct FName                                       WeldCloseAnim;                                    		// 0x08EC (0x0008) [0x0000000000000000]              
	class AKFDoorActor*                                WeldTarget;                                       		// 0x08F4 (0x0008) [0x0000000000000000]              
	float                                              LastTraceHitTime;                                 		// 0x08FC (0x0004) [0x0000000000000000]              
	class UClass*                                      ScreenUIClass;                                    		// 0x0900 (0x0008) [0x0000000000000000]              
	class UKFGFxWorld_WelderScreen*                    ScreenUI;                                         		// 0x0908 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 124046 ];

		return pClassPointer;
	};

	void TickAutoUnequip ( );
	void PlayReadyTransition ( );
	void ServerSetWeldTarget ( );
	void FindRepairableDoor ( );
	void TraceDoorActors ( );
	void TickWeldTarget ( );
	void CheckDelayedStartFire ( );
	void ClientRefire ( );
	void Refire ( );
	void RechargeAmmo ( );
	void CanWeldTarget ( );
	void CustomFire ( );
	void StartFire ( );
	void AltFireMode ( );
	void SetIronSights ( );
	void ShouldAutoReload ( );
	void HasAmmo ( );
	void HasAnyAmmo ( );
	void UpdateScreenUI ( );
	void eventDestroyed ( );
	void eventTick ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( );
	void SetShownInInventory ( );
	void eventPreBeginPlay ( );
};

UClass* AKFWeap_Welder::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif