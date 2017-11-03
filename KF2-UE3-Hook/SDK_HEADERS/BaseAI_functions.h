/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BaseAI_functions.h
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

// Function BaseAI.BaseAIController.DrawDebugTextToHud
// [0x00024000] 
// Parameters infos:

void ABaseAIController::DrawDebugTextToHud ( )
{
	static UFunction* pFnDrawDebugTextToHud = NULL;

	if ( ! pFnDrawDebugTextToHud )
		pFnDrawDebugTextToHud = (UFunction*) UObject::GObjObjects()->Data[ 48514 ];

	ABaseAIController_execDrawDebugTextToHud_Parms DrawDebugTextToHud_Parms;

	this->ProcessEvent ( pFnDrawDebugTextToHud, &DrawDebugTextToHud_Parms, NULL );
};

// Function BaseAI.BaseAIController.DrawEnemyPerception
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::DrawEnemyPerception ( )
{
	static UFunction* pFnDrawEnemyPerception = NULL;

	if ( ! pFnDrawEnemyPerception )
		pFnDrawEnemyPerception = (UFunction*) UObject::GObjObjects()->Data[ 48512 ];

	ABaseAIController_execDrawEnemyPerception_Parms DrawEnemyPerception_Parms;

	pFnDrawEnemyPerception->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawEnemyPerception, &DrawEnemyPerception_Parms, NULL );

	pFnDrawEnemyPerception->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.StopMovement
// [0x00024002] 
// Parameters infos:

void ABaseAIController::StopMovement ( )
{
	static UFunction* pFnStopMovement = NULL;

	if ( ! pFnStopMovement )
		pFnStopMovement = (UFunction*) UObject::GObjObjects()->Data[ 48510 ];

	ABaseAIController_execStopMovement_Parms StopMovement_Parms;

	this->ProcessEvent ( pFnStopMovement, &StopMovement_Parms, NULL );
};

// Function BaseAI.BaseAIController.NotifyKilled
// [0x00020002] 
// Parameters infos:

void ABaseAIController::NotifyKilled ( )
{
	static UFunction* pFnNotifyKilled = NULL;

	if ( ! pFnNotifyKilled )
		pFnNotifyKilled = (UFunction*) UObject::GObjObjects()->Data[ 48505 ];

	ABaseAIController_execNotifyKilled_Parms NotifyKilled_Parms;

	this->ProcessEvent ( pFnNotifyKilled, &NotifyKilled_Parms, NULL );
};

// Function BaseAI.BaseAIController.SelectTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::SelectTarget ( )
{
	static UFunction* pFnSelectTarget = NULL;

	if ( ! pFnSelectTarget )
		pFnSelectTarget = (UFunction*) UObject::GObjObjects()->Data[ 48503 ];

	ABaseAIController_execSelectTarget_Parms SelectTarget_Parms;

	pFnSelectTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectTarget, &SelectTarget_Parms, NULL );

	pFnSelectTarget->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.SelectEnemy
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::SelectEnemy ( )
{
	static UFunction* pFnSelectEnemy = NULL;

	if ( ! pFnSelectEnemy )
		pFnSelectEnemy = (UFunction*) UObject::GObjObjects()->Data[ 48501 ];

	ABaseAIController_execSelectEnemy_Parms SelectEnemy_Parms;

	pFnSelectEnemy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectEnemy, &SelectEnemy_Parms, NULL );

	pFnSelectEnemy->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.SetEnemy
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void ABaseAIController::eventSetEnemy ( )
{
	static UFunction* pFnSetEnemy = NULL;

	if ( ! pFnSetEnemy )
		pFnSetEnemy = (UFunction*) UObject::GObjObjects()->Data[ 48498 ];

	ABaseAIController_eventSetEnemy_Parms SetEnemy_Parms;

	pFnSetEnemy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnemy, &SetEnemy_Parms, NULL );

	pFnSetEnemy->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.SelectTargetInternal
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::SelectTargetInternal ( )
{
	static UFunction* pFnSelectTargetInternal = NULL;

	if ( ! pFnSelectTargetInternal )
		pFnSelectTargetInternal = (UFunction*) UObject::GObjObjects()->Data[ 48495 ];

	ABaseAIController_execSelectTargetInternal_Parms SelectTargetInternal_Parms;

	pFnSelectTargetInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectTargetInternal, &SelectTargetInternal_Parms, NULL );

	pFnSelectTargetInternal->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.UpdateEnemyPerception
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAIController::UpdateEnemyPerception ( )
{
	static UFunction* pFnUpdateEnemyPerception = NULL;

	if ( ! pFnUpdateEnemyPerception )
		pFnUpdateEnemyPerception = (UFunction*) UObject::GObjObjects()->Data[ 48493 ];

	ABaseAIController_execUpdateEnemyPerception_Parms UpdateEnemyPerception_Parms;

	pFnUpdateEnemyPerception->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateEnemyPerception, &UpdateEnemyPerception_Parms, NULL );

	pFnUpdateEnemyPerception->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.IsFriendly
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::IsFriendly ( )
{
	static UFunction* pFnIsFriendly = NULL;

	if ( ! pFnIsFriendly )
		pFnIsFriendly = (UFunction*) UObject::GObjObjects()->Data[ 48490 ];

	ABaseAIController_execIsFriendly_Parms IsFriendly_Parms;

	pFnIsFriendly->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriendly, &IsFriendly_Parms, NULL );

	pFnIsFriendly->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.IsFriendlyPawn
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAIController::IsFriendlyPawn ( )
{
	static UFunction* pFnIsFriendlyPawn = NULL;

	if ( ! pFnIsFriendlyPawn )
		pFnIsFriendlyPawn = (UFunction*) UObject::GObjObjects()->Data[ 48487 ];

	ABaseAIController_execIsFriendlyPawn_Parms IsFriendlyPawn_Parms;

	pFnIsFriendlyPawn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriendlyPawn, &IsFriendlyPawn_Parms, NULL );

	pFnIsFriendlyPawn->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.RemoveAllEnemies
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::RemoveAllEnemies ( )
{
	static UFunction* pFnRemoveAllEnemies = NULL;

	if ( ! pFnRemoveAllEnemies )
		pFnRemoveAllEnemies = (UFunction*) UObject::GObjObjects()->Data[ 48486 ];

	ABaseAIController_execRemoveAllEnemies_Parms RemoveAllEnemies_Parms;

	pFnRemoveAllEnemies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveAllEnemies, &RemoveAllEnemies_Parms, NULL );

	pFnRemoveAllEnemies->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.RemoveEnemy
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::RemoveEnemy ( )
{
	static UFunction* pFnRemoveEnemy = NULL;

	if ( ! pFnRemoveEnemy )
		pFnRemoveEnemy = (UFunction*) UObject::GObjObjects()->Data[ 48484 ];

	ABaseAIController_execRemoveEnemy_Parms RemoveEnemy_Parms;

	pFnRemoveEnemy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveEnemy, &RemoveEnemy_Parms, NULL );

	pFnRemoveEnemy->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.BroadcastEnemyKnowledge
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::BroadcastEnemyKnowledge ( )
{
	static UFunction* pFnBroadcastEnemyKnowledge = NULL;

	if ( ! pFnBroadcastEnemyKnowledge )
		pFnBroadcastEnemyKnowledge = (UFunction*) UObject::GObjObjects()->Data[ 48480 ];

	ABaseAIController_execBroadcastEnemyKnowledge_Parms BroadcastEnemyKnowledge_Parms;

	pFnBroadcastEnemyKnowledge->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBroadcastEnemyKnowledge, &BroadcastEnemyKnowledge_Parms, NULL );

	pFnBroadcastEnemyKnowledge->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.GetTimeSince
// [0x00020002] 
// Parameters infos:

void ABaseAIController::GetTimeSince ( )
{
	static UFunction* pFnGetTimeSince = NULL;

	if ( ! pFnGetTimeSince )
		pFnGetTimeSince = (UFunction*) UObject::GObjObjects()->Data[ 48477 ];

	ABaseAIController_execGetTimeSince_Parms GetTimeSince_Parms;

	this->ProcessEvent ( pFnGetTimeSince, &GetTimeSince_Parms, NULL );
};

// Function BaseAI.BaseAIController.GetAiPlugInHistory
// [0x00020002] 
// Parameters infos:

void ABaseAIController::GetAiPlugInHistory ( )
{
	static UFunction* pFnGetAiPlugInHistory = NULL;

	if ( ! pFnGetAiPlugInHistory )
		pFnGetAiPlugInHistory = (UFunction*) UObject::GObjObjects()->Data[ 48475 ];

	ABaseAIController_execGetAiPlugInHistory_Parms GetAiPlugInHistory_Parms;

	this->ProcessEvent ( pFnGetAiPlugInHistory, &GetAiPlugInHistory_Parms, NULL );
};

// Function BaseAI.BaseAIController.Cleanup
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void ABaseAIController::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 48473 ];

	ABaseAIController_execCleanup_Parms Cleanup_Parms;

	pFnCleanup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );

	pFnCleanup->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.UpdateEnemyAngle
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAIController::UpdateEnemyAngle ( )
{
	static UFunction* pFnUpdateEnemyAngle = NULL;

	if ( ! pFnUpdateEnemyAngle )
		pFnUpdateEnemyAngle = (UFunction*) UObject::GObjObjects()->Data[ 48471 ];

	ABaseAIController_execUpdateEnemyAngle_Parms UpdateEnemyAngle_Parms;

	pFnUpdateEnemyAngle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateEnemyAngle, &UpdateEnemyAngle_Parms, NULL );

	pFnUpdateEnemyAngle->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.UpdateEnemyRange
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAIController::UpdateEnemyRange ( )
{
	static UFunction* pFnUpdateEnemyRange = NULL;

	if ( ! pFnUpdateEnemyRange )
		pFnUpdateEnemyRange = (UFunction*) UObject::GObjObjects()->Data[ 48469 ];

	ABaseAIController_execUpdateEnemyRange_Parms UpdateEnemyRange_Parms;

	pFnUpdateEnemyRange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateEnemyRange, &UpdateEnemyRange_Parms, NULL );

	pFnUpdateEnemyRange->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIController.PawnDied
// [0x00020002] 
// Parameters infos:

void ABaseAIController::PawnDied ( )
{
	static UFunction* pFnPawnDied = NULL;

	if ( ! pFnPawnDied )
		pFnPawnDied = (UFunction*) UObject::GObjObjects()->Data[ 48467 ];

	ABaseAIController_execPawnDied_Parms PawnDied_Parms;

	this->ProcessEvent ( pFnPawnDied, &PawnDied_Parms, NULL );
};

// Function BaseAI.BaseAIController.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ABaseAIController::eventPossess ( )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 48464 ];

	ABaseAIController_eventPossess_Parms Possess_Parms;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function BaseAI.BaseAIController.InitializeAIClass
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ABaseAIController::eventInitializeAIClass ( )
{
	static UFunction* pFnInitializeAIClass = NULL;

	if ( ! pFnInitializeAIClass )
		pFnInitializeAIClass = (UFunction*) UObject::GObjObjects()->Data[ 48463 ];

	ABaseAIController_eventInitializeAIClass_Parms InitializeAIClass_Parms;

	this->ProcessEvent ( pFnInitializeAIClass, &InitializeAIClass_Parms, NULL );
};

// Function BaseAI.BaseAIPawn.DrawCrumbs
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAIPawn::DrawCrumbs ( )
{
	static UFunction* pFnDrawCrumbs = NULL;

	if ( ! pFnDrawCrumbs )
		pFnDrawCrumbs = (UFunction*) UObject::GObjObjects()->Data[ 48546 ];

	ABaseAIPawn_execDrawCrumbs_Parms DrawCrumbs_Parms;

	pFnDrawCrumbs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawCrumbs, &DrawCrumbs_Parms, NULL );

	pFnDrawCrumbs->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIPawn.RemoveAttacker
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAIPawn::RemoveAttacker ( )
{
	static UFunction* pFnRemoveAttacker = NULL;

	if ( ! pFnRemoveAttacker )
		pFnRemoveAttacker = (UFunction*) UObject::GObjObjects()->Data[ 48544 ];

	ABaseAIPawn_execRemoveAttacker_Parms RemoveAttacker_Parms;

	pFnRemoveAttacker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveAttacker, &RemoveAttacker_Parms, NULL );

	pFnRemoveAttacker->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIPawn.GetAttackerCount
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAIPawn::GetAttackerCount ( )
{
	static UFunction* pFnGetAttackerCount = NULL;

	if ( ! pFnGetAttackerCount )
		pFnGetAttackerCount = (UFunction*) UObject::GObjObjects()->Data[ 48541 ];

	ABaseAIPawn_execGetAttackerCount_Parms GetAttackerCount_Parms;

	pFnGetAttackerCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAttackerCount, &GetAttackerCount_Parms, NULL );

	pFnGetAttackerCount->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAIPawn.NotifyTeamChanged
// [0x00020102] 
// Parameters infos:

void ABaseAIPawn::NotifyTeamChanged ( )
{
	static UFunction* pFnNotifyTeamChanged = NULL;

	if ( ! pFnNotifyTeamChanged )
		pFnNotifyTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 48540 ];

	ABaseAIPawn_execNotifyTeamChanged_Parms NotifyTeamChanged_Parms;

	this->ProcessEvent ( pFnNotifyTeamChanged, &NotifyTeamChanged_Parms, NULL );
};

// Function BaseAI.BaseAIPawn.UnPossessed
// [0x00020002] 
// Parameters infos:

void ABaseAIPawn::UnPossessed ( )
{
	static UFunction* pFnUnPossessed = NULL;

	if ( ! pFnUnPossessed )
		pFnUnPossessed = (UFunction*) UObject::GObjObjects()->Data[ 48539 ];

	ABaseAIPawn_execUnPossessed_Parms UnPossessed_Parms;

	this->ProcessEvent ( pFnUnPossessed, &UnPossessed_Parms, NULL );
};

// Function BaseAI.BaseAIPawn.PossessedBy
// [0x00020002] 
// Parameters infos:

void ABaseAIPawn::PossessedBy ( )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 48536 ];

	ABaseAIPawn_execPossessedBy_Parms PossessedBy_Parms;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function BaseAI.BaseAIPawn.Died
// [0x00020002] 
// Parameters infos:

void ABaseAIPawn::Died ( )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 48531 ];

	ABaseAIPawn_execDied_Parms Died_Parms;

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );
};

// Function BaseAI.BaseAISquad.UpdateEnemySelection
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAISquad::UpdateEnemySelection ( )
{
	static UFunction* pFnUpdateEnemySelection = NULL;

	if ( ! pFnUpdateEnemySelection )
		pFnUpdateEnemySelection = (UFunction*) UObject::GObjObjects()->Data[ 48591 ];

	ABaseAISquad_execUpdateEnemySelection_Parms UpdateEnemySelection_Parms;

	pFnUpdateEnemySelection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateEnemySelection, &UpdateEnemySelection_Parms, NULL );

	pFnUpdateEnemySelection->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISquad.GetSquadCenterPawn
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAISquad::GetSquadCenterPawn ( )
{
	static UFunction* pFnGetSquadCenterPawn = NULL;

	if ( ! pFnGetSquadCenterPawn )
		pFnGetSquadCenterPawn = (UFunction*) UObject::GObjObjects()->Data[ 48589 ];

	ABaseAISquad_execGetSquadCenterPawn_Parms GetSquadCenterPawn_Parms;

	pFnGetSquadCenterPawn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSquadCenterPawn, &GetSquadCenterPawn_Parms, NULL );

	pFnGetSquadCenterPawn->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISquad.GetSquadMembers
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void ABaseAISquad::GetSquadMembers ( )
{
	static UFunction* pFnGetSquadMembers = NULL;

	if ( ! pFnGetSquadMembers )
		pFnGetSquadMembers = (UFunction*) UObject::GObjObjects()->Data[ 48585 ];

	ABaseAISquad_execGetSquadMembers_Parms GetSquadMembers_Parms;

	pFnGetSquadMembers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSquadMembers, &GetSquadMembers_Parms, NULL );

	pFnGetSquadMembers->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISquad.GetSquadMemberCount
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAISquad::GetSquadMemberCount ( )
{
	static UFunction* pFnGetSquadMemberCount = NULL;

	if ( ! pFnGetSquadMemberCount )
		pFnGetSquadMemberCount = (UFunction*) UObject::GObjObjects()->Data[ 48583 ];

	ABaseAISquad_execGetSquadMemberCount_Parms GetSquadMemberCount_Parms;

	pFnGetSquadMemberCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSquadMemberCount, &GetSquadMemberCount_Parms, NULL );

	pFnGetSquadMemberCount->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISquad.UpdateLeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAISquad::UpdateLeader ( )
{
	static UFunction* pFnUpdateLeader = NULL;

	if ( ! pFnUpdateLeader )
		pFnUpdateLeader = (UFunction*) UObject::GObjObjects()->Data[ 48581 ];

	ABaseAISquad_execUpdateLeader_Parms UpdateLeader_Parms;

	pFnUpdateLeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateLeader, &UpdateLeader_Parms, NULL );

	pFnUpdateLeader->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISquad.EnemyPerceivedBy
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void ABaseAISquad::EnemyPerceivedBy ( )
{
	static UFunction* pFnEnemyPerceivedBy = NULL;

	if ( ! pFnEnemyPerceivedBy )
		pFnEnemyPerceivedBy = (UFunction*) UObject::GObjObjects()->Data[ 48577 ];

	ABaseAISquad_execEnemyPerceivedBy_Parms EnemyPerceivedBy_Parms;

	pFnEnemyPerceivedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnemyPerceivedBy, &EnemyPerceivedBy_Parms, NULL );

	pFnEnemyPerceivedBy->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISquad.NotifyKilled
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ABaseAISquad::NotifyKilled ( )
{
	static UFunction* pFnNotifyKilled = NULL;

	if ( ! pFnNotifyKilled )
		pFnNotifyKilled = (UFunction*) UObject::GObjObjects()->Data[ 48571 ];

	ABaseAISquad_execNotifyKilled_Parms NotifyKilled_Parms;

	pFnNotifyKilled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyKilled, &NotifyKilled_Parms, NULL );

	pFnNotifyKilled->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISquad.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ABaseAISquad::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 48570 ];

	ABaseAISquad_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function BaseAI.BaseAISquad.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ABaseAISquad::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 48569 ];

	ABaseAISquad_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function BaseAI.BaseAISubsystem.NotifyKilled
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::NotifyKilled ( )
{
	static UFunction* pFnNotifyKilled = NULL;

	if ( ! pFnNotifyKilled )
		pFnNotifyKilled = (UFunction*) UObject::GObjObjects()->Data[ 48617 ];

	UBaseAISubsystem_execNotifyKilled_Parms NotifyKilled_Parms;

	pFnNotifyKilled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyKilled, &NotifyKilled_Parms, NULL );

	pFnNotifyKilled->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.GetEnemyTeamsSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::GetEnemyTeamsSize ( )
{
	static UFunction* pFnGetEnemyTeamsSize = NULL;

	if ( ! pFnGetEnemyTeamsSize )
		pFnGetEnemyTeamsSize = (UFunction*) UObject::GObjObjects()->Data[ 48614 ];

	UBaseAISubsystem_execGetEnemyTeamsSize_Parms GetEnemyTeamsSize_Parms;

	pFnGetEnemyTeamsSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEnemyTeamsSize, &GetEnemyTeamsSize_Parms, NULL );

	pFnGetEnemyTeamsSize->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.GetTeamSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::GetTeamSize ( )
{
	static UFunction* pFnGetTeamSize = NULL;

	if ( ! pFnGetTeamSize )
		pFnGetTeamSize = (UFunction*) UObject::GObjObjects()->Data[ 48611 ];

	UBaseAISubsystem_execGetTeamSize_Parms GetTeamSize_Parms;

	pFnGetTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamSize, &GetTeamSize_Parms, NULL );

	pFnGetTeamSize->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.DecreaseTeamSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::DecreaseTeamSize ( )
{
	static UFunction* pFnDecreaseTeamSize = NULL;

	if ( ! pFnDecreaseTeamSize )
		pFnDecreaseTeamSize = (UFunction*) UObject::GObjObjects()->Data[ 48548 ];

	UBaseAISubsystem_execDecreaseTeamSize_Parms DecreaseTeamSize_Parms;

	pFnDecreaseTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDecreaseTeamSize, &DecreaseTeamSize_Parms, NULL );

	pFnDecreaseTeamSize->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.IncreaseTeamSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::IncreaseTeamSize ( )
{
	static UFunction* pFnIncreaseTeamSize = NULL;

	if ( ! pFnIncreaseTeamSize )
		pFnIncreaseTeamSize = (UFunction*) UObject::GObjObjects()->Data[ 48608 ];

	UBaseAISubsystem_execIncreaseTeamSize_Parms IncreaseTeamSize_Parms;

	pFnIncreaseTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIncreaseTeamSize, &IncreaseTeamSize_Parms, NULL );

	pFnIncreaseTeamSize->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.UnRegisterSquad
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::UnRegisterSquad ( )
{
	static UFunction* pFnUnRegisterSquad = NULL;

	if ( ! pFnUnRegisterSquad )
		pFnUnRegisterSquad = (UFunction*) UObject::GObjObjects()->Data[ 48593 ];

	UBaseAISubsystem_execUnRegisterSquad_Parms UnRegisterSquad_Parms;

	pFnUnRegisterSquad->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnRegisterSquad, &UnRegisterSquad_Parms, NULL );

	pFnUnRegisterSquad->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.RegisterSquad
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::RegisterSquad ( )
{
	static UFunction* pFnRegisterSquad = NULL;

	if ( ! pFnRegisterSquad )
		pFnRegisterSquad = (UFunction*) UObject::GObjObjects()->Data[ 48594 ];

	UBaseAISubsystem_execRegisterSquad_Parms RegisterSquad_Parms;

	pFnRegisterSquad->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterSquad, &RegisterSquad_Parms, NULL );

	pFnRegisterSquad->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.GetAIDebugTool
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::GetAIDebugTool ( )
{
	static UFunction* pFnGetAIDebugTool = NULL;

	if ( ! pFnGetAIDebugTool )
		pFnGetAIDebugTool = (UFunction*) UObject::GObjObjects()->Data[ 48604 ];

	UBaseAISubsystem_execGetAIDebugTool_Parms GetAIDebugTool_Parms;

	pFnGetAIDebugTool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAIDebugTool, &GetAIDebugTool_Parms, NULL );

	pFnGetAIDebugTool->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAISubsystem.GetInstance
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UBaseAISubsystem::GetInstance ( )
{
	static UFunction* pFnGetInstance = NULL;

	if ( ! pFnGetInstance )
		pFnGetInstance = (UFunction*) UObject::GObjObjects()->Data[ 48602 ];

	UBaseAISubsystem_execGetInstance_Parms GetInstance_Parms;

	pFnGetInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInstance, &GetInstance_Parms, NULL );

	pFnGetInstance->FunctionFlags |= 0x400;
};

// Function BaseAI.LatentActionObserver.OnLatentFinished
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ULatentActionObserver::OnLatentFinished ( )
{
	static UFunction* pFnOnLatentFinished = NULL;

	if ( ! pFnOnLatentFinished )
		pFnOnLatentFinished = (UFunction*) UObject::GObjObjects()->Data[ 48623 ];

	ULatentActionObserver_execOnLatentFinished_Parms OnLatentFinished_Parms;

	pFnOnLatentFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLatentFinished, &OnLatentFinished_Parms, NULL );

	pFnOnLatentFinished->FunctionFlags |= 0x400;
};

// Function BaseAI.BaseAiPlugInHistory.DrawDebugToHud
// [0x00820102] 
// Parameters infos:

void UBaseAiPlugInHistory::DrawDebugToHud ( )
{
	static UFunction* pFnDrawDebugToHud = NULL;

	if ( ! pFnDrawDebugToHud )
		pFnDrawDebugToHud = (UFunction*) UObject::GObjObjects()->Data[ 48556 ];

	UBaseAiPlugInHistory_execDrawDebugToHud_Parms DrawDebugToHud_Parms;

	this->ProcessEvent ( pFnDrawDebugToHud, &DrawDebugToHud_Parms, NULL );
};

// Function BaseAI.BaseAiPlugInHistory.Setup
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UBaseAiPlugInHistory::eventSetup ( )
{
	static UFunction* pFnSetup = NULL;

	if ( ! pFnSetup )
		pFnSetup = (UFunction*) UObject::GObjObjects()->Data[ 48553 ];

	UBaseAiPlugInHistory_eventSetup_Parms Setup_Parms;

	this->ProcessEvent ( pFnSetup, &Setup_Parms, NULL );
};

// Function BaseAI.PluginBase.GetDebugVerboseText
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UPluginBase::eventGetDebugVerboseText ( )
{
	static UFunction* pFnGetDebugVerboseText = NULL;

	if ( ! pFnGetDebugVerboseText )
		pFnGetDebugVerboseText = (UFunction*) UObject::GObjObjects()->Data[ 48152 ];

	UPluginBase_eventGetDebugVerboseText_Parms GetDebugVerboseText_Parms;

	this->ProcessEvent ( pFnGetDebugVerboseText, &GetDebugVerboseText_Parms, NULL );
};

// Function BaseAI.PluginBase.UpdateHistoryString
// [0x00020002] 
// Parameters infos:

void UPluginBase::UpdateHistoryString ( )
{
	static UFunction* pFnUpdateHistoryString = NULL;

	if ( ! pFnUpdateHistoryString )
		pFnUpdateHistoryString = (UFunction*) UObject::GObjObjects()->Data[ 48150 ];

	UPluginBase_execUpdateHistoryString_Parms UpdateHistoryString_Parms;

	this->ProcessEvent ( pFnUpdateHistoryString, &UpdateHistoryString_Parms, NULL );
};

// Function BaseAI.PluginBase.UpdateCommandHistory
// [0x00020002] 
// Parameters infos:

void UPluginBase::UpdateCommandHistory ( )
{
	static UFunction* pFnUpdateCommandHistory = NULL;

	if ( ! pFnUpdateCommandHistory )
		pFnUpdateCommandHistory = (UFunction*) UObject::GObjObjects()->Data[ 48148 ];

	UPluginBase_execUpdateCommandHistory_Parms UpdateCommandHistory_Parms;

	this->ProcessEvent ( pFnUpdateCommandHistory, &UpdateCommandHistory_Parms, NULL );
};

// Function BaseAI.PluginBase.DrawDebug
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UPluginBase::eventDrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 48145 ];

	UPluginBase_eventDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function BaseAI.PluginBase.ScriptInitialize
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UPluginBase::eventScriptInitialize ( )
{
	static UFunction* pFnScriptInitialize = NULL;

	if ( ! pFnScriptInitialize )
		pFnScriptInitialize = (UFunction*) UObject::GObjObjects()->Data[ 48144 ];

	UPluginBase_eventScriptInitialize_Parms ScriptInitialize_Parms;

	this->ProcessEvent ( pFnScriptInitialize, &ScriptInitialize_Parms, NULL );
};

// Function BaseAI.PluginBase.DrawDebugToHud
// [0x00020100] 
// Parameters infos:

void UPluginBase::DrawDebugToHud ( )
{
	static UFunction* pFnDrawDebugToHud = NULL;

	if ( ! pFnDrawDebugToHud )
		pFnDrawDebugToHud = (UFunction*) UObject::GObjObjects()->Data[ 48141 ];

	UPluginBase_execDrawDebugToHud_Parms DrawDebugToHud_Parms;

	this->ProcessEvent ( pFnDrawDebugToHud, &DrawDebugToHud_Parms, NULL );
};

// Function BaseAI.PluginBase.EnablePlugin
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPluginBase::EnablePlugin ( )
{
	static UFunction* pFnEnablePlugin = NULL;

	if ( ! pFnEnablePlugin )
		pFnEnablePlugin = (UFunction*) UObject::GObjObjects()->Data[ 48140 ];

	UPluginBase_execEnablePlugin_Parms EnablePlugin_Parms;

	pFnEnablePlugin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnablePlugin, &EnablePlugin_Parms, NULL );

	pFnEnablePlugin->FunctionFlags |= 0x400;
};

// Function BaseAI.PluginBase.DisablePlugin
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPluginBase::DisablePlugin ( )
{
	static UFunction* pFnDisablePlugin = NULL;

	if ( ! pFnDisablePlugin )
		pFnDisablePlugin = (UFunction*) UObject::GObjObjects()->Data[ 48139 ];

	UPluginBase_execDisablePlugin_Parms DisablePlugin_Parms;

	pFnDisablePlugin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisablePlugin, &DisablePlugin_Parms, NULL );

	pFnDisablePlugin->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPlugin.ScriptSetUp
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UAIPlugin::eventScriptSetUp ( )
{
	static UFunction* pFnScriptSetUp = NULL;

	if ( ! pFnScriptSetUp )
		pFnScriptSetUp = (UFunction*) UObject::GObjObjects()->Data[ 48171 ];

	UAIPlugin_eventScriptSetUp_Parms ScriptSetUp_Parms;

	this->ProcessEvent ( pFnScriptSetUp, &ScriptSetUp_Parms, NULL );
};

// Function BaseAI.AITickablePlugin.NotifyNpcInGrannyMode
// [0x00020002] 
// Parameters infos:

void UAITickablePlugin::NotifyNpcInGrannyMode ( )
{
	static UFunction* pFnNotifyNpcInGrannyMode = NULL;

	if ( ! pFnNotifyNpcInGrannyMode )
		pFnNotifyNpcInGrannyMode = (UFunction*) UObject::GObjObjects()->Data[ 48189 ];

	UAITickablePlugin_execNotifyNpcInGrannyMode_Parms NotifyNpcInGrannyMode_Parms;

	this->ProcessEvent ( pFnNotifyNpcInGrannyMode, &NotifyNpcInGrannyMode_Parms, NULL );
};

// Function BaseAI.AITickablePlugin.NotifyNpcTerminallyStuck
// [0x00020002] 
// Parameters infos:

void UAITickablePlugin::NotifyNpcTerminallyStuck ( )
{
	static UFunction* pFnNotifyNpcTerminallyStuck = NULL;

	if ( ! pFnNotifyNpcTerminallyStuck )
		pFnNotifyNpcTerminallyStuck = (UFunction*) UObject::GObjObjects()->Data[ 48187 ];

	UAITickablePlugin_execNotifyNpcTerminallyStuck_Parms NotifyNpcTerminallyStuck_Parms;

	this->ProcessEvent ( pFnNotifyNpcTerminallyStuck, &NotifyNpcTerminallyStuck_Parms, NULL );
};

// Function BaseAI.AITickablePlugin.ScriptTick
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UAITickablePlugin::eventScriptTick ( )
{
	static UFunction* pFnScriptTick = NULL;

	if ( ! pFnScriptTick )
		pFnScriptTick = (UFunction*) UObject::GObjObjects()->Data[ 48185 ];

	UAITickablePlugin_eventScriptTick_Parms ScriptTick_Parms;

	this->ProcessEvent ( pFnScriptTick, &ScriptTick_Parms, NULL );
};

// Function BaseAI.AITickablePlugin.Sleep
// [0x00020409] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAITickablePlugin::Sleep ( )
{
	static UFunction* pFnSleep = NULL;

	if ( ! pFnSleep )
		pFnSleep = (UFunction*) UObject::GObjObjects()->Data[ 48183 ];

	UAITickablePlugin_execSleep_Parms Sleep_Parms;

	pFnSleep->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSleep, &Sleep_Parms, NULL );

	pFnSleep->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginLeap.NotifyLanded
// [0x00020000] 
// Parameters infos:

void UAIPluginLeap::NotifyLanded ( )
{
	static UFunction* pFnNotifyLanded = NULL;

	if ( ! pFnNotifyLanded )
		pFnNotifyLanded = (UFunction*) UObject::GObjObjects()->Data[ 48267 ];

	UAIPluginLeap_execNotifyLanded_Parms NotifyLanded_Parms;

	this->ProcessEvent ( pFnNotifyLanded, &NotifyLanded_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.GetJumpVelForUsingJumpDownNavPointPathObject
// [0x00420000] 
// Parameters infos:

void UAIPluginLeap::GetJumpVelForUsingJumpDownNavPointPathObject ( )
{
	static UFunction* pFnGetJumpVelForUsingJumpDownNavPointPathObject = NULL;

	if ( ! pFnGetJumpVelForUsingJumpDownNavPointPathObject )
		pFnGetJumpVelForUsingJumpDownNavPointPathObject = (UFunction*) UObject::GObjObjects()->Data[ 48248 ];

	UAIPluginLeap_execGetJumpVelForUsingJumpDownNavPointPathObject_Parms GetJumpVelForUsingJumpDownNavPointPathObject_Parms;

	this->ProcessEvent ( pFnGetJumpVelForUsingJumpDownNavPointPathObject, &GetJumpVelForUsingJumpDownNavPointPathObject_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.GetJumpVelForDropEdge
// [0x00420000] 
// Parameters infos:

void UAIPluginLeap::GetJumpVelForDropEdge ( )
{
	static UFunction* pFnGetJumpVelForDropEdge = NULL;

	if ( ! pFnGetJumpVelForDropEdge )
		pFnGetJumpVelForDropEdge = (UFunction*) UObject::GObjObjects()->Data[ 48245 ];

	UAIPluginLeap_execGetJumpVelForDropEdge_Parms GetJumpVelForDropEdge_Parms;

	this->ProcessEvent ( pFnGetJumpVelForDropEdge, &GetJumpVelForDropEdge_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.TurnMeOn
// [0x00020002] 
// Parameters infos:

void UAIPluginLeap::TurnMeOn ( )
{
	static UFunction* pFnTurnMeOn = NULL;

	if ( ! pFnTurnMeOn )
		pFnTurnMeOn = (UFunction*) UObject::GObjObjects()->Data[ 48244 ];

	UAIPluginLeap_execTurnMeOn_Parms TurnMeOn_Parms;

	this->ProcessEvent ( pFnTurnMeOn, &TurnMeOn_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.HasPercentOfZDiffBeenCovered
// [0x00020000] 
// Parameters infos:

void UAIPluginLeap::HasPercentOfZDiffBeenCovered ( )
{
	static UFunction* pFnHasPercentOfZDiffBeenCovered = NULL;

	if ( ! pFnHasPercentOfZDiffBeenCovered )
		pFnHasPercentOfZDiffBeenCovered = (UFunction*) UObject::GObjObjects()->Data[ 48242 ];

	UAIPluginLeap_execHasPercentOfZDiffBeenCovered_Parms HasPercentOfZDiffBeenCovered_Parms;

	this->ProcessEvent ( pFnHasPercentOfZDiffBeenCovered, &HasPercentOfZDiffBeenCovered_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.TestForTimeToTurnCollisionBackOn
// [0x00020002] 
// Parameters infos:

void UAIPluginLeap::TestForTimeToTurnCollisionBackOn ( )
{
	static UFunction* pFnTestForTimeToTurnCollisionBackOn = NULL;

	if ( ! pFnTestForTimeToTurnCollisionBackOn )
		pFnTestForTimeToTurnCollisionBackOn = (UFunction*) UObject::GObjObjects()->Data[ 48240 ];

	UAIPluginLeap_execTestForTimeToTurnCollisionBackOn_Parms TestForTimeToTurnCollisionBackOn_Parms;

	this->ProcessEvent ( pFnTestForTimeToTurnCollisionBackOn, &TestForTimeToTurnCollisionBackOn_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.AbortMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UAIPluginLeap::AbortMove ( )
{
	static UFunction* pFnAbortMove = NULL;

	if ( ! pFnAbortMove )
		pFnAbortMove = (UFunction*) UObject::GObjObjects()->Data[ 48233 ];

	UAIPluginLeap_execAbortMove_Parms AbortMove_Parms;

	pFnAbortMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAbortMove, &AbortMove_Parms, NULL );

	pFnAbortMove->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginLeap.Failure
// [0x00080400] ( FUNC_Native )
// Parameters infos:

void UAIPluginLeap::Failure ( )
{
	static UFunction* pFnFailure = NULL;

	if ( ! pFnFailure )
		pFnFailure = (UFunction*) UObject::GObjObjects()->Data[ 48232 ];

	UAIPluginLeap_execFailure_Parms Failure_Parms;

	pFnFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFailure, &Failure_Parms, NULL );

	pFnFailure->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginLeap.Success
// [0x00080400] ( FUNC_Native )
// Parameters infos:

void UAIPluginLeap::Success ( )
{
	static UFunction* pFnSuccess = NULL;

	if ( ! pFnSuccess )
		pFnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 48231 ];

	UAIPluginLeap_execSuccess_Parms Success_Parms;

	pFnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSuccess, &Success_Parms, NULL );

	pFnSuccess->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginLeap.ScriptCleanUp
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAIPluginLeap::eventScriptCleanUp ( )
{
	static UFunction* pFnScriptCleanUp = NULL;

	if ( ! pFnScriptCleanUp )
		pFnScriptCleanUp = (UFunction*) UObject::GObjObjects()->Data[ 48230 ];

	UAIPluginLeap_eventScriptCleanUp_Parms ScriptCleanUp_Parms;

	this->ProcessEvent ( pFnScriptCleanUp, &ScriptCleanUp_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.ScriptCommonMovePreparation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAIPluginLeap::eventScriptCommonMovePreparation ( )
{
	static UFunction* pFnScriptCommonMovePreparation = NULL;

	if ( ! pFnScriptCommonMovePreparation )
		pFnScriptCommonMovePreparation = (UFunction*) UObject::GObjObjects()->Data[ 48227 ];

	UAIPluginLeap_eventScriptCommonMovePreparation_Parms ScriptCommonMovePreparation_Parms;

	this->ProcessEvent ( pFnScriptCommonMovePreparation, &ScriptCommonMovePreparation_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.GetDumpString
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UAIPluginLeap::eventGetDumpString ( )
{
	static UFunction* pFnGetDumpString = NULL;

	if ( ! pFnGetDumpString )
		pFnGetDumpString = (UFunction*) UObject::GObjObjects()->Data[ 48225 ];

	UAIPluginLeap_eventGetDumpString_Parms GetDumpString_Parms;

	this->ProcessEvent ( pFnGetDumpString, &GetDumpString_Parms, NULL );
};

// Function BaseAI.AIPluginLeap.Leap
// [0x00420002] 
// Parameters infos:

void UAIPluginLeap::Leap ( )
{
	static UFunction* pFnLeap = NULL;

	if ( ! pFnLeap )
		pFnLeap = (UFunction*) UObject::GObjObjects()->Data[ 48222 ];

	UAIPluginLeap_execLeap_Parms Leap_Parms;

	this->ProcessEvent ( pFnLeap, &Leap_Parms, NULL );
};

// Function BaseAI.AIPluginMovement.MoveUnreachable
// [0x00020002] 
// Parameters infos:

void UAIPluginMovement::MoveUnreachable ( )
{
	static UFunction* pFnMoveUnreachable = NULL;

	if ( ! pFnMoveUnreachable )
		pFnMoveUnreachable = (UFunction*) UObject::GObjObjects()->Data[ 48349 ];

	UAIPluginMovement_execMoveUnreachable_Parms MoveUnreachable_Parms;

	this->ProcessEvent ( pFnMoveUnreachable, &MoveUnreachable_Parms, NULL );
};

// Function BaseAI.AIPluginMovement.StopMovement
// [0x00020000] 
// Parameters infos:

void UAIPluginMovement::StopMovement ( )
{
	static UFunction* pFnStopMovement = NULL;

	if ( ! pFnStopMovement )
		pFnStopMovement = (UFunction*) UObject::GObjObjects()->Data[ 48348 ];

	UAIPluginMovement_execStopMovement_Parms StopMovement_Parms;

	this->ProcessEvent ( pFnStopMovement, &StopMovement_Parms, NULL );
};

// Function BaseAI.AIPluginMovement.GetDestinationType
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UAIPluginMovement::GetDestinationType ( )
{
	static UFunction* pFnGetDestinationType = NULL;

	if ( ! pFnGetDestinationType )
		pFnGetDestinationType = (UFunction*) UObject::GObjObjects()->Data[ 48346 ];

	UAIPluginMovement_execGetDestinationType_Parms GetDestinationType_Parms;

	this->ProcessEvent ( pFnGetDestinationType, &GetDestinationType_Parms, NULL );
};

// Function BaseAI.AIPluginMovement.GetDestination
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIPluginMovement::GetDestination ( )
{
	static UFunction* pFnGetDestination = NULL;

	if ( ! pFnGetDestination )
		pFnGetDestination = (UFunction*) UObject::GObjObjects()->Data[ 48343 ];

	UAIPluginMovement_execGetDestination_Parms GetDestination_Parms;

	pFnGetDestination->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDestination, &GetDestination_Parms, NULL );

	pFnGetDestination->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.RePath
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::RePath ( )
{
	static UFunction* pFnRePath = NULL;

	if ( ! pFnRePath )
		pFnRePath = (UFunction*) UObject::GObjObjects()->Data[ 48341 ];

	UAIPluginMovement_execRePath_Parms RePath_Parms;

	pFnRePath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRePath, &RePath_Parms, NULL );

	pFnRePath->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.Failure
// [0x00080400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::Failure ( )
{
	static UFunction* pFnFailure = NULL;

	if ( ! pFnFailure )
		pFnFailure = (UFunction*) UObject::GObjObjects()->Data[ 48340 ];

	UAIPluginMovement_execFailure_Parms Failure_Parms;

	pFnFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFailure, &Failure_Parms, NULL );

	pFnFailure->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.Success
// [0x00080400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::Success ( )
{
	static UFunction* pFnSuccess = NULL;

	if ( ! pFnSuccess )
		pFnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 48339 ];

	UAIPluginMovement_execSuccess_Parms Success_Parms;

	pFnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSuccess, &Success_Parms, NULL );

	pFnSuccess->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.SetMovementLock
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::SetMovementLock ( )
{
	static UFunction* pFnSetMovementLock = NULL;

	if ( ! pFnSetMovementLock )
		pFnSetMovementLock = (UFunction*) UObject::GObjObjects()->Data[ 48335 ];

	UAIPluginMovement_execSetMovementLock_Parms SetMovementLock_Parms;

	pFnSetMovementLock->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovementLock, &SetMovementLock_Parms, NULL );

	pFnSetMovementLock->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.AbortMove
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::AbortMove ( )
{
	static UFunction* pFnAbortMove = NULL;

	if ( ! pFnAbortMove )
		pFnAbortMove = (UFunction*) UObject::GObjObjects()->Data[ 48332 ];

	UAIPluginMovement_execAbortMove_Parms AbortMove_Parms;

	pFnAbortMove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAbortMove, &AbortMove_Parms, NULL );

	pFnAbortMove->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.FollowPlugInsPath
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::FollowPlugInsPath ( )
{
	static UFunction* pFnFollowPlugInsPath = NULL;

	if ( ! pFnFollowPlugInsPath )
		pFnFollowPlugInsPath = (UFunction*) UObject::GObjObjects()->Data[ 48324 ];

	UAIPluginMovement_execFollowPlugInsPath_Parms FollowPlugInsPath_Parms;

	pFnFollowPlugInsPath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFollowPlugInsPath, &FollowPlugInsPath_Parms, NULL );

	pFnFollowPlugInsPath->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.MoveToActorRequest
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::MoveToActorRequest ( )
{
	static UFunction* pFnMoveToActorRequest = NULL;

	if ( ! pFnMoveToActorRequest )
		pFnMoveToActorRequest = (UFunction*) UObject::GObjObjects()->Data[ 48312 ];

	UAIPluginMovement_execMoveToActorRequest_Parms MoveToActorRequest_Parms;

	pFnMoveToActorRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveToActorRequest, &MoveToActorRequest_Parms, NULL );

	pFnMoveToActorRequest->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.MoveToPointRequest
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::MoveToPointRequest ( )
{
	static UFunction* pFnMoveToPointRequest = NULL;

	if ( ! pFnMoveToPointRequest )
		pFnMoveToPointRequest = (UFunction*) UObject::GObjObjects()->Data[ 48303 ];

	UAIPluginMovement_execMoveToPointRequest_Parms MoveToPointRequest_Parms;

	pFnMoveToPointRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveToPointRequest, &MoveToPointRequest_Parms, NULL );

	pFnMoveToPointRequest->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginMovement.MoveToRequest
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UAIPluginMovement::MoveToRequest ( )
{
	static UFunction* pFnMoveToRequest = NULL;

	if ( ! pFnMoveToRequest )
		pFnMoveToRequest = (UFunction*) UObject::GObjObjects()->Data[ 48300 ];

	UAIPluginMovement_execMoveToRequest_Parms MoveToRequest_Parms;

	pFnMoveToRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMoveToRequest, &MoveToRequest_Parms, NULL );

	pFnMoveToRequest->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginStuckFix.MoveUnreachable
// [0x00020002] 
// Parameters infos:

void UAIPluginStuckFix::MoveUnreachable ( )
{
	static UFunction* pFnMoveUnreachable = NULL;

	if ( ! pFnMoveUnreachable )
		pFnMoveUnreachable = (UFunction*) UObject::GObjObjects()->Data[ 48420 ];

	UAIPluginStuckFix_execMoveUnreachable_Parms MoveUnreachable_Parms;

	this->ProcessEvent ( pFnMoveUnreachable, &MoveUnreachable_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.StopMovement
// [0x00020000] 
// Parameters infos:

void UAIPluginStuckFix::StopMovement ( )
{
	static UFunction* pFnStopMovement = NULL;

	if ( ! pFnStopMovement )
		pFnStopMovement = (UFunction*) UObject::GObjObjects()->Data[ 48419 ];

	UAIPluginStuckFix_execStopMovement_Parms StopMovement_Parms;

	this->ProcessEvent ( pFnStopMovement, &StopMovement_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.GetDestinationType
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UAIPluginStuckFix::GetDestinationType ( )
{
	static UFunction* pFnGetDestinationType = NULL;

	if ( ! pFnGetDestinationType )
		pFnGetDestinationType = (UFunction*) UObject::GObjObjects()->Data[ 48417 ];

	UAIPluginStuckFix_execGetDestinationType_Parms GetDestinationType_Parms;

	this->ProcessEvent ( pFnGetDestinationType, &GetDestinationType_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.GetDestination
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIPluginStuckFix::GetDestination ( )
{
	static UFunction* pFnGetDestination = NULL;

	if ( ! pFnGetDestination )
		pFnGetDestination = (UFunction*) UObject::GObjObjects()->Data[ 48414 ];

	UAIPluginStuckFix_execGetDestination_Parms GetDestination_Parms;

	pFnGetDestination->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDestination, &GetDestination_Parms, NULL );

	pFnGetDestination->FunctionFlags |= 0x400;
};

// Function BaseAI.AIPluginStuckFix.Failure
// [0x00080000] 
// Parameters infos:

void UAIPluginStuckFix::Failure ( )
{
	static UFunction* pFnFailure = NULL;

	if ( ! pFnFailure )
		pFnFailure = (UFunction*) UObject::GObjObjects()->Data[ 48413 ];

	UAIPluginStuckFix_execFailure_Parms Failure_Parms;

	this->ProcessEvent ( pFnFailure, &Failure_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.Success
// [0x00080000] 
// Parameters infos:

void UAIPluginStuckFix::Success ( )
{
	static UFunction* pFnSuccess = NULL;

	if ( ! pFnSuccess )
		pFnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 48412 ];

	UAIPluginStuckFix_execSuccess_Parms Success_Parms;

	this->ProcessEvent ( pFnSuccess, &Success_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.SetMovementLock
// [0x00024000] 
// Parameters infos:

void UAIPluginStuckFix::SetMovementLock ( )
{
	static UFunction* pFnSetMovementLock = NULL;

	if ( ! pFnSetMovementLock )
		pFnSetMovementLock = (UFunction*) UObject::GObjObjects()->Data[ 48408 ];

	UAIPluginStuckFix_execSetMovementLock_Parms SetMovementLock_Parms;

	this->ProcessEvent ( pFnSetMovementLock, &SetMovementLock_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.AbortMove
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UAIPluginStuckFix::eventAbortMove ( )
{
	static UFunction* pFnAbortMove = NULL;

	if ( ! pFnAbortMove )
		pFnAbortMove = (UFunction*) UObject::GObjObjects()->Data[ 48405 ];

	UAIPluginStuckFix_eventAbortMove_Parms AbortMove_Parms;

	this->ProcessEvent ( pFnAbortMove, &AbortMove_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.StuckFixToActorRequest
// [0x00024000] 
// Parameters infos:

void UAIPluginStuckFix::StuckFixToActorRequest ( )
{
	static UFunction* pFnStuckFixToActorRequest = NULL;

	if ( ! pFnStuckFixToActorRequest )
		pFnStuckFixToActorRequest = (UFunction*) UObject::GObjObjects()->Data[ 48393 ];

	UAIPluginStuckFix_execStuckFixToActorRequest_Parms StuckFixToActorRequest_Parms;

	this->ProcessEvent ( pFnStuckFixToActorRequest, &StuckFixToActorRequest_Parms, NULL );
};

// Function BaseAI.AIPluginStuckFix.StuckFixToPointRequest
// [0x00024000] 
// Parameters infos:

void UAIPluginStuckFix::StuckFixToPointRequest ( )
{
	static UFunction* pFnStuckFixToPointRequest = NULL;

	if ( ! pFnStuckFixToPointRequest )
		pFnStuckFixToPointRequest = (UFunction*) UObject::GObjObjects()->Data[ 48384 ];

	UAIPluginStuckFix_execStuckFixToPointRequest_Parms StuckFixToPointRequest_Parms;

	this->ProcessEvent ( pFnStuckFixToPointRequest, &StuckFixToPointRequest_Parms, NULL );
};

// Function BaseAI.PluginSquad.EnemyPerceived
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPluginSquad::EnemyPerceived ( )
{
	static UFunction* pFnEnemyPerceived = NULL;

	if ( ! pFnEnemyPerceived )
		pFnEnemyPerceived = (UFunction*) UObject::GObjObjects()->Data[ 48674 ];

	UPluginSquad_execEnemyPerceived_Parms EnemyPerceived_Parms;

	pFnEnemyPerceived->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnemyPerceived, &EnemyPerceived_Parms, NULL );

	pFnEnemyPerceived->FunctionFlags |= 0x400;
};

// Function BaseAI.PlayerInputRecorder.StopReplay
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPlayerInputRecorder::StopReplay ( )
{
	static UFunction* pFnStopReplay = NULL;

	if ( ! pFnStopReplay )
		pFnStopReplay = (UFunction*) UObject::GObjObjects()->Data[ 48670 ];

	UPlayerInputRecorder_execStopReplay_Parms StopReplay_Parms;

	pFnStopReplay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopReplay, &StopReplay_Parms, NULL );

	pFnStopReplay->FunctionFlags |= 0x400;
};

// Function BaseAI.PlayerInputRecorder.Replay
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPlayerInputRecorder::Replay ( )
{
	static UFunction* pFnReplay = NULL;

	if ( ! pFnReplay )
		pFnReplay = (UFunction*) UObject::GObjObjects()->Data[ 48668 ];

	UPlayerInputRecorder_execReplay_Parms Replay_Parms;

	pFnReplay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReplay, &Replay_Parms, NULL );

	pFnReplay->FunctionFlags |= 0x400;
};

// Function BaseAI.PlayerInputRecorder.StopRecording
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPlayerInputRecorder::StopRecording ( )
{
	static UFunction* pFnStopRecording = NULL;

	if ( ! pFnStopRecording )
		pFnStopRecording = (UFunction*) UObject::GObjObjects()->Data[ 48667 ];

	UPlayerInputRecorder_execStopRecording_Parms StopRecording_Parms;

	pFnStopRecording->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopRecording, &StopRecording_Parms, NULL );

	pFnStopRecording->FunctionFlags |= 0x400;
};

// Function BaseAI.PlayerInputRecorder.StartRecording
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPlayerInputRecorder::StartRecording ( )
{
	static UFunction* pFnStartRecording = NULL;

	if ( ! pFnStartRecording )
		pFnStartRecording = (UFunction*) UObject::GObjObjects()->Data[ 48665 ];

	UPlayerInputRecorder_execStartRecording_Parms StartRecording_Parms;

	pFnStartRecording->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartRecording, &StartRecording_Parms, NULL );

	pFnStartRecording->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.DumpNativeCallStack
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::DumpNativeCallStack ( )
{
	static UFunction* pFnDumpNativeCallStack = NULL;

	if ( ! pFnDumpNativeCallStack )
		pFnDumpNativeCallStack = (UFunction*) UObject::GObjObjects()->Data[ 48109 ];

	UAIDebugTool_execDumpNativeCallStack_Parms DumpNativeCallStack_Parms;

	pFnDumpNativeCallStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDumpNativeCallStack, &DumpNativeCallStack_Parms, NULL );

	pFnDumpNativeCallStack->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.GetActorEntryLocation
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::GetActorEntryLocation ( )
{
	static UFunction* pFnGetActorEntryLocation = NULL;

	if ( ! pFnGetActorEntryLocation )
		pFnGetActorEntryLocation = (UFunction*) UObject::GObjObjects()->Data[ 48105 ];

	UAIDebugTool_execGetActorEntryLocation_Parms GetActorEntryLocation_Parms;

	pFnGetActorEntryLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActorEntryLocation, &GetActorEntryLocation_Parms, NULL );

	pFnGetActorEntryLocation->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.AddBTLogEntry
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::AddBTLogEntry ( )
{
	static UFunction* pFnAddBTLogEntry = NULL;

	if ( ! pFnAddBTLogEntry )
		pFnAddBTLogEntry = (UFunction*) UObject::GObjObjects()->Data[ 48103 ];

	UAIDebugTool_execAddBTLogEntry_Parms AddBTLogEntry_Parms;

	pFnAddBTLogEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddBTLogEntry, &AddBTLogEntry_Parms, NULL );

	pFnAddBTLogEntry->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.FlushETQHistory
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::FlushETQHistory ( )
{
	static UFunction* pFnFlushETQHistory = NULL;

	if ( ! pFnFlushETQHistory )
		pFnFlushETQHistory = (UFunction*) UObject::GObjObjects()->Data[ 48102 ];

	UAIDebugTool_execFlushETQHistory_Parms FlushETQHistory_Parms;

	pFnFlushETQHistory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushETQHistory, &FlushETQHistory_Parms, NULL );

	pFnFlushETQHistory->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.AddETQLog
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::AddETQLog ( )
{
	static UFunction* pFnAddETQLog = NULL;

	if ( ! pFnAddETQLog )
		pFnAddETQLog = (UFunction*) UObject::GObjObjects()->Data[ 48098 ];

	UAIDebugTool_execAddETQLog_Parms AddETQLog_Parms;

	pFnAddETQLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddETQLog, &AddETQLog_Parms, NULL );

	pFnAddETQLog->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.FlushUnreachableActors
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::FlushUnreachableActors ( )
{
	static UFunction* pFnFlushUnreachableActors = NULL;

	if ( ! pFnFlushUnreachableActors )
		pFnFlushUnreachableActors = (UFunction*) UObject::GObjObjects()->Data[ 48097 ];

	UAIDebugTool_execFlushUnreachableActors_Parms FlushUnreachableActors_Parms;

	pFnFlushUnreachableActors->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushUnreachableActors, &FlushUnreachableActors_Parms, NULL );

	pFnFlushUnreachableActors->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.LogUnreachableActor
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::LogUnreachableActor ( )
{
	static UFunction* pFnLogUnreachableActor = NULL;

	if ( ! pFnLogUnreachableActor )
		pFnLogUnreachableActor = (UFunction*) UObject::GObjObjects()->Data[ 48095 ];

	UAIDebugTool_execLogUnreachableActor_Parms LogUnreachableActor_Parms;

	pFnLogUnreachableActor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogUnreachableActor, &LogUnreachableActor_Parms, NULL );

	pFnLogUnreachableActor->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.ClearHistoryColor
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::ClearHistoryColor ( )
{
	static UFunction* pFnClearHistoryColor = NULL;

	if ( ! pFnClearHistoryColor )
		pFnClearHistoryColor = (UFunction*) UObject::GObjObjects()->Data[ 48094 ];

	UAIDebugTool_execClearHistoryColor_Parms ClearHistoryColor_Parms;

	pFnClearHistoryColor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearHistoryColor, &ClearHistoryColor_Parms, NULL );

	pFnClearHistoryColor->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.ColorHistory
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::ColorHistory ( )
{
	static UFunction* pFnColorHistory = NULL;

	if ( ! pFnColorHistory )
		pFnColorHistory = (UFunction*) UObject::GObjObjects()->Data[ 48092 ];

	UAIDebugTool_execColorHistory_Parms ColorHistory_Parms;

	pFnColorHistory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnColorHistory, &ColorHistory_Parms, NULL );

	pFnColorHistory->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.ClearHistoryFilter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::ClearHistoryFilter ( )
{
	static UFunction* pFnClearHistoryFilter = NULL;

	if ( ! pFnClearHistoryFilter )
		pFnClearHistoryFilter = (UFunction*) UObject::GObjObjects()->Data[ 48091 ];

	UAIDebugTool_execClearHistoryFilter_Parms ClearHistoryFilter_Parms;

	pFnClearHistoryFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearHistoryFilter, &ClearHistoryFilter_Parms, NULL );

	pFnClearHistoryFilter->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.SetHistoryFilter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::SetHistoryFilter ( )
{
	static UFunction* pFnSetHistoryFilter = NULL;

	if ( ! pFnSetHistoryFilter )
		pFnSetHistoryFilter = (UFunction*) UObject::GObjObjects()->Data[ 48088 ];

	UAIDebugTool_execSetHistoryFilter_Parms SetHistoryFilter_Parms;

	pFnSetHistoryFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHistoryFilter, &SetHistoryFilter_Parms, NULL );

	pFnSetHistoryFilter->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.ToggleLogDrawingMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::ToggleLogDrawingMode ( )
{
	static UFunction* pFnToggleLogDrawingMode = NULL;

	if ( ! pFnToggleLogDrawingMode )
		pFnToggleLogDrawingMode = (UFunction*) UObject::GObjObjects()->Data[ 48086 ];

	UAIDebugTool_execToggleLogDrawingMode_Parms ToggleLogDrawingMode_Parms;

	pFnToggleLogDrawingMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleLogDrawingMode, &ToggleLogDrawingMode_Parms, NULL );

	pFnToggleLogDrawingMode->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.DisplayNextEntry
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::DisplayNextEntry ( )
{
	static UFunction* pFnDisplayNextEntry = NULL;

	if ( ! pFnDisplayNextEntry )
		pFnDisplayNextEntry = (UFunction*) UObject::GObjObjects()->Data[ 48083 ];

	UAIDebugTool_execDisplayNextEntry_Parms DisplayNextEntry_Parms;

	pFnDisplayNextEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayNextEntry, &DisplayNextEntry_Parms, NULL );

	pFnDisplayNextEntry->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.SetContext
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::SetContext ( )
{
	static UFunction* pFnSetContext = NULL;

	if ( ! pFnSetContext )
		pFnSetContext = (UFunction*) UObject::GObjObjects()->Data[ 48081 ];

	UAIDebugTool_execSetContext_Parms SetContext_Parms;

	pFnSetContext->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContext, &SetContext_Parms, NULL );

	pFnSetContext->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.LogSpaceLine
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::LogSpaceLine ( )
{
	static UFunction* pFnLogSpaceLine = NULL;

	if ( ! pFnLogSpaceLine )
		pFnLogSpaceLine = (UFunction*) UObject::GObjObjects()->Data[ 48074 ];

	UAIDebugTool_execLogSpaceLine_Parms LogSpaceLine_Parms;

	pFnLogSpaceLine->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogSpaceLine, &LogSpaceLine_Parms, NULL );

	pFnLogSpaceLine->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.Log
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::Log ( )
{
	static UFunction* pFnLog = NULL;

	if ( ! pFnLog )
		pFnLog = (UFunction*) UObject::GObjObjects()->Data[ 48070 ];

	UAIDebugTool_execLog_Parms Log_Parms;

	pFnLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLog, &Log_Parms, NULL );

	pFnLog->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.SetDebugTarget
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::SetDebugTarget ( )
{
	static UFunction* pFnSetDebugTarget = NULL;

	if ( ! pFnSetDebugTarget )
		pFnSetDebugTarget = (UFunction*) UObject::GObjObjects()->Data[ 48068 ];

	UAIDebugTool_execSetDebugTarget_Parms SetDebugTarget_Parms;

	pFnSetDebugTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDebugTarget, &SetDebugTarget_Parms, NULL );

	pFnSetDebugTarget->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.FlushLogs
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::FlushLogs ( )
{
	static UFunction* pFnFlushLogs = NULL;

	if ( ! pFnFlushLogs )
		pFnFlushLogs = (UFunction*) UObject::GObjObjects()->Data[ 48065 ];

	UAIDebugTool_execFlushLogs_Parms FlushLogs_Parms;

	pFnFlushLogs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushLogs, &FlushLogs_Parms, NULL );

	pFnFlushLogs->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.LoadLogFile
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::LoadLogFile ( )
{
	static UFunction* pFnLoadLogFile = NULL;

	if ( ! pFnLoadLogFile )
		pFnLoadLogFile = (UFunction*) UObject::GObjObjects()->Data[ 48061 ];

	UAIDebugTool_execLoadLogFile_Parms LoadLogFile_Parms;

	pFnLoadLogFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadLogFile, &LoadLogFile_Parms, NULL );

	pFnLoadLogFile->FunctionFlags |= 0x400;
};

// Function BaseAI.AIDebugTool.DrawLog
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UAIDebugTool::DrawLog ( )
{
	static UFunction* pFnDrawLog = NULL;

	if ( ! pFnDrawLog )
		pFnDrawLog = (UFunction*) UObject::GObjObjects()->Data[ 48058 ];

	UAIDebugTool_execDrawLog_Parms DrawLog_Parms;

	pFnDrawLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawLog, &DrawLog_Parms, NULL );

	pFnDrawLog->FunctionFlags |= 0x400;
};

// Function BaseAI.PlugInOwnerInterface.GetTimeSince
// [0x00020000] 
// Parameters infos:

void UPlugInOwnerInterface::GetTimeSince ( )
{
	static UFunction* pFnGetTimeSince = NULL;

	if ( ! pFnGetTimeSince )
		pFnGetTimeSince = (UFunction*) UObject::GObjObjects()->Data[ 48165 ];

	UPlugInOwnerInterface_execGetTimeSince_Parms GetTimeSince_Parms;

	this->ProcessEvent ( pFnGetTimeSince, &GetTimeSince_Parms, NULL );
};

// Function BaseAI.PlugInOwnerInterface.GetAiPlugInHistory
// [0x00020000] 
// Parameters infos:

void UPlugInOwnerInterface::GetAiPlugInHistory ( )
{
	static UFunction* pFnGetAiPlugInHistory = NULL;

	if ( ! pFnGetAiPlugInHistory )
		pFnGetAiPlugInHistory = (UFunction*) UObject::GObjObjects()->Data[ 48155 ];

	UPlugInOwnerInterface_execGetAiPlugInHistory_Parms GetAiPlugInHistory_Parms;

	this->ProcessEvent ( pFnGetAiPlugInHistory, &GetAiPlugInHistory_Parms, NULL );
};

// Function BaseAI.NavigationPath.DrawPath
// [0x00024001] ( FUNC_Final )
// Parameters infos:

void UNavigationPath::DrawPath ( )
{
	static UFunction* pFnDrawPath = NULL;

	if ( ! pFnDrawPath )
		pFnDrawPath = (UFunction*) UObject::GObjObjects()->Data[ 48658 ];

	UNavigationPath_execDrawPath_Parms DrawPath_Parms;

	this->ProcessEvent ( pFnDrawPath, &DrawPath_Parms, NULL );
};

// Function BaseAI.NavigationPath.WorldToLocal
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void UNavigationPath::WorldToLocal ( )
{
	static UFunction* pFnWorldToLocal = NULL;

	if ( ! pFnWorldToLocal )
		pFnWorldToLocal = (UFunction*) UObject::GObjObjects()->Data[ 48655 ];

	UNavigationPath_execWorldToLocal_Parms WorldToLocal_Parms;

	this->ProcessEvent ( pFnWorldToLocal, &WorldToLocal_Parms, NULL );
};

// Function BaseAI.NavigationPath.SetRoute
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void UNavigationPath::SetRoute ( )
{
	static UFunction* pFnSetRoute = NULL;

	if ( ! pFnSetRoute )
		pFnSetRoute = (UFunction*) UObject::GObjObjects()->Data[ 48652 ];

	UNavigationPath_execSetRoute_Parms SetRoute_Parms;

	this->ProcessEvent ( pFnSetRoute, &SetRoute_Parms, NULL );
};

// Function BaseAI.NavigationPath.GetElementPos
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void UNavigationPath::GetElementPos ( )
{
	static UFunction* pFnGetElementPos = NULL;

	if ( ! pFnGetElementPos )
		pFnGetElementPos = (UFunction*) UObject::GObjObjects()->Data[ 48649 ];

	UNavigationPath_execGetElementPos_Parms GetElementPos_Parms;

	this->ProcessEvent ( pFnGetElementPos, &GetElementPos_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif