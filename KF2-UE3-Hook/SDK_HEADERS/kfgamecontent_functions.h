/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: kfgamecontent_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function kfgamecontent.KFAIController_ZedPatriarch.DrawDebug
// [0x00020102] 
// Parameters infos:

void AKFAIController_ZedPatriarch::DrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 111259 ];

	AKFAIController_ZedPatriarch_execDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.PlayDamagePlayerDialog
// [0x00020000] 
// Parameters infos:

void AKFAIController_ZedPatriarch::PlayDamagePlayerDialog ( )
{
	static UFunction* pFnPlayDamagePlayerDialog = NULL;

	if ( ! pFnPlayDamagePlayerDialog )
		pFnPlayDamagePlayerDialog = (UFunction*) UObject::GObjObjects()->Data[ 111257 ];

	AKFAIController_ZedPatriarch_execPlayDamagePlayerDialog_Parms PlayDamagePlayerDialog_Parms;

	this->ProcessEvent ( pFnPlayDamagePlayerDialog, &PlayDamagePlayerDialog_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.EnterZedVictoryState
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::EnterZedVictoryState ( )
{
	static UFunction* pFnEnterZedVictoryState = NULL;

	if ( ! pFnEnterZedVictoryState )
		pFnEnterZedVictoryState = (UFunction*) UObject::GObjObjects()->Data[ 111216 ];

	AKFAIController_ZedPatriarch_execEnterZedVictoryState_Parms EnterZedVictoryState_Parms;

	this->ProcessEvent ( pFnEnterZedVictoryState, &EnterZedVictoryState_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ForceHeal
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::ForceHeal ( )
{
	static UFunction* pFnForceHeal = NULL;

	if ( ! pFnForceHeal )
		pFnForceHeal = (UFunction*) UObject::GObjObjects()->Data[ 111215 ];

	AKFAIController_ZedPatriarch_execForceHeal_Parms ForceHeal_Parms;

	this->ProcessEvent ( pFnForceHeal, &ForceHeal_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyFleeFinished
// [0x00024002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifyFleeFinished ( )
{
	static UFunction* pFnNotifyFleeFinished = NULL;

	if ( ! pFnNotifyFleeFinished )
		pFnNotifyFleeFinished = (UFunction*) UObject::GObjObjects()->Data[ 111213 ];

	AKFAIController_ZedPatriarch_execNotifyFleeFinished_Parms NotifyFleeFinished_Parms;

	this->ProcessEvent ( pFnNotifyFleeFinished, &NotifyFleeFinished_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Flee
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::Flee ( )
{
	static UFunction* pFnFlee = NULL;

	if ( ! pFnFlee )
		pFnFlee = (UFunction*) UObject::GObjObjects()->Data[ 111209 ];

	AKFAIController_ZedPatriarch_execFlee_Parms Flee_Parms;

	this->ProcessEvent ( pFnFlee, &Flee_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoFleeFrom
// [0x00024002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::DoFleeFrom ( )
{
	static UFunction* pFnDoFleeFrom = NULL;

	if ( ! pFnDoFleeFrom )
		pFnDoFleeFrom = (UFunction*) UObject::GObjObjects()->Data[ 111203 ];

	AKFAIController_ZedPatriarch_execDoFleeFrom_Parms DoFleeFrom_Parms;

	this->ProcessEvent ( pFnDoFleeFrom, &DoFleeFrom_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoHeavyZedBump
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::DoHeavyZedBump ( )
{
	static UFunction* pFnDoHeavyZedBump = NULL;

	if ( ! pFnDoHeavyZedBump )
		pFnDoHeavyZedBump = (UFunction*) UObject::GObjObjects()->Data[ 111197 ];

	AKFAIController_ZedPatriarch_execDoHeavyZedBump_Parms DoHeavyZedBump_Parms;

	this->ProcessEvent ( pFnDoHeavyZedBump, &DoHeavyZedBump_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoHeavyBump
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::DoHeavyBump ( )
{
	static UFunction* pFnDoHeavyBump = NULL;

	if ( ! pFnDoHeavyBump )
		pFnDoHeavyBump = (UFunction*) UObject::GObjObjects()->Data[ 111193 ];

	AKFAIController_ZedPatriarch_execDoHeavyBump_Parms DoHeavyBump_Parms;

	this->ProcessEvent ( pFnDoHeavyBump, &DoHeavyBump_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_SearchForChargeObstructions
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::Timer_SearchForChargeObstructions ( )
{
	static UFunction* pFnTimer_SearchForChargeObstructions = NULL;

	if ( ! pFnTimer_SearchForChargeObstructions )
		pFnTimer_SearchForChargeObstructions = (UFunction*) UObject::GObjObjects()->Data[ 111191 ];

	AKFAIController_ZedPatriarch_execTimer_SearchForChargeObstructions_Parms Timer_SearchForChargeObstructions_Parms;

	this->ProcessEvent ( pFnTimer_SearchForChargeObstructions, &Timer_SearchForChargeObstructions_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_SearchForFleeObstructions
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::Timer_SearchForFleeObstructions ( )
{
	static UFunction* pFnTimer_SearchForFleeObstructions = NULL;

	if ( ! pFnTimer_SearchForFleeObstructions )
		pFnTimer_SearchForFleeObstructions = (UFunction*) UObject::GObjObjects()->Data[ 111189 ];

	AKFAIController_ZedPatriarch_execTimer_SearchForFleeObstructions_Parms Timer_SearchForFleeObstructions_Parms;

	this->ProcessEvent ( pFnTimer_SearchForFleeObstructions, &Timer_SearchForFleeObstructions_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NextBattlePhase
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NextBattlePhase ( )
{
	static UFunction* pFnNextBattlePhase = NULL;

	if ( ! pFnNextBattlePhase )
		pFnNextBattlePhase = (UFunction*) UObject::GObjObjects()->Data[ 111188 ];

	AKFAIController_ZedPatriarch_execNextBattlePhase_Parms NextBattlePhase_Parms;

	this->ProcessEvent ( pFnNextBattlePhase, &NextBattlePhase_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_StopSummoningZeds
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::Timer_StopSummoningZeds ( )
{
	static UFunction* pFnTimer_StopSummoningZeds = NULL;

	if ( ! pFnTimer_StopSummoningZeds )
		pFnTimer_StopSummoningZeds = (UFunction*) UObject::GObjObjects()->Data[ 111187 ];

	AKFAIController_ZedPatriarch_execTimer_StopSummoningZeds_Parms Timer_StopSummoningZeds_Parms;

	this->ProcessEvent ( pFnTimer_StopSummoningZeds, &Timer_StopSummoningZeds_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.AmIAllowedToSuicideWhenStuck
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::AmIAllowedToSuicideWhenStuck ( )
{
	static UFunction* pFnAmIAllowedToSuicideWhenStuck = NULL;

	if ( ! pFnAmIAllowedToSuicideWhenStuck )
		pFnAmIAllowedToSuicideWhenStuck = (UFunction*) UObject::GObjObjects()->Data[ 111185 ];

	AKFAIController_ZedPatriarch_execAmIAllowedToSuicideWhenStuck_Parms AmIAllowedToSuicideWhenStuck_Parms;

	this->ProcessEvent ( pFnAmIAllowedToSuicideWhenStuck, &AmIAllowedToSuicideWhenStuck_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Timer_RageTimeOut
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::Timer_RageTimeOut ( )
{
	static UFunction* pFnTimer_RageTimeOut = NULL;

	if ( ! pFnTimer_RageTimeOut )
		pFnTimer_RageTimeOut = (UFunction*) UObject::GObjObjects()->Data[ 111184 ];

	AKFAIController_ZedPatriarch_execTimer_RageTimeOut_Parms Timer_RageTimeOut_Parms;

	this->ProcessEvent ( pFnTimer_RageTimeOut, &Timer_RageTimeOut_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.UpdateRageState
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::UpdateRageState ( )
{
	static UFunction* pFnUpdateRageState = NULL;

	if ( ! pFnUpdateRageState )
		pFnUpdateRageState = (UFunction*) UObject::GObjObjects()->Data[ 111178 ];

	AKFAIController_ZedPatriarch_execUpdateRageState_Parms UpdateRageState_Parms;

	this->ProcessEvent ( pFnUpdateRageState, &UpdateRageState_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.StartPaternalInstinct
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::StartPaternalInstinct ( )
{
	static UFunction* pFnStartPaternalInstinct = NULL;

	if ( ! pFnStartPaternalInstinct )
		pFnStartPaternalInstinct = (UFunction*) UObject::GObjObjects()->Data[ 111177 ];

	AKFAIController_ZedPatriarch_execStartPaternalInstinct_Parms StartPaternalInstinct_Parms;

	this->ProcessEvent ( pFnStartPaternalInstinct, &StartPaternalInstinct_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyTakeHit
// [0x00820002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifyTakeHit ( )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 111167 ];

	AKFAIController_ZedPatriarch_execNotifyTakeHit_Parms NotifyTakeHit_Parms;

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyKilled
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifyKilled ( )
{
	static UFunction* pFnNotifyKilled = NULL;

	if ( ! pFnNotifyKilled )
		pFnNotifyKilled = (UFunction*) UObject::GObjObjects()->Data[ 111162 ];

	AKFAIController_ZedPatriarch_execNotifyKilled_Parms NotifyKilled_Parms;

	this->ProcessEvent ( pFnNotifyKilled, &NotifyKilled_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyMeleeDamageDealt
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifyMeleeDamageDealt ( )
{
	static UFunction* pFnNotifyMeleeDamageDealt = NULL;

	if ( ! pFnNotifyMeleeDamageDealt )
		pFnNotifyMeleeDamageDealt = (UFunction*) UObject::GObjObjects()->Data[ 111161 ];

	AKFAIController_ZedPatriarch_execNotifyMeleeDamageDealt_Parms NotifyMeleeDamageDealt_Parms;

	this->ProcessEvent ( pFnNotifyMeleeDamageDealt, &NotifyMeleeDamageDealt_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifySpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifySpecialMoveEnded ( )
{
	static UFunction* pFnNotifySpecialMoveEnded = NULL;

	if ( ! pFnNotifySpecialMoveEnded )
		pFnNotifySpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 111159 ];

	AKFAIController_ZedPatriarch_execNotifySpecialMoveEnded_Parms NotifySpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnNotifySpecialMoveEnded, &NotifySpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyCommandFinished
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifyCommandFinished ( )
{
	static UFunction* pFnNotifyCommandFinished = NULL;

	if ( ! pFnNotifyCommandFinished )
		pFnNotifyCommandFinished = (UFunction*) UObject::GObjObjects()->Data[ 111157 ];

	AKFAIController_ZedPatriarch_execNotifyCommandFinished_Parms NotifyCommandFinished_Parms;

	this->ProcessEvent ( pFnNotifyCommandFinished, &NotifyCommandFinished_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyAttackActor
// [0x00020000] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifyAttackActor ( )
{
	static UFunction* pFnNotifyAttackActor = NULL;

	if ( ! pFnNotifyAttackActor )
		pFnNotifyAttackActor = (UFunction*) UObject::GObjObjects()->Data[ 111155 ];

	AKFAIController_ZedPatriarch_execNotifyAttackActor_Parms NotifyAttackActor_Parms;

	this->ProcessEvent ( pFnNotifyAttackActor, &NotifyAttackActor_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoorFinished
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::DoorFinished ( )
{
	static UFunction* pFnDoorFinished = NULL;

	if ( ! pFnDoorFinished )
		pFnDoorFinished = (UFunction*) UObject::GObjObjects()->Data[ 111152 ];

	AKFAIController_ZedPatriarch_execDoorFinished_Parms DoorFinished_Parms;

	this->ProcessEvent ( pFnDoorFinished, &DoorFinished_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.NotifyAttackDoor
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::NotifyAttackDoor ( )
{
	static UFunction* pFnNotifyAttackDoor = NULL;

	if ( ! pFnNotifyAttackDoor )
		pFnNotifyAttackDoor = (UFunction*) UObject::GObjObjects()->Data[ 111150 ];

	AKFAIController_ZedPatriarch_execNotifyAttackDoor_Parms NotifyAttackDoor_Parms;

	this->ProcessEvent ( pFnNotifyAttackDoor, &NotifyAttackDoor_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SomeEnemiesAreHidden
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::SomeEnemiesAreHidden ( )
{
	static UFunction* pFnSomeEnemiesAreHidden = NULL;

	if ( ! pFnSomeEnemiesAreHidden )
		pFnSomeEnemiesAreHidden = (UFunction*) UObject::GObjObjects()->Data[ 111144 ];

	AKFAIController_ZedPatriarch_execSomeEnemiesAreHidden_Parms SomeEnemiesAreHidden_Parms;

	this->ProcessEvent ( pFnSomeEnemiesAreHidden, &SomeEnemiesAreHidden_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.IsCeilingClear
// [0x00820002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::IsCeilingClear ( )
{
	static UFunction* pFnIsCeilingClear = NULL;

	if ( ! pFnIsCeilingClear )
		pFnIsCeilingClear = (UFunction*) UObject::GObjObjects()->Data[ 111139 ];

	AKFAIController_ZedPatriarch_execIsCeilingClear_Parms IsCeilingClear_Parms;

	this->ProcessEvent ( pFnIsCeilingClear, &IsCeilingClear_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.CanSetSprinting
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::CanSetSprinting ( )
{
	static UFunction* pFnCanSetSprinting = NULL;

	if ( ! pFnCanSetSprinting )
		pFnCanSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 111136 ];

	AKFAIController_ZedPatriarch_execCanSetSprinting_Parms CanSetSprinting_Parms;

	this->ProcessEvent ( pFnCanSetSprinting, &CanSetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ShouldSprint
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::ShouldSprint ( )
{
	static UFunction* pFnShouldSprint = NULL;

	if ( ! pFnShouldSprint )
		pFnShouldSprint = (UFunction*) UObject::GObjObjects()->Data[ 111134 ];

	AKFAIController_ZedPatriarch_execShouldSprint_Parms ShouldSprint_Parms;

	this->ProcessEvent ( pFnShouldSprint, &ShouldSprint_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.EvaluateSprinting
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::EvaluateSprinting ( )
{
	static UFunction* pFnEvaluateSprinting = NULL;

	if ( ! pFnEvaluateSprinting )
		pFnEvaluateSprinting = (UFunction*) UObject::GObjObjects()->Data[ 111133 ];

	AKFAIController_ZedPatriarch_execEvaluateSprinting_Parms EvaluateSprinting_Parms;

	this->ProcessEvent ( pFnEvaluateSprinting, &EvaluateSprinting_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.DoStrike
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::DoStrike ( )
{
	static UFunction* pFnDoStrike = NULL;

	if ( ! pFnDoStrike )
		pFnDoStrike = (UFunction*) UObject::GObjObjects()->Data[ 111131 ];

	AKFAIController_ZedPatriarch_execDoStrike_Parms DoStrike_Parms;

	this->ProcessEvent ( pFnDoStrike, &DoStrike_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.GetAdjustedAimFor
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::GetAdjustedAimFor ( )
{
	static UFunction* pFnGetAdjustedAimFor = NULL;

	if ( ! pFnGetAdjustedAimFor )
		pFnGetAdjustedAimFor = (UFunction*) UObject::GObjObjects()->Data[ 111127 ];

	AKFAIController_ZedPatriarch_execGetAdjustedAimFor_Parms GetAdjustedAimFor_Parms;

	this->ProcessEvent ( pFnGetAdjustedAimFor, &GetAdjustedAimFor_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.IsWeaponArmClear
// [0x00820002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::IsWeaponArmClear ( )
{
	static UFunction* pFnIsWeaponArmClear = NULL;

	if ( ! pFnIsWeaponArmClear )
		pFnIsWeaponArmClear = (UFunction*) UObject::GObjObjects()->Data[ 111123 ];

	AKFAIController_ZedPatriarch_execIsWeaponArmClear_Parms IsWeaponArmClear_Parms;

	this->ProcessEvent ( pFnIsWeaponArmClear, &IsWeaponArmClear_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.EvaluateAttacks
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::EvaluateAttacks ( )
{
	static UFunction* pFnEvaluateAttacks = NULL;

	if ( ! pFnEvaluateAttacks )
		pFnEvaluateAttacks = (UFunction*) UObject::GObjObjects()->Data[ 111115 ];

	AKFAIController_ZedPatriarch_execEvaluateAttacks_Parms EvaluateAttacks_Parms;

	this->ProcessEvent ( pFnEvaluateAttacks, &EvaluateAttacks_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.UpdateRecentlySeenEnemyList
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::UpdateRecentlySeenEnemyList ( )
{
	static UFunction* pFnUpdateRecentlySeenEnemyList = NULL;

	if ( ! pFnUpdateRecentlySeenEnemyList )
		pFnUpdateRecentlySeenEnemyList = (UFunction*) UObject::GObjObjects()->Data[ 111112 ];

	AKFAIController_ZedPatriarch_execUpdateRecentlySeenEnemyList_Parms UpdateRecentlySeenEnemyList_Parms;

	this->ProcessEvent ( pFnUpdateRecentlySeenEnemyList, &UpdateRecentlySeenEnemyList_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SeePlayer
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedPatriarch::eventSeePlayer ( )
{
	static UFunction* pFnSeePlayer = NULL;

	if ( ! pFnSeePlayer )
		pFnSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 111106 ];

	AKFAIController_ZedPatriarch_eventSeePlayer_Parms SeePlayer_Parms;

	this->ProcessEvent ( pFnSeePlayer, &SeePlayer_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Tick
// [0x00020102] 
// Parameters infos:

void AKFAIController_ZedPatriarch::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 111104 ];

	AKFAIController_ZedPatriarch_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SetBestTarget
// [0x00C24002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::SetBestTarget ( )
{
	static UFunction* pFnSetBestTarget = NULL;

	if ( ! pFnSetBestTarget )
		pFnSetBestTarget = (UFunction*) UObject::GObjObjects()->Data[ 111086 ];

	AKFAIController_ZedPatriarch_execSetBestTarget_Parms SetBestTarget_Parms;

	this->ProcessEvent ( pFnSetBestTarget, &SetBestTarget_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ChangeEnemy
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedPatriarch::eventChangeEnemy ( )
{
	static UFunction* pFnChangeEnemy = NULL;

	if ( ! pFnChangeEnemy )
		pFnChangeEnemy = (UFunction*) UObject::GObjObjects()->Data[ 111082 ];

	AKFAIController_ZedPatriarch_eventChangeEnemy_Parms ChangeEnemy_Parms;

	this->ProcessEvent ( pFnChangeEnemy, &ChangeEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.ForceSetEnemy
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::ForceSetEnemy ( )
{
	static UFunction* pFnForceSetEnemy = NULL;

	if ( ! pFnForceSetEnemy )
		pFnForceSetEnemy = (UFunction*) UObject::GObjObjects()->Data[ 111080 ];

	AKFAIController_ZedPatriarch_execForceSetEnemy_Parms ForceSetEnemy_Parms;

	this->ProcessEvent ( pFnForceSetEnemy, &ForceSetEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.SetEnemy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedPatriarch::eventSetEnemy ( )
{
	static UFunction* pFnSetEnemy = NULL;

	if ( ! pFnSetEnemy )
		pFnSetEnemy = (UFunction*) UObject::GObjObjects()->Data[ 110584 ];

	AKFAIController_ZedPatriarch_eventSetEnemy_Parms SetEnemy_Parms;

	this->ProcessEvent ( pFnSetEnemy, &SetEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.FindNewEnemy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedPatriarch::eventFindNewEnemy ( )
{
	static UFunction* pFnFindNewEnemy = NULL;

	if ( ! pFnFindNewEnemy )
		pFnFindNewEnemy = (UFunction*) UObject::GObjObjects()->Data[ 111077 ];

	AKFAIController_ZedPatriarch_eventFindNewEnemy_Parms FindNewEnemy_Parms;

	this->ProcessEvent ( pFnFindNewEnemy, &FindNewEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.GetAggroRating
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::GetAggroRating ( )
{
	static UFunction* pFnGetAggroRating = NULL;

	if ( ! pFnGetAggroRating )
		pFnGetAggroRating = (UFunction*) UObject::GObjObjects()->Data[ 111072 ];

	AKFAIController_ZedPatriarch_execGetAggroRating_Parms GetAggroRating_Parms;

	this->ProcessEvent ( pFnGetAggroRating, &GetAggroRating_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.CanSwitchEnemies
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::CanSwitchEnemies ( )
{
	static UFunction* pFnCanSwitchEnemies = NULL;

	if ( ! pFnCanSwitchEnemies )
		pFnCanSwitchEnemies = (UFunction*) UObject::GObjObjects()->Data[ 111070 ];

	AKFAIController_ZedPatriarch_execCanSwitchEnemies_Parms CanSwitchEnemies_Parms;

	this->ProcessEvent ( pFnCanSwitchEnemies, &CanSwitchEnemies_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.IsAggroEnemySwitchAllowed
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::IsAggroEnemySwitchAllowed ( )
{
	static UFunction* pFnIsAggroEnemySwitchAllowed = NULL;

	if ( ! pFnIsAggroEnemySwitchAllowed )
		pFnIsAggroEnemySwitchAllowed = (UFunction*) UObject::GObjObjects()->Data[ 111068 ];

	AKFAIController_ZedPatriarch_execIsAggroEnemySwitchAllowed_Parms IsAggroEnemySwitchAllowed_Parms;

	this->ProcessEvent ( pFnIsAggroEnemySwitchAllowed, &IsAggroEnemySwitchAllowed_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedPatriarch::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 111067 ];

	AKFAIController_ZedPatriarch_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.PawnDied
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedPatriarch::PawnDied ( )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 111065 ];

	AKFAIController_ZedPatriarch_execPawnDied_Parms PawnDied_Parms;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedPatriarch.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedPatriarch::eventPossess ( )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 111062 ];

	AKFAIController_ZedPatriarch_eventPossess_Parms Possess_Parms;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function kfgamecontent.AICommand_FleshpoundKing_ChestBeamAttack.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_FleshpoundKing_ChestBeamAttack::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110593 ];

	UAICommand_FleshpoundKing_ChestBeamAttack_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_FleshpoundKing_ChestBeamAttack.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_FleshpoundKing_ChestBeamAttack::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110592 ];

	UAICommand_FleshpoundKing_ChestBeamAttack_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_FleshpoundKing_ChestBeamAttack.ChestBeamAttack
// [0x00022002] 
// Parameters infos:

void UAICommand_FleshpoundKing_ChestBeamAttack::ChestBeamAttack ( )
{
	static UFunction* pFnChestBeamAttack = NULL;

	if ( ! pFnChestBeamAttack )
		pFnChestBeamAttack = (UFunction*) UObject::GObjObjects()->Data[ 110588 ];

	UAICommand_FleshpoundKing_ChestBeamAttack_execChestBeamAttack_Parms ChestBeamAttack_Parms;

	this->ProcessEvent ( pFnChestBeamAttack, &ChestBeamAttack_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.ForceTargetChange
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::ForceTargetChange ( )
{
	static UFunction* pFnForceTargetChange = NULL;

	if ( ! pFnForceTargetChange )
		pFnForceTargetChange = (UFunction*) UObject::GObjObjects()->Data[ 110979 ];

	AKFAIController_ZedFleshpoundKing_execForceTargetChange_Parms ForceTargetChange_Parms;

	this->ProcessEvent ( pFnForceTargetChange, &ForceTargetChange_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.ChangeEnemy
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::eventChangeEnemy ( )
{
	static UFunction* pFnChangeEnemy = NULL;

	if ( ! pFnChangeEnemy )
		pFnChangeEnemy = (UFunction*) UObject::GObjObjects()->Data[ 110976 ];

	AKFAIController_ZedFleshpoundKing_eventChangeEnemy_Parms ChangeEnemy_Parms;

	this->ProcessEvent ( pFnChangeEnemy, &ChangeEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.SetEnemy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::eventSetEnemy ( )
{
	static UFunction* pFnSetEnemy = NULL;

	if ( ! pFnSetEnemy )
		pFnSetEnemy = (UFunction*) UObject::GObjObjects()->Data[ 110973 ];

	AKFAIController_ZedFleshpoundKing_eventSetEnemy_Parms SetEnemy_Parms;

	this->ProcessEvent ( pFnSetEnemy, &SetEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.FindNewEnemy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::eventFindNewEnemy ( )
{
	static UFunction* pFnFindNewEnemy = NULL;

	if ( ! pFnFindNewEnemy )
		pFnFindNewEnemy = (UFunction*) UObject::GObjObjects()->Data[ 110971 ];

	AKFAIController_ZedFleshpoundKing_eventFindNewEnemy_Parms FindNewEnemy_Parms;

	this->ProcessEvent ( pFnFindNewEnemy, &FindNewEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.CanSwitchEnemies
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::CanSwitchEnemies ( )
{
	static UFunction* pFnCanSwitchEnemies = NULL;

	if ( ! pFnCanSwitchEnemies )
		pFnCanSwitchEnemies = (UFunction*) UObject::GObjObjects()->Data[ 110969 ];

	AKFAIController_ZedFleshpoundKing_execCanSwitchEnemies_Parms CanSwitchEnemies_Parms;

	this->ProcessEvent ( pFnCanSwitchEnemies, &CanSwitchEnemies_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.NotifySpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::NotifySpecialMoveEnded ( )
{
	static UFunction* pFnNotifySpecialMoveEnded = NULL;

	if ( ! pFnNotifySpecialMoveEnded )
		pFnNotifySpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 110967 ];

	AKFAIController_ZedFleshpoundKing_execNotifySpecialMoveEnded_Parms NotifySpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnNotifySpecialMoveEnded, &NotifySpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.TransitionToPhase
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::TransitionToPhase ( )
{
	static UFunction* pFnTransitionToPhase = NULL;

	if ( ! pFnTransitionToPhase )
		pFnTransitionToPhase = (UFunction*) UObject::GObjObjects()->Data[ 110965 ];

	AKFAIController_ZedFleshpoundKing_execTransitionToPhase_Parms TransitionToPhase_Parms;

	this->ProcessEvent ( pFnTransitionToPhase, &TransitionToPhase_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.NotifyTakeHit
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::NotifyTakeHit ( )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 110958 ];

	AKFAIController_ZedFleshpoundKing_execNotifyTakeHit_Parms NotifyTakeHit_Parms;

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.CheckForBeamAttack
// [0x00820002] 
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::CheckForBeamAttack ( )
{
	static UFunction* pFnCheckForBeamAttack = NULL;

	if ( ! pFnCheckForBeamAttack )
		pFnCheckForBeamAttack = (UFunction*) UObject::GObjObjects()->Data[ 110948 ];

	AKFAIController_ZedFleshpoundKing_execCheckForBeamAttack_Parms CheckForBeamAttack_Parms;

	this->ProcessEvent ( pFnCheckForBeamAttack, &CheckForBeamAttack_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 110946 ];

	AKFAIController_ZedFleshpoundKing_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.SeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::eventSeePlayer ( )
{
	static UFunction* pFnSeePlayer = NULL;

	if ( ! pFnSeePlayer )
		pFnSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 110944 ];

	AKFAIController_ZedFleshpoundKing_eventSeePlayer_Parms SeePlayer_Parms;

	this->ProcessEvent ( pFnSeePlayer, &SeePlayer_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedFleshpoundKing.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedFleshpoundKing::eventPossess ( )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 110940 ];

	AKFAIController_ZedFleshpoundKing_eventPossess_Parms Possess_Parms;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function kfgamecontent.KFDifficulty_FleshpoundKing.GetChestBeamCooldownTime
// [0x00022002] 
// Parameters infos:

void UKFDifficulty_FleshpoundKing::GetChestBeamCooldownTime ( )
{
	static UFunction* pFnGetChestBeamCooldownTime = NULL;

	if ( ! pFnGetChestBeamCooldownTime )
		pFnGetChestBeamCooldownTime = (UFunction*) UObject::GObjObjects()->Data[ 110602 ];

	UKFDifficulty_FleshpoundKing_execGetChestBeamCooldownTime_Parms GetChestBeamCooldownTime_Parms;

	this->ProcessEvent ( pFnGetChestBeamCooldownTime, &GetChestBeamCooldownTime_Parms, NULL );
};

// Function kfgamecontent.AICommand_Husk_Suicide.GetSpecialMove
// [0x00020000] 
// Parameters infos:

void UAICommand_Husk_Suicide::GetSpecialMove ( )
{
	static UFunction* pFnGetSpecialMove = NULL;

	if ( ! pFnGetSpecialMove )
		pFnGetSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 110616 ];

	UAICommand_Husk_Suicide_execGetSpecialMove_Parms GetSpecialMove_Parms;

	this->ProcessEvent ( pFnGetSpecialMove, &GetSpecialMove_Parms, NULL );
};

// Function kfgamecontent.AICommand_Husk_Suicide.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_Husk_Suicide::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110615 ];

	UAICommand_Husk_Suicide_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_Husk_Suicide.Paused
// [0x00020002] 
// Parameters infos:

void UAICommand_Husk_Suicide::Paused ( )
{
	static UFunction* pFnPaused = NULL;

	if ( ! pFnPaused )
		pFnPaused = (UFunction*) UObject::GObjObjects()->Data[ 110613 ];

	UAICommand_Husk_Suicide_execPaused_Parms Paused_Parms;

	this->ProcessEvent ( pFnPaused, &Paused_Parms, NULL );
};

// Function kfgamecontent.AICommand_Husk_Suicide.Resumed
// [0x00020002] 
// Parameters infos:

void UAICommand_Husk_Suicide::Resumed ( )
{
	static UFunction* pFnResumed = NULL;

	if ( ! pFnResumed )
		pFnResumed = (UFunction*) UObject::GObjObjects()->Data[ 110611 ];

	UAICommand_Husk_Suicide_execResumed_Parms Resumed_Parms;

	this->ProcessEvent ( pFnResumed, &Resumed_Parms, NULL );
};

// Function kfgamecontent.AICommand_Husk_Suicide.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_Husk_Suicide::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110610 ];

	UAICommand_Husk_Suicide_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_Husk_Suicide.Suicide
// [0x00022002] 
// Parameters infos:

void UAICommand_Husk_Suicide::Suicide ( )
{
	static UFunction* pFnSuicide = NULL;

	if ( ! pFnSuicide )
		pFnSuicide = (UFunction*) UObject::GObjObjects()->Data[ 110606 ];

	UAICommand_Husk_Suicide_execSuicide_Parms Suicide_Parms;

	this->ProcessEvent ( pFnSuicide, &Suicide_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.DebugAimError
// [0x00820002] 
// Parameters infos:

void AKFAIController_ZedHusk::DebugAimError ( )
{
	static UFunction* pFnDebugAimError = NULL;

	if ( ! pFnDebugAimError )
		pFnDebugAimError = (UFunction*) UObject::GObjObjects()->Data[ 110873 ];

	AKFAIController_ZedHusk_execDebugAimError_Parms DebugAimError_Parms;

	this->ProcessEvent ( pFnDebugAimError, &DebugAimError_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.ShootFireball
// [0x00820002] 
// Parameters infos:

void AKFAIController_ZedHusk::ShootFireball ( )
{
	static UFunction* pFnShootFireball = NULL;

	if ( ! pFnShootFireball )
		pFnShootFireball = (UFunction*) UObject::GObjObjects()->Data[ 110856 ];

	AKFAIController_ZedHusk_execShootFireball_Parms ShootFireball_Parms;

	this->ProcessEvent ( pFnShootFireball, &ShootFireball_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.DoStrike
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedHusk::DoStrike ( )
{
	static UFunction* pFnDoStrike = NULL;

	if ( ! pFnDoStrike )
		pFnDoStrike = (UFunction*) UObject::GObjObjects()->Data[ 110855 ];

	AKFAIController_ZedHusk_execDoStrike_Parms DoStrike_Parms;

	this->ProcessEvent ( pFnDoStrike, &DoStrike_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.ShouldSprint
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedHusk::ShouldSprint ( )
{
	static UFunction* pFnShouldSprint = NULL;

	if ( ! pFnShouldSprint )
		pFnShouldSprint = (UFunction*) UObject::GObjObjects()->Data[ 110853 ];

	AKFAIController_ZedHusk_execShouldSprint_Parms ShouldSprint_Parms;

	this->ProcessEvent ( pFnShouldSprint, &ShouldSprint_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.SetEnemy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedHusk::eventSetEnemy ( )
{
	static UFunction* pFnSetEnemy = NULL;

	if ( ! pFnSetEnemy )
		pFnSetEnemy = (UFunction*) UObject::GObjObjects()->Data[ 110850 ];

	AKFAIController_ZedHusk_eventSetEnemy_Parms SetEnemy_Parms;

	this->ProcessEvent ( pFnSetEnemy, &SetEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.CanDoFireball
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedHusk::CanDoFireball ( )
{
	static UFunction* pFnCanDoFireball = NULL;

	if ( ! pFnCanDoFireball )
		pFnCanDoFireball = (UFunction*) UObject::GObjObjects()->Data[ 110847 ];

	AKFAIController_ZedHusk_execCanDoFireball_Parms CanDoFireball_Parms;

	this->ProcessEvent ( pFnCanDoFireball, &CanDoFireball_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.CanDoFlamethrower
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedHusk::CanDoFlamethrower ( )
{
	static UFunction* pFnCanDoFlamethrower = NULL;

	if ( ! pFnCanDoFlamethrower )
		pFnCanDoFlamethrower = (UFunction*) UObject::GObjObjects()->Data[ 110844 ];

	AKFAIController_ZedHusk_execCanDoFlamethrower_Parms CanDoFlamethrower_Parms;

	this->ProcessEvent ( pFnCanDoFlamethrower, &CanDoFlamethrower_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.CanDoSuicide
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedHusk::CanDoSuicide ( )
{
	static UFunction* pFnCanDoSuicide = NULL;

	if ( ! pFnCanDoSuicide )
		pFnCanDoSuicide = (UFunction*) UObject::GObjObjects()->Data[ 110841 ];

	AKFAIController_ZedHusk_execCanDoSuicide_Parms CanDoSuicide_Parms;

	this->ProcessEvent ( pFnCanDoSuicide, &CanDoSuicide_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.IsSuicidal
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedHusk::IsSuicidal ( )
{
	static UFunction* pFnIsSuicidal = NULL;

	if ( ! pFnIsSuicidal )
		pFnIsSuicidal = (UFunction*) UObject::GObjObjects()->Data[ 110839 ];

	AKFAIController_ZedHusk_execIsSuicidal_Parms IsSuicidal_Parms;

	this->ProcessEvent ( pFnIsSuicidal, &IsSuicidal_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.Tick
// [0x00020102] 
// Parameters infos:

void AKFAIController_ZedHusk::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 110836 ];

	AKFAIController_ZedHusk_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedHusk::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 110834 ];

	AKFAIController_ZedHusk_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedHusk::eventPossess ( )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 110831 ];

	AKFAIController_ZedHusk_eventPossess_Parms Possess_Parms;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedHusk.IsNearDoor
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedHusk::IsNearDoor ( )
{
	static UFunction* pFnIsNearDoor = NULL;

	if ( ! pFnIsNearDoor )
		pFnIsNearDoor = (UFunction*) UObject::GObjObjects()->Data[ 110829 ];

	AKFAIController_ZedHusk_execIsNearDoor_Parms IsNearDoor_Parms;

	this->ProcessEvent ( pFnIsNearDoor, &IsNearDoor_Parms, NULL );
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.HandleAICommandSpecialAction
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAICommand_HuskFireBallAttack::eventHandleAICommandSpecialAction ( )
{
	static UFunction* pFnHandleAICommandSpecialAction = NULL;

	if ( ! pFnHandleAICommandSpecialAction )
		pFnHandleAICommandSpecialAction = (UFunction*) UObject::GObjObjects()->Data[ 110643 ];

	UAICommand_HuskFireBallAttack_eventHandleAICommandSpecialAction_Parms HandleAICommandSpecialAction_Parms;

	this->ProcessEvent ( pFnHandleAICommandSpecialAction, &HandleAICommandSpecialAction_Parms, NULL );
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_HuskFireBallAttack::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110635 ];

	UAICommand_HuskFireBallAttack_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_HuskFireBallAttack::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110634 ];

	UAICommand_HuskFireBallAttack_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_HuskFireBallAttack.FireBallAttack
// [0x00022002] 
// Parameters infos:

void UAICommand_HuskFireBallAttack::FireBallAttack ( )
{
	static UFunction* pFnFireBallAttack = NULL;

	if ( ! pFnFireBallAttack )
		pFnFireBallAttack = (UFunction*) UObject::GObjObjects()->Data[ 110630 ];

	UAICommand_HuskFireBallAttack_execFireBallAttack_Parms FireBallAttack_Parms;

	this->ProcessEvent ( pFnFireBallAttack, &FireBallAttack_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::CanOverrideMoveWith ( )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 120903 ];

	UKFSM_Husk_FireBallAttack_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 120900 ];

	UKFSM_Husk_FireBallAttack_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.NotifyFireballFired
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::NotifyFireballFired ( )
{
	static UFunction* pFnNotifyFireballFired = NULL;

	if ( ! pFnNotifyFireballFired )
		pFnNotifyFireballFired = (UFunction*) UObject::GObjObjects()->Data[ 120899 ];

	UKFSM_Husk_FireBallAttack_execNotifyFireballFired_Parms NotifyFireballFired_Parms;

	this->ProcessEvent ( pFnNotifyFireballFired, &NotifyFireballFired_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.PlayAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::PlayAnimation ( )
{
	static UFunction* pFnPlayAnimation = NULL;

	if ( ! pFnPlayAnimation )
		pFnPlayAnimation = (UFunction*) UObject::GObjObjects()->Data[ 120897 ];

	UKFSM_Husk_FireBallAttack_execPlayAnimation_Parms PlayAnimation_Parms;

	this->ProcessEvent ( pFnPlayAnimation, &PlayAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120894 ];

	UKFSM_Husk_FireBallAttack_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.GetFireOffset
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::GetFireOffset ( )
{
	static UFunction* pFnGetFireOffset = NULL;

	if ( ! pFnGetFireOffset )
		pFnGetFireOffset = (UFunction*) UObject::GObjObjects()->Data[ 115361 ];

	UKFSM_Husk_FireBallAttack_execGetFireOffset_Parms GetFireOffset_Parms;

	this->ProcessEvent ( pFnGetFireOffset, &GetFireOffset_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 120892 ];

	UKFSM_Husk_FireBallAttack_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FireBallAttack.PackFlagsBase
// [0x00022002] 
// Parameters infos:

void UKFSM_Husk_FireBallAttack::PackFlagsBase ( )
{
	static UFunction* pFnPackFlagsBase = NULL;

	if ( ! pFnPackFlagsBase )
		pFnPackFlagsBase = (UFunction*) UObject::GObjObjects()->Data[ 110645 ];

	UKFSM_Husk_FireBallAttack_execPackFlagsBase_Parms PackFlagsBase_Parms;

	this->ProcessEvent ( pFnPackFlagsBase, &PackFlagsBase_Parms, NULL );
};

// Function kfgamecontent.AICommand_HuskFlameThrowerAttack.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_HuskFlameThrowerAttack::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110655 ];

	UAICommand_HuskFlameThrowerAttack_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_HuskFlameThrowerAttack.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_HuskFlameThrowerAttack::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110654 ];

	UAICommand_HuskFlameThrowerAttack_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_HuskFlameThrowerAttack.FlameThrowerAttack
// [0x00022002] 
// Parameters infos:

void UAICommand_HuskFlameThrowerAttack::FlameThrowerAttack ( )
{
	static UFunction* pFnFlameThrowerAttack = NULL;

	if ( ! pFnFlameThrowerAttack )
		pFnFlameThrowerAttack = (UFunction*) UObject::GObjObjects()->Data[ 110650 ];

	UAICommand_HuskFlameThrowerAttack_execFlameThrowerAttack_Parms FlameThrowerAttack_Parms;

	this->ProcessEvent ( pFnFlameThrowerAttack, &FlameThrowerAttack_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_Grab.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_Grab::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110671 ];

	UAICommand_Patriarch_Grab_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_Grab.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_Grab::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110670 ];

	UAICommand_Patriarch_Grab_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_Grab.TentacleGrab
// [0x00022002] 
// Parameters infos:

void UAICommand_Patriarch_Grab::TentacleGrab ( )
{
	static UFunction* pFnTentacleGrab = NULL;

	if ( ! pFnTentacleGrab )
		pFnTentacleGrab = (UFunction*) UObject::GObjObjects()->Data[ 110666 ];

	UAICommand_Patriarch_Grab_execTentacleGrab_Parms TentacleGrab_Parms;

	this->ProcessEvent ( pFnTentacleGrab, &TentacleGrab_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayBossMusic
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayBossMusic ( )
{
	static UFunction* pFnPlayBossMusic = NULL;

	if ( ! pFnPlayBossMusic )
		pFnPlayBossMusic = (UFunction*) UObject::GObjObjects()->Data[ 115765 ];

	AKFPawn_ZedPatriarch_execPlayBossMusic_Parms PlayBossMusic_Parms;

	this->ProcessEvent ( pFnPlayBossMusic, &PlayBossMusic_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.Timer_TickPatriarchDialog
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::Timer_TickPatriarchDialog ( )
{
	static UFunction* pFnTimer_TickPatriarchDialog = NULL;

	if ( ! pFnTimer_TickPatriarchDialog )
		pFnTimer_TickPatriarchDialog = (UFunction*) UObject::GObjObjects()->Data[ 115764 ];

	AKFPawn_ZedPatriarch_execTimer_TickPatriarchDialog_Parms Timer_TickPatriarchDialog_Parms;

	this->ProcessEvent ( pFnTimer_TickPatriarchDialog, &Timer_TickPatriarchDialog_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayGrabbedPlayerDialog
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayGrabbedPlayerDialog ( )
{
	static UFunction* pFnPlayGrabbedPlayerDialog = NULL;

	if ( ! pFnPlayGrabbedPlayerDialog )
		pFnPlayGrabbedPlayerDialog = (UFunction*) UObject::GObjObjects()->Data[ 115762 ];

	AKFPawn_ZedPatriarch_execPlayGrabbedPlayerDialog_Parms PlayGrabbedPlayerDialog_Parms;

	this->ProcessEvent ( pFnPlayGrabbedPlayerDialog, &PlayGrabbedPlayerDialog_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayMinigunAttackDialog
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayMinigunAttackDialog ( )
{
	static UFunction* pFnPlayMinigunAttackDialog = NULL;

	if ( ! pFnPlayMinigunAttackDialog )
		pFnPlayMinigunAttackDialog = (UFunction*) UObject::GObjObjects()->Data[ 115761 ];

	AKFPawn_ZedPatriarch_execPlayMinigunAttackDialog_Parms PlayMinigunAttackDialog_Parms;

	this->ProcessEvent ( pFnPlayMinigunAttackDialog, &PlayMinigunAttackDialog_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayMinigunWarnDialog
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayMinigunWarnDialog ( )
{
	static UFunction* pFnPlayMinigunWarnDialog = NULL;

	if ( ! pFnPlayMinigunWarnDialog )
		pFnPlayMinigunWarnDialog = (UFunction*) UObject::GObjObjects()->Data[ 115760 ];

	AKFPawn_ZedPatriarch_execPlayMinigunWarnDialog_Parms PlayMinigunWarnDialog_Parms;

	this->ProcessEvent ( pFnPlayMinigunWarnDialog, &PlayMinigunWarnDialog_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayStealthSoundLoopEnd
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayStealthSoundLoopEnd ( )
{
	static UFunction* pFnPlayStealthSoundLoopEnd = NULL;

	if ( ! pFnPlayStealthSoundLoopEnd )
		pFnPlayStealthSoundLoopEnd = (UFunction*) UObject::GObjObjects()->Data[ 115759 ];

	AKFPawn_ZedPatriarch_execPlayStealthSoundLoopEnd_Parms PlayStealthSoundLoopEnd_Parms;

	this->ProcessEvent ( pFnPlayStealthSoundLoopEnd, &PlayStealthSoundLoopEnd_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayStealthSoundLoop
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayStealthSoundLoop ( )
{
	static UFunction* pFnPlayStealthSoundLoop = NULL;

	if ( ! pFnPlayStealthSoundLoop )
		pFnPlayStealthSoundLoop = (UFunction*) UObject::GObjObjects()->Data[ 115758 ];

	AKFPawn_ZedPatriarch_execPlayStealthSoundLoop_Parms PlayStealthSoundLoop_Parms;

	this->ProcessEvent ( pFnPlayStealthSoundLoop, &PlayStealthSoundLoop_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 115756 ];

	AKFPawn_ZedPatriarch_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetWeaponAmbientSound
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SetWeaponAmbientSound ( )
{
	static UFunction* pFnSetWeaponAmbientSound = NULL;

	if ( ! pFnSetWeaponAmbientSound )
		pFnSetWeaponAmbientSound = (UFunction*) UObject::GObjObjects()->Data[ 115753 ];

	AKFPawn_ZedPatriarch_execSetWeaponAmbientSound_Parms SetWeaponAmbientSound_Parms;

	this->ProcessEvent ( pFnSetWeaponAmbientSound, &SetWeaponAmbientSound_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventPlayFootStepSound ( )
{
	static UFunction* pFnPlayFootStepSound = NULL;

	if ( ! pFnPlayFootStepSound )
		pFnPlayFootStepSound = (UFunction*) UObject::GObjObjects()->Data[ 115751 ];

	AKFPawn_ZedPatriarch_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;

	this->ProcessEvent ( pFnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CauseHeadTrauma
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CauseHeadTrauma ( )
{
	static UFunction* pFnCauseHeadTrauma = NULL;

	if ( ! pFnCauseHeadTrauma )
		pFnCauseHeadTrauma = (UFunction*) UObject::GObjObjects()->Data[ 115749 ];

	AKFPawn_ZedPatriarch_execCauseHeadTrauma_Parms CauseHeadTrauma_Parms;

	this->ProcessEvent ( pFnCauseHeadTrauma, &CauseHeadTrauma_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.TerminateEffectsOnDeath
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::TerminateEffectsOnDeath ( )
{
	static UFunction* pFnTerminateEffectsOnDeath = NULL;

	if ( ! pFnTerminateEffectsOnDeath )
		pFnTerminateEffectsOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 115748 ];

	AKFPawn_ZedPatriarch_execTerminateEffectsOnDeath_Parms TerminateEffectsOnDeath_Parms;

	this->ProcessEvent ( pFnTerminateEffectsOnDeath, &TerminateEffectsOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayDying
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayDying ( )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 115744 ];

	AKFPawn_ZedPatriarch_execPlayDying_Parms PlayDying_Parms;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanInjureHitZone
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanInjureHitZone ( )
{
	static UFunction* pFnCanInjureHitZone = NULL;

	if ( ! pFnCanInjureHitZone )
		pFnCanInjureHitZone = (UFunction*) UObject::GObjObjects()->Data[ 115738 ];

	AKFPawn_ZedPatriarch_execCanInjureHitZone_Parms CanInjureHitZone_Parms;

	this->ProcessEvent ( pFnCanInjureHitZone, &CanInjureHitZone_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetHitZoneSkinTypeEffects
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetHitZoneSkinTypeEffects ( )
{
	static UFunction* pFnGetHitZoneSkinTypeEffects = NULL;

	if ( ! pFnGetHitZoneSkinTypeEffects )
		pFnGetHitZoneSkinTypeEffects = (UFunction*) UObject::GObjObjects()->Data[ 115735 ];

	AKFPawn_ZedPatriarch_execGetHitZoneSkinTypeEffects_Parms GetHitZoneSkinTypeEffects_Parms;

	this->ProcessEvent ( pFnGetHitZoneSkinTypeEffects, &GetHitZoneSkinTypeEffects_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PlayTakeHitEffects
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 115731 ];

	AKFPawn_ZedPatriarch_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetDamageFXActive
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SetDamageFXActive ( )
{
	static UFunction* pFnSetDamageFXActive = NULL;

	if ( ! pFnSetDamageFXActive )
		pFnSetDamageFXActive = (UFunction*) UObject::GObjObjects()->Data[ 115729 ];

	AKFPawn_ZedPatriarch_execSetDamageFXActive_Parms SetDamageFXActive_Parms;

	this->ProcessEvent ( pFnSetDamageFXActive, &SetDamageFXActive_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateBattlePhaseFX
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::UpdateBattlePhaseFX ( )
{
	static UFunction* pFnUpdateBattlePhaseFX = NULL;

	if ( ! pFnUpdateBattlePhaseFX )
		pFnUpdateBattlePhaseFX = (UFunction*) UObject::GObjObjects()->Data[ 115728 ];

	AKFPawn_ZedPatriarch_execUpdateBattlePhaseFX_Parms UpdateBattlePhaseFX_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseFX, &UpdateBattlePhaseFX_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateBattlePhaseLights
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::UpdateBattlePhaseLights ( )
{
	static UFunction* pFnUpdateBattlePhaseLights = NULL;

	if ( ! pFnUpdateBattlePhaseLights )
		pFnUpdateBattlePhaseLights = (UFunction*) UObject::GObjObjects()->Data[ 115724 ];

	AKFPawn_ZedPatriarch_execUpdateBattlePhaseLights_Parms UpdateBattlePhaseLights_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseLights, &UpdateBattlePhaseLights_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateBattlePhaseMaterials
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::UpdateBattlePhaseMaterials ( )
{
	static UFunction* pFnUpdateBattlePhaseMaterials = NULL;

	if ( ! pFnUpdateBattlePhaseMaterials )
		pFnUpdateBattlePhaseMaterials = (UFunction*) UObject::GObjObjects()->Data[ 115723 ];

	AKFPawn_ZedPatriarch_execUpdateBattlePhaseMaterials_Parms UpdateBattlePhaseMaterials_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseMaterials, &UpdateBattlePhaseMaterials_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.DoCloakFX
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::DoCloakFX ( )
{
	static UFunction* pFnDoCloakFX = NULL;

	if ( ! pFnDoCloakFX )
		pFnDoCloakFX = (UFunction*) UObject::GObjObjects()->Data[ 115721 ];

	AKFPawn_ZedPatriarch_execDoCloakFX_Parms DoCloakFX_Parms;

	this->ProcessEvent ( pFnDoCloakFX, &DoCloakFX_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateGameplayMICParams
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::UpdateGameplayMICParams ( )
{
	static UFunction* pFnUpdateGameplayMICParams = NULL;

	if ( ! pFnUpdateGameplayMICParams )
		pFnUpdateGameplayMICParams = (UFunction*) UObject::GObjObjects()->Data[ 115717 ];

	AKFPawn_ZedPatriarch_execUpdateGameplayMICParams_Parms UpdateGameplayMICParams_Parms;

	this->ProcessEvent ( pFnUpdateGameplayMICParams, &UpdateGameplayMICParams_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CallOutCloakingExpired
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CallOutCloakingExpired ( )
{
	static UFunction* pFnCallOutCloakingExpired = NULL;

	if ( ! pFnCallOutCloakingExpired )
		pFnCallOutCloakingExpired = (UFunction*) UObject::GObjObjects()->Data[ 115716 ];

	AKFPawn_ZedPatriarch_execCallOutCloakingExpired_Parms CallOutCloakingExpired_Parms;

	this->ProcessEvent ( pFnCallOutCloakingExpired, &CallOutCloakingExpired_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CallOutCloaking
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CallOutCloaking ( )
{
	static UFunction* pFnCallOutCloaking = NULL;

	if ( ! pFnCallOutCloaking )
		pFnCallOutCloaking = (UFunction*) UObject::GObjObjects()->Data[ 115714 ];

	AKFPawn_ZedPatriarch_execCallOutCloaking_Parms CallOutCloaking_Parms;

	this->ProcessEvent ( pFnCallOutCloaking, &CallOutCloaking_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateSpottedStatus
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventUpdateSpottedStatus ( )
{
	static UFunction* pFnUpdateSpottedStatus = NULL;

	if ( ! pFnUpdateSpottedStatus )
		pFnUpdateSpottedStatus = (UFunction*) UObject::GObjObjects()->Data[ 115708 ];

	AKFPawn_ZedPatriarch_eventUpdateSpottedStatus_Parms UpdateSpottedStatus_Parms;

	this->ProcessEvent ( pFnUpdateSpottedStatus, &UpdateSpottedStatus_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CausePanicWander
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CausePanicWander ( )
{
	static UFunction* pFnCausePanicWander = NULL;

	if ( ! pFnCausePanicWander )
		pFnCausePanicWander = (UFunction*) UObject::GObjObjects()->Data[ 115706 ];

	AKFPawn_ZedPatriarch_execCausePanicWander_Parms CausePanicWander_Parms;

	this->ProcessEvent ( pFnCausePanicWander, &CausePanicWander_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.OnStackingAfflictionChanged
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::OnStackingAfflictionChanged ( )
{
	static UFunction* pFnOnStackingAfflictionChanged = NULL;

	if ( ! pFnOnStackingAfflictionChanged )
		pFnOnStackingAfflictionChanged = (UFunction*) UObject::GObjObjects()->Data[ 115703 ];

	AKFPawn_ZedPatriarch_execOnStackingAfflictionChanged_Parms OnStackingAfflictionChanged_Parms;

	this->ProcessEvent ( pFnOnStackingAfflictionChanged, &OnStackingAfflictionChanged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ClientCloakingStateUpdated
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::ClientCloakingStateUpdated ( )
{
	static UFunction* pFnClientCloakingStateUpdated = NULL;

	if ( ! pFnClientCloakingStateUpdated )
		pFnClientCloakingStateUpdated = (UFunction*) UObject::GObjObjects()->Data[ 115702 ];

	AKFPawn_ZedPatriarch_execClientCloakingStateUpdated_Parms ClientCloakingStateUpdated_Parms;

	this->ProcessEvent ( pFnClientCloakingStateUpdated, &ClientCloakingStateUpdated_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetCloaked
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SetCloaked ( )
{
	static UFunction* pFnSetCloaked = NULL;

	if ( ! pFnSetCloaked )
		pFnSetCloaked = (UFunction*) UObject::GObjObjects()->Data[ 115700 ];

	AKFPawn_ZedPatriarch_execSetCloaked_Parms SetCloaked_Parms;

	this->ProcessEvent ( pFnSetCloaked, &SetCloaked_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.NotifyGoreMeshActive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventNotifyGoreMeshActive ( )
{
	static UFunction* pFnNotifyGoreMeshActive = NULL;

	if ( ! pFnNotifyGoreMeshActive )
		pFnNotifyGoreMeshActive = (UFunction*) UObject::GObjObjects()->Data[ 115699 ];

	AKFPawn_ZedPatriarch_eventNotifyGoreMeshActive_Parms NotifyGoreMeshActive_Parms;

	this->ProcessEvent ( pFnNotifyGoreMeshActive, &NotifyGoreMeshActive_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateHealingSyringeTransparency
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::UpdateHealingSyringeTransparency ( )
{
	static UFunction* pFnUpdateHealingSyringeTransparency = NULL;

	if ( ! pFnUpdateHealingSyringeTransparency )
		pFnUpdateHealingSyringeTransparency = (UFunction*) UObject::GObjObjects()->Data[ 115698 ];

	AKFPawn_ZedPatriarch_execUpdateHealingSyringeTransparency_Parms UpdateHealingSyringeTransparency_Parms;

	this->ProcessEvent ( pFnUpdateHealingSyringeTransparency, &UpdateHealingSyringeTransparency_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMinCloakPct
// [0x00080102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetMinCloakPct ( )
{
	static UFunction* pFnGetMinCloakPct = NULL;

	if ( ! pFnGetMinCloakPct )
		pFnGetMinCloakPct = (UFunction*) UObject::GObjObjects()->Data[ 115696 ];

	AKFPawn_ZedPatriarch_execGetMinCloakPct_Parms GetMinCloakPct_Parms;

	this->ProcessEvent ( pFnGetMinCloakPct, &GetMinCloakPct_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.UpdateGunTrackingSkelCtrl
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::UpdateGunTrackingSkelCtrl ( )
{
	static UFunction* pFnUpdateGunTrackingSkelCtrl = NULL;

	if ( ! pFnUpdateGunTrackingSkelCtrl )
		pFnUpdateGunTrackingSkelCtrl = (UFunction*) UObject::GObjObjects()->Data[ 115694 ];

	AKFPawn_ZedPatriarch_execUpdateGunTrackingSkelCtrl_Parms UpdateGunTrackingSkelCtrl_Parms;

	this->ProcessEvent ( pFnUpdateGunTrackingSkelCtrl, &UpdateGunTrackingSkelCtrl_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 115688 ];

	AKFPawn_ZedPatriarch_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMortarAimDirAndTargetLoc
// [0x00C20002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetMortarAimDirAndTargetLoc ( )
{
	static UFunction* pFnGetMortarAimDirAndTargetLoc = NULL;

	if ( ! pFnGetMortarAimDirAndTargetLoc )
		pFnGetMortarAimDirAndTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 115677 ];

	AKFPawn_ZedPatriarch_execGetMortarAimDirAndTargetLoc_Parms GetMortarAimDirAndTargetLoc_Parms;

	this->ProcessEvent ( pFnGetMortarAimDirAndTargetLoc, &GetMortarAimDirAndTargetLoc_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMortarTarget
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetMortarTarget ( )
{
	static UFunction* pFnGetMortarTarget = NULL;

	if ( ! pFnGetMortarTarget )
		pFnGetMortarTarget = (UFunction*) UObject::GObjObjects()->Data[ 115674 ];

	AKFPawn_ZedPatriarch_execGetMortarTarget_Parms GetMortarTarget_Parms;

	this->ProcessEvent ( pFnGetMortarTarget, &GetMortarTarget_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ClearMortarTargets
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::ClearMortarTargets ( )
{
	static UFunction* pFnClearMortarTargets = NULL;

	if ( ! pFnClearMortarTargets )
		pFnClearMortarTargets = (UFunction*) UObject::GObjObjects()->Data[ 115673 ];

	AKFPawn_ZedPatriarch_execClearMortarTargets_Parms ClearMortarTargets_Parms;

	this->ProcessEvent ( pFnClearMortarTargets, &ClearMortarTargets_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PreMortarAttack
// [0x00020000] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PreMortarAttack ( )
{
	static UFunction* pFnPreMortarAttack = NULL;

	if ( ! pFnPreMortarAttack )
		pFnPreMortarAttack = (UFunction*) UObject::GObjObjects()->Data[ 115672 ];

	AKFPawn_ZedPatriarch_execPreMortarAttack_Parms PreMortarAttack_Parms;

	this->ProcessEvent ( pFnPreMortarAttack, &PreMortarAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CollectMortarTargets
// [0x00824002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CollectMortarTargets ( )
{
	static UFunction* pFnCollectMortarTargets = NULL;

	if ( ! pFnCollectMortarTargets )
		pFnCollectMortarTargets = (UFunction*) UObject::GObjObjects()->Data[ 111278 ];

	AKFPawn_ZedPatriarch_execCollectMortarTargets_Parms CollectMortarTargets_Parms;

	this->ProcessEvent ( pFnCollectMortarTargets, &CollectMortarTargets_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMortarClass
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetMortarClass ( )
{
	static UFunction* pFnGetMortarClass = NULL;

	if ( ! pFnGetMortarClass )
		pFnGetMortarClass = (UFunction*) UObject::GObjObjects()->Data[ 115659 ];

	AKFPawn_ZedPatriarch_execGetMortarClass_Parms GetMortarClass_Parms;

	this->ProcessEvent ( pFnGetMortarClass, &GetMortarClass_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMissileAimDirAndTargetLoc
// [0x00C20002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetMissileAimDirAndTargetLoc ( )
{
	static UFunction* pFnGetMissileAimDirAndTargetLoc = NULL;

	if ( ! pFnGetMissileAimDirAndTargetLoc )
		pFnGetMissileAimDirAndTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 115647 ];

	AKFPawn_ZedPatriarch_execGetMissileAimDirAndTargetLoc_Parms GetMissileAimDirAndTargetLoc_Parms;

	this->ProcessEvent ( pFnGetMissileAimDirAndTargetLoc, &GetMissileAimDirAndTargetLoc_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetMissileClass
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetMissileClass ( )
{
	static UFunction* pFnGetMissileClass = NULL;

	if ( ! pFnGetMissileClass )
		pFnGetMissileClass = (UFunction*) UObject::GObjObjects()->Data[ 115645 ];

	AKFPawn_ZedPatriarch_execGetMissileClass_Parms GetMissileClass_Parms;

	this->ProcessEvent ( pFnGetMissileClass, &GetMissileClass_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetAdjustedAimFor
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetAdjustedAimFor ( )
{
	static UFunction* pFnGetAdjustedAimFor = NULL;

	if ( ! pFnGetAdjustedAimFor )
		pFnGetAdjustedAimFor = (UFunction*) UObject::GObjObjects()->Data[ 115637 ];

	AKFPawn_ZedPatriarch_execGetAdjustedAimFor_Parms GetAdjustedAimFor_Parms;

	this->ProcessEvent ( pFnGetAdjustedAimFor, &GetAdjustedAimFor_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetWeaponStartTraceLocation
// [0x00824902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventGetWeaponStartTraceLocation ( )
{
	static UFunction* pFnGetWeaponStartTraceLocation = NULL;

	if ( ! pFnGetWeaponStartTraceLocation )
		pFnGetWeaponStartTraceLocation = (UFunction*) UObject::GObjObjects()->Data[ 115633 ];

	AKFPawn_ZedPatriarch_eventGetWeaponStartTraceLocation_Parms GetWeaponStartTraceLocation_Parms;

	this->ProcessEvent ( pFnGetWeaponStartTraceLocation, &GetWeaponStartTraceLocation_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetGunTracking
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SetGunTracking ( )
{
	static UFunction* pFnSetGunTracking = NULL;

	if ( ! pFnSetGunTracking )
		pFnSetGunTracking = (UFunction*) UObject::GObjObjects()->Data[ 115631 ];

	AKFPawn_ZedPatriarch_execSetGunTracking_Parms SetGunTracking_Parms;

	this->ProcessEvent ( pFnSetGunTracking, &SetGunTracking_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SpinMinigunBarrels
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SpinMinigunBarrels ( )
{
	static UFunction* pFnSpinMinigunBarrels = NULL;

	if ( ! pFnSpinMinigunBarrels )
		pFnSpinMinigunBarrels = (UFunction*) UObject::GObjObjects()->Data[ 115629 ];

	AKFPawn_ZedPatriarch_execSpinMinigunBarrels_Parms SpinMinigunBarrels_Parms;

	this->ProcessEvent ( pFnSpinMinigunBarrels, &SpinMinigunBarrels_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanMoveWhenMinigunning
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanMoveWhenMinigunning ( )
{
	static UFunction* pFnCanMoveWhenMinigunning = NULL;

	if ( ! pFnCanMoveWhenMinigunning )
		pFnCanMoveWhenMinigunning = (UFunction*) UObject::GObjObjects()->Data[ 110711 ];

	AKFPawn_ZedPatriarch_execCanMoveWhenMinigunning_Parms CanMoveWhenMinigunning_Parms;

	this->ProcessEvent ( pFnCanMoveWhenMinigunning, &CanMoveWhenMinigunning_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanBlock
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanBlock ( )
{
	static UFunction* pFnCanBlock = NULL;

	if ( ! pFnCanBlock )
		pFnCanBlock = (UFunction*) UObject::GObjObjects()->Data[ 115625 ];

	AKFPawn_ZedPatriarch_execCanBlock_Parms CanBlock_Parms;

	this->ProcessEvent ( pFnCanBlock, &CanBlock_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanDoMortarBarrage
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanDoMortarBarrage ( )
{
	static UFunction* pFnCanDoMortarBarrage = NULL;

	if ( ! pFnCanDoMortarBarrage )
		pFnCanDoMortarBarrage = (UFunction*) UObject::GObjObjects()->Data[ 111276 ];

	AKFPawn_ZedPatriarch_execCanDoMortarBarrage_Parms CanDoMortarBarrage_Parms;

	this->ProcessEvent ( pFnCanDoMortarBarrage, &CanDoMortarBarrage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanMortarAttack
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanMortarAttack ( )
{
	static UFunction* pFnCanMortarAttack = NULL;

	if ( ! pFnCanMortarAttack )
		pFnCanMortarAttack = (UFunction*) UObject::GObjObjects()->Data[ 111273 ];

	AKFPawn_ZedPatriarch_execCanMortarAttack_Parms CanMortarAttack_Parms;

	this->ProcessEvent ( pFnCanMortarAttack, &CanMortarAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanMissileAttack
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanMissileAttack ( )
{
	static UFunction* pFnCanMissileAttack = NULL;

	if ( ! pFnCanMissileAttack )
		pFnCanMissileAttack = (UFunction*) UObject::GObjObjects()->Data[ 111270 ];

	AKFPawn_ZedPatriarch_execCanMissileAttack_Parms CanMissileAttack_Parms;

	this->ProcessEvent ( pFnCanMissileAttack, &CanMissileAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanTentacleGrab
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanTentacleGrab ( )
{
	static UFunction* pFnCanTentacleGrab = NULL;

	if ( ! pFnCanTentacleGrab )
		pFnCanTentacleGrab = (UFunction*) UObject::GObjObjects()->Data[ 111263 ];

	AKFPawn_ZedPatriarch_execCanTentacleGrab_Parms CanTentacleGrab_Parms;

	this->ProcessEvent ( pFnCanTentacleGrab, &CanTentacleGrab_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanChargeAttack
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanChargeAttack ( )
{
	static UFunction* pFnCanChargeAttack = NULL;

	if ( ! pFnCanChargeAttack )
		pFnCanChargeAttack = (UFunction*) UObject::GObjObjects()->Data[ 111266 ];

	AKFPawn_ZedPatriarch_execCanChargeAttack_Parms CanChargeAttack_Parms;

	this->ProcessEvent ( pFnCanChargeAttack, &CanChargeAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.StartWeaponCooldown
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::StartWeaponCooldown ( )
{
	static UFunction* pFnStartWeaponCooldown = NULL;

	if ( ! pFnStartWeaponCooldown )
		pFnStartWeaponCooldown = (UFunction*) UObject::GObjObjects()->Data[ 115624 ];

	AKFPawn_ZedPatriarch_execStartWeaponCooldown_Parms StartWeaponCooldown_Parms;

	this->ProcessEvent ( pFnStartWeaponCooldown, &StartWeaponCooldown_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetPhaseCooldowns
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SetPhaseCooldowns ( )
{
	static UFunction* pFnSetPhaseCooldowns = NULL;

	if ( ! pFnSetPhaseCooldowns )
		pFnSetPhaseCooldowns = (UFunction*) UObject::GObjObjects()->Data[ 115622 ];

	AKFPawn_ZedPatriarch_execSetPhaseCooldowns_Parms SetPhaseCooldowns_Parms;

	this->ProcessEvent ( pFnSetPhaseCooldowns, &SetPhaseCooldowns_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.OnBattlePhaseChanged
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::OnBattlePhaseChanged ( )
{
	static UFunction* pFnOnBattlePhaseChanged = NULL;

	if ( ! pFnOnBattlePhaseChanged )
		pFnOnBattlePhaseChanged = (UFunction*) UObject::GObjObjects()->Data[ 115621 ];

	AKFPawn_ZedPatriarch_execOnBattlePhaseChanged_Parms OnBattlePhaseChanged_Parms;

	this->ProcessEvent ( pFnOnBattlePhaseChanged, &OnBattlePhaseChanged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.IncrementBattlePhase
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::IncrementBattlePhase ( )
{
	static UFunction* pFnIncrementBattlePhase = NULL;

	if ( ! pFnIncrementBattlePhase )
		pFnIncrementBattlePhase = (UFunction*) UObject::GObjObjects()->Data[ 115620 ];

	AKFPawn_ZedPatriarch_execIncrementBattlePhase_Parms IncrementBattlePhase_Parms;

	this->ProcessEvent ( pFnIncrementBattlePhase, &IncrementBattlePhase_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.DesireSprintingInThisPhase
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::DesireSprintingInThisPhase ( )
{
	static UFunction* pFnDesireSprintingInThisPhase = NULL;

	if ( ! pFnDesireSprintingInThisPhase )
		pFnDesireSprintingInThisPhase = (UFunction*) UObject::GObjObjects()->Data[ 111293 ];

	AKFPawn_ZedPatriarch_execDesireSprintingInThisPhase_Parms DesireSprintingInThisPhase_Parms;

	this->ProcessEvent ( pFnDesireSprintingInThisPhase, &DesireSprintingInThisPhase_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.FleeAndHealBump
// [0x00820002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::FleeAndHealBump ( )
{
	static UFunction* pFnFleeAndHealBump = NULL;

	if ( ! pFnFleeAndHealBump )
		pFnFleeAndHealBump = (UFunction*) UObject::GObjObjects()->Data[ 115615 ];

	AKFPawn_ZedPatriarch_execFleeAndHealBump_Parms FleeAndHealBump_Parms;

	this->ProcessEvent ( pFnFleeAndHealBump, &FleeAndHealBump_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.Bump
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventBump ( )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 115610 ];

	AKFPawn_ZedPatriarch_eventBump_Parms Bump_Parms;

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.BreakOffSyringe
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::BreakOffSyringe ( )
{
	static UFunction* pFnBreakOffSyringe = NULL;

	if ( ! pFnBreakOffSyringe )
		pFnBreakOffSyringe = (UFunction*) UObject::GObjObjects()->Data[ 115601 ];

	AKFPawn_ZedPatriarch_execBreakOffSyringe_Parms BreakOffSyringe_Parms;

	this->ProcessEvent ( pFnBreakOffSyringe, &BreakOffSyringe_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ANIMNOTIFY_SpawnedKActor
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::ANIMNOTIFY_SpawnedKActor ( )
{
	static UFunction* pFnANIMNOTIFY_SpawnedKActor = NULL;

	if ( ! pFnANIMNOTIFY_SpawnedKActor )
		pFnANIMNOTIFY_SpawnedKActor = (UFunction*) UObject::GObjObjects()->Data[ 115597 ];

	AKFPawn_ZedPatriarch_execANIMNOTIFY_SpawnedKActor_Parms ANIMNOTIFY_SpawnedKActor_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_SpawnedKActor, &ANIMNOTIFY_SpawnedKActor_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ANIMNOTIFY_GrabSyringe
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::ANIMNOTIFY_GrabSyringe ( )
{
	static UFunction* pFnANIMNOTIFY_GrabSyringe = NULL;

	if ( ! pFnANIMNOTIFY_GrabSyringe )
		pFnANIMNOTIFY_GrabSyringe = (UFunction*) UObject::GObjObjects()->Data[ 115596 ];

	AKFPawn_ZedPatriarch_execANIMNOTIFY_GrabSyringe_Parms ANIMNOTIFY_GrabSyringe_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_GrabSyringe, &ANIMNOTIFY_GrabSyringe_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.CanSummonChildren
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::CanSummonChildren ( )
{
	static UFunction* pFnCanSummonChildren = NULL;

	if ( ! pFnCanSummonChildren )
		pFnCanSummonChildren = (UFunction*) UObject::GObjObjects()->Data[ 111286 ];

	AKFPawn_ZedPatriarch_execCanSummonChildren_Parms CanSummonChildren_Parms;

	this->ProcessEvent ( pFnCanSummonChildren, &CanSummonChildren_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SummonChildren
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SummonChildren ( )
{
	static UFunction* pFnSummonChildren = NULL;

	if ( ! pFnSummonChildren )
		pFnSummonChildren = (UFunction*) UObject::GObjObjects()->Data[ 115593 ];

	AKFPawn_ZedPatriarch_execSummonChildren_Parms SummonChildren_Parms;

	this->ProcessEvent ( pFnSummonChildren, &SummonChildren_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetFleeAndHealMode
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SetFleeAndHealMode ( )
{
	static UFunction* pFnSetFleeAndHealMode = NULL;

	if ( ! pFnSetFleeAndHealMode )
		pFnSetFleeAndHealMode = (UFunction*) UObject::GObjObjects()->Data[ 115591 ];

	AKFPawn_ZedPatriarch_execSetFleeAndHealMode_Parms SetFleeAndHealMode_Parms;

	this->ProcessEvent ( pFnSetFleeAndHealMode, &SetFleeAndHealMode_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.GetBumpAttackDamageType
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::GetBumpAttackDamageType ( )
{
	static UFunction* pFnGetBumpAttackDamageType = NULL;

	if ( ! pFnGetBumpAttackDamageType )
		pFnGetBumpAttackDamageType = (UFunction*) UObject::GObjObjects()->Data[ 111289 ];

	AKFPawn_ZedPatriarch_execGetBumpAttackDamageType_Parms GetBumpAttackDamageType_Parms;

	this->ProcessEvent ( pFnGetBumpAttackDamageType, &GetBumpAttackDamageType_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PossessedBy
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 115588 ];

	AKFPawn_ZedPatriarch_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventPostInitAnimTree ( )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 115586 ];

	AKFPawn_ZedPatriarch_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.SetCharacterArch
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedPatriarch::SetCharacterArch ( )
{
	static UFunction* pFnSetCharacterArch = NULL;

	if ( ! pFnSetCharacterArch )
		pFnSetCharacterArch = (UFunction*) UObject::GObjObjects()->Data[ 115581 ];

	AKFPawn_ZedPatriarch_execSetCharacterArch_Parms SetCharacterArch_Parms;

	this->ProcessEvent ( pFnSetCharacterArch, &SetCharacterArch_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 115580 ];

	AKFPawn_ZedPatriarch_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 115578 ];

	AKFPawn_ZedPatriarch_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.GetSpecialMove
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_MinigunBarrage::GetSpecialMove ( )
{
	static UFunction* pFnGetSpecialMove = NULL;

	if ( ! pFnGetSpecialMove )
		pFnGetSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 110693 ];

	UAICommand_Patriarch_MinigunBarrage_execGetSpecialMove_Parms GetSpecialMove_Parms;

	this->ProcessEvent ( pFnGetSpecialMove, &GetSpecialMove_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_MinigunBarrage::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110692 ];

	UAICommand_Patriarch_MinigunBarrage_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.LockdownAI
// [0x00020000] 
// Parameters infos:

void UAICommand_Patriarch_MinigunBarrage::LockdownAI ( )
{
	static UFunction* pFnLockdownAI = NULL;

	if ( ! pFnLockdownAI )
		pFnLockdownAI = (UFunction*) UObject::GObjObjects()->Data[ 110691 ];

	UAICommand_Patriarch_MinigunBarrage_execLockdownAI_Parms LockdownAI_Parms;

	this->ProcessEvent ( pFnLockdownAI, &LockdownAI_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_MinigunBarrage::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110690 ];

	UAICommand_Patriarch_MinigunBarrage_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MinigunBarrage.MinigunBarrage
// [0x00022002] 
// Parameters infos:

void UAICommand_Patriarch_MinigunBarrage::MinigunBarrage ( )
{
	static UFunction* pFnMinigunBarrage = NULL;

	if ( ! pFnMinigunBarrage )
		pFnMinigunBarrage = (UFunction*) UObject::GObjObjects()->Data[ 110686 ];

	UAICommand_Patriarch_MinigunBarrage_execMinigunBarrage_Parms MinigunBarrage_Parms;

	this->ProcessEvent ( pFnMinigunBarrage, &MinigunBarrage_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121094 ];

	UKFSM_Patriarch_MinigunBarrage_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.AnimEndNotify
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::AnimEndNotify ( )
{
	static UFunction* pFnAnimEndNotify = NULL;

	if ( ! pFnAnimEndNotify )
		pFnAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 121090 ];

	UKFSM_Patriarch_MinigunBarrage_execAnimEndNotify_Parms AnimEndNotify_Parms;

	this->ProcessEvent ( pFnAnimEndNotify, &AnimEndNotify_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayWindDownAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::PlayWindDownAnim ( )
{
	static UFunction* pFnPlayWindDownAnim = NULL;

	if ( ! pFnPlayWindDownAnim )
		pFnPlayWindDownAnim = (UFunction*) UObject::GObjObjects()->Data[ 121089 ];

	UKFSM_Patriarch_MinigunBarrage_execPlayWindDownAnim_Parms PlayWindDownAnim_Parms;

	this->ProcessEvent ( pFnPlayWindDownAnim, &PlayWindDownAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.Timer_SearchForMinigunTargets
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::Timer_SearchForMinigunTargets ( )
{
	static UFunction* pFnTimer_SearchForMinigunTargets = NULL;

	if ( ! pFnTimer_SearchForMinigunTargets )
		pFnTimer_SearchForMinigunTargets = (UFunction*) UObject::GObjObjects()->Data[ 121088 ];

	UKFSM_Patriarch_MinigunBarrage_execTimer_SearchForMinigunTargets_Parms Timer_SearchForMinigunTargets_Parms;

	this->ProcessEvent ( pFnTimer_SearchForMinigunTargets, &Timer_SearchForMinigunTargets_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.Timer_CheckIfFireAllowed
// [0x00820002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::Timer_CheckIfFireAllowed ( )
{
	static UFunction* pFnTimer_CheckIfFireAllowed = NULL;

	if ( ! pFnTimer_CheckIfFireAllowed )
		pFnTimer_CheckIfFireAllowed = (UFunction*) UObject::GObjObjects()->Data[ 121081 ];

	UKFSM_Patriarch_MinigunBarrage_execTimer_CheckIfFireAllowed_Parms Timer_CheckIfFireAllowed_Parms;

	this->ProcessEvent ( pFnTimer_CheckIfFireAllowed, &Timer_CheckIfFireAllowed_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayFireAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::PlayFireAnim ( )
{
	static UFunction* pFnPlayFireAnim = NULL;

	if ( ! pFnPlayFireAnim )
		pFnPlayFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 121080 ];

	UKFSM_Patriarch_MinigunBarrage_execPlayFireAnim_Parms PlayFireAnim_Parms;

	this->ProcessEvent ( pFnPlayFireAnim, &PlayFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.SpecialMoveFlagsUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 121079 ];

	UKFSM_Patriarch_MinigunBarrage_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.Timer_CheckEnemyLOS
// [0x00820002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::Timer_CheckEnemyLOS ( )
{
	static UFunction* pFnTimer_CheckEnemyLOS = NULL;

	if ( ! pFnTimer_CheckEnemyLOS )
		pFnTimer_CheckEnemyLOS = (UFunction*) UObject::GObjObjects()->Data[ 121076 ];

	UKFSM_Patriarch_MinigunBarrage_execTimer_CheckEnemyLOS_Parms Timer_CheckEnemyLOS_Parms;

	this->ProcessEvent ( pFnTimer_CheckEnemyLOS, &Timer_CheckEnemyLOS_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayWindUpAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::PlayWindUpAnimation ( )
{
	static UFunction* pFnPlayWindUpAnimation = NULL;

	if ( ! pFnPlayWindUpAnimation )
		pFnPlayWindUpAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121075 ];

	UKFSM_Patriarch_MinigunBarrage_execPlayWindUpAnimation_Parms PlayWindUpAnimation_Parms;

	this->ProcessEvent ( pFnPlayWindUpAnimation, &PlayWindUpAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PlayAnimation
// [0x00020000] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::PlayAnimation ( )
{
	static UFunction* pFnPlayAnimation = NULL;

	if ( ! pFnPlayAnimation )
		pFnPlayAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121074 ];

	UKFSM_Patriarch_MinigunBarrage_execPlayAnimation_Parms PlayAnimation_Parms;

	this->ProcessEvent ( pFnPlayAnimation, &PlayAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.GetAnimStance
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::GetAnimStance ( )
{
	static UFunction* pFnGetAnimStance = NULL;

	if ( ! pFnGetAnimStance )
		pFnGetAnimStance = (UFunction*) UObject::GObjObjects()->Data[ 121072 ];

	UKFSM_Patriarch_MinigunBarrage_execGetAnimStance_Parms GetAnimStance_Parms;

	this->ProcessEvent ( pFnGetAnimStance, &GetAnimStance_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121067 ];

	UKFSM_Patriarch_MinigunBarrage_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MinigunBarrage.PackSMFlags
// [0x00022002] 
// Parameters infos:

void UKFSM_Patriarch_MinigunBarrage::PackSMFlags ( )
{
	static UFunction* pFnPackSMFlags = NULL;

	if ( ! pFnPackSMFlags )
		pFnPackSMFlags = (UFunction*) UObject::GObjObjects()->Data[ 110714 ];

	UKFSM_Patriarch_MinigunBarrage_execPackSMFlags_Parms PackSMFlags_Parms;

	this->ProcessEvent ( pFnPackSMFlags, &PackSMFlags_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MissileAttack.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_MissileAttack::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110724 ];

	UAICommand_Patriarch_MissileAttack_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MissileAttack.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_MissileAttack::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110723 ];

	UAICommand_Patriarch_MissileAttack_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MissileAttack.FireMissiles
// [0x00022002] 
// Parameters infos:

void UAICommand_Patriarch_MissileAttack::FireMissiles ( )
{
	static UFunction* pFnFireMissiles = NULL;

	if ( ! pFnFireMissiles )
		pFnFireMissiles = (UFunction*) UObject::GObjObjects()->Data[ 110719 ];

	UAICommand_Patriarch_MissileAttack_execFireMissiles_Parms FireMissiles_Parms;

	this->ProcessEvent ( pFnFireMissiles, &FireMissiles_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MortarAttack.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_MortarAttack::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110743 ];

	UAICommand_Patriarch_MortarAttack_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MortarAttack.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_Patriarch_MortarAttack::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110742 ];

	UAICommand_Patriarch_MortarAttack_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_Patriarch_MortarAttack.FireMortar
// [0x00022002] 
// Parameters infos:

void UAICommand_Patriarch_MortarAttack::FireMortar ( )
{
	static UFunction* pFnFireMortar = NULL;

	if ( ! pFnFireMortar )
		pFnFireMortar = (UFunction*) UObject::GObjObjects()->Data[ 110737 ];

	UAICommand_Patriarch_MortarAttack_execFireMortar_Parms FireMortar_Parms;

	this->ProcessEvent ( pFnFireMortar, &FireMortar_Parms, NULL );
};

// Function kfgamecontent.AICommand_Siren_Scream.Popped
// [0x00020002] 
// Parameters infos:

void UAICommand_Siren_Scream::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 110774 ];

	UAICommand_Siren_Scream_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function kfgamecontent.AICommand_Siren_Scream.Pushed
// [0x00020002] 
// Parameters infos:

void UAICommand_Siren_Scream::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 110773 ];

	UAICommand_Siren_Scream_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function kfgamecontent.AICommand_Siren_Scream.LockdownAI
// [0x00020000] 
// Parameters infos:

void UAICommand_Siren_Scream::LockdownAI ( )
{
	static UFunction* pFnLockdownAI = NULL;

	if ( ! pFnLockdownAI )
		pFnLockdownAI = (UFunction*) UObject::GObjObjects()->Data[ 110760 ];

	UAICommand_Siren_Scream_execLockdownAI_Parms LockdownAI_Parms;

	this->ProcessEvent ( pFnLockdownAI, &LockdownAI_Parms, NULL );
};

// Function kfgamecontent.AICommand_Siren_Scream.Scream
// [0x00022002] 
// Parameters infos:

void UAICommand_Siren_Scream::Scream ( )
{
	static UFunction* pFnScream = NULL;

	if ( ! pFnScream )
		pFnScream = (UFunction*) UObject::GObjObjects()->Data[ 110756 ];

	UAICommand_Siren_Scream_execScream_Parms Scream_Parms;

	this->ProcessEvent ( pFnScream, &Scream_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.EnterZedVictoryState
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::EnterZedVictoryState ( )
{
	static UFunction* pFnEnterZedVictoryState = NULL;

	if ( ! pFnEnterZedVictoryState )
		pFnEnterZedVictoryState = (UFunction*) UObject::GObjObjects()->Data[ 111332 ];

	AKFAIController_ZedSiren_execEnterZedVictoryState_Parms EnterZedVictoryState_Parms;

	this->ProcessEvent ( pFnEnterZedVictoryState, &EnterZedVictoryState_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.DoPanicWander
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::DoPanicWander ( )
{
	static UFunction* pFnDoPanicWander = NULL;

	if ( ! pFnDoPanicWander )
		pFnDoPanicWander = (UFunction*) UObject::GObjObjects()->Data[ 111329 ];

	AKFAIController_ZedSiren_execDoPanicWander_Parms DoPanicWander_Parms;

	this->ProcessEvent ( pFnDoPanicWander, &DoPanicWander_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifyCommandFinished
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::NotifyCommandFinished ( )
{
	static UFunction* pFnNotifyCommandFinished = NULL;

	if ( ! pFnNotifyCommandFinished )
		pFnNotifyCommandFinished = (UFunction*) UObject::GObjObjects()->Data[ 111327 ];

	AKFAIController_ZedSiren_execNotifyCommandFinished_Parms NotifyCommandFinished_Parms;

	this->ProcessEvent ( pFnNotifyCommandFinished, &NotifyCommandFinished_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifyMeleeAttackFinished
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::NotifyMeleeAttackFinished ( )
{
	static UFunction* pFnNotifyMeleeAttackFinished = NULL;

	if ( ! pFnNotifyMeleeAttackFinished )
		pFnNotifyMeleeAttackFinished = (UFunction*) UObject::GObjObjects()->Data[ 111326 ];

	AKFAIController_ZedSiren_execNotifyMeleeAttackFinished_Parms NotifyMeleeAttackFinished_Parms;

	this->ProcessEvent ( pFnNotifyMeleeAttackFinished, &NotifyMeleeAttackFinished_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifyReachedLatentMoveGoal
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::NotifyReachedLatentMoveGoal ( )
{
	static UFunction* pFnNotifyReachedLatentMoveGoal = NULL;

	if ( ! pFnNotifyReachedLatentMoveGoal )
		pFnNotifyReachedLatentMoveGoal = (UFunction*) UObject::GObjObjects()->Data[ 111325 ];

	AKFAIController_ZedSiren_execNotifyReachedLatentMoveGoal_Parms NotifyReachedLatentMoveGoal_Parms;

	this->ProcessEvent ( pFnNotifyReachedLatentMoveGoal, &NotifyReachedLatentMoveGoal_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifySpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::NotifySpecialMoveEnded ( )
{
	static UFunction* pFnNotifySpecialMoveEnded = NULL;

	if ( ! pFnNotifySpecialMoveEnded )
		pFnNotifySpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 111323 ];

	AKFAIController_ZedSiren_execNotifySpecialMoveEnded_Parms NotifySpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnNotifySpecialMoveEnded, &NotifySpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.NotifySpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::NotifySpecialMoveStarted ( )
{
	static UFunction* pFnNotifySpecialMoveStarted = NULL;

	if ( ! pFnNotifySpecialMoveStarted )
		pFnNotifySpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 111320 ];

	AKFAIController_ZedSiren_execNotifySpecialMoveStarted_Parms NotifySpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnNotifySpecialMoveStarted, &NotifySpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.AcquireEnemyAndScream
// [0x00024002] 
// Parameters infos:

void AKFAIController_ZedSiren::AcquireEnemyAndScream ( )
{
	static UFunction* pFnAcquireEnemyAndScream = NULL;

	if ( ! pFnAcquireEnemyAndScream )
		pFnAcquireEnemyAndScream = (UFunction*) UObject::GObjObjects()->Data[ 111315 ];

	AKFAIController_ZedSiren_execAcquireEnemyAndScream_Parms AcquireEnemyAndScream_Parms;

	this->ProcessEvent ( pFnAcquireEnemyAndScream, &AcquireEnemyAndScream_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.DoScream
// [0x00024002] 
// Parameters infos:

void AKFAIController_ZedSiren::DoScream ( )
{
	static UFunction* pFnDoScream = NULL;

	if ( ! pFnDoScream )
		pFnDoScream = (UFunction*) UObject::GObjObjects()->Data[ 111313 ];

	AKFAIController_ZedSiren_execDoScream_Parms DoScream_Parms;

	this->ProcessEvent ( pFnDoScream, &DoScream_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedSiren.PreMoveToEnemy
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedSiren::PreMoveToEnemy ( )
{
	static UFunction* pFnPreMoveToEnemy = NULL;

	if ( ! pFnPreMoveToEnemy )
		pFnPreMoveToEnemy = (UFunction*) UObject::GObjObjects()->Data[ 111312 ];

	AKFAIController_ZedSiren_execPreMoveToEnemy_Parms PreMoveToEnemy_Parms;

	this->ProcessEvent ( pFnPreMoveToEnemy, &PreMoveToEnemy_Parms, NULL );
};

// Function kfgamecontent.KFAffliction_Fire_Patriarch.SetMaterialParameter
// [0x00020002] 
// Parameters infos:

void UKFAffliction_Fire_Patriarch::SetMaterialParameter ( )
{
	static UFunction* pFnSetMaterialParameter = NULL;

	if ( ! pFnSetMaterialParameter )
		pFnSetMaterialParameter = (UFunction*) UObject::GObjObjects()->Data[ 110781 ];

	UKFAffliction_Fire_Patriarch_execSetMaterialParameter_Parms SetMaterialParameter_Parms;

	this->ProcessEvent ( pFnSetMaterialParameter, &SetMaterialParameter_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.NotifyTakeHit
// [0x00020002] 
// Parameters infos:

void AKFAIController_HansFriendlyTest::NotifyTakeHit ( )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 110793 ];

	AKFAIController_HansFriendlyTest_execNotifyTakeHit_Parms NotifyTakeHit_Parms;

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.ShouldSprint
// [0x00020002] 
// Parameters infos:

void AKFAIController_HansFriendlyTest::ShouldSprint ( )
{
	static UFunction* pFnShouldSprint = NULL;

	if ( ! pFnShouldSprint )
		pFnShouldSprint = (UFunction*) UObject::GObjObjects()->Data[ 110790 ];

	AKFAIController_HansFriendlyTest_execShouldSprint_Parms ShouldSprint_Parms;

	this->ProcessEvent ( pFnShouldSprint, &ShouldSprint_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFAIController_HansFriendlyTest::eventScriptGetTeamNum ( )
{
	static UFunction* pFnScriptGetTeamNum = NULL;

	if ( ! pFnScriptGetTeamNum )
		pFnScriptGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 110788 ];

	AKFAIController_HansFriendlyTest_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

	this->ProcessEvent ( pFnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HansFriendlyTest.InitPlayerReplicationInfo
// [0x00020000] 
// Parameters infos:

void AKFAIController_HansFriendlyTest::InitPlayerReplicationInfo ( )
{
	static UFunction* pFnInitPlayerReplicationInfo = NULL;

	if ( ! pFnInitPlayerReplicationInfo )
		pFnInitPlayerReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 110787 ];

	AKFAIController_HansFriendlyTest_execInitPlayerReplicationInfo_Parms InitPlayerReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitPlayerReplicationInfo, &InitPlayerReplicationInfo_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedHusk::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 115359 ];

	AKFPawn_ZedHusk_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.OnStackingAfflictionChanged
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHusk::OnStackingAfflictionChanged ( )
{
	static UFunction* pFnOnStackingAfflictionChanged = NULL;

	if ( ! pFnOnStackingAfflictionChanged )
		pFnOnStackingAfflictionChanged = (UFunction*) UObject::GObjObjects()->Data[ 115357 ];

	AKFPawn_ZedHusk_execOnStackingAfflictionChanged_Parms OnStackingAfflictionChanged_Parms;

	this->ProcessEvent ( pFnOnStackingAfflictionChanged, &OnStackingAfflictionChanged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.PlayHit
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHusk::PlayHit ( )
{
	static UFunction* pFnPlayHit = NULL;

	if ( ! pFnPlayHit )
		pFnPlayHit = (UFunction*) UObject::GObjObjects()->Data[ 115350 ];

	AKFPawn_ZedHusk_execPlayHit_Parms PlayHit_Parms;

	this->ProcessEvent ( pFnPlayHit, &PlayHit_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.NotifyTakeHit
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHusk::NotifyTakeHit ( )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 115341 ];

	AKFPawn_ZedHusk_execNotifyTakeHit_Parms NotifyTakeHit_Parms;

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.AdjustDamage
// [0x00420002] 
// Parameters infos:

void AKFPawn_ZedHusk::AdjustDamage ( )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 115333 ];

	AKFPawn_ZedHusk_execAdjustDamage_Parms AdjustDamage_Parms;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.OnExploded
// [0x00020100] 
// Parameters infos:

void AKFPawn_ZedHusk::OnExploded ( )
{
	static UFunction* pFnOnExploded = NULL;

	if ( ! pFnOnExploded )
		pFnOnExploded = (UFunction*) UObject::GObjObjects()->Data[ 115331 ];

	AKFPawn_ZedHusk_execOnExploded_Parms OnExploded_Parms;

	this->ProcessEvent ( pFnOnExploded, &OnExploded_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.WeeklyShouldExplodeOnDeath
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHusk::WeeklyShouldExplodeOnDeath ( )
{
	static UFunction* pFnWeeklyShouldExplodeOnDeath = NULL;

	if ( ! pFnWeeklyShouldExplodeOnDeath )
		pFnWeeklyShouldExplodeOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 115329 ];

	AKFPawn_ZedHusk_execWeeklyShouldExplodeOnDeath_Parms WeeklyShouldExplodeOnDeath_Parms;

	this->ProcessEvent ( pFnWeeklyShouldExplodeOnDeath, &WeeklyShouldExplodeOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.TriggerExplosion
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedHusk::TriggerExplosion ( )
{
	static UFunction* pFnTriggerExplosion = NULL;

	if ( ! pFnTriggerExplosion )
		pFnTriggerExplosion = (UFunction*) UObject::GObjObjects()->Data[ 115323 ];

	AKFPawn_ZedHusk_execTriggerExplosion_Parms TriggerExplosion_Parms;

	this->ProcessEvent ( pFnTriggerExplosion, &TriggerExplosion_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.HitZoneInjured
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedHusk::HitZoneInjured ( )
{
	static UFunction* pFnHitZoneInjured = NULL;

	if ( ! pFnHitZoneInjured )
		pFnHitZoneInjured = (UFunction*) UObject::GObjObjects()->Data[ 115321 ];

	AKFPawn_ZedHusk_execHitZoneInjured_Parms HitZoneInjured_Parms;

	this->ProcessEvent ( pFnHitZoneInjured, &HitZoneInjured_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.CanInjureHitZone
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHusk::CanInjureHitZone ( )
{
	static UFunction* pFnCanInjureHitZone = NULL;

	if ( ! pFnCanInjureHitZone )
		pFnCanInjureHitZone = (UFunction*) UObject::GObjObjects()->Data[ 115317 ];

	AKFPawn_ZedHusk_execCanInjureHitZone_Parms CanInjureHitZone_Parms;

	this->ProcessEvent ( pFnCanInjureHitZone, &CanInjureHitZone_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.ApplySpecialZoneHealthMod
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHusk::ApplySpecialZoneHealthMod ( )
{
	static UFunction* pFnApplySpecialZoneHealthMod = NULL;

	if ( ! pFnApplySpecialZoneHealthMod )
		pFnApplySpecialZoneHealthMod = (UFunction*) UObject::GObjObjects()->Data[ 115315 ];

	AKFPawn_ZedHusk_execApplySpecialZoneHealthMod_Parms ApplySpecialZoneHealthMod_Parms;

	this->ProcessEvent ( pFnApplySpecialZoneHealthMod, &ApplySpecialZoneHealthMod_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.GetSuicideSM
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk::GetSuicideSM ( )
{
	static UFunction* pFnGetSuicideSM = NULL;

	if ( ! pFnGetSuicideSM )
		pFnGetSuicideSM = (UFunction*) UObject::GObjObjects()->Data[ 115313 ];

	AKFPawn_ZedHusk_execGetSuicideSM_Parms GetSuicideSM_Parms;

	this->ProcessEvent ( pFnGetSuicideSM, &GetSuicideSM_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.OnAnimNotifyParticleSystemSpawned
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk::OnAnimNotifyParticleSystemSpawned ( )
{
	static UFunction* pFnOnAnimNotifyParticleSystemSpawned = NULL;

	if ( ! pFnOnAnimNotifyParticleSystemSpawned )
		pFnOnAnimNotifyParticleSystemSpawned = (UFunction*) UObject::GObjObjects()->Data[ 115310 ];

	AKFPawn_ZedHusk_execOnAnimNotifyParticleSystemSpawned_Parms OnAnimNotifyParticleSystemSpawned_Parms;

	this->ProcessEvent ( pFnOnAnimNotifyParticleSystemSpawned, &OnAnimNotifyParticleSystemSpawned_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.TerminateEffectsOnDeath
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk::TerminateEffectsOnDeath ( )
{
	static UFunction* pFnTerminateEffectsOnDeath = NULL;

	if ( ! pFnTerminateEffectsOnDeath )
		pFnTerminateEffectsOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 115309 ];

	AKFPawn_ZedHusk_execTerminateEffectsOnDeath_Parms TerminateEffectsOnDeath_Parms;

	this->ProcessEvent ( pFnTerminateEffectsOnDeath, &TerminateEffectsOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.GetWeaponStartTraceLocation
// [0x00824902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedHusk::eventGetWeaponStartTraceLocation ( )
{
	static UFunction* pFnGetWeaponStartTraceLocation = NULL;

	if ( ! pFnGetWeaponStartTraceLocation )
		pFnGetWeaponStartTraceLocation = (UFunction*) UObject::GObjObjects()->Data[ 115303 ];

	AKFPawn_ZedHusk_eventGetWeaponStartTraceLocation_Parms GetWeaponStartTraceLocation_Parms;

	this->ProcessEvent ( pFnGetWeaponStartTraceLocation, &GetWeaponStartTraceLocation_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_HuskFireballAttack
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk::ANIMNOTIFY_HuskFireballAttack ( )
{
	static UFunction* pFnANIMNOTIFY_HuskFireballAttack = NULL;

	if ( ! pFnANIMNOTIFY_HuskFireballAttack )
		pFnANIMNOTIFY_HuskFireballAttack = (UFunction*) UObject::GObjObjects()->Data[ 115300 ];

	AKFPawn_ZedHusk_execANIMNOTIFY_HuskFireballAttack_Parms ANIMNOTIFY_HuskFireballAttack_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_HuskFireballAttack, &ANIMNOTIFY_HuskFireballAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedHusk::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 115298 ];

	AKFPawn_ZedHusk_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.SetFireLightEnabled
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk::SetFireLightEnabled ( )
{
	static UFunction* pFnSetFireLightEnabled = NULL;

	if ( ! pFnSetFireLightEnabled )
		pFnSetFireLightEnabled = (UFunction*) UObject::GObjObjects()->Data[ 115296 ];

	AKFPawn_ZedHusk_execSetFireLightEnabled_Parms SetFireLightEnabled_Parms;

	this->ProcessEvent ( pFnSetFireLightEnabled, &SetFireLightEnabled_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_WarnZedsOfFireball
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedHusk::ANIMNOTIFY_WarnZedsOfFireball ( )
{
	static UFunction* pFnANIMNOTIFY_WarnZedsOfFireball = NULL;

	if ( ! pFnANIMNOTIFY_WarnZedsOfFireball )
		pFnANIMNOTIFY_WarnZedsOfFireball = (UFunction*) UObject::GObjObjects()->Data[ 115285 ];

	AKFPawn_ZedHusk_execANIMNOTIFY_WarnZedsOfFireball_Parms ANIMNOTIFY_WarnZedsOfFireball_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_WarnZedsOfFireball, &ANIMNOTIFY_WarnZedsOfFireball_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.NotifyAnimInterrupt
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedHusk::NotifyAnimInterrupt ( )
{
	static UFunction* pFnNotifyAnimInterrupt = NULL;

	if ( ! pFnNotifyAnimInterrupt )
		pFnNotifyAnimInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 115283 ];

	AKFPawn_ZedHusk_execNotifyAnimInterrupt_Parms NotifyAnimInterrupt_Parms;

	this->ProcessEvent ( pFnNotifyAnimInterrupt, &NotifyAnimInterrupt_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_FlameThrowerOff
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk::ANIMNOTIFY_FlameThrowerOff ( )
{
	static UFunction* pFnANIMNOTIFY_FlameThrowerOff = NULL;

	if ( ! pFnANIMNOTIFY_FlameThrowerOff )
		pFnANIMNOTIFY_FlameThrowerOff = (UFunction*) UObject::GObjObjects()->Data[ 115282 ];

	AKFPawn_ZedHusk_execANIMNOTIFY_FlameThrowerOff_Parms ANIMNOTIFY_FlameThrowerOff_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_FlameThrowerOff, &ANIMNOTIFY_FlameThrowerOff_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.ANIMNOTIFY_FlameThrowerOn
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk::ANIMNOTIFY_FlameThrowerOn ( )
{
	static UFunction* pFnANIMNOTIFY_FlameThrowerOn = NULL;

	if ( ! pFnANIMNOTIFY_FlameThrowerOn )
		pFnANIMNOTIFY_FlameThrowerOn = (UFunction*) UObject::GObjObjects()->Data[ 115281 ];

	AKFPawn_ZedHusk_execANIMNOTIFY_FlameThrowerOn_Parms ANIMNOTIFY_FlameThrowerOn_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_FlameThrowerOn, &ANIMNOTIFY_FlameThrowerOn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.SetCharacterArch
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedHusk::SetCharacterArch ( )
{
	static UFunction* pFnSetCharacterArch = NULL;

	if ( ! pFnSetCharacterArch )
		pFnSetCharacterArch = (UFunction*) UObject::GObjObjects()->Data[ 115278 ];

	AKFPawn_ZedHusk_execSetCharacterArch_Parms SetCharacterArch_Parms;

	this->ProcessEvent ( pFnSetCharacterArch, &SetCharacterArch_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk.PossessedBy
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHusk::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 115274 ];

	AKFPawn_ZedHusk_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFProj_Husk_Fireball.TriggerExplosion
// [0x00020102] 
// Parameters infos:

void AKFProj_Husk_Fireball::TriggerExplosion ( )
{
	static UFunction* pFnTriggerExplosion = NULL;

	if ( ! pFnTriggerExplosion )
		pFnTriggerExplosion = (UFunction*) UObject::GObjObjects()->Data[ 120227 ];

	AKFProj_Husk_Fireball_execTriggerExplosion_Parms TriggerExplosion_Parms;

	this->ProcessEvent ( pFnTriggerExplosion, &TriggerExplosion_Parms, NULL );
};

// Function kfgamecontent.KFProj_Husk_Fireball.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_Husk_Fireball::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 120226 ];

	AKFProj_Husk_Fireball_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.CanDoFlamethrower
// [0x00020002] 
// Parameters infos:

void AKFAIController_HuskFriendlyTest::CanDoFlamethrower ( )
{
	static UFunction* pFnCanDoFlamethrower = NULL;

	if ( ! pFnCanDoFlamethrower )
		pFnCanDoFlamethrower = (UFunction*) UObject::GObjObjects()->Data[ 110894 ];

	AKFAIController_HuskFriendlyTest_execCanDoFlamethrower_Parms CanDoFlamethrower_Parms;

	this->ProcessEvent ( pFnCanDoFlamethrower, &CanDoFlamethrower_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.CanDoFireball
// [0x00020002] 
// Parameters infos:

void AKFAIController_HuskFriendlyTest::CanDoFireball ( )
{
	static UFunction* pFnCanDoFireball = NULL;

	if ( ! pFnCanDoFireball )
		pFnCanDoFireball = (UFunction*) UObject::GObjObjects()->Data[ 110891 ];

	AKFAIController_HuskFriendlyTest_execCanDoFireball_Parms CanDoFireball_Parms;

	this->ProcessEvent ( pFnCanDoFireball, &CanDoFireball_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.ScriptGetTeamNum
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFAIController_HuskFriendlyTest::eventScriptGetTeamNum ( )
{
	static UFunction* pFnScriptGetTeamNum = NULL;

	if ( ! pFnScriptGetTeamNum )
		pFnScriptGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 110889 ];

	AKFAIController_HuskFriendlyTest_eventScriptGetTeamNum_Parms ScriptGetTeamNum_Parms;

	this->ProcessEvent ( pFnScriptGetTeamNum, &ScriptGetTeamNum_Parms, NULL );
};

// Function kfgamecontent.KFAIController_HuskFriendlyTest.InitPlayerReplicationInfo
// [0x00020000] 
// Parameters infos:

void AKFAIController_HuskFriendlyTest::InitPlayerReplicationInfo ( )
{
	static UFunction* pFnInitPlayerReplicationInfo = NULL;

	if ( ! pFnInitPlayerReplicationInfo )
		pFnInitPlayerReplicationInfo = (UFunction*) UObject::GObjObjects()->Data[ 110888 ];

	AKFAIController_HuskFriendlyTest_execInitPlayerReplicationInfo_Parms InitPlayerReplicationInfo_Parms;

	this->ProcessEvent ( pFnInitPlayerReplicationInfo, &InitPlayerReplicationInfo_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedClot_AlphaKing.Timer_CheckForRally
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedClot_AlphaKing::Timer_CheckForRally ( )
{
	static UFunction* pFnTimer_CheckForRally = NULL;

	if ( ! pFnTimer_CheckForRally )
		pFnTimer_CheckForRally = (UFunction*) UObject::GObjObjects()->Data[ 110910 ];

	AKFAIController_ZedClot_AlphaKing_execTimer_CheckForRally_Parms Timer_CheckForRally_Parms;

	this->ProcessEvent ( pFnTimer_CheckForRally, &Timer_CheckForRally_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedClot_AlphaKing.SeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedClot_AlphaKing::eventSeePlayer ( )
{
	static UFunction* pFnSeePlayer = NULL;

	if ( ! pFnSeePlayer )
		pFnSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 110908 ];

	AKFAIController_ZedClot_AlphaKing_eventSeePlayer_Parms SeePlayer_Parms;

	this->ProcessEvent ( pFnSeePlayer, &SeePlayer_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedClot_AlphaKing.InitRallySettings
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedClot_AlphaKing::InitRallySettings ( )
{
	static UFunction* pFnInitRallySettings = NULL;

	if ( ! pFnInitRallySettings )
		pFnInitRallySettings = (UFunction*) UObject::GObjObjects()->Data[ 110906 ];

	AKFAIController_ZedClot_AlphaKing_execInitRallySettings_Parms InitRallySettings_Parms;

	this->ProcessEvent ( pFnInitRallySettings, &InitRallySettings_Parms, NULL );
};

// Function kfgamecontent.KFSM_AlphaRally.RallyZeds
// [0x00020002] 
// Parameters infos:

void UKFSM_AlphaRally::RallyZeds ( )
{
	static UFunction* pFnRallyZeds = NULL;

	if ( ! pFnRallyZeds )
		pFnRallyZeds = (UFunction*) UObject::GObjObjects()->Data[ 120713 ];

	UKFSM_AlphaRally_execRallyZeds_Parms RallyZeds_Parms;

	this->ProcessEvent ( pFnRallyZeds, &RallyZeds_Parms, NULL );
};

// Function kfgamecontent.KFSM_AlphaRally.PlayAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_AlphaRally::PlayAnimation ( )
{
	static UFunction* pFnPlayAnimation = NULL;

	if ( ! pFnPlayAnimation )
		pFnPlayAnimation = (UFunction*) UObject::GObjObjects()->Data[ 120712 ];

	UKFSM_AlphaRally_execPlayAnimation_Parms PlayAnimation_Parms;

	this->ProcessEvent ( pFnPlayAnimation, &PlayAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_AlphaRally.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_AlphaRally::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120709 ];

	UKFSM_AlphaRally_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_AlphaRally.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_AlphaRally::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 120707 ];

	UKFSM_AlphaRally_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_AlphaRally.PackRallyFlags
// [0x00022002] 
// Parameters infos:

void UKFSM_AlphaRally::PackRallyFlags ( )
{
	static UFunction* pFnPackRallyFlags = NULL;

	if ( ! pFnPackRallyFlags )
		pFnPackRallyFlags = (UFunction*) UObject::GObjObjects()->Data[ 110916 ];

	UKFSM_AlphaRally_execPackRallyFlags_Parms PackRallyFlags_Parms;

	this->ProcessEvent ( pFnPackRallyFlags, &PackRallyFlags_Parms, NULL );
};

// Function kfgamecontent.KFDifficulty_ClotAlpha.GetSpecialAlphaChance
// [0x00022002] 
// Parameters infos:

void UKFDifficulty_ClotAlpha::GetSpecialAlphaChance ( )
{
	static UFunction* pFnGetSpecialAlphaChance = NULL;

	if ( ! pFnGetSpecialAlphaChance )
		pFnGetSpecialAlphaChance = (UFunction*) UObject::GObjObjects()->Data[ 111562 ];

	UKFDifficulty_ClotAlpha_execGetSpecialAlphaChance_Parms GetSpecialAlphaChance_Parms;

	this->ProcessEvent ( pFnGetSpecialAlphaChance, &GetSpecialAlphaChance_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateShieldUI
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::UpdateShieldUI ( )
{
	static UFunction* pFnUpdateShieldUI = NULL;

	if ( ! pFnUpdateShieldUI )
		pFnUpdateShieldUI = (UFunction*) UObject::GObjObjects()->Data[ 114815 ];

	AKFPawn_ZedFleshpoundKing_execUpdateShieldUI_Parms UpdateShieldUI_Parms;

	this->ProcessEvent ( pFnUpdateShieldUI, &UpdateShieldUI_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.DetachShieldFX
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::DetachShieldFX ( )
{
	static UFunction* pFnDetachShieldFX = NULL;

	if ( ! pFnDetachShieldFX )
		pFnDetachShieldFX = (UFunction*) UObject::GObjObjects()->Data[ 114814 ];

	AKFPawn_ZedFleshpoundKing_execDetachShieldFX_Parms DetachShieldFX_Parms;

	this->ProcessEvent ( pFnDetachShieldFX, &DetachShieldFX_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.BreakShield
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::BreakShield ( )
{
	static UFunction* pFnBreakShield = NULL;

	if ( ! pFnBreakShield )
		pFnBreakShield = (UFunction*) UObject::GObjObjects()->Data[ 114812 ];

	AKFPawn_ZedFleshpoundKing_execBreakShield_Parms BreakShield_Parms;

	this->ProcessEvent ( pFnBreakShield, &BreakShield_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.MakeVectorFromColor
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::MakeVectorFromColor ( )
{
	static UFunction* pFnMakeVectorFromColor = NULL;

	if ( ! pFnMakeVectorFromColor )
		pFnMakeVectorFromColor = (UFunction*) UObject::GObjObjects()->Data[ 114807 ];

	AKFPawn_ZedFleshpoundKing_execMakeVectorFromColor_Parms MakeVectorFromColor_Parms;

	this->ProcessEvent ( pFnMakeVectorFromColor, &MakeVectorFromColor_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateShield
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::UpdateShield ( )
{
	static UFunction* pFnUpdateShield = NULL;

	if ( ! pFnUpdateShield )
		pFnUpdateShield = (UFunction*) UObject::GObjObjects()->Data[ 114805 ];

	AKFPawn_ZedFleshpoundKing_execUpdateShield_Parms UpdateShield_Parms;

	this->ProcessEvent ( pFnUpdateShield, &UpdateShield_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ActivateShieldFX
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ActivateShieldFX ( )
{
	static UFunction* pFnActivateShieldFX = NULL;

	if ( ! pFnActivateShieldFX )
		pFnActivateShieldFX = (UFunction*) UObject::GObjObjects()->Data[ 114804 ];

	AKFPawn_ZedFleshpoundKing_execActivateShieldFX_Parms ActivateShieldFX_Parms;

	this->ProcessEvent ( pFnActivateShieldFX, &ActivateShieldFX_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ActivateShield
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ActivateShield ( )
{
	static UFunction* pFnActivateShield = NULL;

	if ( ! pFnActivateShield )
		pFnActivateShield = (UFunction*) UObject::GObjObjects()->Data[ 114800 ];

	AKFPawn_ZedFleshpoundKing_execActivateShield_Parms ActivateShield_Parms;

	this->ProcessEvent ( pFnActivateShield, &ActivateShield_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.SetShieldScale
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::SetShieldScale ( )
{
	static UFunction* pFnSetShieldScale = NULL;

	if ( ! pFnSetShieldScale )
		pFnSetShieldScale = (UFunction*) UObject::GObjObjects()->Data[ 114798 ];

	AKFPawn_ZedFleshpoundKing_execSetShieldScale_Parms SetShieldScale_Parms;

	this->ProcessEvent ( pFnSetShieldScale, &SetShieldScale_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.AdjustDamage
// [0x00420002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::AdjustDamage ( )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 114790 ];

	AKFPawn_ZedFleshpoundKing_execAdjustDamage_Parms AdjustDamage_Parms;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.TriggerRagePoundExplosion
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::TriggerRagePoundExplosion ( )
{
	static UFunction* pFnTriggerRagePoundExplosion = NULL;

	if ( ! pFnTriggerRagePoundExplosion )
		pFnTriggerRagePoundExplosion = (UFunction*) UObject::GObjObjects()->Data[ 114786 ];

	AKFPawn_ZedFleshpoundKing_execTriggerRagePoundExplosion_Parms TriggerRagePoundExplosion_Parms;

	this->ProcessEvent ( pFnTriggerRagePoundExplosion, &TriggerRagePoundExplosion_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PauseBossWave
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::PauseBossWave ( )
{
	static UFunction* pFnPauseBossWave = NULL;

	if ( ! pFnPauseBossWave )
		pFnPauseBossWave = (UFunction*) UObject::GObjObjects()->Data[ 114784 ];

	AKFPawn_ZedFleshpoundKing_execPauseBossWave_Parms PauseBossWave_Parms;

	this->ProcessEvent ( pFnPauseBossWave, &PauseBossWave_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.SpawnSubWave
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::SpawnSubWave ( )
{
	static UFunction* pFnSpawnSubWave = NULL;

	if ( ! pFnSpawnSubWave )
		pFnSpawnSubWave = (UFunction*) UObject::GObjObjects()->Data[ 114781 ];

	AKFPawn_ZedFleshpoundKing_execSpawnSubWave_Parms SpawnSubWave_Parms;

	this->ProcessEvent ( pFnSpawnSubWave, &SpawnSubWave_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_RagePoundRightFinal
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ANIMNOTIFY_RagePoundRightFinal ( )
{
	static UFunction* pFnANIMNOTIFY_RagePoundRightFinal = NULL;

	if ( ! pFnANIMNOTIFY_RagePoundRightFinal )
		pFnANIMNOTIFY_RagePoundRightFinal = (UFunction*) UObject::GObjObjects()->Data[ 114779 ];

	AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_RagePoundRightFinal_Parms ANIMNOTIFY_RagePoundRightFinal_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_RagePoundRightFinal, &ANIMNOTIFY_RagePoundRightFinal_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_RagePoundRight
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ANIMNOTIFY_RagePoundRight ( )
{
	static UFunction* pFnANIMNOTIFY_RagePoundRight = NULL;

	if ( ! pFnANIMNOTIFY_RagePoundRight )
		pFnANIMNOTIFY_RagePoundRight = (UFunction*) UObject::GObjObjects()->Data[ 114777 ];

	AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_RagePoundRight_Parms ANIMNOTIFY_RagePoundRight_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_RagePoundRight, &ANIMNOTIFY_RagePoundRight_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_RagePoundLeft
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ANIMNOTIFY_RagePoundLeft ( )
{
	static UFunction* pFnANIMNOTIFY_RagePoundLeft = NULL;

	if ( ! pFnANIMNOTIFY_RagePoundLeft )
		pFnANIMNOTIFY_RagePoundLeft = (UFunction*) UObject::GObjObjects()->Data[ 114775 ];

	AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_RagePoundLeft_Parms ANIMNOTIFY_RagePoundLeft_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_RagePoundLeft, &ANIMNOTIFY_RagePoundLeft_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateBattlePhaseLights
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::UpdateBattlePhaseLights ( )
{
	static UFunction* pFnUpdateBattlePhaseLights = NULL;

	if ( ! pFnUpdateBattlePhaseLights )
		pFnUpdateBattlePhaseLights = (UFunction*) UObject::GObjObjects()->Data[ 114773 ];

	AKFPawn_ZedFleshpoundKing_execUpdateBattlePhaseLights_Parms UpdateBattlePhaseLights_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseLights, &UpdateBattlePhaseLights_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UpdateGameplayMICParams
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::UpdateGameplayMICParams ( )
{
	static UFunction* pFnUpdateGameplayMICParams = NULL;

	if ( ! pFnUpdateGameplayMICParams )
		pFnUpdateGameplayMICParams = (UFunction*) UObject::GObjObjects()->Data[ 114771 ];

	AKFPawn_ZedFleshpoundKing_execUpdateGameplayMICParams_Parms UpdateGameplayMICParams_Parms;

	this->ProcessEvent ( pFnUpdateGameplayMICParams, &UpdateGameplayMICParams_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ToggleSMBeam
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ToggleSMBeam ( )
{
	static UFunction* pFnToggleSMBeam = NULL;

	if ( ! pFnToggleSMBeam )
		pFnToggleSMBeam = (UFunction*) UObject::GObjObjects()->Data[ 114768 ];

	AKFPawn_ZedFleshpoundKing_execToggleSMBeam_Parms ToggleSMBeam_Parms;

	this->ProcessEvent ( pFnToggleSMBeam, &ToggleSMBeam_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_ChestBeamEnd
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ANIMNOTIFY_ChestBeamEnd ( )
{
	static UFunction* pFnANIMNOTIFY_ChestBeamEnd = NULL;

	if ( ! pFnANIMNOTIFY_ChestBeamEnd )
		pFnANIMNOTIFY_ChestBeamEnd = (UFunction*) UObject::GObjObjects()->Data[ 114767 ];

	AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_ChestBeamEnd_Parms ANIMNOTIFY_ChestBeamEnd_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_ChestBeamEnd, &ANIMNOTIFY_ChestBeamEnd_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ANIMNOTIFY_ChestBeamStart
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ANIMNOTIFY_ChestBeamStart ( )
{
	static UFunction* pFnANIMNOTIFY_ChestBeamStart = NULL;

	if ( ! pFnANIMNOTIFY_ChestBeamStart )
		pFnANIMNOTIFY_ChestBeamStart = (UFunction*) UObject::GObjObjects()->Data[ 114766 ];

	AKFPawn_ZedFleshpoundKing_execANIMNOTIFY_ChestBeamStart_Parms ANIMNOTIFY_ChestBeamStart_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_ChestBeamStart, &ANIMNOTIFY_ChestBeamStart_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ApplyHeadChunkGore
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::ApplyHeadChunkGore ( )
{
	static UFunction* pFnApplyHeadChunkGore = NULL;

	if ( ! pFnApplyHeadChunkGore )
		pFnApplyHeadChunkGore = (UFunction*) UObject::GObjObjects()->Data[ 114762 ];

	AKFPawn_ZedFleshpoundKing_execApplyHeadChunkGore_Parms ApplyHeadChunkGore_Parms;

	this->ProcessEvent ( pFnApplyHeadChunkGore, &ApplyHeadChunkGore_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PlayHeadAsplode
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::PlayHeadAsplode ( )
{
	static UFunction* pFnPlayHeadAsplode = NULL;

	if ( ! pFnPlayHeadAsplode )
		pFnPlayHeadAsplode = (UFunction*) UObject::GObjObjects()->Data[ 114761 ];

	AKFPawn_ZedFleshpoundKing_execPlayHeadAsplode_Parms PlayHeadAsplode_Parms;

	this->ProcessEvent ( pFnPlayHeadAsplode, &PlayHeadAsplode_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PlayDismemberment
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::PlayDismemberment ( )
{
	static UFunction* pFnPlayDismemberment = NULL;

	if ( ! pFnPlayDismemberment )
		pFnPlayDismemberment = (UFunction*) UObject::GObjObjects()->Data[ 114756 ];

	AKFPawn_ZedFleshpoundKing_execPlayDismemberment_Parms PlayDismemberment_Parms;

	this->ProcessEvent ( pFnPlayDismemberment, &PlayDismemberment_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.CauseHeadTrauma
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::CauseHeadTrauma ( )
{
	static UFunction* pFnCauseHeadTrauma = NULL;

	if ( ! pFnCauseHeadTrauma )
		pFnCauseHeadTrauma = (UFunction*) UObject::GObjObjects()->Data[ 114754 ];

	AKFPawn_ZedFleshpoundKing_execCauseHeadTrauma_Parms CauseHeadTrauma_Parms;

	this->ProcessEvent ( pFnCauseHeadTrauma, &CauseHeadTrauma_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PlayBossMusic
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::PlayBossMusic ( )
{
	static UFunction* pFnPlayBossMusic = NULL;

	if ( ! pFnPlayBossMusic )
		pFnPlayBossMusic = (UFunction*) UObject::GObjObjects()->Data[ 114753 ];

	AKFPawn_ZedFleshpoundKing_execPlayBossMusic_Parms PlayBossMusic_Parms;

	this->ProcessEvent ( pFnPlayBossMusic, &PlayBossMusic_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.PossessedBy
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 114750 ];

	AKFPawn_ZedFleshpoundKing_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 114748 ];

	AKFPawn_ZedFleshpoundKing_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetNumMinionsToSpawn
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::GetNumMinionsToSpawn ( )
{
	static UFunction* pFnGetNumMinionsToSpawn = NULL;

	if ( ! pFnGetNumMinionsToSpawn )
		pFnGetNumMinionsToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 114746 ];

	AKFPawn_ZedFleshpoundKing_execGetNumMinionsToSpawn_Parms GetNumMinionsToSpawn_Parms;

	this->ProcessEvent ( pFnGetNumMinionsToSpawn, &GetNumMinionsToSpawn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetWaveInfo
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::GetWaveInfo ( )
{
	static UFunction* pFnGetWaveInfo = NULL;

	if ( ! pFnGetWaveInfo )
		pFnGetWaveInfo = (UFunction*) UObject::GObjObjects()->Data[ 114742 ];

	AKFPawn_ZedFleshpoundKing_execGetWaveInfo_Parms GetWaveInfo_Parms;

	this->ProcessEvent ( pFnGetWaveInfo, &GetWaveInfo_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.OnZedDied
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::OnZedDied ( )
{
	static UFunction* pFnOnZedDied = NULL;

	if ( ! pFnOnZedDied )
		pFnOnZedDied = (UFunction*) UObject::GObjObjects()->Data[ 114740 ];

	AKFPawn_ZedFleshpoundKing_execOnZedDied_Parms OnZedDied_Parms;

	this->ProcessEvent ( pFnOnZedDied, &OnZedDied_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetBossCameraOffset
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::GetBossCameraOffset ( )
{
	static UFunction* pFnGetBossCameraOffset = NULL;

	if ( ! pFnGetBossCameraOffset )
		pFnGetBossCameraOffset = (UFunction*) UObject::GObjObjects()->Data[ 114738 ];

	AKFPawn_ZedFleshpoundKing_execGetBossCameraOffset_Parms GetBossCameraOffset_Parms;

	this->ProcessEvent ( pFnGetBossCameraOffset, &GetBossCameraOffset_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetBossCameraSocket
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::GetBossCameraSocket ( )
{
	static UFunction* pFnGetBossCameraSocket = NULL;

	if ( ! pFnGetBossCameraSocket )
		pFnGetBossCameraSocket = (UFunction*) UObject::GObjObjects()->Data[ 114736 ];

	AKFPawn_ZedFleshpoundKing_execGetBossCameraSocket_Parms GetBossCameraSocket_Parms;

	this->ProcessEvent ( pFnGetBossCameraSocket, &GetBossCameraSocket_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.UseAnimatedBossCamera
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::UseAnimatedBossCamera ( )
{
	static UFunction* pFnUseAnimatedBossCamera = NULL;

	if ( ! pFnUseAnimatedBossCamera )
		pFnUseAnimatedBossCamera = (UFunction*) UObject::GObjObjects()->Data[ 114734 ];

	AKFPawn_ZedFleshpoundKing_execUseAnimatedBossCamera_Parms UseAnimatedBossCamera_Parms;

	this->ProcessEvent ( pFnUseAnimatedBossCamera, &UseAnimatedBossCamera_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.SetAnimatedBossCamera
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::SetAnimatedBossCamera ( )
{
	static UFunction* pFnSetAnimatedBossCamera = NULL;

	if ( ! pFnSetAnimatedBossCamera )
		pFnSetAnimatedBossCamera = (UFunction*) UObject::GObjObjects()->Data[ 114731 ];

	AKFPawn_ZedFleshpoundKing_execSetAnimatedBossCamera_Parms SetAnimatedBossCamera_Parms;

	this->ProcessEvent ( pFnSetAnimatedBossCamera, &SetAnimatedBossCamera_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetHealthPercent
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::GetHealthPercent ( )
{
	static UFunction* pFnGetHealthPercent = NULL;

	if ( ! pFnGetHealthPercent )
		pFnGetHealthPercent = (UFunction*) UObject::GObjObjects()->Data[ 114729 ];

	AKFPawn_ZedFleshpoundKing_execGetHealthPercent_Parms GetHealthPercent_Parms;

	this->ProcessEvent ( pFnGetHealthPercent, &GetHealthPercent_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.IsABoss
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::eventIsABoss ( )
{
	static UFunction* pFnIsABoss = NULL;

	if ( ! pFnIsABoss )
		pFnIsABoss = (UFunction*) UObject::GObjObjects()->Data[ 114727 ];

	AKFPawn_ZedFleshpoundKing_eventIsABoss_Parms IsABoss_Parms;

	this->ProcessEvent ( pFnIsABoss, &IsABoss_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetRandomBossCaption
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::GetRandomBossCaption ( )
{
	static UFunction* pFnGetRandomBossCaption = NULL;

	if ( ! pFnGetRandomBossCaption )
		pFnGetRandomBossCaption = (UFunction*) UObject::GObjObjects()->Data[ 114725 ];

	AKFPawn_ZedFleshpoundKing_execGetRandomBossCaption_Parms GetRandomBossCaption_Parms;

	this->ProcessEvent ( pFnGetRandomBossCaption, &GetRandomBossCaption_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpoundKing.GetMonsterPawn
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpoundKing::GetMonsterPawn ( )
{
	static UFunction* pFnGetMonsterPawn = NULL;

	if ( ! pFnGetMonsterPawn )
		pFnGetMonsterPawn = (UFunction*) UObject::GObjObjects()->Data[ 114723 ];

	AKFPawn_ZedFleshpoundKing_execGetMonsterPawn_Parms GetMonsterPawn_Parms;

	this->ProcessEvent ( pFnGetMonsterPawn, &GetMonsterPawn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 114591 ];

	AKFPawn_ZedFleshpound_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 114589 ];

	AKFPawn_ZedFleshpound_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetOverheadDebugText
// [0x00C20102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::GetOverheadDebugText ( )
{
	static UFunction* pFnGetOverheadDebugText = NULL;

	if ( ! pFnGetOverheadDebugText )
		pFnGetOverheadDebugText = (UFunction*) UObject::GObjObjects()->Data[ 114579 ];

	AKFPawn_ZedFleshpound_execGetOverheadDebugText_Parms GetOverheadDebugText_Parms;

	this->ProcessEvent ( pFnGetOverheadDebugText, &GetOverheadDebugText_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpound::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 114577 ];

	AKFPawn_ZedFleshpound_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.AdjustAffliction
// [0x00420102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::AdjustAffliction ( )
{
	static UFunction* pFnAdjustAffliction = NULL;

	if ( ! pFnAdjustAffliction )
		pFnAdjustAffliction = (UFunction*) UObject::GObjObjects()->Data[ 114575 ];

	AKFPawn_ZedFleshpound_execAdjustAffliction_Parms AdjustAffliction_Parms;

	this->ProcessEvent ( pFnAdjustAffliction, &AdjustAffliction_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetBumpAttackDamageType
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::GetBumpAttackDamageType ( )
{
	static UFunction* pFnGetBumpAttackDamageType = NULL;

	if ( ! pFnGetBumpAttackDamageType )
		pFnGetBumpAttackDamageType = (UFunction*) UObject::GObjObjects()->Data[ 114573 ];

	AKFPawn_ZedFleshpound_execGetBumpAttackDamageType_Parms GetBumpAttackDamageType_Parms;

	this->ProcessEvent ( pFnGetBumpAttackDamageType, &GetBumpAttackDamageType_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.PlayDying
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::PlayDying ( )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 114570 ];

	AKFPawn_ZedFleshpound_execPlayDying_Parms PlayDying_Parms;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.StopRageSound
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::StopRageSound ( )
{
	static UFunction* pFnStopRageSound = NULL;

	if ( ! pFnStopRageSound )
		pFnStopRageSound = (UFunction*) UObject::GObjObjects()->Data[ 114569 ];

	AKFPawn_ZedFleshpound_execStopRageSound_Parms StopRageSound_Parms;

	this->ProcessEvent ( pFnStopRageSound, &StopRageSound_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.SetGlowColors
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::SetGlowColors ( )
{
	static UFunction* pFnSetGlowColors = NULL;

	if ( ! pFnSetGlowColors )
		pFnSetGlowColors = (UFunction*) UObject::GObjObjects()->Data[ 114565 ];

	AKFPawn_ZedFleshpound_execSetGlowColors_Parms SetGlowColors_Parms;

	this->ProcessEvent ( pFnSetGlowColors, &SetGlowColors_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.UpdateGameplayMICParams
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::UpdateGameplayMICParams ( )
{
	static UFunction* pFnUpdateGameplayMICParams = NULL;

	if ( ! pFnUpdateGameplayMICParams )
		pFnUpdateGameplayMICParams = (UFunction*) UObject::GObjObjects()->Data[ 114564 ];

	AKFPawn_ZedFleshpound_execUpdateGameplayMICParams_Parms UpdateGameplayMICParams_Parms;

	this->ProcessEvent ( pFnUpdateGameplayMICParams, &UpdateGameplayMICParams_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.SetEnraged
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::SetEnraged ( )
{
	static UFunction* pFnSetEnraged = NULL;

	if ( ! pFnSetEnraged )
		pFnSetEnraged = (UFunction*) UObject::GObjObjects()->Data[ 114562 ];

	AKFPawn_ZedFleshpound_execSetEnraged_Parms SetEnraged_Parms;

	this->ProcessEvent ( pFnSetEnraged, &SetEnraged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.IsEnraged
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpound::eventIsEnraged ( )
{
	static UFunction* pFnIsEnraged = NULL;

	if ( ! pFnIsEnraged )
		pFnIsEnraged = (UFunction*) UObject::GObjObjects()->Data[ 114560 ];

	AKFPawn_ZedFleshpound_eventIsEnraged_Parms IsEnraged_Parms;

	this->ProcessEvent ( pFnIsEnraged, &IsEnraged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.ShouldPlaySpecialMeleeAnims
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::ShouldPlaySpecialMeleeAnims ( )
{
	static UFunction* pFnShouldPlaySpecialMeleeAnims = NULL;

	if ( ! pFnShouldPlaySpecialMeleeAnims )
		pFnShouldPlaySpecialMeleeAnims = (UFunction*) UObject::GObjObjects()->Data[ 114558 ];

	AKFPawn_ZedFleshpound_execShouldPlaySpecialMeleeAnims_Parms ShouldPlaySpecialMeleeAnims_Parms;

	this->ProcessEvent ( pFnShouldPlaySpecialMeleeAnims, &ShouldPlaySpecialMeleeAnims_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.UpdateBattlePhaseLights
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::UpdateBattlePhaseLights ( )
{
	static UFunction* pFnUpdateBattlePhaseLights = NULL;

	if ( ! pFnUpdateBattlePhaseLights )
		pFnUpdateBattlePhaseLights = (UFunction*) UObject::GObjObjects()->Data[ 114556 ];

	AKFPawn_ZedFleshpound_execUpdateBattlePhaseLights_Parms UpdateBattlePhaseLights_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseLights, &UpdateBattlePhaseLights_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.TerminateEffectsOnDeath
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshpound::TerminateEffectsOnDeath ( )
{
	static UFunction* pFnTerminateEffectsOnDeath = NULL;

	if ( ! pFnTerminateEffectsOnDeath )
		pFnTerminateEffectsOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 114555 ];

	AKFPawn_ZedFleshpound_execTerminateEffectsOnDeath_Parms TerminateEffectsOnDeath_Parms;

	this->ProcessEvent ( pFnTerminateEffectsOnDeath, &TerminateEffectsOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.CanBlock
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::CanBlock ( )
{
	static UFunction* pFnCanBlock = NULL;

	if ( ! pFnCanBlock )
		pFnCanBlock = (UFunction*) UObject::GObjObjects()->Data[ 114553 ];

	AKFPawn_ZedFleshpound_execCanBlock_Parms CanBlock_Parms;

	this->ProcessEvent ( pFnCanBlock, &CanBlock_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.CauseHeadTrauma
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::CauseHeadTrauma ( )
{
	static UFunction* pFnCauseHeadTrauma = NULL;

	if ( ! pFnCauseHeadTrauma )
		pFnCauseHeadTrauma = (UFunction*) UObject::GObjObjects()->Data[ 114551 ];

	AKFPawn_ZedFleshpound_execCauseHeadTrauma_Parms CauseHeadTrauma_Parms;

	this->ProcessEvent ( pFnCauseHeadTrauma, &CauseHeadTrauma_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpound::eventPlayFootStepSound ( )
{
	static UFunction* pFnPlayFootStepSound = NULL;

	if ( ! pFnPlayFootStepSound )
		pFnPlayFootStepSound = (UFunction*) UObject::GObjObjects()->Data[ 114549 ];

	AKFPawn_ZedFleshpound_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;

	this->ProcessEvent ( pFnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.SetSprinting
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::SetSprinting ( )
{
	static UFunction* pFnSetSprinting = NULL;

	if ( ! pFnSetSprinting )
		pFnSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 114547 ];

	AKFPawn_ZedFleshpound_execSetSprinting_Parms SetSprinting_Parms;

	this->ProcessEvent ( pFnSetSprinting, &SetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.StartSteering
// [0x00020100] 
// Parameters infos:

void AKFPawn_ZedFleshpound::StartSteering ( )
{
	static UFunction* pFnStartSteering = NULL;

	if ( ! pFnStartSteering )
		pFnStartSteering = (UFunction*) UObject::GObjObjects()->Data[ 114546 ];

	AKFPawn_ZedFleshpound_execStartSteering_Parms StartSteering_Parms;

	this->ProcessEvent ( pFnStartSteering, &StartSteering_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.OnStackingAfflictionChanged
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshpound::OnStackingAfflictionChanged ( )
{
	static UFunction* pFnOnStackingAfflictionChanged = NULL;

	if ( ! pFnOnStackingAfflictionChanged )
		pFnOnStackingAfflictionChanged = (UFunction*) UObject::GObjObjects()->Data[ 114543 ];

	AKFPawn_ZedFleshpound_execOnStackingAfflictionChanged_Parms OnStackingAfflictionChanged_Parms;

	this->ProcessEvent ( pFnOnStackingAfflictionChanged, &OnStackingAfflictionChanged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpound::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 114541 ];

	AKFPawn_ZedFleshpound_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpound::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 114540 ];

	AKFPawn_ZedFleshpound_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpound::eventGetAIPawnClassToSpawn ( )
{
	static UFunction* pFnGetAIPawnClassToSpawn = NULL;

	if ( ! pFnGetAIPawnClassToSpawn )
		pFnGetAIPawnClassToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 114537 ];

	AKFPawn_ZedFleshpound_eventGetAIPawnClassToSpawn_Parms GetAIPawnClassToSpawn_Parms;

	this->ProcessEvent ( pFnGetAIPawnClassToSpawn, &GetAIPawnClassToSpawn_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 120783 ];

	UKFSM_FleshpoundKing_ChestBeam_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.Timer_TickDamage
// [0x00820002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::Timer_TickDamage ( )
{
	static UFunction* pFnTimer_TickDamage = NULL;

	if ( ! pFnTimer_TickDamage )
		pFnTimer_TickDamage = (UFunction*) UObject::GObjObjects()->Data[ 120774 ];

	UKFSM_FleshpoundKing_ChestBeam_execTimer_TickDamage_Parms Timer_TickDamage_Parms;

	this->ProcessEvent ( pFnTimer_TickDamage, &Timer_TickDamage_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.Timer_AttemptTargetChange
// [0x00820002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::Timer_AttemptTargetChange ( )
{
	static UFunction* pFnTimer_AttemptTargetChange = NULL;

	if ( ! pFnTimer_AttemptTargetChange )
		pFnTimer_AttemptTargetChange = (UFunction*) UObject::GObjObjects()->Data[ 120767 ];

	UKFSM_FleshpoundKing_ChestBeam_execTimer_AttemptTargetChange_Parms Timer_AttemptTargetChange_Parms;

	this->ProcessEvent ( pFnTimer_AttemptTargetChange, &Timer_AttemptTargetChange_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.DisableBeamFX
// [0x00020002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::DisableBeamFX ( )
{
	static UFunction* pFnDisableBeamFX = NULL;

	if ( ! pFnDisableBeamFX )
		pFnDisableBeamFX = (UFunction*) UObject::GObjObjects()->Data[ 120766 ];

	UKFSM_FleshpoundKing_ChestBeam_execDisableBeamFX_Parms DisableBeamFX_Parms;

	this->ProcessEvent ( pFnDisableBeamFX, &DisableBeamFX_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.ToggleBeam
// [0x00820002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::ToggleBeam ( )
{
	static UFunction* pFnToggleBeam = NULL;

	if ( ! pFnToggleBeam )
		pFnToggleBeam = (UFunction*) UObject::GObjObjects()->Data[ 120763 ];

	UKFSM_FleshpoundKing_ChestBeam_execToggleBeam_Parms ToggleBeam_Parms;

	this->ProcessEvent ( pFnToggleBeam, &ToggleBeam_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.SetBeamTarget
// [0x00820002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::SetBeamTarget ( )
{
	static UFunction* pFnSetBeamTarget = NULL;

	if ( ! pFnSetBeamTarget )
		pFnSetBeamTarget = (UFunction*) UObject::GObjObjects()->Data[ 120755 ];

	UKFSM_FleshpoundKing_ChestBeam_execSetBeamTarget_Parms SetBeamTarget_Parms;

	this->ProcessEvent ( pFnSetBeamTarget, &SetBeamTarget_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.IsValidBeamTarget
// [0x00020002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::IsValidBeamTarget ( )
{
	static UFunction* pFnIsValidBeamTarget = NULL;

	if ( ! pFnIsValidBeamTarget )
		pFnIsValidBeamTarget = (UFunction*) UObject::GObjObjects()->Data[ 120752 ];

	UKFSM_FleshpoundKing_ChestBeam_execIsValidBeamTarget_Parms IsValidBeamTarget_Parms;

	this->ProcessEvent ( pFnIsValidBeamTarget, &IsValidBeamTarget_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.Tick
// [0x00020002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120750 ];

	UKFSM_FleshpoundKing_ChestBeam_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFSM_FleshpoundKing_ChestBeam.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_FleshpoundKing_ChestBeam::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120747 ];

	UKFSM_FleshpoundKing_ChestBeam_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedGorefast.IsFrustrated
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedGorefast::IsFrustrated ( )
{
	static UFunction* pFnIsFrustrated = NULL;

	if ( ! pFnIsFrustrated )
		pFnIsFrustrated = (UFunction*) UObject::GObjObjects()->Data[ 110998 ];

	AKFAIController_ZedGorefast_execIsFrustrated_Parms IsFrustrated_Parms;

	this->ProcessEvent ( pFnIsFrustrated, &IsFrustrated_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedGorefast.UpdateSprintFrustration
// [0x00024002] 
// Parameters infos:

void AKFAIController_ZedGorefast::UpdateSprintFrustration ( )
{
	static UFunction* pFnUpdateSprintFrustration = NULL;

	if ( ! pFnUpdateSprintFrustration )
		pFnUpdateSprintFrustration = (UFunction*) UObject::GObjObjects()->Data[ 110996 ];

	AKFAIController_ZedGorefast_execUpdateSprintFrustration_Parms UpdateSprintFrustration_Parms;

	this->ProcessEvent ( pFnUpdateSprintFrustration, &UpdateSprintFrustration_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedGorefast.EnemyNotVisible
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFAIController_ZedGorefast::eventEnemyNotVisible ( )
{
	static UFunction* pFnEnemyNotVisible = NULL;

	if ( ! pFnEnemyNotVisible )
		pFnEnemyNotVisible = (UFunction*) UObject::GObjObjects()->Data[ 110995 ];

	AKFAIController_ZedGorefast_eventEnemyNotVisible_Parms EnemyNotVisible_Parms;

	this->ProcessEvent ( pFnEnemyNotVisible, &EnemyNotVisible_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedGorefast.CanSetSprinting
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedGorefast::CanSetSprinting ( )
{
	static UFunction* pFnCanSetSprinting = NULL;

	if ( ! pFnCanSetSprinting )
		pFnCanSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 110992 ];

	AKFAIController_ZedGorefast_execCanSetSprinting_Parms CanSetSprinting_Parms;

	this->ProcessEvent ( pFnCanSetSprinting, &CanSetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedGorefast.ShouldSprint
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedGorefast::ShouldSprint ( )
{
	static UFunction* pFnShouldSprint = NULL;

	if ( ! pFnShouldSprint )
		pFnShouldSprint = (UFunction*) UObject::GObjObjects()->Data[ 110990 ];

	AKFAIController_ZedGorefast_execShouldSprint_Parms ShouldSprint_Parms;

	this->ProcessEvent ( pFnShouldSprint, &ShouldSprint_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_Heal.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_Heal::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121048 ];

	UKFSM_Patriarch_Heal_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_Heal.DoHeal
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_Heal::DoHeal ( )
{
	static UFunction* pFnDoHeal = NULL;

	if ( ! pFnDoHeal )
		pFnDoHeal = (UFunction*) UObject::GObjObjects()->Data[ 121044 ];

	UKFSM_Patriarch_Heal_execDoHeal_Parms DoHeal_Parms;

	this->ProcessEvent ( pFnDoHeal, &DoHeal_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_Heal.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_Heal::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121041 ];

	UKFSM_Patriarch_Heal_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_Heal.PackSMFlags
// [0x00022002] 
// Parameters infos:

void UKFSM_Patriarch_Heal::PackSMFlags ( )
{
	static UFunction* pFnPackSMFlags = NULL;

	if ( ! pFnPackSMFlags )
		pFnPackSMFlags = (UFunction*) UObject::GObjObjects()->Data[ 111282 ];

	UKFSM_Patriarch_Heal_execPackSMFlags_Parms PackSMFlags_Parms;

	this->ProcessEvent ( pFnPackSMFlags, &PackSMFlags_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_Taunt.PackSMFlags
// [0x00022002] 
// Parameters infos:

void UKFSM_Patriarch_Taunt::PackSMFlags ( )
{
	static UFunction* pFnPackSMFlags = NULL;

	if ( ! pFnPackSMFlags )
		pFnPackSMFlags = (UFunction*) UObject::GObjObjects()->Data[ 121185 ];

	UKFSM_Patriarch_Taunt_execPackSMFlags_Parms PackSMFlags_Parms;

	this->ProcessEvent ( pFnPackSMFlags, &PackSMFlags_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedScrake.CanAttackDestructibles
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedScrake::CanAttackDestructibles ( )
{
	static UFunction* pFnCanAttackDestructibles = NULL;

	if ( ! pFnCanAttackDestructibles )
		pFnCanAttackDestructibles = (UFunction*) UObject::GObjObjects()->Data[ 111309 ];

	AKFAIController_ZedScrake_execCanAttackDestructibles_Parms CanAttackDestructibles_Parms;

	this->ProcessEvent ( pFnCanAttackDestructibles, &CanAttackDestructibles_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedScrake.CanEvadeGrenade
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedScrake::CanEvadeGrenade ( )
{
	static UFunction* pFnCanEvadeGrenade = NULL;

	if ( ! pFnCanEvadeGrenade )
		pFnCanEvadeGrenade = (UFunction*) UObject::GObjObjects()->Data[ 111307 ];

	AKFAIController_ZedScrake_execCanEvadeGrenade_Parms CanEvadeGrenade_Parms;

	this->ProcessEvent ( pFnCanEvadeGrenade, &CanEvadeGrenade_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedScrake.UpdateSprintFrustration
// [0x00024000] 
// Parameters infos:

void AKFAIController_ZedScrake::UpdateSprintFrustration ( )
{
	static UFunction* pFnUpdateSprintFrustration = NULL;

	if ( ! pFnUpdateSprintFrustration )
		pFnUpdateSprintFrustration = (UFunction*) UObject::GObjObjects()->Data[ 111305 ];

	AKFAIController_ZedScrake_execUpdateSprintFrustration_Parms UpdateSprintFrustration_Parms;

	this->ProcessEvent ( pFnUpdateSprintFrustration, &UpdateSprintFrustration_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedScrake.CanSetSprinting
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedScrake::CanSetSprinting ( )
{
	static UFunction* pFnCanSetSprinting = NULL;

	if ( ! pFnCanSetSprinting )
		pFnCanSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 111302 ];

	AKFAIController_ZedScrake_execCanSetSprinting_Parms CanSetSprinting_Parms;

	this->ProcessEvent ( pFnCanSetSprinting, &CanSetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedScrake.ShouldSprint
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedScrake::ShouldSprint ( )
{
	static UFunction* pFnShouldSprint = NULL;

	if ( ! pFnShouldSprint )
		pFnShouldSprint = (UFunction*) UObject::GObjObjects()->Data[ 111300 ];

	AKFAIController_ZedScrake_execShouldSprint_Parms ShouldSprint_Parms;

	this->ProcessEvent ( pFnShouldSprint, &ShouldSprint_Parms, NULL );
};

// Function kfgamecontent.KFAIController_ZedScrake.AmIAllowedToSuicideWhenStuck
// [0x00020002] 
// Parameters infos:

void AKFAIController_ZedScrake::AmIAllowedToSuicideWhenStuck ( )
{
	static UFunction* pFnAmIAllowedToSuicideWhenStuck = NULL;

	if ( ! pFnAmIAllowedToSuicideWhenStuck )
		pFnAmIAllowedToSuicideWhenStuck = (UFunction*) UObject::GObjObjects()->Data[ 111298 ];

	AKFAIController_ZedScrake_execAmIAllowedToSuicideWhenStuck_Parms AmIAllowedToSuicideWhenStuck_Parms;

	this->ProcessEvent ( pFnAmIAllowedToSuicideWhenStuck, &AmIAllowedToSuicideWhenStuck_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.ResetSpawnManager
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::ResetSpawnManager ( )
{
	static UFunction* pFnResetSpawnManager = NULL;

	if ( ! pFnResetSpawnManager )
		pFnResetSpawnManager = (UFunction*) UObject::GObjObjects()->Data[ 111509 ];

	UKFAISpawnManager_Versus_execResetSpawnManager_Parms ResetSpawnManager_Parms;

	this->ProcessEvent ( pFnResetSpawnManager, &ResetSpawnManager_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.CanSpawnPlayerBoss
// [0x00080002] 
// Parameters infos:

void UKFAISpawnManager_Versus::CanSpawnPlayerBoss ( )
{
	static UFunction* pFnCanSpawnPlayerBoss = NULL;

	if ( ! pFnCanSpawnPlayerBoss )
		pFnCanSpawnPlayerBoss = (UFunction*) UObject::GObjObjects()->Data[ 111506 ];

	UKFAISpawnManager_Versus_execCanSpawnPlayerBoss_Parms CanSpawnPlayerBoss_Parms;

	this->ProcessEvent ( pFnCanSpawnPlayerBoss, &CanSpawnPlayerBoss_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetNumActiveZedsOfClass
// [0x00080002] 
// Parameters infos:

void UKFAISpawnManager_Versus::GetNumActiveZedsOfClass ( )
{
	static UFunction* pFnGetNumActiveZedsOfClass = NULL;

	if ( ! pFnGetNumActiveZedsOfClass )
		pFnGetNumActiveZedsOfClass = (UFunction*) UObject::GObjObjects()->Data[ 111501 ];

	UKFAISpawnManager_Versus_execGetNumActiveZedsOfClass_Parms GetNumActiveZedsOfClass_Parms;

	this->ProcessEvent ( pFnGetNumActiveZedsOfClass, &GetNumActiveZedsOfClass_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetNumWaitingZedPlayers
// [0x00080002] 
// Parameters infos:

void UKFAISpawnManager_Versus::GetNumWaitingZedPlayers ( )
{
	static UFunction* pFnGetNumWaitingZedPlayers = NULL;

	if ( ! pFnGetNumWaitingZedPlayers )
		pFnGetNumWaitingZedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 111497 ];

	UKFAISpawnManager_Versus_execGetNumWaitingZedPlayers_Parms GetNumWaitingZedPlayers_Parms;

	this->ProcessEvent ( pFnGetNumWaitingZedPlayers, &GetNumWaitingZedPlayers_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.HaveZedPlayers
// [0x00080002] 
// Parameters infos:

void UKFAISpawnManager_Versus::HaveZedPlayers ( )
{
	static UFunction* pFnHaveZedPlayers = NULL;

	if ( ! pFnHaveZedPlayers )
		pFnHaveZedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 111494 ];

	UKFAISpawnManager_Versus_execHaveZedPlayers_Parms HaveZedPlayers_Parms;

	this->ProcessEvent ( pFnHaveZedPlayers, &HaveZedPlayers_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.IsPlayerZedSpawnAllowed
// [0x00080002] 
// Parameters infos:

void UKFAISpawnManager_Versus::IsPlayerZedSpawnAllowed ( )
{
	static UFunction* pFnIsPlayerZedSpawnAllowed = NULL;

	if ( ! pFnIsPlayerZedSpawnAllowed )
		pFnIsPlayerZedSpawnAllowed = (UFunction*) UObject::GObjObjects()->Data[ 111492 ];

	UKFAISpawnManager_Versus_execIsPlayerZedSpawnAllowed_Parms IsPlayerZedSpawnAllowed_Parms;

	this->ProcessEvent ( pFnIsPlayerZedSpawnAllowed, &IsPlayerZedSpawnAllowed_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.RestartPlayerZed
// [0x00820002] 
// Parameters infos:

void UKFAISpawnManager_Versus::RestartPlayerZed ( )
{
	static UFunction* pFnRestartPlayerZed = NULL;

	if ( ! pFnRestartPlayerZed )
		pFnRestartPlayerZed = (UFunction*) UObject::GObjObjects()->Data[ 111486 ];

	UKFAISpawnManager_Versus_execRestartPlayerZed_Parms RestartPlayerZed_Parms;

	this->ProcessEvent ( pFnRestartPlayerZed, &RestartPlayerZed_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.RecyclePendingZedPawnClass
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::RecyclePendingZedPawnClass ( )
{
	static UFunction* pFnRecyclePendingZedPawnClass = NULL;

	if ( ! pFnRecyclePendingZedPawnClass )
		pFnRecyclePendingZedPawnClass = (UFunction*) UObject::GObjObjects()->Data[ 111483 ];

	UKFAISpawnManager_Versus_execRecyclePendingZedPawnClass_Parms RecyclePendingZedPawnClass_Parms;

	this->ProcessEvent ( pFnRecyclePendingZedPawnClass, &RecyclePendingZedPawnClass_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.Timer_SpawnBossPlayerZeds
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::Timer_SpawnBossPlayerZeds ( )
{
	static UFunction* pFnTimer_SpawnBossPlayerZeds = NULL;

	if ( ! pFnTimer_SpawnBossPlayerZeds )
		pFnTimer_SpawnBossPlayerZeds = (UFunction*) UObject::GObjObjects()->Data[ 111474 ];

	UKFAISpawnManager_Versus_execTimer_SpawnBossPlayerZeds_Parms Timer_SpawnBossPlayerZeds_Parms;

	this->ProcessEvent ( pFnTimer_SpawnBossPlayerZeds, &Timer_SpawnBossPlayerZeds_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.FindTakeoverZed
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::FindTakeoverZed ( )
{
	static UFunction* pFnFindTakeoverZed = NULL;

	if ( ! pFnFindTakeoverZed )
		pFnFindTakeoverZed = (UFunction*) UObject::GObjObjects()->Data[ 111467 ];

	UKFAISpawnManager_Versus_execFindTakeoverZed_Parms FindTakeoverZed_Parms;

	this->ProcessEvent ( pFnFindTakeoverZed, &FindTakeoverZed_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.SpawnRemainingReservedZeds
// [0x00024002] 
// Parameters infos:

void UKFAISpawnManager_Versus::SpawnRemainingReservedZeds ( )
{
	static UFunction* pFnSpawnRemainingReservedZeds = NULL;

	if ( ! pFnSpawnRemainingReservedZeds )
		pFnSpawnRemainingReservedZeds = (UFunction*) UObject::GObjObjects()->Data[ 111462 ];

	UKFAISpawnManager_Versus_execSpawnRemainingReservedZeds_Parms SpawnRemainingReservedZeds_Parms;

	this->ProcessEvent ( pFnSpawnRemainingReservedZeds, &SpawnRemainingReservedZeds_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.NeedPlayerSpawnVolume
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::NeedPlayerSpawnVolume ( )
{
	static UFunction* pFnNeedPlayerSpawnVolume = NULL;

	if ( ! pFnNeedPlayerSpawnVolume )
		pFnNeedPlayerSpawnVolume = (UFunction*) UObject::GObjObjects()->Data[ 111460 ];

	UKFAISpawnManager_Versus_execNeedPlayerSpawnVolume_Parms NeedPlayerSpawnVolume_Parms;

	this->ProcessEvent ( pFnNeedPlayerSpawnVolume, &NeedPlayerSpawnVolume_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.Timer_CheckForZedTakeovers
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::Timer_CheckForZedTakeovers ( )
{
	static UFunction* pFnTimer_CheckForZedTakeovers = NULL;

	if ( ! pFnTimer_CheckForZedTakeovers )
		pFnTimer_CheckForZedTakeovers = (UFunction*) UObject::GObjObjects()->Data[ 111452 ];

	UKFAISpawnManager_Versus_execTimer_CheckForZedTakeovers_Parms Timer_CheckForZedTakeovers_Parms;

	this->ProcessEvent ( pFnTimer_CheckForZedTakeovers, &Timer_CheckForZedTakeovers_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.CheckForTakeoverTimer
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::CheckForTakeoverTimer ( )
{
	static UFunction* pFnCheckForTakeoverTimer = NULL;

	if ( ! pFnCheckForTakeoverTimer )
		pFnCheckForTakeoverTimer = (UFunction*) UObject::GObjObjects()->Data[ 111448 ];

	UKFAISpawnManager_Versus_execCheckForTakeoverTimer_Parms CheckForTakeoverTimer_Parms;

	this->ProcessEvent ( pFnCheckForTakeoverTimer, &CheckForTakeoverTimer_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.RespawnZedHumanPlayers
// [0x00884002] 
// Parameters infos:

void UKFAISpawnManager_Versus::RespawnZedHumanPlayers ( )
{
	static UFunction* pFnRespawnZedHumanPlayers = NULL;

	if ( ! pFnRespawnZedHumanPlayers )
		pFnRespawnZedHumanPlayers = (UFunction*) UObject::GObjObjects()->Data[ 111420 ];

	UKFAISpawnManager_Versus_execRespawnZedHumanPlayers_Parms RespawnZedHumanPlayers_Parms;

	this->ProcessEvent ( pFnRespawnZedHumanPlayers, &RespawnZedHumanPlayers_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetSpawnLocation
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::GetSpawnLocation ( )
{
	static UFunction* pFnGetSpawnLocation = NULL;

	if ( ! pFnGetSpawnLocation )
		pFnGetSpawnLocation = (UFunction*) UObject::GObjObjects()->Data[ 111416 ];

	UKFAISpawnManager_Versus_execGetSpawnLocation_Parms GetSpawnLocation_Parms;

	this->ProcessEvent ( pFnGetSpawnLocation, &GetSpawnLocation_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.ReserveStrongZedsForPlayers
// [0x00420002] 
// Parameters infos:

void UKFAISpawnManager_Versus::ReserveStrongZedsForPlayers ( )
{
	static UFunction* pFnReserveStrongZedsForPlayers = NULL;

	if ( ! pFnReserveStrongZedsForPlayers )
		pFnReserveStrongZedsForPlayers = (UFunction*) UObject::GObjObjects()->Data[ 111411 ];

	UKFAISpawnManager_Versus_execReserveStrongZedsForPlayers_Parms ReserveStrongZedsForPlayers_Parms;

	this->ProcessEvent ( pFnReserveStrongZedsForPlayers, &ReserveStrongZedsForPlayers_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.GiveAvailableZedClass
// [0x00424002] 
// Parameters infos:

void UKFAISpawnManager_Versus::GiveAvailableZedClass ( )
{
	static UFunction* pFnGiveAvailableZedClass = NULL;

	if ( ! pFnGiveAvailableZedClass )
		pFnGiveAvailableZedClass = (UFunction*) UObject::GObjObjects()->Data[ 111398 ];

	UKFAISpawnManager_Versus_execGiveAvailableZedClass_Parms GiveAvailableZedClass_Parms;

	this->ProcessEvent ( pFnGiveAvailableZedClass, &GiveAvailableZedClass_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.AssignZedsToPlayers
// [0x00420002] 
// Parameters infos:

void UKFAISpawnManager_Versus::AssignZedsToPlayers ( )
{
	static UFunction* pFnAssignZedsToPlayers = NULL;

	if ( ! pFnAssignZedsToPlayers )
		pFnAssignZedsToPlayers = (UFunction*) UObject::GObjObjects()->Data[ 111394 ];

	UKFAISpawnManager_Versus_execAssignZedsToPlayers_Parms AssignZedsToPlayers_Parms;

	this->ProcessEvent ( pFnAssignZedsToPlayers, &AssignZedsToPlayers_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetSpecialSquad
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::GetSpecialSquad ( )
{
	static UFunction* pFnGetSpecialSquad = NULL;

	if ( ! pFnGetSpecialSquad )
		pFnGetSpecialSquad = (UFunction*) UObject::GObjObjects()->Data[ 111392 ];

	UKFAISpawnManager_Versus_execGetSpecialSquad_Parms GetSpecialSquad_Parms;

	this->ProcessEvent ( pFnGetSpecialSquad, &GetSpecialSquad_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.CheckForSpecialSquadSpawn
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::CheckForSpecialSquadSpawn ( )
{
	static UFunction* pFnCheckForSpecialSquadSpawn = NULL;

	if ( ! pFnCheckForSpecialSquadSpawn )
		pFnCheckForSpecialSquadSpawn = (UFunction*) UObject::GObjObjects()->Data[ 111389 ];

	UKFAISpawnManager_Versus_execCheckForSpecialSquadSpawn_Parms CheckForSpecialSquadSpawn_Parms;

	this->ProcessEvent ( pFnCheckForSpecialSquadSpawn, &CheckForSpecialSquadSpawn_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.Timer_SpawnPlayerZeds
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::Timer_SpawnPlayerZeds ( )
{
	static UFunction* pFnTimer_SpawnPlayerZeds = NULL;

	if ( ! pFnTimer_SpawnPlayerZeds )
		pFnTimer_SpawnPlayerZeds = (UFunction*) UObject::GObjObjects()->Data[ 111384 ];

	UKFAISpawnManager_Versus_execTimer_SpawnPlayerZeds_Parms Timer_SpawnPlayerZeds_Parms;

	this->ProcessEvent ( pFnTimer_SpawnPlayerZeds, &Timer_SpawnPlayerZeds_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.SpawnSquad
// [0x00424002] 
// Parameters infos:

void UKFAISpawnManager_Versus::SpawnSquad ( )
{
	static UFunction* pFnSpawnSquad = NULL;

	if ( ! pFnSpawnSquad )
		pFnSpawnSquad = (UFunction*) UObject::GObjObjects()->Data[ 111378 ];

	UKFAISpawnManager_Versus_execSpawnSquad_Parms SpawnSquad_Parms;

	this->ProcessEvent ( pFnSpawnSquad, &SpawnSquad_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.SetupNextWave
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::SetupNextWave ( )
{
	static UFunction* pFnSetupNextWave = NULL;

	if ( ! pFnSetupNextWave )
		pFnSetupNextWave = (UFunction*) UObject::GObjObjects()->Data[ 111369 ];

	UKFAISpawnManager_Versus_execSetupNextWave_Parms SetupNextWave_Parms;

	this->ProcessEvent ( pFnSetupNextWave, &SetupNextWave_Parms, NULL );
};

// Function kfgamecontent.KFAISpawnManager_Versus.GetAIAliveCount
// [0x00020002] 
// Parameters infos:

void UKFAISpawnManager_Versus::GetAIAliveCount ( )
{
	static UFunction* pFnGetAIAliveCount = NULL;

	if ( ! pFnGetAIAliveCount )
		pFnGetAIAliveCount = (UFunction*) UObject::GObjObjects()->Data[ 111367 ];

	UKFAISpawnManager_Versus_execGetAIAliveCount_Parms GetAIAliveCount_Parms;

	this->ProcessEvent ( pFnGetAIAliveCount, &GetAIAliveCount_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.SetHaveUpdatePerk
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFPlayerControllerVersus::eventSetHaveUpdatePerk ( )
{
	static UFunction* pFnSetHaveUpdatePerk = NULL;

	if ( ! pFnSetHaveUpdatePerk )
		pFnSetHaveUpdatePerk = (UFunction*) UObject::GObjObjects()->Data[ 119618 ];

	AKFPlayerControllerVersus_eventSetHaveUpdatePerk_Parms SetHaveUpdatePerk_Parms;

	this->ProcessEvent ( pFnSetHaveUpdatePerk, &SetHaveUpdatePerk_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFPlayerControllerVersus::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 119617 ];

	AKFPlayerControllerVersus_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.ClientReset
// [0x010201C2] 
// Parameters infos:

void AKFPlayerControllerVersus::ClientReset ( )
{
	static UFunction* pFnClientReset = NULL;

	if ( ! pFnClientReset )
		pFnClientReset = (UFunction*) UObject::GObjObjects()->Data[ 119612 ];

	AKFPlayerControllerVersus_execClientReset_Parms ClientReset_Parms;

	this->ProcessEvent ( pFnClientReset, &ClientReset_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.Reset
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 119611 ];

	AKFPlayerControllerVersus_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.NotifyChangeSpectateViewTarget
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::NotifyChangeSpectateViewTarget ( )
{
	static UFunction* pFnNotifyChangeSpectateViewTarget = NULL;

	if ( ! pFnNotifyChangeSpectateViewTarget )
		pFnNotifyChangeSpectateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 119609 ];

	AKFPlayerControllerVersus_execNotifyChangeSpectateViewTarget_Parms NotifyChangeSpectateViewTarget_Parms;

	this->ProcessEvent ( pFnNotifyChangeSpectateViewTarget, &NotifyChangeSpectateViewTarget_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.ClientRecieveNewTeam
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::ClientRecieveNewTeam ( )
{
	static UFunction* pFnClientRecieveNewTeam = NULL;

	if ( ! pFnClientRecieveNewTeam )
		pFnClientRecieveNewTeam = (UFunction*) UObject::GObjObjects()->Data[ 119605 ];

	AKFPlayerControllerVersus_execClientRecieveNewTeam_Parms ClientRecieveNewTeam_Parms;

	this->ProcessEvent ( pFnClientRecieveNewTeam, &ClientRecieveNewTeam_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.ServerNotifyTeamChanged
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::ServerNotifyTeamChanged ( )
{
	static UFunction* pFnServerNotifyTeamChanged = NULL;

	if ( ! pFnServerNotifyTeamChanged )
		pFnServerNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 119604 ];

	AKFPlayerControllerVersus_execServerNotifyTeamChanged_Parms ServerNotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnServerNotifyTeamChanged, &ServerNotifyTeamChanged_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.RequestSwitchTeam
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AKFPlayerControllerVersus::RequestSwitchTeam ( )
{
	static UFunction* pFnRequestSwitchTeam = NULL;

	if ( ! pFnRequestSwitchTeam )
		pFnRequestSwitchTeam = (UFunction*) UObject::GObjObjects()->Data[ 119602 ];

	AKFPlayerControllerVersus_execRequestSwitchTeam_Parms RequestSwitchTeam_Parms;

	this->ProcessEvent ( pFnRequestSwitchTeam, &RequestSwitchTeam_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.ChangeTeam
// [0x00024202] ( FUNC_Exec )
// Parameters infos:

void AKFPlayerControllerVersus::ChangeTeam ( )
{
	static UFunction* pFnChangeTeam = NULL;

	if ( ! pFnChangeTeam )
		pFnChangeTeam = (UFunction*) UObject::GObjObjects()->Data[ 119600 ];

	AKFPlayerControllerVersus_execChangeTeam_Parms ChangeTeam_Parms;

	this->ProcessEvent ( pFnChangeTeam, &ChangeTeam_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.NotifyOfAutoBalance
// [0x01020142] 
// Parameters infos:

void AKFPlayerControllerVersus::NotifyOfAutoBalance ( )
{
	static UFunction* pFnNotifyOfAutoBalance = NULL;

	if ( ! pFnNotifyOfAutoBalance )
		pFnNotifyOfAutoBalance = (UFunction*) UObject::GObjObjects()->Data[ 119599 ];

	AKFPlayerControllerVersus_execNotifyOfAutoBalance_Parms NotifyOfAutoBalance_Parms;

	this->ProcessEvent ( pFnNotifyOfAutoBalance, &NotifyOfAutoBalance_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.RecieveChatMessage
// [0x00024002] 
// Parameters infos:

void AKFPlayerControllerVersus::RecieveChatMessage ( )
{
	static UFunction* pFnRecieveChatMessage = NULL;

	if ( ! pFnRecieveChatMessage )
		pFnRecieveChatMessage = (UFunction*) UObject::GObjObjects()->Data[ 119594 ];

	AKFPlayerControllerVersus_execRecieveChatMessage_Parms RecieveChatMessage_Parms;

	this->ProcessEvent ( pFnRecieveChatMessage, &RecieveChatMessage_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.ShouldDisplayGameplayPostProcessFX
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::ShouldDisplayGameplayPostProcessFX ( )
{
	static UFunction* pFnShouldDisplayGameplayPostProcessFX = NULL;

	if ( ! pFnShouldDisplayGameplayPostProcessFX )
		pFnShouldDisplayGameplayPostProcessFX = (UFunction*) UObject::GObjObjects()->Data[ 119592 ];

	AKFPlayerControllerVersus_execShouldDisplayGameplayPostProcessFX_Parms ShouldDisplayGameplayPostProcessFX_Parms;

	this->ProcessEvent ( pFnShouldDisplayGameplayPostProcessFX, &ShouldDisplayGameplayPostProcessFX_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.AddTrackedDamage
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::AddTrackedDamage ( )
{
	static UFunction* pFnAddTrackedDamage = NULL;

	if ( ! pFnAddTrackedDamage )
		pFnAddTrackedDamage = (UFunction*) UObject::GObjObjects()->Data[ 119587 ];

	AKFPlayerControllerVersus_execAddTrackedDamage_Parms AddTrackedDamage_Parms;

	this->ProcessEvent ( pFnAddTrackedDamage, &AddTrackedDamage_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.AwardZedDamage
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::AwardZedDamage ( )
{
	static UFunction* pFnAwardZedDamage = NULL;

	if ( ! pFnAwardZedDamage )
		pFnAwardZedDamage = (UFunction*) UObject::GObjObjects()->Data[ 119584 ];

	AKFPlayerControllerVersus_execAwardZedDamage_Parms AwardZedDamage_Parms;

	this->ProcessEvent ( pFnAwardZedDamage, &AwardZedDamage_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.StopAltFire
// [0x00024202] ( FUNC_Exec )
// Parameters infos:

void AKFPlayerControllerVersus::StopAltFire ( )
{
	static UFunction* pFnStopAltFire = NULL;

	if ( ! pFnStopAltFire )
		pFnStopAltFire = (UFunction*) UObject::GObjObjects()->Data[ 119582 ];

	AKFPlayerControllerVersus_execStopAltFire_Parms StopAltFire_Parms;

	this->ProcessEvent ( pFnStopAltFire, &StopAltFire_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.StartAltFire
// [0x00024202] ( FUNC_Exec )
// Parameters infos:

void AKFPlayerControllerVersus::StartAltFire ( )
{
	static UFunction* pFnStartAltFire = NULL;

	if ( ! pFnStartAltFire )
		pFnStartAltFire = (UFunction*) UObject::GObjObjects()->Data[ 119580 ];

	AKFPlayerControllerVersus_execStartAltFire_Parms StartAltFire_Parms;

	this->ProcessEvent ( pFnStartAltFire, &StartAltFire_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.ClientRestart
// [0x010201C2] 
// Parameters infos:

void AKFPlayerControllerVersus::ClientRestart ( )
{
	static UFunction* pFnClientRestart = NULL;

	if ( ! pFnClientRestart )
		pFnClientRestart = (UFunction*) UObject::GObjObjects()->Data[ 119578 ];

	AKFPlayerControllerVersus_execClientRestart_Parms ClientRestart_Parms;

	this->ProcessEvent ( pFnClientRestart, &ClientRestart_Parms, NULL );
};

// Function kfgamecontent.KFPlayerControllerVersus.Restart
// [0x00020002] 
// Parameters infos:

void AKFPlayerControllerVersus::Restart ( )
{
	static UFunction* pFnRestart = NULL;

	if ( ! pFnRestart )
		pFnRestart = (UFunction*) UObject::GObjObjects()->Data[ 119576 ];

	AKFPlayerControllerVersus_execRestart_Parms Restart_Parms;

	this->ProcessEvent ( pFnRestart, &Restart_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetEndOfMatchTime
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetEndOfMatchTime ( )
{
	static UFunction* pFnGetEndOfMatchTime = NULL;

	if ( ! pFnGetEndOfMatchTime )
		pFnGetEndOfMatchTime = (UFunction*) UObject::GObjObjects()->Data[ 113056 ];

	AKFGameInfo_VersusSurvival_execGetEndOfMatchTime_Parms GetEndOfMatchTime_Parms;

	this->ProcessEvent ( pFnGetEndOfMatchTime, &GetEndOfMatchTime_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ShowPostGameMenu
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ShowPostGameMenu ( )
{
	static UFunction* pFnShowPostGameMenu = NULL;

	if ( ! pFnShowPostGameMenu )
		pFnShowPostGameMenu = (UFunction*) UObject::GObjObjects()->Data[ 113055 ];

	AKFGameInfo_VersusSurvival_execShowPostGameMenu_Parms ShowPostGameMenu_Parms;

	this->ProcessEvent ( pFnShowPostGameMenu, &ShowPostGameMenu_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.TryRestartGame
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::TryRestartGame ( )
{
	static UFunction* pFnTryRestartGame = NULL;

	if ( ! pFnTryRestartGame )
		pFnTryRestartGame = (UFunction*) UObject::GObjObjects()->Data[ 113054 ];

	AKFGameInfo_VersusSurvival_execTryRestartGame_Parms TryRestartGame_Parms;

	this->ProcessEvent ( pFnTryRestartGame, &TryRestartGame_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CheckRoundEndAchievements
// [0x00080002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::CheckRoundEndAchievements ( )
{
	static UFunction* pFnCheckRoundEndAchievements = NULL;

	if ( ! pFnCheckRoundEndAchievements )
		pFnCheckRoundEndAchievements = (UFunction*) UObject::GObjObjects()->Data[ 113051 ];

	AKFGameInfo_VersusSurvival_execCheckRoundEndAchievements_Parms CheckRoundEndAchievements_Parms;

	this->ProcessEvent ( pFnCheckRoundEndAchievements, &CheckRoundEndAchievements_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SwitchOnePlayerToTeam
// [0x00080002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::SwitchOnePlayerToTeam ( )
{
	static UFunction* pFnSwitchOnePlayerToTeam = NULL;

	if ( ! pFnSwitchOnePlayerToTeam )
		pFnSwitchOnePlayerToTeam = (UFunction*) UObject::GObjObjects()->Data[ 113042 ];

	AKFGameInfo_VersusSurvival_execSwitchOnePlayerToTeam_Parms SwitchOnePlayerToTeam_Parms;

	this->ProcessEvent ( pFnSwitchOnePlayerToTeam, &SwitchOnePlayerToTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.StartSpawning
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::StartSpawning ( )
{
	static UFunction* pFnStartSpawning = NULL;

	if ( ! pFnStartSpawning )
		pFnStartSpawning = (UFunction*) UObject::GObjObjects()->Data[ 113041 ];

	AKFGameInfo_VersusSurvival_execStartSpawning_Parms StartSpawning_Parms;

	this->ProcessEvent ( pFnStartSpawning, &StartSpawning_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PreSelectPlayerStarts
// [0x00080002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::PreSelectPlayerStarts ( )
{
	static UFunction* pFnPreSelectPlayerStarts = NULL;

	if ( ! pFnPreSelectPlayerStarts )
		pFnPreSelectPlayerStarts = (UFunction*) UObject::GObjObjects()->Data[ 113038 ];

	AKFGameInfo_VersusSurvival_execPreSelectPlayerStarts_Parms PreSelectPlayerStarts_Parms;

	this->ProcessEvent ( pFnPreSelectPlayerStarts, &PreSelectPlayerStarts_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsInitialSpawnPointSelection
// [0x00022002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::IsInitialSpawnPointSelection ( )
{
	static UFunction* pFnIsInitialSpawnPointSelection = NULL;

	if ( ! pFnIsInitialSpawnPointSelection )
		pFnIsInitialSpawnPointSelection = (UFunction*) UObject::GObjObjects()->Data[ 113034 ];

	AKFGameInfo_VersusSurvival_execIsInitialSpawnPointSelection_Parms IsInitialSpawnPointSelection_Parms;

	this->ProcessEvent ( pFnIsInitialSpawnPointSelection, &IsInitialSpawnPointSelection_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BeginNextRound
// [0x00080002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::BeginNextRound ( )
{
	static UFunction* pFnBeginNextRound = NULL;

	if ( ! pFnBeginNextRound )
		pFnBeginNextRound = (UFunction*) UObject::GObjObjects()->Data[ 113033 ];

	AKFGameInfo_VersusSurvival_execBeginNextRound_Parms BeginNextRound_Parms;

	this->ProcessEvent ( pFnBeginNextRound, &BeginNextRound_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CheckTeamNumbers
// [0x00080002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::CheckTeamNumbers ( )
{
	static UFunction* pFnCheckTeamNumbers = NULL;

	if ( ! pFnCheckTeamNumbers )
		pFnCheckTeamNumbers = (UFunction*) UObject::GObjObjects()->Data[ 113029 ];

	AKFGameInfo_VersusSurvival_execCheckTeamNumbers_Parms CheckTeamNumbers_Parms;

	this->ProcessEvent ( pFnCheckTeamNumbers, &CheckTeamNumbers_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Timer_AnnounceNextRound
// [0x00080002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::Timer_AnnounceNextRound ( )
{
	static UFunction* pFnTimer_AnnounceNextRound = NULL;

	if ( ! pFnTimer_AnnounceNextRound )
		pFnTimer_AnnounceNextRound = (UFunction*) UObject::GObjObjects()->Data[ 113027 ];

	AKFGameInfo_VersusSurvival_execTimer_AnnounceNextRound_Parms Timer_AnnounceNextRound_Parms;

	this->ProcessEvent ( pFnTimer_AnnounceNextRound, &Timer_AnnounceNextRound_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ClosePostRoundMenu
// [0x00084002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ClosePostRoundMenu ( )
{
	static UFunction* pFnClosePostRoundMenu = NULL;

	if ( ! pFnClosePostRoundMenu )
		pFnClosePostRoundMenu = (UFunction*) UObject::GObjObjects()->Data[ 113024 ];

	AKFGameInfo_VersusSurvival_execClosePostRoundMenu_Parms ClosePostRoundMenu_Parms;

	this->ProcessEvent ( pFnClosePostRoundMenu, &ClosePostRoundMenu_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Reset
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 113022 ];

	AKFGameInfo_VersusSurvival_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.UpdateSecondRoundTeamScore
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::UpdateSecondRoundTeamScore ( )
{
	static UFunction* pFnUpdateSecondRoundTeamScore = NULL;

	if ( ! pFnUpdateSecondRoundTeamScore )
		pFnUpdateSecondRoundTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 113021 ];

	AKFGameInfo_VersusSurvival_execUpdateSecondRoundTeamScore_Parms UpdateSecondRoundTeamScore_Parms;

	this->ProcessEvent ( pFnUpdateSecondRoundTeamScore, &UpdateSecondRoundTeamScore_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.UpdateFirstRoundTeamScore
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::UpdateFirstRoundTeamScore ( )
{
	static UFunction* pFnUpdateFirstRoundTeamScore = NULL;

	if ( ! pFnUpdateFirstRoundTeamScore )
		pFnUpdateFirstRoundTeamScore = (UFunction*) UObject::GObjObjects()->Data[ 113020 ];

	AKFGameInfo_VersusSurvival_execUpdateFirstRoundTeamScore_Parms UpdateFirstRoundTeamScore_Parms;

	this->ProcessEvent ( pFnUpdateFirstRoundTeamScore, &UpdateFirstRoundTeamScore_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.OpenPostRoundMenu
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::OpenPostRoundMenu ( )
{
	static UFunction* pFnOpenPostRoundMenu = NULL;

	if ( ! pFnOpenPostRoundMenu )
		pFnOpenPostRoundMenu = (UFunction*) UObject::GObjObjects()->Data[ 113018 ];

	AKFGameInfo_VersusSurvival_execOpenPostRoundMenu_Parms OpenPostRoundMenu_Parms;

	this->ProcessEvent ( pFnOpenPostRoundMenu, &OpenPostRoundMenu_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ResetAllPickups
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ResetAllPickups ( )
{
	static UFunction* pFnResetAllPickups = NULL;

	if ( ! pFnResetAllPickups )
		pFnResetAllPickups = (UFunction*) UObject::GObjObjects()->Data[ 113017 ];

	AKFGameInfo_VersusSurvival_execResetAllPickups_Parms ResetAllPickups_Parms;

	this->ProcessEvent ( pFnResetAllPickups, &ResetAllPickups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CheckPawnsForGriefing
// [0x00084002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::CheckPawnsForGriefing ( )
{
	static UFunction* pFnCheckPawnsForGriefing = NULL;

	if ( ! pFnCheckPawnsForGriefing )
		pFnCheckPawnsForGriefing = (UFunction*) UObject::GObjObjects()->Data[ 113013 ];

	AKFGameInfo_VersusSurvival_execCheckPawnsForGriefing_Parms CheckPawnsForGriefing_Parms;

	this->ProcessEvent ( pFnCheckPawnsForGriefing, &CheckPawnsForGriefing_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BossDied
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::BossDied ( )
{
	static UFunction* pFnBossDied = NULL;

	if ( ! pFnBossDied )
		pFnBossDied = (UFunction*) UObject::GObjObjects()->Data[ 113010 ];

	AKFGameInfo_VersusSurvival_execBossDied_Parms BossDied_Parms;

	this->ProcessEvent ( pFnBossDied, &BossDied_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.WaveEnded
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::WaveEnded ( )
{
	static UFunction* pFnWaveEnded = NULL;

	if ( ! pFnWaveEnded )
		pFnWaveEnded = (UFunction*) UObject::GObjObjects()->Data[ 113004 ];

	AKFGameInfo_VersusSurvival_execWaveEnded_Parms WaveEnded_Parms;

	this->ProcessEvent ( pFnWaveEnded, &WaveEnded_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Killed
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::Killed ( )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 112999 ];

	AKFGameInfo_VersusSurvival_execKilled_Parms Killed_Parms;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.EndOfMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::EndOfMatch ( )
{
	static UFunction* pFnEndOfMatch = NULL;

	if ( ! pFnEndOfMatch )
		pFnEndOfMatch = (UFunction*) UObject::GObjObjects()->Data[ 112994 ];

	AKFGameInfo_VersusSurvival_execEndOfMatch_Parms EndOfMatch_Parms;

	this->ProcessEvent ( pFnEndOfMatch, &EndOfMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ScoreKill
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ScoreKill ( )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 112988 ];

	AKFGameInfo_VersusSurvival_execScoreKill_Parms ScoreKill_Parms;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ScoreDamage
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ScoreDamage ( )
{
	static UFunction* pFnScoreDamage = NULL;

	if ( ! pFnScoreDamage )
		pFnScoreDamage = (UFunction*) UObject::GObjObjects()->Data[ 112981 ];

	AKFGameInfo_VersusSurvival_execScoreDamage_Parms ScoreDamage_Parms;

	this->ProcessEvent ( pFnScoreDamage, &ScoreDamage_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ReduceDamage
// [0x00420002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ReduceDamage ( )
{
	static UFunction* pFnReduceDamage = NULL;

	if ( ! pFnReduceDamage )
		pFnReduceDamage = (UFunction*) UObject::GObjObjects()->Data[ 112970 ];

	AKFGameInfo_VersusSurvival_execReduceDamage_Parms ReduceDamage_Parms;

	this->ProcessEvent ( pFnReduceDamage, &ReduceDamage_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetLivingPlayerCount
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetLivingPlayerCount ( )
{
	static UFunction* pFnGetLivingPlayerCount = NULL;

	if ( ! pFnGetLivingPlayerCount )
		pFnGetLivingPlayerCount = (UFunction*) UObject::GObjObjects()->Data[ 111516 ];

	AKFGameInfo_VersusSurvival_execGetLivingPlayerCount_Parms GetLivingPlayerCount_Parms;

	this->ProcessEvent ( pFnGetLivingPlayerCount, &GetLivingPlayerCount_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetDefaultPlayerClass
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetDefaultPlayerClass ( )
{
	static UFunction* pFnGetDefaultPlayerClass = NULL;

	if ( ! pFnGetDefaultPlayerClass )
		pFnGetDefaultPlayerClass = (UFunction*) UObject::GObjObjects()->Data[ 112964 ];

	AKFGameInfo_VersusSurvival_execGetDefaultPlayerClass_Parms GetDefaultPlayerClass_Parms;

	this->ProcessEvent ( pFnGetDefaultPlayerClass, &GetDefaultPlayerClass_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetAIControlledMonsterAliveCount
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetAIControlledMonsterAliveCount ( )
{
	static UFunction* pFnGetAIControlledMonsterAliveCount = NULL;

	if ( ! pFnGetAIControlledMonsterAliveCount )
		pFnGetAIControlledMonsterAliveCount = (UFunction*) UObject::GObjObjects()->Data[ 112960 ];

	AKFGameInfo_VersusSurvival_execGetAIControlledMonsterAliveCount_Parms GetAIControlledMonsterAliveCount_Parms;

	this->ProcessEvent ( pFnGetAIControlledMonsterAliveCount, &GetAIControlledMonsterAliveCount_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SetPlayerDefaults
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::SetPlayerDefaults ( )
{
	static UFunction* pFnSetPlayerDefaults = NULL;

	if ( ! pFnSetPlayerDefaults )
		pFnSetPlayerDefaults = (UFunction*) UObject::GObjObjects()->Data[ 112957 ];

	AKFGameInfo_VersusSurvival_execSetPlayerDefaults_Parms SetPlayerDefaults_Parms;

	this->ProcessEvent ( pFnSetPlayerDefaults, &SetPlayerDefaults_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.RestartPlayer
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::RestartPlayer ( )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 112952 ];

	AKFGameInfo_VersusSurvival_execRestartPlayer_Parms RestartPlayer_Parms;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.Logout
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::Logout ( )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 112949 ];

	AKFGameInfo_VersusSurvival_execLogout_Parms Logout_Parms;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.OnWaitingPlayerTeamSwapped
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::OnWaitingPlayerTeamSwapped ( )
{
	static UFunction* pFnOnWaitingPlayerTeamSwapped = NULL;

	if ( ! pFnOnWaitingPlayerTeamSwapped )
		pFnOnWaitingPlayerTeamSwapped = (UFunction*) UObject::GObjObjects()->Data[ 112945 ];

	AKFGameInfo_VersusSurvival_execOnWaitingPlayerTeamSwapped_Parms OnWaitingPlayerTeamSwapped_Parms;

	this->ProcessEvent ( pFnOnWaitingPlayerTeamSwapped, &OnWaitingPlayerTeamSwapped_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_VersusSurvival::eventPostLogin ( )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 112943 ];

	AKFGameInfo_VersusSurvival_eventPostLogin_Parms PostLogin_Parms;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SetTeam
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::SetTeam ( )
{
	static UFunction* pFnSetTeam = NULL;

	if ( ! pFnSetTeam )
		pFnSetTeam = (UFunction*) UObject::GObjObjects()->Data[ 112938 ];

	AKFGameInfo_VersusSurvival_execSetTeam_Parms SetTeam_Parms;

	this->ProcessEvent ( pFnSetTeam, &SetTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ChangeTeam
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ChangeTeam ( )
{
	static UFunction* pFnChangeTeam = NULL;

	if ( ! pFnChangeTeam )
		pFnChangeTeam = (UFunction*) UObject::GObjObjects()->Data[ 112933 ];

	AKFGameInfo_VersusSurvival_execChangeTeam_Parms ChangeTeam_Parms;

	this->ProcessEvent ( pFnChangeTeam, &ChangeTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PickTeam
// [0x00420002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::PickTeam ( )
{
	static UFunction* pFnPickTeam = NULL;

	if ( ! pFnPickTeam )
		pFnPickTeam = (UFunction*) UObject::GObjObjects()->Data[ 112927 ];

	AKFGameInfo_VersusSurvival_execPickTeam_Parms PickTeam_Parms;

	this->ProcessEvent ( pFnPickTeam, &PickTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetReservedTotals
// [0x00C20002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetReservedTotals ( )
{
	static UFunction* pFnGetReservedTotals = NULL;

	if ( ! pFnGetReservedTotals )
		pFnGetReservedTotals = (UFunction*) UObject::GObjObjects()->Data[ 112922 ];

	AKFGameInfo_VersusSurvival_execGetReservedTotals_Parms GetReservedTotals_Parms;

	this->ProcessEvent ( pFnGetReservedTotals, &GetReservedTotals_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetPRIById
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetPRIById ( )
{
	static UFunction* pFnGetPRIById = NULL;

	if ( ! pFnGetPRIById )
		pFnGetPRIById = (UFunction*) UObject::GObjObjects()->Data[ 112918 ];

	AKFGameInfo_VersusSurvival_execGetPRIById_Parms GetPRIById_Parms;

	this->ProcessEvent ( pFnGetPRIById, &GetPRIById_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PickGroupTeam
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::PickGroupTeam ( )
{
	static UFunction* pFnPickGroupTeam = NULL;

	if ( ! pFnPickGroupTeam )
		pFnPickGroupTeam = (UFunction*) UObject::GObjObjects()->Data[ 112913 ];

	AKFGameInfo_VersusSurvival_execPickGroupTeam_Parms PickGroupTeam_Parms;

	this->ProcessEvent ( pFnPickGroupTeam, &PickGroupTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetPlayerGroup
// [0x00C24002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetPlayerGroup ( )
{
	static UFunction* pFnGetPlayerGroup = NULL;

	if ( ! pFnGetPlayerGroup )
		pFnGetPlayerGroup = (UFunction*) UObject::GObjObjects()->Data[ 112905 ];

	AKFGameInfo_VersusSurvival_execGetPlayerGroup_Parms GetPlayerGroup_Parms;

	this->ProcessEvent ( pFnGetPlayerGroup, &GetPlayerGroup_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.CreateTeam
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::CreateTeam ( )
{
	static UFunction* pFnCreateTeam = NULL;

	if ( ! pFnCreateTeam )
		pFnCreateTeam = (UFunction*) UObject::GObjObjects()->Data[ 112903 ];

	AKFGameInfo_VersusSurvival_execCreateTeam_Parms CreateTeam_Parms;

	this->ProcessEvent ( pFnCreateTeam, &CreateTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SwapTeamFor
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::SwapTeamFor ( )
{
	static UFunction* pFnSwapTeamFor = NULL;

	if ( ! pFnSwapTeamFor )
		pFnSwapTeamFor = (UFunction*) UObject::GObjObjects()->Data[ 112900 ];

	AKFGameInfo_VersusSurvival_execSwapTeamFor_Parms SwapTeamFor_Parms;

	this->ProcessEvent ( pFnSwapTeamFor, &SwapTeamFor_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BalanceTeamsOld
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::BalanceTeamsOld ( )
{
	static UFunction* pFnBalanceTeamsOld = NULL;

	if ( ! pFnBalanceTeamsOld )
		pFnBalanceTeamsOld = (UFunction*) UObject::GObjObjects()->Data[ 112892 ];

	AKFGameInfo_VersusSurvival_execBalanceTeamsOld_Parms BalanceTeamsOld_Parms;

	this->ProcessEvent ( pFnBalanceTeamsOld, &BalanceTeamsOld_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BalanceTeams
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::BalanceTeams ( )
{
	static UFunction* pFnBalanceTeams = NULL;

	if ( ! pFnBalanceTeams )
		pFnBalanceTeams = (UFunction*) UObject::GObjObjects()->Data[ 112885 ];

	AKFGameInfo_VersusSurvival_execBalanceTeams_Parms BalanceTeams_Parms;

	this->ProcessEvent ( pFnBalanceTeams, &BalanceTeams_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.BalanceSingles
// [0x00424002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::BalanceSingles ( )
{
	static UFunction* pFnBalanceSingles = NULL;

	if ( ! pFnBalanceSingles )
		pFnBalanceSingles = (UFunction*) UObject::GObjObjects()->Data[ 112876 ];

	AKFGameInfo_VersusSurvival_execBalanceSingles_Parms BalanceSingles_Parms;

	this->ProcessEvent ( pFnBalanceSingles, &BalanceSingles_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsLegal
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::IsLegal ( )
{
	static UFunction* pFnIsLegal = NULL;

	if ( ! pFnIsLegal )
		pFnIsLegal = (UFunction*) UObject::GObjObjects()->Data[ 112874 ];

	AKFGameInfo_VersusSurvival_execIsLegal_Parms IsLegal_Parms;

	this->ProcessEvent ( pFnIsLegal, &IsLegal_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsBalanceable
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::IsBalanceable ( )
{
	static UFunction* pFnIsBalanceable = NULL;

	if ( ! pFnIsBalanceable )
		pFnIsBalanceable = (UFunction*) UObject::GObjObjects()->Data[ 112869 ];

	AKFGameInfo_VersusSurvival_execIsBalanceable_Parms IsBalanceable_Parms;

	this->ProcessEvent ( pFnIsBalanceable, &IsBalanceable_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.GetDelta
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::GetDelta ( )
{
	static UFunction* pFnGetDelta = NULL;

	if ( ! pFnGetDelta )
		pFnGetDelta = (UFunction*) UObject::GObjObjects()->Data[ 112867 ];

	AKFGameInfo_VersusSurvival_execGetDelta_Parms GetDelta_Parms;

	this->ProcessEvent ( pFnGetDelta, &GetDelta_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SplitGroups
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::SplitGroups ( )
{
	static UFunction* pFnSplitGroups = NULL;

	if ( ! pFnSplitGroups )
		pFnSplitGroups = (UFunction*) UObject::GObjObjects()->Data[ 112863 ];

	AKFGameInfo_VersusSurvival_execSplitGroups_Parms SplitGroups_Parms;

	this->ProcessEvent ( pFnSplitGroups, &SplitGroups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.SplitArrayByTeam
// [0x00C20002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::SplitArrayByTeam ( )
{
	static UFunction* pFnSplitArrayByTeam = NULL;

	if ( ! pFnSplitArrayByTeam )
		pFnSplitArrayByTeam = (UFunction*) UObject::GObjObjects()->Data[ 112857 ];

	AKFGameInfo_VersusSurvival_execSplitArrayByTeam_Parms SplitArrayByTeam_Parms;

	this->ProcessEvent ( pFnSplitArrayByTeam, &SplitArrayByTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.StripAbsentPlayers
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::StripAbsentPlayers ( )
{
	static UFunction* pFnStripAbsentPlayers = NULL;

	if ( ! pFnStripAbsentPlayers )
		pFnStripAbsentPlayers = (UFunction*) UObject::GObjObjects()->Data[ 112853 ];

	AKFGameInfo_VersusSurvival_execStripAbsentPlayers_Parms StripAbsentPlayers_Parms;

	this->ProcessEvent ( pFnStripAbsentPlayers, &StripAbsentPlayers_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.ShouldStartMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::ShouldStartMatch ( )
{
	static UFunction* pFnShouldStartMatch = NULL;

	if ( ! pFnShouldStartMatch )
		pFnShouldStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 112851 ];

	AKFGameInfo_VersusSurvival_execShouldStartMatch_Parms ShouldStartMatch_Parms;

	this->ProcessEvent ( pFnShouldStartMatch, &ShouldStartMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.StartMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 112847 ];

	AKFGameInfo_VersusSurvival_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.IsPlayerReady
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::IsPlayerReady ( )
{
	static UFunction* pFnIsPlayerReady = NULL;

	if ( ! pFnIsPlayerReady )
		pFnIsPlayerReady = (UFunction*) UObject::GObjObjects()->Data[ 112844 ];

	AKFGameInfo_VersusSurvival_execIsPlayerReady_Parms IsPlayerReady_Parms;

	this->ProcessEvent ( pFnIsPlayerReady, &IsPlayerReady_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.InitGRIVariables
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_VersusSurvival::InitGRIVariables ( )
{
	static UFunction* pFnInitGRIVariables = NULL;

	if ( ! pFnInitGRIVariables )
		pFnInitGRIVariables = (UFunction*) UObject::GObjObjects()->Data[ 112843 ];

	AKFGameInfo_VersusSurvival_execInitGRIVariables_Parms InitGRIVariables_Parms;

	this->ProcessEvent ( pFnInitGRIVariables, &InitGRIVariables_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_VersusSurvival.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_VersusSurvival::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 112842 ];

	AKFGameInfo_VersusSurvival_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.DebugKillZeds
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::DebugKillZeds ( )
{
	static UFunction* pFnDebugKillZeds = NULL;

	if ( ! pFnDebugKillZeds )
		pFnDebugKillZeds = (UFunction*) UObject::GObjObjects()->Data[ 112663 ];

	AKFGameInfo_Survival_execDebugKillZeds_Parms DebugKillZeds_Parms;

	this->ProcessEvent ( pFnDebugKillZeds, &DebugKillZeds_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.TryRestartGame
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::TryRestartGame ( )
{
	static UFunction* pFnTryRestartGame = NULL;

	if ( ! pFnTryRestartGame )
		pFnTryRestartGame = (UFunction*) UObject::GObjObjects()->Data[ 112653 ];

	AKFGameInfo_Survival_execTryRestartGame_Parms TryRestartGame_Parms;

	this->ProcessEvent ( pFnTryRestartGame, &TryRestartGame_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.UpdateCurrentMapVoteTime
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_Survival::UpdateCurrentMapVoteTime ( )
{
	static UFunction* pFnUpdateCurrentMapVoteTime = NULL;

	if ( ! pFnUpdateCurrentMapVoteTime )
		pFnUpdateCurrentMapVoteTime = (UFunction*) UObject::GObjObjects()->Data[ 112650 ];

	AKFGameInfo_Survival_execUpdateCurrentMapVoteTime_Parms UpdateCurrentMapVoteTime_Parms;

	this->ProcessEvent ( pFnUpdateCurrentMapVoteTime, &UpdateCurrentMapVoteTime_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ProcessAwards
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::ProcessAwards ( )
{
	static UFunction* pFnProcessAwards = NULL;

	if ( ! pFnProcessAwards )
		pFnProcessAwards = (UFunction*) UObject::GObjObjects()->Data[ 112649 ];

	AKFGameInfo_Survival_execProcessAwards_Parms ProcessAwards_Parms;

	this->ProcessEvent ( pFnProcessAwards, &ProcessAwards_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.GetEndOfMatchTime
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::GetEndOfMatchTime ( )
{
	static UFunction* pFnGetEndOfMatchTime = NULL;

	if ( ! pFnGetEndOfMatchTime )
		pFnGetEndOfMatchTime = (UFunction*) UObject::GObjObjects()->Data[ 112647 ];

	AKFGameInfo_Survival_execGetEndOfMatchTime_Parms GetEndOfMatchTime_Parms;

	this->ProcessEvent ( pFnGetEndOfMatchTime, &GetEndOfMatchTime_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ShowPostGameMenu
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::ShowPostGameMenu ( )
{
	static UFunction* pFnShowPostGameMenu = NULL;

	if ( ! pFnShowPostGameMenu )
		pFnShowPostGameMenu = (UFunction*) UObject::GObjObjects()->Data[ 112645 ];

	AKFGameInfo_Survival_execShowPostGameMenu_Parms ShowPostGameMenu_Parms;

	this->ProcessEvent ( pFnShowPostGameMenu, &ShowPostGameMenu_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.SetZedsToVictoryState
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::SetZedsToVictoryState ( )
{
	static UFunction* pFnSetZedsToVictoryState = NULL;

	if ( ! pFnSetZedsToVictoryState )
		pFnSetZedsToVictoryState = (UFunction*) UObject::GObjObjects()->Data[ 112643 ];

	AKFGameInfo_Survival_execSetZedsToVictoryState_Parms SetZedsToVictoryState_Parms;

	this->ProcessEvent ( pFnSetZedsToVictoryState, &SetZedsToVictoryState_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.SetWonGameCamera
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::SetWonGameCamera ( )
{
	static UFunction* pFnSetWonGameCamera = NULL;

	if ( ! pFnSetWonGameCamera )
		pFnSetWonGameCamera = (UFunction*) UObject::GObjObjects()->Data[ 112641 ];

	AKFGameInfo_Survival_execSetWonGameCamera_Parms SetWonGameCamera_Parms;

	this->ProcessEvent ( pFnSetWonGameCamera, &SetWonGameCamera_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.GetNextMap
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::GetNextMap ( )
{
	static UFunction* pFnGetNextMap = NULL;

	if ( ! pFnGetNextMap )
		pFnGetNextMap = (UFunction*) UObject::GObjObjects()->Data[ 112637 ];

	AKFGameInfo_Survival_execGetNextMap_Parms GetNextMap_Parms;

	this->ProcessEvent ( pFnGetNextMap, &GetNextMap_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.EndOfMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::EndOfMatch ( )
{
	static UFunction* pFnEndOfMatch = NULL;

	if ( ! pFnEndOfMatch )
		pFnEndOfMatch = (UFunction*) UObject::GObjObjects()->Data[ 112634 ];

	AKFGameInfo_Survival_execEndOfMatch_Parms EndOfMatch_Parms;

	this->ProcessEvent ( pFnEndOfMatch, &EndOfMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.NotifyTraderOpened
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::NotifyTraderOpened ( )
{
	static UFunction* pFnNotifyTraderOpened = NULL;

	if ( ! pFnNotifyTraderOpened )
		pFnNotifyTraderOpened = (UFunction*) UObject::GObjObjects()->Data[ 112622 ];

	AKFGameInfo_Survival_execNotifyTraderOpened_Parms NotifyTraderOpened_Parms;

	this->ProcessEvent ( pFnNotifyTraderOpened, &NotifyTraderOpened_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.OpenTrader
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::OpenTrader ( )
{
	static UFunction* pFnOpenTrader = NULL;

	if ( ! pFnOpenTrader )
		pFnOpenTrader = (UFunction*) UObject::GObjObjects()->Data[ 112606 ];

	AKFGameInfo_Survival_execOpenTrader_Parms OpenTrader_Parms;

	this->ProcessEvent ( pFnOpenTrader, &OpenTrader_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.DoTraderTimeCleanup
// [0x00020000] 
// Parameters infos:

void AKFGameInfo_Survival::DoTraderTimeCleanup ( )
{
	static UFunction* pFnDoTraderTimeCleanup = NULL;

	if ( ! pFnDoTraderTimeCleanup )
		pFnDoTraderTimeCleanup = (UFunction*) UObject::GObjObjects()->Data[ 112605 ];

	AKFGameInfo_Survival_execDoTraderTimeCleanup_Parms DoTraderTimeCleanup_Parms;

	this->ProcessEvent ( pFnDoTraderTimeCleanup, &DoTraderTimeCleanup_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.CloseTraderTimer
// [0x00020000] 
// Parameters infos:

void AKFGameInfo_Survival::CloseTraderTimer ( )
{
	static UFunction* pFnCloseTraderTimer = NULL;

	if ( ! pFnCloseTraderTimer )
		pFnCloseTraderTimer = (UFunction*) UObject::GObjObjects()->Data[ 112604 ];

	AKFGameInfo_Survival_execCloseTraderTimer_Parms CloseTraderTimer_Parms;

	this->ProcessEvent ( pFnCloseTraderTimer, &CloseTraderTimer_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.LogWaveEndAnalyticsFor
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::LogWaveEndAnalyticsFor ( )
{
	static UFunction* pFnLogWaveEndAnalyticsFor = NULL;

	if ( ! pFnLogWaveEndAnalyticsFor )
		pFnLogWaveEndAnalyticsFor = (UFunction*) UObject::GObjObjects()->Data[ 112599 ];

	AKFGameInfo_Survival_execLogWaveEndAnalyticsFor_Parms LogWaveEndAnalyticsFor_Parms;

	this->ProcessEvent ( pFnLogWaveEndAnalyticsFor, &LogWaveEndAnalyticsFor_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.Timer_FinalizeEndOfWaveStats
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::Timer_FinalizeEndOfWaveStats ( )
{
	static UFunction* pFnTimer_FinalizeEndOfWaveStats = NULL;

	if ( ! pFnTimer_FinalizeEndOfWaveStats )
		pFnTimer_FinalizeEndOfWaveStats = (UFunction*) UObject::GObjObjects()->Data[ 112596 ];

	AKFGameInfo_Survival_execTimer_FinalizeEndOfWaveStats_Parms Timer_FinalizeEndOfWaveStats_Parms;

	this->ProcessEvent ( pFnTimer_FinalizeEndOfWaveStats, &Timer_FinalizeEndOfWaveStats_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.WaveEnded
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::WaveEnded ( )
{
	static UFunction* pFnWaveEnded = NULL;

	if ( ! pFnWaveEnded )
		pFnWaveEnded = (UFunction*) UObject::GObjObjects()->Data[ 112587 ];

	AKFGameInfo_Survival_execWaveEnded_Parms WaveEnded_Parms;

	this->ProcessEvent ( pFnWaveEnded, &WaveEnded_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.CheckWaveEnd
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_Survival::CheckWaveEnd ( )
{
	static UFunction* pFnCheckWaveEnd = NULL;

	if ( ! pFnCheckWaveEnd )
		pFnCheckWaveEnd = (UFunction*) UObject::GObjObjects()->Data[ 112585 ];

	AKFGameInfo_Survival_execCheckWaveEnd_Parms CheckWaveEnd_Parms;

	this->ProcessEvent ( pFnCheckWaveEnd, &CheckWaveEnd_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.WaveStarted
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::WaveStarted ( )
{
	static UFunction* pFnWaveStarted = NULL;

	if ( ! pFnWaveStarted )
		pFnWaveStarted = (UFunction*) UObject::GObjObjects()->Data[ 112576 ];

	AKFGameInfo_Survival_execWaveStarted_Parms WaveStarted_Parms;

	this->ProcessEvent ( pFnWaveStarted, &WaveStarted_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.DetermineNextTraderIndex
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::DetermineNextTraderIndex ( )
{
	static UFunction* pFnDetermineNextTraderIndex = NULL;

	if ( ! pFnDetermineNextTraderIndex )
		pFnDetermineNextTraderIndex = (UFunction*) UObject::GObjObjects()->Data[ 112573 ];

	AKFGameInfo_Survival_execDetermineNextTraderIndex_Parms DetermineNextTraderIndex_Parms;

	this->ProcessEvent ( pFnDetermineNextTraderIndex, &DetermineNextTraderIndex_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.SetupNextTrader
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::SetupNextTrader ( )
{
	static UFunction* pFnSetupNextTrader = NULL;

	if ( ! pFnSetupNextTrader )
		pFnSetupNextTrader = (UFunction*) UObject::GObjObjects()->Data[ 112571 ];

	AKFGameInfo_Survival_execSetupNextTrader_Parms SetupNextTrader_Parms;

	this->ProcessEvent ( pFnSetupNextTrader, &SetupNextTrader_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ResetPickups
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::ResetPickups ( )
{
	static UFunction* pFnResetPickups = NULL;

	if ( ! pFnResetPickups )
		pFnResetPickups = (UFunction*) UObject::GObjObjects()->Data[ 112567 ];

	AKFGameInfo_Survival_execResetPickups_Parms ResetPickups_Parms;

	this->ProcessEvent ( pFnResetPickups, &ResetPickups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ResetAllPickups
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::ResetAllPickups ( )
{
	static UFunction* pFnResetAllPickups = NULL;

	if ( ! pFnResetAllPickups )
		pFnResetAllPickups = (UFunction*) UObject::GObjObjects()->Data[ 112566 ];

	AKFGameInfo_Survival_execResetAllPickups_Parms ResetAllPickups_Parms;

	this->ProcessEvent ( pFnResetAllPickups, &ResetAllPickups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.StartWave
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::StartWave ( )
{
	static UFunction* pFnStartWave = NULL;

	if ( ! pFnStartWave )
		pFnStartWave = (UFunction*) UObject::GObjObjects()->Data[ 112565 ];

	AKFGameInfo_Survival_execStartWave_Parms StartWave_Parms;

	this->ProcessEvent ( pFnStartWave, &StartWave_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.IsWaveActive
// [0x00020000] 
// Parameters infos:

void AKFGameInfo_Survival::IsWaveActive ( )
{
	static UFunction* pFnIsWaveActive = NULL;

	if ( ! pFnIsWaveActive )
		pFnIsWaveActive = (UFunction*) UObject::GObjObjects()->Data[ 111514 ];

	AKFGameInfo_Survival_execIsWaveActive_Parms IsWaveActive_Parms;

	this->ProcessEvent ( pFnIsWaveActive, &IsWaveActive_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.WinMatch
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AKFGameInfo_Survival::WinMatch ( )
{
	static UFunction* pFnWinMatch = NULL;

	if ( ! pFnWinMatch )
		pFnWinMatch = (UFunction*) UObject::GObjObjects()->Data[ 112559 ];

	AKFGameInfo_Survival_execWinMatch_Parms WinMatch_Parms;

	this->ProcessEvent ( pFnWinMatch, &WinMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.SetWave
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AKFGameInfo_Survival::SetWave ( )
{
	static UFunction* pFnSetWave = NULL;

	if ( ! pFnSetWave )
		pFnSetWave = (UFunction*) UObject::GObjObjects()->Data[ 112557 ];

	AKFGameInfo_Survival_execSetWave_Parms SetWave_Parms;

	this->ProcessEvent ( pFnSetWave, &SetWave_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.EndCurrentWave
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AKFGameInfo_Survival::EndCurrentWave ( )
{
	static UFunction* pFnEndCurrentWave = NULL;

	if ( ! pFnEndCurrentWave )
		pFnEndCurrentWave = (UFunction*) UObject::GObjObjects()->Data[ 112556 ];

	AKFGameInfo_Survival_execEndCurrentWave_Parms EndCurrentWave_Parms;

	this->ProcessEvent ( pFnEndCurrentWave, &EndCurrentWave_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ToggleSpawning
// [0x00024202] ( FUNC_Exec )
// Parameters infos:

void AKFGameInfo_Survival::ToggleSpawning ( )
{
	static UFunction* pFnToggleSpawning = NULL;

	if ( ! pFnToggleSpawning )
		pFnToggleSpawning = (UFunction*) UObject::GObjObjects()->Data[ 112554 ];

	AKFGameInfo_Survival_execToggleSpawning_Parms ToggleSpawning_Parms;

	this->ProcessEvent ( pFnToggleSpawning, &ToggleSpawning_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.AllowWaveCheats
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::AllowWaveCheats ( )
{
	static UFunction* pFnAllowWaveCheats = NULL;

	if ( ! pFnAllowWaveCheats )
		pFnAllowWaveCheats = (UFunction*) UObject::GObjObjects()->Data[ 112552 ];

	AKFGameInfo_Survival_execAllowWaveCheats_Parms AllowWaveCheats_Parms;

	this->ProcessEvent ( pFnAllowWaveCheats, &AllowWaveCheats_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.GetAdjustedDeathPenalty
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_Survival::GetAdjustedDeathPenalty ( )
{
	static UFunction* pFnGetAdjustedDeathPenalty = NULL;

	if ( ! pFnGetAdjustedDeathPenalty )
		pFnGetAdjustedDeathPenalty = (UFunction*) UObject::GObjObjects()->Data[ 112545 ];

	AKFGameInfo_Survival_execGetAdjustedDeathPenalty_Parms GetAdjustedDeathPenalty_Parms;

	this->ProcessEvent ( pFnGetAdjustedDeathPenalty, &GetAdjustedDeathPenalty_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.RewardSurvivingPlayers
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::RewardSurvivingPlayers ( )
{
	static UFunction* pFnRewardSurvivingPlayers = NULL;

	if ( ! pFnRewardSurvivingPlayers )
		pFnRewardSurvivingPlayers = (UFunction*) UObject::GObjObjects()->Data[ 112540 ];

	AKFGameInfo_Survival_execRewardSurvivingPlayers_Parms RewardSurvivingPlayers_Parms;

	this->ProcessEvent ( pFnRewardSurvivingPlayers, &RewardSurvivingPlayers_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.UpdateWaveEndDialogInfo
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::UpdateWaveEndDialogInfo ( )
{
	static UFunction* pFnUpdateWaveEndDialogInfo = NULL;

	if ( ! pFnUpdateWaveEndDialogInfo )
		pFnUpdateWaveEndDialogInfo = (UFunction*) UObject::GObjObjects()->Data[ 112530 ];

	AKFGameInfo_Survival_execUpdateWaveEndDialogInfo_Parms UpdateWaveEndDialogInfo_Parms;

	this->ProcessEvent ( pFnUpdateWaveEndDialogInfo, &UpdateWaveEndDialogInfo_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.IsMultiplayerGame
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::IsMultiplayerGame ( )
{
	static UFunction* pFnIsMultiplayerGame = NULL;

	if ( ! pFnIsMultiplayerGame )
		pFnIsMultiplayerGame = (UFunction*) UObject::GObjObjects()->Data[ 112528 ];

	AKFGameInfo_Survival_execIsMultiplayerGame_Parms IsMultiplayerGame_Parms;

	this->ProcessEvent ( pFnIsMultiplayerGame, &IsMultiplayerGame_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.Timer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_Survival::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 112527 ];

	AKFGameInfo_Survival_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.CanSpectate
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::CanSpectate ( )
{
	static UFunction* pFnCanSpectate = NULL;

	if ( ! pFnCanSpectate )
		pFnCanSpectate = (UFunction*) UObject::GObjObjects()->Data[ 112523 ];

	AKFGameInfo_Survival_execCanSpectate_Parms CanSpectate_Parms;

	this->ProcessEvent ( pFnCanSpectate, &CanSpectate_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.UpdateGameSettings
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::UpdateGameSettings ( )
{
	static UFunction* pFnUpdateGameSettings = NULL;

	if ( ! pFnUpdateGameSettings )
		pFnUpdateGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 112517 ];

	AKFGameInfo_Survival_execUpdateGameSettings_Parms UpdateGameSettings_Parms;

	this->ProcessEvent ( pFnUpdateGameSettings, &UpdateGameSettings_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.BossDied
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_Survival::BossDied ( )
{
	static UFunction* pFnBossDied = NULL;

	if ( ! pFnBossDied )
		pFnBossDied = (UFunction*) UObject::GObjObjects()->Data[ 112511 ];

	AKFGameInfo_Survival_execBossDied_Parms BossDied_Parms;

	this->ProcessEvent ( pFnBossDied, &BossDied_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ReduceDamage
// [0x00420002] 
// Parameters infos:

void AKFGameInfo_Survival::ReduceDamage ( )
{
	static UFunction* pFnReduceDamage = NULL;

	if ( ! pFnReduceDamage )
		pFnReduceDamage = (UFunction*) UObject::GObjObjects()->Data[ 112502 ];

	AKFGameInfo_Survival_execReduceDamage_Parms ReduceDamage_Parms;

	this->ProcessEvent ( pFnReduceDamage, &ReduceDamage_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.Killed
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::Killed ( )
{
	static UFunction* pFnKilled = NULL;

	if ( ! pFnKilled )
		pFnKilled = (UFunction*) UObject::GObjObjects()->Data[ 112497 ];

	AKFGameInfo_Survival_execKilled_Parms Killed_Parms;

	this->ProcessEvent ( pFnKilled, &Killed_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.RestartPlayer
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::RestartPlayer ( )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 112492 ];

	AKFGameInfo_Survival_execRestartPlayer_Parms RestartPlayer_Parms;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.PlayerCanRestart
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::PlayerCanRestart ( )
{
	static UFunction* pFnPlayerCanRestart = NULL;

	if ( ! pFnPlayerCanRestart )
		pFnPlayerCanRestart = (UFunction*) UObject::GObjObjects()->Data[ 112489 ];

	AKFGameInfo_Survival_execPlayerCanRestart_Parms PlayerCanRestart_Parms;

	this->ProcessEvent ( pFnPlayerCanRestart, &PlayerCanRestart_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.IsPlayerReady
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::IsPlayerReady ( )
{
	static UFunction* pFnIsPlayerReady = NULL;

	if ( ! pFnIsPlayerReady )
		pFnIsPlayerReady = (UFunction*) UObject::GObjObjects()->Data[ 112485 ];

	AKFGameInfo_Survival_execIsPlayerReady_Parms IsPlayerReady_Parms;

	this->ProcessEvent ( pFnIsPlayerReady, &IsPlayerReady_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.GetGameIntensityForMusic
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::GetGameIntensityForMusic ( )
{
	static UFunction* pFnGetGameIntensityForMusic = NULL;

	if ( ! pFnGetGameIntensityForMusic )
		pFnGetGameIntensityForMusic = (UFunction*) UObject::GObjObjects()->Data[ 112483 ];

	AKFGameInfo_Survival_execGetGameIntensityForMusic_Parms GetGameIntensityForMusic_Parms;

	this->ProcessEvent ( pFnGetGameIntensityForMusic, &GetGameIntensityForMusic_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.PlayWaveStartDialog
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::PlayWaveStartDialog ( )
{
	static UFunction* pFnPlayWaveStartDialog = NULL;

	if ( ! pFnPlayWaveStartDialog )
		pFnPlayWaveStartDialog = (UFunction*) UObject::GObjObjects()->Data[ 112482 ];

	AKFGameInfo_Survival_execPlayWaveStartDialog_Parms PlayWaveStartDialog_Parms;

	this->ProcessEvent ( pFnPlayWaveStartDialog, &PlayWaveStartDialog_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.StartMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 112480 ];

	AKFGameInfo_Survival_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.InitSpawnManager
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Survival::InitSpawnManager ( )
{
	static UFunction* pFnInitSpawnManager = NULL;

	if ( ! pFnInitSpawnManager )
		pFnInitSpawnManager = (UFunction*) UObject::GObjObjects()->Data[ 112479 ];

	AKFGameInfo_Survival_execInitSpawnManager_Parms InitSpawnManager_Parms;

	this->ProcessEvent ( pFnInitSpawnManager, &InitSpawnManager_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_Survival::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 112478 ];

	AKFGameInfo_Survival_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_Survival::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 112477 ];

	AKFGameInfo_Survival_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ShouldPlayActionMusicTrack
// [0x00022002] 
// Parameters infos:

void AKFGameInfo_Survival::ShouldPlayActionMusicTrack ( )
{
	static UFunction* pFnShouldPlayActionMusicTrack = NULL;

	if ( ! pFnShouldPlayActionMusicTrack )
		pFnShouldPlayActionMusicTrack = (UFunction*) UObject::GObjObjects()->Data[ 112474 ];

	AKFGameInfo_Survival_execShouldPlayActionMusicTrack_Parms ShouldPlayActionMusicTrack_Parms;

	this->ProcessEvent ( pFnShouldPlayActionMusicTrack, &ShouldPlayActionMusicTrack_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Survival.ShouldPlayMusicAtStart
// [0x00022002] 
// Parameters infos:

void AKFGameInfo_Survival::ShouldPlayMusicAtStart ( )
{
	static UFunction* pFnShouldPlayMusicAtStart = NULL;

	if ( ! pFnShouldPlayMusicAtStart )
		pFnShouldPlayMusicAtStart = (UFunction*) UObject::GObjObjects()->Data[ 112472 ];

	AKFGameInfo_Survival_execShouldPlayMusicAtStart_Parms ShouldPlayMusicAtStart_Parms;

	this->ProcessEvent ( pFnShouldPlayMusicAtStart, &ShouldPlayMusicAtStart_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.OnStackingAfflictionChanged
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedScrake::OnStackingAfflictionChanged ( )
{
	static UFunction* pFnOnStackingAfflictionChanged = NULL;

	if ( ! pFnOnStackingAfflictionChanged )
		pFnOnStackingAfflictionChanged = (UFunction*) UObject::GObjObjects()->Data[ 115998 ];

	AKFPawn_ZedScrake_execOnStackingAfflictionChanged_Parms OnStackingAfflictionChanged_Parms;

	this->ProcessEvent ( pFnOnStackingAfflictionChanged, &OnStackingAfflictionChanged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.SetSprinting
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedScrake::SetSprinting ( )
{
	static UFunction* pFnSetSprinting = NULL;

	if ( ! pFnSetSprinting )
		pFnSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 115996 ];

	AKFPawn_ZedScrake_execSetSprinting_Parms SetSprinting_Parms;

	this->ProcessEvent ( pFnSetSprinting, &SetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedScrake::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 115994 ];

	AKFPawn_ZedScrake_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedScrake::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 115992 ];

	AKFPawn_ZedScrake_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.CleanupChainsaw
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedScrake::CleanupChainsaw ( )
{
	static UFunction* pFnCleanupChainsaw = NULL;

	if ( ! pFnCleanupChainsaw )
		pFnCleanupChainsaw = (UFunction*) UObject::GObjObjects()->Data[ 115990 ];

	AKFPawn_ZedScrake_execCleanupChainsaw_Parms CleanupChainsaw_Parms;

	this->ProcessEvent ( pFnCleanupChainsaw, &CleanupChainsaw_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.TerminateEffectsOnDeath
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedScrake::TerminateEffectsOnDeath ( )
{
	static UFunction* pFnTerminateEffectsOnDeath = NULL;

	if ( ! pFnTerminateEffectsOnDeath )
		pFnTerminateEffectsOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 115989 ];

	AKFPawn_ZedScrake_execTerminateEffectsOnDeath_Parms TerminateEffectsOnDeath_Parms;

	this->ProcessEvent ( pFnTerminateEffectsOnDeath, &TerminateEffectsOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.NotifyGoreMeshActive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedScrake::eventNotifyGoreMeshActive ( )
{
	static UFunction* pFnNotifyGoreMeshActive = NULL;

	if ( ! pFnNotifyGoreMeshActive )
		pFnNotifyGoreMeshActive = (UFunction*) UObject::GObjObjects()->Data[ 115988 ];

	AKFPawn_ZedScrake_eventNotifyGoreMeshActive_Parms NotifyGoreMeshActive_Parms;

	this->ProcessEvent ( pFnNotifyGoreMeshActive, &NotifyGoreMeshActive_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.CauseHeadTrauma
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedScrake::CauseHeadTrauma ( )
{
	static UFunction* pFnCauseHeadTrauma = NULL;

	if ( ! pFnCauseHeadTrauma )
		pFnCauseHeadTrauma = (UFunction*) UObject::GObjObjects()->Data[ 115986 ];

	AKFPawn_ZedScrake_execCauseHeadTrauma_Parms CauseHeadTrauma_Parms;

	this->ProcessEvent ( pFnCauseHeadTrauma, &CauseHeadTrauma_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.CanBlock
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedScrake::CanBlock ( )
{
	static UFunction* pFnCanBlock = NULL;

	if ( ! pFnCanBlock )
		pFnCanBlock = (UFunction*) UObject::GObjObjects()->Data[ 115984 ];

	AKFPawn_ZedScrake_execCanBlock_Parms CanBlock_Parms;

	this->ProcessEvent ( pFnCanBlock, &CanBlock_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.SetEnraged
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedScrake::SetEnraged ( )
{
	static UFunction* pFnSetEnraged = NULL;

	if ( ! pFnSetEnraged )
		pFnSetEnraged = (UFunction*) UObject::GObjObjects()->Data[ 115982 ];

	AKFPawn_ZedScrake_execSetEnraged_Parms SetEnraged_Parms;

	this->ProcessEvent ( pFnSetEnraged, &SetEnraged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedScrake::eventTakeDamage ( )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 115974 ];

	AKFPawn_ZedScrake_eventTakeDamage_Parms TakeDamage_Parms;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.CreateExhaustFx
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedScrake::CreateExhaustFx ( )
{
	static UFunction* pFnCreateExhaustFx = NULL;

	if ( ! pFnCreateExhaustFx )
		pFnCreateExhaustFx = (UFunction*) UObject::GObjObjects()->Data[ 115971 ];

	AKFPawn_ZedScrake_execCreateExhaustFx_Parms CreateExhaustFx_Parms;

	this->ProcessEvent ( pFnCreateExhaustFx, &CreateExhaustFx_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.PossessedBy
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedScrake::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 115967 ];

	AKFPawn_ZedScrake_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.SetCharacterArch
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedScrake::SetCharacterArch ( )
{
	static UFunction* pFnSetCharacterArch = NULL;

	if ( ! pFnSetCharacterArch )
		pFnSetCharacterArch = (UFunction*) UObject::GObjObjects()->Data[ 115964 ];

	AKFPawn_ZedScrake_execSetCharacterArch_Parms SetCharacterArch_Parms;

	this->ProcessEvent ( pFnSetCharacterArch, &SetCharacterArch_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedScrake::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 115963 ];

	AKFPawn_ZedScrake_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFCollectibleActor.Reset
// [0x00020100] 
// Parameters infos:

void AKFCollectibleActor::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 111543 ];

	AKFCollectibleActor_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFCollectibleActor.AdjustDamage
// [0x00420002] 
// Parameters infos:

void AKFCollectibleActor::AdjustDamage ( )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 111539 ];

	AKFCollectibleActor_execAdjustDamage_Parms AdjustDamage_Parms;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );
};

// Function kfgamecontent.KFCollectibleActor.TriggerDestroyedEvent
// [0x00080802] ( FUNC_Event )
// Parameters infos:

void AKFCollectibleActor::eventTriggerDestroyedEvent ( )
{
	static UFunction* pFnTriggerDestroyedEvent = NULL;

	if ( ! pFnTriggerDestroyedEvent )
		pFnTriggerDestroyedEvent = (UFunction*) UObject::GObjObjects()->Data[ 111536 ];

	AKFCollectibleActor_eventTriggerDestroyedEvent_Parms TriggerDestroyedEvent_Parms;

	this->ProcessEvent ( pFnTriggerDestroyedEvent, &TriggerDestroyedEvent_Parms, NULL );
};

// Function kfgamecontent.KFDifficulty_Bloat.GetPukeMinesToSpawnOnDeath
// [0x00022002] 
// Parameters infos:

void UKFDifficulty_Bloat::GetPukeMinesToSpawnOnDeath ( )
{
	static UFunction* pFnGetPukeMinesToSpawnOnDeath = NULL;

	if ( ! pFnGetPukeMinesToSpawnOnDeath )
		pFnGetPukeMinesToSpawnOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 111554 ];

	UKFDifficulty_Bloat_execGetPukeMinesToSpawnOnDeath_Parms GetPukeMinesToSpawnOnDeath_Parms;

	this->ProcessEvent ( pFnGetPukeMinesToSpawnOnDeath, &GetPukeMinesToSpawnOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedBloat::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 114205 ];

	AKFPawn_ZedBloat_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.SpawnPukeMinesOnDeath
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedBloat::SpawnPukeMinesOnDeath ( )
{
	static UFunction* pFnSpawnPukeMinesOnDeath = NULL;

	if ( ! pFnSpawnPukeMinesOnDeath )
		pFnSpawnPukeMinesOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 114203 ];

	AKFPawn_ZedBloat_execSpawnPukeMinesOnDeath_Parms SpawnPukeMinesOnDeath_Parms;

	this->ProcessEvent ( pFnSpawnPukeMinesOnDeath, &SpawnPukeMinesOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.SpawnPukeMine
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedBloat::SpawnPukeMine ( )
{
	static UFunction* pFnSpawnPukeMine = NULL;

	if ( ! pFnSpawnPukeMine )
		pFnSpawnPukeMine = (UFunction*) UObject::GObjObjects()->Data[ 114199 ];

	AKFPawn_ZedBloat_execSpawnPukeMine_Parms SpawnPukeMine_Parms;

	this->ProcessEvent ( pFnSpawnPukeMine, &SpawnPukeMine_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.DealExplosionDamage
// [0x00820002] 
// Parameters infos:

void AKFPawn_ZedBloat::DealExplosionDamage ( )
{
	static UFunction* pFnDealExplosionDamage = NULL;

	if ( ! pFnDealExplosionDamage )
		pFnDealExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 114194 ];

	AKFPawn_ZedBloat_execDealExplosionDamage_Parms DealExplosionDamage_Parms;

	this->ProcessEvent ( pFnDealExplosionDamage, &DealExplosionDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.HitExplosiveBone
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedBloat::HitExplosiveBone ( )
{
	static UFunction* pFnHitExplosiveBone = NULL;

	if ( ! pFnHitExplosiveBone )
		pFnHitExplosiveBone = (UFunction*) UObject::GObjObjects()->Data[ 114189 ];

	AKFPawn_ZedBloat_execHitExplosiveBone_Parms HitExplosiveBone_Parms;

	this->ProcessEvent ( pFnHitExplosiveBone, &HitExplosiveBone_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.TakeHitZoneDamage
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedBloat::TakeHitZoneDamage ( )
{
	static UFunction* pFnTakeHitZoneDamage = NULL;

	if ( ! pFnTakeHitZoneDamage )
		pFnTakeHitZoneDamage = (UFunction*) UObject::GObjObjects()->Data[ 114182 ];

	AKFPawn_ZedBloat_execTakeHitZoneDamage_Parms TakeHitZoneDamage_Parms;

	this->ProcessEvent ( pFnTakeHitZoneDamage, &TakeHitZoneDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.Died
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedBloat::Died ( )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 114177 ];

	AKFPawn_ZedBloat_execDied_Parms Died_Parms;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.HasInjuredHitZones
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedBloat::HasInjuredHitZones ( )
{
	static UFunction* pFnHasInjuredHitZones = NULL;

	if ( ! pFnHasInjuredHitZones )
		pFnHasInjuredHitZones = (UFunction*) UObject::GObjObjects()->Data[ 114175 ];

	AKFPawn_ZedBloat_execHasInjuredHitZones_Parms HasInjuredHitZones_Parms;

	this->ProcessEvent ( pFnHasInjuredHitZones, &HasInjuredHitZones_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.CanInjureHitZone
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedBloat::CanInjureHitZone ( )
{
	static UFunction* pFnCanInjureHitZone = NULL;

	if ( ! pFnCanInjureHitZone )
		pFnCanInjureHitZone = (UFunction*) UObject::GObjObjects()->Data[ 114171 ];

	AKFPawn_ZedBloat_execCanInjureHitZone_Parms CanInjureHitZone_Parms;

	this->ProcessEvent ( pFnCanInjureHitZone, &CanInjureHitZone_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.CanPukeOnTarget
// [0x00820002] 
// Parameters infos:

void AKFPawn_ZedBloat::CanPukeOnTarget ( )
{
	static UFunction* pFnCanPukeOnTarget = NULL;

	if ( ! pFnCanPukeOnTarget )
		pFnCanPukeOnTarget = (UFunction*) UObject::GObjObjects()->Data[ 114164 ];

	AKFPawn_ZedBloat_execCanPukeOnTarget_Parms CanPukeOnTarget_Parms;

	this->ProcessEvent ( pFnCanPukeOnTarget, &CanPukeOnTarget_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.DealPukeDamage
// [0x00820002] 
// Parameters infos:

void AKFPawn_ZedBloat::DealPukeDamage ( )
{
	static UFunction* pFnDealPukeDamage = NULL;

	if ( ! pFnDealPukeDamage )
		pFnDealPukeDamage = (UFunction*) UObject::GObjObjects()->Data[ 114160 ];

	AKFPawn_ZedBloat_execDealPukeDamage_Parms DealPukeDamage_Parms;

	this->ProcessEvent ( pFnDealPukeDamage, &DealPukeDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.Puke
// [0x00820002] 
// Parameters infos:

void AKFPawn_ZedBloat::Puke ( )
{
	static UFunction* pFnPuke = NULL;

	if ( ! pFnPuke )
		pFnPuke = (UFunction*) UObject::GObjObjects()->Data[ 114150 ];

	AKFPawn_ZedBloat_execPuke_Parms Puke_Parms;

	this->ProcessEvent ( pFnPuke, &Puke_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.ANIMNOTIFY_PukeAttack
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedBloat::ANIMNOTIFY_PukeAttack ( )
{
	static UFunction* pFnANIMNOTIFY_PukeAttack = NULL;

	if ( ! pFnANIMNOTIFY_PukeAttack )
		pFnANIMNOTIFY_PukeAttack = (UFunction*) UObject::GObjObjects()->Data[ 114149 ];

	AKFPawn_ZedBloat_execANIMNOTIFY_PukeAttack_Parms ANIMNOTIFY_PukeAttack_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_PukeAttack, &ANIMNOTIFY_PukeAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedBloat::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 114148 ];

	AKFPawn_ZedBloat_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFDifficulty_Crawler.GetSpecialCrawlerChance
// [0x00022002] 
// Parameters infos:

void UKFDifficulty_Crawler::GetSpecialCrawlerChance ( )
{
	static UFunction* pFnGetSpecialCrawlerChance = NULL;

	if ( ! pFnGetSpecialCrawlerChance )
		pFnGetSpecialCrawlerChance = (UFunction*) UObject::GObjObjects()->Data[ 111577 ];

	UKFDifficulty_Crawler_execGetSpecialCrawlerChance_Parms GetSpecialCrawlerChance_Parms;

	this->ProcessEvent ( pFnGetSpecialCrawlerChance, &GetSpecialCrawlerChance_Parms, NULL );
};

// Function kfgamecontent.KFDifficulty_Fleshpound.GetSpecialFleshpoundChance
// [0x00022002] 
// Parameters infos:

void UKFDifficulty_Fleshpound::GetSpecialFleshpoundChance ( )
{
	static UFunction* pFnGetSpecialFleshpoundChance = NULL;

	if ( ! pFnGetSpecialFleshpoundChance )
		pFnGetSpecialFleshpoundChance = (UFunction*) UObject::GObjObjects()->Data[ 111586 ];

	UKFDifficulty_Fleshpound_execGetSpecialFleshpoundChance_Parms GetSpecialFleshpoundChance_Parms;

	this->ProcessEvent ( pFnGetSpecialFleshpoundChance, &GetSpecialFleshpoundChance_Parms, NULL );
};

// Function kfgamecontent.KFDifficulty_Gorefast.GetSpecialGorefastChance
// [0x00022002] 
// Parameters infos:

void UKFDifficulty_Gorefast::GetSpecialGorefastChance ( )
{
	static UFunction* pFnGetSpecialGorefastChance = NULL;

	if ( ! pFnGetSpecialGorefastChance )
		pFnGetSpecialGorefastChance = (UFunction*) UObject::GObjObjects()->Data[ 111599 ];

	UKFDifficulty_Gorefast_execGetSpecialGorefastChance_Parms GetSpecialGorefastChance_Parms;

	this->ProcessEvent ( pFnGetSpecialGorefastChance, &GetSpecialGorefastChance_Parms, NULL );
};

// Function kfgamecontent.KFDifficulty_Husk.GetFireballSettings
// [0x00822002] 
// Parameters infos:

void UKFDifficulty_Husk::GetFireballSettings ( )
{
	static UFunction* pFnGetFireballSettings = NULL;

	if ( ! pFnGetFireballSettings )
		pFnGetFireballSettings = (UFunction*) UObject::GObjObjects()->Data[ 111611 ];

	UKFDifficulty_Husk_execGetFireballSettings_Parms GetFireballSettings_Parms;

	this->ProcessEvent ( pFnGetFireballSettings, &GetFireballSettings_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_AA12Shotgun.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_AA12Shotgun::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111632 ];

	UKFDT_Ballistic_AA12Shotgun_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_AK12.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_AK12::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111639 ];

	UKFDT_Ballistic_AK12_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Assault_Medic.GetMedicToxicDmgType
// [0x00426002] 
// Parameters infos:

void UKFDT_Ballistic_Assault_Medic::GetMedicToxicDmgType ( )
{
	static UFunction* pFnGetMedicToxicDmgType = NULL;

	if ( ! pFnGetMedicToxicDmgType )
		pFnGetMedicToxicDmgType = (UFunction*) UObject::GObjObjects()->Data[ 111654 ];

	UKFDT_Ballistic_Assault_Medic_execGetMedicToxicDmgType_Parms GetMedicToxicDmgType_Parms;

	this->ProcessEvent ( pFnGetMedicToxicDmgType, &GetMedicToxicDmgType_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Assault_Medic.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Ballistic_Assault_Medic::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 111649 ];

	UKFDT_Ballistic_Assault_Medic_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Assault_Medic.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_Assault_Medic::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111646 ];

	UKFDT_Ballistic_Assault_Medic_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_CenterfireMB464.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_CenterfireMB464::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111665 ];

	UKFDT_Ballistic_CenterfireMB464_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_DBShotgun.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_DBShotgun::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111672 ];

	UKFDT_Ballistic_DBShotgun_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Deagle.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_Deagle::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111677 ];

	UKFDT_Ballistic_Deagle_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_DragonsBreath.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Ballistic_DragonsBreath::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 111692 ];

	UKFDT_Ballistic_DragonsBreath_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_DragonsBreath.PlayImpactHitEffects
// [0x00026002] 
// Parameters infos:

void UKFDT_Ballistic_DragonsBreath::PlayImpactHitEffects ( )
{
	static UFunction* pFnPlayImpactHitEffects = NULL;

	if ( ! pFnPlayImpactHitEffects )
		pFnPlayImpactHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 111686 ];

	UKFDT_Ballistic_DragonsBreath_execPlayImpactHitEffects_Parms PlayImpactHitEffects_Parms;

	this->ProcessEvent ( pFnPlayImpactHitEffects, &PlayImpactHitEffects_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_DragonsBreath.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_DragonsBreath::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111683 ];

	UKFDT_Ballistic_DragonsBreath_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_DragonsBreathDoT.GetDamageeDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_DragonsBreathDoT::GetDamageeDialogID ( )
{
	static UFunction* pFnGetDamageeDialogID = NULL;

	if ( ! pFnGetDamageeDialogID )
		pFnGetDamageeDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112046 ];

	UKFDT_Fire_DragonsBreathDoT_execGetDamageeDialogID_Parms GetDamageeDialogID_Parms;

	this->ProcessEvent ( pFnGetDamageeDialogID, &GetDamageeDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_DragonsBreathDoT.GetDamagerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_DragonsBreathDoT::GetDamagerDialogID ( )
{
	static UFunction* pFnGetDamagerDialogID = NULL;

	if ( ! pFnGetDamagerDialogID )
		pFnGetDamagerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112044 ];

	UKFDT_Fire_DragonsBreathDoT_execGetDamagerDialogID_Parms GetDamagerDialogID_Parms;

	this->ProcessEvent ( pFnGetDamagerDialogID, &GetDamagerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_DragonsBreathDoT.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_DragonsBreathDoT::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112042 ];

	UKFDT_Fire_DragonsBreathDoT_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_HansAK12.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Ballistic_HansAK12::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 111699 ];

	UKFDT_Ballistic_HansAK12_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Ballistic_Hemogoblin::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 111725 ];

	UKFDT_Ballistic_Hemogoblin_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.PlayImpactHitEffects
// [0x00826002] 
// Parameters infos:

void UKFDT_Ballistic_Hemogoblin::PlayImpactHitEffects ( )
{
	static UFunction* pFnPlayImpactHitEffects = NULL;

	if ( ! pFnPlayImpactHitEffects )
		pFnPlayImpactHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 111710 ];

	UKFDT_Ballistic_Hemogoblin_execPlayImpactHitEffects_Parms PlayImpactHitEffects_Parms;

	this->ProcessEvent ( pFnPlayImpactHitEffects, &PlayImpactHitEffects_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.CanDismemberHitZoneWhileAlive
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_Hemogoblin::CanDismemberHitZoneWhileAlive ( )
{
	static UFunction* pFnCanDismemberHitZoneWhileAlive = NULL;

	if ( ! pFnCanDismemberHitZoneWhileAlive )
		pFnCanDismemberHitZoneWhileAlive = (UFunction*) UObject::GObjObjects()->Data[ 111707 ];

	UKFDT_Ballistic_Hemogoblin_execCanDismemberHitZoneWhileAlive_Parms CanDismemberHitZoneWhileAlive_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZoneWhileAlive, &CanDismemberHitZoneWhileAlive_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Hemogoblin.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_Hemogoblin::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111704 ];

	UKFDT_Ballistic_Hemogoblin_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.Tick
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void AKFWeapActor_Hemogoblin_Tube::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 124185 ];

	AKFWeapActor_Hemogoblin_Tube_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.ActualDestroy
// [0x00020002] 
// Parameters infos:

void AKFWeapActor_Hemogoblin_Tube::ActualDestroy ( )
{
	static UFunction* pFnActualDestroy = NULL;

	if ( ! pFnActualDestroy )
		pFnActualDestroy = (UFunction*) UObject::GObjObjects()->Data[ 124184 ];

	AKFWeapActor_Hemogoblin_Tube_execActualDestroy_Parms ActualDestroy_Parms;

	this->ProcessEvent ( pFnActualDestroy, &ActualDestroy_Parms, NULL );
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.TearDown
// [0x00020002] 
// Parameters infos:

void AKFWeapActor_Hemogoblin_Tube::TearDown ( )
{
	static UFunction* pFnTearDown = NULL;

	if ( ! pFnTearDown )
		pFnTearDown = (UFunction*) UObject::GObjObjects()->Data[ 124183 ];

	AKFWeapActor_Hemogoblin_Tube_execTearDown_Parms TearDown_Parms;

	this->ProcessEvent ( pFnTearDown, &TearDown_Parms, NULL );
};

// Function kfgamecontent.KFWeapActor_Hemogoblin_Tube.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFWeapActor_Hemogoblin_Tube::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 124182 ];

	AKFWeapActor_Hemogoblin_Tube_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_HX25SubmunitionImpact.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_HX25SubmunitionImpact::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111735 ];

	UKFDT_Ballistic_HX25SubmunitionImpact_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_HZ12.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_HZ12::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111740 ];

	UKFDT_Ballistic_HZ12_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_M14EBR.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_M14EBR::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111749 ];

	UKFDT_Ballistic_M14EBR_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_M4Shotgun.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_M4Shotgun::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111758 ];

	UKFDT_Ballistic_M4Shotgun_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_MB500.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_MB500::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111765 ];

	UKFDT_Ballistic_MB500_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_NailShotgun.GetPinProjectileClass
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_NailShotgun::GetPinProjectileClass ( )
{
	static UFunction* pFnGetPinProjectileClass = NULL;

	if ( ! pFnGetPinProjectileClass )
		pFnGetPinProjectileClass = (UFunction*) UObject::GObjObjects()->Data[ 111774 ];

	UKFDT_Ballistic_NailShotgun_execGetPinProjectileClass_Parms GetPinProjectileClass_Parms;

	this->ProcessEvent ( pFnGetPinProjectileClass, &GetPinProjectileClass_Parms, NULL );
};

// Function kfgamecontent.KFProj_Nail_Nailgun.Landed
// [0x00020102] 
// Parameters infos:

void AKFProj_Nail_Nailgun::Landed ( )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 120447 ];

	AKFProj_Nail_Nailgun_execLanded_Parms Landed_Parms;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function kfgamecontent.KFProj_Nail_Nailgun.Tick
// [0x00020102] 
// Parameters infos:

void AKFProj_Nail_Nailgun::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120445 ];

	AKFProj_Nail_Nailgun_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Nail_Nailgun.ProcessTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_Nail_Nailgun::ProcessTouch ( )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 120441 ];

	AKFProj_Nail_Nailgun_execProcessTouch_Parms ProcessTouch_Parms;

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_Nail_Nailgun.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Nail_Nailgun::eventHitWall ( )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 120437 ];

	AKFProj_Nail_Nailgun_eventHitWall_Parms HitWall_Parms;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_PatMinigun.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Ballistic_PatMinigun::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 111781 ];

	UKFDT_Ballistic_PatMinigun_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Pistol_Medic.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Ballistic_Pistol_Medic::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 111785 ];

	UKFDT_Ballistic_Pistol_Medic_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_RailGun.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_RailGun::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111798 ];

	UKFDT_Ballistic_RailGun_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_RailGun.GetBoneToDismember
// [0x00422102] 
// Parameters infos:

void UKFDT_Ballistic_RailGun::GetBoneToDismember ( )
{
	static UFunction* pFnGetBoneToDismember = NULL;

	if ( ! pFnGetBoneToDismember )
		pFnGetBoneToDismember = (UFunction*) UObject::GObjObjects()->Data[ 111792 ];

	UKFDT_Ballistic_RailGun_execGetBoneToDismember_Parms GetBoneToDismember_Parms;

	this->ProcessEvent ( pFnGetBoneToDismember, &GetBoneToDismember_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_SCAR.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_SCAR::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111809 ];

	UKFDT_Ballistic_SCAR_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Shotgun_Medic.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Ballistic_Shotgun_Medic::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 111819 ];

	UKFDT_Ballistic_Shotgun_Medic_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Shotgun_Medic.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_Shotgun_Medic::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111816 ];

	UKFDT_Ballistic_Shotgun_Medic_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_SMG_Medic.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Ballistic_SMG_Medic::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 111826 ];

	UKFDT_Ballistic_SMG_Medic_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_SW500.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_SW500::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111835 ];

	UKFDT_Ballistic_SW500_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Ballistic_Winchester.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Ballistic_Winchester::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111842 ];

	UKFDT_Ballistic_Winchester_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Bludgeon_Patriarch.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Bludgeon_Patriarch::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 111931 ];

	UKFDT_Bludgeon_Patriarch_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Bludgeon_PatriarchKick.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Bludgeon_PatriarchKick::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 111935 ];

	UKFDT_Bludgeon_PatriarchKick_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Bludgeon_PatriarchMetal.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Bludgeon_PatriarchMetal::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 111940 ];

	UKFDT_Bludgeon_PatriarchMetal_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Explosive_CrawlerSuicide.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Explosive_CrawlerSuicide::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 111984 ];

	UKFDT_Explosive_CrawlerSuicide_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Explosive_HansHEGrenade.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Explosive_HansHEGrenade::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112001 ];

	UKFDT_Explosive_HansHEGrenade_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Explosive_HuskSuicide.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Explosive_HuskSuicide::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112005 ];

	UKFDT_Explosive_HuskSuicide_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Explosive_PatMissile.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Explosive_PatMissile::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112018 ];

	UKFDT_Explosive_PatMissile_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Explosive_PatMortar.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Explosive_PatMortar::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112022 ];

	UKFDT_Explosive_PatMortar_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_CaulkBurn.GetDamageeDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_CaulkBurn::GetDamageeDialogID ( )
{
	static UFunction* pFnGetDamageeDialogID = NULL;

	if ( ! pFnGetDamageeDialogID )
		pFnGetDamageeDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112039 ];

	UKFDT_Fire_CaulkBurn_execGetDamageeDialogID_Parms GetDamageeDialogID_Parms;

	this->ProcessEvent ( pFnGetDamageeDialogID, &GetDamageeDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_CaulkBurn.GetDamagerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_CaulkBurn::GetDamagerDialogID ( )
{
	static UFunction* pFnGetDamagerDialogID = NULL;

	if ( ! pFnGetDamagerDialogID )
		pFnGetDamagerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112037 ];

	UKFDT_Fire_CaulkBurn_execGetDamagerDialogID_Parms GetDamagerDialogID_Parms;

	this->ProcessEvent ( pFnGetDamagerDialogID, &GetDamagerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_CaulkBurn.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_CaulkBurn::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112035 ];

	UKFDT_Fire_CaulkBurn_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_FlameThrower.GetDamageeDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_FlameThrower::GetDamageeDialogID ( )
{
	static UFunction* pFnGetDamageeDialogID = NULL;

	if ( ! pFnGetDamageeDialogID )
		pFnGetDamageeDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112056 ];

	UKFDT_Fire_FlameThrower_execGetDamageeDialogID_Parms GetDamageeDialogID_Parms;

	this->ProcessEvent ( pFnGetDamageeDialogID, &GetDamageeDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_FlameThrower.GetDamagerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_FlameThrower::GetDamagerDialogID ( )
{
	static UFunction* pFnGetDamagerDialogID = NULL;

	if ( ! pFnGetDamagerDialogID )
		pFnGetDamagerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112054 ];

	UKFDT_Fire_FlameThrower_execGetDamagerDialogID_Parms GetDamagerDialogID_Parms;

	this->ProcessEvent ( pFnGetDamagerDialogID, &GetDamagerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_FlameThrower.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_FlameThrower::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112052 ];

	UKFDT_Fire_FlameThrower_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_FlareGun.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Fire_FlareGun::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 112061 ];

	UKFDT_Fire_FlareGun_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_FlareGunDoT.GetDamageeDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_FlareGunDoT::GetDamageeDialogID ( )
{
	static UFunction* pFnGetDamageeDialogID = NULL;

	if ( ! pFnGetDamageeDialogID )
		pFnGetDamageeDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112073 ];

	UKFDT_Fire_FlareGunDoT_execGetDamageeDialogID_Parms GetDamageeDialogID_Parms;

	this->ProcessEvent ( pFnGetDamageeDialogID, &GetDamageeDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_FlareGunDoT.GetDamagerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_FlareGunDoT::GetDamagerDialogID ( )
{
	static UFunction* pFnGetDamagerDialogID = NULL;

	if ( ! pFnGetDamagerDialogID )
		pFnGetDamagerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112071 ];

	UKFDT_Fire_FlareGunDoT_execGetDamagerDialogID_Parms GetDamagerDialogID_Parms;

	this->ProcessEvent ( pFnGetDamagerDialogID, &GetDamagerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Fire_FlareGunDoT.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Fire_FlareGunDoT::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112069 ];

	UKFDT_Fire_FlareGunDoT_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Freeze_FreezeGrenade.PlayImpactHitEffects
// [0x00026002] 
// Parameters infos:

void UKFDT_Freeze_FreezeGrenade::PlayImpactHitEffects ( )
{
	static UFunction* pFnPlayImpactHitEffects = NULL;

	if ( ! pFnPlayImpactHitEffects )
		pFnPlayImpactHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 112093 ];

	UKFDT_Freeze_FreezeGrenade_execPlayImpactHitEffects_Parms PlayImpactHitEffects_Parms;

	this->ProcessEvent ( pFnPlayImpactHitEffects, &PlayImpactHitEffects_Parms, NULL );
};

// Function kfgamecontent.KFDT_Microwave_Beam.CheckObliterate
// [0x00022002] 
// Parameters infos:

void UKFDT_Microwave_Beam::CheckObliterate ( )
{
	static UFunction* pFnCheckObliterate = NULL;

	if ( ! pFnCheckObliterate )
		pFnCheckObliterate = (UFunction*) UObject::GObjObjects()->Data[ 112109 ];

	UKFDT_Microwave_Beam_execCheckObliterate_Parms CheckObliterate_Parms;

	this->ProcessEvent ( pFnCheckObliterate, &CheckObliterate_Parms, NULL );
};

// Function kfgamecontent.KFDT_Piercing_KnifeStab_FieldMedic.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Piercing_KnifeStab_FieldMedic::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 112125 ];

	UKFDT_Piercing_KnifeStab_FieldMedic_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Piercing_NadeFragment.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Piercing_NadeFragment::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112134 ];

	UKFDT_Piercing_NadeFragment_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Piercing_NailFragment.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Piercing_NailFragment::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112139 ];

	UKFDT_Piercing_NailFragment_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Eviscerator.ModifyDismembermentHitImpulse
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Eviscerator::ModifyDismembermentHitImpulse ( )
{
	static UFunction* pFnModifyDismembermentHitImpulse = NULL;

	if ( ! pFnModifyDismembermentHitImpulse )
		pFnModifyDismembermentHitImpulse = (UFunction*) UObject::GObjObjects()->Data[ 112158 ];

	UKFDT_Slashing_Eviscerator_execModifyDismembermentHitImpulse_Parms ModifyDismembermentHitImpulse_Parms;

	this->ProcessEvent ( pFnModifyDismembermentHitImpulse, &ModifyDismembermentHitImpulse_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Eviscerator.GetBoneToDismember
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Eviscerator::GetBoneToDismember ( )
{
	static UFunction* pFnGetBoneToDismember = NULL;

	if ( ! pFnGetBoneToDismember )
		pFnGetBoneToDismember = (UFunction*) UObject::GObjObjects()->Data[ 112151 ];

	UKFDT_Slashing_Eviscerator_execGetBoneToDismember_Parms GetBoneToDismember_Parms;

	this->ProcessEvent ( pFnGetBoneToDismember, &GetBoneToDismember_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Eviscerator.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_Eviscerator::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112148 ];

	UKFDT_Slashing_Eviscerator_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_EvisceratorProj.GetBoneToDismember
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_EvisceratorProj::GetBoneToDismember ( )
{
	static UFunction* pFnGetBoneToDismember = NULL;

	if ( ! pFnGetBoneToDismember )
		pFnGetBoneToDismember = (UFunction*) UObject::GObjObjects()->Data[ 112183 ];

	UKFDT_Slashing_EvisceratorProj_execGetBoneToDismember_Parms GetBoneToDismember_Parms;

	this->ProcessEvent ( pFnGetBoneToDismember, &GetBoneToDismember_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_EvisceratorProj.GetLastSlashDirection
// [0x00822102] 
// Parameters infos:

void UKFDT_Slashing_EvisceratorProj::GetLastSlashDirection ( )
{
	static UFunction* pFnGetLastSlashDirection = NULL;

	if ( ! pFnGetLastSlashDirection )
		pFnGetLastSlashDirection = (UFunction*) UObject::GObjObjects()->Data[ 112172 ];

	UKFDT_Slashing_EvisceratorProj_execGetLastSlashDirection_Parms GetLastSlashDirection_Parms;

	this->ProcessEvent ( pFnGetLastSlashDirection, &GetLastSlashDirection_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_EvisceratorProj.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_EvisceratorProj::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112169 ];

	UKFDT_Slashing_EvisceratorProj_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Katana.ModifyDismembermentHitImpulse
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Katana::ModifyDismembermentHitImpulse ( )
{
	static UFunction* pFnModifyDismembermentHitImpulse = NULL;

	if ( ! pFnModifyDismembermentHitImpulse )
		pFnModifyDismembermentHitImpulse = (UFunction*) UObject::GObjObjects()->Data[ 112208 ];

	UKFDT_Slashing_Katana_execModifyDismembermentHitImpulse_Parms ModifyDismembermentHitImpulse_Parms;

	this->ProcessEvent ( pFnModifyDismembermentHitImpulse, &ModifyDismembermentHitImpulse_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Katana.GetBoneToDismember
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Katana::GetBoneToDismember ( )
{
	static UFunction* pFnGetBoneToDismember = NULL;

	if ( ! pFnGetBoneToDismember )
		pFnGetBoneToDismember = (UFunction*) UObject::GObjObjects()->Data[ 112201 ];

	UKFDT_Slashing_Katana_execGetBoneToDismember_Parms GetBoneToDismember_Parms;

	this->ProcessEvent ( pFnGetBoneToDismember, &GetBoneToDismember_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Katana.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_Katana::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112198 ];

	UKFDT_Slashing_Katana_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_KatanaHeavy.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_KatanaHeavy::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112219 ];

	UKFDT_Slashing_KatanaHeavy_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Knife.ModifyDismembermentHitImpulse
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Knife::ModifyDismembermentHitImpulse ( )
{
	static UFunction* pFnModifyDismembermentHitImpulse = NULL;

	if ( ! pFnModifyDismembermentHitImpulse )
		pFnModifyDismembermentHitImpulse = (UFunction*) UObject::GObjObjects()->Data[ 112234 ];

	UKFDT_Slashing_Knife_execModifyDismembermentHitImpulse_Parms ModifyDismembermentHitImpulse_Parms;

	this->ProcessEvent ( pFnModifyDismembermentHitImpulse, &ModifyDismembermentHitImpulse_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Knife.GetBoneToDismember
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Knife::GetBoneToDismember ( )
{
	static UFunction* pFnGetBoneToDismember = NULL;

	if ( ! pFnGetBoneToDismember )
		pFnGetBoneToDismember = (UFunction*) UObject::GObjObjects()->Data[ 112227 ];

	UKFDT_Slashing_Knife_execGetBoneToDismember_Parms GetBoneToDismember_Parms;

	this->ProcessEvent ( pFnGetBoneToDismember, &GetBoneToDismember_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Knife.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_Knife::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112224 ];

	UKFDT_Slashing_Knife_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Knife_Medic.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Slashing_Knife_Medic::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 112247 ];

	UKFDT_Slashing_Knife_Medic_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_KnifeHeavy.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_KnifeHeavy::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112256 ];

	UKFDT_Slashing_KnifeHeavy_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_KnifeHeavy_Medic.ApplySecondaryDamage
// [0x00026002] 
// Parameters infos:

void UKFDT_Slashing_KnifeHeavy_Medic::ApplySecondaryDamage ( )
{
	static UFunction* pFnApplySecondaryDamage = NULL;

	if ( ! pFnApplySecondaryDamage )
		pFnApplySecondaryDamage = (UFunction*) UObject::GObjObjects()->Data[ 112263 ];

	UKFDT_Slashing_KnifeHeavy_Medic_execApplySecondaryDamage_Parms ApplySecondaryDamage_Parms;

	this->ProcessEvent ( pFnApplySecondaryDamage, &ApplySecondaryDamage_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Patriarch.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Slashing_Patriarch::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112272 ];

	UKFDT_Slashing_Patriarch_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_PatTentacle.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Slashing_PatTentacle::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112276 ];

	UKFDT_Slashing_PatTentacle_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Zweihander.ModifyDismembermentHitImpulse
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Zweihander::ModifyDismembermentHitImpulse ( )
{
	static UFunction* pFnModifyDismembermentHitImpulse = NULL;

	if ( ! pFnModifyDismembermentHitImpulse )
		pFnModifyDismembermentHitImpulse = (UFunction*) UObject::GObjObjects()->Data[ 112296 ];

	UKFDT_Slashing_Zweihander_execModifyDismembermentHitImpulse_Parms ModifyDismembermentHitImpulse_Parms;

	this->ProcessEvent ( pFnModifyDismembermentHitImpulse, &ModifyDismembermentHitImpulse_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Zweihander.GetBoneToDismember
// [0x00422102] 
// Parameters infos:

void UKFDT_Slashing_Zweihander::GetBoneToDismember ( )
{
	static UFunction* pFnGetBoneToDismember = NULL;

	if ( ! pFnGetBoneToDismember )
		pFnGetBoneToDismember = (UFunction*) UObject::GObjObjects()->Data[ 112289 ];

	UKFDT_Slashing_Zweihander_execGetBoneToDismember_Parms GetBoneToDismember_Parms;

	this->ProcessEvent ( pFnGetBoneToDismember, &GetBoneToDismember_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_Zweihander.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_Zweihander::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112286 ];

	UKFDT_Slashing_Zweihander_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_Slashing_ZweihanderHeavy.CanDismemberHitZone
// [0x00022102] 
// Parameters infos:

void UKFDT_Slashing_ZweihanderHeavy::CanDismemberHitZone ( )
{
	static UFunction* pFnCanDismemberHitZone = NULL;

	if ( ! pFnCanDismemberHitZone )
		pFnCanDismemberHitZone = (UFunction*) UObject::GObjObjects()->Data[ 112307 ];

	UKFDT_Slashing_ZweihanderHeavy_execCanDismemberHitZone_Parms CanDismemberHitZone_Parms;

	this->ProcessEvent ( pFnCanDismemberHitZone, &CanDismemberHitZone_Parms, NULL );
};

// Function kfgamecontent.KFDT_SwingMinigame.PlayImpactHitEffects
// [0x00026002] 
// Parameters infos:

void UKFDT_SwingMinigame::PlayImpactHitEffects ( )
{
	static UFunction* pFnPlayImpactHitEffects = NULL;

	if ( ! pFnPlayImpactHitEffects )
		pFnPlayImpactHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 112314 ];

	UKFDT_SwingMinigame_execPlayImpactHitEffects_Parms PlayImpactHitEffects_Parms;

	this->ProcessEvent ( pFnPlayImpactHitEffects, &PlayImpactHitEffects_Parms, NULL );
};

// Function kfgamecontent.KFDT_Toxic_HansGrenade.GetKillerDialogID
// [0x00022002] 
// Parameters infos:

void UKFDT_Toxic_HansGrenade::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 112328 ];

	UKFDT_Toxic_HansGrenade_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPhysicsVolume.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPhysicsVolume::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 112346 ];

	AKFPhysicsVolume_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFPhysicsVolume.UnTouch
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPhysicsVolume::eventUnTouch ( )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 112343 ];

	AKFPhysicsVolume_eventUnTouch_Parms UnTouch_Parms;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function kfgamecontent.KFPhysicsVolume.CausePainTo
// [0x00020002] 
// Parameters infos:

void AKFPhysicsVolume::CausePainTo ( )
{
	static UFunction* pFnCausePainTo = NULL;

	if ( ! pFnCausePainTo )
		pFnCausePainTo = (UFunction*) UObject::GObjObjects()->Data[ 112340 ];

	AKFPhysicsVolume_execCausePainTo_Parms CausePainTo_Parms;

	this->ProcessEvent ( pFnCausePainTo, &CausePainTo_Parms, NULL );
};

// Function kfgamecontent.KFDynamicPhysicsVolume.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFDynamicPhysicsVolume::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 112353 ];

	AKFDynamicPhysicsVolume_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_GroundFire.SpawnExplosionParticleSystem
// [0x00020102] 
// Parameters infos:

void AKFExplosion_GroundFire::SpawnExplosionParticleSystem ( )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 112357 ];

	AKFExplosion_GroundFire_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.GetEffectCheckRadius
// [0x00020002] 
// Parameters infos:

void AKFExplosion_HansSmokeGrenade::GetEffectCheckRadius ( )
{
	static UFunction* pFnGetEffectCheckRadius = NULL;

	if ( ! pFnGetEffectCheckRadius )
		pFnGetEffectCheckRadius = (UFunction*) UObject::GObjObjects()->Data[ 112376 ];

	AKFExplosion_HansSmokeGrenade_execGetEffectCheckRadius_Parms GetEffectCheckRadius_Parms;

	this->ProcessEvent ( pFnGetEffectCheckRadius, &GetEffectCheckRadius_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.DoExplosionDamage
// [0x00080102] 
// Parameters infos:

void AKFExplosion_HansSmokeGrenade::DoExplosionDamage ( )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 112372 ];

	AKFExplosion_HansSmokeGrenade_execDoExplosionDamage_Parms DoExplosionDamage_Parms;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFExplosion_HansSmokeGrenade::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 112371 ];

	AKFExplosion_HansSmokeGrenade_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_HansSmokeGrenade.Explode
// [0x00024102] 
// Parameters infos:

void AKFExplosion_HansSmokeGrenade::Explode ( )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 112368 ];

	AKFExplosion_HansSmokeGrenade_execExplode_Parms Explode_Parms;

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_MedicGrenade.SpawnExplosionParticleSystem
// [0x00020102] 
// Parameters infos:

void AKFExplosion_MedicGrenade::SpawnExplosionParticleSystem ( )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 112409 ];

	AKFExplosion_MedicGrenade_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_MedicGrenade.AffectsPawn
// [0x00080102] 
// Parameters infos:

void AKFExplosion_MedicGrenade::AffectsPawn ( )
{
	static UFunction* pFnAffectsPawn = NULL;

	if ( ! pFnAffectsPawn )
		pFnAffectsPawn = (UFunction*) UObject::GObjObjects()->Data[ 112402 ];

	AKFExplosion_MedicGrenade_execAffectsPawn_Parms AffectsPawn_Parms;

	this->ProcessEvent ( pFnAffectsPawn, &AffectsPawn_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_MedicGrenade.Explode
// [0x00024102] 
// Parameters infos:

void AKFExplosion_MedicGrenade::Explode ( )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 112398 ];

	AKFExplosion_MedicGrenade_execExplode_Parms Explode_Parms;

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function kfgamecontent.KFProj_MedicGrenade.StopFlightEffects
// [0x00080100] 
// Parameters infos:

void AKFProj_MedicGrenade::StopFlightEffects ( )
{
	static UFunction* pFnStopFlightEffects = NULL;

	if ( ! pFnStopFlightEffects )
		pFnStopFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 120266 ];

	AKFProj_MedicGrenade_execStopFlightEffects_Parms StopFlightEffects_Parms;

	this->ProcessEvent ( pFnStopFlightEffects, &StopFlightEffects_Parms, NULL );
};

// Function kfgamecontent.KFProj_MedicGrenade.Destroyed
// [0x00020102] 
// Parameters infos:

void AKFProj_MedicGrenade::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 120265 ];

	AKFProj_MedicGrenade_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFProj_MedicGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_MedicGrenade::eventGrenadeIsAtRest ( )
{
	static UFunction* pFnGrenadeIsAtRest = NULL;

	if ( ! pFnGrenadeIsAtRest )
		pFnGrenadeIsAtRest = (UFunction*) UObject::GObjObjects()->Data[ 120264 ];

	AKFProj_MedicGrenade_eventGrenadeIsAtRest_Parms GrenadeIsAtRest_Parms;

	this->ProcessEvent ( pFnGrenadeIsAtRest, &GrenadeIsAtRest_Parms, NULL );
};

// Function kfgamecontent.KFProj_MedicGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_MedicGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120263 ];

	AKFProj_MedicGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_PlayerBloatPukeMine.SpawnExplosionParticleSystem
// [0x00020102] 
// Parameters infos:

void AKFExplosion_PlayerBloatPukeMine::SpawnExplosionParticleSystem ( )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 112419 ];

	AKFExplosion_PlayerBloatPukeMine_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_SirenScream.HandleIgnoredVictim
// [0x00020002] 
// Parameters infos:

void AKFExplosion_SirenScream::HandleIgnoredVictim ( )
{
	static UFunction* pFnHandleIgnoredVictim = NULL;

	if ( ! pFnHandleIgnoredVictim )
		pFnHandleIgnoredVictim = (UFunction*) UObject::GObjObjects()->Data[ 112430 ];

	AKFExplosion_SirenScream_execHandleIgnoredVictim_Parms HandleIgnoredVictim_Parms;

	this->ProcessEvent ( pFnHandleIgnoredVictim, &HandleIgnoredVictim_Parms, NULL );
};

// Function kfgamecontent.KFExplosion_SirenScream.SpecialCringeEffectsFor
// [0x00080002] 
// Parameters infos:

void AKFExplosion_SirenScream::SpecialCringeEffectsFor ( )
{
	static UFunction* pFnSpecialCringeEffectsFor = NULL;

	if ( ! pFnSpecialCringeEffectsFor )
		pFnSpecialCringeEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 112426 ];

	AKFExplosion_SirenScream_execSpecialCringeEffectsFor_Parms SpecialCringeEffectsFor_Parms;

	this->ProcessEvent ( pFnSpecialCringeEffectsFor, &SpecialCringeEffectsFor_Parms, NULL );
};

// Function kfgamecontent.KFExplosionActorC4.GetDamageFor
// [0x00020102] 
// Parameters infos:

void AKFExplosionActorC4::GetDamageFor ( )
{
	static UFunction* pFnGetDamageFor = NULL;

	if ( ! pFnGetDamageFor )
		pFnGetDamageFor = (UFunction*) UObject::GObjObjects()->Data[ 112434 ];

	AKFExplosionActorC4_execGetDamageFor_Parms GetDamageFor_Parms;

	this->ProcessEvent ( pFnGetDamageFor, &GetDamageFor_Parms, NULL );
};

// Function kfgamecontent.KFGameConductorVersus.UpdateOverallStatus
// [0x00020002] 
// Parameters infos:

void UKFGameConductorVersus::UpdateOverallStatus ( )
{
	static UFunction* pFnUpdateOverallStatus = NULL;

	if ( ! pFnUpdateOverallStatus )
		pFnUpdateOverallStatus = (UFunction*) UObject::GObjObjects()->Data[ 112442 ];

	UKFGameConductorVersus_execUpdateOverallStatus_Parms UpdateOverallStatus_Parms;

	this->ProcessEvent ( pFnUpdateOverallStatus, &UpdateOverallStatus_Parms, NULL );
};

// Function kfgamecontent.KFGameConductorVersus.TimerUpdate
// [0x00020002] 
// Parameters infos:

void UKFGameConductorVersus::TimerUpdate ( )
{
	static UFunction* pFnTimerUpdate = NULL;

	if ( ! pFnTimerUpdate )
		pFnTimerUpdate = (UFunction*) UObject::GObjObjects()->Data[ 112441 ];

	UKFGameConductorVersus_execTimerUpdate_Parms TimerUpdate_Parms;

	this->ProcessEvent ( pFnTimerUpdate, &TimerUpdate_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.OnInstigatorControllerLeft
// [0x00020102] 
// Parameters infos:

void AKFProj_BloatPukeMine::OnInstigatorControllerLeft ( )
{
	static UFunction* pFnOnInstigatorControllerLeft = NULL;

	if ( ! pFnOnInstigatorControllerLeft )
		pFnOnInstigatorControllerLeft = (UFunction*) UObject::GObjObjects()->Data[ 119813 ];

	AKFProj_BloatPukeMine_execOnInstigatorControllerLeft_Parms OnInstigatorControllerLeft_Parms;

	this->ProcessEvent ( pFnOnInstigatorControllerLeft, &OnInstigatorControllerLeft_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 119807 ];

	AKFProj_BloatPukeMine_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.SpawnBurstEffect
// [0x00020102] 
// Parameters infos:

void AKFProj_BloatPukeMine::SpawnBurstEffect ( )
{
	static UFunction* pFnSpawnBurstEffect = NULL;

	if ( ! pFnSpawnBurstEffect )
		pFnSpawnBurstEffect = (UFunction*) UObject::GObjObjects()->Data[ 119806 ];

	AKFProj_BloatPukeMine_execSpawnBurstEffect_Parms SpawnBurstEffect_Parms;

	this->ProcessEvent ( pFnSpawnBurstEffect, &SpawnBurstEffect_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.FadeOut
// [0x00020102] 
// Parameters infos:

void AKFProj_BloatPukeMine::FadeOut ( )
{
	static UFunction* pFnFadeOut = NULL;

	if ( ! pFnFadeOut )
		pFnFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 119805 ];

	AKFProj_BloatPukeMine_execFadeOut_Parms FadeOut_Parms;

	this->ProcessEvent ( pFnFadeOut, &FadeOut_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.TornOff
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventTornOff ( )
{
	static UFunction* pFnTornOff = NULL;

	if ( ! pFnTornOff )
		pFnTornOff = (UFunction*) UObject::GObjObjects()->Data[ 119804 ];

	AKFProj_BloatPukeMine_eventTornOff_Parms TornOff_Parms;

	this->ProcessEvent ( pFnTornOff, &TornOff_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 119801 ];

	AKFProj_BloatPukeMine_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.TriggerExplosion
// [0x00020102] 
// Parameters infos:

void AKFProj_BloatPukeMine::TriggerExplosion ( )
{
	static UFunction* pFnTriggerExplosion = NULL;

	if ( ! pFnTriggerExplosion )
		pFnTriggerExplosion = (UFunction*) UObject::GObjObjects()->Data[ 119797 ];

	AKFProj_BloatPukeMine_execTriggerExplosion_Parms TriggerExplosion_Parms;

	this->ProcessEvent ( pFnTriggerExplosion, &TriggerExplosion_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Timer_Explode
// [0x00020002] 
// Parameters infos:

void AKFProj_BloatPukeMine::Timer_Explode ( )
{
	static UFunction* pFnTimer_Explode = NULL;

	if ( ! pFnTimer_Explode )
		pFnTimer_Explode = (UFunction*) UObject::GObjObjects()->Data[ 119796 ];

	AKFProj_BloatPukeMine_execTimer_Explode_Parms Timer_Explode_Parms;

	this->ProcessEvent ( pFnTimer_Explode, &Timer_Explode_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Detonate
// [0x00020002] 
// Parameters infos:

void AKFProj_BloatPukeMine::Detonate ( )
{
	static UFunction* pFnDetonate = NULL;

	if ( ! pFnDetonate )
		pFnDetonate = (UFunction*) UObject::GObjObjects()->Data[ 119795 ];

	AKFProj_BloatPukeMine_execDetonate_Parms Detonate_Parms;

	this->ProcessEvent ( pFnDetonate, &Detonate_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.TakeDamage
// [0x00024822] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventTakeDamage ( )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 119787 ];

	AKFProj_BloatPukeMine_eventTakeDamage_Parms TakeDamage_Parms;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 119781 ];

	AKFProj_BloatPukeMine_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.ValidTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_BloatPukeMine::ValidTouch ( )
{
	static UFunction* pFnValidTouch = NULL;

	if ( ! pFnValidTouch )
		pFnValidTouch = (UFunction*) UObject::GObjObjects()->Data[ 119778 ];

	AKFProj_BloatPukeMine_execValidTouch_Parms ValidTouch_Parms;

	this->ProcessEvent ( pFnValidTouch, &ValidTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.SpawnImpactDecal
// [0x00020102] 
// Parameters infos:

void AKFProj_BloatPukeMine::SpawnImpactDecal ( )
{
	static UFunction* pFnSpawnImpactDecal = NULL;

	if ( ! pFnSpawnImpactDecal )
		pFnSpawnImpactDecal = (UFunction*) UObject::GObjObjects()->Data[ 119775 ];

	AKFProj_BloatPukeMine_execSpawnImpactDecal_Parms SpawnImpactDecal_Parms;

	this->ProcessEvent ( pFnSpawnImpactDecal, &SpawnImpactDecal_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.PlayImpactSound
// [0x00024102] 
// Parameters infos:

void AKFProj_BloatPukeMine::PlayImpactSound ( )
{
	static UFunction* pFnPlayImpactSound = NULL;

	if ( ! pFnPlayImpactSound )
		pFnPlayImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 119773 ];

	AKFProj_BloatPukeMine_execPlayImpactSound_Parms PlayImpactSound_Parms;

	this->ProcessEvent ( pFnPlayImpactSound, &PlayImpactSound_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.SwapToGroundFX
// [0x00020102] 
// Parameters infos:

void AKFProj_BloatPukeMine::SwapToGroundFX ( )
{
	static UFunction* pFnSwapToGroundFX = NULL;

	if ( ! pFnSwapToGroundFX )
		pFnSwapToGroundFX = (UFunction*) UObject::GObjObjects()->Data[ 119771 ];

	AKFProj_BloatPukeMine_execSwapToGroundFX_Parms SwapToGroundFX_Parms;

	this->ProcessEvent ( pFnSwapToGroundFX, &SwapToGroundFX_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Stick
// [0x00820102] 
// Parameters infos:

void AKFProj_BloatPukeMine::Stick ( )
{
	static UFunction* pFnStick = NULL;

	if ( ! pFnStick )
		pFnStick = (UFunction*) UObject::GObjObjects()->Data[ 119763 ];

	AKFProj_BloatPukeMine_execStick_Parms Stick_Parms;

	this->ProcessEvent ( pFnStick, &Stick_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Bounce
// [0x00820102] 
// Parameters infos:

void AKFProj_BloatPukeMine::Bounce ( )
{
	static UFunction* pFnBounce = NULL;

	if ( ! pFnBounce )
		pFnBounce = (UFunction*) UObject::GObjObjects()->Data[ 119758 ];

	AKFProj_BloatPukeMine_execBounce_Parms Bounce_Parms;

	this->ProcessEvent ( pFnBounce, &Bounce_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Bump
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventBump ( )
{
	static UFunction* pFnBump = NULL;

	if ( ! pFnBump )
		pFnBump = (UFunction*) UObject::GObjObjects()->Data[ 119754 ];

	AKFProj_BloatPukeMine_eventBump_Parms Bump_Parms;

	this->ProcessEvent ( pFnBump, &Bump_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.CanStick
// [0x00480102] 
// Parameters infos:

void AKFProj_BloatPukeMine::CanStick ( )
{
	static UFunction* pFnCanStick = NULL;

	if ( ! pFnCanStick )
		pFnCanStick = (UFunction*) UObject::GObjObjects()->Data[ 119750 ];

	AKFProj_BloatPukeMine_execCanStick_Parms CanStick_Parms;

	this->ProcessEvent ( pFnCanStick, &CanStick_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventHitWall ( )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 119746 ];

	AKFProj_BloatPukeMine_eventHitWall_Parms HitWall_Parms;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.Explode
// [0x00020100] 
// Parameters infos:

void AKFProj_BloatPukeMine::Explode ( )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 119743 ];

	AKFProj_BloatPukeMine_execExplode_Parms Explode_Parms;

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.StopSimulating
// [0x00080100] 
// Parameters infos:

void AKFProj_BloatPukeMine::StopSimulating ( )
{
	static UFunction* pFnStopSimulating = NULL;

	if ( ! pFnStopSimulating )
		pFnStopSimulating = (UFunction*) UObject::GObjObjects()->Data[ 119742 ];

	AKFProj_BloatPukeMine_execStopSimulating_Parms StopSimulating_Parms;

	this->ProcessEvent ( pFnStopSimulating, &StopSimulating_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.ShutDown
// [0x00020100] 
// Parameters infos:

void AKFProj_BloatPukeMine::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 119741 ];

	AKFProj_BloatPukeMine_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.PostBeginPlay
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 119738 ];

	AKFProj_BloatPukeMine_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_BloatPukeMine.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_BloatPukeMine::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 119736 ];

	AKFProj_BloatPukeMine_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFPickupFactory_Ammo.CurrentPickupIsAmmo
// [0x00020002] 
// Parameters infos:

void AKFPickupFactory_Ammo::CurrentPickupIsAmmo ( )
{
	static UFunction* pFnCurrentPickupIsAmmo = NULL;

	if ( ! pFnCurrentPickupIsAmmo )
		pFnCurrentPickupIsAmmo = (UFunction*) UObject::GObjObjects()->Data[ 119537 ];

	AKFPickupFactory_Ammo_execCurrentPickupIsAmmo_Parms CurrentPickupIsAmmo_Parms;

	this->ProcessEvent ( pFnCurrentPickupIsAmmo, &CurrentPickupIsAmmo_Parms, NULL );
};

// Function kfgamecontent.KFPickupFactory_Ammo.PickedUpBy
// [0x00020002] 
// Parameters infos:

void AKFPickupFactory_Ammo::PickedUpBy ( )
{
	static UFunction* pFnPickedUpBy = NULL;

	if ( ! pFnPickedUpBy )
		pFnPickedUpBy = (UFunction*) UObject::GObjObjects()->Data[ 119534 ];

	AKFPickupFactory_Ammo_execPickedUpBy_Parms PickedUpBy_Parms;

	this->ProcessEvent ( pFnPickedUpBy, &PickedUpBy_Parms, NULL );
};

// Function kfgamecontent.KFPickupFactory_Ammo.GiveTo
// [0x00020002] 
// Parameters infos:

void AKFPickupFactory_Ammo::GiveTo ( )
{
	static UFunction* pFnGiveTo = NULL;

	if ( ! pFnGiveTo )
		pFnGiveTo = (UFunction*) UObject::GObjObjects()->Data[ 119531 ];

	AKFPickupFactory_Ammo_execGiveTo_Parms GiveTo_Parms;

	this->ProcessEvent ( pFnGiveTo, &GiveTo_Parms, NULL );
};

// Function kfgamecontent.KFPickupFactory_Ammo.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPickupFactory_Ammo::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 119530 ];

	AKFPickupFactory_Ammo_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function kfgamecontent.KFPickupFactory_Ammo.InitializePickup
// [0x00020102] 
// Parameters infos:

void AKFPickupFactory_Ammo::InitializePickup ( )
{
	static UFunction* pFnInitializePickup = NULL;

	if ( ! pFnInitializePickup )
		pFnInitializePickup = (UFunction*) UObject::GObjObjects()->Data[ 119528 ];

	AKFPickupFactory_Ammo_execInitializePickup_Parms InitializePickup_Parms;

	this->ProcessEvent ( pFnInitializePickup, &InitializePickup_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_Cyst.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedClot_Cyst::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 114343 ];

	AKFPawn_ZedClot_Cyst_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedClot::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 114251 ];

	AKFPawn_ZedClot_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedClot::eventPostInitAnimTree ( )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 114249 ];

	AKFPawn_ZedClot_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedClot_Slasher::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 114359 ];

	AKFPawn_ZedClot_Slasher_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_Alpha.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedClot_Alpha::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 114270 ];

	AKFPawn_ZedClot_Alpha_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_Alpha.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedClot_Alpha::eventGetAIPawnClassToSpawn ( )
{
	static UFunction* pFnGetAIPawnClassToSpawn = NULL;

	if ( ! pFnGetAIPawnClassToSpawn )
		pFnGetAIPawnClassToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 114267 ];

	AKFPawn_ZedClot_Alpha_eventGetAIPawnClassToSpawn_Parms GetAIPawnClassToSpawn_Parms;

	this->ProcessEvent ( pFnGetAIPawnClassToSpawn, &GetAIPawnClassToSpawn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedCrawler::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 114436 ];

	AKFPawn_ZedCrawler_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.Tick
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedCrawler::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 114434 ];

	AKFPawn_ZedCrawler_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.DrawDebugRotation
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedCrawler::DrawDebugRotation ( )
{
	static UFunction* pFnDrawDebugRotation = NULL;

	if ( ! pFnDrawDebugRotation )
		pFnDrawDebugRotation = (UFunction*) UObject::GObjObjects()->Data[ 114431 ];

	AKFPawn_ZedCrawler_execDrawDebugRotation_Parms DrawDebugRotation_Parms;

	this->ProcessEvent ( pFnDrawDebugRotation, &DrawDebugRotation_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.GetOverheadDebugText
// [0x00420102] 
// Parameters infos:

void AKFPawn_ZedCrawler::GetOverheadDebugText ( )
{
	static UFunction* pFnGetOverheadDebugText = NULL;

	if ( ! pFnGetOverheadDebugText )
		pFnGetOverheadDebugText = (UFunction*) UObject::GObjObjects()->Data[ 114424 ];

	AKFPawn_ZedCrawler_execGetOverheadDebugText_Parms GetOverheadDebugText_Parms;

	this->ProcessEvent ( pFnGetOverheadDebugText, &GetOverheadDebugText_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.SpiderBumpLevel
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedCrawler::eventSpiderBumpLevel ( )
{
	static UFunction* pFnSpiderBumpLevel = NULL;

	if ( ! pFnSpiderBumpLevel )
		pFnSpiderBumpLevel = (UFunction*) UObject::GObjObjects()->Data[ 114419 ];

	AKFPawn_ZedCrawler_eventSpiderBumpLevel_Parms SpiderBumpLevel_Parms;

	this->ProcessEvent ( pFnSpiderBumpLevel, &SpiderBumpLevel_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.SpecialMoveTo_Leap
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedCrawler::SpecialMoveTo_Leap ( )
{
	static UFunction* pFnSpecialMoveTo_Leap = NULL;

	if ( ! pFnSpecialMoveTo_Leap )
		pFnSpecialMoveTo_Leap = (UFunction*) UObject::GObjObjects()->Data[ 114414 ];

	AKFPawn_ZedCrawler_execSpecialMoveTo_Leap_Parms SpecialMoveTo_Leap_Parms;

	this->ProcessEvent ( pFnSpecialMoveTo_Leap, &SpecialMoveTo_Leap_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.PossessedBy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedCrawler::eventPossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 114410 ];

	AKFPawn_ZedCrawler_eventPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedCrawler::eventGetAIPawnClassToSpawn ( )
{
	static UFunction* pFnGetAIPawnClassToSpawn = NULL;

	if ( ! pFnGetAIPawnClassToSpawn )
		pFnGetAIPawnClassToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 114407 ];

	AKFPawn_ZedCrawler_eventGetAIPawnClassToSpawn_Parms GetAIPawnClassToSpawn_Parms;

	this->ProcessEvent ( pFnGetAIPawnClassToSpawn, &GetAIPawnClassToSpawn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedGorefast.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedGorefast::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 114866 ];

	AKFPawn_ZedGorefast_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedGorefast.GetAIPawnClassToSpawn
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedGorefast::eventGetAIPawnClassToSpawn ( )
{
	static UFunction* pFnGetAIPawnClassToSpawn = NULL;

	if ( ! pFnGetAIPawnClassToSpawn )
		pFnGetAIPawnClassToSpawn = (UFunction*) UObject::GObjObjects()->Data[ 114863 ];

	AKFPawn_ZedGorefast_eventGetAIPawnClassToSpawn_Parms GetAIPawnClassToSpawn_Parms;

	this->ProcessEvent ( pFnGetAIPawnClassToSpawn, &GetAIPawnClassToSpawn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedStalker::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 116184 ];

	AKFPawn_ZedStalker_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedStalker::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 116182 ];

	AKFPawn_ZedStalker_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.GetKillerDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedStalker::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 116180 ];

	AKFPawn_ZedStalker_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.IsStalkerPawn
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedStalker::IsStalkerPawn ( )
{
	static UFunction* pFnIsStalkerPawn = NULL;

	if ( ! pFnIsStalkerPawn )
		pFnIsStalkerPawn = (UFunction*) UObject::GObjObjects()->Data[ 116178 ];

	AKFPawn_ZedStalker_execIsStalkerPawn_Parms IsStalkerPawn_Parms;

	this->ProcessEvent ( pFnIsStalkerPawn, &IsStalkerPawn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.ReCloakTimer
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::ReCloakTimer ( )
{
	static UFunction* pFnReCloakTimer = NULL;

	if ( ! pFnReCloakTimer )
		pFnReCloakTimer = (UFunction*) UObject::GObjObjects()->Data[ 116177 ];

	AKFPawn_ZedStalker_execReCloakTimer_Parms ReCloakTimer_Parms;

	this->ProcessEvent ( pFnReCloakTimer, &ReCloakTimer_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayHeadAsplode
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::PlayHeadAsplode ( )
{
	static UFunction* pFnPlayHeadAsplode = NULL;

	if ( ! pFnPlayHeadAsplode )
		pFnPlayHeadAsplode = (UFunction*) UObject::GObjObjects()->Data[ 116176 ];

	AKFPawn_ZedStalker_execPlayHeadAsplode_Parms PlayHeadAsplode_Parms;

	this->ProcessEvent ( pFnPlayHeadAsplode, &PlayHeadAsplode_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayHit
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedStalker::PlayHit ( )
{
	static UFunction* pFnPlayHit = NULL;

	if ( ! pFnPlayHit )
		pFnPlayHit = (UFunction*) UObject::GObjObjects()->Data[ 116169 ];

	AKFPawn_ZedStalker_execPlayHit_Parms PlayHit_Parms;

	this->ProcessEvent ( pFnPlayHit, &PlayHit_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.OnStackingAfflictionChanged
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedStalker::OnStackingAfflictionChanged ( )
{
	static UFunction* pFnOnStackingAfflictionChanged = NULL;

	if ( ! pFnOnStackingAfflictionChanged )
		pFnOnStackingAfflictionChanged = (UFunction*) UObject::GObjObjects()->Data[ 116167 ];

	AKFPawn_ZedStalker_execOnStackingAfflictionChanged_Parms OnStackingAfflictionChanged_Parms;

	this->ProcessEvent ( pFnOnStackingAfflictionChanged, &OnStackingAfflictionChanged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.CauseHeadTrauma
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedStalker::CauseHeadTrauma ( )
{
	static UFunction* pFnCauseHeadTrauma = NULL;

	if ( ! pFnCauseHeadTrauma )
		pFnCauseHeadTrauma = (UFunction*) UObject::GObjObjects()->Data[ 116165 ];

	AKFPawn_ZedStalker_execCauseHeadTrauma_Parms CauseHeadTrauma_Parms;

	this->ProcessEvent ( pFnCauseHeadTrauma, &CauseHeadTrauma_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayDying
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::PlayDying ( )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 116162 ];

	AKFPawn_ZedStalker_execPlayDying_Parms PlayDying_Parms;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.Rally
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedStalker::Rally ( )
{
	static UFunction* pFnRally = NULL;

	if ( ! pFnRally )
		pFnRally = (UFunction*) UObject::GObjObjects()->Data[ 116151 ];

	AKFPawn_ZedStalker_execRally_Parms Rally_Parms;

	this->ProcessEvent ( pFnRally, &Rally_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.CallOutCloakingExpired
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedStalker::CallOutCloakingExpired ( )
{
	static UFunction* pFnCallOutCloakingExpired = NULL;

	if ( ! pFnCallOutCloakingExpired )
		pFnCallOutCloakingExpired = (UFunction*) UObject::GObjObjects()->Data[ 116150 ];

	AKFPawn_ZedStalker_execCallOutCloakingExpired_Parms CallOutCloakingExpired_Parms;

	this->ProcessEvent ( pFnCallOutCloakingExpired, &CallOutCloakingExpired_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.CallOutCloaking
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedStalker::CallOutCloaking ( )
{
	static UFunction* pFnCallOutCloaking = NULL;

	if ( ! pFnCallOutCloaking )
		pFnCallOutCloaking = (UFunction*) UObject::GObjObjects()->Data[ 116148 ];

	AKFPawn_ZedStalker_execCallOutCloaking_Parms CallOutCloaking_Parms;

	this->ProcessEvent ( pFnCallOutCloaking, &CallOutCloaking_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.UpdateSpottedStatus
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedStalker::eventUpdateSpottedStatus ( )
{
	static UFunction* pFnUpdateSpottedStatus = NULL;

	if ( ! pFnUpdateSpottedStatus )
		pFnUpdateSpottedStatus = (UFunction*) UObject::GObjObjects()->Data[ 116143 ];

	AKFPawn_ZedStalker_eventUpdateSpottedStatus_Parms UpdateSpottedStatus_Parms;

	this->ProcessEvent ( pFnUpdateSpottedStatus, &UpdateSpottedStatus_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.GetMinCloakPct
// [0x00080102] 
// Parameters infos:

void AKFPawn_ZedStalker::GetMinCloakPct ( )
{
	static UFunction* pFnGetMinCloakPct = NULL;

	if ( ! pFnGetMinCloakPct )
		pFnGetMinCloakPct = (UFunction*) UObject::GObjObjects()->Data[ 116141 ];

	AKFPawn_ZedStalker_execGetMinCloakPct_Parms GetMinCloakPct_Parms;

	this->ProcessEvent ( pFnGetMinCloakPct, &GetMinCloakPct_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedStalker::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 116138 ];

	AKFPawn_ZedStalker_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayStealthSoundLoopEnd
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::PlayStealthSoundLoopEnd ( )
{
	static UFunction* pFnPlayStealthSoundLoopEnd = NULL;

	if ( ! pFnPlayStealthSoundLoopEnd )
		pFnPlayStealthSoundLoopEnd = (UFunction*) UObject::GObjObjects()->Data[ 116137 ];

	AKFPawn_ZedStalker_execPlayStealthSoundLoopEnd_Parms PlayStealthSoundLoopEnd_Parms;

	this->ProcessEvent ( pFnPlayStealthSoundLoopEnd, &PlayStealthSoundLoopEnd_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.PlayStealthSoundLoop
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::PlayStealthSoundLoop ( )
{
	static UFunction* pFnPlayStealthSoundLoop = NULL;

	if ( ! pFnPlayStealthSoundLoop )
		pFnPlayStealthSoundLoop = (UFunction*) UObject::GObjObjects()->Data[ 116136 ];

	AKFPawn_ZedStalker_execPlayStealthSoundLoop_Parms PlayStealthSoundLoop_Parms;

	this->ProcessEvent ( pFnPlayStealthSoundLoop, &PlayStealthSoundLoop_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.TerminateEffectsOnDeath
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::TerminateEffectsOnDeath ( )
{
	static UFunction* pFnTerminateEffectsOnDeath = NULL;

	if ( ! pFnTerminateEffectsOnDeath )
		pFnTerminateEffectsOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 116135 ];

	AKFPawn_ZedStalker_execTerminateEffectsOnDeath_Parms TerminateEffectsOnDeath_Parms;

	this->ProcessEvent ( pFnTerminateEffectsOnDeath, &TerminateEffectsOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.NotifyGoreMeshActive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedStalker::eventNotifyGoreMeshActive ( )
{
	static UFunction* pFnNotifyGoreMeshActive = NULL;

	if ( ! pFnNotifyGoreMeshActive )
		pFnNotifyGoreMeshActive = (UFunction*) UObject::GObjObjects()->Data[ 116134 ];

	AKFPawn_ZedStalker_eventNotifyGoreMeshActive_Parms NotifyGoreMeshActive_Parms;

	this->ProcessEvent ( pFnNotifyGoreMeshActive, &NotifyGoreMeshActive_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.UpdateGameplayMICParams
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::UpdateGameplayMICParams ( )
{
	static UFunction* pFnUpdateGameplayMICParams = NULL;

	if ( ! pFnUpdateGameplayMICParams )
		pFnUpdateGameplayMICParams = (UFunction*) UObject::GObjObjects()->Data[ 116132 ];

	AKFPawn_ZedStalker_execUpdateGameplayMICParams_Parms UpdateGameplayMICParams_Parms;

	this->ProcessEvent ( pFnUpdateGameplayMICParams, &UpdateGameplayMICParams_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.ClientCloakingStateUpdated
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedStalker::ClientCloakingStateUpdated ( )
{
	static UFunction* pFnClientCloakingStateUpdated = NULL;

	if ( ! pFnClientCloakingStateUpdated )
		pFnClientCloakingStateUpdated = (UFunction*) UObject::GObjObjects()->Data[ 116131 ];

	AKFPawn_ZedStalker_execClientCloakingStateUpdated_Parms ClientCloakingStateUpdated_Parms;

	this->ProcessEvent ( pFnClientCloakingStateUpdated, &ClientCloakingStateUpdated_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.SetCloaked
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedStalker::SetCloaked ( )
{
	static UFunction* pFnSetCloaked = NULL;

	if ( ! pFnSetCloaked )
		pFnSetCloaked = (UFunction*) UObject::GObjObjects()->Data[ 116129 ];

	AKFPawn_ZedStalker_execSetCloaked_Parms SetCloaked_Parms;

	this->ProcessEvent ( pFnSetCloaked, &SetCloaked_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedStalker::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 116127 ];

	AKFPawn_ZedStalker_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedStalker::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 116126 ];

	AKFPawn_ZedStalker_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedSiren::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 116076 ];

	AKFPawn_ZedSiren_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedSiren::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 116074 ];

	AKFPawn_ZedSiren_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren.GetKillerDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedSiren::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 116072 ];

	AKFPawn_ZedSiren_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren.TerminateEffectsOnDeath
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedSiren::TerminateEffectsOnDeath ( )
{
	static UFunction* pFnTerminateEffectsOnDeath = NULL;

	if ( ! pFnTerminateEffectsOnDeath )
		pFnTerminateEffectsOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 116071 ];

	AKFPawn_ZedSiren_execTerminateEffectsOnDeath_Parms TerminateEffectsOnDeath_Parms;

	this->ProcessEvent ( pFnTerminateEffectsOnDeath, &TerminateEffectsOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren.EnableScreamFlicker
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedSiren::EnableScreamFlicker ( )
{
	static UFunction* pFnEnableScreamFlicker = NULL;

	if ( ! pFnEnableScreamFlicker )
		pFnEnableScreamFlicker = (UFunction*) UObject::GObjObjects()->Data[ 116069 ];

	AKFPawn_ZedSiren_execEnableScreamFlicker_Parms EnableScreamFlicker_Parms;

	this->ProcessEvent ( pFnEnableScreamFlicker, &EnableScreamFlicker_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren.ANIMNOTIFY_SirenScream
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedSiren::ANIMNOTIFY_SirenScream ( )
{
	static UFunction* pFnANIMNOTIFY_SirenScream = NULL;

	if ( ! pFnANIMNOTIFY_SirenScream )
		pFnANIMNOTIFY_SirenScream = (UFunction*) UObject::GObjObjects()->Data[ 116067 ];

	AKFPawn_ZedSiren_execANIMNOTIFY_SirenScream_Parms ANIMNOTIFY_SirenScream_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_SirenScream, &ANIMNOTIFY_SirenScream_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren.SetCharacterArch
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedSiren::SetCharacterArch ( )
{
	static UFunction* pFnSetCharacterArch = NULL;

	if ( ! pFnSetCharacterArch )
		pFnSetCharacterArch = (UFunction*) UObject::GObjObjects()->Data[ 116064 ];

	AKFPawn_ZedSiren_execSetCharacterArch_Parms SetCharacterArch_Parms;

	this->ProcessEvent ( pFnSetCharacterArch, &SetCharacterArch_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.GetHitZoneSkinTypeEffects
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::GetHitZoneSkinTypeEffects ( )
{
	static UFunction* pFnGetHitZoneSkinTypeEffects = NULL;

	if ( ! pFnGetHitZoneSkinTypeEffects )
		pFnGetHitZoneSkinTypeEffects = (UFunction*) UObject::GObjObjects()->Data[ 115118 ];

	AKFPawn_ZedHans_execGetHitZoneSkinTypeEffects_Parms GetHitZoneSkinTypeEffects_Parms;

	this->ProcessEvent ( pFnGetHitZoneSkinTypeEffects, &GetHitZoneSkinTypeEffects_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateBattlePhaseParticles
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::UpdateBattlePhaseParticles ( )
{
	static UFunction* pFnUpdateBattlePhaseParticles = NULL;

	if ( ! pFnUpdateBattlePhaseParticles )
		pFnUpdateBattlePhaseParticles = (UFunction*) UObject::GObjObjects()->Data[ 115117 ];

	AKFPawn_ZedHans_execUpdateBattlePhaseParticles_Parms UpdateBattlePhaseParticles_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseParticles, &UpdateBattlePhaseParticles_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateBattlePhaseMaterials
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::UpdateBattlePhaseMaterials ( )
{
	static UFunction* pFnUpdateBattlePhaseMaterials = NULL;

	if ( ! pFnUpdateBattlePhaseMaterials )
		pFnUpdateBattlePhaseMaterials = (UFunction*) UObject::GObjObjects()->Data[ 115115 ];

	AKFPawn_ZedHans_execUpdateBattlePhaseMaterials_Parms UpdateBattlePhaseMaterials_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseMaterials, &UpdateBattlePhaseMaterials_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateBattlePhaseLights
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::UpdateBattlePhaseLights ( )
{
	static UFunction* pFnUpdateBattlePhaseLights = NULL;

	if ( ! pFnUpdateBattlePhaseLights )
		pFnUpdateBattlePhaseLights = (UFunction*) UObject::GObjObjects()->Data[ 115113 ];

	AKFPawn_ZedHans_execUpdateBattlePhaseLights_Parms UpdateBattlePhaseLights_Parms;

	this->ProcessEvent ( pFnUpdateBattlePhaseLights, &UpdateBattlePhaseLights_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.OnBattlePhaseChanged
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::OnBattlePhaseChanged ( )
{
	static UFunction* pFnOnBattlePhaseChanged = NULL;

	if ( ! pFnOnBattlePhaseChanged )
		pFnOnBattlePhaseChanged = (UFunction*) UObject::GObjObjects()->Data[ 115112 ];

	AKFPawn_ZedHans_execOnBattlePhaseChanged_Parms OnBattlePhaseChanged_Parms;

	this->ProcessEvent ( pFnOnBattlePhaseChanged, &OnBattlePhaseChanged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.IncrementBattlePhase
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::IncrementBattlePhase ( )
{
	static UFunction* pFnIncrementBattlePhase = NULL;

	if ( ! pFnIncrementBattlePhase )
		pFnIncrementBattlePhase = (UFunction*) UObject::GObjObjects()->Data[ 115111 ];

	AKFPawn_ZedHans_execIncrementBattlePhase_Parms IncrementBattlePhase_Parms;

	this->ProcessEvent ( pFnIncrementBattlePhase, &IncrementBattlePhase_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.TerminateEffectsOnDeath
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::TerminateEffectsOnDeath ( )
{
	static UFunction* pFnTerminateEffectsOnDeath = NULL;

	if ( ! pFnTerminateEffectsOnDeath )
		pFnTerminateEffectsOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 115110 ];

	AKFPawn_ZedHans_execTerminateEffectsOnDeath_Parms TerminateEffectsOnDeath_Parms;

	this->ProcessEvent ( pFnTerminateEffectsOnDeath, &TerminateEffectsOnDeath_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.DetachShieldFX
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::DetachShieldFX ( )
{
	static UFunction* pFnDetachShieldFX = NULL;

	if ( ! pFnDetachShieldFX )
		pFnDetachShieldFX = (UFunction*) UObject::GObjObjects()->Data[ 115109 ];

	AKFPawn_ZedHans_execDetachShieldFX_Parms DetachShieldFX_Parms;

	this->ProcessEvent ( pFnDetachShieldFX, &DetachShieldFX_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.StopHuntAndHealModeFX
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::StopHuntAndHealModeFX ( )
{
	static UFunction* pFnStopHuntAndHealModeFX = NULL;

	if ( ! pFnStopHuntAndHealModeFX )
		pFnStopHuntAndHealModeFX = (UFunction*) UObject::GObjObjects()->Data[ 115108 ];

	AKFPawn_ZedHans_execStopHuntAndHealModeFX_Parms StopHuntAndHealModeFX_Parms;

	this->ProcessEvent ( pFnStopHuntAndHealModeFX, &StopHuntAndHealModeFX_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.BreakShield
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::BreakShield ( )
{
	static UFunction* pFnBreakShield = NULL;

	if ( ! pFnBreakShield )
		pFnBreakShield = (UFunction*) UObject::GObjObjects()->Data[ 115106 ];

	AKFPawn_ZedHans_execBreakShield_Parms BreakShield_Parms;

	this->ProcessEvent ( pFnBreakShield, &BreakShield_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.MakeVectorFromColor
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedHans::MakeVectorFromColor ( )
{
	static UFunction* pFnMakeVectorFromColor = NULL;

	if ( ! pFnMakeVectorFromColor )
		pFnMakeVectorFromColor = (UFunction*) UObject::GObjObjects()->Data[ 115101 ];

	AKFPawn_ZedHans_execMakeVectorFromColor_Parms MakeVectorFromColor_Parms;

	this->ProcessEvent ( pFnMakeVectorFromColor, &MakeVectorFromColor_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateShieldUIOnLocalController
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::UpdateShieldUIOnLocalController ( )
{
	static UFunction* pFnUpdateShieldUIOnLocalController = NULL;

	if ( ! pFnUpdateShieldUIOnLocalController )
		pFnUpdateShieldUIOnLocalController = (UFunction*) UObject::GObjObjects()->Data[ 115099 ];

	AKFPawn_ZedHans_execUpdateShieldUIOnLocalController_Parms UpdateShieldUIOnLocalController_Parms;

	this->ProcessEvent ( pFnUpdateShieldUIOnLocalController, &UpdateShieldUIOnLocalController_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.UpdateShieldColor
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::UpdateShieldColor ( )
{
	static UFunction* pFnUpdateShieldColor = NULL;

	if ( ! pFnUpdateShieldColor )
		pFnUpdateShieldColor = (UFunction*) UObject::GObjObjects()->Data[ 115097 ];

	AKFPawn_ZedHans_execUpdateShieldColor_Parms UpdateShieldColor_Parms;

	this->ProcessEvent ( pFnUpdateShieldColor, &UpdateShieldColor_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.PlayHuntAndHealModeFX
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::PlayHuntAndHealModeFX ( )
{
	static UFunction* pFnPlayHuntAndHealModeFX = NULL;

	if ( ! pFnPlayHuntAndHealModeFX )
		pFnPlayHuntAndHealModeFX = (UFunction*) UObject::GObjObjects()->Data[ 115096 ];

	AKFPawn_ZedHans_execPlayHuntAndHealModeFX_Parms PlayHuntAndHealModeFX_Parms;

	this->ProcessEvent ( pFnPlayHuntAndHealModeFX, &PlayHuntAndHealModeFX_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.SetHuntAndHealMode
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::SetHuntAndHealMode ( )
{
	static UFunction* pFnSetHuntAndHealMode = NULL;

	if ( ! pFnSetHuntAndHealMode )
		pFnSetHuntAndHealMode = (UFunction*) UObject::GObjObjects()->Data[ 115094 ];

	AKFPawn_ZedHans_execSetHuntAndHealMode_Parms SetHuntAndHealMode_Parms;

	this->ProcessEvent ( pFnSetHuntAndHealMode, &SetHuntAndHealMode_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.GetBumpAttackDamageType
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::GetBumpAttackDamageType ( )
{
	static UFunction* pFnGetBumpAttackDamageType = NULL;

	if ( ! pFnGetBumpAttackDamageType )
		pFnGetBumpAttackDamageType = (UFunction*) UObject::GObjObjects()->Data[ 115092 ];

	AKFPawn_ZedHans_execGetBumpAttackDamageType_Parms GetBumpAttackDamageType_Parms;

	this->ProcessEvent ( pFnGetBumpAttackDamageType, &GetBumpAttackDamageType_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.CanInjureHitZone
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::CanInjureHitZone ( )
{
	static UFunction* pFnCanInjureHitZone = NULL;

	if ( ! pFnCanInjureHitZone )
		pFnCanInjureHitZone = (UFunction*) UObject::GObjObjects()->Data[ 115086 ];

	AKFPawn_ZedHans_execCanInjureHitZone_Parms CanInjureHitZone_Parms;

	this->ProcessEvent ( pFnCanInjureHitZone, &CanInjureHitZone_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.TakeHitZoneDamage
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::TakeHitZoneDamage ( )
{
	static UFunction* pFnTakeHitZoneDamage = NULL;

	if ( ! pFnTakeHitZoneDamage )
		pFnTakeHitZoneDamage = (UFunction*) UObject::GObjObjects()->Data[ 115081 ];

	AKFPawn_ZedHans_execTakeHitZoneDamage_Parms TakeHitZoneDamage_Parms;

	this->ProcessEvent ( pFnTakeHitZoneDamage, &TakeHitZoneDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.HealDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedHans::eventHealDamage ( )
{
	static UFunction* pFnHealDamage = NULL;

	if ( ! pFnHealDamage )
		pFnHealDamage = (UFunction*) UObject::GObjObjects()->Data[ 115072 ];

	AKFPawn_ZedHans_eventHealDamage_Parms HealDamage_Parms;

	this->ProcessEvent ( pFnHealDamage, &HealDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedHans::eventTakeDamage ( )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 115063 ];

	AKFPawn_ZedHans_eventTakeDamage_Parms TakeDamage_Parms;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.PlayBossMusic
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::PlayBossMusic ( )
{
	static UFunction* pFnPlayBossMusic = NULL;

	if ( ! pFnPlayBossMusic )
		pFnPlayBossMusic = (UFunction*) UObject::GObjObjects()->Data[ 115062 ];

	AKFPawn_ZedHans_execPlayBossMusic_Parms PlayBossMusic_Parms;

	this->ProcessEvent ( pFnPlayBossMusic, &PlayBossMusic_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.Timer_TickHansDialog
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::Timer_TickHansDialog ( )
{
	static UFunction* pFnTimer_TickHansDialog = NULL;

	if ( ! pFnTimer_TickHansDialog )
		pFnTimer_TickHansDialog = (UFunction*) UObject::GObjObjects()->Data[ 115061 ];

	AKFPawn_ZedHans_execTimer_TickHansDialog_Parms Timer_TickHansDialog_Parms;

	this->ProcessEvent ( pFnTimer_TickHansDialog, &Timer_TickHansDialog_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.GetTraderAdviceID
// [0x00022002] 
// Parameters infos:

void AKFPawn_ZedHans::GetTraderAdviceID ( )
{
	static UFunction* pFnGetTraderAdviceID = NULL;

	if ( ! pFnGetTraderAdviceID )
		pFnGetTraderAdviceID = (UFunction*) UObject::GObjObjects()->Data[ 115059 ];

	AKFPawn_ZedHans_execGetTraderAdviceID_Parms GetTraderAdviceID_Parms;

	this->ProcessEvent ( pFnGetTraderAdviceID, &GetTraderAdviceID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.GetSpotterDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::GetSpotterDialogID ( )
{
	static UFunction* pFnGetSpotterDialogID = NULL;

	if ( ! pFnGetSpotterDialogID )
		pFnGetSpotterDialogID = (UFunction*) UObject::GObjObjects()->Data[ 115057 ];

	AKFPawn_ZedHans_execGetSpotterDialogID_Parms GetSpotterDialogID_Parms;

	this->ProcessEvent ( pFnGetSpotterDialogID, &GetSpotterDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.GetKillerDialogID
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::GetKillerDialogID ( )
{
	static UFunction* pFnGetKillerDialogID = NULL;

	if ( ! pFnGetKillerDialogID )
		pFnGetKillerDialogID = (UFunction*) UObject::GObjObjects()->Data[ 115055 ];

	AKFPawn_ZedHans_execGetKillerDialogID_Parms GetKillerDialogID_Parms;

	this->ProcessEvent ( pFnGetKillerDialogID, &GetKillerDialogID_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.DrawDebugOverheadText
// [0x00C20002] 
// Parameters infos:

void AKFPawn_ZedHans::DrawDebugOverheadText ( )
{
	static UFunction* pFnDrawDebugOverheadText = NULL;

	if ( ! pFnDrawDebugOverheadText )
		pFnDrawDebugOverheadText = (UFunction*) UObject::GObjObjects()->Data[ 115049 ];

	AKFPawn_ZedHans_execDrawDebugOverheadText_Parms DrawDebugOverheadText_Parms;

	this->ProcessEvent ( pFnDrawDebugOverheadText, &DrawDebugOverheadText_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.IsThrowingGrenade
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::IsThrowingGrenade ( )
{
	static UFunction* pFnIsThrowingGrenade = NULL;

	if ( ! pFnIsThrowingGrenade )
		pFnIsThrowingGrenade = (UFunction*) UObject::GObjObjects()->Data[ 115047 ];

	AKFPawn_ZedHans_execIsThrowingGrenade_Parms IsThrowingGrenade_Parms;

	this->ProcessEvent ( pFnIsThrowingGrenade, &IsThrowingGrenade_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.AddGrenadeSpread
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedHans::AddGrenadeSpread ( )
{
	static UFunction* pFnAddGrenadeSpread = NULL;

	if ( ! pFnAddGrenadeSpread )
		pFnAddGrenadeSpread = (UFunction*) UObject::GObjObjects()->Data[ 115039 ];

	AKFPawn_ZedHans_execAddGrenadeSpread_Parms AddGrenadeSpread_Parms;

	this->ProcessEvent ( pFnAddGrenadeSpread, &AddGrenadeSpread_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.ThrowGrenade
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedHans::ThrowGrenade ( )
{
	static UFunction* pFnThrowGrenade = NULL;

	if ( ! pFnThrowGrenade )
		pFnThrowGrenade = (UFunction*) UObject::GObjObjects()->Data[ 115034 ];

	AKFPawn_ZedHans_execThrowGrenade_Parms ThrowGrenade_Parms;

	this->ProcessEvent ( pFnThrowGrenade, &ThrowGrenade_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.StartThrowingGrenade
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedHans::StartThrowingGrenade ( )
{
	static UFunction* pFnStartThrowingGrenade = NULL;

	if ( ! pFnStartThrowingGrenade )
		pFnStartThrowingGrenade = (UFunction*) UObject::GObjObjects()->Data[ 115032 ];

	AKFPawn_ZedHans_execStartThrowingGrenade_Parms StartThrowingGrenade_Parms;

	this->ProcessEvent ( pFnStartThrowingGrenade, &StartThrowingGrenade_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.CacheGrenadeThrowLocation
// [0x00824002] 
// Parameters infos:

void AKFPawn_ZedHans::CacheGrenadeThrowLocation ( )
{
	static UFunction* pFnCacheGrenadeThrowLocation = NULL;

	if ( ! pFnCacheGrenadeThrowLocation )
		pFnCacheGrenadeThrowLocation = (UFunction*) UObject::GObjObjects()->Data[ 115012 ];

	AKFPawn_ZedHans_execCacheGrenadeThrowLocation_Parms CacheGrenadeThrowLocation_Parms;

	this->ProcessEvent ( pFnCacheGrenadeThrowLocation, &CacheGrenadeThrowLocation_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_AoENerveGas
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::ANIMNOTIFY_AoENerveGas ( )
{
	static UFunction* pFnANIMNOTIFY_AoENerveGas = NULL;

	if ( ! pFnANIMNOTIFY_AoENerveGas )
		pFnANIMNOTIFY_AoENerveGas = (UFunction*) UObject::GObjObjects()->Data[ 115010 ];

	AKFPawn_ZedHans_execANIMNOTIFY_AoENerveGas_Parms ANIMNOTIFY_AoENerveGas_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_AoENerveGas, &ANIMNOTIFY_AoENerveGas_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_AoEBlast
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::ANIMNOTIFY_AoEBlast ( )
{
	static UFunction* pFnANIMNOTIFY_AoEBlast = NULL;

	if ( ! pFnANIMNOTIFY_AoEBlast )
		pFnANIMNOTIFY_AoEBlast = (UFunction*) UObject::GObjObjects()->Data[ 115008 ];

	AKFPawn_ZedHans_execANIMNOTIFY_AoEBlast_Parms ANIMNOTIFY_AoEBlast_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_AoEBlast, &ANIMNOTIFY_AoEBlast_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_TossGrenade_LeftHand
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::ANIMNOTIFY_TossGrenade_LeftHand ( )
{
	static UFunction* pFnANIMNOTIFY_TossGrenade_LeftHand = NULL;

	if ( ! pFnANIMNOTIFY_TossGrenade_LeftHand )
		pFnANIMNOTIFY_TossGrenade_LeftHand = (UFunction*) UObject::GObjObjects()->Data[ 115007 ];

	AKFPawn_ZedHans_execANIMNOTIFY_TossGrenade_LeftHand_Parms ANIMNOTIFY_TossGrenade_LeftHand_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_TossGrenade_LeftHand, &ANIMNOTIFY_TossGrenade_LeftHand_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.ANIMNOTIFY_TossGrenade_RightHand
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::ANIMNOTIFY_TossGrenade_RightHand ( )
{
	static UFunction* pFnANIMNOTIFY_TossGrenade_RightHand = NULL;

	if ( ! pFnANIMNOTIFY_TossGrenade_RightHand )
		pFnANIMNOTIFY_TossGrenade_RightHand = (UFunction*) UObject::GObjObjects()->Data[ 115006 ];

	AKFPawn_ZedHans_execANIMNOTIFY_TossGrenade_RightHand_Parms ANIMNOTIFY_TossGrenade_RightHand_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_TossGrenade_RightHand, &ANIMNOTIFY_TossGrenade_RightHand_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.ShouldPlaySpecialMeleeAnims
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::ShouldPlaySpecialMeleeAnims ( )
{
	static UFunction* pFnShouldPlaySpecialMeleeAnims = NULL;

	if ( ! pFnShouldPlaySpecialMeleeAnims )
		pFnShouldPlaySpecialMeleeAnims = (UFunction*) UObject::GObjObjects()->Data[ 115004 ];

	AKFPawn_ZedHans_execShouldPlaySpecialMeleeAnims_Parms ShouldPlaySpecialMeleeAnims_Parms;

	this->ProcessEvent ( pFnShouldPlaySpecialMeleeAnims, &ShouldPlaySpecialMeleeAnims_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.SetSprinting
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans::SetSprinting ( )
{
	static UFunction* pFnSetSprinting = NULL;

	if ( ! pFnSetSprinting )
		pFnSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 115001 ];

	AKFPawn_ZedHans_execSetSprinting_Parms SetSprinting_Parms;

	this->ProcessEvent ( pFnSetSprinting, &SetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.SetWeaponStance
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedHans::SetWeaponStance ( )
{
	static UFunction* pFnSetWeaponStance = NULL;

	if ( ! pFnSetWeaponStance )
		pFnSetWeaponStance = (UFunction*) UObject::GObjObjects()->Data[ 114996 ];

	AKFPawn_ZedHans_execSetWeaponStance_Parms SetWeaponStance_Parms;

	this->ProcessEvent ( pFnSetWeaponStance, &SetWeaponStance_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.SetCharacterAnimationInfo
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans::SetCharacterAnimationInfo ( )
{
	static UFunction* pFnSetCharacterAnimationInfo = NULL;

	if ( ! pFnSetCharacterAnimationInfo )
		pFnSetCharacterAnimationInfo = (UFunction*) UObject::GObjObjects()->Data[ 114995 ];

	AKFPawn_ZedHans_execSetCharacterAnimationInfo_Parms SetCharacterAnimationInfo_Parms;

	this->ProcessEvent ( pFnSetCharacterAnimationInfo, &SetCharacterAnimationInfo_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedHans::eventPostInitAnimTree ( )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 114993 ];

	AKFPawn_ZedHans_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedHans::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 114992 ];

	AKFPawn_ZedHans_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedHans::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 114990 ];

	AKFPawn_ZedHans_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFTutorialSectionInfo.OpenDelayTimer
// [0x00020002] 
// Parameters infos:

void UKFTutorialSectionInfo::OpenDelayTimer ( )
{
	static UFunction* pFnOpenDelayTimer = NULL;

	if ( ! pFnOpenDelayTimer )
		pFnOpenDelayTimer = (UFunction*) UObject::GObjObjects()->Data[ 112712 ];

	UKFTutorialSectionInfo_execOpenDelayTimer_Parms OpenDelayTimer_Parms;

	this->ProcessEvent ( pFnOpenDelayTimer, &OpenDelayTimer_Parms, NULL );
};

// Function kfgamecontent.KFTutorialSectionInfo.GetSlides
// [0x00820002] 
// Parameters infos:

void UKFTutorialSectionInfo::GetSlides ( )
{
	static UFunction* pFnGetSlides = NULL;

	if ( ! pFnGetSlides )
		pFnGetSlides = (UFunction*) UObject::GObjObjects()->Data[ 112704 ];

	UKFTutorialSectionInfo_execGetSlides_Parms GetSlides_Parms;

	this->ProcessEvent ( pFnGetSlides, &GetSlides_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.OnTraderMenuClosed
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::OnTraderMenuClosed ( )
{
	static UFunction* pFnOnTraderMenuClosed = NULL;

	if ( ! pFnOnTraderMenuClosed )
		pFnOnTraderMenuClosed = (UFunction*) UObject::GObjObjects()->Data[ 112805 ];

	AKFGameInfo_Tutorial_execOnTraderMenuClosed_Parms OnTraderMenuClosed_Parms;

	this->ProcessEvent ( pFnOnTraderMenuClosed, &OnTraderMenuClosed_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.CheckPlayerAction
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::CheckPlayerAction ( )
{
	static UFunction* pFnCheckPlayerAction = NULL;

	if ( ! pFnCheckPlayerAction )
		pFnCheckPlayerAction = (UFunction*) UObject::GObjObjects()->Data[ 112800 ];

	AKFGameInfo_Tutorial_execCheckPlayerAction_Parms CheckPlayerAction_Parms;

	this->ProcessEvent ( pFnCheckPlayerAction, &CheckPlayerAction_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.Tick
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 112798 ];

	AKFGameInfo_Tutorial_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.NotifyControllerReconnected
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::NotifyControllerReconnected ( )
{
	static UFunction* pFnNotifyControllerReconnected = NULL;

	if ( ! pFnNotifyControllerReconnected )
		pFnNotifyControllerReconnected = (UFunction*) UObject::GObjObjects()->Data[ 112797 ];

	AKFGameInfo_Tutorial_execNotifyControllerReconnected_Parms NotifyControllerReconnected_Parms;

	this->ProcessEvent ( pFnNotifyControllerReconnected, &NotifyControllerReconnected_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.NotifyControllerDisconnected
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::NotifyControllerDisconnected ( )
{
	static UFunction* pFnNotifyControllerDisconnected = NULL;

	if ( ! pFnNotifyControllerDisconnected )
		pFnNotifyControllerDisconnected = (UFunction*) UObject::GObjObjects()->Data[ 112796 ];

	AKFGameInfo_Tutorial_execNotifyControllerDisconnected_Parms NotifyControllerDisconnected_Parms;

	this->ProcessEvent ( pFnNotifyControllerDisconnected, &NotifyControllerDisconnected_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.RemoveTutorialHud
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::RemoveTutorialHud ( )
{
	static UFunction* pFnRemoveTutorialHud = NULL;

	if ( ! pFnRemoveTutorialHud )
		pFnRemoveTutorialHud = (UFunction*) UObject::GObjObjects()->Data[ 112794 ];

	AKFGameInfo_Tutorial_execRemoveTutorialHud_Parms RemoveTutorialHud_Parms;

	this->ProcessEvent ( pFnRemoveTutorialHud, &RemoveTutorialHud_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.CreateTutorialHUD
// [0x00024002] 
// Parameters infos:

void AKFGameInfo_Tutorial::CreateTutorialHUD ( )
{
	static UFunction* pFnCreateTutorialHUD = NULL;

	if ( ! pFnCreateTutorialHUD )
		pFnCreateTutorialHUD = (UFunction*) UObject::GObjObjects()->Data[ 112790 ];

	AKFGameInfo_Tutorial_execCreateTutorialHUD_Parms CreateTutorialHUD_Parms;

	this->ProcessEvent ( pFnCreateTutorialHUD, &CreateTutorialHUD_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.AllowUnpause
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::AllowUnpause ( )
{
	static UFunction* pFnAllowUnpause = NULL;

	if ( ! pFnAllowUnpause )
		pFnAllowUnpause = (UFunction*) UObject::GObjObjects()->Data[ 112788 ];

	AKFGameInfo_Tutorial_execAllowUnpause_Parms AllowUnpause_Parms;

	this->ProcessEvent ( pFnAllowUnpause, &AllowUnpause_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.NotifyMenuOpened
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::NotifyMenuOpened ( )
{
	static UFunction* pFnNotifyMenuOpened = NULL;

	if ( ! pFnNotifyMenuOpened )
		pFnNotifyMenuOpened = (UFunction*) UObject::GObjObjects()->Data[ 112786 ];

	AKFGameInfo_Tutorial_execNotifyMenuOpened_Parms NotifyMenuOpened_Parms;

	this->ProcessEvent ( pFnNotifyMenuOpened, &NotifyMenuOpened_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.SetZedTimeDilation
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::SetZedTimeDilation ( )
{
	static UFunction* pFnSetZedTimeDilation = NULL;

	if ( ! pFnSetZedTimeDilation )
		pFnSetZedTimeDilation = (UFunction*) UObject::GObjObjects()->Data[ 112784 ];

	AKFGameInfo_Tutorial_execSetZedTimeDilation_Parms SetZedTimeDilation_Parms;

	this->ProcessEvent ( pFnSetZedTimeDilation, &SetZedTimeDilation_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.ResetPickups
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::ResetPickups ( )
{
	static UFunction* pFnResetPickups = NULL;

	if ( ! pFnResetPickups )
		pFnResetPickups = (UFunction*) UObject::GObjObjects()->Data[ 112780 ];

	AKFGameInfo_Tutorial_execResetPickups_Parms ResetPickups_Parms;

	this->ProcessEvent ( pFnResetPickups, &ResetPickups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.DetermineNextTraderIndex
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::DetermineNextTraderIndex ( )
{
	static UFunction* pFnDetermineNextTraderIndex = NULL;

	if ( ! pFnDetermineNextTraderIndex )
		pFnDetermineNextTraderIndex = (UFunction*) UObject::GObjObjects()->Data[ 112776 ];

	AKFGameInfo_Tutorial_execDetermineNextTraderIndex_Parms DetermineNextTraderIndex_Parms;

	this->ProcessEvent ( pFnDetermineNextTraderIndex, &DetermineNextTraderIndex_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.ShowPostGameMenu
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::ShowPostGameMenu ( )
{
	static UFunction* pFnShowPostGameMenu = NULL;

	if ( ! pFnShowPostGameMenu )
		pFnShowPostGameMenu = (UFunction*) UObject::GObjObjects()->Data[ 112775 ];

	AKFGameInfo_Tutorial_execShowPostGameMenu_Parms ShowPostGameMenu_Parms;

	this->ProcessEvent ( pFnShowPostGameMenu, &ShowPostGameMenu_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.OnTutorialRewardsComplete
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::OnTutorialRewardsComplete ( )
{
	static UFunction* pFnOnTutorialRewardsComplete = NULL;

	if ( ! pFnOnTutorialRewardsComplete )
		pFnOnTutorialRewardsComplete = (UFunction*) UObject::GObjObjects()->Data[ 112771 ];

	AKFGameInfo_Tutorial_execOnTutorialRewardsComplete_Parms OnTutorialRewardsComplete_Parms;

	this->ProcessEvent ( pFnOnTutorialRewardsComplete, &OnTutorialRewardsComplete_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.EndOfMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::EndOfMatch ( )
{
	static UFunction* pFnEndOfMatch = NULL;

	if ( ! pFnEndOfMatch )
		pFnEndOfMatch = (UFunction*) UObject::GObjObjects()->Data[ 112769 ];

	AKFGameInfo_Tutorial_execEndOfMatch_Parms EndOfMatch_Parms;

	this->ProcessEvent ( pFnEndOfMatch, &EndOfMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.WaveEnded
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::WaveEnded ( )
{
	static UFunction* pFnWaveEnded = NULL;

	if ( ! pFnWaveEnded )
		pFnWaveEnded = (UFunction*) UObject::GObjObjects()->Data[ 112767 ];

	AKFGameInfo_Tutorial_execWaveEnded_Parms WaveEnded_Parms;

	this->ProcessEvent ( pFnWaveEnded, &WaveEnded_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.PreventDeath
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::PreventDeath ( )
{
	static UFunction* pFnPreventDeath = NULL;

	if ( ! pFnPreventDeath )
		pFnPreventDeath = (UFunction*) UObject::GObjObjects()->Data[ 112761 ];

	AKFGameInfo_Tutorial_execPreventDeath_Parms PreventDeath_Parms;

	this->ProcessEvent ( pFnPreventDeath, &PreventDeath_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.ReduceDamage
// [0x00420002] 
// Parameters infos:

void AKFGameInfo_Tutorial::ReduceDamage ( )
{
	static UFunction* pFnReduceDamage = NULL;

	if ( ! pFnReduceDamage )
		pFnReduceDamage = (UFunction*) UObject::GObjObjects()->Data[ 112752 ];

	AKFGameInfo_Tutorial_execReduceDamage_Parms ReduceDamage_Parms;

	this->ProcessEvent ( pFnReduceDamage, &ReduceDamage_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.RestartPlayer
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_Tutorial::RestartPlayer ( )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 112750 ];

	AKFGameInfo_Tutorial_execRestartPlayer_Parms RestartPlayer_Parms;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_Tutorial::eventPostLogin ( )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 112748 ];

	AKFGameInfo_Tutorial_eventPostLogin_Parms PostLogin_Parms;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_Tutorial::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 112747 ];

	AKFGameInfo_Tutorial_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_Tutorial.InitGame
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_Tutorial::eventInitGame ( )
{
	static UFunction* pFnInitGame = NULL;

	if ( ! pFnInitGame )
		pFnInitGame = (UFunction*) UObject::GObjObjects()->Data[ 112744 ];

	AKFGameInfo_Tutorial_eventInitGame_Parms InitGame_Parms;

	this->ProcessEvent ( pFnInitGame, &InitGame_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.Callback_Skip
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::Callback_Skip ( )
{
	static UFunction* pFnCallback_Skip = NULL;

	if ( ! pFnCallback_Skip )
		pFnCallback_Skip = (UFunction*) UObject::GObjObjects()->Data[ 113524 ];

	UKFGFxMoviePlayer_Tutorial_execCallback_Skip_Parms Callback_Skip_Parms;

	this->ProcessEvent ( pFnCallback_Skip, &Callback_Skip_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.Callback_Done
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::Callback_Done ( )
{
	static UFunction* pFnCallback_Done = NULL;

	if ( ! pFnCallback_Done )
		pFnCallback_Done = (UFunction*) UObject::GObjObjects()->Data[ 113523 ];

	UKFGFxMoviePlayer_Tutorial_execCallback_Done_Parms Callback_Done_Parms;

	this->ProcessEvent ( pFnCallback_Done, &Callback_Done_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.GetUsingGamepad
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::GetUsingGamepad ( )
{
	static UFunction* pFnGetUsingGamepad = NULL;

	if ( ! pFnGetUsingGamepad )
		pFnGetUsingGamepad = (UFunction*) UObject::GObjObjects()->Data[ 113520 ];

	UKFGFxMoviePlayer_Tutorial_execGetUsingGamepad_Parms GetUsingGamepad_Parms;

	this->ProcessEvent ( pFnGetUsingGamepad, &GetUsingGamepad_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.OnInputTypeChanged
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::OnInputTypeChanged ( )
{
	static UFunction* pFnOnInputTypeChanged = NULL;

	if ( ! pFnOnInputTypeChanged )
		pFnOnInputTypeChanged = (UFunction*) UObject::GObjObjects()->Data[ 113518 ];

	UKFGFxMoviePlayer_Tutorial_execOnInputTypeChanged_Parms OnInputTypeChanged_Parms;

	this->ProcessEvent ( pFnOnInputTypeChanged, &OnInputTypeChanged_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.CheckIfUsingGamepad
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::CheckIfUsingGamepad ( )
{
	static UFunction* pFnCheckIfUsingGamepad = NULL;

	if ( ! pFnCheckIfUsingGamepad )
		pFnCheckIfUsingGamepad = (UFunction*) UObject::GObjObjects()->Data[ 113516 ];

	UKFGFxMoviePlayer_Tutorial_execCheckIfUsingGamepad_Parms CheckIfUsingGamepad_Parms;

	this->ProcessEvent ( pFnCheckIfUsingGamepad, &CheckIfUsingGamepad_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.FilterButtonInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::eventFilterButtonInput ( )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 113511 ];

	UKFGFxMoviePlayer_Tutorial_eventFilterButtonInput_Parms FilterButtonInput_Parms;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.WidgetInitialized
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::eventWidgetInitialized ( )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->Data[ 113505 ];

	UKFGFxMoviePlayer_Tutorial_eventWidgetInitialized_Parms WidgetInitialized_Parms;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Tutorial.Init
// [0x00024002] 
// Parameters infos:

void UKFGFxMoviePlayer_Tutorial::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 113503 ];

	UKFGFxMoviePlayer_Tutorial_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_Manager_Tutorial.OpenMenu
// [0x00024002] 
// Parameters infos:

void UKFGFxMoviePlayer_Manager_Tutorial::OpenMenu ( )
{
	static UFunction* pFnOpenMenu = NULL;

	if ( ! pFnOpenMenu )
		pFnOpenMenu = (UFunction*) UObject::GObjObjects()->Data[ 113492 ];

	UKFGFxMoviePlayer_Manager_Tutorial_execOpenMenu_Parms OpenMenu_Parms;

	this->ProcessEvent ( pFnOpenMenu, &OpenMenu_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.Reset
// [0x00020002] 
// Parameters infos:

void AKFGameReplicationInfoVersus::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 113379 ];

	AKFGameReplicationInfoVersus_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.OnRoundIncremented
// [0x00020100] 
// Parameters infos:

void AKFGameReplicationInfoVersus::OnRoundIncremented ( )
{
	static UFunction* pFnOnRoundIncremented = NULL;

	if ( ! pFnOnRoundIncremented )
		pFnOnRoundIncremented = (UFunction*) UObject::GObjObjects()->Data[ 113378 ];

	AKFGameReplicationInfoVersus_execOnRoundIncremented_Parms OnRoundIncremented_Parms;

	this->ProcessEvent ( pFnOnRoundIncremented, &OnRoundIncremented_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.ServerStartVoteKick
// [0x00020002] 
// Parameters infos:

void AKFGameReplicationInfoVersus::ServerStartVoteKick ( )
{
	static UFunction* pFnServerStartVoteKick = NULL;

	if ( ! pFnServerStartVoteKick )
		pFnServerStartVoteKick = (UFunction*) UObject::GObjObjects()->Data[ 113373 ];

	AKFGameReplicationInfoVersus_execServerStartVoteKick_Parms ServerStartVoteKick_Parms;

	this->ProcessEvent ( pFnServerStartVoteKick, &ServerStartVoteKick_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.CanChangePerks
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFGameReplicationInfoVersus::eventCanChangePerks ( )
{
	static UFunction* pFnCanChangePerks = NULL;

	if ( ! pFnCanChangePerks )
		pFnCanChangePerks = (UFunction*) UObject::GObjObjects()->Data[ 113371 ];

	AKFGameReplicationInfoVersus_eventCanChangePerks_Parms CanChangePerks_Parms;

	this->ProcessEvent ( pFnCanChangePerks, &CanChangePerks_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.GetCurrentRoundNumber
// [0x00020102] 
// Parameters infos:

void AKFGameReplicationInfoVersus::GetCurrentRoundNumber ( )
{
	static UFunction* pFnGetCurrentRoundNumber = NULL;

	if ( ! pFnGetCurrentRoundNumber )
		pFnGetCurrentRoundNumber = (UFunction*) UObject::GObjObjects()->Data[ 113369 ];

	AKFGameReplicationInfoVersus_execGetCurrentRoundNumber_Parms GetCurrentRoundNumber_Parms;

	this->ProcessEvent ( pFnGetCurrentRoundNumber, &GetCurrentRoundNumber_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.AreTeamsOutOfBalanced
// [0x00020102] 
// Parameters infos:

void AKFGameReplicationInfoVersus::AreTeamsOutOfBalanced ( )
{
	static UFunction* pFnAreTeamsOutOfBalanced = NULL;

	if ( ! pFnAreTeamsOutOfBalanced )
		pFnAreTeamsOutOfBalanced = (UFunction*) UObject::GObjObjects()->Data[ 113364 ];

	AKFGameReplicationInfoVersus_execAreTeamsOutOfBalanced_Parms AreTeamsOutOfBalanced_Parms;

	this->ProcessEvent ( pFnAreTeamsOutOfBalanced, &AreTeamsOutOfBalanced_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.Timer
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFGameReplicationInfoVersus::eventTimer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 113362 ];

	AKFGameReplicationInfoVersus_eventTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.SetTeam
// [0x00020102] 
// Parameters infos:

void AKFGameReplicationInfoVersus::SetTeam ( )
{
	static UFunction* pFnSetTeam = NULL;

	if ( ! pFnSetTeam )
		pFnSetTeam = (UFunction*) UObject::GObjObjects()->Data[ 113359 ];

	AKFGameReplicationInfoVersus_execSetTeam_Parms SetTeam_Parms;

	this->ProcessEvent ( pFnSetTeam, &SetTeam_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.Timer_TickDownSpawnTimer
// [0x00020102] 
// Parameters infos:

void AKFGameReplicationInfoVersus::Timer_TickDownSpawnTimer ( )
{
	static UFunction* pFnTimer_TickDownSpawnTimer = NULL;

	if ( ! pFnTimer_TickDownSpawnTimer )
		pFnTimer_TickDownSpawnTimer = (UFunction*) UObject::GObjObjects()->Data[ 113358 ];

	AKFGameReplicationInfoVersus_execTimer_TickDownSpawnTimer_Parms Timer_TickDownSpawnTimer_Parms;

	this->ProcessEvent ( pFnTimer_TickDownSpawnTimer, &Timer_TickDownSpawnTimer_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.SetPlayerZedSpawnTime
// [0x00020002] 
// Parameters infos:

void AKFGameReplicationInfoVersus::SetPlayerZedSpawnTime ( )
{
	static UFunction* pFnSetPlayerZedSpawnTime = NULL;

	if ( ! pFnSetPlayerZedSpawnTime )
		pFnSetPlayerZedSpawnTime = (UFunction*) UObject::GObjObjects()->Data[ 113355 ];

	AKFGameReplicationInfoVersus_execSetPlayerZedSpawnTime_Parms SetPlayerZedSpawnTime_Parms;

	this->ProcessEvent ( pFnSetPlayerZedSpawnTime, &SetPlayerZedSpawnTime_Parms, NULL );
};

// Function kfgamecontent.KFGameReplicationInfoVersus.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFGameReplicationInfoVersus::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 113352 ];

	AKFGameReplicationInfoVersus_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFTeamInfo_Zeds.GetHumanReadableName
// [0x00020102] 
// Parameters infos:

void AKFTeamInfo_Zeds::GetHumanReadableName ( )
{
	static UFunction* pFnGetHumanReadableName = NULL;

	if ( ! pFnGetHumanReadableName )
		pFnGetHumanReadableName = (UFunction*) UObject::GObjObjects()->Data[ 121582 ];

	AKFTeamInfo_Zeds_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

	this->ProcessEvent ( pFnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher_Versus.GetDirectionalJumpScale
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedClot_Slasher_Versus::GetDirectionalJumpScale ( )
{
	static UFunction* pFnGetDirectionalJumpScale = NULL;

	if ( ! pFnGetDirectionalJumpScale )
		pFnGetDirectionalJumpScale = (UFunction*) UObject::GObjObjects()->Data[ 114382 ];

	AKFPawn_ZedClot_Slasher_Versus_execGetDirectionalJumpScale_Parms GetDirectionalJumpScale_Parms;

	this->ProcessEvent ( pFnGetDirectionalJumpScale, &GetDirectionalJumpScale_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher_Versus.GetJumpZ
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedClot_Slasher_Versus::GetJumpZ ( )
{
	static UFunction* pFnGetJumpZ = NULL;

	if ( ! pFnGetJumpZ )
		pFnGetJumpZ = (UFunction*) UObject::GObjObjects()->Data[ 114380 ];

	AKFPawn_ZedClot_Slasher_Versus_execGetJumpZ_Parms GetJumpZ_Parms;

	this->ProcessEvent ( pFnGetJumpZ, &GetJumpZ_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_Slasher_Versus.GetSprintJumpVelocity
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedClot_Slasher_Versus::GetSprintJumpVelocity ( )
{
	static UFunction* pFnGetSprintJumpVelocity = NULL;

	if ( ! pFnGetSprintJumpVelocity )
		pFnGetSprintJumpVelocity = (UFunction*) UObject::GObjObjects()->Data[ 114377 ];

	AKFPawn_ZedClot_Slasher_Versus_execGetSprintJumpVelocity_Parms GetSprintJumpVelocity_Parms;

	this->ProcessEvent ( pFnGetSprintJumpVelocity, &GetSprintJumpVelocity_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawler_Versus.PlayDying
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedCrawler_Versus::PlayDying ( )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 114464 ];

	AKFPawn_ZedCrawler_Versus_execPlayDying_Parms PlayDying_Parms;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker_Versus.CallOutCloaking
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedStalker_Versus::CallOutCloaking ( )
{
	static UFunction* pFnCallOutCloaking = NULL;

	if ( ! pFnCallOutCloaking )
		pFnCallOutCloaking = (UFunction*) UObject::GObjObjects()->Data[ 116208 ];

	AKFPawn_ZedStalker_Versus_execCallOutCloaking_Parms CallOutCloaking_Parms;

	this->ProcessEvent ( pFnCallOutCloaking, &CallOutCloaking_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedStalker_Versus.UpdateSpottedStatus
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedStalker_Versus::eventUpdateSpottedStatus ( )
{
	static UFunction* pFnUpdateSpottedStatus = NULL;

	if ( ! pFnUpdateSpottedStatus )
		pFnUpdateSpottedStatus = (UFunction*) UObject::GObjObjects()->Data[ 116207 ];

	AKFPawn_ZedStalker_Versus_eventUpdateSpottedStatus_Parms UpdateSpottedStatus_Parms;

	this->ProcessEvent ( pFnUpdateSpottedStatus, &UpdateSpottedStatus_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.PlayDying
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedScrake_Versus::PlayDying ( )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 116034 ];

	AKFPawn_ZedScrake_Versus_execPlayDying_Parms PlayDying_Parms;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.Timer_RageBump
// [0x00080102] 
// Parameters infos:

void AKFPawn_ZedScrake_Versus::Timer_RageBump ( )
{
	static UFunction* pFnTimer_RageBump = NULL;

	if ( ! pFnTimer_RageBump )
		pFnTimer_RageBump = (UFunction*) UObject::GObjObjects()->Data[ 116033 ];

	AKFPawn_ZedScrake_Versus_execTimer_RageBump_Parms Timer_RageBump_Parms;

	this->ProcessEvent ( pFnTimer_RageBump, &Timer_RageBump_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.SetEnraged
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedScrake_Versus::SetEnraged ( )
{
	static UFunction* pFnSetEnraged = NULL;

	if ( ! pFnSetEnraged )
		pFnSetEnraged = (UFunction*) UObject::GObjObjects()->Data[ 116031 ];

	AKFPawn_ZedScrake_Versus_execSetEnraged_Parms SetEnraged_Parms;

	this->ProcessEvent ( pFnSetEnraged, &SetEnraged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedScrake_Versus.SetSprinting
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedScrake_Versus::SetSprinting ( )
{
	static UFunction* pFnSetSprinting = NULL;

	if ( ! pFnSetSprinting )
		pFnSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 116029 ];

	AKFPawn_ZedScrake_Versus_execSetSprinting_Parms SetSprinting_Parms;

	this->ProcessEvent ( pFnSetSprinting, &SetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.PlayDying
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshPound_Versus::PlayDying ( )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 114651 ];

	AKFPawn_ZedFleshPound_Versus_execPlayDying_Parms PlayDying_Parms;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.EndRage
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshPound_Versus::EndRage ( )
{
	static UFunction* pFnEndRage = NULL;

	if ( ! pFnEndRage )
		pFnEndRage = (UFunction*) UObject::GObjObjects()->Data[ 114650 ];

	AKFPawn_ZedFleshPound_Versus_execEndRage_Parms EndRage_Parms;

	this->ProcessEvent ( pFnEndRage, &EndRage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.NotifyMeleeDamageDealt
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshPound_Versus::NotifyMeleeDamageDealt ( )
{
	static UFunction* pFnNotifyMeleeDamageDealt = NULL;

	if ( ! pFnNotifyMeleeDamageDealt )
		pFnNotifyMeleeDamageDealt = (UFunction*) UObject::GObjObjects()->Data[ 114649 ];

	AKFPawn_ZedFleshPound_Versus_execNotifyMeleeDamageDealt_Parms NotifyMeleeDamageDealt_Parms;

	this->ProcessEvent ( pFnNotifyMeleeDamageDealt, &NotifyMeleeDamageDealt_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.Timer_RageBump
// [0x00080102] 
// Parameters infos:

void AKFPawn_ZedFleshPound_Versus::Timer_RageBump ( )
{
	static UFunction* pFnTimer_RageBump = NULL;

	if ( ! pFnTimer_RageBump )
		pFnTimer_RageBump = (UFunction*) UObject::GObjObjects()->Data[ 114648 ];

	AKFPawn_ZedFleshPound_Versus_execTimer_RageBump_Parms Timer_RageBump_Parms;

	this->ProcessEvent ( pFnTimer_RageBump, &Timer_RageBump_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.SetEnraged
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedFleshPound_Versus::SetEnraged ( )
{
	static UFunction* pFnSetEnraged = NULL;

	if ( ! pFnSetEnraged )
		pFnSetEnraged = (UFunction*) UObject::GObjObjects()->Data[ 114646 ];

	AKFPawn_ZedFleshPound_Versus_execSetEnraged_Parms SetEnraged_Parms;

	this->ProcessEvent ( pFnSetEnraged, &SetEnraged_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.SetSprinting
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshPound_Versus::SetSprinting ( )
{
	static UFunction* pFnSetSprinting = NULL;

	if ( ! pFnSetSprinting )
		pFnSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 114644 ];

	AKFPawn_ZedFleshPound_Versus_execSetSprinting_Parms SetSprinting_Parms;

	this->ProcessEvent ( pFnSetSprinting, &SetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshPound_Versus.PossessedBy
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedFleshPound_Versus::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 114641 ];

	AKFPawn_ZedFleshPound_Versus_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedBloat_Versus.ANIMNOTIFY_PukeMineAttack
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedBloat_Versus::ANIMNOTIFY_PukeMineAttack ( )
{
	static UFunction* pFnANIMNOTIFY_PukeMineAttack = NULL;

	if ( ! pFnANIMNOTIFY_PukeMineAttack )
		pFnANIMNOTIFY_PukeMineAttack = (UFunction*) UObject::GObjObjects()->Data[ 114224 ];

	AKFPawn_ZedBloat_Versus_execANIMNOTIFY_PukeMineAttack_Parms ANIMNOTIFY_PukeMineAttack_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_PukeMineAttack, &ANIMNOTIFY_PukeMineAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedSiren_Versus.SetSprinting
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedSiren_Versus::SetSprinting ( )
{
	static UFunction* pFnSetSprinting = NULL;

	if ( ! pFnSetSprinting )
		pFnSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 116096 ];

	AKFPawn_ZedSiren_Versus_execSetSprinting_Parms SetSprinting_Parms;

	this->ProcessEvent ( pFnSetSprinting, &SetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.GetFireballStrengthPerSecond
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::GetFireballStrengthPerSecond ( )
{
	static UFunction* pFnGetFireballStrengthPerSecond = NULL;

	if ( ! pFnGetFireballStrengthPerSecond )
		pFnGetFireballStrengthPerSecond = (UFunction*) UObject::GObjObjects()->Data[ 115410 ];

	AKFPawn_ZedHusk_Versus_execGetFireballStrengthPerSecond_Parms GetFireballStrengthPerSecond_Parms;

	this->ProcessEvent ( pFnGetFireballStrengthPerSecond, &GetFireballStrengthPerSecond_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.GetFireballStrengthRange
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::GetFireballStrengthRange ( )
{
	static UFunction* pFnGetFireballStrengthRange = NULL;

	if ( ! pFnGetFireballStrengthRange )
		pFnGetFireballStrengthRange = (UFunction*) UObject::GObjObjects()->Data[ 115408 ];

	AKFPawn_ZedHusk_Versus_execGetFireballStrengthRange_Parms GetFireballStrengthRange_Parms;

	this->ProcessEvent ( pFnGetFireballStrengthRange, &GetFireballStrengthRange_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.UseAdjustedControllerSensitivity
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::UseAdjustedControllerSensitivity ( )
{
	static UFunction* pFnUseAdjustedControllerSensitivity = NULL;

	if ( ! pFnUseAdjustedControllerSensitivity )
		pFnUseAdjustedControllerSensitivity = (UFunction*) UObject::GObjObjects()->Data[ 115406 ];

	AKFPawn_ZedHusk_Versus_execUseAdjustedControllerSensitivity_Parms UseAdjustedControllerSensitivity_Parms;

	this->ProcessEvent ( pFnUseAdjustedControllerSensitivity, &UseAdjustedControllerSensitivity_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.GetSuicideSM
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::GetSuicideSM ( )
{
	static UFunction* pFnGetSuicideSM = NULL;

	if ( ! pFnGetSuicideSM )
		pFnGetSuicideSM = (UFunction*) UObject::GObjObjects()->Data[ 115404 ];

	AKFPawn_ZedHusk_Versus_execGetSuicideSM_Parms GetSuicideSM_Parms;

	this->ProcessEvent ( pFnGetSuicideSM, &GetSuicideSM_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.OnExploded
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::OnExploded ( )
{
	static UFunction* pFnOnExploded = NULL;

	if ( ! pFnOnExploded )
		pFnOnExploded = (UFunction*) UObject::GObjObjects()->Data[ 115401 ];

	AKFPawn_ZedHusk_Versus_execOnExploded_Parms OnExploded_Parms;

	this->ProcessEvent ( pFnOnExploded, &OnExploded_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.ShootFireball
// [0x00820002] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::ShootFireball ( )
{
	static UFunction* pFnShootFireball = NULL;

	if ( ! pFnShootFireball )
		pFnShootFireball = (UFunction*) UObject::GObjObjects()->Data[ 115389 ];

	AKFPawn_ZedHusk_Versus_execShootFireball_Parms ShootFireball_Parms;

	this->ProcessEvent ( pFnShootFireball, &ShootFireball_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.ANIMNOTIFY_HuskFireballAttack
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::ANIMNOTIFY_HuskFireballAttack ( )
{
	static UFunction* pFnANIMNOTIFY_HuskFireballAttack = NULL;

	if ( ! pFnANIMNOTIFY_HuskFireballAttack )
		pFnANIMNOTIFY_HuskFireballAttack = (UFunction*) UObject::GObjObjects()->Data[ 115387 ];

	AKFPawn_ZedHusk_Versus_execANIMNOTIFY_HuskFireballAttack_Parms ANIMNOTIFY_HuskFireballAttack_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_HuskFireballAttack, &ANIMNOTIFY_HuskFireballAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHusk_Versus.ANIMNOTIFY_FlameThrowerOn
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHusk_Versus::ANIMNOTIFY_FlameThrowerOn ( )
{
	static UFunction* pFnANIMNOTIFY_FlameThrowerOn = NULL;

	if ( ! pFnANIMNOTIFY_FlameThrowerOn )
		pFnANIMNOTIFY_FlameThrowerOn = (UFunction*) UObject::GObjObjects()->Data[ 115386 ];

	AKFPawn_ZedHusk_Versus_execANIMNOTIFY_FlameThrowerOn_Parms ANIMNOTIFY_FlameThrowerOn_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_FlameThrowerOn, &ANIMNOTIFY_FlameThrowerOn_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Timer_StopSummoningChildren
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::Timer_StopSummoningChildren ( )
{
	static UFunction* pFnTimer_StopSummoningChildren = NULL;

	if ( ! pFnTimer_StopSummoningChildren )
		pFnTimer_StopSummoningChildren = (UFunction*) UObject::GObjObjects()->Data[ 115922 ];

	AKFPawn_ZedPatriarch_Versus_execTimer_StopSummoningChildren_Parms Timer_StopSummoningChildren_Parms;

	this->ProcessEvent ( pFnTimer_StopSummoningChildren, &Timer_StopSummoningChildren_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.SummonChildren
// [0x00020022] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::SummonChildren ( )
{
	static UFunction* pFnSummonChildren = NULL;

	if ( ! pFnSummonChildren )
		pFnSummonChildren = (UFunction*) UObject::GObjObjects()->Data[ 115921 ];

	AKFPawn_ZedPatriarch_Versus_execSummonChildren_Parms SummonChildren_Parms;

	this->ProcessEvent ( pFnSummonChildren, &SummonChildren_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UseAdjustedControllerSensitivity
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::UseAdjustedControllerSensitivity ( )
{
	static UFunction* pFnUseAdjustedControllerSensitivity = NULL;

	if ( ! pFnUseAdjustedControllerSensitivity )
		pFnUseAdjustedControllerSensitivity = (UFunction*) UObject::GObjObjects()->Data[ 115919 ];

	AKFPawn_ZedPatriarch_Versus_execUseAdjustedControllerSensitivity_Parms UseAdjustedControllerSensitivity_Parms;

	this->ProcessEvent ( pFnUseAdjustedControllerSensitivity, &UseAdjustedControllerSensitivity_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.ShouldDrawBossIcon
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::ShouldDrawBossIcon ( )
{
	static UFunction* pFnShouldDrawBossIcon = NULL;

	if ( ! pFnShouldDrawBossIcon )
		pFnShouldDrawBossIcon = (UFunction*) UObject::GObjObjects()->Data[ 115917 ];

	AKFPawn_ZedPatriarch_Versus_execShouldDrawBossIcon_Parms ShouldDrawBossIcon_Parms;

	this->ProcessEvent ( pFnShouldDrawBossIcon, &ShouldDrawBossIcon_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.NotifyHealed
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::NotifyHealed ( )
{
	static UFunction* pFnNotifyHealed = NULL;

	if ( ! pFnNotifyHealed )
		pFnNotifyHealed = (UFunction*) UObject::GObjObjects()->Data[ 115916 ];

	AKFPawn_ZedPatriarch_Versus_execNotifyHealed_Parms NotifyHealed_Parms;

	this->ProcessEvent ( pFnNotifyHealed, &NotifyHealed_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.NotifyTakeHit
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::NotifyTakeHit ( )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 115909 ];

	AKFPawn_ZedPatriarch_Versus_execNotifyTakeHit_Parms NotifyTakeHit_Parms;

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.NotifySpecialMoveEnded
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::NotifySpecialMoveEnded ( )
{
	static UFunction* pFnNotifySpecialMoveEnded = NULL;

	if ( ! pFnNotifySpecialMoveEnded )
		pFnNotifySpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 115906 ];

	AKFPawn_ZedPatriarch_Versus_execNotifySpecialMoveEnded_Parms NotifySpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnNotifySpecialMoveEnded, &NotifySpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.CheckHealth
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::CheckHealth ( )
{
	static UFunction* pFnCheckHealth = NULL;

	if ( ! pFnCheckHealth )
		pFnCheckHealth = (UFunction*) UObject::GObjObjects()->Data[ 115904 ];

	AKFPawn_ZedPatriarch_Versus_execCheckHealth_Parms CheckHealth_Parms;

	this->ProcessEvent ( pFnCheckHealth, &CheckHealth_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.IncrementBattlePhase
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::IncrementBattlePhase ( )
{
	static UFunction* pFnIncrementBattlePhase = NULL;

	if ( ! pFnIncrementBattlePhase )
		pFnIncrementBattlePhase = (UFunction*) UObject::GObjObjects()->Data[ 115903 ];

	AKFPawn_ZedPatriarch_Versus_execIncrementBattlePhase_Parms IncrementBattlePhase_Parms;

	this->ProcessEvent ( pFnIncrementBattlePhase, &IncrementBattlePhase_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.ClearMortarTargets
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::ClearMortarTargets ( )
{
	static UFunction* pFnClearMortarTargets = NULL;

	if ( ! pFnClearMortarTargets )
		pFnClearMortarTargets = (UFunction*) UObject::GObjObjects()->Data[ 115902 ];

	AKFPawn_ZedPatriarch_Versus_execClearMortarTargets_Parms ClearMortarTargets_Parms;

	this->ProcessEvent ( pFnClearMortarTargets, &ClearMortarTargets_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.CollectMortarTargets
// [0x00824002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::CollectMortarTargets ( )
{
	static UFunction* pFnCollectMortarTargets = NULL;

	if ( ! pFnCollectMortarTargets )
		pFnCollectMortarTargets = (UFunction*) UObject::GObjObjects()->Data[ 115891 ];

	AKFPawn_ZedPatriarch_Versus_execCollectMortarTargets_Parms CollectMortarTargets_Parms;

	this->ProcessEvent ( pFnCollectMortarTargets, &CollectMortarTargets_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.PreMortarAttack
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::PreMortarAttack ( )
{
	static UFunction* pFnPreMortarAttack = NULL;

	if ( ! pFnPreMortarAttack )
		pFnPreMortarAttack = (UFunction*) UObject::GObjObjects()->Data[ 115890 ];

	AKFPawn_ZedPatriarch_Versus_execPreMortarAttack_Parms PreMortarAttack_Parms;

	this->ProcessEvent ( pFnPreMortarAttack, &PreMortarAttack_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.GetMortarAimDirAndTargetLoc
// [0x00C20002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::GetMortarAimDirAndTargetLoc ( )
{
	static UFunction* pFnGetMortarAimDirAndTargetLoc = NULL;

	if ( ! pFnGetMortarAimDirAndTargetLoc )
		pFnGetMortarAimDirAndTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 115879 ];

	AKFPawn_ZedPatriarch_Versus_execGetMortarAimDirAndTargetLoc_Parms GetMortarAimDirAndTargetLoc_Parms;

	this->ProcessEvent ( pFnGetMortarAimDirAndTargetLoc, &GetMortarAimDirAndTargetLoc_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.GetMissileAimDirAndTargetLoc
// [0x00C20002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::GetMissileAimDirAndTargetLoc ( )
{
	static UFunction* pFnGetMissileAimDirAndTargetLoc = NULL;

	if ( ! pFnGetMissileAimDirAndTargetLoc )
		pFnGetMissileAimDirAndTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 115867 ];

	AKFPawn_ZedPatriarch_Versus_execGetMissileAimDirAndTargetLoc_Parms GetMissileAimDirAndTargetLoc_Parms;

	this->ProcessEvent ( pFnGetMissileAimDirAndTargetLoc, &GetMissileAimDirAndTargetLoc_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.IsHealAllowed
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::IsHealAllowed ( )
{
	static UFunction* pFnIsHealAllowed = NULL;

	if ( ! pFnIsHealAllowed )
		pFnIsHealAllowed = (UFunction*) UObject::GObjObjects()->Data[ 115865 ];

	AKFPawn_ZedPatriarch_Versus_execIsHealAllowed_Parms IsHealAllowed_Parms;

	this->ProcessEvent ( pFnIsHealAllowed, &IsHealAllowed_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateCloakIconState
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::UpdateCloakIconState ( )
{
	static UFunction* pFnUpdateCloakIconState = NULL;

	if ( ! pFnUpdateCloakIconState )
		pFnUpdateCloakIconState = (UFunction*) UObject::GObjObjects()->Data[ 115864 ];

	AKFPawn_ZedPatriarch_Versus_execUpdateCloakIconState_Parms UpdateCloakIconState_Parms;

	this->ProcessEvent ( pFnUpdateCloakIconState, &UpdateCloakIconState_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateHealAvailable
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::UpdateHealAvailable ( )
{
	static UFunction* pFnUpdateHealAvailable = NULL;

	if ( ! pFnUpdateHealAvailable )
		pFnUpdateHealAvailable = (UFunction*) UObject::GObjObjects()->Data[ 115863 ];

	AKFPawn_ZedPatriarch_Versus_execUpdateHealAvailable_Parms UpdateHealAvailable_Parms;

	this->ProcessEvent ( pFnUpdateHealAvailable, &UpdateHealAvailable_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.GetMinCloakPct
// [0x00080102] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::GetMinCloakPct ( )
{
	static UFunction* pFnGetMinCloakPct = NULL;

	if ( ! pFnGetMinCloakPct )
		pFnGetMinCloakPct = (UFunction*) UObject::GObjObjects()->Data[ 115861 ];

	AKFPawn_ZedPatriarch_Versus_execGetMinCloakPct_Parms GetMinCloakPct_Parms;

	this->ProcessEvent ( pFnGetMinCloakPct, &GetMinCloakPct_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateGunTrackingSkelCtrl
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::UpdateGunTrackingSkelCtrl ( )
{
	static UFunction* pFnUpdateGunTrackingSkelCtrl = NULL;

	if ( ! pFnUpdateGunTrackingSkelCtrl )
		pFnUpdateGunTrackingSkelCtrl = (UFunction*) UObject::GObjObjects()->Data[ 115858 ];

	AKFPawn_ZedPatriarch_Versus_execUpdateGunTrackingSkelCtrl_Parms UpdateGunTrackingSkelCtrl_Parms;

	this->ProcessEvent ( pFnUpdateGunTrackingSkelCtrl, &UpdateGunTrackingSkelCtrl_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 115856 ];

	AKFPawn_ZedPatriarch_Versus_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Timer_EnableCloak
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::Timer_EnableCloak ( )
{
	static UFunction* pFnTimer_EnableCloak = NULL;

	if ( ! pFnTimer_EnableCloak )
		pFnTimer_EnableCloak = (UFunction*) UObject::GObjObjects()->Data[ 115855 ];

	AKFPawn_ZedPatriarch_Versus_execTimer_EnableCloak_Parms Timer_EnableCloak_Parms;

	this->ProcessEvent ( pFnTimer_EnableCloak, &Timer_EnableCloak_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateCloakCharges
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::UpdateCloakCharges ( )
{
	static UFunction* pFnUpdateCloakCharges = NULL;

	if ( ! pFnUpdateCloakCharges )
		pFnUpdateCloakCharges = (UFunction*) UObject::GObjObjects()->Data[ 115854 ];

	AKFPawn_ZedPatriarch_Versus_execUpdateCloakCharges_Parms UpdateCloakCharges_Parms;

	this->ProcessEvent ( pFnUpdateCloakCharges, &UpdateCloakCharges_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.Timer_UpdateCloakCharge
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::Timer_UpdateCloakCharge ( )
{
	static UFunction* pFnTimer_UpdateCloakCharge = NULL;

	if ( ! pFnTimer_UpdateCloakCharge )
		pFnTimer_UpdateCloakCharge = (UFunction*) UObject::GObjObjects()->Data[ 115853 ];

	AKFPawn_ZedPatriarch_Versus_execTimer_UpdateCloakCharge_Parms Timer_UpdateCloakCharge_Parms;

	this->ProcessEvent ( pFnTimer_UpdateCloakCharge, &Timer_UpdateCloakCharge_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.UpdateCloakedTimer
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::UpdateCloakedTimer ( )
{
	static UFunction* pFnUpdateCloakedTimer = NULL;

	if ( ! pFnUpdateCloakedTimer )
		pFnUpdateCloakedTimer = (UFunction*) UObject::GObjObjects()->Data[ 115852 ];

	AKFPawn_ZedPatriarch_Versus_execUpdateCloakedTimer_Parms UpdateCloakedTimer_Parms;

	this->ProcessEvent ( pFnUpdateCloakedTimer, &UpdateCloakedTimer_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.SetCloaked
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::SetCloaked ( )
{
	static UFunction* pFnSetCloaked = NULL;

	if ( ! pFnSetCloaked )
		pFnSetCloaked = (UFunction*) UObject::GObjObjects()->Data[ 115850 ];

	AKFPawn_ZedPatriarch_Versus_execSetCloaked_Parms SetCloaked_Parms;

	this->ProcessEvent ( pFnSetCloaked, &SetCloaked_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.PossessedBy
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 115847 ];

	AKFPawn_ZedPatriarch_Versus_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedPatriarch_Versus.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedPatriarch_Versus::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 115845 ];

	AKFPawn_ZedPatriarch_Versus_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFPawn_Human_Versus.NotifyLocalPlayerTeamReceived
// [0x00020102] 
// Parameters infos:

void AKFPawn_Human_Versus::NotifyLocalPlayerTeamReceived ( )
{
	static UFunction* pFnNotifyLocalPlayerTeamReceived = NULL;

	if ( ! pFnNotifyLocalPlayerTeamReceived )
		pFnNotifyLocalPlayerTeamReceived = (UFunction*) UObject::GObjObjects()->Data[ 114121 ];

	AKFPawn_Human_Versus_execNotifyLocalPlayerTeamReceived_Parms NotifyLocalPlayerTeamReceived_Parms;

	this->ProcessEvent ( pFnNotifyLocalPlayerTeamReceived, &NotifyLocalPlayerTeamReceived_Parms, NULL );
};

// Function kfgamecontent.KFPawn_Human_Versus.UpdateGameplayMICParams
// [0x00020102] 
// Parameters infos:

void AKFPawn_Human_Versus::UpdateGameplayMICParams ( )
{
	static UFunction* pFnUpdateGameplayMICParams = NULL;

	if ( ! pFnUpdateGameplayMICParams )
		pFnUpdateGameplayMICParams = (UFunction*) UObject::GObjObjects()->Data[ 114118 ];

	AKFPawn_Human_Versus_execUpdateGameplayMICParams_Parms UpdateGameplayMICParams_Parms;

	this->ProcessEvent ( pFnUpdateGameplayMICParams, &UpdateGameplayMICParams_Parms, NULL );
};

// Function kfgamecontent.KFPawn_Human_Versus.SetCharacterArch
// [0x00024102] 
// Parameters infos:

void AKFPawn_Human_Versus::SetCharacterArch ( )
{
	static UFunction* pFnSetCharacterArch = NULL;

	if ( ! pFnSetCharacterArch )
		pFnSetCharacterArch = (UFunction*) UObject::GObjObjects()->Data[ 114115 ];

	AKFPawn_Human_Versus_execSetCharacterArch_Parms SetCharacterArch_Parms;

	this->ProcessEvent ( pFnSetCharacterArch, &SetCharacterArch_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawRemainingTimeUntilSpawn
// [0x00820002] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::DrawRemainingTimeUntilSpawn ( )
{
	static UFunction* pFnDrawRemainingTimeUntilSpawn = NULL;

	if ( ! pFnDrawRemainingTimeUntilSpawn )
		pFnDrawRemainingTimeUntilSpawn = (UFunction*) UObject::GObjObjects()->Data[ 113463 ];

	AKFGFXHudWrapper_Versus_execDrawRemainingTimeUntilSpawn_Parms DrawRemainingTimeUntilSpawn_Parms;

	this->ProcessEvent ( pFnDrawRemainingTimeUntilSpawn, &DrawRemainingTimeUntilSpawn_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawBossPawnIcon
// [0x00820002] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::DrawBossPawnIcon ( )
{
	static UFunction* pFnDrawBossPawnIcon = NULL;

	if ( ! pFnDrawBossPawnIcon )
		pFnDrawBossPawnIcon = (UFunction*) UObject::GObjObjects()->Data[ 113458 ];

	AKFGFXHudWrapper_Versus_execDrawBossPawnIcon_Parms DrawBossPawnIcon_Parms;

	this->ProcessEvent ( pFnDrawBossPawnIcon, &DrawBossPawnIcon_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawPreciseHumanPlayerInfo
// [0x00820002] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::DrawPreciseHumanPlayerInfo ( )
{
	static UFunction* pFnDrawPreciseHumanPlayerInfo = NULL;

	if ( ! pFnDrawPreciseHumanPlayerInfo )
		pFnDrawPreciseHumanPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 113448 ];

	AKFGFXHudWrapper_Versus_execDrawPreciseHumanPlayerInfo_Parms DrawPreciseHumanPlayerInfo_Parms;

	this->ProcessEvent ( pFnDrawPreciseHumanPlayerInfo, &DrawPreciseHumanPlayerInfo_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawFriendlyZedPawnIcon
// [0x00820102] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::DrawFriendlyZedPawnIcon ( )
{
	static UFunction* pFnDrawFriendlyZedPawnIcon = NULL;

	if ( ! pFnDrawFriendlyZedPawnIcon )
		pFnDrawFriendlyZedPawnIcon = (UFunction*) UObject::GObjObjects()->Data[ 113439 ];

	AKFGFXHudWrapper_Versus_execDrawFriendlyZedPawnIcon_Parms DrawFriendlyZedPawnIcon_Parms;

	this->ProcessEvent ( pFnDrawFriendlyZedPawnIcon, &DrawFriendlyZedPawnIcon_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.CheckAndDrawBossPawnIcon
// [0x00820102] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::CheckAndDrawBossPawnIcon ( )
{
	static UFunction* pFnCheckAndDrawBossPawnIcon = NULL;

	if ( ! pFnCheckAndDrawBossPawnIcon )
		pFnCheckAndDrawBossPawnIcon = (UFunction*) UObject::GObjObjects()->Data[ 113433 ];

	AKFGFXHudWrapper_Versus_execCheckAndDrawBossPawnIcon_Parms CheckAndDrawBossPawnIcon_Parms;

	this->ProcessEvent ( pFnCheckAndDrawBossPawnIcon, &CheckAndDrawBossPawnIcon_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.DrawHUD
// [0x00820002] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::DrawHUD ( )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 113420 ];

	AKFGFXHudWrapper_Versus_execDrawHUD_Parms DrawHUD_Parms;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.GetHUDClass
// [0x00020002] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::GetHUDClass ( )
{
	static UFunction* pFnGetHUDClass = NULL;

	if ( ! pFnGetHUDClass )
		pFnGetHUDClass = (UFunction*) UObject::GObjObjects()->Data[ 113418 ];

	AKFGFXHudWrapper_Versus_execGetHUDClass_Parms GetHUDClass_Parms;

	this->ProcessEvent ( pFnGetHUDClass, &GetHUDClass_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.CreateHUDMovie
// [0x00024002] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::CreateHUDMovie ( )
{
	static UFunction* pFnCreateHUDMovie = NULL;

	if ( ! pFnCreateHUDMovie )
		pFnCreateHUDMovie = (UFunction*) UObject::GObjObjects()->Data[ 113416 ];

	AKFGFXHudWrapper_Versus_execCreateHUDMovie_Parms CreateHUDMovie_Parms;

	this->ProcessEvent ( pFnCreateHUDMovie, &CreateHUDMovie_Parms, NULL );
};

// Function kfgamecontent.KFGFXHudWrapper_Versus.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFGFXHudWrapper_Versus::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 113414 ];

	AKFGFXHudWrapper_Versus_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ApplyGlobalDamage
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ApplyGlobalDamage ( )
{
	static UFunction* pFnApplyGlobalDamage = NULL;

	if ( ! pFnApplyGlobalDamage )
		pFnApplyGlobalDamage = (UFunction*) UObject::GObjObjects()->Data[ 113311 ];

	AKFGameInfo_WeeklySurvival_execApplyGlobalDamage_Parms ApplyGlobalDamage_Parms;

	this->ProcessEvent ( pFnApplyGlobalDamage, &ApplyGlobalDamage_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ReduceDamage
// [0x00C20002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ReduceDamage ( )
{
	static UFunction* pFnReduceDamage = NULL;

	if ( ! pFnReduceDamage )
		pFnReduceDamage = (UFunction*) UObject::GObjObjects()->Data[ 113299 ];

	AKFGameInfo_WeeklySurvival_execReduceDamage_Parms ReduceDamage_Parms;

	this->ProcessEvent ( pFnReduceDamage, &ReduceDamage_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AdjustForBeefcakeRules
// [0x00824002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::AdjustForBeefcakeRules ( )
{
	static UFunction* pFnAdjustForBeefcakeRules = NULL;

	if ( ! pFnAdjustForBeefcakeRules )
		pFnAdjustForBeefcakeRules = (UFunction*) UObject::GObjObjects()->Data[ 113290 ];

	AKFGameInfo_WeeklySurvival_execAdjustForBeefcakeRules_Parms AdjustForBeefcakeRules_Parms;

	this->ProcessEvent ( pFnAdjustForBeefcakeRules, &AdjustForBeefcakeRules_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AdjustPawnScale
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::AdjustPawnScale ( )
{
	static UFunction* pFnAdjustPawnScale = NULL;

	if ( ! pFnAdjustPawnScale )
		pFnAdjustPawnScale = (UFunction*) UObject::GObjObjects()->Data[ 113284 ];

	AKFGameInfo_WeeklySurvival_execAdjustPawnScale_Parms AdjustPawnScale_Parms;

	this->ProcessEvent ( pFnAdjustPawnScale, &AdjustPawnScale_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.DoDeathExplosion
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::DoDeathExplosion ( )
{
	static UFunction* pFnDoDeathExplosion = NULL;

	if ( ! pFnDoDeathExplosion )
		pFnDoDeathExplosion = (UFunction*) UObject::GObjObjects()->Data[ 113279 ];

	AKFGameInfo_WeeklySurvival_execDoDeathExplosion_Parms DoDeathExplosion_Parms;

	this->ProcessEvent ( pFnDoDeathExplosion, &DoDeathExplosion_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.NotifyIgnoredScream
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::NotifyIgnoredScream ( )
{
	static UFunction* pFnNotifyIgnoredScream = NULL;

	if ( ! pFnNotifyIgnoredScream )
		pFnNotifyIgnoredScream = (UFunction*) UObject::GObjObjects()->Data[ 113277 ];

	AKFGameInfo_WeeklySurvival_execNotifyIgnoredScream_Parms NotifyIgnoredScream_Parms;

	this->ProcessEvent ( pFnNotifyIgnoredScream, &NotifyIgnoredScream_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.NotifyRally
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::NotifyRally ( )
{
	static UFunction* pFnNotifyRally = NULL;

	if ( ! pFnNotifyRally )
		pFnNotifyRally = (UFunction*) UObject::GObjObjects()->Data[ 113275 ];

	AKFGameInfo_WeeklySurvival_execNotifyRally_Parms NotifyRally_Parms;

	this->ProcessEvent ( pFnNotifyRally, &NotifyRally_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ScoreKill
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ScoreKill ( )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 113271 ];

	AKFGameInfo_WeeklySurvival_execScoreKill_Parms ScoreKill_Parms;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PassiveHeal
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::PassiveHeal ( )
{
	static UFunction* pFnPassiveHeal = NULL;

	if ( ! pFnPassiveHeal )
		pFnPassiveHeal = (UFunction*) UObject::GObjObjects()->Data[ 113266 ];

	AKFGameInfo_WeeklySurvival_execPassiveHeal_Parms PassiveHeal_Parms;

	this->ProcessEvent ( pFnPassiveHeal, &PassiveHeal_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ScoreHeal
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ScoreHeal ( )
{
	static UFunction* pFnScoreHeal = NULL;

	if ( ! pFnScoreHeal )
		pFnScoreHeal = (UFunction*) UObject::GObjObjects()->Data[ 113260 ];

	AKFGameInfo_WeeklySurvival_execScoreHeal_Parms ScoreHeal_Parms;

	this->ProcessEvent ( pFnScoreHeal, &ScoreHeal_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ScoreDamage
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ScoreDamage ( )
{
	static UFunction* pFnScoreDamage = NULL;

	if ( ! pFnScoreDamage )
		pFnScoreDamage = (UFunction*) UObject::GObjObjects()->Data[ 113254 ];

	AKFGameInfo_WeeklySurvival_execScoreDamage_Parms ScoreDamage_Parms;

	this->ProcessEvent ( pFnScoreDamage, &ScoreDamage_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.RestartPlayer
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::RestartPlayer ( )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 113250 ];

	AKFGameInfo_WeeklySurvival_execRestartPlayer_Parms RestartPlayer_Parms;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AdjustStartingGrenadeCount
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::AdjustStartingGrenadeCount ( )
{
	static UFunction* pFnAdjustStartingGrenadeCount = NULL;

	if ( ! pFnAdjustStartingGrenadeCount )
		pFnAdjustStartingGrenadeCount = (UFunction*) UObject::GObjObjects()->Data[ 113247 ];

	AKFGameInfo_WeeklySurvival_execAdjustStartingGrenadeCount_Parms AdjustStartingGrenadeCount_Parms;

	this->ProcessEvent ( pFnAdjustStartingGrenadeCount, &AdjustStartingGrenadeCount_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.AllowPrimaryWeapon
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::AllowPrimaryWeapon ( )
{
	static UFunction* pFnAllowPrimaryWeapon = NULL;

	if ( ! pFnAllowPrimaryWeapon )
		pFnAllowPrimaryWeapon = (UFunction*) UObject::GObjObjects()->Data[ 113243 ];

	AKFGameInfo_WeeklySurvival_execAllowPrimaryWeapon_Parms AllowPrimaryWeapon_Parms;

	this->ProcessEvent ( pFnAllowPrimaryWeapon, &AllowPrimaryWeapon_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetGameInfoSpawnRateMod
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::GetGameInfoSpawnRateMod ( )
{
	static UFunction* pFnGetGameInfoSpawnRateMod = NULL;

	if ( ! pFnGetGameInfoSpawnRateMod )
		pFnGetGameInfoSpawnRateMod = (UFunction*) UObject::GObjObjects()->Data[ 113241 ];

	AKFGameInfo_WeeklySurvival_execGetGameInfoSpawnRateMod_Parms GetGameInfoSpawnRateMod_Parms;

	this->ProcessEvent ( pFnGetGameInfoSpawnRateMod, &GetGameInfoSpawnRateMod_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetMonsterDefaults
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetMonsterDefaults ( )
{
	static UFunction* pFnSetMonsterDefaults = NULL;

	if ( ! pFnSetMonsterDefaults )
		pFnSetMonsterDefaults = (UFunction*) UObject::GObjObjects()->Data[ 113238 ];

	AKFGameInfo_WeeklySurvival_execSetMonsterDefaults_Parms SetMonsterDefaults_Parms;

	this->ProcessEvent ( pFnSetMonsterDefaults, &SetMonsterDefaults_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetBossAISpawnType
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::GetBossAISpawnType ( )
{
	static UFunction* pFnGetBossAISpawnType = NULL;

	if ( ! pFnGetBossAISpawnType )
		pFnGetBossAISpawnType = (UFunction*) UObject::GObjObjects()->Data[ 113234 ];

	AKFGameInfo_WeeklySurvival_execGetBossAISpawnType_Parms GetBossAISpawnType_Parms;

	this->ProcessEvent ( pFnGetBossAISpawnType, &GetBossAISpawnType_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetAISpawnType
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::GetAISpawnType ( )
{
	static UFunction* pFnGetAISpawnType = NULL;

	if ( ! pFnGetAISpawnType )
		pFnGetAISpawnType = (UFunction*) UObject::GObjObjects()->Data[ 113229 ];

	AKFGameInfo_WeeklySurvival_execGetAISpawnType_Parms GetAISpawnType_Parms;

	this->ProcessEvent ( pFnGetAISpawnType, &GetAISpawnType_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ResetPickups
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ResetPickups ( )
{
	static UFunction* pFnResetPickups = NULL;

	if ( ! pFnResetPickups )
		pFnResetPickups = (UFunction*) UObject::GObjObjects()->Data[ 113225 ];

	AKFGameInfo_WeeklySurvival_execResetPickups_Parms ResetPickups_Parms;

	this->ProcessEvent ( pFnResetPickups, &ResetPickups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ResetAllPickups
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ResetAllPickups ( )
{
	static UFunction* pFnResetAllPickups = NULL;

	if ( ! pFnResetAllPickups )
		pFnResetAllPickups = (UFunction*) UObject::GObjObjects()->Data[ 113223 ];

	AKFGameInfo_WeeklySurvival_execResetAllPickups_Parms ResetAllPickups_Parms;

	this->ProcessEvent ( pFnResetAllPickups, &ResetAllPickups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.InitAllPickups
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::InitAllPickups ( )
{
	static UFunction* pFnInitAllPickups = NULL;

	if ( ! pFnInitAllPickups )
		pFnInitAllPickups = (UFunction*) UObject::GObjObjects()->Data[ 113222 ];

	AKFGameInfo_WeeklySurvival_execInitAllPickups_Parms InitAllPickups_Parms;

	this->ProcessEvent ( pFnInitAllPickups, &InitAllPickups_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetupNextTrader
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetupNextTrader ( )
{
	static UFunction* pFnSetupNextTrader = NULL;

	if ( ! pFnSetupNextTrader )
		pFnSetupNextTrader = (UFunction*) UObject::GObjObjects()->Data[ 113218 ];

	AKFGameInfo_WeeklySurvival_execSetupNextTrader_Parms SetupNextTrader_Parms;

	this->ProcessEvent ( pFnSetupNextTrader, &SetupNextTrader_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.OpenTrader
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::OpenTrader ( )
{
	static UFunction* pFnOpenTrader = NULL;

	if ( ! pFnOpenTrader )
		pFnOpenTrader = (UFunction*) UObject::GObjObjects()->Data[ 113217 ];

	AKFGameInfo_WeeklySurvival_execOpenTrader_Parms OpenTrader_Parms;

	this->ProcessEvent ( pFnOpenTrader, &OpenTrader_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetAdditionalBossSpawns
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::GetAdditionalBossSpawns ( )
{
	static UFunction* pFnGetAdditionalBossSpawns = NULL;

	if ( ! pFnGetAdditionalBossSpawns )
		pFnGetAdditionalBossSpawns = (UFunction*) UObject::GObjObjects()->Data[ 113215 ];

	AKFGameInfo_WeeklySurvival_execGetAdditionalBossSpawns_Parms GetAdditionalBossSpawns_Parms;

	this->ProcessEvent ( pFnGetAdditionalBossSpawns, &GetAdditionalBossSpawns_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PauseAdditionalBossWaves
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::PauseAdditionalBossWaves ( )
{
	static UFunction* pFnPauseAdditionalBossWaves = NULL;

	if ( ! pFnPauseAdditionalBossWaves )
		pFnPauseAdditionalBossWaves = (UFunction*) UObject::GObjObjects()->Data[ 113214 ];

	AKFGameInfo_WeeklySurvival_execPauseAdditionalBossWaves_Parms PauseAdditionalBossWaves_Parms;

	this->ProcessEvent ( pFnPauseAdditionalBossWaves, &PauseAdditionalBossWaves_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SpawnBossWave
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SpawnBossWave ( )
{
	static UFunction* pFnSpawnBossWave = NULL;

	if ( ! pFnSpawnBossWave )
		pFnSpawnBossWave = (UFunction*) UObject::GObjObjects()->Data[ 113213 ];

	AKFGameInfo_WeeklySurvival_execSpawnBossWave_Parms SpawnBossWave_Parms;

	this->ProcessEvent ( pFnSpawnBossWave, &SpawnBossWave_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.BossCameraZedTimeRecheck
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::BossCameraZedTimeRecheck ( )
{
	static UFunction* pFnBossCameraZedTimeRecheck = NULL;

	if ( ! pFnBossCameraZedTimeRecheck )
		pFnBossCameraZedTimeRecheck = (UFunction*) UObject::GObjObjects()->Data[ 113210 ];

	AKFGameInfo_WeeklySurvival_execBossCameraZedTimeRecheck_Parms BossCameraZedTimeRecheck_Parms;

	this->ProcessEvent ( pFnBossCameraZedTimeRecheck, &BossCameraZedTimeRecheck_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.StartWave
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::StartWave ( )
{
	static UFunction* pFnStartWave = NULL;

	if ( ! pFnStartWave )
		pFnStartWave = (UFunction*) UObject::GObjObjects()->Data[ 113209 ];

	AKFGameInfo_WeeklySurvival_execStartWave_Parms StartWave_Parms;

	this->ProcessEvent ( pFnStartWave, &StartWave_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GetTotalWaveCountScale
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::GetTotalWaveCountScale ( )
{
	static UFunction* pFnGetTotalWaveCountScale = NULL;

	if ( ! pFnGetTotalWaveCountScale )
		pFnGetTotalWaveCountScale = (UFunction*) UObject::GObjObjects()->Data[ 113207 ];

	AKFGameInfo_WeeklySurvival_execGetTotalWaveCountScale_Parms GetTotalWaveCountScale_Parms;

	this->ProcessEvent ( pFnGetTotalWaveCountScale, &GetTotalWaveCountScale_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ModifyGroundSpeed
// [0x00420002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ModifyGroundSpeed ( )
{
	static UFunction* pFnModifyGroundSpeed = NULL;

	if ( ! pFnModifyGroundSpeed )
		pFnModifyGroundSpeed = (UFunction*) UObject::GObjObjects()->Data[ 113202 ];

	AKFGameInfo_WeeklySurvival_execModifyGroundSpeed_Parms ModifyGroundSpeed_Parms;

	this->ProcessEvent ( pFnModifyGroundSpeed, &ModifyGroundSpeed_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.EndOfMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::EndOfMatch ( )
{
	static UFunction* pFnEndOfMatch = NULL;

	if ( ! pFnEndOfMatch )
		pFnEndOfMatch = (UFunction*) UObject::GObjObjects()->Data[ 113199 ];

	AKFGameInfo_WeeklySurvival_execEndOfMatch_Parms EndOfMatch_Parms;

	this->ProcessEvent ( pFnEndOfMatch, &EndOfMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ClearZedTimePCTimers
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ClearZedTimePCTimers ( )
{
	static UFunction* pFnClearZedTimePCTimers = NULL;

	if ( ! pFnClearZedTimePCTimers )
		pFnClearZedTimePCTimers = (UFunction*) UObject::GObjObjects()->Data[ 113197 ];

	AKFGameInfo_WeeklySurvival_execClearZedTimePCTimers_Parms ClearZedTimePCTimers_Parms;

	this->ProcessEvent ( pFnClearZedTimePCTimers, &ClearZedTimePCTimers_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.WaveEnded
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::WaveEnded ( )
{
	static UFunction* pFnWaveEnded = NULL;

	if ( ! pFnWaveEnded )
		pFnWaveEnded = (UFunction*) UObject::GObjObjects()->Data[ 113195 ];

	AKFGameInfo_WeeklySurvival_execWaveEnded_Parms WaveEnded_Parms;

	this->ProcessEvent ( pFnWaveEnded, &WaveEnded_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.TickZedTime
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::TickZedTime ( )
{
	static UFunction* pFnTickZedTime = NULL;

	if ( ! pFnTickZedTime )
		pFnTickZedTime = (UFunction*) UObject::GObjObjects()->Data[ 113193 ];

	AKFGameInfo_WeeklySurvival_execTickZedTime_Parms TickZedTime_Parms;

	this->ProcessEvent ( pFnTickZedTime, &TickZedTime_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.Tick
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 113191 ];

	AKFGameInfo_WeeklySurvival_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_WeeklySurvival::eventPostLogin ( )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 113187 ];

	AKFGameInfo_WeeklySurvival_eventPostLogin_Parms PostLogin_Parms;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.CreateDifficultyInfo
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::CreateDifficultyInfo ( )
{
	static UFunction* pFnCreateDifficultyInfo = NULL;

	if ( ! pFnCreateDifficultyInfo )
		pFnCreateDifficultyInfo = (UFunction*) UObject::GObjObjects()->Data[ 113185 ];

	AKFGameInfo_WeeklySurvival_execCreateDifficultyInfo_Parms CreateDifficultyInfo_Parms;

	this->ProcessEvent ( pFnCreateDifficultyInfo, &CreateDifficultyInfo_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.StartMatch
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 113184 ];

	AKFGameInfo_WeeklySurvival_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.ResetPermanentZed
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::ResetPermanentZed ( )
{
	static UFunction* pFnResetPermanentZed = NULL;

	if ( ! pFnResetPermanentZed )
		pFnResetPermanentZed = (UFunction*) UObject::GObjObjects()->Data[ 113181 ];

	AKFGameInfo_WeeklySurvival_execResetPermanentZed_Parms ResetPermanentZed_Parms;

	this->ProcessEvent ( pFnResetPermanentZed, &ResetPermanentZed_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetPermanentZedTime
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetPermanentZedTime ( )
{
	static UFunction* pFnSetPermanentZedTime = NULL;

	if ( ! pFnSetPermanentZedTime )
		pFnSetPermanentZedTime = (UFunction*) UObject::GObjObjects()->Data[ 113179 ];

	AKFGameInfo_WeeklySurvival_execSetPermanentZedTime_Parms SetPermanentZedTime_Parms;

	this->ProcessEvent ( pFnSetPermanentZedTime, &SetPermanentZedTime_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetWorldInfoOverrides
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetWorldInfoOverrides ( )
{
	static UFunction* pFnSetWorldInfoOverrides = NULL;

	if ( ! pFnSetWorldInfoOverrides )
		pFnSetWorldInfoOverrides = (UFunction*) UObject::GObjObjects()->Data[ 113178 ];

	AKFGameInfo_WeeklySurvival_execSetWorldInfoOverrides_Parms SetWorldInfoOverrides_Parms;

	this->ProcessEvent ( pFnSetWorldInfoOverrides, &SetWorldInfoOverrides_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetSpawnPointOverrides
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetSpawnPointOverrides ( )
{
	static UFunction* pFnSetSpawnPointOverrides = NULL;

	if ( ! pFnSetSpawnPointOverrides )
		pFnSetSpawnPointOverrides = (UFunction*) UObject::GObjObjects()->Data[ 113176 ];

	AKFGameInfo_WeeklySurvival_execSetSpawnPointOverrides_Parms SetSpawnPointOverrides_Parms;

	this->ProcessEvent ( pFnSetSpawnPointOverrides, &SetSpawnPointOverrides_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetZedTimeOverrides
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetZedTimeOverrides ( )
{
	static UFunction* pFnSetZedTimeOverrides = NULL;

	if ( ! pFnSetZedTimeOverrides )
		pFnSetZedTimeOverrides = (UFunction*) UObject::GObjObjects()->Data[ 113175 ];

	AKFGameInfo_WeeklySurvival_execSetZedTimeOverrides_Parms SetZedTimeOverrides_Parms;

	this->ProcessEvent ( pFnSetZedTimeOverrides, &SetZedTimeOverrides_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetPickupItemList
// [0x00820002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetPickupItemList ( )
{
	static UFunction* pFnSetPickupItemList = NULL;

	if ( ! pFnSetPickupItemList )
		pFnSetPickupItemList = (UFunction*) UObject::GObjObjects()->Data[ 113171 ];

	AKFGameInfo_WeeklySurvival_execSetPickupItemList_Parms SetPickupItemList_Parms;

	this->ProcessEvent ( pFnSetPickupItemList, &SetPickupItemList_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetGameLength
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetGameLength ( )
{
	static UFunction* pFnSetGameLength = NULL;

	if ( ! pFnSetGameLength )
		pFnSetGameLength = (UFunction*) UObject::GObjObjects()->Data[ 113170 ];

	AKFGameInfo_WeeklySurvival_execSetGameLength_Parms SetGameLength_Parms;

	this->ProcessEvent ( pFnSetGameLength, &SetGameLength_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetGameDifficulty
// [0x00020002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::SetGameDifficulty ( )
{
	static UFunction* pFnSetGameDifficulty = NULL;

	if ( ! pFnSetGameDifficulty )
		pFnSetGameDifficulty = (UFunction*) UObject::GObjObjects()->Data[ 113169 ];

	AKFGameInfo_WeeklySurvival_execSetGameDifficulty_Parms SetGameDifficulty_Parms;

	this->ProcessEvent ( pFnSetGameDifficulty, &SetGameDifficulty_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_WeeklySurvival::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 113168 ];

	AKFGameInfo_WeeklySurvival_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.InitGame
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_WeeklySurvival::eventInitGame ( )
{
	static UFunction* pFnInitGame = NULL;

	if ( ! pFnInitGame )
		pFnInitGame = (UFunction*) UObject::GObjObjects()->Data[ 113164 ];

	AKFGameInfo_WeeklySurvival_eventInitGame_Parms InitGame_Parms;

	this->ProcessEvent ( pFnInitGame, &InitGame_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GametypeChecksWaveLength
// [0x00022002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::GametypeChecksWaveLength ( )
{
	static UFunction* pFnGametypeChecksWaveLength = NULL;

	if ( ! pFnGametypeChecksWaveLength )
		pFnGametypeChecksWaveLength = (UFunction*) UObject::GObjObjects()->Data[ 113162 ];

	AKFGameInfo_WeeklySurvival_execGametypeChecksWaveLength_Parms GametypeChecksWaveLength_Parms;

	this->ProcessEvent ( pFnGametypeChecksWaveLength, &GametypeChecksWaveLength_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.GametypeChecksDifficulty
// [0x00022002] 
// Parameters infos:

void AKFGameInfo_WeeklySurvival::GametypeChecksDifficulty ( )
{
	static UFunction* pFnGametypeChecksDifficulty = NULL;

	if ( ! pFnGametypeChecksDifficulty )
		pFnGametypeChecksDifficulty = (UFunction*) UObject::GObjObjects()->Data[ 113160 ];

	AKFGameInfo_WeeklySurvival_execGametypeChecksDifficulty_Parms GametypeChecksDifficulty_Parms;

	this->ProcessEvent ( pFnGametypeChecksDifficulty, &GametypeChecksDifficulty_Parms, NULL );
};

// Function kfgamecontent.KFGameInfo_WeeklySurvival.SetGameType
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void AKFGameInfo_WeeklySurvival::eventSetGameType ( )
{
	static UFunction* pFnSetGameType = NULL;

	if ( ! pFnSetGameType )
		pFnSetGameType = (UFunction*) UObject::GObjObjects()->Data[ 113154 ];

	AKFGameInfo_WeeklySurvival_eventSetGameType_Parms SetGameType_Parms;

	this->ProcessEvent ( pFnSetGameType, &SetGameType_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.GetRallyBoostResistance
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedClot_AlphaKing::GetRallyBoostResistance ( )
{
	static UFunction* pFnGetRallyBoostResistance = NULL;

	if ( ! pFnGetRallyBoostResistance )
		pFnGetRallyBoostResistance = (UFunction*) UObject::GObjObjects()->Data[ 114327 ];

	AKFPawn_ZedClot_AlphaKing_execGetRallyBoostResistance_Parms GetRallyBoostResistance_Parms;

	this->ProcessEvent ( pFnGetRallyBoostResistance, &GetRallyBoostResistance_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.GetRallyBoostDamage
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedClot_AlphaKing::GetRallyBoostDamage ( )
{
	static UFunction* pFnGetRallyBoostDamage = NULL;

	if ( ! pFnGetRallyBoostDamage )
		pFnGetRallyBoostDamage = (UFunction*) UObject::GObjObjects()->Data[ 114324 ];

	AKFPawn_ZedClot_AlphaKing_execGetRallyBoostDamage_Parms GetRallyBoostDamage_Parms;

	this->ProcessEvent ( pFnGetRallyBoostDamage, &GetRallyBoostDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.Rally
// [0x00024102] 
// Parameters infos:

void AKFPawn_ZedClot_AlphaKing::Rally ( )
{
	static UFunction* pFnRally = NULL;

	if ( ! pFnRally )
		pFnRally = (UFunction*) UObject::GObjObjects()->Data[ 114314 ];

	AKFPawn_ZedClot_AlphaKing_execRally_Parms Rally_Parms;

	this->ProcessEvent ( pFnRally, &Rally_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.PossessedBy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedClot_AlphaKing::eventPossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 114310 ];

	AKFPawn_ZedClot_AlphaKing_eventPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedClot_AlphaKing.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedClot_AlphaKing::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 114307 ];

	AKFPawn_ZedClot_AlphaKing_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.Timer_CheckForExplode
// [0x00820102] 
// Parameters infos:

void AKFPawn_ZedCrawlerKing::Timer_CheckForExplode ( )
{
	static UFunction* pFnTimer_CheckForExplode = NULL;

	if ( ! pFnTimer_CheckForExplode )
		pFnTimer_CheckForExplode = (UFunction*) UObject::GObjObjects()->Data[ 114504 ];

	AKFPawn_ZedCrawlerKing_execTimer_CheckForExplode_Parms Timer_CheckForExplode_Parms;

	this->ProcessEvent ( pFnTimer_CheckForExplode, &Timer_CheckForExplode_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.CancelExplosion
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedCrawlerKing::CancelExplosion ( )
{
	static UFunction* pFnCancelExplosion = NULL;

	if ( ! pFnCancelExplosion )
		pFnCancelExplosion = (UFunction*) UObject::GObjObjects()->Data[ 114503 ];

	AKFPawn_ZedCrawlerKing_execCancelExplosion_Parms CancelExplosion_Parms;

	this->ProcessEvent ( pFnCancelExplosion, &CancelExplosion_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.PlayDying
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedCrawlerKing::PlayDying ( )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 114500 ];

	AKFPawn_ZedCrawlerKing_execPlayDying_Parms PlayDying_Parms;

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.Died
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedCrawlerKing::Died ( )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 114495 ];

	AKFPawn_ZedCrawlerKing_execDied_Parms Died_Parms;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.PlayHeadAsplode
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedCrawlerKing::PlayHeadAsplode ( )
{
	static UFunction* pFnPlayHeadAsplode = NULL;

	if ( ! pFnPlayHeadAsplode )
		pFnPlayHeadAsplode = (UFunction*) UObject::GObjObjects()->Data[ 114494 ];

	AKFPawn_ZedCrawlerKing_execPlayHeadAsplode_Parms PlayHeadAsplode_Parms;

	this->ProcessEvent ( pFnPlayHeadAsplode, &PlayHeadAsplode_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedCrawlerKing.CauseHeadTrauma
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedCrawlerKing::CauseHeadTrauma ( )
{
	static UFunction* pFnCauseHeadTrauma = NULL;

	if ( ! pFnCauseHeadTrauma )
		pFnCauseHeadTrauma = (UFunction*) UObject::GObjObjects()->Data[ 114492 ];

	AKFPawn_ZedCrawlerKing_execCauseHeadTrauma_Parms CauseHeadTrauma_Parms;

	this->ProcessEvent ( pFnCauseHeadTrauma, &CauseHeadTrauma_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.ClearBuffIcons
// [0x00020000] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::ClearBuffIcons ( )
{
	static UFunction* pFnClearBuffIcons = NULL;

	if ( ! pFnClearBuffIcons )
		pFnClearBuffIcons = (UFunction*) UObject::GObjObjects()->Data[ 113399 ];

	UKFGFxHUD_PlayerStatusVersus_execClearBuffIcons_Parms ClearBuffIcons_Parms;

	this->ProcessEvent ( pFnClearBuffIcons, &ClearBuffIcons_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.ShowActiveIndicators
// [0x00020000] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::ShowActiveIndicators ( )
{
	static UFunction* pFnShowActiveIndicators = NULL;

	if ( ! pFnShowActiveIndicators )
		pFnShowActiveIndicators = (UFunction*) UObject::GObjObjects()->Data[ 113396 ];

	UKFGFxHUD_PlayerStatusVersus_execShowActiveIndicators_Parms ShowActiveIndicators_Parms;

	this->ProcessEvent ( pFnShowActiveIndicators, &ShowActiveIndicators_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateHealer
// [0x00020000] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::UpdateHealer ( )
{
	static UFunction* pFnUpdateHealer = NULL;

	if ( ! pFnUpdateHealer )
		pFnUpdateHealer = (UFunction*) UObject::GObjObjects()->Data[ 113395 ];

	UKFGFxHUD_PlayerStatusVersus_execUpdateHealer_Parms UpdateHealer_Parms;

	this->ProcessEvent ( pFnUpdateHealer, &UpdateHealer_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdatePerk
// [0x00020000] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::UpdatePerk ( )
{
	static UFunction* pFnUpdatePerk = NULL;

	if ( ! pFnUpdatePerk )
		pFnUpdatePerk = (UFunction*) UObject::GObjObjects()->Data[ 113394 ];

	UKFGFxHUD_PlayerStatusVersus_execUpdatePerk_Parms UpdatePerk_Parms;

	this->ProcessEvent ( pFnUpdatePerk, &UpdatePerk_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateArmor
// [0x00020000] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::UpdateArmor ( )
{
	static UFunction* pFnUpdateArmor = NULL;

	if ( ! pFnUpdateArmor )
		pFnUpdateArmor = (UFunction*) UObject::GObjObjects()->Data[ 113393 ];

	UKFGFxHUD_PlayerStatusVersus_execUpdateArmor_Parms UpdateArmor_Parms;

	this->ProcessEvent ( pFnUpdateArmor, &UpdateArmor_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateXP
// [0x00020000] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::UpdateXP ( )
{
	static UFunction* pFnUpdateXP = NULL;

	if ( ! pFnUpdateXP )
		pFnUpdateXP = (UFunction*) UObject::GObjObjects()->Data[ 113388 ];

	UKFGFxHUD_PlayerStatusVersus_execUpdateXP_Parms UpdateXP_Parms;

	this->ProcessEvent ( pFnUpdateXP, &UpdateXP_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateHealth
// [0x00020002] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::UpdateHealth ( )
{
	static UFunction* pFnUpdateHealth = NULL;

	if ( ! pFnUpdateHealth )
		pFnUpdateHealth = (UFunction*) UObject::GObjObjects()->Data[ 113387 ];

	UKFGFxHUD_PlayerStatusVersus_execUpdateHealth_Parms UpdateHealth_Parms;

	this->ProcessEvent ( pFnUpdateHealth, &UpdateHealth_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.UpdateCharacterName
// [0x00020002] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::UpdateCharacterName ( )
{
	static UFunction* pFnUpdateCharacterName = NULL;

	if ( ! pFnUpdateCharacterName )
		pFnUpdateCharacterName = (UFunction*) UObject::GObjObjects()->Data[ 113385 ];

	UKFGFxHUD_PlayerStatusVersus_execUpdateCharacterName_Parms UpdateCharacterName_Parms;

	this->ProcessEvent ( pFnUpdateCharacterName, &UpdateCharacterName_Parms, NULL );
};

// Function kfgamecontent.KFGFxHUD_PlayerStatusVersus.TickHud
// [0x00020002] 
// Parameters infos:

void UKFGFxHUD_PlayerStatusVersus::TickHud ( )
{
	static UFunction* pFnTickHud = NULL;

	if ( ! pFnTickHud )
		pFnTickHud = (UFunction*) UObject::GObjObjects()->Data[ 113383 ];

	UKFGFxHUD_PlayerStatusVersus_execTickHud_Parms TickHud_Parms;

	this->ProcessEvent ( pFnTickHud, &TickHud_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.PawnDied
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_HUD_Versus::PawnDied ( )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 113489 ];

	UKFGFxMoviePlayer_HUD_Versus_execPawnDied_Parms PawnDied_Parms;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.ReceivePawn
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_HUD_Versus::ReceivePawn ( )
{
	static UFunction* pFnReceivePawn = NULL;

	if ( ! pFnReceivePawn )
		pFnReceivePawn = (UFunction*) UObject::GObjObjects()->Data[ 113487 ];

	UKFGFxMoviePlayer_HUD_Versus_execReceivePawn_Parms ReceivePawn_Parms;

	this->ProcessEvent ( pFnReceivePawn, &ReceivePawn_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.WidgetInitialized
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UKFGFxMoviePlayer_HUD_Versus::eventWidgetInitialized ( )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->Data[ 113482 ];

	UKFGFxMoviePlayer_HUD_Versus_eventWidgetInitialized_Parms WidgetInitialized_Parms;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );
};

// Function kfgamecontent.KFGFxMoviePlayer_HUD_Versus.TickHud
// [0x00020002] 
// Parameters infos:

void UKFGFxMoviePlayer_HUD_Versus::TickHud ( )
{
	static UFunction* pFnTickHud = NULL;

	if ( ! pFnTickHud )
		pFnTickHud = (UFunction*) UObject::GObjObjects()->Data[ 113480 ];

	UKFGFxMoviePlayer_HUD_Versus_execTickHud_Parms TickHud_Parms;

	this->ProcessEvent ( pFnTickHud, &TickHud_Parms, NULL );
};

// Function kfgamecontent.KFGFxTutorialContainer.ReplaceTextArray
// [0x00422002] 
// Parameters infos:

void UKFGFxTutorialContainer::ReplaceTextArray ( )
{
	static UFunction* pFnReplaceTextArray = NULL;

	if ( ! pFnReplaceTextArray )
		pFnReplaceTextArray = (UFunction*) UObject::GObjObjects()->Data[ 113554 ];

	UKFGFxTutorialContainer_execReplaceTextArray_Parms ReplaceTextArray_Parms;

	this->ProcessEvent ( pFnReplaceTextArray, &ReplaceTextArray_Parms, NULL );
};

// Function kfgamecontent.KFGFxTutorialContainer.SetPopUpData
// [0x00C20002] 
// Parameters infos:

void UKFGFxTutorialContainer::SetPopUpData ( )
{
	static UFunction* pFnSetPopUpData = NULL;

	if ( ! pFnSetPopUpData )
		pFnSetPopUpData = (UFunction*) UObject::GObjObjects()->Data[ 113543 ];

	UKFGFxTutorialContainer_execSetPopUpData_Parms SetPopUpData_Parms;

	this->ProcessEvent ( pFnSetPopUpData, &SetPopUpData_Parms, NULL );
};

// Function kfgamecontent.KFGFxTutorialContainer.LocalizeText
// [0x00020002] 
// Parameters infos:

void UKFGFxTutorialContainer::LocalizeText ( )
{
	static UFunction* pFnLocalizeText = NULL;

	if ( ! pFnLocalizeText )
		pFnLocalizeText = (UFunction*) UObject::GObjObjects()->Data[ 113541 ];

	UKFGFxTutorialContainer_execLocalizeText_Parms LocalizeText_Parms;

	this->ProcessEvent ( pFnLocalizeText, &LocalizeText_Parms, NULL );
};

// Function kfgamecontent.KFGFxTutorialContainer.UpdateUsingGamePad
// [0x00020002] 
// Parameters infos:

void UKFGFxTutorialContainer::UpdateUsingGamePad ( )
{
	static UFunction* pFnUpdateUsingGamePad = NULL;

	if ( ! pFnUpdateUsingGamePad )
		pFnUpdateUsingGamePad = (UFunction*) UObject::GObjObjects()->Data[ 113539 ];

	UKFGFxTutorialContainer_execUpdateUsingGamePad_Parms UpdateUsingGamePad_Parms;

	this->ProcessEvent ( pFnUpdateUsingGamePad, &UpdateUsingGamePad_Parms, NULL );
};

// Function kfgamecontent.KFGFxTutorialContainer.InitMenu
// [0x00020002] 
// Parameters infos:

void UKFGFxTutorialContainer::InitMenu ( )
{
	static UFunction* pFnInitMenu = NULL;

	if ( ! pFnInitMenu )
		pFnInitMenu = (UFunction*) UObject::GObjObjects()->Data[ 113538 ];

	UKFGFxTutorialContainer_execInitMenu_Parms InitMenu_Parms;

	this->ProcessEvent ( pFnInitMenu, &InitMenu_Parms, NULL );
};

// Function kfgamecontent.KFInventory_Money.DenyPickupQuery
// [0x00020002] 
// Parameters infos:

void AKFInventory_Money::DenyPickupQuery ( )
{
	static UFunction* pFnDenyPickupQuery = NULL;

	if ( ! pFnDenyPickupQuery )
		pFnDenyPickupQuery = (UFunction*) UObject::GObjObjects()->Data[ 113607 ];

	AKFInventory_Money_execDenyPickupQuery_Parms DenyPickupQuery_Parms;

	this->ProcessEvent ( pFnDenyPickupQuery, &DenyPickupQuery_Parms, NULL );
};

// Function kfgamecontent.KFInventory_Money.DropFrom
// [0x00020002] 
// Parameters infos:

void AKFInventory_Money::DropFrom ( )
{
	static UFunction* pFnDropFrom = NULL;

	if ( ! pFnDropFrom )
		pFnDropFrom = (UFunction*) UObject::GObjObjects()->Data[ 113601 ];

	AKFInventory_Money_execDropFrom_Parms DropFrom_Parms;

	this->ProcessEvent ( pFnDropFrom, &DropFrom_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.NotifyWinners
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AKFMG_TargetGame::NotifyWinners ( )
{
	static UFunction* pFnNotifyWinners = NULL;

	if ( ! pFnNotifyWinners )
		pFnNotifyWinners = (UFunction*) UObject::GObjObjects()->Data[ 113644 ];

	AKFMG_TargetGame_execNotifyWinners_Parms NotifyWinners_Parms;

	this->ProcessEvent ( pFnNotifyWinners, &NotifyWinners_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.MinigameComplete
// [0x00020002] 
// Parameters infos:

void AKFMG_TargetGame::MinigameComplete ( )
{
	static UFunction* pFnMinigameComplete = NULL;

	if ( ! pFnMinigameComplete )
		pFnMinigameComplete = (UFunction*) UObject::GObjObjects()->Data[ 113640 ];

	AKFMG_TargetGame_execMinigameComplete_Parms MinigameComplete_Parms;

	this->ProcessEvent ( pFnMinigameComplete, &MinigameComplete_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.ResetGame
// [0x00020002] 
// Parameters infos:

void AKFMG_TargetGame::ResetGame ( )
{
	static UFunction* pFnResetGame = NULL;

	if ( ! pFnResetGame )
		pFnResetGame = (UFunction*) UObject::GObjObjects()->Data[ 113639 ];

	AKFMG_TargetGame_execResetGame_Parms ResetGame_Parms;

	this->ProcessEvent ( pFnResetGame, &ResetGame_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.FinalizeGame
// [0x00020102] 
// Parameters infos:

void AKFMG_TargetGame::FinalizeGame ( )
{
	static UFunction* pFnFinalizeGame = NULL;

	if ( ! pFnFinalizeGame )
		pFnFinalizeGame = (UFunction*) UObject::GObjObjects()->Data[ 113638 ];

	AKFMG_TargetGame_execFinalizeGame_Parms FinalizeGame_Parms;

	this->ProcessEvent ( pFnFinalizeGame, &FinalizeGame_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.TargetHit
// [0x00020002] 
// Parameters infos:

void AKFMG_TargetGame::TargetHit ( )
{
	static UFunction* pFnTargetHit = NULL;

	if ( ! pFnTargetHit )
		pFnTargetHit = (UFunction*) UObject::GObjObjects()->Data[ 113635 ];

	AKFMG_TargetGame_execTargetHit_Parms TargetHit_Parms;

	this->ProcessEvent ( pFnTargetHit, &TargetHit_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMG_TargetGame::eventCanPlayAkEvent ( )
{
	static UFunction* pFnCanPlayAkEvent = NULL;

	if ( ! pFnCanPlayAkEvent )
		pFnCanPlayAkEvent = (UFunction*) UObject::GObjObjects()->Data[ 113631 ];

	AKFMG_TargetGame_eventCanPlayAkEvent_Parms CanPlayAkEvent_Parms;

	this->ProcessEvent ( pFnCanPlayAkEvent, &CanPlayAkEvent_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.UpdateBase
// [0x00020100] 
// Parameters infos:

void AKFMG_TargetGame::UpdateBase ( )
{
	static UFunction* pFnUpdateBase = NULL;

	if ( ! pFnUpdateBase )
		pFnUpdateBase = (UFunction*) UObject::GObjObjects()->Data[ 113629 ];

	AKFMG_TargetGame_execUpdateBase_Parms UpdateBase_Parms;

	this->ProcessEvent ( pFnUpdateBase, &UpdateBase_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.CanBeActivated
// [0x00020002] 
// Parameters infos:

void AKFMG_TargetGame::CanBeActivated ( )
{
	static UFunction* pFnCanBeActivated = NULL;

	if ( ! pFnCanBeActivated )
		pFnCanBeActivated = (UFunction*) UObject::GObjObjects()->Data[ 113626 ];

	AKFMG_TargetGame_execCanBeActivated_Parms CanBeActivated_Parms;

	this->ProcessEvent ( pFnCanBeActivated, &CanBeActivated_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.Deactivated
// [0x00020002] 
// Parameters infos:

void AKFMG_TargetGame::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 113625 ];

	AKFMG_TargetGame_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function kfgamecontent.KFMG_TargetGame.Activated
// [0x00020002] 
// Parameters infos:

void AKFMG_TargetGame::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 113623 ];

	AKFMG_TargetGame_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFSeqEvent_MinigameEndCondition.AllLevelsComplete
// [0x00020002] 
// Parameters infos:

void UKFSeqEvent_MinigameEndCondition::AllLevelsComplete ( )
{
	static UFunction* pFnAllLevelsComplete = NULL;

	if ( ! pFnAllLevelsComplete )
		pFnAllLevelsComplete = (UFunction*) UObject::GObjObjects()->Data[ 120685 ];

	UKFSeqEvent_MinigameEndCondition_execAllLevelsComplete_Parms AllLevelsComplete_Parms;

	this->ProcessEvent ( pFnAllLevelsComplete, &AllLevelsComplete_Parms, NULL );
};

// Function kfgamecontent.KFSeqEvent_MinigameEndCondition.MinigameComplete
// [0x00024002] 
// Parameters infos:

void UKFSeqEvent_MinigameEndCondition::MinigameComplete ( )
{
	static UFunction* pFnMinigameComplete = NULL;

	if ( ! pFnMinigameComplete )
		pFnMinigameComplete = (UFunction*) UObject::GObjObjects()->Data[ 120679 ];

	UKFSeqEvent_MinigameEndCondition_execMinigameComplete_Parms MinigameComplete_Parms;

	this->ProcessEvent ( pFnMinigameComplete, &MinigameComplete_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.IsAlive
// [0x00020102] 
// Parameters infos:

void AKFMGA_Target::IsAlive ( )
{
	static UFunction* pFnIsAlive = NULL;

	if ( ! pFnIsAlive )
		pFnIsAlive = (UFunction*) UObject::GObjObjects()->Data[ 113713 ];

	AKFMGA_Target_execIsAlive_Parms IsAlive_Parms;

	this->ProcessEvent ( pFnIsAlive, &IsAlive_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.PlayDeath
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target::eventPlayDeath ( )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 113957 ];

	AKFMGA_Target_eventPlayDeath_Parms PlayDeath_Parms;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.Finalize
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target::eventFinalize ( )
{
	static UFunction* pFnFinalize = NULL;

	if ( ! pFnFinalize )
		pFnFinalize = (UFunction*) UObject::GObjObjects()->Data[ 113956 ];

	AKFMGA_Target_eventFinalize_Parms Finalize_Parms;

	this->ProcessEvent ( pFnFinalize, &Finalize_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.SetInactive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target::eventSetInactive ( )
{
	static UFunction* pFnSetInactive = NULL;

	if ( ! pFnSetInactive )
		pFnSetInactive = (UFunction*) UObject::GObjObjects()->Data[ 113955 ];

	AKFMGA_Target_eventSetInactive_Parms SetInactive_Parms;

	this->ProcessEvent ( pFnSetInactive, &SetInactive_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.SetActive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target::eventSetActive ( )
{
	static UFunction* pFnSetActive = NULL;

	if ( ! pFnSetActive )
		pFnSetActive = (UFunction*) UObject::GObjObjects()->Data[ 113954 ];

	AKFMGA_Target_eventSetActive_Parms SetActive_Parms;

	this->ProcessEvent ( pFnSetActive, &SetActive_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.Reset
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 113953 ];

	AKFMGA_Target_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.InvalidHit
// [0x00020102] 
// Parameters infos:

void AKFMGA_Target::InvalidHit ( )
{
	static UFunction* pFnInvalidHit = NULL;

	if ( ! pFnInvalidHit )
		pFnInvalidHit = (UFunction*) UObject::GObjObjects()->Data[ 113950 ];

	AKFMGA_Target_execInvalidHit_Parms InvalidHit_Parms;

	this->ProcessEvent ( pFnInvalidHit, &InvalidHit_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.ValidHit
// [0x00020002] 
// Parameters infos:

void AKFMGA_Target::ValidHit ( )
{
	static UFunction* pFnValidHit = NULL;

	if ( ! pFnValidHit )
		pFnValidHit = (UFunction*) UObject::GObjObjects()->Data[ 113946 ];

	AKFMGA_Target_execValidHit_Parms ValidHit_Parms;

	this->ProcessEvent ( pFnValidHit, &ValidHit_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.TakeDamage
// [0x00024902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target::eventTakeDamage ( )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 113937 ];

	AKFMGA_Target_eventTakeDamage_Parms TakeDamage_Parms;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.TakeRadiusDamage
// [0x00024102] 
// Parameters infos:

void AKFMGA_Target::TakeRadiusDamage ( )
{
	static UFunction* pFnTakeRadiusDamage = NULL;

	if ( ! pFnTakeRadiusDamage )
		pFnTakeRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 113927 ];

	AKFMGA_Target_execTakeRadiusDamage_Parms TakeRadiusDamage_Parms;

	this->ProcessEvent ( pFnTakeRadiusDamage, &TakeRadiusDamage_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.AddToOwnerArray
// [0x00020102] 
// Parameters infos:

void AKFMGA_Target::AddToOwnerArray ( )
{
	static UFunction* pFnAddToOwnerArray = NULL;

	if ( ! pFnAddToOwnerArray )
		pFnAddToOwnerArray = (UFunction*) UObject::GObjObjects()->Data[ 113926 ];

	AKFMGA_Target_execAddToOwnerArray_Parms AddToOwnerArray_Parms;

	this->ProcessEvent ( pFnAddToOwnerArray, &AddToOwnerArray_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 113924 ];

	AKFMGA_Target_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.FinalizeVictory
// [0x00020102] 
// Parameters infos:

void AKFMG_BloatDunk::FinalizeVictory ( )
{
	static UFunction* pFnFinalizeVictory = NULL;

	if ( ! pFnFinalizeVictory )
		pFnFinalizeVictory = (UFunction*) UObject::GObjObjects()->Data[ 113708 ];

	AKFMG_BloatDunk_execFinalizeVictory_Parms FinalizeVictory_Parms;

	this->ProcessEvent ( pFnFinalizeVictory, &FinalizeVictory_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.SetBloatRagdoll
// [0x00020102] 
// Parameters infos:

void AKFMG_BloatDunk::SetBloatRagdoll ( )
{
	static UFunction* pFnSetBloatRagdoll = NULL;

	if ( ! pFnSetBloatRagdoll )
		pFnSetBloatRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 113707 ];

	AKFMG_BloatDunk_execSetBloatRagdoll_Parms SetBloatRagdoll_Parms;

	this->ProcessEvent ( pFnSetBloatRagdoll, &SetBloatRagdoll_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.HandleDelayedShutdown
// [0x00020102] 
// Parameters infos:

void AKFMG_BloatDunk::HandleDelayedShutdown ( )
{
	static UFunction* pFnHandleDelayedShutdown = NULL;

	if ( ! pFnHandleDelayedShutdown )
		pFnHandleDelayedShutdown = (UFunction*) UObject::GObjObjects()->Data[ 113704 ];

	AKFMG_BloatDunk_execHandleDelayedShutdown_Parms HandleDelayedShutdown_Parms;

	this->ProcessEvent ( pFnHandleDelayedShutdown, &HandleDelayedShutdown_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.FinalizeGame
// [0x00020102] 
// Parameters infos:

void AKFMG_BloatDunk::FinalizeGame ( )
{
	static UFunction* pFnFinalizeGame = NULL;

	if ( ! pFnFinalizeGame )
		pFnFinalizeGame = (UFunction*) UObject::GObjObjects()->Data[ 113702 ];

	AKFMG_BloatDunk_execFinalizeGame_Parms FinalizeGame_Parms;

	this->ProcessEvent ( pFnFinalizeGame, &FinalizeGame_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.MinigameComplete
// [0x00020002] 
// Parameters infos:

void AKFMG_BloatDunk::MinigameComplete ( )
{
	static UFunction* pFnMinigameComplete = NULL;

	if ( ! pFnMinigameComplete )
		pFnMinigameComplete = (UFunction*) UObject::GObjObjects()->Data[ 113700 ];

	AKFMG_BloatDunk_execMinigameComplete_Parms MinigameComplete_Parms;

	this->ProcessEvent ( pFnMinigameComplete, &MinigameComplete_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.UpdateBase
// [0x00020102] 
// Parameters infos:

void AKFMG_BloatDunk::UpdateBase ( )
{
	static UFunction* pFnUpdateBase = NULL;

	if ( ! pFnUpdateBase )
		pFnUpdateBase = (UFunction*) UObject::GObjObjects()->Data[ 113698 ];

	AKFMG_BloatDunk_execUpdateBase_Parms UpdateBase_Parms;

	this->ProcessEvent ( pFnUpdateBase, &UpdateBase_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.TargetHit
// [0x00020002] 
// Parameters infos:

void AKFMG_BloatDunk::TargetHit ( )
{
	static UFunction* pFnTargetHit = NULL;

	if ( ! pFnTargetHit )
		pFnTargetHit = (UFunction*) UObject::GObjObjects()->Data[ 113695 ];

	AKFMG_BloatDunk_execTargetHit_Parms TargetHit_Parms;

	this->ProcessEvent ( pFnTargetHit, &TargetHit_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.ActivateTargets
// [0x00020002] 
// Parameters infos:

void AKFMG_BloatDunk::ActivateTargets ( )
{
	static UFunction* pFnActivateTargets = NULL;

	if ( ! pFnActivateTargets )
		pFnActivateTargets = (UFunction*) UObject::GObjObjects()->Data[ 113690 ];

	AKFMG_BloatDunk_execActivateTargets_Parms ActivateTargets_Parms;

	this->ProcessEvent ( pFnActivateTargets, &ActivateTargets_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.StartupGame
// [0x00020102] 
// Parameters infos:

void AKFMG_BloatDunk::StartupGame ( )
{
	static UFunction* pFnStartupGame = NULL;

	if ( ! pFnStartupGame )
		pFnStartupGame = (UFunction*) UObject::GObjObjects()->Data[ 113689 ];

	AKFMG_BloatDunk_execStartupGame_Parms StartupGame_Parms;

	this->ProcessEvent ( pFnStartupGame, &StartupGame_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.HandleDelayedStartup
// [0x00820102] 
// Parameters infos:

void AKFMG_BloatDunk::HandleDelayedStartup ( )
{
	static UFunction* pFnHandleDelayedStartup = NULL;

	if ( ! pFnHandleDelayedStartup )
		pFnHandleDelayedStartup = (UFunction*) UObject::GObjObjects()->Data[ 113684 ];

	AKFMG_BloatDunk_execHandleDelayedStartup_Parms HandleDelayedStartup_Parms;

	this->ProcessEvent ( pFnHandleDelayedStartup, &HandleDelayedStartup_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.Reset
// [0x00020102] 
// Parameters infos:

void AKFMG_BloatDunk::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 113683 ];

	AKFMG_BloatDunk_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.Activated
// [0x00020002] 
// Parameters infos:

void AKFMG_BloatDunk::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 113681 ];

	AKFMG_BloatDunk_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.SpawnTarget
// [0x00020002] 
// Parameters infos:

void AKFMG_BloatDunk::SpawnTarget ( )
{
	static UFunction* pFnSpawnTarget = NULL;

	if ( ! pFnSpawnTarget )
		pFnSpawnTarget = (UFunction*) UObject::GObjObjects()->Data[ 113676 ];

	AKFMG_BloatDunk_execSpawnTarget_Parms SpawnTarget_Parms;

	this->ProcessEvent ( pFnSpawnTarget, &SpawnTarget_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFMG_BloatDunk::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 113674 ];

	AKFMG_BloatDunk_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AKFMG_BloatDunk::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 113671 ];

	AKFMG_BloatDunk_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFMG_BloatDunk.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMG_BloatDunk::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 113669 ];

	AKFMG_BloatDunk_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFMGA_TargetGame.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_TargetGame::eventCanPlayAkEvent ( )
{
	static UFunction* pFnCanPlayAkEvent = NULL;

	if ( ! pFnCanPlayAkEvent )
		pFnCanPlayAkEvent = (UFunction*) UObject::GObjObjects()->Data[ 114071 ];

	AKFMGA_TargetGame_eventCanPlayAkEvent_Parms CanPlayAkEvent_Parms;

	this->ProcessEvent ( pFnCanPlayAkEvent, &CanPlayAkEvent_Parms, NULL );
};

// Function kfgamecontent.KFMGA_TargetGame.Deactivated
// [0x00020000] 
// Parameters infos:

void AKFMGA_TargetGame::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 114070 ];

	AKFMGA_TargetGame_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_TargetGame.Activated
// [0x00020000] 
// Parameters infos:

void AKFMGA_TargetGame::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 114068 ];

	AKFMGA_TargetGame_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_TargetGame.CanBeActivated
// [0x00020000] 
// Parameters infos:

void AKFMGA_TargetGame::CanBeActivated ( )
{
	static UFunction* pFnCanBeActivated = NULL;

	if ( ! pFnCanBeActivated )
		pFnCanBeActivated = (UFunction*) UObject::GObjObjects()->Data[ 114065 ];

	AKFMGA_TargetGame_execCanBeActivated_Parms CanBeActivated_Parms;

	this->ProcessEvent ( pFnCanBeActivated, &CanBeActivated_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.Finalize
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::Finalize ( )
{
	static UFunction* pFnFinalize = NULL;

	if ( ! pFnFinalize )
		pFnFinalize = (UFunction*) UObject::GObjObjects()->Data[ 113755 ];

	AKFMG_RiggedTargetGame_execFinalize_Parms Finalize_Parms;

	this->ProcessEvent ( pFnFinalize, &Finalize_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.HandleDelayedShutdown
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::HandleDelayedShutdown ( )
{
	static UFunction* pFnHandleDelayedShutdown = NULL;

	if ( ! pFnHandleDelayedShutdown )
		pFnHandleDelayedShutdown = (UFunction*) UObject::GObjObjects()->Data[ 113753 ];

	AKFMG_RiggedTargetGame_execHandleDelayedShutdown_Parms HandleDelayedShutdown_Parms;

	this->ProcessEvent ( pFnHandleDelayedShutdown, &HandleDelayedShutdown_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.FinalizeGame
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::FinalizeGame ( )
{
	static UFunction* pFnFinalizeGame = NULL;

	if ( ! pFnFinalizeGame )
		pFnFinalizeGame = (UFunction*) UObject::GObjObjects()->Data[ 113751 ];

	AKFMG_RiggedTargetGame_execFinalizeGame_Parms FinalizeGame_Parms;

	this->ProcessEvent ( pFnFinalizeGame, &FinalizeGame_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.MinigameComplete
// [0x00020002] 
// Parameters infos:

void AKFMG_RiggedTargetGame::MinigameComplete ( )
{
	static UFunction* pFnMinigameComplete = NULL;

	if ( ! pFnMinigameComplete )
		pFnMinigameComplete = (UFunction*) UObject::GObjObjects()->Data[ 113749 ];

	AKFMG_RiggedTargetGame_execMinigameComplete_Parms MinigameComplete_Parms;

	this->ProcessEvent ( pFnMinigameComplete, &MinigameComplete_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMG_RiggedTargetGame::eventCanPlayAkEvent ( )
{
	static UFunction* pFnCanPlayAkEvent = NULL;

	if ( ! pFnCanPlayAkEvent )
		pFnCanPlayAkEvent = (UFunction*) UObject::GObjObjects()->Data[ 113743 ];

	AKFMG_RiggedTargetGame_eventCanPlayAkEvent_Parms CanPlayAkEvent_Parms;

	this->ProcessEvent ( pFnCanPlayAkEvent, &CanPlayAkEvent_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.UpdateBase
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::UpdateBase ( )
{
	static UFunction* pFnUpdateBase = NULL;

	if ( ! pFnUpdateBase )
		pFnUpdateBase = (UFunction*) UObject::GObjObjects()->Data[ 113741 ];

	AKFMG_RiggedTargetGame_execUpdateBase_Parms UpdateBase_Parms;

	this->ProcessEvent ( pFnUpdateBase, &UpdateBase_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.TargetHit
// [0x00020002] 
// Parameters infos:

void AKFMG_RiggedTargetGame::TargetHit ( )
{
	static UFunction* pFnTargetHit = NULL;

	if ( ! pFnTargetHit )
		pFnTargetHit = (UFunction*) UObject::GObjObjects()->Data[ 113738 ];

	AKFMG_RiggedTargetGame_execTargetHit_Parms TargetHit_Parms;

	this->ProcessEvent ( pFnTargetHit, &TargetHit_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.DelayedStart
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::DelayedStart ( )
{
	static UFunction* pFnDelayedStart = NULL;

	if ( ! pFnDelayedStart )
		pFnDelayedStart = (UFunction*) UObject::GObjObjects()->Data[ 113736 ];

	AKFMG_RiggedTargetGame_execDelayedStart_Parms DelayedStart_Parms;

	this->ProcessEvent ( pFnDelayedStart, &DelayedStart_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.StartupGame
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::StartupGame ( )
{
	static UFunction* pFnStartupGame = NULL;

	if ( ! pFnStartupGame )
		pFnStartupGame = (UFunction*) UObject::GObjObjects()->Data[ 113734 ];

	AKFMG_RiggedTargetGame_execStartupGame_Parms StartupGame_Parms;

	this->ProcessEvent ( pFnStartupGame, &StartupGame_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.SwitchAnim
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::SwitchAnim ( )
{
	static UFunction* pFnSwitchAnim = NULL;

	if ( ! pFnSwitchAnim )
		pFnSwitchAnim = (UFunction*) UObject::GObjObjects()->Data[ 113729 ];

	AKFMG_RiggedTargetGame_execSwitchAnim_Parms SwitchAnim_Parms;

	this->ProcessEvent ( pFnSwitchAnim, &SwitchAnim_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.Activated
// [0x00020002] 
// Parameters infos:

void AKFMG_RiggedTargetGame::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 113727 ];

	AKFMG_RiggedTargetGame_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.Reset
// [0x00020102] 
// Parameters infos:

void AKFMG_RiggedTargetGame::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 113725 ];

	AKFMG_RiggedTargetGame_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFMG_RiggedTargetGame::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 113721 ];

	AKFMG_RiggedTargetGame_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFMG_RiggedTargetGame.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMG_RiggedTargetGame::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 113719 ];

	AKFMG_RiggedTargetGame_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.ResetGame
// [0x00020002] 
// Parameters infos:

void AKFMG_MultilevelTargetGame::ResetGame ( )
{
	static UFunction* pFnResetGame = NULL;

	if ( ! pFnResetGame )
		pFnResetGame = (UFunction*) UObject::GObjObjects()->Data[ 113801 ];

	AKFMG_MultilevelTargetGame_execResetGame_Parms ResetGame_Parms;

	this->ProcessEvent ( pFnResetGame, &ResetGame_Parms, NULL );
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.CheckFullCompletion
// [0x00020002] 
// Parameters infos:

void AKFMG_MultilevelTargetGame::CheckFullCompletion ( )
{
	static UFunction* pFnCheckFullCompletion = NULL;

	if ( ! pFnCheckFullCompletion )
		pFnCheckFullCompletion = (UFunction*) UObject::GObjObjects()->Data[ 113797 ];

	AKFMG_MultilevelTargetGame_execCheckFullCompletion_Parms CheckFullCompletion_Parms;

	this->ProcessEvent ( pFnCheckFullCompletion, &CheckFullCompletion_Parms, NULL );
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.MinigameComplete
// [0x00020002] 
// Parameters infos:

void AKFMG_MultilevelTargetGame::MinigameComplete ( )
{
	static UFunction* pFnMinigameComplete = NULL;

	if ( ! pFnMinigameComplete )
		pFnMinigameComplete = (UFunction*) UObject::GObjObjects()->Data[ 113792 ];

	AKFMG_MultilevelTargetGame_execMinigameComplete_Parms MinigameComplete_Parms;

	this->ProcessEvent ( pFnMinigameComplete, &MinigameComplete_Parms, NULL );
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.Deactivated
// [0x00020002] 
// Parameters infos:

void AKFMG_MultilevelTargetGame::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 113791 ];

	AKFMG_MultilevelTargetGame_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.Activated
// [0x00020002] 
// Parameters infos:

void AKFMG_MultilevelTargetGame::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 113789 ];

	AKFMG_MultilevelTargetGame_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.CanBeActivated
// [0x00020002] 
// Parameters infos:

void AKFMG_MultilevelTargetGame::CanBeActivated ( )
{
	static UFunction* pFnCanBeActivated = NULL;

	if ( ! pFnCanBeActivated )
		pFnCanBeActivated = (UFunction*) UObject::GObjObjects()->Data[ 113785 ];

	AKFMG_MultilevelTargetGame_execCanBeActivated_Parms CanBeActivated_Parms;

	this->ProcessEvent ( pFnCanBeActivated, &CanBeActivated_Parms, NULL );
};

// Function kfgamecontent.KFMG_MultilevelTargetGame.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFMG_MultilevelTargetGame::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 113784 ];

	AKFMG_MultilevelTargetGame_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.RideStopped
// [0x00020000] 
// Parameters infos:

void AKFMG_SwingRide::RideStopped ( )
{
	static UFunction* pFnRideStopped = NULL;

	if ( ! pFnRideStopped )
		pFnRideStopped = (UFunction*) UObject::GObjObjects()->Data[ 113839 ];

	AKFMG_SwingRide_execRideStopped_Parms RideStopped_Parms;

	this->ProcessEvent ( pFnRideStopped, &RideStopped_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.Deactivated
// [0x00020102] 
// Parameters infos:

void AKFMG_SwingRide::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 113823 ];

	AKFMG_SwingRide_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.Activated
// [0x00020102] 
// Parameters infos:

void AKFMG_SwingRide::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 113821 ];

	AKFMG_SwingRide_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.SetSpinDownCurve
// [0x00020102] 
// Parameters infos:

void AKFMG_SwingRide::SetSpinDownCurve ( )
{
	static UFunction* pFnSetSpinDownCurve = NULL;

	if ( ! pFnSetSpinDownCurve )
		pFnSetSpinDownCurve = (UFunction*) UObject::GObjObjects()->Data[ 113820 ];

	AKFMG_SwingRide_execSetSpinDownCurve_Parms SetSpinDownCurve_Parms;

	this->ProcessEvent ( pFnSetSpinDownCurve, &SetSpinDownCurve_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.SetSpinUpCurve
// [0x00020102] 
// Parameters infos:

void AKFMG_SwingRide::SetSpinUpCurve ( )
{
	static UFunction* pFnSetSpinUpCurve = NULL;

	if ( ! pFnSetSpinUpCurve )
		pFnSetSpinUpCurve = (UFunction*) UObject::GObjObjects()->Data[ 113819 ];

	AKFMG_SwingRide_execSetSpinUpCurve_Parms SetSpinUpCurve_Parms;

	this->ProcessEvent ( pFnSetSpinUpCurve, &SetSpinUpCurve_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMG_SwingRide::eventCanPlayAkEvent ( )
{
	static UFunction* pFnCanPlayAkEvent = NULL;

	if ( ! pFnCanPlayAkEvent )
		pFnCanPlayAkEvent = (UFunction*) UObject::GObjObjects()->Data[ 113815 ];

	AKFMG_SwingRide_eventCanPlayAkEvent_Parms CanPlayAkEvent_Parms;

	this->ProcessEvent ( pFnCanPlayAkEvent, &CanPlayAkEvent_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.CanBeActivated
// [0x00020002] 
// Parameters infos:

void AKFMG_SwingRide::CanBeActivated ( )
{
	static UFunction* pFnCanBeActivated = NULL;

	if ( ! pFnCanBeActivated )
		pFnCanBeActivated = (UFunction*) UObject::GObjObjects()->Data[ 113812 ];

	AKFMG_SwingRide_execCanBeActivated_Parms CanBeActivated_Parms;

	this->ProcessEvent ( pFnCanBeActivated, &CanBeActivated_Parms, NULL );
};

// Function kfgamecontent.KFMG_SwingRide.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMG_SwingRide::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 113810 ];

	AKFMG_SwingRide_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.EndMovement
// [0x00020100] 
// Parameters infos:

void AKFMGA_AnimatedTrap::EndMovement ( )
{
	static UFunction* pFnEndMovement = NULL;

	if ( ! pFnEndMovement )
		pFnEndMovement = (UFunction*) UObject::GObjObjects()->Data[ 113893 ];

	AKFMGA_AnimatedTrap_execEndMovement_Parms EndMovement_Parms;

	this->ProcessEvent ( pFnEndMovement, &EndMovement_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.CanBeActivated
// [0x00020002] 
// Parameters infos:

void AKFMGA_AnimatedTrap::CanBeActivated ( )
{
	static UFunction* pFnCanBeActivated = NULL;

	if ( ! pFnCanBeActivated )
		pFnCanBeActivated = (UFunction*) UObject::GObjObjects()->Data[ 113890 ];

	AKFMGA_AnimatedTrap_execCanBeActivated_Parms CanBeActivated_Parms;

	this->ProcessEvent ( pFnCanBeActivated, &CanBeActivated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.SetMoveDeactivationCurve
// [0x00020102] 
// Parameters infos:

void AKFMGA_AnimatedTrap::SetMoveDeactivationCurve ( )
{
	static UFunction* pFnSetMoveDeactivationCurve = NULL;

	if ( ! pFnSetMoveDeactivationCurve )
		pFnSetMoveDeactivationCurve = (UFunction*) UObject::GObjObjects()->Data[ 113889 ];

	AKFMGA_AnimatedTrap_execSetMoveDeactivationCurve_Parms SetMoveDeactivationCurve_Parms;

	this->ProcessEvent ( pFnSetMoveDeactivationCurve, &SetMoveDeactivationCurve_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.SetMoveActivationCurve
// [0x00020102] 
// Parameters infos:

void AKFMGA_AnimatedTrap::SetMoveActivationCurve ( )
{
	static UFunction* pFnSetMoveActivationCurve = NULL;

	if ( ! pFnSetMoveActivationCurve )
		pFnSetMoveActivationCurve = (UFunction*) UObject::GObjObjects()->Data[ 113888 ];

	AKFMGA_AnimatedTrap_execSetMoveActivationCurve_Parms SetMoveActivationCurve_Parms;

	this->ProcessEvent ( pFnSetMoveActivationCurve, &SetMoveActivationCurve_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayDeactivationIdle
// [0x00020102] 
// Parameters infos:

void AKFMGA_AnimatedTrap::PlayDeactivationIdle ( )
{
	static UFunction* pFnPlayDeactivationIdle = NULL;

	if ( ! pFnPlayDeactivationIdle )
		pFnPlayDeactivationIdle = (UFunction*) UObject::GObjObjects()->Data[ 113887 ];

	AKFMGA_AnimatedTrap_execPlayDeactivationIdle_Parms PlayDeactivationIdle_Parms;

	this->ProcessEvent ( pFnPlayDeactivationIdle, &PlayDeactivationIdle_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayDeactivation
// [0x00020102] 
// Parameters infos:

void AKFMGA_AnimatedTrap::PlayDeactivation ( )
{
	static UFunction* pFnPlayDeactivation = NULL;

	if ( ! pFnPlayDeactivation )
		pFnPlayDeactivation = (UFunction*) UObject::GObjObjects()->Data[ 113886 ];

	AKFMGA_AnimatedTrap_execPlayDeactivation_Parms PlayDeactivation_Parms;

	this->ProcessEvent ( pFnPlayDeactivation, &PlayDeactivation_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayActivationIdle
// [0x00020102] 
// Parameters infos:

void AKFMGA_AnimatedTrap::PlayActivationIdle ( )
{
	static UFunction* pFnPlayActivationIdle = NULL;

	if ( ! pFnPlayActivationIdle )
		pFnPlayActivationIdle = (UFunction*) UObject::GObjObjects()->Data[ 113885 ];

	AKFMGA_AnimatedTrap_execPlayActivationIdle_Parms PlayActivationIdle_Parms;

	this->ProcessEvent ( pFnPlayActivationIdle, &PlayActivationIdle_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PlayActivation
// [0x00020102] 
// Parameters infos:

void AKFMGA_AnimatedTrap::PlayActivation ( )
{
	static UFunction* pFnPlayActivation = NULL;

	if ( ! pFnPlayActivation )
		pFnPlayActivation = (UFunction*) UObject::GObjObjects()->Data[ 113884 ];

	AKFMGA_AnimatedTrap_execPlayActivation_Parms PlayActivation_Parms;

	this->ProcessEvent ( pFnPlayActivation, &PlayActivation_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.Deactivated
// [0x00020002] 
// Parameters infos:

void AKFMGA_AnimatedTrap::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 113883 ];

	AKFMGA_AnimatedTrap_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.Activated
// [0x00020002] 
// Parameters infos:

void AKFMGA_AnimatedTrap::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 113881 ];

	AKFMGA_AnimatedTrap_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.CanPlayAkEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_AnimatedTrap::eventCanPlayAkEvent ( )
{
	static UFunction* pFnCanPlayAkEvent = NULL;

	if ( ! pFnCanPlayAkEvent )
		pFnCanPlayAkEvent = (UFunction*) UObject::GObjObjects()->Data[ 113877 ];

	AKFMGA_AnimatedTrap_eventCanPlayAkEvent_Parms CanPlayAkEvent_Parms;

	this->ProcessEvent ( pFnCanPlayAkEvent, &CanPlayAkEvent_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_AnimatedTrap::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 113876 ];

	AKFMGA_AnimatedTrap_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFMGA_AnimatedTrap.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_AnimatedTrap::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 113874 ];

	AKFMGA_AnimatedTrap_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.Finalize
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_DoshTossPit::eventFinalize ( )
{
	static UFunction* pFnFinalize = NULL;

	if ( ! pFnFinalize )
		pFnFinalize = (UFunction*) UObject::GObjObjects()->Data[ 114002 ];

	AKFMGA_DoshTossPit_eventFinalize_Parms Finalize_Parms;

	this->ProcessEvent ( pFnFinalize, &Finalize_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.SetInactive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_DoshTossPit::eventSetInactive ( )
{
	static UFunction* pFnSetInactive = NULL;

	if ( ! pFnSetInactive )
		pFnSetInactive = (UFunction*) UObject::GObjObjects()->Data[ 114001 ];

	AKFMGA_DoshTossPit_eventSetInactive_Parms SetInactive_Parms;

	this->ProcessEvent ( pFnSetInactive, &SetInactive_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.SetActive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_DoshTossPit::eventSetActive ( )
{
	static UFunction* pFnSetActive = NULL;

	if ( ! pFnSetActive )
		pFnSetActive = (UFunction*) UObject::GObjObjects()->Data[ 114000 ];

	AKFMGA_DoshTossPit_eventSetActive_Parms SetActive_Parms;

	this->ProcessEvent ( pFnSetActive, &SetActive_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.PlayDeath
// [0x00020102] 
// Parameters infos:

void AKFMGA_DoshTossPit::PlayDeath ( )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 113999 ];

	AKFMGA_DoshTossPit_execPlayDeath_Parms PlayDeath_Parms;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.SetBucketLidState
// [0x00020102] 
// Parameters infos:

void AKFMGA_DoshTossPit::SetBucketLidState ( )
{
	static UFunction* pFnSetBucketLidState = NULL;

	if ( ! pFnSetBucketLidState )
		pFnSetBucketLidState = (UFunction*) UObject::GObjObjects()->Data[ 113994 ];

	AKFMGA_DoshTossPit_execSetBucketLidState_Parms SetBucketLidState_Parms;

	this->ProcessEvent ( pFnSetBucketLidState, &SetBucketLidState_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.Reset
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_DoshTossPit::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 113992 ];

	AKFMGA_DoshTossPit_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.DoshHit
// [0x00020002] 
// Parameters infos:

void AKFMGA_DoshTossPit::DoshHit ( )
{
	static UFunction* pFnDoshHit = NULL;

	if ( ! pFnDoshHit )
		pFnDoshHit = (UFunction*) UObject::GObjObjects()->Data[ 113988 ];

	AKFMGA_DoshTossPit_execDoshHit_Parms DoshHit_Parms;

	this->ProcessEvent ( pFnDoshHit, &DoshHit_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.ValidHit
// [0x00020002] 
// Parameters infos:

void AKFMGA_DoshTossPit::ValidHit ( )
{
	static UFunction* pFnValidHit = NULL;

	if ( ! pFnValidHit )
		pFnValidHit = (UFunction*) UObject::GObjObjects()->Data[ 113985 ];

	AKFMGA_DoshTossPit_execValidHit_Parms ValidHit_Parms;

	this->ProcessEvent ( pFnValidHit, &ValidHit_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_DoshTossPit::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 113980 ];

	AKFMGA_DoshTossPit_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_DoshTossPit::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 113978 ];

	AKFMGA_DoshTossPit_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFMGA_DoshTossPit.TakeDamage
// [0x00024900] ( FUNC_Event )
// Parameters infos:

void AKFMGA_DoshTossPit::eventTakeDamage ( )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 113970 ];

	AKFMGA_DoshTossPit_eventTakeDamage_Parms TakeDamage_Parms;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.SetMoveActivationCurve
// [0x00020102] 
// Parameters infos:

void AKFMGA_Rollercoaster::SetMoveActivationCurve ( )
{
	static UFunction* pFnSetMoveActivationCurve = NULL;

	if ( ! pFnSetMoveActivationCurve )
		pFnSetMoveActivationCurve = (UFunction*) UObject::GObjObjects()->Data[ 114033 ];

	AKFMGA_Rollercoaster_execSetMoveActivationCurve_Parms SetMoveActivationCurve_Parms;

	this->ProcessEvent ( pFnSetMoveActivationCurve, &SetMoveActivationCurve_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.PlayDeactivation
// [0x00020102] 
// Parameters infos:

void AKFMGA_Rollercoaster::PlayDeactivation ( )
{
	static UFunction* pFnPlayDeactivation = NULL;

	if ( ! pFnPlayDeactivation )
		pFnPlayDeactivation = (UFunction*) UObject::GObjObjects()->Data[ 114032 ];

	AKFMGA_Rollercoaster_execPlayDeactivation_Parms PlayDeactivation_Parms;

	this->ProcessEvent ( pFnPlayDeactivation, &PlayDeactivation_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.PlayActivationIdle
// [0x00020102] 
// Parameters infos:

void AKFMGA_Rollercoaster::PlayActivationIdle ( )
{
	static UFunction* pFnPlayActivationIdle = NULL;

	if ( ! pFnPlayActivationIdle )
		pFnPlayActivationIdle = (UFunction*) UObject::GObjObjects()->Data[ 114031 ];

	AKFMGA_Rollercoaster_execPlayActivationIdle_Parms PlayActivationIdle_Parms;

	this->ProcessEvent ( pFnPlayActivationIdle, &PlayActivationIdle_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.Deactivated
// [0x00020002] 
// Parameters infos:

void AKFMGA_Rollercoaster::Deactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 114030 ];

	AKFMGA_Rollercoaster_execDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.Activated
// [0x00020002] 
// Parameters infos:

void AKFMGA_Rollercoaster::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 114028 ];

	AKFMGA_Rollercoaster_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Rollercoaster::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 114026 ];

	AKFMGA_Rollercoaster_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.CanBeActivated
// [0x00020002] 
// Parameters infos:

void AKFMGA_Rollercoaster::CanBeActivated ( )
{
	static UFunction* pFnCanBeActivated = NULL;

	if ( ! pFnCanBeActivated )
		pFnCanBeActivated = (UFunction*) UObject::GObjObjects()->Data[ 114023 ];

	AKFMGA_Rollercoaster_execCanBeActivated_Parms CanBeActivated_Parms;

	this->ProcessEvent ( pFnCanBeActivated, &CanBeActivated_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Rollercoaster.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Rollercoaster::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 114022 ];

	AKFMGA_Rollercoaster_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.SetInactive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target_BloatDunk::eventSetInactive ( )
{
	static UFunction* pFnSetInactive = NULL;

	if ( ! pFnSetInactive )
		pFnSetInactive = (UFunction*) UObject::GObjObjects()->Data[ 114054 ];

	AKFMGA_Target_BloatDunk_eventSetInactive_Parms SetInactive_Parms;

	this->ProcessEvent ( pFnSetInactive, &SetInactive_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.SetActive
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target_BloatDunk::eventSetActive ( )
{
	static UFunction* pFnSetActive = NULL;

	if ( ! pFnSetActive )
		pFnSetActive = (UFunction*) UObject::GObjObjects()->Data[ 114053 ];

	AKFMGA_Target_BloatDunk_eventSetActive_Parms SetActive_Parms;

	this->ProcessEvent ( pFnSetActive, &SetActive_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.Reset
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFMGA_Target_BloatDunk::eventReset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 114052 ];

	AKFMGA_Target_BloatDunk_eventReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function kfgamecontent.KFMGA_Target_BloatDunk.ValidHit
// [0x00020002] 
// Parameters infos:

void AKFMGA_Target_BloatDunk::ValidHit ( )
{
	static UFunction* pFnValidHit = NULL;

	if ( ! pFnValidHit )
		pFnValidHit = (UFunction*) UObject::GObjObjects()->Data[ 114049 ];

	AKFMGA_Target_BloatDunk_execValidHit_Parms ValidHit_Parms;

	this->ProcessEvent ( pFnValidHit, &ValidHit_Parms, NULL );
};

// Function kfgamecontent.KFMGVolume_DoshToss.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFMGVolume_DoshToss::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 114080 ];

	AKFMGVolume_DoshToss_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFvolume_RagdollThrow.Touch
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AKFvolume_RagdollThrow::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 114100 ];

	AKFvolume_RagdollThrow_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFSM_Emerge_Crawler.PushOverlappingHumans
// [0x00020000] 
// Parameters infos:

void UKFSM_Emerge_Crawler::PushOverlappingHumans ( )
{
	static UFunction* pFnPushOverlappingHumans = NULL;

	if ( ! pFnPushOverlappingHumans )
		pFnPushOverlappingHumans = (UFunction*) UObject::GObjObjects()->Data[ 120726 ];

	UKFSM_Emerge_Crawler_execPushOverlappingHumans_Parms PushOverlappingHumans_Parms;

	this->ProcessEvent ( pFnPushOverlappingHumans, &PushOverlappingHumans_Parms, NULL );
};

// Function kfgamecontent.KFSM_Emerge_Crawler.GetEmergeAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_Emerge_Crawler::GetEmergeAnim ( )
{
	static UFunction* pFnGetEmergeAnim = NULL;

	if ( ! pFnGetEmergeAnim )
		pFnGetEmergeAnim = (UFunction*) UObject::GObjObjects()->Data[ 120722 ];

	UKFSM_Emerge_Crawler_execGetEmergeAnim_Parms GetEmergeAnim_Parms;

	this->ProcessEvent ( pFnGetEmergeAnim, &GetEmergeAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_Emerge_Crawler.SetCrawlerPostEmergeFlags
// [0x00020000] 
// Parameters infos:

void UKFSM_Emerge_Crawler::SetCrawlerPostEmergeFlags ( )
{
	static UFunction* pFnSetCrawlerPostEmergeFlags = NULL;

	if ( ! pFnSetCrawlerPostEmergeFlags )
		pFnSetCrawlerPostEmergeFlags = (UFunction*) UObject::GObjObjects()->Data[ 120720 ];

	UKFSM_Emerge_Crawler_execSetCrawlerPostEmergeFlags_Parms SetCrawlerPostEmergeFlags_Parms;

	this->ProcessEvent ( pFnSetCrawlerPostEmergeFlags, &SetCrawlerPostEmergeFlags_Parms, NULL );
};

// Function kfgamecontent.KFSM_Emerge_Crawler.PlayEmerge
// [0x00020002] 
// Parameters infos:

void UKFSM_Emerge_Crawler::PlayEmerge ( )
{
	static UFunction* pFnPlayEmerge = NULL;

	if ( ! pFnPlayEmerge )
		pFnPlayEmerge = (UFunction*) UObject::GObjObjects()->Data[ 120717 ];

	UKFSM_Emerge_Crawler_execPlayEmerge_Parms PlayEmerge_Parms;

	this->ProcessEvent ( pFnPlayEmerge, &PlayEmerge_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerCrawler_Suicide.TriggerExplosion
// [0x00026002] 
// Parameters infos:

void UKFSM_PlayerCrawler_Suicide::TriggerExplosion ( )
{
	static UFunction* pFnTriggerExplosion = NULL;

	if ( ! pFnTriggerExplosion )
		pFnTriggerExplosion = (UFunction*) UObject::GObjObjects()->Data[ 121243 ];

	UKFSM_PlayerCrawler_Suicide_execTriggerExplosion_Parms TriggerExplosion_Parms;

	this->ProcessEvent ( pFnTriggerExplosion, &TriggerExplosion_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerCrawler_Suicide.SpecialMoveEnded
// [0x00020102] 
// Parameters infos:

void UKFSM_PlayerCrawler_Suicide::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121240 ];

	UKFSM_PlayerCrawler_Suicide_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerCrawler_Suicide.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerCrawler_Suicide::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121238 ];

	UKFSM_PlayerCrawler_Suicide_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFPlayerCamera_Versus.FindBestCameraType
// [0x00080002] 
// Parameters infos:

void AKFPlayerCamera_Versus::FindBestCameraType ( )
{
	static UFunction* pFnFindBestCameraType = NULL;

	if ( ! pFnFindBestCameraType )
		pFnFindBestCameraType = (UFunction*) UObject::GObjObjects()->Data[ 119565 ];

	AKFPlayerCamera_Versus_execFindBestCameraType_Parms FindBestCameraType_Parms;

	this->ProcessEvent ( pFnFindBestCameraType, &FindBestCameraType_Parms, NULL );
};

// Function kfgamecontent.KFPlayerCamera_Versus.SwapToZedSuicideCam
// [0x00020002] 
// Parameters infos:

void AKFPlayerCamera_Versus::SwapToZedSuicideCam ( )
{
	static UFunction* pFnSwapToZedSuicideCam = NULL;

	if ( ! pFnSwapToZedSuicideCam )
		pFnSwapToZedSuicideCam = (UFunction*) UObject::GObjObjects()->Data[ 119562 ];

	AKFPlayerCamera_Versus_execSwapToZedSuicideCam_Parms SwapToZedSuicideCam_Parms;

	this->ProcessEvent ( pFnSwapToZedSuicideCam, &SwapToZedSuicideCam_Parms, NULL );
};

// Function kfgamecontent.KFPlayerCamera_Versus.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AKFPlayerCamera_Versus::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 119561 ];

	AKFPlayerCamera_Versus_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedFleshpound_Mixer.UsePlayerControlledZedSkin
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFPawn_ZedFleshpound_Mixer::eventUsePlayerControlledZedSkin ( )
{
	static UFunction* pFnUsePlayerControlledZedSkin = NULL;

	if ( ! pFnUsePlayerControlledZedSkin )
		pFnUsePlayerControlledZedSkin = (UFunction*) UObject::GObjObjects()->Data[ 114618 ];

	AKFPawn_ZedFleshpound_Mixer_eventUsePlayerControlledZedSkin_Parms UsePlayerControlledZedSkin_Parms;

	this->ProcessEvent ( pFnUsePlayerControlledZedSkin, &UsePlayerControlledZedSkin_Parms, NULL );
};

// Function kfgamecontent.KFSkinTypeEffects_HansShield.AttachEffectToHitLocation
// [0x00020102] 
// Parameters infos:

void UKFSkinTypeEffects_HansShield::AttachEffectToHitLocation ( )
{
	static UFunction* pFnAttachEffectToHitLocation = NULL;

	if ( ! pFnAttachEffectToHitLocation )
		pFnAttachEffectToHitLocation = (UFunction*) UObject::GObjObjects()->Data[ 114678 ];

	UKFSkinTypeEffects_HansShield_execAttachEffectToHitLocation_Parms AttachEffectToHitLocation_Parms;

	this->ProcessEvent ( pFnAttachEffectToHitLocation, &AttachEffectToHitLocation_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansHEGrenade.SpecialRandSpin
// [0x00020102] 
// Parameters infos:

void AKFProj_HansHEGrenade::SpecialRandSpin ( )
{
	static UFunction* pFnSpecialRandSpin = NULL;

	if ( ! pFnSpecialRandSpin )
		pFnSpecialRandSpin = (UFunction*) UObject::GObjObjects()->Data[ 120136 ];

	AKFProj_HansHEGrenade_execSpecialRandSpin_Parms SpecialRandSpin_Parms;

	this->ProcessEvent ( pFnSpecialRandSpin, &SpecialRandSpin_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansHEGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_HansHEGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120135 ];

	AKFProj_HansHEGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_HansNerveGasGrenade::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 120148 ];

	AKFProj_HansNerveGasGrenade_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.StopFlightEffects
// [0x00080100] 
// Parameters infos:

void AKFProj_HansNerveGasGrenade::StopFlightEffects ( )
{
	static UFunction* pFnStopFlightEffects = NULL;

	if ( ! pFnStopFlightEffects )
		pFnStopFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 120147 ];

	AKFProj_HansNerveGasGrenade_execStopFlightEffects_Parms StopFlightEffects_Parms;

	this->ProcessEvent ( pFnStopFlightEffects, &StopFlightEffects_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_HansNerveGasGrenade::eventGrenadeIsAtRest ( )
{
	static UFunction* pFnGrenadeIsAtRest = NULL;

	if ( ! pFnGrenadeIsAtRest )
		pFnGrenadeIsAtRest = (UFunction*) UObject::GObjObjects()->Data[ 120146 ];

	AKFProj_HansNerveGasGrenade_eventGrenadeIsAtRest_Parms GrenadeIsAtRest_Parms;

	this->ProcessEvent ( pFnGrenadeIsAtRest, &GrenadeIsAtRest_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.SpecialRandSpin
// [0x00020102] 
// Parameters infos:

void AKFProj_HansNerveGasGrenade::SpecialRandSpin ( )
{
	static UFunction* pFnSpecialRandSpin = NULL;

	if ( ! pFnSpecialRandSpin )
		pFnSpecialRandSpin = (UFunction*) UObject::GObjObjects()->Data[ 120144 ];

	AKFProj_HansNerveGasGrenade_execSpecialRandSpin_Parms SpecialRandSpin_Parms;

	this->ProcessEvent ( pFnSpecialRandSpin, &SpecialRandSpin_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansNerveGasGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_HansNerveGasGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120143 ];

	AKFProj_HansNerveGasGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.StopFlightEffects
// [0x00080100] 
// Parameters infos:

void AKFProj_HansSmokeGrenade::StopFlightEffects ( )
{
	static UFunction* pFnStopFlightEffects = NULL;

	if ( ! pFnStopFlightEffects )
		pFnStopFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 120158 ];

	AKFProj_HansSmokeGrenade_execStopFlightEffects_Parms StopFlightEffects_Parms;

	this->ProcessEvent ( pFnStopFlightEffects, &StopFlightEffects_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_HansSmokeGrenade::eventGrenadeIsAtRest ( )
{
	static UFunction* pFnGrenadeIsAtRest = NULL;

	if ( ! pFnGrenadeIsAtRest )
		pFnGrenadeIsAtRest = (UFunction*) UObject::GObjObjects()->Data[ 120157 ];

	AKFProj_HansSmokeGrenade_eventGrenadeIsAtRest_Parms GrenadeIsAtRest_Parms;

	this->ProcessEvent ( pFnGrenadeIsAtRest, &GrenadeIsAtRest_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.SpecialRandSpin
// [0x00020102] 
// Parameters infos:

void AKFProj_HansSmokeGrenade::SpecialRandSpin ( )
{
	static UFunction* pFnSpecialRandSpin = NULL;

	if ( ! pFnSpecialRandSpin )
		pFnSpecialRandSpin = (UFunction*) UObject::GObjObjects()->Data[ 120155 ];

	AKFProj_HansSmokeGrenade_execSpecialRandSpin_Parms SpecialRandSpin_Parms;

	this->ProcessEvent ( pFnSpecialRandSpin, &SpecialRandSpin_Parms, NULL );
};

// Function kfgamecontent.KFProj_HansSmokeGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_HansSmokeGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120154 ];

	AKFProj_HansSmokeGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_DualMKb42_Hans.ConsumeAmmo
// [0x00020100] 
// Parameters infos:

void AKFWeap_AssaultRifle_DualMKb42_Hans::ConsumeAmmo ( )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 121981 ];

	AKFWeap_AssaultRifle_DualMKb42_Hans_execConsumeAmmo_Parms ConsumeAmmo_Parms;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_DualMKb42_Hans.SpawnProjectile
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_DualMKb42_Hans::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 121974 ];

	AKFWeap_AssaultRifle_DualMKb42_Hans_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.NotifyOwnerTakeHit
// [0x00020000] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::NotifyOwnerTakeHit ( )
{
	static UFunction* pFnNotifyOwnerTakeHit = NULL;

	if ( ! pFnNotifyOwnerTakeHit )
		pFnNotifyOwnerTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 120848 ];

	UKFSM_GrappleAttack_Hans_execNotifyOwnerTakeHit_Parms NotifyOwnerTakeHit_Parms;

	this->ProcessEvent ( pFnNotifyOwnerTakeHit, &NotifyOwnerTakeHit_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.OnFollowerLeavingSpecialMove
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::OnFollowerLeavingSpecialMove ( )
{
	static UFunction* pFnOnFollowerLeavingSpecialMove = NULL;

	if ( ! pFnOnFollowerLeavingSpecialMove )
		pFnOnFollowerLeavingSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 120847 ];

	UKFSM_GrappleAttack_Hans_execOnFollowerLeavingSpecialMove_Parms OnFollowerLeavingSpecialMove_Parms;

	this->ProcessEvent ( pFnOnFollowerLeavingSpecialMove, &OnFollowerLeavingSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.AnimEndNotify
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::AnimEndNotify ( )
{
	static UFunction* pFnAnimEndNotify = NULL;

	if ( ! pFnAnimEndNotify )
		pFnAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 120843 ];

	UKFSM_GrappleAttack_Hans_execAnimEndNotify_Parms AnimEndNotify_Parms;

	this->ProcessEvent ( pFnAnimEndNotify, &AnimEndNotify_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.Timer_DetachFollower
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::Timer_DetachFollower ( )
{
	static UFunction* pFnTimer_DetachFollower = NULL;

	if ( ! pFnTimer_DetachFollower )
		pFnTimer_DetachFollower = (UFunction*) UObject::GObjObjects()->Data[ 120842 ];

	UKFSM_GrappleAttack_Hans_execTimer_DetachFollower_Parms Timer_DetachFollower_Parms;

	this->ProcessEvent ( pFnTimer_DetachFollower, &Timer_DetachFollower_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.Timer_DrainHealth
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::Timer_DrainHealth ( )
{
	static UFunction* pFnTimer_DrainHealth = NULL;

	if ( ! pFnTimer_DrainHealth )
		pFnTimer_DrainHealth = (UFunction*) UObject::GObjObjects()->Data[ 120839 ];

	UKFSM_GrappleAttack_Hans_execTimer_DrainHealth_Parms Timer_DrainHealth_Parms;

	this->ProcessEvent ( pFnTimer_DrainHealth, &Timer_DrainHealth_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 120834 ];

	UKFSM_GrappleAttack_Hans_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.SpecialMoveFlagsUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 120833 ];

	UKFSM_GrappleAttack_Hans_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.BeginGrapple
// [0x00024002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::BeginGrapple ( )
{
	static UFunction* pFnBeginGrapple = NULL;

	if ( ! pFnBeginGrapple )
		pFnBeginGrapple = (UFunction*) UObject::GObjObjects()->Data[ 120828 ];

	UKFSM_GrappleAttack_Hans_execBeginGrapple_Parms BeginGrapple_Parms;

	this->ProcessEvent ( pFnBeginGrapple, &BeginGrapple_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.PlayGrappleLoopAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::PlayGrappleLoopAnim ( )
{
	static UFunction* pFnPlayGrappleLoopAnim = NULL;

	if ( ! pFnPlayGrappleLoopAnim )
		pFnPlayGrappleLoopAnim = (UFunction*) UObject::GObjObjects()->Data[ 120823 ];

	UKFSM_GrappleAttack_Hans_execPlayGrappleLoopAnim_Parms PlayGrappleLoopAnim_Parms;

	this->ProcessEvent ( pFnPlayGrappleLoopAnim, &PlayGrappleLoopAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.PlayGrabAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::PlayGrabAnim ( )
{
	static UFunction* pFnPlayGrabAnim = NULL;

	if ( ! pFnPlayGrabAnim )
		pFnPlayGrabAnim = (UFunction*) UObject::GObjObjects()->Data[ 120822 ];

	UKFSM_GrappleAttack_Hans_execPlayGrabAnim_Parms PlayGrabAnim_Parms;

	this->ProcessEvent ( pFnPlayGrabAnim, &PlayGrabAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120818 ];

	UKFSM_GrappleAttack_Hans_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_GrappleAttack_Hans.PackFlagsBase
// [0x00022002] 
// Parameters infos:

void UKFSM_GrappleAttack_Hans::PackFlagsBase ( )
{
	static UFunction* pFnPackFlagsBase = NULL;

	if ( ! pFnPackFlagsBase )
		pFnPackFlagsBase = (UFunction*) UObject::GObjObjects()->Data[ 120815 ];

	UKFSM_GrappleAttack_Hans_execPackFlagsBase_Parms PackFlagsBase_Parms;

	this->ProcessEvent ( pFnPackFlagsBase, &PackFlagsBase_Parms, NULL );
};

// Function kfgamecontent.KFSM_Hans_WeaponSwitch.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Hans_WeaponSwitch::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 120881 ];

	UKFSM_Hans_WeaponSwitch_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Hans_WeaponSwitch.PlayAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_Hans_WeaponSwitch::PlayAnimation ( )
{
	static UFunction* pFnPlayAnimation = NULL;

	if ( ! pFnPlayAnimation )
		pFnPlayAnimation = (UFunction*) UObject::GObjObjects()->Data[ 120879 ];

	UKFSM_Hans_WeaponSwitch_execPlayAnimation_Parms PlayAnimation_Parms;

	this->ProcessEvent ( pFnPlayAnimation, &PlayAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Hans_ThrowGrenade.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_Hans_ThrowGrenade::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 120863 ];

	UKFSM_Hans_ThrowGrenade_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_Hans_ThrowGrenade.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Hans_ThrowGrenade::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 120860 ];

	UKFSM_Hans_ThrowGrenade_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Hans_ThrowGrenade.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Hans_ThrowGrenade::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120856 ];

	UKFSM_Hans_ThrowGrenade_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Hans_GrenadeHalfBarrage.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Hans_GrenadeHalfBarrage::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120871 ];

	UKFSM_Hans_GrenadeHalfBarrage_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Hans_GrenadeBarrage.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Hans_GrenadeBarrage::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120866 ];

	UKFSM_Hans_GrenadeBarrage_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ServerToggleShield
// [0x002200C2] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::ServerToggleShield ( )
{
	static UFunction* pFnServerToggleShield = NULL;

	if ( ! pFnServerToggleShield )
		pFnServerToggleShield = (UFunction*) UObject::GObjObjects()->Data[ 115205 ];

	AKFPawn_ZedHans_Versus_execServerToggleShield_Parms ServerToggleShield_Parms;

	this->ProcessEvent ( pFnServerToggleShield, &ServerToggleShield_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ToggleEquipment
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::ToggleEquipment ( )
{
	static UFunction* pFnToggleEquipment = NULL;

	if ( ! pFnToggleEquipment )
		pFnToggleEquipment = (UFunction*) UObject::GObjObjects()->Data[ 115204 ];

	AKFPawn_ZedHans_Versus_execToggleEquipment_Parms ToggleEquipment_Parms;

	this->ProcessEvent ( pFnToggleEquipment, &ToggleEquipment_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.SetSprinting
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::SetSprinting ( )
{
	static UFunction* pFnSetSprinting = NULL;

	if ( ! pFnSetSprinting )
		pFnSetSprinting = (UFunction*) UObject::GObjObjects()->Data[ 115202 ];

	AKFPawn_ZedHans_Versus_execSetSprinting_Parms SetSprinting_Parms;

	this->ProcessEvent ( pFnSetSprinting, &SetSprinting_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ThrowGrenade
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::ThrowGrenade ( )
{
	static UFunction* pFnThrowGrenade = NULL;

	if ( ! pFnThrowGrenade )
		pFnThrowGrenade = (UFunction*) UObject::GObjObjects()->Data[ 115200 ];

	AKFPawn_ZedHans_Versus_execThrowGrenade_Parms ThrowGrenade_Parms;

	this->ProcessEvent ( pFnThrowGrenade, &ThrowGrenade_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.ToggleAim
// [0x002200C2] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::ToggleAim ( )
{
	static UFunction* pFnToggleAim = NULL;

	if ( ! pFnToggleAim )
		pFnToggleAim = (UFunction*) UObject::GObjObjects()->Data[ 115199 ];

	AKFPawn_ZedHans_Versus_execToggleAim_Parms ToggleAim_Parms;

	this->ProcessEvent ( pFnToggleAim, &ToggleAim_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.PlayWeaponSwitch
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::PlayWeaponSwitch ( )
{
	static UFunction* pFnPlayWeaponSwitch = NULL;

	if ( ! pFnPlayWeaponSwitch )
		pFnPlayWeaponSwitch = (UFunction*) UObject::GObjObjects()->Data[ 115196 ];

	AKFPawn_ZedHans_Versus_execPlayWeaponSwitch_Parms PlayWeaponSwitch_Parms;

	this->ProcessEvent ( pFnPlayWeaponSwitch, &PlayWeaponSwitch_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.StartFire
// [0x00020102] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::StartFire ( )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 115194 ];

	AKFPawn_ZedHans_Versus_execStartFire_Parms StartFire_Parms;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHans_Versus.PossessedBy
// [0x00020002] 
// Parameters infos:

void AKFPawn_ZedHans_Versus::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 115191 ];

	AKFPawn_ZedHans_Versus_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHansFriendlyTest.CanBeGrabbed
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedHansFriendlyTest::CanBeGrabbed ( )
{
	static UFunction* pFnCanBeGrabbed = NULL;

	if ( ! pFnCanBeGrabbed )
		pFnCanBeGrabbed = (UFunction*) UObject::GObjObjects()->Data[ 115229 ];

	AKFPawn_ZedHansFriendlyTest_execCanBeGrabbed_Parms CanBeGrabbed_Parms;

	this->ProcessEvent ( pFnCanBeGrabbed, &CanBeGrabbed_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FlameThrowerAttack::CanOverrideMoveWith ( )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 121007 ];

	UKFSM_Husk_FlameThrowerAttack_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.TurnOffFlamethrower
// [0x00020102] 
// Parameters infos:

void UKFSM_Husk_FlameThrowerAttack::TurnOffFlamethrower ( )
{
	static UFunction* pFnTurnOffFlamethrower = NULL;

	if ( ! pFnTurnOffFlamethrower )
		pFnTurnOffFlamethrower = (UFunction*) UObject::GObjObjects()->Data[ 121005 ];

	UKFSM_Husk_FlameThrowerAttack_execTurnOffFlamethrower_Parms TurnOffFlamethrower_Parms;

	this->ProcessEvent ( pFnTurnOffFlamethrower, &TurnOffFlamethrower_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FlameThrowerAttack::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121002 ];

	UKFSM_Husk_FlameThrowerAttack_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.TurnOnFlamethrower
// [0x00020102] 
// Parameters infos:

void UKFSM_Husk_FlameThrowerAttack::TurnOnFlamethrower ( )
{
	static UFunction* pFnTurnOnFlamethrower = NULL;

	if ( ! pFnTurnOnFlamethrower )
		pFnTurnOnFlamethrower = (UFunction*) UObject::GObjObjects()->Data[ 121000 ];

	UKFSM_Husk_FlameThrowerAttack_execTurnOnFlamethrower_Parms TurnOnFlamethrower_Parms;

	this->ProcessEvent ( pFnTurnOnFlamethrower, &TurnOnFlamethrower_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_FlameThrowerAttack::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 120997 ];

	UKFSM_Husk_FlameThrowerAttack_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_FlameThrowerAttack.InternalCanDoSpecialMove
// [0x00880002] 
// Parameters infos:

void UKFSM_Husk_FlameThrowerAttack::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 120992 ];

	UKFSM_Husk_FlameThrowerAttack_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_Suicide.SpecialMoveEnded
// [0x00020102] 
// Parameters infos:

void UKFSM_Husk_Suicide::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121031 ];

	UKFSM_Husk_Suicide_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_Suicide.AnimEndNotify
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_Suicide::AnimEndNotify ( )
{
	static UFunction* pFnAnimEndNotify = NULL;

	if ( ! pFnAnimEndNotify )
		pFnAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 121027 ];

	UKFSM_Husk_Suicide_execAnimEndNotify_Parms AnimEndNotify_Parms;

	this->ProcessEvent ( pFnAnimEndNotify, &AnimEndNotify_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_Suicide.OnAnimNotifyParticleSystemSpawned
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_Suicide::OnAnimNotifyParticleSystemSpawned ( )
{
	static UFunction* pFnOnAnimNotifyParticleSystemSpawned = NULL;

	if ( ! pFnOnAnimNotifyParticleSystemSpawned )
		pFnOnAnimNotifyParticleSystemSpawned = (UFunction*) UObject::GObjObjects()->Data[ 121023 ];

	UKFSM_Husk_Suicide_execOnAnimNotifyParticleSystemSpawned_Parms OnAnimNotifyParticleSystemSpawned_Parms;

	this->ProcessEvent ( pFnOnAnimNotifyParticleSystemSpawned, &OnAnimNotifyParticleSystemSpawned_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_Suicide.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Husk_Suicide::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121020 ];

	UKFSM_Husk_Suicide_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Husk_Suicide.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_Husk_Suicide::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121018 ];

	UKFSM_Husk_Suicide_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveButtonReleased
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::SpecialMoveButtonReleased ( )
{
	static UFunction* pFnSpecialMoveButtonReleased = NULL;

	if ( ! pFnSpecialMoveButtonReleased )
		pFnSpecialMoveButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 121311 ];

	UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveButtonReleased_Parms SpecialMoveButtonReleased_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonReleased, &SpecialMoveButtonReleased_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveButtonRetriggered
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::SpecialMoveButtonRetriggered ( )
{
	static UFunction* pFnSpecialMoveButtonRetriggered = NULL;

	if ( ! pFnSpecialMoveButtonRetriggered )
		pFnSpecialMoveButtonRetriggered = (UFunction*) UObject::GObjObjects()->Data[ 121310 ];

	UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveButtonRetriggered_Parms SpecialMoveButtonRetriggered_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonRetriggered, &SpecialMoveButtonRetriggered_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveFlagsUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 121309 ];

	UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121306 ];

	UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.Tick
// [0x00820102] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121302 ];

	UKFSM_PlayerHusk_FireBallAttack_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.AnimEndNotify
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::AnimEndNotify ( )
{
	static UFunction* pFnAnimEndNotify = NULL;

	if ( ! pFnAnimEndNotify )
		pFnAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 121298 ];

	UKFSM_PlayerHusk_FireBallAttack_execAnimEndNotify_Parms AnimEndNotify_Parms;

	this->ProcessEvent ( pFnAnimEndNotify, &AnimEndNotify_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayFireAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::PlayFireAnimation ( )
{
	static UFunction* pFnPlayFireAnimation = NULL;

	if ( ! pFnPlayFireAnimation )
		pFnPlayFireAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121297 ];

	UKFSM_PlayerHusk_FireBallAttack_execPlayFireAnimation_Parms PlayFireAnimation_Parms;

	this->ProcessEvent ( pFnPlayFireAnimation, &PlayFireAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayFireHeldAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::PlayFireHeldAnimation ( )
{
	static UFunction* pFnPlayFireHeldAnimation = NULL;

	if ( ! pFnPlayFireHeldAnimation )
		pFnPlayFireHeldAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121296 ];

	UKFSM_PlayerHusk_FireBallAttack_execPlayFireHeldAnimation_Parms PlayFireHeldAnimation_Parms;

	this->ProcessEvent ( pFnPlayFireHeldAnimation, &PlayFireHeldAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayWindUpAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::PlayWindUpAnimation ( )
{
	static UFunction* pFnPlayWindUpAnimation = NULL;

	if ( ! pFnPlayWindUpAnimation )
		pFnPlayWindUpAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121295 ];

	UKFSM_PlayerHusk_FireBallAttack_execPlayWindUpAnimation_Parms PlayWindUpAnimation_Parms;

	this->ProcessEvent ( pFnPlayWindUpAnimation, &PlayWindUpAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.PlayAnimation
// [0x00020000] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::PlayAnimation ( )
{
	static UFunction* pFnPlayAnimation = NULL;

	if ( ! pFnPlayAnimation )
		pFnPlayAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121294 ];

	UKFSM_PlayerHusk_FireBallAttack_execPlayAnimation_Parms PlayAnimation_Parms;

	this->ProcessEvent ( pFnPlayAnimation, &PlayAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FireBallAttack.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FireBallAttack::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121291 ];

	UKFSM_PlayerHusk_FireBallAttack_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHuskFriendlyTest.AdjustDamage
// [0x00420002] 
// Parameters infos:

void AKFPawn_ZedHuskFriendlyTest::AdjustDamage ( )
{
	static UFunction* pFnAdjustDamage = NULL;

	if ( ! pFnAdjustDamage )
		pFnAdjustDamage = (UFunction*) UObject::GObjObjects()->Data[ 115448 ];

	AKFPawn_ZedHuskFriendlyTest_execAdjustDamage_Parms AdjustDamage_Parms;

	this->ProcessEvent ( pFnAdjustDamage, &AdjustDamage_Parms, NULL );
};

// Function kfgamecontent.KFPawn_ZedHuskFriendlyTest.CanBeGrabbed
// [0x00024002] 
// Parameters infos:

void AKFPawn_ZedHuskFriendlyTest::CanBeGrabbed ( )
{
	static UFunction* pFnCanBeGrabbed = NULL;

	if ( ! pFnCanBeGrabbed )
		pFnCanBeGrabbed = (UFunction*) UObject::GObjObjects()->Data[ 115443 ];

	AKFPawn_ZedHuskFriendlyTest_execCanBeGrabbed_Parms CanBeGrabbed_Parms;

	this->ProcessEvent ( pFnCanBeGrabbed, &CanBeGrabbed_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.Destroyed
// [0x00020102] 
// Parameters infos:

void AKFProj_Missile_Patriarch::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 120343 ];

	AKFProj_Missile_Patriarch_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.StopSimulating
// [0x00080102] 
// Parameters infos:

void AKFProj_Missile_Patriarch::StopSimulating ( )
{
	static UFunction* pFnStopSimulating = NULL;

	if ( ! pFnStopSimulating )
		pFnStopSimulating = (UFunction*) UObject::GObjObjects()->Data[ 120342 ];

	AKFProj_Missile_Patriarch_execStopSimulating_Parms StopSimulating_Parms;

	this->ProcessEvent ( pFnStopSimulating, &StopSimulating_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.TraceProjHitZones
// [0x00420102] 
// Parameters infos:

void AKFProj_Missile_Patriarch::TraceProjHitZones ( )
{
	static UFunction* pFnTraceProjHitZones = NULL;

	if ( ! pFnTraceProjHitZones )
		pFnTraceProjHitZones = (UFunction*) UObject::GObjObjects()->Data[ 120335 ];

	AKFProj_Missile_Patriarch_execTraceProjHitZones_Parms TraceProjHitZones_Parms;

	this->ProcessEvent ( pFnTraceProjHitZones, &TraceProjHitZones_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.DoFlocking
// [0x00820102] 
// Parameters infos:

void AKFProj_Missile_Patriarch::DoFlocking ( )
{
	static UFunction* pFnDoFlocking = NULL;

	if ( ! pFnDoFlocking )
		pFnDoFlocking = (UFunction*) UObject::GObjObjects()->Data[ 120330 ];

	AKFProj_Missile_Patriarch_execDoFlocking_Parms DoFlocking_Parms;

	this->ProcessEvent ( pFnDoFlocking, &DoFlocking_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.CurlTimer
// [0x00820102] 
// Parameters infos:

void AKFProj_Missile_Patriarch::CurlTimer ( )
{
	static UFunction* pFnCurlTimer = NULL;

	if ( ! pFnCurlTimer )
		pFnCurlTimer = (UFunction*) UObject::GObjObjects()->Data[ 120324 ];

	AKFProj_Missile_Patriarch_execCurlTimer_Parms CurlTimer_Parms;

	this->ProcessEvent ( pFnCurlTimer, &CurlTimer_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Missile_Patriarch::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120322 ];

	AKFProj_Missile_Patriarch_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Missile_Patriarch::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 120318 ];

	AKFProj_Missile_Patriarch_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.StartCurlTimer
// [0x00020102] 
// Parameters infos:

void AKFProj_Missile_Patriarch::StartCurlTimer ( )
{
	static UFunction* pFnStartCurlTimer = NULL;

	if ( ! pFnStartCurlTimer )
		pFnStartCurlTimer = (UFunction*) UObject::GObjObjects()->Data[ 120317 ];

	AKFProj_Missile_Patriarch_execStartCurlTimer_Parms StartCurlTimer_Parms;

	this->ProcessEvent ( pFnStartCurlTimer, &StartCurlTimer_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.InitEx
// [0x00020002] 
// Parameters infos:

void AKFProj_Missile_Patriarch::InitEx ( )
{
	static UFunction* pFnInitEx = NULL;

	if ( ! pFnInitEx )
		pFnInitEx = (UFunction*) UObject::GObjObjects()->Data[ 120308 ];

	AKFProj_Missile_Patriarch_execInitEx_Parms InitEx_Parms;

	this->ProcessEvent ( pFnInitEx, &InitEx_Parms, NULL );
};

// Function kfgamecontent.KFProj_Missile_Patriarch.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_Missile_Patriarch::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 120307 ];

	AKFProj_Missile_Patriarch_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFProj_Mortar_Patriarch.InitEx
// [0x00020002] 
// Parameters infos:

void AKFProj_Mortar_Patriarch::InitEx ( )
{
	static UFunction* pFnInitEx = NULL;

	if ( ! pFnInitEx )
		pFnInitEx = (UFunction*) UObject::GObjObjects()->Data[ 120420 ];

	AKFProj_Mortar_Patriarch_execInitEx_Parms InitEx_Parms;

	this->ProcessEvent ( pFnInitEx, &InitEx_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.AddSpread
// [0x00820102] 
// Parameters infos:

void AKFWeap_Minigun_Patriarch::AddSpread ( )
{
	static UFunction* pFnAddSpread = NULL;

	if ( ! pFnAddSpread )
		pFnAddSpread = (UFunction*) UObject::GObjObjects()->Data[ 122976 ];

	AKFWeap_Minigun_Patriarch_execAddSpread_Parms AddSpread_Parms;

	this->ProcessEvent ( pFnAddSpread, &AddSpread_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.StopPawnSprint
// [0x00020100] 
// Parameters infos:

void AKFWeap_Minigun_Patriarch::StopPawnSprint ( )
{
	static UFunction* pFnStopPawnSprint = NULL;

	if ( ! pFnStopPawnSprint )
		pFnStopPawnSprint = (UFunction*) UObject::GObjObjects()->Data[ 122972 ];

	AKFWeap_Minigun_Patriarch_execStopPawnSprint_Parms StopPawnSprint_Parms;

	this->ProcessEvent ( pFnStopPawnSprint, &StopPawnSprint_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.ConsumeAmmo
// [0x00020100] 
// Parameters infos:

void AKFWeap_Minigun_Patriarch::ConsumeAmmo ( )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122970 ];

	AKFWeap_Minigun_Patriarch_execConsumeAmmo_Parms ConsumeAmmo_Parms;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch.SpawnProjectile
// [0x00020102] 
// Parameters infos:

void AKFWeap_Minigun_Patriarch::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 122963 ];

	AKFWeap_Minigun_Patriarch_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121180 ];

	UKFSM_Patriarch_MortarAttack_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.AnimEndNotify
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::AnimEndNotify ( )
{
	static UFunction* pFnAnimEndNotify = NULL;

	if ( ! pFnAnimEndNotify )
		pFnAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 121176 ];

	UKFSM_Patriarch_MortarAttack_execAnimEndNotify_Parms AnimEndNotify_Parms;

	this->ProcessEvent ( pFnAnimEndNotify, &AnimEndNotify_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.Timer_FireBarrage
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::Timer_FireBarrage ( )
{
	static UFunction* pFnTimer_FireBarrage = NULL;

	if ( ! pFnTimer_FireBarrage )
		pFnTimer_FireBarrage = (UFunction*) UObject::GObjObjects()->Data[ 121175 ];

	UKFSM_Patriarch_MortarAttack_execTimer_FireBarrage_Parms Timer_FireBarrage_Parms;

	this->ProcessEvent ( pFnTimer_FireBarrage, &Timer_FireBarrage_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.FireMissiles
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::FireMissiles ( )
{
	static UFunction* pFnFireMissiles = NULL;

	if ( ! pFnFireMissiles )
		pFnFireMissiles = (UFunction*) UObject::GObjObjects()->Data[ 121174 ];

	UKFSM_Patriarch_MortarAttack_execFireMissiles_Parms FireMissiles_Parms;

	this->ProcessEvent ( pFnFireMissiles, &FireMissiles_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.PlayFireAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::PlayFireAnimation ( )
{
	static UFunction* pFnPlayFireAnimation = NULL;

	if ( ! pFnPlayFireAnimation )
		pFnPlayFireAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121172 ];

	UKFSM_Patriarch_MortarAttack_execPlayFireAnimation_Parms PlayFireAnimation_Parms;

	this->ProcessEvent ( pFnPlayFireAnimation, &PlayFireAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.GetAimDirAndTargetLoc
// [0x00420002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::GetAimDirAndTargetLoc ( )
{
	static UFunction* pFnGetAimDirAndTargetLoc = NULL;

	if ( ! pFnGetAimDirAndTargetLoc )
		pFnGetAimDirAndTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 121166 ];

	UKFSM_Patriarch_MortarAttack_execGetAimDirAndTargetLoc_Parms GetAimDirAndTargetLoc_Parms;

	this->ProcessEvent ( pFnGetAimDirAndTargetLoc, &GetAimDirAndTargetLoc_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.GetProjectileClass
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::GetProjectileClass ( )
{
	static UFunction* pFnGetProjectileClass = NULL;

	if ( ! pFnGetProjectileClass )
		pFnGetProjectileClass = (UFunction*) UObject::GObjObjects()->Data[ 121164 ];

	UKFSM_Patriarch_MortarAttack_execGetProjectileClass_Parms GetProjectileClass_Parms;

	this->ProcessEvent ( pFnGetProjectileClass, &GetProjectileClass_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MortarAttack.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MortarAttack::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121161 ];

	UKFSM_Patriarch_MortarAttack_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121152 ];

	UKFSM_Patriarch_MissileAttack_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.AnimEndNotify
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::AnimEndNotify ( )
{
	static UFunction* pFnAnimEndNotify = NULL;

	if ( ! pFnAnimEndNotify )
		pFnAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 121147 ];

	UKFSM_Patriarch_MissileAttack_execAnimEndNotify_Parms AnimEndNotify_Parms;

	this->ProcessEvent ( pFnAnimEndNotify, &AnimEndNotify_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayWindDownAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::PlayWindDownAnimation ( )
{
	static UFunction* pFnPlayWindDownAnimation = NULL;

	if ( ! pFnPlayWindDownAnimation )
		pFnPlayWindDownAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121146 ];

	UKFSM_Patriarch_MissileAttack_execPlayWindDownAnimation_Parms PlayWindDownAnimation_Parms;

	this->ProcessEvent ( pFnPlayWindDownAnimation, &PlayWindDownAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.FireMissiles
// [0x00820002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::FireMissiles ( )
{
	static UFunction* pFnFireMissiles = NULL;

	if ( ! pFnFireMissiles )
		pFnFireMissiles = (UFunction*) UObject::GObjObjects()->Data[ 121133 ];

	UKFSM_Patriarch_MissileAttack_execFireMissiles_Parms FireMissiles_Parms;

	this->ProcessEvent ( pFnFireMissiles, &FireMissiles_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.Tick
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121131 ];

	UKFSM_Patriarch_MissileAttack_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.GetAimDirAndTargetLoc
// [0x00420002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::GetAimDirAndTargetLoc ( )
{
	static UFunction* pFnGetAimDirAndTargetLoc = NULL;

	if ( ! pFnGetAimDirAndTargetLoc )
		pFnGetAimDirAndTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 121125 ];

	UKFSM_Patriarch_MissileAttack_execGetAimDirAndTargetLoc_Parms GetAimDirAndTargetLoc_Parms;

	this->ProcessEvent ( pFnGetAimDirAndTargetLoc, &GetAimDirAndTargetLoc_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayFireAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::PlayFireAnimation ( )
{
	static UFunction* pFnPlayFireAnimation = NULL;

	if ( ! pFnPlayFireAnimation )
		pFnPlayFireAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121124 ];

	UKFSM_Patriarch_MissileAttack_execPlayFireAnimation_Parms PlayFireAnimation_Parms;

	this->ProcessEvent ( pFnPlayFireAnimation, &PlayFireAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.StartGunTracking
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::StartGunTracking ( )
{
	static UFunction* pFnStartGunTracking = NULL;

	if ( ! pFnStartGunTracking )
		pFnStartGunTracking = (UFunction*) UObject::GObjObjects()->Data[ 121123 ];

	UKFSM_Patriarch_MissileAttack_execStartGunTracking_Parms StartGunTracking_Parms;

	this->ProcessEvent ( pFnStartGunTracking, &StartGunTracking_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayLoadAnimation
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::PlayLoadAnimation ( )
{
	static UFunction* pFnPlayLoadAnimation = NULL;

	if ( ! pFnPlayLoadAnimation )
		pFnPlayLoadAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121122 ];

	UKFSM_Patriarch_MissileAttack_execPlayLoadAnimation_Parms PlayLoadAnimation_Parms;

	this->ProcessEvent ( pFnPlayLoadAnimation, &PlayLoadAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.PlayAnimation
// [0x00020000] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::PlayAnimation ( )
{
	static UFunction* pFnPlayAnimation = NULL;

	if ( ! pFnPlayAnimation )
		pFnPlayAnimation = (UFunction*) UObject::GObjObjects()->Data[ 121121 ];

	UKFSM_Patriarch_MissileAttack_execPlayAnimation_Parms PlayAnimation_Parms;

	this->ProcessEvent ( pFnPlayAnimation, &PlayAnimation_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.GetProjectileClass
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::GetProjectileClass ( )
{
	static UFunction* pFnGetProjectileClass = NULL;

	if ( ! pFnGetProjectileClass )
		pFnGetProjectileClass = (UFunction*) UObject::GObjObjects()->Data[ 121119 ];

	UKFSM_Patriarch_MissileAttack_execGetProjectileClass_Parms GetProjectileClass_Parms;

	this->ProcessEvent ( pFnGetProjectileClass, &GetProjectileClass_Parms, NULL );
};

// Function kfgamecontent.KFSM_Patriarch_MissileAttack.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Patriarch_MissileAttack::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121116 ];

	UKFSM_Patriarch_MissileAttack_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch_Versus.ShouldWeaponIgnoreStartFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Minigun_Patriarch_Versus::ShouldWeaponIgnoreStartFire ( )
{
	static UFunction* pFnShouldWeaponIgnoreStartFire = NULL;

	if ( ! pFnShouldWeaponIgnoreStartFire )
		pFnShouldWeaponIgnoreStartFire = (UFunction*) UObject::GObjObjects()->Data[ 122994 ];

	AKFWeap_Minigun_Patriarch_Versus_execShouldWeaponIgnoreStartFire_Parms ShouldWeaponIgnoreStartFire_Parms;

	this->ProcessEvent ( pFnShouldWeaponIgnoreStartFire, &ShouldWeaponIgnoreStartFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Minigun_Patriarch_Versus.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFWeap_Minigun_Patriarch_Versus::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 122993 ];

	AKFWeap_Minigun_Patriarch_Versus_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121438 ];

	UKFSM_Siren_Scream_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.CheckIfScreamWasInterrupted
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::CheckIfScreamWasInterrupted ( )
{
	static UFunction* pFnCheckIfScreamWasInterrupted = NULL;

	if ( ! pFnCheckIfScreamWasInterrupted )
		pFnCheckIfScreamWasInterrupted = (UFunction*) UObject::GObjObjects()->Data[ 121437 ];

	UKFSM_Siren_Scream_execCheckIfScreamWasInterrupted_Parms CheckIfScreamWasInterrupted_Parms;

	this->ProcessEvent ( pFnCheckIfScreamWasInterrupted, &CheckIfScreamWasInterrupted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.ScreamExplosion
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::ScreamExplosion ( )
{
	static UFunction* pFnScreamExplosion = NULL;

	if ( ! pFnScreamExplosion )
		pFnScreamExplosion = (UFunction*) UObject::GObjObjects()->Data[ 121436 ];

	UKFSM_Siren_Scream_execScreamExplosion_Parms ScreamExplosion_Parms;

	this->ProcessEvent ( pFnScreamExplosion, &ScreamExplosion_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.InitializeSirenExplosion
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::InitializeSirenExplosion ( )
{
	static UFunction* pFnInitializeSirenExplosion = NULL;

	if ( ! pFnInitializeSirenExplosion )
		pFnInitializeSirenExplosion = (UFunction*) UObject::GObjObjects()->Data[ 121435 ];

	UKFSM_Siren_Scream_execInitializeSirenExplosion_Parms InitializeSirenExplosion_Parms;

	this->ProcessEvent ( pFnInitializeSirenExplosion, &InitializeSirenExplosion_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.DestroyProjectileShield
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::DestroyProjectileShield ( )
{
	static UFunction* pFnDestroyProjectileShield = NULL;

	if ( ! pFnDestroyProjectileShield )
		pFnDestroyProjectileShield = (UFunction*) UObject::GObjObjects()->Data[ 121434 ];

	UKFSM_Siren_Scream_execDestroyProjectileShield_Parms DestroyProjectileShield_Parms;

	this->ProcessEvent ( pFnDestroyProjectileShield, &DestroyProjectileShield_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.Timer_DestroyProjectileShield
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::Timer_DestroyProjectileShield ( )
{
	static UFunction* pFnTimer_DestroyProjectileShield = NULL;

	if ( ! pFnTimer_DestroyProjectileShield )
		pFnTimer_DestroyProjectileShield = (UFunction*) UObject::GObjObjects()->Data[ 121433 ];

	UKFSM_Siren_Scream_execTimer_DestroyProjectileShield_Parms Timer_DestroyProjectileShield_Parms;

	this->ProcessEvent ( pFnTimer_DestroyProjectileShield, &Timer_DestroyProjectileShield_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.SpawnProjectileShield
// [0x00820002] 
// Parameters infos:

void UKFSM_Siren_Scream::SpawnProjectileShield ( )
{
	static UFunction* pFnSpawnProjectileShield = NULL;

	if ( ! pFnSpawnProjectileShield )
		pFnSpawnProjectileShield = (UFunction*) UObject::GObjObjects()->Data[ 121431 ];

	UKFSM_Siren_Scream_execSpawnProjectileShield_Parms SpawnProjectileShield_Parms;

	this->ProcessEvent ( pFnSpawnProjectileShield, &SpawnProjectileShield_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.ScreamBegan
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::ScreamBegan ( )
{
	static UFunction* pFnScreamBegan = NULL;

	if ( ! pFnScreamBegan )
		pFnScreamBegan = (UFunction*) UObject::GObjObjects()->Data[ 121430 ];

	UKFSM_Siren_Scream_execScreamBegan_Parms ScreamBegan_Parms;

	this->ProcessEvent ( pFnScreamBegan, &ScreamBegan_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121427 ];

	UKFSM_Siren_Scream_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.CanChainMove
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::CanChainMove ( )
{
	static UFunction* pFnCanChainMove = NULL;

	if ( ! pFnCanChainMove )
		pFnCanChainMove = (UFunction*) UObject::GObjObjects()->Data[ 121424 ];

	UKFSM_Siren_Scream_execCanChainMove_Parms CanChainMove_Parms;

	this->ProcessEvent ( pFnCanChainMove, &CanChainMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_Siren_Scream.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:

void UKFSM_Siren_Scream::CanOverrideMoveWith ( )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 121421 ];

	UKFSM_Siren_Scream_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Pistol_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Pistol_Medic::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 123123 ];

	AKFWeap_Pistol_Medic_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.GetSecondaryAmmoForHUD
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::GetSecondaryAmmoForHUD ( )
{
	static UFunction* pFnGetSecondaryAmmoForHUD = NULL;

	if ( ! pFnGetSecondaryAmmoForHUD )
		pFnGetSecondaryAmmoForHUD = (UFunction*) UObject::GObjObjects()->Data[ 122250 ];

	AKFWeap_MedicBase_execGetSecondaryAmmoForHUD_Parms GetSecondaryAmmoForHUD_Parms;

	this->ProcessEvent ( pFnGetSecondaryAmmoForHUD, &GetSecondaryAmmoForHUD_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.SetTraderWeaponStats
// [0x00422902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_MedicBase::eventSetTraderWeaponStats ( )
{
	static UFunction* pFnSetTraderWeaponStats = NULL;

	if ( ! pFnSetTraderWeaponStats )
		pFnSetTraderWeaponStats = (UFunction*) UObject::GObjObjects()->Data[ 122247 ];

	AKFWeap_MedicBase_eventSetTraderWeaponStats_Parms SetTraderWeaponStats_Parms;

	this->ProcessEvent ( pFnSetTraderWeaponStats, &SetTraderWeaponStats_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.UpdateOpticsUI
// [0x00024102] 
// Parameters infos:

void AKFWeap_MedicBase::UpdateOpticsUI ( )
{
	static UFunction* pFnUpdateOpticsUI = NULL;

	if ( ! pFnUpdateOpticsUI )
		pFnUpdateOpticsUI = (UFunction*) UObject::GObjObjects()->Data[ 122237 ];

	AKFWeap_MedicBase_execUpdateOpticsUI_Parms UpdateOpticsUI_Parms;

	this->ProcessEvent ( pFnUpdateOpticsUI, &UpdateOpticsUI_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.DetachWeapon
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 122235 ];

	AKFWeap_MedicBase_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.AttachWeaponTo
// [0x00024102] 
// Parameters infos:

void AKFWeap_MedicBase::AttachWeaponTo ( )
{
	static UFunction* pFnAttachWeaponTo = NULL;

	if ( ! pFnAttachWeaponTo )
		pFnAttachWeaponTo = (UFunction*) UObject::GObjObjects()->Data[ 122232 ];

	AKFWeap_MedicBase_execAttachWeaponTo_Parms AttachWeaponTo_Parms;

	this->ProcessEvent ( pFnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.ItemRemovedFromInvManager
// [0x00020002] 
// Parameters infos:

void AKFWeap_MedicBase::ItemRemovedFromInvManager ( )
{
	static UFunction* pFnItemRemovedFromInvManager = NULL;

	if ( ! pFnItemRemovedFromInvManager )
		pFnItemRemovedFromInvManager = (UFunction*) UObject::GObjObjects()->Data[ 122229 ];

	AKFWeap_MedicBase_execItemRemovedFromInvManager_Parms ItemRemovedFromInvManager_Parms;

	this->ProcessEvent ( pFnItemRemovedFromInvManager, &ItemRemovedFromInvManager_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.ClientWeaponSet
// [0x010241C2] 
// Parameters infos:

void AKFWeap_MedicBase::ClientWeaponSet ( )
{
	static UFunction* pFnClientWeaponSet = NULL;

	if ( ! pFnClientWeaponSet )
		pFnClientWeaponSet = (UFunction*) UObject::GObjObjects()->Data[ 122225 ];

	AKFWeap_MedicBase_execClientWeaponSet_Parms ClientWeaponSet_Parms;

	this->ProcessEvent ( pFnClientWeaponSet, &ClientWeaponSet_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.GetWeaponFireAnim
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::GetWeaponFireAnim ( )
{
	static UFunction* pFnGetWeaponFireAnim = NULL;

	if ( ! pFnGetWeaponFireAnim )
		pFnGetWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 122222 ];

	AKFWeap_MedicBase_execGetWeaponFireAnim_Parms GetWeaponFireAnim_Parms;

	this->ProcessEvent ( pFnGetWeaponFireAnim, &GetWeaponFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.PlayFiringSound
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::PlayFiringSound ( )
{
	static UFunction* pFnPlayFiringSound = NULL;

	if ( ! pFnPlayFiringSound )
		pFnPlayFiringSound = (UFunction*) UObject::GObjObjects()->Data[ 122220 ];

	AKFWeap_MedicBase_execPlayFiringSound_Parms PlayFiringSound_Parms;

	this->ProcessEvent ( pFnPlayFiringSound, &PlayFiringSound_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.ClientPlayTargetingSound
// [0x01020142] 
// Parameters infos:

void AKFWeap_MedicBase::ClientPlayTargetingSound ( )
{
	static UFunction* pFnClientPlayTargetingSound = NULL;

	if ( ! pFnClientPlayTargetingSound )
		pFnClientPlayTargetingSound = (UFunction*) UObject::GObjObjects()->Data[ 122218 ];

	AKFWeap_MedicBase_execClientPlayTargetingSound_Parms ClientPlayTargetingSound_Parms;

	this->ProcessEvent ( pFnClientPlayTargetingSound, &ClientPlayTargetingSound_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.CheckTargetLock
// [0x00820002] 
// Parameters infos:

void AKFWeap_MedicBase::CheckTargetLock ( )
{
	static UFunction* pFnCheckTargetLock = NULL;

	if ( ! pFnCheckTargetLock )
		pFnCheckTargetLock = (UFunction*) UObject::GObjObjects()->Data[ 122206 ];

	AKFWeap_MedicBase_execCheckTargetLock_Parms CheckTargetLock_Parms;

	this->ProcessEvent ( pFnCheckTargetLock, &CheckTargetLock_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.AllowTargetLockOn
// [0x00020002] 
// Parameters infos:

void AKFWeap_MedicBase::AllowTargetLockOn ( )
{
	static UFunction* pFnAllowTargetLockOn = NULL;

	if ( ! pFnAllowTargetLockOn )
		pFnAllowTargetLockOn = (UFunction*) UObject::GObjObjects()->Data[ 122204 ];

	AKFWeap_MedicBase_execAllowTargetLockOn_Parms AllowTargetLockOn_Parms;

	this->ProcessEvent ( pFnAllowTargetLockOn, &AllowTargetLockOn_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.CanLockOnTo
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::CanLockOnTo ( )
{
	static UFunction* pFnCanLockOnTo = NULL;

	if ( ! pFnCanLockOnTo )
		pFnCanLockOnTo = (UFunction*) UObject::GObjObjects()->Data[ 122200 ];

	AKFWeap_MedicBase_execCanLockOnTo_Parms CanLockOnTo_Parms;

	this->ProcessEvent ( pFnCanLockOnTo, &CanLockOnTo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.AdjustLockTarget
// [0x00020002] 
// Parameters infos:

void AKFWeap_MedicBase::AdjustLockTarget ( )
{
	static UFunction* pFnAdjustLockTarget = NULL;

	if ( ! pFnAdjustLockTarget )
		pFnAdjustLockTarget = (UFunction*) UObject::GObjObjects()->Data[ 122198 ];

	AKFWeap_MedicBase_execAdjustLockTarget_Parms AdjustLockTarget_Parms;

	this->ProcessEvent ( pFnAdjustLockTarget, &AdjustLockTarget_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.HasAnyAmmo
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::HasAnyAmmo ( )
{
	static UFunction* pFnHasAnyAmmo = NULL;

	if ( ! pFnHasAnyAmmo )
		pFnHasAnyAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122196 ];

	AKFWeap_MedicBase_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

	this->ProcessEvent ( pFnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.HealAmmoRegeneration
// [0x00020002] 
// Parameters infos:

void AKFWeap_MedicBase::HealAmmoRegeneration ( )
{
	static UFunction* pFnHealAmmoRegeneration = NULL;

	if ( ! pFnHealAmmoRegeneration )
		pFnHealAmmoRegeneration = (UFunction*) UObject::GObjObjects()->Data[ 122194 ];

	AKFWeap_MedicBase_execHealAmmoRegeneration_Parms HealAmmoRegeneration_Parms;

	this->ProcessEvent ( pFnHealAmmoRegeneration, &HealAmmoRegeneration_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.StartHealRecharge
// [0x00020002] 
// Parameters infos:

void AKFWeap_MedicBase::StartHealRecharge ( )
{
	static UFunction* pFnStartHealRecharge = NULL;

	if ( ! pFnStartHealRecharge )
		pFnStartHealRecharge = (UFunction*) UObject::GObjObjects()->Data[ 122191 ];

	AKFWeap_MedicBase_execStartHealRecharge_Parms StartHealRecharge_Parms;

	this->ProcessEvent ( pFnStartHealRecharge, &StartHealRecharge_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.GivenTo
// [0x00024002] 
// Parameters infos:

void AKFWeap_MedicBase::GivenTo ( )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 122188 ];

	AKFWeap_MedicBase_execGivenTo_Parms GivenTo_Parms;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.StartFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::StartFire ( )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 122186 ];

	AKFWeap_MedicBase_execStartFire_Parms StartFire_Parms;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.ShakeView
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::ShakeView ( )
{
	static UFunction* pFnShakeView = NULL;

	if ( ! pFnShakeView )
		pFnShakeView = (UFunction*) UObject::GObjObjects()->Data[ 122183 ];

	AKFWeap_MedicBase_execShakeView_Parms ShakeView_Parms;

	this->ProcessEvent ( pFnShakeView, &ShakeView_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.HandleRecoil
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_MedicBase::eventHandleRecoil ( )
{
	static UFunction* pFnHandleRecoil = NULL;

	if ( ! pFnHandleRecoil )
		pFnHandleRecoil = (UFunction*) UObject::GObjObjects()->Data[ 122182 ];

	AKFWeap_MedicBase_eventHandleRecoil_Parms HandleRecoil_Parms;

	this->ProcessEvent ( pFnHandleRecoil, &HandleRecoil_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.SpawnProjectile
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 122176 ];

	AKFWeap_MedicBase_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.ProcessInstantHitEx
// [0x00424102] 
// Parameters infos:

void AKFWeap_MedicBase::ProcessInstantHitEx ( )
{
	static UFunction* pFnProcessInstantHitEx = NULL;

	if ( ! pFnProcessInstantHitEx )
		pFnProcessInstantHitEx = (UFunction*) UObject::GObjObjects()->Data[ 122167 ];

	AKFWeap_MedicBase_execProcessInstantHitEx_Parms ProcessInstantHitEx_Parms;

	this->ProcessEvent ( pFnProcessInstantHitEx, &ProcessInstantHitEx_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.ConsumeAmmo
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::ConsumeAmmo ( )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122165 ];

	AKFWeap_MedicBase_execConsumeAmmo_Parms ConsumeAmmo_Parms;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.AltFireMode
// [0x00020102] 
// Parameters infos:

void AKFWeap_MedicBase::AltFireMode ( )
{
	static UFunction* pFnAltFireMode = NULL;

	if ( ! pFnAltFireMode )
		pFnAltFireMode = (UFunction*) UObject::GObjObjects()->Data[ 122164 ];

	AKFWeap_MedicBase_execAltFireMode_Parms AltFireMode_Parms;

	this->ProcessEvent ( pFnAltFireMode, &AltFireMode_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_MedicBase::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 122162 ];

	AKFWeap_MedicBase_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFWeap_MedicBase.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_MedicBase::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 122160 ];

	AKFWeap_MedicBase_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.OnBecomeInActive
// [0x00020002] 
// Parameters infos:

void UKFPlayerZedSuicideCamera::OnBecomeInActive ( )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 119650 ];

	UKFPlayerZedSuicideCamera_execOnBecomeInActive_Parms OnBecomeInActive_Parms;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.UpdateCamera
// [0x00420102] 
// Parameters infos:

void UKFPlayerZedSuicideCamera::UpdateCamera ( )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 119645 ];

	UKFPlayerZedSuicideCamera_execUpdateCamera_Parms UpdateCamera_Parms;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.UpdateCameraFocalPoint
// [0x00820002] 
// Parameters infos:

void UKFPlayerZedSuicideCamera::UpdateCameraFocalPoint ( )
{
	static UFunction* pFnUpdateCameraFocalPoint = NULL;

	if ( ! pFnUpdateCameraFocalPoint )
		pFnUpdateCameraFocalPoint = (UFunction*) UObject::GObjObjects()->Data[ 119641 ];

	UKFPlayerZedSuicideCamera_execUpdateCameraFocalPoint_Parms UpdateCameraFocalPoint_Parms;

	this->ProcessEvent ( pFnUpdateCameraFocalPoint, &UpdateCameraFocalPoint_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.InitSuicideCam
// [0x00020002] 
// Parameters infos:

void UKFPlayerZedSuicideCamera::InitSuicideCam ( )
{
	static UFunction* pFnInitSuicideCam = NULL;

	if ( ! pFnInitSuicideCam )
		pFnInitSuicideCam = (UFunction*) UObject::GObjObjects()->Data[ 119639 ];

	UKFPlayerZedSuicideCamera_execInitSuicideCam_Parms InitSuicideCam_Parms;

	this->ProcessEvent ( pFnInitSuicideCam, &InitSuicideCam_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedSuicideCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:

void UKFPlayerZedSuicideCamera::OnBecomeActive ( )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 119637 ];

	UKFPlayerZedSuicideCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.OnBecomeInActive
// [0x00020002] 
// Parameters infos:

void UKFPlayerZedWaitingCamera::OnBecomeInActive ( )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 119689 ];

	UKFPlayerZedWaitingCamera_execOnBecomeInActive_Parms OnBecomeInActive_Parms;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.PlayExitFade
// [0x00020002] 
// Parameters infos:

void UKFPlayerZedWaitingCamera::PlayExitFade ( )
{
	static UFunction* pFnPlayExitFade = NULL;

	if ( ! pFnPlayExitFade )
		pFnPlayExitFade = (UFunction*) UObject::GObjObjects()->Data[ 119688 ];

	UKFPlayerZedWaitingCamera_execPlayExitFade_Parms PlayExitFade_Parms;

	this->ProcessEvent ( pFnPlayExitFade, &PlayExitFade_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.UpdateCamera
// [0x00420102] 
// Parameters infos:

void UKFPlayerZedWaitingCamera::UpdateCamera ( )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 119683 ];

	UKFPlayerZedWaitingCamera_execUpdateCamera_Parms UpdateCamera_Parms;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.UpdateCameraFocalPoint
// [0x00820002] 
// Parameters infos:

void UKFPlayerZedWaitingCamera::UpdateCameraFocalPoint ( )
{
	static UFunction* pFnUpdateCameraFocalPoint = NULL;

	if ( ! pFnUpdateCameraFocalPoint )
		pFnUpdateCameraFocalPoint = (UFunction*) UObject::GObjObjects()->Data[ 119677 ];

	UKFPlayerZedWaitingCamera_execUpdateCameraFocalPoint_Parms UpdateCameraFocalPoint_Parms;

	this->ProcessEvent ( pFnUpdateCameraFocalPoint, &UpdateCameraFocalPoint_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.PopulateFocalPoints
// [0x00020002] 
// Parameters infos:

void UKFPlayerZedWaitingCamera::PopulateFocalPoints ( )
{
	static UFunction* pFnPopulateFocalPoints = NULL;

	if ( ! pFnPopulateFocalPoints )
		pFnPopulateFocalPoints = (UFunction*) UObject::GObjObjects()->Data[ 119672 ];

	UKFPlayerZedWaitingCamera_execPopulateFocalPoints_Parms PopulateFocalPoints_Parms;

	this->ProcessEvent ( pFnPopulateFocalPoints, &PopulateFocalPoints_Parms, NULL );
};

// Function kfgamecontent.KFPlayerZedWaitingCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:

void UKFPlayerZedWaitingCamera::OnBecomeActive ( )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 119670 ];

	UKFPlayerZedWaitingCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function kfgamecontent.KFProj_Blade_Eviscerator.ShouldProcessBulletTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_Blade_Eviscerator::ShouldProcessBulletTouch ( )
{
	static UFunction* pFnShouldProcessBulletTouch = NULL;

	if ( ! pFnShouldProcessBulletTouch )
		pFnShouldProcessBulletTouch = (UFunction*) UObject::GObjObjects()->Data[ 119695 ];

	AKFProj_Blade_Eviscerator_execShouldProcessBulletTouch_Parms ShouldProcessBulletTouch_Parms;

	this->ProcessEvent ( pFnShouldProcessBulletTouch, &ShouldProcessBulletTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_Blade_Eviscerator.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Blade_Eviscerator::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 119694 ];

	AKFProj_Blade_Eviscerator_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_Bolt_Crossbow.SyncOriginalLocation
// [0x00020102] 
// Parameters infos:

void AKFProj_Bolt_Crossbow::SyncOriginalLocation ( )
{
	static UFunction* pFnSyncOriginalLocation = NULL;

	if ( ! pFnSyncOriginalLocation )
		pFnSyncOriginalLocation = (UFunction*) UObject::GObjObjects()->Data[ 119831 ];

	AKFProj_Bolt_Crossbow_execSyncOriginalLocation_Parms SyncOriginalLocation_Parms;

	this->ProcessEvent ( pFnSyncOriginalLocation, &SyncOriginalLocation_Parms, NULL );
};

// Function kfgamecontent.KFProj_Bullet_Pellet.ShouldWarnAIWhenFired
// [0x00020002] 
// Parameters infos:

void AKFProj_Bullet_Pellet::ShouldWarnAIWhenFired ( )
{
	static UFunction* pFnShouldWarnAIWhenFired = NULL;

	if ( ! pFnShouldWarnAIWhenFired )
		pFnShouldWarnAIWhenFired = (UFunction*) UObject::GObjObjects()->Data[ 119888 ];

	AKFProj_Bullet_Pellet_execShouldWarnAIWhenFired_Parms ShouldWarnAIWhenFired_Parms;

	this->ProcessEvent ( pFnShouldWarnAIWhenFired, &ShouldWarnAIWhenFired_Parms, NULL );
};

// Function kfgamecontent.KFProj_Bullet_Pellet.Init
// [0x00020002] 
// Parameters infos:

void AKFProj_Bullet_Pellet::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 119886 ];

	AKFProj_Bullet_Pellet_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function kfgamecontent.KFProj_GroundFire.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_GroundFire::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 119953 ];

	AKFProj_GroundFire_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFProj_GroundFire.PrepareExplosionActor
// [0x00080102] 
// Parameters infos:

void AKFProj_GroundFire::PrepareExplosionActor ( )
{
	static UFunction* pFnPrepareExplosionActor = NULL;

	if ( ! pFnPrepareExplosionActor )
		pFnPrepareExplosionActor = (UFunction*) UObject::GObjObjects()->Data[ 119950 ];

	AKFProj_GroundFire_execPrepareExplosionActor_Parms PrepareExplosionActor_Parms;

	this->ProcessEvent ( pFnPrepareExplosionActor, &PrepareExplosionActor_Parms, NULL );
};

// Function kfgamecontent.KFProj_GroundFire.Touch
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AKFProj_GroundFire::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 119945 ];

	AKFProj_GroundFire_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFProj_GroundFire.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_GroundFire::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 119943 ];

	AKFProj_GroundFire_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_GroundFire.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_GroundFire::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 119941 ];

	AKFProj_GroundFire_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFProj_GroundFire.WarnAI
// [0x00820002] 
// Parameters infos:

void AKFProj_GroundFire::WarnAI ( )
{
	static UFunction* pFnWarnAI = NULL;

	if ( ! pFnWarnAI )
		pFnWarnAI = (UFunction*) UObject::GObjObjects()->Data[ 119937 ];

	AKFProj_GroundFire_execWarnAI_Parms WarnAI_Parms;

	this->ProcessEvent ( pFnWarnAI, &WarnAI_Parms, NULL );
};

// Function kfgamecontent.KFProj_DynamiteGrenade.SetExplosionActorClass
// [0x00080102] 
// Parameters infos:

void AKFProj_DynamiteGrenade::SetExplosionActorClass ( )
{
	static UFunction* pFnSetExplosionActorClass = NULL;

	if ( ! pFnSetExplosionActorClass )
		pFnSetExplosionActorClass = (UFunction*) UObject::GObjObjects()->Data[ 119983 ];

	AKFProj_DynamiteGrenade_execSetExplosionActorClass_Parms SetExplosionActorClass_Parms;

	this->ProcessEvent ( pFnSetExplosionActorClass, &SetExplosionActorClass_Parms, NULL );
};

// Function kfgamecontent.KFProj_DynamiteGrenade.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_DynamiteGrenade::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 119982 ];

	AKFProj_DynamiteGrenade_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFProj_DynamiteGrenade.ProcessTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_DynamiteGrenade::ProcessTouch ( )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 119977 ];

	AKFProj_DynamiteGrenade_execProcessTouch_Parms ProcessTouch_Parms;

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_DynamiteGrenade.TriggerExplosion
// [0x00020102] 
// Parameters infos:

void AKFProj_DynamiteGrenade::TriggerExplosion ( )
{
	static UFunction* pFnTriggerExplosion = NULL;

	if ( ! pFnTriggerExplosion )
		pFnTriggerExplosion = (UFunction*) UObject::GObjObjects()->Data[ 119973 ];

	AKFProj_DynamiteGrenade_execTriggerExplosion_Parms TriggerExplosion_Parms;

	this->ProcessEvent ( pFnTriggerExplosion, &TriggerExplosion_Parms, NULL );
};

// Function kfgamecontent.KFProj_DynamiteGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_DynamiteGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 119972 ];

	AKFProj_DynamiteGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_EMPGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_EMPGrenade::eventGrenadeIsAtRest ( )
{
	static UFunction* pFnGrenadeIsAtRest = NULL;

	if ( ! pFnGrenadeIsAtRest )
		pFnGrenadeIsAtRest = (UFunction*) UObject::GObjObjects()->Data[ 119998 ];

	AKFProj_EMPGrenade_eventGrenadeIsAtRest_Parms GrenadeIsAtRest_Parms;

	this->ProcessEvent ( pFnGrenadeIsAtRest, &GrenadeIsAtRest_Parms, NULL );
};

// Function kfgamecontent.KFProj_EMPGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_EMPGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 119997 ];

	AKFProj_EMPGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlareGun.StopSimulating
// [0x00880102] 
// Parameters infos:

void AKFProj_FlareGun::StopSimulating ( )
{
	static UFunction* pFnStopSimulating = NULL;

	if ( ! pFnStopSimulating )
		pFnStopSimulating = (UFunction*) UObject::GObjObjects()->Data[ 120042 ];

	AKFProj_FlareGun_execStopSimulating_Parms StopSimulating_Parms;

	this->ProcessEvent ( pFnStopSimulating, &StopSimulating_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlareGun.TriggerExplosion
// [0x00020102] 
// Parameters infos:

void AKFProj_FlareGun::TriggerExplosion ( )
{
	static UFunction* pFnTriggerExplosion = NULL;

	if ( ! pFnTriggerExplosion )
		pFnTriggerExplosion = (UFunction*) UObject::GObjObjects()->Data[ 120038 ];

	AKFProj_FlareGun_execTriggerExplosion_Parms TriggerExplosion_Parms;

	this->ProcessEvent ( pFnTriggerExplosion, &TriggerExplosion_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlareGun.ProcessTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_FlareGun::ProcessTouch ( )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 120034 ];

	AKFProj_FlareGun_execProcessTouch_Parms ProcessTouch_Parms;

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlareGun.StopFlightEffects
// [0x00080102] 
// Parameters infos:

void AKFProj_FlareGun::StopFlightEffects ( )
{
	static UFunction* pFnStopFlightEffects = NULL;

	if ( ! pFnStopFlightEffects )
		pFnStopFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 120033 ];

	AKFProj_FlareGun_execStopFlightEffects_Parms StopFlightEffects_Parms;

	this->ProcessEvent ( pFnStopFlightEffects, &StopFlightEffects_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlareGun.MidFlightFXTimer
// [0x00020102] 
// Parameters infos:

void AKFProj_FlareGun::MidFlightFXTimer ( )
{
	static UFunction* pFnMidFlightFXTimer = NULL;

	if ( ! pFnMidFlightFXTimer )
		pFnMidFlightFXTimer = (UFunction*) UObject::GObjObjects()->Data[ 120032 ];

	AKFProj_FlareGun_execMidFlightFXTimer_Parms MidFlightFXTimer_Parms;

	this->ProcessEvent ( pFnMidFlightFXTimer, &MidFlightFXTimer_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlareGun.SpawnFlightEffects
// [0x00020102] 
// Parameters infos:

void AKFProj_FlareGun::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 120031 ];

	AKFProj_FlareGun_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovSplash.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_MolotovSplash::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 120070 ];

	AKFProj_MolotovSplash_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovSplash.PrepareExplosionActor
// [0x00880102] 
// Parameters infos:

void AKFProj_MolotovSplash::PrepareExplosionActor ( )
{
	static UFunction* pFnPrepareExplosionActor = NULL;

	if ( ! pFnPrepareExplosionActor )
		pFnPrepareExplosionActor = (UFunction*) UObject::GObjObjects()->Data[ 120065 ];

	AKFProj_MolotovSplash_execPrepareExplosionActor_Parms PrepareExplosionActor_Parms;

	this->ProcessEvent ( pFnPrepareExplosionActor, &PrepareExplosionActor_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovSplash.ProcessTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_MolotovSplash::ProcessTouch ( )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 120061 ];

	AKFProj_MolotovSplash_execProcessTouch_Parms ProcessTouch_Parms;

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovSplash.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_MolotovSplash::eventHitWall ( )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 120057 ];

	AKFProj_MolotovSplash_eventHitWall_Parms HitWall_Parms;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlashBangGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_FlashBangGrenade::eventGrenadeIsAtRest ( )
{
	static UFunction* pFnGrenadeIsAtRest = NULL;

	if ( ! pFnGrenadeIsAtRest )
		pFnGrenadeIsAtRest = (UFunction*) UObject::GObjObjects()->Data[ 120087 ];

	AKFProj_FlashBangGrenade_eventGrenadeIsAtRest_Parms GrenadeIsAtRest_Parms;

	this->ProcessEvent ( pFnGrenadeIsAtRest, &GrenadeIsAtRest_Parms, NULL );
};

// Function kfgamecontent.KFProj_FlashBangGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_FlashBangGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120086 ];

	AKFProj_FlashBangGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_FreezeGrenade.GrenadeIsAtRest
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_FreezeGrenade::eventGrenadeIsAtRest ( )
{
	static UFunction* pFnGrenadeIsAtRest = NULL;

	if ( ! pFnGrenadeIsAtRest )
		pFnGrenadeIsAtRest = (UFunction*) UObject::GObjObjects()->Data[ 120107 ];

	AKFProj_FreezeGrenade_eventGrenadeIsAtRest_Parms GrenadeIsAtRest_Parms;

	this->ProcessEvent ( pFnGrenadeIsAtRest, &GrenadeIsAtRest_Parms, NULL );
};

// Function kfgamecontent.KFProj_FreezeGrenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_FreezeGrenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120106 ];

	AKFProj_FreezeGrenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_GrenadeShard.Tick
// [0x00020102] 
// Parameters infos:

void AKFProj_GrenadeShard::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120125 ];

	AKFProj_GrenadeShard_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_GrenadeShard.ProcessTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_GrenadeShard::ProcessTouch ( )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 120121 ];

	AKFProj_GrenadeShard_execProcessTouch_Parms ProcessTouch_Parms;

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_GrenadeShard.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_GrenadeShard::eventHitWall ( )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 120117 ];

	AKFProj_GrenadeShard_eventHitWall_Parms HitWall_Parms;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function kfgamecontent.KFProj_HealingDart.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_HealingDart::eventHitWall ( )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 120177 ];

	AKFProj_HealingDart_eventHitWall_Parms HitWall_Parms;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function kfgamecontent.KFProj_HealingDart.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AKFProj_HealingDart::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120172 ];

	AKFProj_HealingDart_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_HealingDart.InitializeSeek
// [0x00020102] 
// Parameters infos:

void AKFProj_HealingDart::InitializeSeek ( )
{
	static UFunction* pFnInitializeSeek = NULL;

	if ( ! pFnInitializeSeek )
		pFnInitializeSeek = (UFunction*) UObject::GObjObjects()->Data[ 120170 ];

	AKFProj_HealingDart_execInitializeSeek_Parms InitializeSeek_Parms;

	this->ProcessEvent ( pFnInitializeSeek, &InitializeSeek_Parms, NULL );
};

// Function kfgamecontent.KFProj_MicrowaveImpact.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_MicrowaveImpact::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 120286 ];

	AKFProj_MicrowaveImpact_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFProj_MicrowaveImpact.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_MicrowaveImpact::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 120281 ];

	AKFProj_MicrowaveImpact_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFProj_MicrowaveImpact.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_MicrowaveImpact::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120280 ];

	AKFProj_MicrowaveImpact_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovFlare.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_MolotovFlare::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120372 ];

	AKFProj_MolotovFlare_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovFlare.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_MolotovFlare::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120371 ];

	AKFProj_MolotovFlare_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovGrenade.SpawnResidualFlames
// [0x00820002] 
// Parameters infos:

void AKFProj_MolotovGrenade::SpawnResidualFlames ( )
{
	static UFunction* pFnSpawnResidualFlames = NULL;

	if ( ! pFnSpawnResidualFlames )
		pFnSpawnResidualFlames = (UFunction*) UObject::GObjObjects()->Data[ 120398 ];

	AKFProj_MolotovGrenade_execSpawnResidualFlames_Parms SpawnResidualFlames_Parms;

	this->ProcessEvent ( pFnSpawnResidualFlames, &SpawnResidualFlames_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovGrenade.Explode
// [0x00820102] 
// Parameters infos:

void AKFProj_MolotovGrenade::Explode ( )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 120392 ];

	AKFProj_MolotovGrenade_execExplode_Parms Explode_Parms;

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovGrenade.ProcessTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_MolotovGrenade::ProcessTouch ( )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 120388 ];

	AKFProj_MolotovGrenade_execProcessTouch_Parms ProcessTouch_Parms;

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovGrenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_MolotovGrenade::eventHitWall ( )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 120384 ];

	AKFProj_MolotovGrenade_eventHitWall_Parms HitWall_Parms;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function kfgamecontent.KFProj_MolotovGrenade.SpawnFlightEffects
// [0x00020102] 
// Parameters infos:

void AKFProj_MolotovGrenade::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 120383 ];

	AKFProj_MolotovGrenade_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};

// Function kfgamecontent.KFProj_Rocket_Seeker6.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Rocket_Seeker6::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120502 ];

	AKFProj_Rocket_Seeker6_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Rocket_Seeker6.SetLockedTarget
// [0x00020002] 
// Parameters infos:

void AKFProj_Rocket_Seeker6::SetLockedTarget ( )
{
	static UFunction* pFnSetLockedTarget = NULL;

	if ( ! pFnSetLockedTarget )
		pFnSetLockedTarget = (UFunction*) UObject::GObjObjects()->Data[ 120500 ];

	AKFProj_Rocket_Seeker6_execSetLockedTarget_Parms SetLockedTarget_Parms;

	this->ProcessEvent ( pFnSetLockedTarget, &SetLockedTarget_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.DrawTargetingIcon
// [0x00820102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::DrawTargetingIcon ( )
{
	static UFunction* pFnDrawTargetingIcon = NULL;

	if ( ! pFnDrawTargetingIcon )
		pFnDrawTargetingIcon = (UFunction*) UObject::GObjObjects()->Data[ 123618 ];

	AKFWeap_RocketLauncher_Seeker6_execDrawTargetingIcon_Parms DrawTargetingIcon_Parms;

	this->ProcessEvent ( pFnDrawTargetingIcon, &DrawTargetingIcon_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.DrawHUD
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::DrawHUD ( )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 123614 ];

	AKFWeap_RocketLauncher_Seeker6_execDrawHUD_Parms DrawHUD_Parms;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.SpawnProjectile
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 123608 ];

	AKFWeap_RocketLauncher_Seeker6_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.PlayTargetLostEffects
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::PlayTargetLostEffects ( )
{
	static UFunction* pFnPlayTargetLostEffects = NULL;

	if ( ! pFnPlayTargetLostEffects )
		pFnPlayTargetLostEffects = (UFunction*) UObject::GObjObjects()->Data[ 123607 ];

	AKFWeap_RocketLauncher_Seeker6_execPlayTargetLostEffects_Parms PlayTargetLostEffects_Parms;

	this->ProcessEvent ( pFnPlayTargetLostEffects, &PlayTargetLostEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.PlayTargetLockOnEffects
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::PlayTargetLockOnEffects ( )
{
	static UFunction* pFnPlayTargetLockOnEffects = NULL;

	if ( ! pFnPlayTargetLockOnEffects )
		pFnPlayTargetLockOnEffects = (UFunction*) UObject::GObjObjects()->Data[ 123606 ];

	AKFWeap_RocketLauncher_Seeker6_execPlayTargetLockOnEffects_Parms PlayTargetLockOnEffects_Parms;

	this->ProcessEvent ( pFnPlayTargetLockOnEffects, &PlayTargetLockOnEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ZoomOut
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::ZoomOut ( )
{
	static UFunction* pFnZoomOut = NULL;

	if ( ! pFnZoomOut )
		pFnZoomOut = (UFunction*) UObject::GObjObjects()->Data[ 123603 ];

	AKFWeap_RocketLauncher_Seeker6_execZoomOut_Parms ZoomOut_Parms;

	this->ProcessEvent ( pFnZoomOut, &ZoomOut_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ZoomIn
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::ZoomIn ( )
{
	static UFunction* pFnZoomIn = NULL;

	if ( ! pFnZoomIn )
		pFnZoomIn = (UFunction*) UObject::GObjObjects()->Data[ 123600 ];

	AKFWeap_RocketLauncher_Seeker6_execZoomIn_Parms ZoomIn_Parms;

	this->ProcessEvent ( pFnZoomIn, &ZoomIn_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.GetLockedTargetLoc
// [0x00022102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::GetLockedTargetLoc ( )
{
	static UFunction* pFnGetLockedTargetLoc = NULL;

	if ( ! pFnGetLockedTargetLoc )
		pFnGetLockedTargetLoc = (UFunction*) UObject::GObjObjects()->Data[ 120507 ];

	AKFWeap_RocketLauncher_Seeker6_execGetLockedTargetLoc_Parms GetLockedTargetLoc_Parms;

	this->ProcessEvent ( pFnGetLockedTargetLoc, &GetLockedTargetLoc_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ServerSyncLockedTargets
// [0x002200C2] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::ServerSyncLockedTargets ( )
{
	static UFunction* pFnServerSyncLockedTargets = NULL;

	if ( ! pFnServerSyncLockedTargets )
		pFnServerSyncLockedTargets = (UFunction*) UObject::GObjObjects()->Data[ 123596 ];

	AKFWeap_RocketLauncher_Seeker6_execServerSyncLockedTargets_Parms ServerSyncLockedTargets_Parms;

	this->ProcessEvent ( pFnServerSyncLockedTargets, &ServerSyncLockedTargets_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.ValidateTargets
// [0x00824102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::ValidateTargets ( )
{
	static UFunction* pFnValidateTargets = NULL;

	if ( ! pFnValidateTargets )
		pFnValidateTargets = (UFunction*) UObject::GObjObjects()->Data[ 123586 ];

	AKFWeap_RocketLauncher_Seeker6_execValidateTargets_Parms ValidateTargets_Parms;

	this->ProcessEvent ( pFnValidateTargets, &ValidateTargets_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.FindTargets
// [0x00C20102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::FindTargets ( )
{
	static UFunction* pFnFindTargets = NULL;

	if ( ! pFnFindTargets )
		pFnFindTargets = (UFunction*) UObject::GObjObjects()->Data[ 123570 ];

	AKFWeap_RocketLauncher_Seeker6_execFindTargets_Parms FindTargets_Parms;

	this->ProcessEvent ( pFnFindTargets, &FindTargets_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 123564 ];

	AKFWeap_RocketLauncher_Seeker6_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_Seeker6.AltFireMode
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_Seeker6::AltFireMode ( )
{
	static UFunction* pFnAltFireMode = NULL;

	if ( ! pFnAltFireMode )
		pFnAltFireMode = (UFunction*) UObject::GObjObjects()->Data[ 123563 ];

	AKFWeap_RocketLauncher_Seeker6_execAltFireMode_Parms AltFireMode_Parms;

	this->ProcessEvent ( pFnAltFireMode, &AltFireMode_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.OnInstigatorControllerLeft
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::OnInstigatorControllerLeft ( )
{
	static UFunction* pFnOnInstigatorControllerLeft = NULL;

	if ( ! pFnOnInstigatorControllerLeft )
		pFnOnInstigatorControllerLeft = (UFunction*) UObject::GObjObjects()->Data[ 120652 ];

	AKFProj_Thrown_C4_execOnInstigatorControllerLeft_Parms OnInstigatorControllerLeft_Parms;

	this->ProcessEvent ( pFnOnInstigatorControllerLeft, &OnInstigatorControllerLeft_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Thrown_C4::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 120651 ];

	AKFProj_Thrown_C4_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.Timer_Explode
// [0x00020002] 
// Parameters infos:

void AKFProj_Thrown_C4::Timer_Explode ( )
{
	static UFunction* pFnTimer_Explode = NULL;

	if ( ! pFnTimer_Explode )
		pFnTimer_Explode = (UFunction*) UObject::GObjObjects()->Data[ 120650 ];

	AKFProj_Thrown_C4_execTimer_Explode_Parms Timer_Explode_Parms;

	this->ProcessEvent ( pFnTimer_Explode, &Timer_Explode_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.SetExplosionActorClass
// [0x00080102] 
// Parameters infos:

void AKFProj_Thrown_C4::SetExplosionActorClass ( )
{
	static UFunction* pFnSetExplosionActorClass = NULL;

	if ( ! pFnSetExplosionActorClass )
		pFnSetExplosionActorClass = (UFunction*) UObject::GObjObjects()->Data[ 120648 ];

	AKFProj_Thrown_C4_execSetExplosionActorClass_Parms SetExplosionActorClass_Parms;

	this->ProcessEvent ( pFnSetExplosionActorClass, &SetExplosionActorClass_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.PrepareExplosionTemplate
// [0x00080102] 
// Parameters infos:

void AKFProj_Thrown_C4::PrepareExplosionTemplate ( )
{
	static UFunction* pFnPrepareExplosionTemplate = NULL;

	if ( ! pFnPrepareExplosionTemplate )
		pFnPrepareExplosionTemplate = (UFunction*) UObject::GObjObjects()->Data[ 120647 ];

	AKFProj_Thrown_C4_execPrepareExplosionTemplate_Parms PrepareExplosionTemplate_Parms;

	this->ProcessEvent ( pFnPrepareExplosionTemplate, &PrepareExplosionTemplate_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.Disintegrate
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::Disintegrate ( )
{
	static UFunction* pFnDisintegrate = NULL;

	if ( ! pFnDisintegrate )
		pFnDisintegrate = (UFunction*) UObject::GObjObjects()->Data[ 120644 ];

	AKFProj_Thrown_C4_execDisintegrate_Parms Disintegrate_Parms;

	this->ProcessEvent ( pFnDisintegrate, &Disintegrate_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.Explode
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::Explode ( )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 120641 ];

	AKFProj_Thrown_C4_execExplode_Parms Explode_Parms;

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.Detonate
// [0x00820002] 
// Parameters infos:

void AKFProj_Thrown_C4::Detonate ( )
{
	static UFunction* pFnDetonate = NULL;

	if ( ! pFnDetonate )
		pFnDetonate = (UFunction*) UObject::GObjObjects()->Data[ 120638 ];

	AKFProj_Thrown_C4_execDetonate_Parms Detonate_Parms;

	this->ProcessEvent ( pFnDetonate, &Detonate_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.RestartMovement
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::RestartMovement ( )
{
	static UFunction* pFnRestartMovement = NULL;

	if ( ! pFnRestartMovement )
		pFnRestartMovement = (UFunction*) UObject::GObjObjects()->Data[ 120637 ];

	AKFProj_Thrown_C4_execRestartMovement_Parms RestartMovement_Parms;

	this->ProcessEvent ( pFnRestartMovement, &RestartMovement_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.StopMovement
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::StopMovement ( )
{
	static UFunction* pFnStopMovement = NULL;

	if ( ! pFnStopMovement )
		pFnStopMovement = (UFunction*) UObject::GObjObjects()->Data[ 120636 ];

	AKFProj_Thrown_C4_execStopMovement_Parms StopMovement_Parms;

	this->ProcessEvent ( pFnStopMovement, &StopMovement_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.GetBoneLocationFromActor
// [0x00420102] 
// Parameters infos:

void AKFProj_Thrown_C4::GetBoneLocationFromActor ( )
{
	static UFunction* pFnGetBoneLocationFromActor = NULL;

	if ( ! pFnGetBoneLocationFromActor )
		pFnGetBoneLocationFromActor = (UFunction*) UObject::GObjObjects()->Data[ 120629 ];

	AKFProj_Thrown_C4_execGetBoneLocationFromActor_Parms GetBoneLocationFromActor_Parms;

	this->ProcessEvent ( pFnGetBoneLocationFromActor, &GetBoneLocationFromActor_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.GetBoneIndexFromActor
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::GetBoneIndexFromActor ( )
{
	static UFunction* pFnGetBoneIndexFromActor = NULL;

	if ( ! pFnGetBoneIndexFromActor )
		pFnGetBoneIndexFromActor = (UFunction*) UObject::GObjObjects()->Data[ 120623 ];

	AKFProj_Thrown_C4_execGetBoneIndexFromActor_Parms GetBoneIndexFromActor_Parms;

	this->ProcessEvent ( pFnGetBoneIndexFromActor, &GetBoneIndexFromActor_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.ReplicatedStick
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::ReplicatedStick ( )
{
	static UFunction* pFnReplicatedStick = NULL;

	if ( ! pFnReplicatedStick )
		pFnReplicatedStick = (UFunction*) UObject::GObjObjects()->Data[ 120620 ];

	AKFProj_Thrown_C4_execReplicatedStick_Parms ReplicatedStick_Parms;

	this->ProcessEvent ( pFnReplicatedStick, &ReplicatedStick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.ServerStick
// [0x002200C2] 
// Parameters infos:

void AKFProj_Thrown_C4::ServerStick ( )
{
	static UFunction* pFnServerStick = NULL;

	if ( ! pFnServerStick )
		pFnServerStick = (UFunction*) UObject::GObjObjects()->Data[ 120615 ];

	AKFProj_Thrown_C4_execServerStick_Parms ServerStick_Parms;

	this->ProcessEvent ( pFnServerStick, &ServerStick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.GetActorSkeletalMesh
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::GetActorSkeletalMesh ( )
{
	static UFunction* pFnGetActorSkeletalMesh = NULL;

	if ( ! pFnGetActorSkeletalMesh )
		pFnGetActorSkeletalMesh = (UFunction*) UObject::GObjObjects()->Data[ 120610 ];

	AKFProj_Thrown_C4_execGetActorSkeletalMesh_Parms GetActorSkeletalMesh_Parms;

	this->ProcessEvent ( pFnGetActorSkeletalMesh, &GetActorSkeletalMesh_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.StickToActor
// [0x00024102] 
// Parameters infos:

void AKFProj_Thrown_C4::StickToActor ( )
{
	static UFunction* pFnStickToActor = NULL;

	if ( ! pFnStickToActor )
		pFnStickToActor = (UFunction*) UObject::GObjObjects()->Data[ 120603 ];

	AKFProj_Thrown_C4_execStickToActor_Parms StickToActor_Parms;

	this->ProcessEvent ( pFnStickToActor, &StickToActor_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.GetImpactInfo
// [0x00C20102] 
// Parameters infos:

void AKFProj_Thrown_C4::GetImpactInfo ( )
{
	static UFunction* pFnGetImpactInfo = NULL;

	if ( ! pFnGetImpactInfo )
		pFnGetImpactInfo = (UFunction*) UObject::GObjObjects()->Data[ 120596 ];

	AKFProj_Thrown_C4_execGetImpactInfo_Parms GetImpactInfo_Parms;

	this->ProcessEvent ( pFnGetImpactInfo, &GetImpactInfo_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.Stick
// [0x00C20102] 
// Parameters infos:

void AKFProj_Thrown_C4::Stick ( )
{
	static UFunction* pFnStick = NULL;

	if ( ! pFnStick )
		pFnStick = (UFunction*) UObject::GObjObjects()->Data[ 120589 ];

	AKFProj_Thrown_C4_execStick_Parms Stick_Parms;

	this->ProcessEvent ( pFnStick, &Stick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.GetImpactResult
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::GetImpactResult ( )
{
	static UFunction* pFnGetImpactResult = NULL;

	if ( ! pFnGetImpactResult )
		pFnGetImpactResult = (UFunction*) UObject::GObjObjects()->Data[ 120582 ];

	AKFProj_Thrown_C4_execGetImpactResult_Parms GetImpactResult_Parms;

	this->ProcessEvent ( pFnGetImpactResult, &GetImpactResult_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.TryStick
// [0x00824102] 
// Parameters infos:

void AKFProj_Thrown_C4::TryStick ( )
{
	static UFunction* pFnTryStick = NULL;

	if ( ! pFnTryStick )
		pFnTryStick = (UFunction*) UObject::GObjObjects()->Data[ 120577 ];

	AKFProj_Thrown_C4_execTryStick_Parms TryStick_Parms;

	this->ProcessEvent ( pFnTryStick, &TryStick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Thrown_C4::eventHitWall ( )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 120573 ];

	AKFProj_Thrown_C4_eventHitWall_Parms HitWall_Parms;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.ProcessTouch
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::ProcessTouch ( )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 120569 ];

	AKFProj_Thrown_C4_execProcessTouch_Parms ProcessTouch_Parms;

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.BlinkOff
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::BlinkOff ( )
{
	static UFunction* pFnBlinkOff = NULL;

	if ( ! pFnBlinkOff )
		pFnBlinkOff = (UFunction*) UObject::GObjObjects()->Data[ 120568 ];

	AKFProj_Thrown_C4_execBlinkOff_Parms BlinkOff_Parms;

	this->ProcessEvent ( pFnBlinkOff, &BlinkOff_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.BlinkOn
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::BlinkOn ( )
{
	static UFunction* pFnBlinkOn = NULL;

	if ( ! pFnBlinkOn )
		pFnBlinkOn = (UFunction*) UObject::GObjObjects()->Data[ 120567 ];

	AKFProj_Thrown_C4_execBlinkOn_Parms BlinkOn_Parms;

	this->ProcessEvent ( pFnBlinkOn, &BlinkOn_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.UpdateAlert
// [0x00820102] 
// Parameters infos:

void AKFProj_Thrown_C4::UpdateAlert ( )
{
	static UFunction* pFnUpdateAlert = NULL;

	if ( ! pFnUpdateAlert )
		pFnUpdateAlert = (UFunction*) UObject::GObjObjects()->Data[ 120559 ];

	AKFProj_Thrown_C4_execUpdateAlert_Parms UpdateAlert_Parms;

	this->ProcessEvent ( pFnUpdateAlert, &UpdateAlert_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Thrown_C4::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120551 ];

	AKFProj_Thrown_C4_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFProj_Thrown_C4::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120550 ];

	AKFProj_Thrown_C4_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFProj_Thrown_C4.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFProj_Thrown_C4::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 120548 ];

	AKFProj_Thrown_C4_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Thrown_C4::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 124037 ];

	AKFWeap_Thrown_C4_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.GotoActiveState
// [0x00020100] 
// Parameters infos:

void AKFWeap_Thrown_C4::GotoActiveState ( )
{
	static UFunction* pFnGotoActiveState = NULL;

	if ( ! pFnGotoActiveState )
		pFnGotoActiveState = (UFunction*) UObject::GObjObjects()->Data[ 124018 ];

	AKFWeap_Thrown_C4_execGotoActiveState_Parms GotoActiveState_Parms;

	this->ProcessEvent ( pFnGotoActiveState, &GotoActiveState_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.HasAlwaysOnZedTimeResist
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::HasAlwaysOnZedTimeResist ( )
{
	static UFunction* pFnHasAlwaysOnZedTimeResist = NULL;

	if ( ! pFnHasAlwaysOnZedTimeResist )
		pFnHasAlwaysOnZedTimeResist = (UFunction*) UObject::GObjObjects()->Data[ 124012 ];

	AKFWeap_Thrown_C4_execHasAlwaysOnZedTimeResist_Parms HasAlwaysOnZedTimeResist_Parms;

	this->ProcessEvent ( pFnHasAlwaysOnZedTimeResist, &HasAlwaysOnZedTimeResist_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.AltFireMode
// [0x00020100] 
// Parameters infos:

void AKFWeap_Thrown_C4::AltFireMode ( )
{
	static UFunction* pFnAltFireMode = NULL;

	if ( ! pFnAltFireMode )
		pFnAltFireMode = (UFunction*) UObject::GObjObjects()->Data[ 124011 ];

	AKFWeap_Thrown_C4_execAltFireMode_Parms AltFireMode_Parms;

	this->ProcessEvent ( pFnAltFireMode, &AltFireMode_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.PrepareAndDetonate
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::PrepareAndDetonate ( )
{
	static UFunction* pFnPrepareAndDetonate = NULL;

	if ( ! pFnPrepareAndDetonate )
		pFnPrepareAndDetonate = (UFunction*) UObject::GObjObjects()->Data[ 124007 ];

	AKFWeap_Thrown_C4_execPrepareAndDetonate_Parms PrepareAndDetonate_Parms;

	this->ProcessEvent ( pFnPrepareAndDetonate, &PrepareAndDetonate_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.BeginFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::BeginFire ( )
{
	static UFunction* pFnBeginFire = NULL;

	if ( ! pFnBeginFire )
		pFnBeginFire = (UFunction*) UObject::GObjObjects()->Data[ 124005 ];

	AKFWeap_Thrown_C4_execBeginFire_Parms BeginFire_Parms;

	this->ProcessEvent ( pFnBeginFire, &BeginFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.HasAmmo
// [0x00024102] 
// Parameters infos:

void AKFWeap_Thrown_C4::HasAmmo ( )
{
	static UFunction* pFnHasAmmo = NULL;

	if ( ! pFnHasAmmo )
		pFnHasAmmo = (UFunction*) UObject::GObjObjects()->Data[ 124001 ];

	AKFWeap_Thrown_C4_execHasAmmo_Parms HasAmmo_Parms;

	this->ProcessEvent ( pFnHasAmmo, &HasAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.UsesAmmo
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Thrown_C4::eventUsesAmmo ( )
{
	static UFunction* pFnUsesAmmo = NULL;

	if ( ! pFnUsesAmmo )
		pFnUsesAmmo = (UFunction*) UObject::GObjObjects()->Data[ 123999 ];

	AKFWeap_Thrown_C4_eventUsesAmmo_Parms UsesAmmo_Parms;

	this->ProcessEvent ( pFnUsesAmmo, &UsesAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.SetOriginalValuesFromPickup
// [0x00020002] 
// Parameters infos:

void AKFWeap_Thrown_C4::SetOriginalValuesFromPickup ( )
{
	static UFunction* pFnSetOriginalValuesFromPickup = NULL;

	if ( ! pFnSetOriginalValuesFromPickup )
		pFnSetOriginalValuesFromPickup = (UFunction*) UObject::GObjObjects()->Data[ 123996 ];

	AKFWeap_Thrown_C4_execSetOriginalValuesFromPickup_Parms SetOriginalValuesFromPickup_Parms;

	this->ProcessEvent ( pFnSetOriginalValuesFromPickup, &SetOriginalValuesFromPickup_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.RemoveDeployedCharge
// [0x00024002] 
// Parameters infos:

void AKFWeap_Thrown_C4::RemoveDeployedCharge ( )
{
	static UFunction* pFnRemoveDeployedCharge = NULL;

	if ( ! pFnRemoveDeployedCharge )
		pFnRemoveDeployedCharge = (UFunction*) UObject::GObjObjects()->Data[ 123993 ];

	AKFWeap_Thrown_C4_execRemoveDeployedCharge_Parms RemoveDeployedCharge_Parms;

	this->ProcessEvent ( pFnRemoveDeployedCharge, &RemoveDeployedCharge_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.Detonate
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::Detonate ( )
{
	static UFunction* pFnDetonate = NULL;

	if ( ! pFnDetonate )
		pFnDetonate = (UFunction*) UObject::GObjObjects()->Data[ 123992 ];

	AKFWeap_Thrown_C4_execDetonate_Parms Detonate_Parms;

	this->ProcessEvent ( pFnDetonate, &Detonate_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.ProjectileFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 123988 ];

	AKFWeap_Thrown_C4_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.UpdateScreenUI
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::UpdateScreenUI ( )
{
	static UFunction* pFnUpdateScreenUI = NULL;

	if ( ! pFnUpdateScreenUI )
		pFnUpdateScreenUI = (UFunction*) UObject::GObjObjects()->Data[ 123987 ];

	AKFWeap_Thrown_C4_execUpdateScreenUI_Parms UpdateScreenUI_Parms;

	this->ProcessEvent ( pFnUpdateScreenUI, &UpdateScreenUI_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Thrown_C4::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 123985 ];

	AKFWeap_Thrown_C4_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Thrown_C4::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 123984 ];

	AKFWeap_Thrown_C4_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.DetachWeapon
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 123983 ];

	AKFWeap_Thrown_C4_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.AttachWeaponTo
// [0x00024102] 
// Parameters infos:

void AKFWeap_Thrown_C4::AttachWeaponTo ( )
{
	static UFunction* pFnAttachWeaponTo = NULL;

	if ( ! pFnAttachWeaponTo )
		pFnAttachWeaponTo = (UFunction*) UObject::GObjObjects()->Data[ 123980 ];

	AKFWeap_Thrown_C4_execAttachWeaponTo_Parms AttachWeaponTo_Parms;

	this->ProcessEvent ( pFnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Thrown_C4.SetIronSights
// [0x00020102] 
// Parameters infos:

void AKFWeap_Thrown_C4::SetIronSights ( )
{
	static UFunction* pFnSetIronSights = NULL;

	if ( ! pFnSetIronSights )
		pFnSetIronSights = (UFunction*) UObject::GObjObjects()->Data[ 123978 ];

	AKFWeap_Thrown_C4_execSetIronSights_Parms SetIronSights_Parms;

	this->ProcessEvent ( pFnSetIronSights, &SetIronSights_Parms, NULL );
};

// Function kfgamecontent.KFSeqAct_MinigameActivateGenerator.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UKFSeqAct_MinigameActivateGenerator::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 120673 ];

	UKFSeqAct_MinigameActivateGenerator_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UpdateGeneratorState
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::UpdateGeneratorState ( )
{
	static UFunction* pFnUpdateGeneratorState = NULL;

	if ( ! pFnUpdateGeneratorState )
		pFnUpdateGeneratorState = (UFunction*) UObject::GObjObjects()->Data[ 121836 ];

	AKFTrigger_MinigameGenerator_execUpdateGeneratorState_Parms UpdateGeneratorState_Parms;

	this->ProcessEvent ( pFnUpdateGeneratorState, &UpdateGeneratorState_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.GeneratorReactivated
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::GeneratorReactivated ( )
{
	static UFunction* pFnGeneratorReactivated = NULL;

	if ( ! pFnGeneratorReactivated )
		pFnGeneratorReactivated = (UFunction*) UObject::GObjObjects()->Data[ 121833 ];

	AKFTrigger_MinigameGenerator_execGeneratorReactivated_Parms GeneratorReactivated_Parms;

	this->ProcessEvent ( pFnGeneratorReactivated, &GeneratorReactivated_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.DeactivateMinigames
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::DeactivateMinigames ( )
{
	static UFunction* pFnDeactivateMinigames = NULL;

	if ( ! pFnDeactivateMinigames )
		pFnDeactivateMinigames = (UFunction*) UObject::GObjObjects()->Data[ 121831 ];

	AKFTrigger_MinigameGenerator_execDeactivateMinigames_Parms DeactivateMinigames_Parms;

	this->ProcessEvent ( pFnDeactivateMinigames, &DeactivateMinigames_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.ActivateMinigames
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::ActivateMinigames ( )
{
	static UFunction* pFnActivateMinigames = NULL;

	if ( ! pFnActivateMinigames )
		pFnActivateMinigames = (UFunction*) UObject::GObjObjects()->Data[ 121829 ];

	AKFTrigger_MinigameGenerator_execActivateMinigames_Parms ActivateMinigames_Parms;

	this->ProcessEvent ( pFnActivateMinigames, &ActivateMinigames_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.AllowActivation
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::AllowActivation ( )
{
	static UFunction* pFnAllowActivation = NULL;

	if ( ! pFnAllowActivation )
		pFnAllowActivation = (UFunction*) UObject::GObjObjects()->Data[ 121827 ];

	AKFTrigger_MinigameGenerator_execAllowActivation_Parms AllowActivation_Parms;

	this->ProcessEvent ( pFnAllowActivation, &AllowActivation_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.TriggerObjectiveCompletion
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::TriggerObjectiveCompletion ( )
{
	static UFunction* pFnTriggerObjectiveCompletion = NULL;

	if ( ! pFnTriggerObjectiveCompletion )
		pFnTriggerObjectiveCompletion = (UFunction*) UObject::GObjObjects()->Data[ 121825 ];

	AKFTrigger_MinigameGenerator_execTriggerObjectiveCompletion_Parms TriggerObjectiveCompletion_Parms;

	this->ProcessEvent ( pFnTriggerObjectiveCompletion, &TriggerObjectiveCompletion_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UsedBy
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::UsedBy ( )
{
	static UFunction* pFnUsedBy = NULL;

	if ( ! pFnUsedBy )
		pFnUsedBy = (UFunction*) UObject::GObjObjects()->Data[ 120675 ];

	AKFTrigger_MinigameGenerator_execUsedBy_Parms UsedBy_Parms;

	this->ProcessEvent ( pFnUsedBy, &UsedBy_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 121821 ];

	AKFTrigger_MinigameGenerator_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFTrigger_MinigameGenerator::eventUnTouch ( )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121819 ];

	AKFTrigger_MinigameGenerator_eventUnTouch_Parms UnTouch_Parms;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFTrigger_MinigameGenerator::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121814 ];

	AKFTrigger_MinigameGenerator_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.GetInteractionIndex
// [0x00020102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::GetInteractionIndex ( )
{
	static UFunction* pFnGetInteractionIndex = NULL;

	if ( ! pFnGetInteractionIndex )
		pFnGetInteractionIndex = (UFunction*) UObject::GObjObjects()->Data[ 121811 ];

	AKFTrigger_MinigameGenerator_execGetInteractionIndex_Parms GetInteractionIndex_Parms;

	this->ProcessEvent ( pFnGetInteractionIndex, &GetInteractionIndex_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.GetIsUsable
// [0x00020102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::GetIsUsable ( )
{
	static UFunction* pFnGetIsUsable = NULL;

	if ( ! pFnGetIsUsable )
		pFnGetIsUsable = (UFunction*) UObject::GObjObjects()->Data[ 121808 ];

	AKFTrigger_MinigameGenerator_execGetIsUsable_Parms GetIsUsable_Parms;

	this->ProcessEvent ( pFnGetIsUsable, &GetIsUsable_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.InitEmissiveActors
// [0x00820102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::InitEmissiveActors ( )
{
	static UFunction* pFnInitEmissiveActors = NULL;

	if ( ! pFnInitEmissiveActors )
		pFnInitEmissiveActors = (UFunction*) UObject::GObjObjects()->Data[ 121800 ];

	AKFTrigger_MinigameGenerator_execInitEmissiveActors_Parms InitEmissiveActors_Parms;

	this->ProcessEvent ( pFnInitEmissiveActors, &InitEmissiveActors_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.DisableEmissiveActors
// [0x00820102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::DisableEmissiveActors ( )
{
	static UFunction* pFnDisableEmissiveActors = NULL;

	if ( ! pFnDisableEmissiveActors )
		pFnDisableEmissiveActors = (UFunction*) UObject::GObjObjects()->Data[ 121793 ];

	AKFTrigger_MinigameGenerator_execDisableEmissiveActors_Parms DisableEmissiveActors_Parms;

	this->ProcessEvent ( pFnDisableEmissiveActors, &DisableEmissiveActors_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.EnableNextEmissiveList
// [0x00820102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::EnableNextEmissiveList ( )
{
	static UFunction* pFnEnableNextEmissiveList = NULL;

	if ( ! pFnEnableNextEmissiveList )
		pFnEnableNextEmissiveList = (UFunction*) UObject::GObjObjects()->Data[ 121787 ];

	AKFTrigger_MinigameGenerator_execEnableNextEmissiveList_Parms EnableNextEmissiveList_Parms;

	this->ProcessEvent ( pFnEnableNextEmissiveList, &EnableNextEmissiveList_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.EnableEmissiveActors
// [0x00020102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::EnableEmissiveActors ( )
{
	static UFunction* pFnEnableEmissiveActors = NULL;

	if ( ! pFnEnableEmissiveActors )
		pFnEnableEmissiveActors = (UFunction*) UObject::GObjObjects()->Data[ 121786 ];

	AKFTrigger_MinigameGenerator_execEnableEmissiveActors_Parms EnableEmissiveActors_Parms;

	this->ProcessEvent ( pFnEnableEmissiveActors, &EnableEmissiveActors_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.UpdateGeneratorStatus
// [0x00820102] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::UpdateGeneratorStatus ( )
{
	static UFunction* pFnUpdateGeneratorStatus = NULL;

	if ( ! pFnUpdateGeneratorStatus )
		pFnUpdateGeneratorStatus = (UFunction*) UObject::GObjObjects()->Data[ 121780 ];

	AKFTrigger_MinigameGenerator_execUpdateGeneratorStatus_Parms UpdateGeneratorStatus_Parms;

	this->ProcessEvent ( pFnUpdateGeneratorStatus, &UpdateGeneratorStatus_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.Tick
// [0x00020002] 
// Parameters infos:

void AKFTrigger_MinigameGenerator::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121778 ];

	AKFTrigger_MinigameGenerator_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_MinigameGenerator.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFTrigger_MinigameGenerator::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 121776 ];

	AKFTrigger_MinigameGenerator_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFSeqEvent_MinigameGeneratorStateChanged.StateChanged
// [0x00020002] 
// Parameters infos:

void UKFSeqEvent_MinigameGeneratorStateChanged::StateChanged ( )
{
	static UFunction* pFnStateChanged = NULL;

	if ( ! pFnStateChanged )
		pFnStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 120691 ];

	UKFSeqEvent_MinigameGeneratorStateChanged_execStateChanged_Parms StateChanged_Parms;

	this->ProcessEvent ( pFnStateChanged, &StateChanged_Parms, NULL );
};

// Function kfgamecontent.SprayActor_Flame.SetSprayLength
// [0x00020102] 
// Parameters infos:

void ASprayActor_Flame::SetSprayLength ( )
{
	static UFunction* pFnSetSprayLength = NULL;

	if ( ! pFnSetSprayLength )
		pFnSetSprayLength = (UFunction*) UObject::GObjObjects()->Data[ 120920 ];

	ASprayActor_Flame_execSetSprayLength_Parms SetSprayLength_Parms;

	this->ProcessEvent ( pFnSetSprayLength, &SetSprayLength_Parms, NULL );
};

// Function kfgamecontent.SprayActor_Flame.BeginSpray
// [0x00020102] 
// Parameters infos:

void ASprayActor_Flame::BeginSpray ( )
{
	static UFunction* pFnBeginSpray = NULL;

	if ( ! pFnBeginSpray )
		pFnBeginSpray = (UFunction*) UObject::GObjObjects()->Data[ 120918 ];

	ASprayActor_Flame_execBeginSpray_Parms BeginSpray_Parms;

	this->ProcessEvent ( pFnBeginSpray, &BeginSpray_Parms, NULL );
};

// Function kfgamecontent.SprayActor_Flame.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASprayActor_Flame::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 120916 ];

	ASprayActor_Flame_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.SprayActor_Flame.SetBoneChainComponents
// [0x00020102] 
// Parameters infos:

void ASprayActor_Flame::SetBoneChainComponents ( )
{
	static UFunction* pFnSetBoneChainComponents = NULL;

	if ( ! pFnSetBoneChainComponents )
		pFnSetBoneChainComponents = (UFunction*) UObject::GObjObjects()->Data[ 120914 ];

	ASprayActor_Flame_execSetBoneChainComponents_Parms SetBoneChainComponents_Parms;

	this->ProcessEvent ( pFnSetBoneChainComponents, &SetBoneChainComponents_Parms, NULL );
};

// Function kfgamecontent.SprayActor_Flame.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASprayActor_Flame::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 120913 ];

	ASprayActor_Flame_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerAlpha_Grab.ProcessViewRotation
// [0x00420002] 
// Parameters infos:

void UKFSM_PlayerAlpha_Grab::ProcessViewRotation ( )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 121197 ];

	UKFSM_PlayerAlpha_Grab_execProcessViewRotation_Parms ProcessViewRotation_Parms;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerAlpha_Grab.Tick
// [0x00820002] 
// Parameters infos:

void UKFSM_PlayerAlpha_Grab::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121194 ];

	UKFSM_PlayerAlpha_Grab_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerAlpha_Grab.StartInteraction
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerAlpha_Grab::StartInteraction ( )
{
	static UFunction* pFnStartInteraction = NULL;

	if ( ! pFnStartInteraction )
		pFnStartInteraction = (UFunction*) UObject::GObjObjects()->Data[ 121193 ];

	UKFSM_PlayerAlpha_Grab_execStartInteraction_Parms StartInteraction_Parms;

	this->ProcessEvent ( pFnStartInteraction, &StartInteraction_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerAlpha_Rally.PackFlagsBase
// [0x00022002] 
// Parameters infos:

void UKFSM_PlayerAlpha_Rally::PackFlagsBase ( )
{
	static UFunction* pFnPackFlagsBase = NULL;

	if ( ! pFnPackFlagsBase )
		pFnPackFlagsBase = (UFunction*) UObject::GObjObjects()->Data[ 121207 ];

	UKFSM_PlayerAlpha_Rally_execPackFlagsBase_Parms PackFlagsBase_Parms;

	this->ProcessEvent ( pFnPackFlagsBase, &PackFlagsBase_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerAlpha_Rally.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerAlpha_Rally::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121205 ];

	UKFSM_PlayerAlpha_Rally_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveButtonReleased
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerZedBlockBase::SpecialMoveButtonReleased ( )
{
	static UFunction* pFnSpecialMoveButtonReleased = NULL;

	if ( ! pFnSpecialMoveButtonReleased )
		pFnSpecialMoveButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 121221 ];

	UKFSM_PlayerZedBlockBase_execSpecialMoveButtonReleased_Parms SpecialMoveButtonReleased_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonReleased, &SpecialMoveButtonReleased_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveButtonRetriggered
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerZedBlockBase::SpecialMoveButtonRetriggered ( )
{
	static UFunction* pFnSpecialMoveButtonRetriggered = NULL;

	if ( ! pFnSpecialMoveButtonRetriggered )
		pFnSpecialMoveButtonRetriggered = (UFunction*) UObject::GObjObjects()->Data[ 121220 ];

	UKFSM_PlayerZedBlockBase_execSpecialMoveButtonRetriggered_Parms SpecialMoveButtonRetriggered_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonRetriggered, &SpecialMoveButtonRetriggered_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.Timer_CheckIfBlockReleased
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerZedBlockBase::Timer_CheckIfBlockReleased ( )
{
	static UFunction* pFnTimer_CheckIfBlockReleased = NULL;

	if ( ! pFnTimer_CheckIfBlockReleased )
		pFnTimer_CheckIfBlockReleased = (UFunction*) UObject::GObjObjects()->Data[ 121219 ];

	UKFSM_PlayerZedBlockBase_execTimer_CheckIfBlockReleased_Parms Timer_CheckIfBlockReleased_Parms;

	this->ProcessEvent ( pFnTimer_CheckIfBlockReleased, &Timer_CheckIfBlockReleased_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerZedBlockBase::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121216 ];

	UKFSM_PlayerZedBlockBase_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerZedBlockBase.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerZedBlockBase::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121213 ];

	UKFSM_PlayerZedBlockBase_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerBloat_PukeMineAttack.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerBloat_PukeMineAttack::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121230 ];

	UKFSM_PlayerBloat_PukeMineAttack_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Melee.IsInSpecialMode
// [0x00022002] 
// Parameters infos:

void UKFSM_PlayerFleshpound_Melee::IsInSpecialMode ( )
{
	static UFunction* pFnIsInSpecialMode = NULL;

	if ( ! pFnIsInSpecialMode )
		pFnIsInSpecialMode = (UFunction*) UObject::GObjObjects()->Data[ 121254 ];

	UKFSM_PlayerFleshpound_Melee_execIsInSpecialMode_Parms IsInSpecialMode_Parms;

	this->ProcessEvent ( pFnIsInSpecialMode, &IsInSpecialMode_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Rage.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerFleshpound_Rage::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121271 ];

	UKFSM_PlayerFleshpound_Rage_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Rage.PackFlagsBase
// [0x00022002] 
// Parameters infos:

void UKFSM_PlayerFleshpound_Rage::PackFlagsBase ( )
{
	static UFunction* pFnPackFlagsBase = NULL;

	if ( ! pFnPackFlagsBase )
		pFnPackFlagsBase = (UFunction*) UObject::GObjObjects()->Data[ 121266 ];

	UKFSM_PlayerFleshpound_Rage_execPackFlagsBase_Parms PackFlagsBase_Parms;

	this->ProcessEvent ( pFnPackFlagsBase, &PackFlagsBase_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerFleshpound_Rage.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerFleshpound_Rage::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121263 ];

	UKFSM_PlayerFleshpound_Rage_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveButtonReleased
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FlameThrowerAttack::SpecialMoveButtonReleased ( )
{
	static UFunction* pFnSpecialMoveButtonReleased = NULL;

	if ( ! pFnSpecialMoveButtonReleased )
		pFnSpecialMoveButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 121322 ];

	UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveButtonReleased_Parms SpecialMoveButtonReleased_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonReleased, &SpecialMoveButtonReleased_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveButtonRetriggered
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FlameThrowerAttack::SpecialMoveButtonRetriggered ( )
{
	static UFunction* pFnSpecialMoveButtonRetriggered = NULL;

	if ( ! pFnSpecialMoveButtonRetriggered )
		pFnSpecialMoveButtonRetriggered = (UFunction*) UObject::GObjObjects()->Data[ 121321 ];

	UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveButtonRetriggered_Parms SpecialMoveButtonRetriggered_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonRetriggered, &SpecialMoveButtonRetriggered_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveFlagsUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FlameThrowerAttack::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 121320 ];

	UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.Timer_AnimInterrupt
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FlameThrowerAttack::Timer_AnimInterrupt ( )
{
	static UFunction* pFnTimer_AnimInterrupt = NULL;

	if ( ! pFnTimer_AnimInterrupt )
		pFnTimer_AnimInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 121319 ];

	UKFSM_PlayerHusk_FlameThrowerAttack_execTimer_AnimInterrupt_Parms Timer_AnimInterrupt_Parms;

	this->ProcessEvent ( pFnTimer_AnimInterrupt, &Timer_AnimInterrupt_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_FlameThrowerAttack.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_FlameThrowerAttack::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121316 ];

	UKFSM_PlayerHusk_FlameThrowerAttack_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_Suicide.SpecialMoveButtonReleased
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_Suicide::SpecialMoveButtonReleased ( )
{
	static UFunction* pFnSpecialMoveButtonReleased = NULL;

	if ( ! pFnSpecialMoveButtonReleased )
		pFnSpecialMoveButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 121332 ];

	UKFSM_PlayerHusk_Suicide_execSpecialMoveButtonReleased_Parms SpecialMoveButtonReleased_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonReleased, &SpecialMoveButtonReleased_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_Suicide.SpecialMoveFlagsUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerHusk_Suicide::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 121331 ];

	UKFSM_PlayerHusk_Suicide_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerHusk_Suicide.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerHusk_Suicide::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121329 ];

	UKFSM_PlayerHusk_Suicide_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.OnEMPDisrupted
// [0x00020000] 
// Parameters infos:

void UKFSM_PlayerPatriarch_Heal::OnEMPDisrupted ( )
{
	static UFunction* pFnOnEMPDisrupted = NULL;

	if ( ! pFnOnEMPDisrupted )
		pFnOnEMPDisrupted = (UFunction*) UObject::GObjObjects()->Data[ 121341 ];

	UKFSM_PlayerPatriarch_Heal_execOnEMPDisrupted_Parms OnEMPDisrupted_Parms;

	this->ProcessEvent ( pFnOnEMPDisrupted, &OnEMPDisrupted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.DoHeal
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_Heal::DoHeal ( )
{
	static UFunction* pFnDoHeal = NULL;

	if ( ! pFnDoHeal )
		pFnDoHeal = (UFunction*) UObject::GObjObjects()->Data[ 121340 ];

	UKFSM_PlayerPatriarch_Heal_execDoHeal_Parms DoHeal_Parms;

	this->ProcessEvent ( pFnDoHeal, &DoHeal_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_Heal::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121337 ];

	UKFSM_PlayerPatriarch_Heal_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_Heal.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_Heal::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121335 ];

	UKFSM_PlayerPatriarch_Heal_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveButtonReleased
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::SpecialMoveButtonReleased ( )
{
	static UFunction* pFnSpecialMoveButtonReleased = NULL;

	if ( ! pFnSpecialMoveButtonReleased )
		pFnSpecialMoveButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 121358 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveButtonReleased_Parms SpecialMoveButtonReleased_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonReleased, &SpecialMoveButtonReleased_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveButtonRetriggered
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::SpecialMoveButtonRetriggered ( )
{
	static UFunction* pFnSpecialMoveButtonRetriggered = NULL;

	if ( ! pFnSpecialMoveButtonRetriggered )
		pFnSpecialMoveButtonRetriggered = (UFunction*) UObject::GObjObjects()->Data[ 121357 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveButtonRetriggered_Parms SpecialMoveButtonRetriggered_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonRetriggered, &SpecialMoveButtonRetriggered_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveFlagsUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 121356 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121353 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.Timer_AnimInterrupt
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::Timer_AnimInterrupt ( )
{
	static UFunction* pFnTimer_AnimInterrupt = NULL;

	if ( ! pFnTimer_AnimInterrupt )
		pFnTimer_AnimInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 121352 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execTimer_AnimInterrupt_Parms Timer_AnimInterrupt_Parms;

	this->ProcessEvent ( pFnTimer_AnimInterrupt, &Timer_AnimInterrupt_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.PlayWindDownAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::PlayWindDownAnim ( )
{
	static UFunction* pFnPlayWindDownAnim = NULL;

	if ( ! pFnPlayWindDownAnim )
		pFnPlayWindDownAnim = (UFunction*) UObject::GObjObjects()->Data[ 121351 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execPlayWindDownAnim_Parms PlayWindDownAnim_Parms;

	this->ProcessEvent ( pFnPlayWindDownAnim, &PlayWindDownAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.PlayFireAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::PlayFireAnim ( )
{
	static UFunction* pFnPlayFireAnim = NULL;

	if ( ! pFnPlayFireAnim )
		pFnPlayFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 121350 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execPlayFireAnim_Parms PlayFireAnim_Parms;

	this->ProcessEvent ( pFnPlayFireAnim, &PlayFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MinigunBarrage.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MinigunBarrage::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121347 ];

	UKFSM_PlayerPatriarch_MinigunBarrage_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_MortarAttack.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_MortarAttack::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121363 ];

	UKFSM_PlayerPatriarch_MortarAttack_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.ProcessViewRotation
// [0x00420002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_TentacleGrab::ProcessViewRotation ( )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 121387 ];

	UKFSM_PlayerPatriarch_TentacleGrab_execProcessViewRotation_Parms ProcessViewRotation_Parms;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.Tick
// [0x00820002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_TentacleGrab::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121384 ];

	UKFSM_PlayerPatriarch_TentacleGrab_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.StartInteraction
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_TentacleGrab::StartInteraction ( )
{
	static UFunction* pFnStartInteraction = NULL;

	if ( ! pFnStartInteraction )
		pFnStartInteraction = (UFunction*) UObject::GObjObjects()->Data[ 121383 ];

	UKFSM_PlayerPatriarch_TentacleGrab_execStartInteraction_Parms StartInteraction_Parms;

	this->ProcessEvent ( pFnStartInteraction, &StartInteraction_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_TentacleGrab::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121379 ];

	UKFSM_PlayerPatriarch_TentacleGrab_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerPatriarch_TentacleGrab.InternalCanDoSpecialMove
// [0x00880002] 
// Parameters infos:

void UKFSM_PlayerPatriarch_TentacleGrab::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121369 ];

	UKFSM_PlayerPatriarch_TentacleGrab_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerScrake_Melee.IsInSpecialMode
// [0x00022002] 
// Parameters infos:

void UKFSM_PlayerScrake_Melee::IsInSpecialMode ( )
{
	static UFunction* pFnIsInSpecialMode = NULL;

	if ( ! pFnIsInSpecialMode )
		pFnIsInSpecialMode = (UFunction*) UObject::GObjObjects()->Data[ 121395 ];

	UKFSM_PlayerScrake_Melee_execIsInSpecialMode_Parms IsInSpecialMode_Parms;

	this->ProcessEvent ( pFnIsInSpecialMode, &IsInSpecialMode_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_SirenProjectileShield.StopsProjectile
// [0x00020102] 
// Parameters infos:

void AKFTrigger_SirenProjectileShield::StopsProjectile ( )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 121850 ];

	AKFTrigger_SirenProjectileShield_execStopsProjectile_Parms StopsProjectile_Parms;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_SirenProjectileShield.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFTrigger_SirenProjectileShield::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121844 ];

	AKFTrigger_SirenProjectileShield_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFTrigger_SirenProjectileShield.BaseChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFTrigger_SirenProjectileShield::eventBaseChange ( )
{
	static UFunction* pFnBaseChange = NULL;

	if ( ! pFnBaseChange )
		pFnBaseChange = (UFunction*) UObject::GObjObjects()->Data[ 121843 ];

	AKFTrigger_SirenProjectileShield_eventBaseChange_Parms BaseChange_Parms;

	this->ProcessEvent ( pFnBaseChange, &BaseChange_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_NormalScream.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_NormalScream::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121451 ];

	UKFSM_PlayerSiren_NormalScream_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_NormalScream.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerSiren_NormalScream::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121449 ];

	UKFSM_PlayerSiren_NormalScream_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveButtonReleased
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::SpecialMoveButtonReleased ( )
{
	static UFunction* pFnSpecialMoveButtonReleased = NULL;

	if ( ! pFnSpecialMoveButtonReleased )
		pFnSpecialMoveButtonReleased = (UFunction*) UObject::GObjObjects()->Data[ 121523 ];

	UKFSM_PlayerSiren_VortexScream_execSpecialMoveButtonReleased_Parms SpecialMoveButtonReleased_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonReleased, &SpecialMoveButtonReleased_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveButtonRetriggered
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::SpecialMoveButtonRetriggered ( )
{
	static UFunction* pFnSpecialMoveButtonRetriggered = NULL;

	if ( ! pFnSpecialMoveButtonRetriggered )
		pFnSpecialMoveButtonRetriggered = (UFunction*) UObject::GObjObjects()->Data[ 121522 ];

	UKFSM_PlayerSiren_VortexScream_execSpecialMoveButtonRetriggered_Parms SpecialMoveButtonRetriggered_Parms;

	this->ProcessEvent ( pFnSpecialMoveButtonRetriggered, &SpecialMoveButtonRetriggered_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Timer_VortexInterrupt
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::Timer_VortexInterrupt ( )
{
	static UFunction* pFnTimer_VortexInterrupt = NULL;

	if ( ! pFnTimer_VortexInterrupt )
		pFnTimer_VortexInterrupt = (UFunction*) UObject::GObjObjects()->Data[ 121521 ];

	UKFSM_PlayerSiren_VortexScream_execTimer_VortexInterrupt_Parms Timer_VortexInterrupt_Parms;

	this->ProcessEvent ( pFnTimer_VortexInterrupt, &Timer_VortexInterrupt_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121518 ];

	UKFSM_PlayerSiren_VortexScream_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.ResetFollowerPhysics
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::ResetFollowerPhysics ( )
{
	static UFunction* pFnResetFollowerPhysics = NULL;

	if ( ! pFnResetFollowerPhysics )
		pFnResetFollowerPhysics = (UFunction*) UObject::GObjObjects()->Data[ 121517 ];

	UKFSM_PlayerSiren_VortexScream_execResetFollowerPhysics_Parms ResetFollowerPhysics_Parms;

	this->ProcessEvent ( pFnResetFollowerPhysics, &ResetFollowerPhysics_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.OnFollowerLeavingSpecialMove
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::OnFollowerLeavingSpecialMove ( )
{
	static UFunction* pFnOnFollowerLeavingSpecialMove = NULL;

	if ( ! pFnOnFollowerLeavingSpecialMove )
		pFnOnFollowerLeavingSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121516 ];

	UKFSM_PlayerSiren_VortexScream_execOnFollowerLeavingSpecialMove_Parms OnFollowerLeavingSpecialMove_Parms;

	this->ProcessEvent ( pFnOnFollowerLeavingSpecialMove, &OnFollowerLeavingSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.AnimEndNotify
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::AnimEndNotify ( )
{
	static UFunction* pFnAnimEndNotify = NULL;

	if ( ! pFnAnimEndNotify )
		pFnAnimEndNotify = (UFunction*) UObject::GObjObjects()->Data[ 121512 ];

	UKFSM_PlayerSiren_VortexScream_execAnimEndNotify_Parms AnimEndNotify_Parms;

	this->ProcessEvent ( pFnAnimEndNotify, &AnimEndNotify_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveFlagsUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 121511 ];

	UKFSM_PlayerSiren_VortexScream_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Timer_DamageFollower
// [0x00820002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::Timer_DamageFollower ( )
{
	static UFunction* pFnTimer_DamageFollower = NULL;

	if ( ! pFnTimer_DamageFollower )
		pFnTimer_DamageFollower = (UFunction*) UObject::GObjObjects()->Data[ 121508 ];

	UKFSM_PlayerSiren_VortexScream_execTimer_DamageFollower_Parms Timer_DamageFollower_Parms;

	this->ProcessEvent ( pFnTimer_DamageFollower, &Timer_DamageFollower_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.StartInteraction
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::StartInteraction ( )
{
	static UFunction* pFnStartInteraction = NULL;

	if ( ! pFnStartInteraction )
		pFnStartInteraction = (UFunction*) UObject::GObjObjects()->Data[ 121507 ];

	UKFSM_PlayerSiren_VortexScream_execStartInteraction_Parms StartInteraction_Parms;

	this->ProcessEvent ( pFnStartInteraction, &StartInteraction_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.InteractionPawnUpdated
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::InteractionPawnUpdated ( )
{
	static UFunction* pFnInteractionPawnUpdated = NULL;

	if ( ! pFnInteractionPawnUpdated )
		pFnInteractionPawnUpdated = (UFunction*) UObject::GObjObjects()->Data[ 121506 ];

	UKFSM_PlayerSiren_VortexScream_execInteractionPawnUpdated_Parms InteractionPawnUpdated_Parms;

	this->ProcessEvent ( pFnInteractionPawnUpdated, &InteractionPawnUpdated_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Timer_CheckVortex
// [0x00820002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::Timer_CheckVortex ( )
{
	static UFunction* pFnTimer_CheckVortex = NULL;

	if ( ! pFnTimer_CheckVortex )
		pFnTimer_CheckVortex = (UFunction*) UObject::GObjObjects()->Data[ 121496 ];

	UKFSM_PlayerSiren_VortexScream_execTimer_CheckVortex_Parms Timer_CheckVortex_Parms;

	this->ProcessEvent ( pFnTimer_CheckVortex, &Timer_CheckVortex_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.ProcessViewRotation
// [0x00420002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::ProcessViewRotation ( )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 121492 ];

	UKFSM_PlayerSiren_VortexScream_execProcessViewRotation_Parms ProcessViewRotation_Parms;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.GetUncompressedViewPitch
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::GetUncompressedViewPitch ( )
{
	static UFunction* pFnGetUncompressedViewPitch = NULL;

	if ( ! pFnGetUncompressedViewPitch )
		pFnGetUncompressedViewPitch = (UFunction*) UObject::GObjObjects()->Data[ 121490 ];

	UKFSM_PlayerSiren_VortexScream_execGetUncompressedViewPitch_Parms GetUncompressedViewPitch_Parms;

	this->ProcessEvent ( pFnGetUncompressedViewPitch, &GetUncompressedViewPitch_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.Tick
// [0x00820002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121484 ];

	UKFSM_PlayerSiren_VortexScream_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.PlayGrabAnim
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::PlayGrabAnim ( )
{
	static UFunction* pFnPlayGrabAnim = NULL;

	if ( ! pFnPlayGrabAnim )
		pFnPlayGrabAnim = (UFunction*) UObject::GObjObjects()->Data[ 121483 ];

	UKFSM_PlayerSiren_VortexScream_execPlayGrabAnim_Parms PlayGrabAnim_Parms;

	this->ProcessEvent ( pFnPlayGrabAnim, &PlayGrabAnim_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121479 ];

	UKFSM_PlayerSiren_VortexScream_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexScream.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexScream::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121477 ];

	UKFSM_PlayerSiren_VortexScream_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexVictim.SetGrabEffect
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexVictim::SetGrabEffect ( )
{
	static UFunction* pFnSetGrabEffect = NULL;

	if ( ! pFnSetGrabEffect )
		pFnSetGrabEffect = (UFunction*) UObject::GObjObjects()->Data[ 121540 ];

	UKFSM_PlayerSiren_VortexVictim_execSetGrabEffect_Parms SetGrabEffect_Parms;

	this->ProcessEvent ( pFnSetGrabEffect, &SetGrabEffect_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexVictim.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexVictim::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121537 ];

	UKFSM_PlayerSiren_VortexVictim_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSiren_VortexVictim.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSiren_VortexVictim::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121533 ];

	UKFSM_PlayerSiren_VortexVictim_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.Tick
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSlasher_Roll::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121558 ];

	UKFSM_PlayerSlasher_Roll_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.PackFlagsBase
// [0x00022002] 
// Parameters infos:

void UKFSM_PlayerSlasher_Roll::PackFlagsBase ( )
{
	static UFunction* pFnPackFlagsBase = NULL;

	if ( ! pFnPackFlagsBase )
		pFnPackFlagsBase = (UFunction*) UObject::GObjObjects()->Data[ 121555 ];

	UKFSM_PlayerSlasher_Roll_execPackFlagsBase_Parms PackFlagsBase_Parms;

	this->ProcessEvent ( pFnPackFlagsBase, &PackFlagsBase_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UKFSM_PlayerSlasher_Roll::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 121553 ];

	UKFSM_PlayerSlasher_Roll_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerSlasher_Roll.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerSlasher_Roll::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121550 ];

	UKFSM_PlayerSlasher_Roll_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerStalker_Roll.SpecialMoveEnded
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerStalker_Roll::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 121572 ];

	UKFSM_PlayerStalker_Roll_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerStalker_Roll.SpecialMoveStarted
// [0x00020002] 
// Parameters infos:

void UKFSM_PlayerStalker_Roll::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 121569 ];

	UKFSM_PlayerStalker_Roll_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function kfgamecontent.KFSM_PlayerStalker_Roll.PackFlagsBase
// [0x00022002] 
// Parameters infos:

void UKFSM_PlayerStalker_Roll::PackFlagsBase ( )
{
	static UFunction* pFnPackFlagsBase = NULL;

	if ( ! pFnPackFlagsBase )
		pFnPackFlagsBase = (UFunction*) UObject::GObjObjects()->Data[ 121566 ];

	UKFSM_PlayerStalker_Roll_execPackFlagsBase_Parms PackFlagsBase_Parms;

	this->ProcessEvent ( pFnPackFlagsBase, &PackFlagsBase_Parms, NULL );
};

// Function kfgamecontent.KFStaticMeshActor_TrackLocalPC.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFStaticMeshActor_TrackLocalPC::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 121577 ];

	AKFStaticMeshActor_TrackLocalPC_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFVolume_CameraFade.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFVolume_CameraFade::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121860 ];

	AKFVolume_CameraFade_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFVolume_DamageAdjust.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFVolume_DamageAdjust::eventUnTouch ( )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121877 ];

	AKFVolume_DamageAdjust_eventUnTouch_Parms UnTouch_Parms;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function kfgamecontent.KFVolume_DamageAdjust.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFVolume_DamageAdjust::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121871 ];

	AKFVolume_DamageAdjust_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFVolume_DisableZedJump.UnTouch
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFVolume_DisableZedJump::eventUnTouch ( )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121888 ];

	AKFVolume_DisableZedJump_eventUnTouch_Parms UnTouch_Parms;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function kfgamecontent.KFVolume_DisableZedJump.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFVolume_DisableZedJump::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 121883 ];

	AKFVolume_DisableZedJump_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_MultiAmmo.PlayReloadMagazineAnim
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_MultiAmmo::PlayReloadMagazineAnim ( )
{
	static UFunction* pFnPlayReloadMagazineAnim = NULL;

	if ( ! pFnPlayReloadMagazineAnim )
		pFnPlayReloadMagazineAnim = (UFunction*) UObject::GObjObjects()->Data[ 122007 ];

	AKFWeapAttach_MultiAmmo_execPlayReloadMagazineAnim_Parms PlayReloadMagazineAnim_Parms;

	this->ProcessEvent ( pFnPlayReloadMagazineAnim, &PlayReloadMagazineAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_MultiAmmo.CauseMuzzleFlash
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_MultiAmmo::CauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 122004 ];

	AKFWeapAttach_MultiAmmo_execCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.TryToAltReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::TryToAltReload ( )
{
	static UFunction* pFnTryToAltReload = NULL;

	if ( ! pFnTryToAltReload )
		pFnTryToAltReload = (UFunction*) UObject::GObjObjects()->Data[ 122099 ];

	AKFWeap_AssaultRifle_M16M203_execTryToAltReload_Parms TryToAltReload_Parms;

	this->ProcessEvent ( pFnTryToAltReload, &TryToAltReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.CanAltAutoReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::CanAltAutoReload ( )
{
	static UFunction* pFnCanAltAutoReload = NULL;

	if ( ! pFnCanAltAutoReload )
		pFnCanAltAutoReload = (UFunction*) UObject::GObjObjects()->Data[ 122097 ];

	AKFWeap_AssaultRifle_M16M203_execCanAltAutoReload_Parms CanAltAutoReload_Parms;

	this->ProcessEvent ( pFnCanAltAutoReload, &CanAltAutoReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.CanOverrideMagReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::CanOverrideMagReload ( )
{
	static UFunction* pFnCanOverrideMagReload = NULL;

	if ( ! pFnCanOverrideMagReload )
		pFnCanOverrideMagReload = (UFunction*) UObject::GObjObjects()->Data[ 122091 ];

	AKFWeap_AssaultRifle_M16M203_execCanOverrideMagReload_Parms CanOverrideMagReload_Parms;

	this->ProcessEvent ( pFnCanOverrideMagReload, &CanOverrideMagReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ServerSetAltAmmoCount
// [0x002200C2] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::ServerSetAltAmmoCount ( )
{
	static UFunction* pFnServerSetAltAmmoCount = NULL;

	if ( ! pFnServerSetAltAmmoCount )
		pFnServerSetAltAmmoCount = (UFunction*) UObject::GObjObjects()->Data[ 122089 ];

	AKFWeap_AssaultRifle_M16M203_execServerSetAltAmmoCount_Parms ServerSetAltAmmoCount_Parms;

	this->ProcessEvent ( pFnServerSetAltAmmoCount, &ServerSetAltAmmoCount_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ServerSendToAltReload
// [0x002200C2] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::ServerSendToAltReload ( )
{
	static UFunction* pFnServerSendToAltReload = NULL;

	if ( ! pFnServerSendToAltReload )
		pFnServerSendToAltReload = (UFunction*) UObject::GObjObjects()->Data[ 122061 ];

	AKFWeap_AssaultRifle_M16M203_execServerSendToAltReload_Parms ServerSendToAltReload_Parms;

	this->ProcessEvent ( pFnServerSendToAltReload, &ServerSendToAltReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.SendToAltReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::SendToAltReload ( )
{
	static UFunction* pFnSendToAltReload = NULL;

	if ( ! pFnSendToAltReload )
		pFnSendToAltReload = (UFunction*) UObject::GObjObjects()->Data[ 122060 ];

	AKFWeap_AssaultRifle_M16M203_execSendToAltReload_Parms SendToAltReload_Parms;

	this->ProcessEvent ( pFnSendToAltReload, &SendToAltReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ShouldAutoReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::ShouldAutoReload ( )
{
	static UFunction* pFnShouldAutoReload = NULL;

	if ( ! pFnShouldAutoReload )
		pFnShouldAutoReload = (UFunction*) UObject::GObjObjects()->Data[ 122057 ];

	AKFWeap_AssaultRifle_M16M203_execShouldAutoReload_Parms ShouldAutoReload_Parms;

	this->ProcessEvent ( pFnShouldAutoReload, &ShouldAutoReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.CauseMuzzleFlash
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::CauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 122054 ];

	AKFWeap_AssaultRifle_M16M203_execCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.SetOriginalValuesFromPickup
// [0x00020002] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::SetOriginalValuesFromPickup ( )
{
	static UFunction* pFnSetOriginalValuesFromPickup = NULL;

	if ( ! pFnSetOriginalValuesFromPickup )
		pFnSetOriginalValuesFromPickup = (UFunction*) UObject::GObjObjects()->Data[ 122040 ];

	AKFWeap_AssaultRifle_M16M203_execSetOriginalValuesFromPickup_Parms SetOriginalValuesFromPickup_Parms;

	this->ProcessEvent ( pFnSetOriginalValuesFromPickup, &SetOriginalValuesFromPickup_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ClientGiveSecondaryAmmo
// [0x010201C2] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::ClientGiveSecondaryAmmo ( )
{
	static UFunction* pFnClientGiveSecondaryAmmo = NULL;

	if ( ! pFnClientGiveSecondaryAmmo )
		pFnClientGiveSecondaryAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122038 ];

	AKFWeap_AssaultRifle_M16M203_execClientGiveSecondaryAmmo_Parms ClientGiveSecondaryAmmo_Parms;

	this->ProcessEvent ( pFnClientGiveSecondaryAmmo, &ClientGiveSecondaryAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.AddSecondaryAmmo
// [0x00020002] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::AddSecondaryAmmo ( )
{
	static UFunction* pFnAddSecondaryAmmo = NULL;

	if ( ! pFnAddSecondaryAmmo )
		pFnAddSecondaryAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122034 ];

	AKFWeap_AssaultRifle_M16M203_execAddSecondaryAmmo_Parms AddSecondaryAmmo_Parms;

	this->ProcessEvent ( pFnAddSecondaryAmmo, &AddSecondaryAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.HasAmmo
// [0x00024902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::eventHasAmmo ( )
{
	static UFunction* pFnHasAmmo = NULL;

	if ( ! pFnHasAmmo )
		pFnHasAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122029 ];

	AKFWeap_AssaultRifle_M16M203_eventHasAmmo_Parms HasAmmo_Parms;

	this->ProcessEvent ( pFnHasAmmo, &HasAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.ConsumeAmmo
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::ConsumeAmmo ( )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122024 ];

	AKFWeap_AssaultRifle_M16M203_execConsumeAmmo_Parms ConsumeAmmo_Parms;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.InitializeAmmo
// [0x00020002] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::InitializeAmmo ( )
{
	static UFunction* pFnInitializeAmmo = NULL;

	if ( ! pFnInitializeAmmo )
		pFnInitializeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122023 ];

	AKFWeap_AssaultRifle_M16M203_execInitializeAmmo_Parms InitializeAmmo_Parms;

	this->ProcessEvent ( pFnInitializeAmmo, &InitializeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.AltFireMode
// [0x00020102] 
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::AltFireMode ( )
{
	static UFunction* pFnAltFireMode = NULL;

	if ( ! pFnAltFireMode )
		pFnAltFireMode = (UFunction*) UObject::GObjObjects()->Data[ 122022 ];

	AKFWeap_AssaultRifle_M16M203_execAltFireMode_Parms AltFireMode_Parms;

	this->ProcessEvent ( pFnAltFireMode, &AltFireMode_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_M16M203.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_AssaultRifle_M16M203::eventGetAltTraderFilter ( )
{
	static UFunction* pFnGetAltTraderFilter = NULL;

	if ( ! pFnGetAltTraderFilter )
		pFnGetAltTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 122020 ];

	AKFWeap_AssaultRifle_M16M203_eventGetAltTraderFilter_Parms GetAltTraderFilter_Parms;

	this->ProcessEvent ( pFnGetAltTraderFilter, &GetAltTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_AssaultRifle_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_AssaultRifle_Medic::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 122264 ];

	AKFWeap_AssaultRifle_Medic_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Beam_Microwave.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Beam_Microwave::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 122334 ];

	AKFWeap_Beam_Microwave_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Beam_Microwave.ShouldAutoReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_Beam_Microwave::ShouldAutoReload ( )
{
	static UFunction* pFnShouldAutoReload = NULL;

	if ( ! pFnShouldAutoReload )
		pFnShouldAutoReload = (UFunction*) UObject::GObjObjects()->Data[ 122330 ];

	AKFWeap_Beam_Microwave_execShouldAutoReload_Parms ShouldAutoReload_Parms;

	this->ProcessEvent ( pFnShouldAutoReload, &ShouldAutoReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Beam_Microwave.CustomFire
// [0x00820102] 
// Parameters infos:

void AKFWeap_Beam_Microwave::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 122326 ];

	AKFWeap_Beam_Microwave_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Beam_Microwave.AltFireMode
// [0x00020102] 
// Parameters infos:

void AKFWeap_Beam_Microwave::AltFireMode ( )
{
	static UFunction* pFnAltFireMode = NULL;

	if ( ! pFnAltFireMode )
		pFnAltFireMode = (UFunction*) UObject::GObjObjects()->Data[ 122325 ];

	AKFWeap_Beam_Microwave_execAltFireMode_Parms AltFireMode_Parms;

	this->ProcessEvent ( pFnAltFireMode, &AltFireMode_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Beam_Microwave.GetLoopEndFireAnim
// [0x00020102] 
// Parameters infos:

void AKFWeap_Beam_Microwave::GetLoopEndFireAnim ( )
{
	static UFunction* pFnGetLoopEndFireAnim = NULL;

	if ( ! pFnGetLoopEndFireAnim )
		pFnGetLoopEndFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 122321 ];

	AKFWeap_Beam_Microwave_execGetLoopEndFireAnim_Parms GetLoopEndFireAnim_Parms;

	this->ProcessEvent ( pFnGetLoopEndFireAnim, &GetLoopEndFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Beam_Microwave.GetWeaponFireAnim
// [0x00020102] 
// Parameters infos:

void AKFWeap_Beam_Microwave::GetWeaponFireAnim ( )
{
	static UFunction* pFnGetWeaponFireAnim = NULL;

	if ( ! pFnGetWeaponFireAnim )
		pFnGetWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 122317 ];

	AKFWeap_Beam_Microwave_execGetWeaponFireAnim_Parms GetWeaponFireAnim_Parms;

	this->ProcessEvent ( pFnGetWeaponFireAnim, &GetWeaponFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_MaceAndShield.PlayWeaponMeshAnim
// [0x00020100] 
// Parameters infos:

void AKFWeapAttach_MaceAndShield::PlayWeaponMeshAnim ( )
{
	static UFunction* pFnPlayWeaponMeshAnim = NULL;

	if ( ! pFnPlayWeaponMeshAnim )
		pFnPlayWeaponMeshAnim = (UFunction*) UObject::GObjObjects()->Data[ 122374 ];

	AKFWeapAttach_MaceAndShield_execPlayWeaponMeshAnim_Parms PlayWeaponMeshAnim_Parms;

	this->ProcessEvent ( pFnPlayWeaponMeshAnim, &PlayWeaponMeshAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_MaceAndShield.PlayWeaponFireAnim
// [0x00020100] 
// Parameters infos:

void AKFWeapAttach_MaceAndShield::PlayWeaponFireAnim ( )
{
	static UFunction* pFnPlayWeaponFireAnim = NULL;

	if ( ! pFnPlayWeaponFireAnim )
		pFnPlayWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 122373 ];

	AKFWeapAttach_MaceAndShield_execPlayWeaponFireAnim_Parms PlayWeaponFireAnim_Parms;

	this->ProcessEvent ( pFnPlayWeaponFireAnim, &PlayWeaponFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_MaceAndShield.SwapToShieldMeleeSettings
// [0x00020102] 
// Parameters infos:

void AKFWeap_Blunt_MaceAndShield::SwapToShieldMeleeSettings ( )
{
	static UFunction* pFnSwapToShieldMeleeSettings = NULL;

	if ( ! pFnSwapToShieldMeleeSettings )
		pFnSwapToShieldMeleeSettings = (UFunction*) UObject::GObjObjects()->Data[ 122393 ];

	AKFWeap_Blunt_MaceAndShield_execSwapToShieldMeleeSettings_Parms SwapToShieldMeleeSettings_Parms;

	this->ProcessEvent ( pFnSwapToShieldMeleeSettings, &SwapToShieldMeleeSettings_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_MaceAndShield.SwapToMaceMeleeSettings
// [0x00020102] 
// Parameters infos:

void AKFWeap_Blunt_MaceAndShield::SwapToMaceMeleeSettings ( )
{
	static UFunction* pFnSwapToMaceMeleeSettings = NULL;

	if ( ! pFnSwapToMaceMeleeSettings )
		pFnSwapToMaceMeleeSettings = (UFunction*) UObject::GObjObjects()->Data[ 122392 ];

	AKFWeap_Blunt_MaceAndShield_execSwapToMaceMeleeSettings_Parms SwapToMaceMeleeSettings_Parms;

	this->ProcessEvent ( pFnSwapToMaceMeleeSettings, &SwapToMaceMeleeSettings_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Pulverizer.UpdateThirdPersonWeaponAction
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Pulverizer::UpdateThirdPersonWeaponAction ( )
{
	static UFunction* pFnUpdateThirdPersonWeaponAction = NULL;

	if ( ! pFnUpdateThirdPersonWeaponAction )
		pFnUpdateThirdPersonWeaponAction = (UFunction*) UObject::GObjObjects()->Data[ 122436 ];

	AKFWeapAttach_Pulverizer_execUpdateThirdPersonWeaponAction_Parms UpdateThirdPersonWeaponAction_Parms;

	this->ProcessEvent ( pFnUpdateThirdPersonWeaponAction, &UpdateThirdPersonWeaponAction_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Pulverizer.PlayPulverizerShoot
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Pulverizer::PlayPulverizerShoot ( )
{
	static UFunction* pFnPlayPulverizerShoot = NULL;

	if ( ! pFnPlayPulverizerShoot )
		pFnPlayPulverizerShoot = (UFunction*) UObject::GObjObjects()->Data[ 122434 ];

	AKFWeapAttach_Pulverizer_execPlayPulverizerShoot_Parms PlayPulverizerShoot_Parms;

	this->ProcessEvent ( pFnPlayPulverizerShoot, &PlayPulverizerShoot_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Pulverizer.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Pulverizer::ThirdPersonFireEffects ( )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 122429 ];

	AKFWeapAttach_Pulverizer_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.CanReload
// [0x00024102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::CanReload ( )
{
	static UFunction* pFnCanReload = NULL;

	if ( ! pFnCanReload )
		pFnCanReload = (UFunction*) UObject::GObjObjects()->Data[ 122475 ];

	AKFWeap_Blunt_Pulverizer_execCanReload_Parms CanReload_Parms;

	this->ProcessEvent ( pFnCanReload, &CanReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.SendToFiringState
// [0x00020102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::SendToFiringState ( )
{
	static UFunction* pFnSendToFiringState = NULL;

	if ( ! pFnSendToFiringState )
		pFnSendToFiringState = (UFunction*) UObject::GObjObjects()->Data[ 122473 ];

	AKFWeap_Blunt_Pulverizer_execSendToFiringState_Parms SendToFiringState_Parms;

	this->ProcessEvent ( pFnSendToFiringState, &SendToFiringState_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.ShouldRefire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::ShouldRefire ( )
{
	static UFunction* pFnShouldRefire = NULL;

	if ( ! pFnShouldRefire )
		pFnShouldRefire = (UFunction*) UObject::GObjObjects()->Data[ 122471 ];

	AKFWeap_Blunt_Pulverizer_execShouldRefire_Parms ShouldRefire_Parms;

	this->ProcessEvent ( pFnShouldRefire, &ShouldRefire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.BeginPulverizerFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::BeginPulverizerFire ( )
{
	static UFunction* pFnBeginPulverizerFire = NULL;

	if ( ! pFnBeginPulverizerFire )
		pFnBeginPulverizerFire = (UFunction*) UObject::GObjObjects()->Data[ 122470 ];

	AKFWeap_Blunt_Pulverizer_execBeginPulverizerFire_Parms BeginPulverizerFire_Parms;

	this->ProcessEvent ( pFnBeginPulverizerFire, &BeginPulverizerFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.ServerBeginPulverizerFire
// [0x002440C3] ( FUNC_Final )
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::ServerBeginPulverizerFire ( )
{
	static UFunction* pFnServerBeginPulverizerFire = NULL;

	if ( ! pFnServerBeginPulverizerFire )
		pFnServerBeginPulverizerFire = (UFunction*) UObject::GObjObjects()->Data[ 122467 ];

	AKFWeap_Blunt_Pulverizer_execServerBeginPulverizerFire_Parms ServerBeginPulverizerFire_Parms;

	this->ProcessEvent ( pFnServerBeginPulverizerFire, &ServerBeginPulverizerFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.GetWeaponFireAnim
// [0x00020102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::GetWeaponFireAnim ( )
{
	static UFunction* pFnGetWeaponFireAnim = NULL;

	if ( ! pFnGetWeaponFireAnim )
		pFnGetWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 122464 ];

	AKFWeap_Blunt_Pulverizer_execGetWeaponFireAnim_Parms GetWeaponFireAnim_Parms;

	this->ProcessEvent ( pFnGetWeaponFireAnim, &GetWeaponFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.GetPulverizerAim
// [0x00820102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::GetPulverizerAim ( )
{
	static UFunction* pFnGetPulverizerAim = NULL;

	if ( ! pFnGetPulverizerAim )
		pFnGetPulverizerAim = (UFunction*) UObject::GObjObjects()->Data[ 122460 ];

	AKFWeap_Blunt_Pulverizer_execGetPulverizerAim_Parms GetPulverizerAim_Parms;

	this->ProcessEvent ( pFnGetPulverizerAim, &GetPulverizerAim_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.CustomFire
// [0x00820102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 122456 ];

	AKFWeap_Blunt_Pulverizer_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.CanOverrideMagReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::CanOverrideMagReload ( )
{
	static UFunction* pFnCanOverrideMagReload = NULL;

	if ( ! pFnCanOverrideMagReload )
		pFnCanOverrideMagReload = (UFunction*) UObject::GObjObjects()->Data[ 122453 ];

	AKFWeap_Blunt_Pulverizer_execCanOverrideMagReload_Parms CanOverrideMagReload_Parms;

	this->ProcessEvent ( pFnCanOverrideMagReload, &CanOverrideMagReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Blunt_Pulverizer.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Blunt_Pulverizer::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 122452 ];

	AKFWeap_Blunt_Pulverizer_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Bow_Crossbow.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Bow_Crossbow::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 122509 ];

	AKFWeap_Bow_Crossbow_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Bow_Crossbow.GetReloadAnimName
// [0x00020102] 
// Parameters infos:

void AKFWeap_Bow_Crossbow::GetReloadAnimName ( )
{
	static UFunction* pFnGetReloadAnimName = NULL;

	if ( ! pFnGetReloadAnimName )
		pFnGetReloadAnimName = (UFunction*) UObject::GObjObjects()->Data[ 122506 ];

	AKFWeap_Bow_Crossbow_execGetReloadAnimName_Parms GetReloadAnimName_Parms;

	this->ProcessEvent ( pFnGetReloadAnimName, &GetReloadAnimName_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Bow_Crossbow.ShouldPlayFireLast
// [0x00020102] 
// Parameters infos:

void AKFWeap_Bow_Crossbow::ShouldPlayFireLast ( )
{
	static UFunction* pFnShouldPlayFireLast = NULL;

	if ( ! pFnShouldPlayFireLast )
		pFnShouldPlayFireLast = (UFunction*) UObject::GObjObjects()->Data[ 122503 ];

	AKFWeap_Bow_Crossbow_execShouldPlayFireLast_Parms ShouldPlayFireLast_Parms;

	this->ProcessEvent ( pFnShouldPlayFireLast, &ShouldPlayFireLast_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Edged_Knife.AllowedForAllPerks
// [0x00022102] 
// Parameters infos:

void AKFWeap_Edged_Knife::AllowedForAllPerks ( )
{
	static UFunction* pFnAllowedForAllPerks = NULL;

	if ( ! pFnAllowedForAllPerks )
		pFnAllowedForAllPerks = (UFunction*) UObject::GObjObjects()->Data[ 122540 ];

	AKFWeap_Edged_Knife_execAllowedForAllPerks_Parms AllowedForAllPerks_Parms;

	this->ProcessEvent ( pFnAllowedForAllPerks, &AllowedForAllPerks_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Eviscerator.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Eviscerator::ThirdPersonFireEffects ( )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 122565 ];

	AKFWeapAttach_Eviscerator_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Eviscerator.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AKFWeapAttach_Eviscerator::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 122564 ];

	AKFWeapAttach_Eviscerator_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.BlockInterruptTimer
// [0x00020100] 
// Parameters infos:

void AKFWeap_Eviscerator::BlockInterruptTimer ( )
{
	static UFunction* pFnBlockInterruptTimer = NULL;

	if ( ! pFnBlockInterruptTimer )
		pFnBlockInterruptTimer = (UFunction*) UObject::GObjObjects()->Data[ 122628 ];

	AKFWeap_Eviscerator_execBlockInterruptTimer_Parms BlockInterruptTimer_Parms;

	this->ProcessEvent ( pFnBlockInterruptTimer, &BlockInterruptTimer_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Eviscerator::eventGetAltTraderFilter ( )
{
	static UFunction* pFnGetAltTraderFilter = NULL;

	if ( ! pFnGetAltTraderFilter )
		pFnGetAltTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 122626 ];

	AKFWeap_Eviscerator_eventGetAltTraderFilter_Parms GetAltTraderFilter_Parms;

	this->ProcessEvent ( pFnGetAltTraderFilter, &GetAltTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Eviscerator::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 122624 ];

	AKFWeap_Eviscerator_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.CalculateTraderWeaponStatDamage
// [0x00022102] 
// Parameters infos:

void AKFWeap_Eviscerator::CalculateTraderWeaponStatDamage ( )
{
	static UFunction* pFnCalculateTraderWeaponStatDamage = NULL;

	if ( ! pFnCalculateTraderWeaponStatDamage )
		pFnCalculateTraderWeaponStatDamage = (UFunction*) UObject::GObjObjects()->Data[ 122620 ];

	AKFWeap_Eviscerator_execCalculateTraderWeaponStatDamage_Parms CalculateTraderWeaponStatDamage_Parms;

	this->ProcessEvent ( pFnCalculateTraderWeaponStatDamage, &CalculateTraderWeaponStatDamage_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.CanOverrideMagReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_Eviscerator::CanOverrideMagReload ( )
{
	static UFunction* pFnCanOverrideMagReload = NULL;

	if ( ! pFnCanOverrideMagReload )
		pFnCanOverrideMagReload = (UFunction*) UObject::GObjObjects()->Data[ 122612 ];

	AKFWeap_Eviscerator_execCanOverrideMagReload_Parms CanOverrideMagReload_Parms;

	this->ProcessEvent ( pFnCanOverrideMagReload, &CanOverrideMagReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.StopIdleMotorSound
// [0x00020102] 
// Parameters infos:

void AKFWeap_Eviscerator::StopIdleMotorSound ( )
{
	static UFunction* pFnStopIdleMotorSound = NULL;

	if ( ! pFnStopIdleMotorSound )
		pFnStopIdleMotorSound = (UFunction*) UObject::GObjObjects()->Data[ 122600 ];

	AKFWeap_Eviscerator_execStopIdleMotorSound_Parms StopIdleMotorSound_Parms;

	this->ProcessEvent ( pFnStopIdleMotorSound, &StopIdleMotorSound_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.PlayIdleMotorSound
// [0x00020102] 
// Parameters infos:

void AKFWeap_Eviscerator::PlayIdleMotorSound ( )
{
	static UFunction* pFnPlayIdleMotorSound = NULL;

	if ( ! pFnPlayIdleMotorSound )
		pFnPlayIdleMotorSound = (UFunction*) UObject::GObjObjects()->Data[ 122598 ];

	AKFWeap_Eviscerator_execPlayIdleMotorSound_Parms PlayIdleMotorSound_Parms;

	this->ProcessEvent ( pFnPlayIdleMotorSound, &PlayIdleMotorSound_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.UpdateOutOfAmmoEffects
// [0x00020102] 
// Parameters infos:

void AKFWeap_Eviscerator::UpdateOutOfAmmoEffects ( )
{
	static UFunction* pFnUpdateOutOfAmmoEffects = NULL;

	if ( ! pFnUpdateOutOfAmmoEffects )
		pFnUpdateOutOfAmmoEffects = (UFunction*) UObject::GObjObjects()->Data[ 122596 ];

	AKFWeap_Eviscerator_execUpdateOutOfAmmoEffects_Parms UpdateOutOfAmmoEffects_Parms;

	this->ProcessEvent ( pFnUpdateOutOfAmmoEffects, &UpdateOutOfAmmoEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.UnHideBlade
// [0x00020100] 
// Parameters infos:

void AKFWeap_Eviscerator::UnHideBlade ( )
{
	static UFunction* pFnUnHideBlade = NULL;

	if ( ! pFnUnHideBlade )
		pFnUnHideBlade = (UFunction*) UObject::GObjObjects()->Data[ 122595 ];

	AKFWeap_Eviscerator_execUnHideBlade_Parms UnHideBlade_Parms;

	this->ProcessEvent ( pFnUnHideBlade, &UnHideBlade_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.HideBlade
// [0x00020100] 
// Parameters infos:

void AKFWeap_Eviscerator::HideBlade ( )
{
	static UFunction* pFnHideBlade = NULL;

	if ( ! pFnHideBlade )
		pFnHideBlade = (UFunction*) UObject::GObjObjects()->Data[ 122594 ];

	AKFWeap_Eviscerator_execHideBlade_Parms HideBlade_Parms;

	this->ProcessEvent ( pFnHideBlade, &HideBlade_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.RecieveClientImpact
// [0x00424802] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Eviscerator::eventRecieveClientImpact ( )
{
	static UFunction* pFnRecieveClientImpact = NULL;

	if ( ! pFnRecieveClientImpact )
		pFnRecieveClientImpact = (UFunction*) UObject::GObjObjects()->Data[ 122589 ];

	AKFWeap_Eviscerator_eventRecieveClientImpact_Parms RecieveClientImpact_Parms;

	this->ProcessEvent ( pFnRecieveClientImpact, &RecieveClientImpact_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.GetAmmoType
// [0x00020102] 
// Parameters infos:

void AKFWeap_Eviscerator::GetAmmoType ( )
{
	static UFunction* pFnGetAmmoType = NULL;

	if ( ! pFnGetAmmoType )
		pFnGetAmmoType = (UFunction*) UObject::GObjObjects()->Data[ 122586 ];

	AKFWeap_Eviscerator_execGetAmmoType_Parms GetAmmoType_Parms;

	this->ProcessEvent ( pFnGetAmmoType, &GetAmmoType_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.StartFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Eviscerator::StartFire ( )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 122584 ];

	AKFWeap_Eviscerator_execStartFire_Parms StartFire_Parms;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Eviscerator::eventPostInitAnimTree ( )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 122582 ];

	AKFWeap_Eviscerator_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Eviscerator.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Eviscerator::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 122581 ];

	AKFWeap_Eviscerator_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOffFireSpray
// [0x00080102] 
// Parameters infos:

void AKFWeapAttach_Flamethrower::TurnOffFireSpray ( )
{
	static UFunction* pFnTurnOffFireSpray = NULL;

	if ( ! pFnTurnOffFireSpray )
		pFnTurnOffFireSpray = (UFunction*) UObject::GObjObjects()->Data[ 122664 ];

	AKFWeapAttach_Flamethrower_execTurnOffFireSpray_Parms TurnOffFireSpray_Parms;

	this->ProcessEvent ( pFnTurnOffFireSpray, &TurnOffFireSpray_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOnFireSpray
// [0x00080102] 
// Parameters infos:

void AKFWeapAttach_Flamethrower::TurnOnFireSpray ( )
{
	static UFunction* pFnTurnOnFireSpray = NULL;

	if ( ! pFnTurnOnFireSpray )
		pFnTurnOnFireSpray = (UFunction*) UObject::GObjObjects()->Data[ 122662 ];

	AKFWeapAttach_Flamethrower_execTurnOnFireSpray_Parms TurnOnFireSpray_Parms;

	this->ProcessEvent ( pFnTurnOnFireSpray, &TurnOnFireSpray_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOffPilot
// [0x00080102] 
// Parameters infos:

void AKFWeapAttach_Flamethrower::TurnOffPilot ( )
{
	static UFunction* pFnTurnOffPilot = NULL;

	if ( ! pFnTurnOffPilot )
		pFnTurnOffPilot = (UFunction*) UObject::GObjObjects()->Data[ 122660 ];

	AKFWeapAttach_Flamethrower_execTurnOffPilot_Parms TurnOffPilot_Parms;

	this->ProcessEvent ( pFnTurnOffPilot, &TurnOffPilot_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Flamethrower.TurnOnPilot
// [0x00080102] 
// Parameters infos:

void AKFWeapAttach_Flamethrower::TurnOnPilot ( )
{
	static UFunction* pFnTurnOnPilot = NULL;

	if ( ! pFnTurnOnPilot )
		pFnTurnOnPilot = (UFunction*) UObject::GObjObjects()->Data[ 122658 ];

	AKFWeapAttach_Flamethrower_execTurnOnPilot_Parms TurnOnPilot_Parms;

	this->ProcessEvent ( pFnTurnOnPilot, &TurnOnPilot_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_CaulkBurn.SetFOV
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Flame_CaulkBurn::eventSetFOV ( )
{
	static UFunction* pFnSetFOV = NULL;

	if ( ! pFnSetFOV )
		pFnSetFOV = (UFunction*) UObject::GObjObjects()->Data[ 122685 ];

	AKFWeap_Flame_CaulkBurn_eventSetFOV_Parms SetFOV_Parms;

	this->ProcessEvent ( pFnSetFOV, &SetFOV_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_CaulkBurn.TurnOffPilot
// [0x00080102] 
// Parameters infos:

void AKFWeap_Flame_CaulkBurn::TurnOffPilot ( )
{
	static UFunction* pFnTurnOffPilot = NULL;

	if ( ! pFnTurnOffPilot )
		pFnTurnOffPilot = (UFunction*) UObject::GObjObjects()->Data[ 122684 ];

	AKFWeap_Flame_CaulkBurn_execTurnOffPilot_Parms TurnOffPilot_Parms;

	this->ProcessEvent ( pFnTurnOffPilot, &TurnOffPilot_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_CaulkBurn.TurnOnPilot
// [0x00080102] 
// Parameters infos:

void AKFWeap_Flame_CaulkBurn::TurnOnPilot ( )
{
	static UFunction* pFnTurnOnPilot = NULL;

	if ( ! pFnTurnOnPilot )
		pFnTurnOnPilot = (UFunction*) UObject::GObjObjects()->Data[ 122682 ];

	AKFWeap_Flame_CaulkBurn_execTurnOnPilot_Parms TurnOnPilot_Parms;

	this->ProcessEvent ( pFnTurnOnPilot, &TurnOnPilot_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.SetFOV
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Flame_Flamethrower::eventSetFOV ( )
{
	static UFunction* pFnSetFOV = NULL;

	if ( ! pFnSetFOV )
		pFnSetFOV = (UFunction*) UObject::GObjObjects()->Data[ 122724 ];

	AKFWeap_Flame_Flamethrower_eventSetFOV_Parms SetFOV_Parms;

	this->ProcessEvent ( pFnSetFOV, &SetFOV_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOffFireSpray
// [0x00080102] 
// Parameters infos:

void AKFWeap_Flame_Flamethrower::TurnOffFireSpray ( )
{
	static UFunction* pFnTurnOffFireSpray = NULL;

	if ( ! pFnTurnOffFireSpray )
		pFnTurnOffFireSpray = (UFunction*) UObject::GObjObjects()->Data[ 122722 ];

	AKFWeap_Flame_Flamethrower_execTurnOffFireSpray_Parms TurnOffFireSpray_Parms;

	this->ProcessEvent ( pFnTurnOffFireSpray, &TurnOffFireSpray_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOnFireSpray
// [0x00080102] 
// Parameters infos:

void AKFWeap_Flame_Flamethrower::TurnOnFireSpray ( )
{
	static UFunction* pFnTurnOnFireSpray = NULL;

	if ( ! pFnTurnOnFireSpray )
		pFnTurnOnFireSpray = (UFunction*) UObject::GObjObjects()->Data[ 122720 ];

	AKFWeap_Flame_Flamethrower_execTurnOnFireSpray_Parms TurnOnFireSpray_Parms;

	this->ProcessEvent ( pFnTurnOnFireSpray, &TurnOnFireSpray_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOffPilot
// [0x00080102] 
// Parameters infos:

void AKFWeap_Flame_Flamethrower::TurnOffPilot ( )
{
	static UFunction* pFnTurnOffPilot = NULL;

	if ( ! pFnTurnOffPilot )
		pFnTurnOffPilot = (UFunction*) UObject::GObjObjects()->Data[ 122718 ];

	AKFWeap_Flame_Flamethrower_execTurnOffPilot_Parms TurnOffPilot_Parms;

	this->ProcessEvent ( pFnTurnOffPilot, &TurnOffPilot_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Flame_Flamethrower.TurnOnPilot
// [0x00080102] 
// Parameters infos:

void AKFWeap_Flame_Flamethrower::TurnOnPilot ( )
{
	static UFunction* pFnTurnOnPilot = NULL;

	if ( ! pFnTurnOnPilot )
		pFnTurnOnPilot = (UFunction*) UObject::GObjObjects()->Data[ 122715 ];

	AKFWeap_Flame_Flamethrower_execTurnOnPilot_Parms TurnOnPilot_Parms;

	this->ProcessEvent ( pFnTurnOnPilot, &TurnOnPilot_Parms, NULL );
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_GrenadeLauncher_HX25::eventGetAltTraderFilter ( )
{
	static UFunction* pFnGetAltTraderFilter = NULL;

	if ( ! pFnGetAltTraderFilter )
		pFnGetAltTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 122784 ];

	AKFWeap_GrenadeLauncher_HX25_eventGetAltTraderFilter_Parms GetAltTraderFilter_Parms;

	this->ProcessEvent ( pFnGetAltTraderFilter, &GetAltTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.CalculateTraderWeaponStatDamage
// [0x00022102] 
// Parameters infos:

void AKFWeap_GrenadeLauncher_HX25::CalculateTraderWeaponStatDamage ( )
{
	static UFunction* pFnCalculateTraderWeaponStatDamage = NULL;

	if ( ! pFnCalculateTraderWeaponStatDamage )
		pFnCalculateTraderWeaponStatDamage = (UFunction*) UObject::GObjObjects()->Data[ 122778 ];

	AKFWeap_GrenadeLauncher_HX25_execCalculateTraderWeaponStatDamage_Parms CalculateTraderWeaponStatDamage_Parms;

	this->ProcessEvent ( pFnCalculateTraderWeaponStatDamage, &CalculateTraderWeaponStatDamage_Parms, NULL );
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.AddMultiShotSpread
// [0x00820102] 
// Parameters infos:

void AKFWeap_GrenadeLauncher_HX25::AddMultiShotSpread ( )
{
	static UFunction* pFnAddMultiShotSpread = NULL;

	if ( ! pFnAddMultiShotSpread )
		pFnAddMultiShotSpread = (UFunction*) UObject::GObjObjects()->Data[ 122768 ];

	AKFWeap_GrenadeLauncher_HX25_execAddMultiShotSpread_Parms AddMultiShotSpread_Parms;

	this->ProcessEvent ( pFnAddMultiShotSpread, &AddMultiShotSpread_Parms, NULL );
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.AddSpread
// [0x00020102] 
// Parameters infos:

void AKFWeap_GrenadeLauncher_HX25::AddSpread ( )
{
	static UFunction* pFnAddSpread = NULL;

	if ( ! pFnAddSpread )
		pFnAddSpread = (UFunction*) UObject::GObjObjects()->Data[ 122765 ];

	AKFWeap_GrenadeLauncher_HX25_execAddSpread_Parms AddSpread_Parms;

	this->ProcessEvent ( pFnAddSpread, &AddSpread_Parms, NULL );
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.GetNumProjectilesToFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_GrenadeLauncher_HX25::GetNumProjectilesToFire ( )
{
	static UFunction* pFnGetNumProjectilesToFire = NULL;

	if ( ! pFnGetNumProjectilesToFire )
		pFnGetNumProjectilesToFire = (UFunction*) UObject::GObjObjects()->Data[ 122762 ];

	AKFWeap_GrenadeLauncher_HX25_execGetNumProjectilesToFire_Parms GetNumProjectilesToFire_Parms;

	this->ProcessEvent ( pFnGetNumProjectilesToFire, &GetNumProjectilesToFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.HandleWeaponShotTaken
// [0x00020002] 
// Parameters infos:

void AKFWeap_GrenadeLauncher_HX25::HandleWeaponShotTaken ( )
{
	static UFunction* pFnHandleWeaponShotTaken = NULL;

	if ( ! pFnHandleWeaponShotTaken )
		pFnHandleWeaponShotTaken = (UFunction*) UObject::GObjObjects()->Data[ 122760 ];

	AKFWeap_GrenadeLauncher_HX25_execHandleWeaponShotTaken_Parms HandleWeaponShotTaken_Parms;

	this->ProcessEvent ( pFnHandleWeaponShotTaken, &HandleWeaponShotTaken_Parms, NULL );
};

// Function kfgamecontent.KFWeap_GrenadeLauncher_HX25.SpawnProjectile
// [0x00820102] 
// Parameters infos:

void AKFWeap_GrenadeLauncher_HX25::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 122753 ];

	AKFWeap_GrenadeLauncher_HX25_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Healer_Syringe.InitializeAmmo
// [0x00020002] 
// Parameters infos:

void AKFWeap_Healer_Syringe::InitializeAmmo ( )
{
	static UFunction* pFnInitializeAmmo = NULL;

	if ( ! pFnInitializeAmmo )
		pFnInitializeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122809 ];

	AKFWeap_Healer_Syringe_execInitializeAmmo_Parms InitializeAmmo_Parms;

	this->ProcessEvent ( pFnInitializeAmmo, &InitializeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.GetReloadAnimName
// [0x00020102] 
// Parameters infos:

void AKFWeap_LMG_Stoner63A::GetReloadAnimName ( )
{
	static UFunction* pFnGetReloadAnimName = NULL;

	if ( ! pFnGetReloadAnimName )
		pFnGetReloadAnimName = (UFunction*) UObject::GObjObjects()->Data[ 122938 ];

	AKFWeap_LMG_Stoner63A_execGetReloadAnimName_Parms GetReloadAnimName_Parms;

	this->ProcessEvent ( pFnGetReloadAnimName, &GetReloadAnimName_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.Timer_AttemptAmmoBeltUpdate
// [0x00020102] 
// Parameters infos:

void AKFWeap_LMG_Stoner63A::Timer_AttemptAmmoBeltUpdate ( )
{
	static UFunction* pFnTimer_AttemptAmmoBeltUpdate = NULL;

	if ( ! pFnTimer_AttemptAmmoBeltUpdate )
		pFnTimer_AttemptAmmoBeltUpdate = (UFunction*) UObject::GObjObjects()->Data[ 122937 ];

	AKFWeap_LMG_Stoner63A_execTimer_AttemptAmmoBeltUpdate_Parms Timer_AttemptAmmoBeltUpdate_Parms;

	this->ProcessEvent ( pFnTimer_AttemptAmmoBeltUpdate, &Timer_AttemptAmmoBeltUpdate_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.UpdateAmmoBeltBullets
// [0x00024102] 
// Parameters infos:

void AKFWeap_LMG_Stoner63A::UpdateAmmoBeltBullets ( )
{
	static UFunction* pFnUpdateAmmoBeltBullets = NULL;

	if ( ! pFnUpdateAmmoBeltBullets )
		pFnUpdateAmmoBeltBullets = (UFunction*) UObject::GObjObjects()->Data[ 122931 ];

	AKFWeap_LMG_Stoner63A_execUpdateAmmoBeltBullets_Parms UpdateAmmoBeltBullets_Parms;

	this->ProcessEvent ( pFnUpdateAmmoBeltBullets, &UpdateAmmoBeltBullets_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.ANIMNOTIFY_RestoreAmmoBelt
// [0x00020102] 
// Parameters infos:

void AKFWeap_LMG_Stoner63A::ANIMNOTIFY_RestoreAmmoBelt ( )
{
	static UFunction* pFnANIMNOTIFY_RestoreAmmoBelt = NULL;

	if ( ! pFnANIMNOTIFY_RestoreAmmoBelt )
		pFnANIMNOTIFY_RestoreAmmoBelt = (UFunction*) UObject::GObjObjects()->Data[ 122928 ];

	AKFWeap_LMG_Stoner63A_execANIMNOTIFY_RestoreAmmoBelt_Parms ANIMNOTIFY_RestoreAmmoBelt_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_RestoreAmmoBelt, &ANIMNOTIFY_RestoreAmmoBelt_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.PerformReload
// [0x00024102] 
// Parameters infos:

void AKFWeap_LMG_Stoner63A::PerformReload ( )
{
	static UFunction* pFnPerformReload = NULL;

	if ( ! pFnPerformReload )
		pFnPerformReload = (UFunction*) UObject::GObjObjects()->Data[ 122926 ];

	AKFWeap_LMG_Stoner63A_execPerformReload_Parms PerformReload_Parms;

	this->ProcessEvent ( pFnPerformReload, &PerformReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.ConsumeAmmo
// [0x00020102] 
// Parameters infos:

void AKFWeap_LMG_Stoner63A::ConsumeAmmo ( )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 122924 ];

	AKFWeap_LMG_Stoner63A_execConsumeAmmo_Parms ConsumeAmmo_Parms;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_LMG_Stoner63A::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 122923 ];

	AKFWeap_LMG_Stoner63A_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function kfgamecontent.KFWeap_LMG_Stoner63A.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_LMG_Stoner63A::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 122921 ];

	AKFWeap_LMG_Stoner63A_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Pistol_DualFlare.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Pistol_DualFlare::eventGetAltTraderFilter ( )
{
	static UFunction* pFnGetAltTraderFilter = NULL;

	if ( ! pFnGetAltTraderFilter )
		pFnGetAltTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 123085 ];

	AKFWeap_Pistol_DualFlare_eventGetAltTraderFilter_Parms GetAltTraderFilter_Parms;

	this->ProcessEvent ( pFnGetAltTraderFilter, &GetAltTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Pistol_Flare.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Pistol_Flare::eventGetAltTraderFilter ( )
{
	static UFunction* pFnGetAltTraderFilter = NULL;

	if ( ! pFnGetAltTraderFilter )
		pFnGetAltTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 123113 ];

	AKFWeap_Pistol_Flare_eventGetAltTraderFilter_Parms GetAltTraderFilter_Parms;

	this->ProcessEvent ( pFnGetAltTraderFilter, &GetAltTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_Hemogoblin.ProcessInstantHitEx
// [0x00424102] 
// Parameters infos:

void AKFWeap_Rifle_Hemogoblin::ProcessInstantHitEx ( )
{
	static UFunction* pFnProcessInstantHitEx = NULL;

	if ( ! pFnProcessInstantHitEx )
		pFnProcessInstantHitEx = (UFunction*) UObject::GObjObjects()->Data[ 123262 ];

	AKFWeap_Rifle_Hemogoblin_execProcessInstantHitEx_Parms ProcessInstantHitEx_Parms;

	this->ProcessEvent ( pFnProcessInstantHitEx, &ProcessInstantHitEx_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_Hemogoblin.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Rifle_Hemogoblin::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 123260 ];

	AKFWeap_Rifle_Hemogoblin_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Railgun.SpawnTracer
// [0x00820102] 
// Parameters infos:

void AKFWeapAttach_Railgun::SpawnTracer ( )
{
	static UFunction* pFnSpawnTracer = NULL;

	if ( ! pFnSpawnTracer )
		pFnSpawnTracer = (UFunction*) UObject::GObjObjects()->Data[ 123315 ];

	AKFWeapAttach_Railgun_execSpawnTracer_Parms SpawnTracer_Parms;

	this->ProcessEvent ( pFnSpawnTracer, &SpawnTracer_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Railgun.Destroyed
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Railgun::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 123314 ];

	AKFWeapAttach_Railgun_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Railgun.DetachFrom
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Railgun::DetachFrom ( )
{
	static UFunction* pFnDetachFrom = NULL;

	if ( ! pFnDetachFrom )
		pFnDetachFrom = (UFunction*) UObject::GObjObjects()->Data[ 123312 ];

	AKFWeapAttach_Railgun_execDetachFrom_Parms DetachFrom_Parms;

	this->ProcessEvent ( pFnDetachFrom, &DetachFrom_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Railgun.AttachTo
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Railgun::AttachTo ( )
{
	static UFunction* pFnAttachTo = NULL;

	if ( ! pFnAttachTo )
		pFnAttachTo = (UFunction*) UObject::GObjObjects()->Data[ 123310 ];

	AKFWeapAttach_Railgun_execAttachTo_Parms AttachTo_Parms;

	this->ProcessEvent ( pFnAttachTo, &AttachTo_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Railgun.StopAmbientSound
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Railgun::StopAmbientSound ( )
{
	static UFunction* pFnStopAmbientSound = NULL;

	if ( ! pFnStopAmbientSound )
		pFnStopAmbientSound = (UFunction*) UObject::GObjObjects()->Data[ 123309 ];

	AKFWeapAttach_Railgun_execStopAmbientSound_Parms StopAmbientSound_Parms;

	this->ProcessEvent ( pFnStopAmbientSound, &StopAmbientSound_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Railgun.StartAmbientSound
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Railgun::StartAmbientSound ( )
{
	static UFunction* pFnStartAmbientSound = NULL;

	if ( ! pFnStartAmbientSound )
		pFnStartAmbientSound = (UFunction*) UObject::GObjObjects()->Data[ 123308 ];

	AKFWeapAttach_Railgun_execStartAmbientSound_Parms StartAmbientSound_Parms;

	this->ProcessEvent ( pFnStartAmbientSound, &StartAmbientSound_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.WorldToCanvas
// [0x00820102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::WorldToCanvas ( )
{
	static UFunction* pFnWorldToCanvas = NULL;

	if ( ! pFnWorldToCanvas )
		pFnWorldToCanvas = (UFunction*) UObject::GObjObjects()->Data[ 123450 ];

	AKFWeap_Rifle_RailGun_execWorldToCanvas_Parms WorldToCanvas_Parms;

	this->ProcessEvent ( pFnWorldToCanvas, &WorldToCanvas_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.DrawTargetingIcon
// [0x00820102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::DrawTargetingIcon ( )
{
	static UFunction* pFnDrawTargetingIcon = NULL;

	if ( ! pFnDrawTargetingIcon )
		pFnDrawTargetingIcon = (UFunction*) UObject::GObjObjects()->Data[ 123443 ];

	AKFWeap_Rifle_RailGun_execDrawTargetingIcon_Parms DrawTargetingIcon_Parms;

	this->ProcessEvent ( pFnDrawTargetingIcon, &DrawTargetingIcon_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.OnRender
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::OnRender ( )
{
	static UFunction* pFnOnRender = NULL;

	if ( ! pFnOnRender )
		pFnOnRender = (UFunction*) UObject::GObjObjects()->Data[ 123440 ];

	AKFWeap_Rifle_RailGun_execOnRender_Parms OnRender_Parms;

	this->ProcessEvent ( pFnOnRender, &OnRender_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.InstantFireClient
// [0x00820102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::InstantFireClient ( )
{
	static UFunction* pFnInstantFireClient = NULL;

	if ( ! pFnInstantFireClient )
		pFnInstantFireClient = (UFunction*) UObject::GObjObjects()->Data[ 123431 ];

	AKFWeap_Rifle_RailGun_execInstantFireClient_Parms InstantFireClient_Parms;

	this->ProcessEvent ( pFnInstantFireClient, &InstantFireClient_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Rifle_RailGun::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 123430 ];

	AKFWeap_Rifle_RailGun_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.PlayTargetingBeepTimer
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::PlayTargetingBeepTimer ( )
{
	static UFunction* pFnPlayTargetingBeepTimer = NULL;

	if ( ! pFnPlayTargetingBeepTimer )
		pFnPlayTargetingBeepTimer = (UFunction*) UObject::GObjObjects()->Data[ 123429 ];

	AKFWeap_Rifle_RailGun_execPlayTargetingBeepTimer_Parms PlayTargetingBeepTimer_Parms;

	this->ProcessEvent ( pFnPlayTargetingBeepTimer, &PlayTargetingBeepTimer_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.AddTargetingZones
// [0x00C20102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::AddTargetingZones ( )
{
	static UFunction* pFnAddTargetingZones = NULL;

	if ( ! pFnAddTargetingZones )
		pFnAddTargetingZones = (UFunction*) UObject::GObjObjects()->Data[ 123417 ];

	AKFWeap_Rifle_RailGun_execAddTargetingZones_Parms AddTargetingZones_Parms;

	this->ProcessEvent ( pFnAddTargetingZones, &AddTargetingZones_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.ServerSetTargetingLocation
// [0x002400C3] ( FUNC_Final )
// Parameters infos:

void AKFWeap_Rifle_RailGun::ServerSetTargetingLocation ( )
{
	static UFunction* pFnServerSetTargetingLocation = NULL;

	if ( ! pFnServerSetTargetingLocation )
		pFnServerSetTargetingLocation = (UFunction*) UObject::GObjObjects()->Data[ 123415 ];

	AKFWeap_Rifle_RailGun_execServerSetTargetingLocation_Parms ServerSetTargetingLocation_Parms;

	this->ProcessEvent ( pFnServerSetTargetingLocation, &ServerSetTargetingLocation_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.CheckTargetLock
// [0x00820102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::CheckTargetLock ( )
{
	static UFunction* pFnCheckTargetLock = NULL;

	if ( ! pFnCheckTargetLock )
		pFnCheckTargetLock = (UFunction*) UObject::GObjObjects()->Data[ 123395 ];

	AKFWeap_Rifle_RailGun_execCheckTargetLock_Parms CheckTargetLock_Parms;

	this->ProcessEvent ( pFnCheckTargetLock, &CheckTargetLock_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.AllowTargetLockOn
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::AllowTargetLockOn ( )
{
	static UFunction* pFnAllowTargetLockOn = NULL;

	if ( ! pFnAllowTargetLockOn )
		pFnAllowTargetLockOn = (UFunction*) UObject::GObjObjects()->Data[ 123393 ];

	AKFWeap_Rifle_RailGun_execAllowTargetLockOn_Parms AllowTargetLockOn_Parms;

	this->ProcessEvent ( pFnAllowTargetLockOn, &AllowTargetLockOn_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.AdjustLockTarget
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::AdjustLockTarget ( )
{
	static UFunction* pFnAdjustLockTarget = NULL;

	if ( ! pFnAdjustLockTarget )
		pFnAdjustLockTarget = (UFunction*) UObject::GObjObjects()->Data[ 123391 ];

	AKFWeap_Rifle_RailGun_execAdjustLockTarget_Parms AdjustLockTarget_Parms;

	this->ProcessEvent ( pFnAdjustLockTarget, &AdjustLockTarget_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.CanLockOnTo
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::CanLockOnTo ( )
{
	static UFunction* pFnCanLockOnTo = NULL;

	if ( ! pFnCanLockOnTo )
		pFnCanLockOnTo = (UFunction*) UObject::GObjObjects()->Data[ 123387 ];

	AKFWeap_Rifle_RailGun_execCanLockOnTo_Parms CanLockOnTo_Parms;

	this->ProcessEvent ( pFnCanLockOnTo, &CanLockOnTo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Rifle_RailGun::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 123385 ];

	AKFWeap_Rifle_RailGun_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.DetachWeapon
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 123384 ];

	AKFWeap_Rifle_RailGun_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.StopAmbientSound
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::StopAmbientSound ( )
{
	static UFunction* pFnStopAmbientSound = NULL;

	if ( ! pFnStopAmbientSound )
		pFnStopAmbientSound = (UFunction*) UObject::GObjObjects()->Data[ 123383 ];

	AKFWeap_Rifle_RailGun_execStopAmbientSound_Parms StopAmbientSound_Parms;

	this->ProcessEvent ( pFnStopAmbientSound, &StopAmbientSound_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.StartAmbientSound
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::StartAmbientSound ( )
{
	static UFunction* pFnStartAmbientSound = NULL;

	if ( ! pFnStartAmbientSound )
		pFnStartAmbientSound = (UFunction*) UObject::GObjObjects()->Data[ 123382 ];

	AKFWeap_Rifle_RailGun_execStartAmbientSound_Parms StartAmbientSound_Parms;

	this->ProcessEvent ( pFnStartAmbientSound, &StartAmbientSound_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.GetReloadAnimName
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::GetReloadAnimName ( )
{
	static UFunction* pFnGetReloadAnimName = NULL;

	if ( ! pFnGetReloadAnimName )
		pFnGetReloadAnimName = (UFunction*) UObject::GObjObjects()->Data[ 123379 ];

	AKFWeap_Rifle_RailGun_execGetReloadAnimName_Parms GetReloadAnimName_Parms;

	this->ProcessEvent ( pFnGetReloadAnimName, &GetReloadAnimName_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.ShouldPlayFireLast
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::ShouldPlayFireLast ( )
{
	static UFunction* pFnShouldPlayFireLast = NULL;

	if ( ! pFnShouldPlayFireLast )
		pFnShouldPlayFireLast = (UFunction*) UObject::GObjObjects()->Data[ 123376 ];

	AKFWeap_Rifle_RailGun_execShouldPlayFireLast_Parms ShouldPlayFireLast_Parms;

	this->ProcessEvent ( pFnShouldPlayFireLast, &ShouldPlayFireLast_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.PlayFireEffects
// [0x00024102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::PlayFireEffects ( )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 123373 ];

	AKFWeap_Rifle_RailGun_execPlayFireEffects_Parms PlayFireEffects_Parms;

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.ClientWeaponSet
// [0x010241C2] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::ClientWeaponSet ( )
{
	static UFunction* pFnClientWeaponSet = NULL;

	if ( ! pFnClientWeaponSet )
		pFnClientWeaponSet = (UFunction*) UObject::GObjObjects()->Data[ 123370 ];

	AKFWeap_Rifle_RailGun_execClientWeaponSet_Parms ClientWeaponSet_Parms;

	this->ProcessEvent ( pFnClientWeaponSet, &ClientWeaponSet_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Rifle_RailGun.InitFOV
// [0x00020102] 
// Parameters infos:

void AKFWeap_Rifle_RailGun::InitFOV ( )
{
	static UFunction* pFnInitFOV = NULL;

	if ( ! pFnInitFOV )
		pFnInitFOV = (UFunction*) UObject::GObjObjects()->Data[ 123365 ];

	AKFWeap_Rifle_RailGun_execInitFOV_Parms InitFOV_Parms;

	this->ProcessEvent ( pFnInitFOV, &InitFOV_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_RPG7.ANIMNOTIFY_LockBolt
// [0x00020102] 
// Parameters infos:

void AKFWeap_RocketLauncher_RPG7::ANIMNOTIFY_LockBolt ( )
{
	static UFunction* pFnANIMNOTIFY_LockBolt = NULL;

	if ( ! pFnANIMNOTIFY_LockBolt )
		pFnANIMNOTIFY_LockBolt = (UFunction*) UObject::GObjObjects()->Data[ 123531 ];

	AKFWeap_RocketLauncher_RPG7_execANIMNOTIFY_LockBolt_Parms ANIMNOTIFY_LockBolt_Parms;

	this->ProcessEvent ( pFnANIMNOTIFY_LockBolt, &ANIMNOTIFY_LockBolt_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_RPG7.GetBackBlastLocationAndRotation
// [0x00C20102] 
// Parameters infos:

void AKFWeap_RocketLauncher_RPG7::GetBackBlastLocationAndRotation ( )
{
	static UFunction* pFnGetBackBlastLocationAndRotation = NULL;

	if ( ! pFnGetBackBlastLocationAndRotation )
		pFnGetBackBlastLocationAndRotation = (UFunction*) UObject::GObjObjects()->Data[ 123524 ];

	AKFWeap_RocketLauncher_RPG7_execGetBackBlastLocationAndRotation_Parms GetBackBlastLocationAndRotation_Parms;

	this->ProcessEvent ( pFnGetBackBlastLocationAndRotation, &GetBackBlastLocationAndRotation_Parms, NULL );
};

// Function kfgamecontent.KFWeap_RocketLauncher_RPG7.CustomFire
// [0x00820102] 
// Parameters infos:

void AKFWeap_RocketLauncher_RPG7::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 123520 ];

	AKFWeap_RocketLauncher_RPG7_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.CauseMuzzleFlash
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_DoubleBarrel::CauseMuzzleFlash ( )
{
	static UFunction* pFnCauseMuzzleFlash = NULL;

	if ( ! pFnCauseMuzzleFlash )
		pFnCauseMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 123689 ];

	AKFWeap_Shotgun_DoubleBarrel_execCauseMuzzleFlash_Parms CauseMuzzleFlash_Parms;

	this->ProcessEvent ( pFnCauseMuzzleFlash, &CauseMuzzleFlash_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.PlayFireEffects
// [0x00024102] 
// Parameters infos:

void AKFWeap_Shotgun_DoubleBarrel::PlayFireEffects ( )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 123686 ];

	AKFWeap_Shotgun_DoubleBarrel_execPlayFireEffects_Parms PlayFireEffects_Parms;

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.GetWeaponFireAnim
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_DoubleBarrel::GetWeaponFireAnim ( )
{
	static UFunction* pFnGetWeaponFireAnim = NULL;

	if ( ! pFnGetWeaponFireAnim )
		pFnGetWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 123683 ];

	AKFWeap_Shotgun_DoubleBarrel_execGetWeaponFireAnim_Parms GetWeaponFireAnim_Parms;

	this->ProcessEvent ( pFnGetWeaponFireAnim, &GetWeaponFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.SendToFiringState
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_DoubleBarrel::SendToFiringState ( )
{
	static UFunction* pFnSendToFiringState = NULL;

	if ( ! pFnSendToFiringState )
		pFnSendToFiringState = (UFunction*) UObject::GObjObjects()->Data[ 123675 ];

	AKFWeap_Shotgun_DoubleBarrel_execSendToFiringState_Parms SendToFiringState_Parms;

	this->ProcessEvent ( pFnSendToFiringState, &SendToFiringState_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_DoubleBarrel.AltFireMode
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_DoubleBarrel::AltFireMode ( )
{
	static UFunction* pFnAltFireMode = NULL;

	if ( ! pFnAltFireMode )
		pFnAltFireMode = (UFunction*) UObject::GObjObjects()->Data[ 123674 ];

	AKFWeap_Shotgun_DoubleBarrel_execAltFireMode_Parms AltFireMode_Parms;

	this->ProcessEvent ( pFnAltFireMode, &AltFireMode_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_DragonsBreath.GetAltTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Shotgun_DragonsBreath::eventGetAltTraderFilter ( )
{
	static UFunction* pFnGetAltTraderFilter = NULL;

	if ( ! pFnGetAltTraderFilter )
		pFnGetAltTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 123707 ];

	AKFWeap_Shotgun_DragonsBreath_eventGetAltTraderFilter_Parms GetAltTraderFilter_Parms;

	this->ProcessEvent ( pFnGetAltTraderFilter, &GetAltTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.ShouldPlayFireLast
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_HZ12::ShouldPlayFireLast ( )
{
	static UFunction* pFnShouldPlayFireLast = NULL;

	if ( ! pFnShouldPlayFireLast )
		pFnShouldPlayFireLast = (UFunction*) UObject::GObjObjects()->Data[ 123735 ];

	AKFWeap_Shotgun_HZ12_execShouldPlayFireLast_Parms ShouldPlayFireLast_Parms;

	this->ProcessEvent ( pFnShouldPlayFireLast, &ShouldPlayFireLast_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.PerformReload
// [0x00024102] 
// Parameters infos:

void AKFWeap_Shotgun_HZ12::PerformReload ( )
{
	static UFunction* pFnPerformReload = NULL;

	if ( ! pFnPerformReload )
		pFnPerformReload = (UFunction*) UObject::GObjObjects()->Data[ 123733 ];

	AKFWeap_Shotgun_HZ12_execPerformReload_Parms PerformReload_Parms;

	this->ProcessEvent ( pFnPerformReload, &PerformReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.ConsumeAmmo
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_HZ12::ConsumeAmmo ( )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 123731 ];

	AKFWeap_Shotgun_HZ12_execConsumeAmmo_Parms ConsumeAmmo_Parms;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.GetFireInterval
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_HZ12::GetFireInterval ( )
{
	static UFunction* pFnGetFireInterval = NULL;

	if ( ! pFnGetFireInterval )
		pFnGetFireInterval = (UFunction*) UObject::GObjObjects()->Data[ 123728 ];

	AKFWeap_Shotgun_HZ12_execGetFireInterval_Parms GetFireInterval_Parms;

	this->ProcessEvent ( pFnGetFireInterval, &GetFireInterval_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_HZ12.IsPumpFire
// [0x00080102] 
// Parameters infos:

void AKFWeap_Shotgun_HZ12::IsPumpFire ( )
{
	static UFunction* pFnIsPumpFire = NULL;

	if ( ! pFnIsPumpFire )
		pFnIsPumpFire = (UFunction*) UObject::GObjObjects()->Data[ 123726 ];

	AKFWeap_Shotgun_HZ12_execIsPumpFire_Parms IsPumpFire_Parms;

	this->ProcessEvent ( pFnIsPumpFire, &IsPumpFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Shotgun_Medic::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 123802 ];

	AKFWeap_Shotgun_Medic_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.CalculateTraderWeaponStatDamage
// [0x00022102] 
// Parameters infos:

void AKFWeap_Shotgun_Medic::CalculateTraderWeaponStatDamage ( )
{
	static UFunction* pFnCalculateTraderWeaponStatDamage = NULL;

	if ( ! pFnCalculateTraderWeaponStatDamage )
		pFnCalculateTraderWeaponStatDamage = (UFunction*) UObject::GObjObjects()->Data[ 123797 ];

	AKFWeap_Shotgun_Medic_execCalculateTraderWeaponStatDamage_Parms CalculateTraderWeaponStatDamage_Parms;

	this->ProcessEvent ( pFnCalculateTraderWeaponStatDamage, &CalculateTraderWeaponStatDamage_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.HandleWeaponShotTaken
// [0x00020002] 
// Parameters infos:

void AKFWeap_Shotgun_Medic::HandleWeaponShotTaken ( )
{
	static UFunction* pFnHandleWeaponShotTaken = NULL;

	if ( ! pFnHandleWeaponShotTaken )
		pFnHandleWeaponShotTaken = (UFunction*) UObject::GObjObjects()->Data[ 123795 ];

	AKFWeap_Shotgun_Medic_execHandleWeaponShotTaken_Parms HandleWeaponShotTaken_Parms;

	this->ProcessEvent ( pFnHandleWeaponShotTaken, &HandleWeaponShotTaken_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.AddSpread
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_Medic::AddSpread ( )
{
	static UFunction* pFnAddSpread = NULL;

	if ( ! pFnAddSpread )
		pFnAddSpread = (UFunction*) UObject::GObjObjects()->Data[ 123792 ];

	AKFWeap_Shotgun_Medic_execAddSpread_Parms AddSpread_Parms;

	this->ProcessEvent ( pFnAddSpread, &AddSpread_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Medic.SpawnProjectile
// [0x00820102] 
// Parameters infos:

void AKFWeap_Shotgun_Medic::SpawnProjectile ( )
{
	static UFunction* pFnSpawnProjectile = NULL;

	if ( ! pFnSpawnProjectile )
		pFnSpawnProjectile = (UFunction*) UObject::GObjObjects()->Data[ 123784 ];

	AKFWeap_Shotgun_Medic_execSpawnProjectile_Parms SpawnProjectile_Parms;

	this->ProcessEvent ( pFnSpawnProjectile, &SpawnProjectile_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Nailgun.GetWeaponFireAnim
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_Nailgun::GetWeaponFireAnim ( )
{
	static UFunction* pFnGetWeaponFireAnim = NULL;

	if ( ! pFnGetWeaponFireAnim )
		pFnGetWeaponFireAnim = (UFunction*) UObject::GObjObjects()->Data[ 123834 ];

	AKFWeap_Shotgun_Nailgun_execGetWeaponFireAnim_Parms GetWeaponFireAnim_Parms;

	this->ProcessEvent ( pFnGetWeaponFireAnim, &GetWeaponFireAnim_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Nailgun.GetNumProjectilesToFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_Nailgun::GetNumProjectilesToFire ( )
{
	static UFunction* pFnGetNumProjectilesToFire = NULL;

	if ( ! pFnGetNumProjectilesToFire )
		pFnGetNumProjectilesToFire = (UFunction*) UObject::GObjObjects()->Data[ 123831 ];

	AKFWeap_Shotgun_Nailgun_execGetNumProjectilesToFire_Parms GetNumProjectilesToFire_Parms;

	this->ProcessEvent ( pFnGetNumProjectilesToFire, &GetNumProjectilesToFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Shotgun_Nailgun.ConsumeAmmo
// [0x00020102] 
// Parameters infos:

void AKFWeap_Shotgun_Nailgun::ConsumeAmmo ( )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 123828 ];

	AKFWeap_Shotgun_Nailgun_execConsumeAmmo_Parms ConsumeAmmo_Parms;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_SMG_Medic.GetTraderFilter
// [0x00022902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_SMG_Medic::eventGetTraderFilter ( )
{
	static UFunction* pFnGetTraderFilter = NULL;

	if ( ! pFnGetTraderFilter )
		pFnGetTraderFilter = (UFunction*) UObject::GObjObjects()->Data[ 123875 ];

	AKFWeap_SMG_Medic_eventGetTraderFilter_Parms GetTraderFilter_Parms;

	this->ProcessEvent ( pFnGetTraderFilter, &GetTraderFilter_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Dual_C4.UnHide
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Dual_C4::UnHide ( )
{
	static UFunction* pFnUnHide = NULL;

	if ( ! pFnUnHide )
		pFnUnHide = (UFunction*) UObject::GObjObjects()->Data[ 123962 ];

	AKFWeapAttach_Dual_C4_execUnHide_Parms UnHide_Parms;

	this->ProcessEvent ( pFnUnHide, &UnHide_Parms, NULL );
};

// Function kfgamecontent.KFWeapAttach_Dual_C4.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:

void AKFWeapAttach_Dual_C4::ThirdPersonFireEffects ( )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 123956 ];

	AKFWeapAttach_Dual_C4_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.TickAutoUnequip
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::TickAutoUnequip ( )
{
	static UFunction* pFnTickAutoUnequip = NULL;

	if ( ! pFnTickAutoUnequip )
		pFnTickAutoUnequip = (UFunction*) UObject::GObjObjects()->Data[ 124146 ];

	AKFWeap_Welder_execTickAutoUnequip_Parms TickAutoUnequip_Parms;

	this->ProcessEvent ( pFnTickAutoUnequip, &TickAutoUnequip_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.PlayReadyTransition
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::PlayReadyTransition ( )
{
	static UFunction* pFnPlayReadyTransition = NULL;

	if ( ! pFnPlayReadyTransition )
		pFnPlayReadyTransition = (UFunction*) UObject::GObjObjects()->Data[ 124126 ];

	AKFWeap_Welder_execPlayReadyTransition_Parms PlayReadyTransition_Parms;

	this->ProcessEvent ( pFnPlayReadyTransition, &PlayReadyTransition_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.ServerSetWeldTarget
// [0x002400C3] ( FUNC_Final )
// Parameters infos:

void AKFWeap_Welder::ServerSetWeldTarget ( )
{
	static UFunction* pFnServerSetWeldTarget = NULL;

	if ( ! pFnServerSetWeldTarget )
		pFnServerSetWeldTarget = (UFunction*) UObject::GObjObjects()->Data[ 124123 ];

	AKFWeap_Welder_execServerSetWeldTarget_Parms ServerSetWeldTarget_Parms;

	this->ProcessEvent ( pFnServerSetWeldTarget, &ServerSetWeldTarget_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.FindRepairableDoor
// [0x00820102] 
// Parameters infos:

void AKFWeap_Welder::FindRepairableDoor ( )
{
	static UFunction* pFnFindRepairableDoor = NULL;

	if ( ! pFnFindRepairableDoor )
		pFnFindRepairableDoor = (UFunction*) UObject::GObjObjects()->Data[ 124116 ];

	AKFWeap_Welder_execFindRepairableDoor_Parms FindRepairableDoor_Parms;

	this->ProcessEvent ( pFnFindRepairableDoor, &FindRepairableDoor_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.TraceDoorActors
// [0x00820102] 
// Parameters infos:

void AKFWeap_Welder::TraceDoorActors ( )
{
	static UFunction* pFnTraceDoorActors = NULL;

	if ( ! pFnTraceDoorActors )
		pFnTraceDoorActors = (UFunction*) UObject::GObjObjects()->Data[ 124108 ];

	AKFWeap_Welder_execTraceDoorActors_Parms TraceDoorActors_Parms;

	this->ProcessEvent ( pFnTraceDoorActors, &TraceDoorActors_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.TickWeldTarget
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::TickWeldTarget ( )
{
	static UFunction* pFnTickWeldTarget = NULL;

	if ( ! pFnTickWeldTarget )
		pFnTickWeldTarget = (UFunction*) UObject::GObjObjects()->Data[ 124105 ];

	AKFWeap_Welder_execTickWeldTarget_Parms TickWeldTarget_Parms;

	this->ProcessEvent ( pFnTickWeldTarget, &TickWeldTarget_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.CheckDelayedStartFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::CheckDelayedStartFire ( )
{
	static UFunction* pFnCheckDelayedStartFire = NULL;

	if ( ! pFnCheckDelayedStartFire )
		pFnCheckDelayedStartFire = (UFunction*) UObject::GObjObjects()->Data[ 124103 ];

	AKFWeap_Welder_execCheckDelayedStartFire_Parms CheckDelayedStartFire_Parms;

	this->ProcessEvent ( pFnCheckDelayedStartFire, &CheckDelayedStartFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.ClientRefire
// [0x010201C2] 
// Parameters infos:

void AKFWeap_Welder::ClientRefire ( )
{
	static UFunction* pFnClientRefire = NULL;

	if ( ! pFnClientRefire )
		pFnClientRefire = (UFunction*) UObject::GObjObjects()->Data[ 124102 ];

	AKFWeap_Welder_execClientRefire_Parms ClientRefire_Parms;

	this->ProcessEvent ( pFnClientRefire, &ClientRefire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.Refire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::Refire ( )
{
	static UFunction* pFnRefire = NULL;

	if ( ! pFnRefire )
		pFnRefire = (UFunction*) UObject::GObjObjects()->Data[ 124100 ];

	AKFWeap_Welder_execRefire_Parms Refire_Parms;

	this->ProcessEvent ( pFnRefire, &Refire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.RechargeAmmo
// [0x00020002] 
// Parameters infos:

void AKFWeap_Welder::RechargeAmmo ( )
{
	static UFunction* pFnRechargeAmmo = NULL;

	if ( ! pFnRechargeAmmo )
		pFnRechargeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 124099 ];

	AKFWeap_Welder_execRechargeAmmo_Parms RechargeAmmo_Parms;

	this->ProcessEvent ( pFnRechargeAmmo, &RechargeAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.CanWeldTarget
// [0x00024102] 
// Parameters infos:

void AKFWeap_Welder::CanWeldTarget ( )
{
	static UFunction* pFnCanWeldTarget = NULL;

	if ( ! pFnCanWeldTarget )
		pFnCanWeldTarget = (UFunction*) UObject::GObjObjects()->Data[ 124095 ];

	AKFWeap_Welder_execCanWeldTarget_Parms CanWeldTarget_Parms;

	this->ProcessEvent ( pFnCanWeldTarget, &CanWeldTarget_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.CustomFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 124092 ];

	AKFWeap_Welder_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.StartFire
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::StartFire ( )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 124090 ];

	AKFWeap_Welder_execStartFire_Parms StartFire_Parms;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.AltFireMode
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::AltFireMode ( )
{
	static UFunction* pFnAltFireMode = NULL;

	if ( ! pFnAltFireMode )
		pFnAltFireMode = (UFunction*) UObject::GObjObjects()->Data[ 124089 ];

	AKFWeap_Welder_execAltFireMode_Parms AltFireMode_Parms;

	this->ProcessEvent ( pFnAltFireMode, &AltFireMode_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.SetIronSights
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::SetIronSights ( )
{
	static UFunction* pFnSetIronSights = NULL;

	if ( ! pFnSetIronSights )
		pFnSetIronSights = (UFunction*) UObject::GObjObjects()->Data[ 124087 ];

	AKFWeap_Welder_execSetIronSights_Parms SetIronSights_Parms;

	this->ProcessEvent ( pFnSetIronSights, &SetIronSights_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.ShouldAutoReload
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::ShouldAutoReload ( )
{
	static UFunction* pFnShouldAutoReload = NULL;

	if ( ! pFnShouldAutoReload )
		pFnShouldAutoReload = (UFunction*) UObject::GObjObjects()->Data[ 124084 ];

	AKFWeap_Welder_execShouldAutoReload_Parms ShouldAutoReload_Parms;

	this->ProcessEvent ( pFnShouldAutoReload, &ShouldAutoReload_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.HasAmmo
// [0x00024102] 
// Parameters infos:

void AKFWeap_Welder::HasAmmo ( )
{
	static UFunction* pFnHasAmmo = NULL;

	if ( ! pFnHasAmmo )
		pFnHasAmmo = (UFunction*) UObject::GObjObjects()->Data[ 124080 ];

	AKFWeap_Welder_execHasAmmo_Parms HasAmmo_Parms;

	this->ProcessEvent ( pFnHasAmmo, &HasAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.HasAnyAmmo
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::HasAnyAmmo ( )
{
	static UFunction* pFnHasAnyAmmo = NULL;

	if ( ! pFnHasAnyAmmo )
		pFnHasAnyAmmo = (UFunction*) UObject::GObjObjects()->Data[ 124078 ];

	AKFWeap_Welder_execHasAnyAmmo_Parms HasAnyAmmo_Parms;

	this->ProcessEvent ( pFnHasAnyAmmo, &HasAnyAmmo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.UpdateScreenUI
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::UpdateScreenUI ( )
{
	static UFunction* pFnUpdateScreenUI = NULL;

	if ( ! pFnUpdateScreenUI )
		pFnUpdateScreenUI = (UFunction*) UObject::GObjObjects()->Data[ 124075 ];

	AKFWeap_Welder_execUpdateScreenUI_Parms UpdateScreenUI_Parms;

	this->ProcessEvent ( pFnUpdateScreenUI, &UpdateScreenUI_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Welder::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 124074 ];

	AKFWeap_Welder_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Welder::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 124072 ];

	AKFWeap_Welder_eventTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.DetachWeapon
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 124071 ];

	AKFWeap_Welder_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.AttachWeaponTo
// [0x00024102] 
// Parameters infos:

void AKFWeap_Welder::AttachWeaponTo ( )
{
	static UFunction* pFnAttachWeaponTo = NULL;

	if ( ! pFnAttachWeaponTo )
		pFnAttachWeaponTo = (UFunction*) UObject::GObjObjects()->Data[ 124068 ];

	AKFWeap_Welder_execAttachWeaponTo_Parms AttachWeaponTo_Parms;

	this->ProcessEvent ( pFnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.SetShownInInventory
// [0x00020102] 
// Parameters infos:

void AKFWeap_Welder::SetShownInInventory ( )
{
	static UFunction* pFnSetShownInInventory = NULL;

	if ( ! pFnSetShownInInventory )
		pFnSetShownInInventory = (UFunction*) UObject::GObjObjects()->Data[ 124066 ];

	AKFWeap_Welder_execSetShownInInventory_Parms SetShownInInventory_Parms;

	this->ProcessEvent ( pFnSetShownInInventory, &SetShownInInventory_Parms, NULL );
};

// Function kfgamecontent.KFWeap_Welder.PreBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AKFWeap_Welder::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 124064 ];

	AKFWeap_Welder_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif