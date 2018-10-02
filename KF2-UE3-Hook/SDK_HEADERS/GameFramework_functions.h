/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void AGameAIController::eventGetActionString ( )
{
	static UFunction* pFnGetActionString = NULL;

	if ( ! pFnGetActionString )
		pFnGetActionString = (UFunction*) UObject::GObjObjects()->Data[ 42955 ];

	AGameAIController_eventGetActionString_Parms GetActionString_Parms;

	this->ProcessEvent ( pFnGetActionString, &GetActionString_Parms, NULL );
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] 
// Parameters infos:

void AGameAIController::SetDesiredRotation ( )
{
	static UFunction* pFnSetDesiredRotation = NULL;

	if ( ! pFnSetDesiredRotation )
		pFnSetDesiredRotation = (UFunction*) UObject::GObjObjects()->Data[ 42941 ];

	AGameAIController_execSetDesiredRotation_Parms SetDesiredRotation_Parms;

	this->ProcessEvent ( pFnSetDesiredRotation, &SetDesiredRotation_Parms, NULL );
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AGameAIController::eventAILog_Internal ( )
{
	static UFunction* pFnAILog_Internal = NULL;

	if ( ! pFnAILog_Internal )
		pFnAILog_Internal = (UFunction*) UObject::GObjObjects()->Data[ 42928 ];

	AGameAIController_eventAILog_Internal_Parms AILog_Internal_Parms;

	this->ProcessEvent ( pFnAILog_Internal, &AILog_Internal_Parms, NULL );
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] 
// Parameters infos:

void AGameAIController::RecordDemoAILog ( )
{
	static UFunction* pFnRecordDemoAILog = NULL;

	if ( ! pFnRecordDemoAILog )
		pFnRecordDemoAILog = (UFunction*) UObject::GObjObjects()->Data[ 42926 ];

	AGameAIController_execRecordDemoAILog_Parms RecordDemoAILog_Parms;

	this->ProcessEvent ( pFnRecordDemoAILog, &RecordDemoAILog_Parms, NULL );
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameAIController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42925 ];

	AGameAIController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// [0x00020000] 
// Parameters infos:

void AGameAIController::ReachedIntermediateMoveGoal ( )
{
	static UFunction* pFnReachedIntermediateMoveGoal = NULL;

	if ( ! pFnReachedIntermediateMoveGoal )
		pFnReachedIntermediateMoveGoal = (UFunction*) UObject::GObjObjects()->Data[ 42924 ];

	AGameAIController_execReachedIntermediateMoveGoal_Parms ReachedIntermediateMoveGoal_Parms;

	this->ProcessEvent ( pFnReachedIntermediateMoveGoal, &ReachedIntermediateMoveGoal_Parms, NULL );
};

// Function GameFramework.GameAIController.ReachedMoveGoal
// [0x00020000] 
// Parameters infos:

void AGameAIController::ReachedMoveGoal ( )
{
	static UFunction* pFnReachedMoveGoal = NULL;

	if ( ! pFnReachedMoveGoal )
		pFnReachedMoveGoal = (UFunction*) UObject::GObjObjects()->Data[ 42923 ];

	AGameAIController_execReachedMoveGoal_Parms ReachedMoveGoal_Parms;

	this->ProcessEvent ( pFnReachedMoveGoal, &ReachedMoveGoal_Parms, NULL );
};

// Function GameFramework.GameAIController.GetDestinationOffset
// [0x00020000] 
// Parameters infos:

void AGameAIController::GetDestinationOffset ( )
{
	static UFunction* pFnGetDestinationOffset = NULL;

	if ( ! pFnGetDestinationOffset )
		pFnGetDestinationOffset = (UFunction*) UObject::GObjObjects()->Data[ 42921 ];

	AGameAIController_execGetDestinationOffset_Parms GetDestinationOffset_Parms;

	this->ProcessEvent ( pFnGetDestinationOffset, &GetDestinationOffset_Parms, NULL );
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameAIController::GetAICommandInStack ( )
{
	static UFunction* pFnGetAICommandInStack = NULL;

	if ( ! pFnGetAICommandInStack )
		pFnGetAICommandInStack = (UFunction*) UObject::GObjObjects()->Data[ 42918 ];

	AGameAIController_execGetAICommandInStack_Parms GetAICommandInStack_Parms;

	pFnGetAICommandInStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAICommandInStack, &GetAICommandInStack_Parms, NULL );

	pFnGetAICommandInStack->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::FindCommandOfClass ( )
{
	static UFunction* pFnFindCommandOfClass = NULL;

	if ( ! pFnFindCommandOfClass )
		pFnFindCommandOfClass = (UFunction*) UObject::GObjObjects()->Data[ 42915 ];

	AGameAIController_execFindCommandOfClass_Parms FindCommandOfClass_Parms;

	pFnFindCommandOfClass->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindCommandOfClass, &FindCommandOfClass_Parms, NULL );

	pFnFindCommandOfClass->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::DumpCommandStack ( )
{
	static UFunction* pFnDumpCommandStack = NULL;

	if ( ! pFnDumpCommandStack )
		pFnDumpCommandStack = (UFunction*) UObject::GObjObjects()->Data[ 42914 ];

	AGameAIController_execDumpCommandStack_Parms DumpCommandStack_Parms;

	pFnDumpCommandStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDumpCommandStack, &DumpCommandStack_Parms, NULL );

	pFnDumpCommandStack->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::CheckCommandCount ( )
{
	static UFunction* pFnCheckCommandCount = NULL;

	if ( ! pFnCheckCommandCount )
		pFnCheckCommandCount = (UFunction*) UObject::GObjObjects()->Data[ 42913 ];

	AGameAIController_execCheckCommandCount_Parms CheckCommandCount_Parms;

	pFnCheckCommandCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckCommandCount, &CheckCommandCount_Parms, NULL );

	pFnCheckCommandCount->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::GetActiveCommand ( )
{
	static UFunction* pFnGetActiveCommand = NULL;

	if ( ! pFnGetActiveCommand )
		pFnGetActiveCommand = (UFunction*) UObject::GObjObjects()->Data[ 42911 ];

	AGameAIController_execGetActiveCommand_Parms GetActiveCommand_Parms;

	pFnGetActiveCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActiveCommand, &GetActiveCommand_Parms, NULL );

	pFnGetActiveCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void AGameAIController::AbortCommand ( )
{
	static UFunction* pFnAbortCommand = NULL;

	if ( ! pFnAbortCommand )
		pFnAbortCommand = (UFunction*) UObject::GObjObjects()->Data[ 42907 ];

	AGameAIController_execAbortCommand_Parms AbortCommand_Parms;

	pFnAbortCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAbortCommand, &AbortCommand_Parms, NULL );

	pFnAbortCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameAIController::PopCommand ( )
{
	static UFunction* pFnPopCommand = NULL;

	if ( ! pFnPopCommand )
		pFnPopCommand = (UFunction*) UObject::GObjObjects()->Data[ 42905 ];

	AGameAIController_execPopCommand_Parms PopCommand_Parms;

	pFnPopCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopCommand, &PopCommand_Parms, NULL );

	pFnPopCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameAIController::PushCommand ( )
{
	static UFunction* pFnPushCommand = NULL;

	if ( ! pFnPushCommand )
		pFnPushCommand = (UFunction*) UObject::GObjObjects()->Data[ 42903 ];

	AGameAIController_execPushCommand_Parms PushCommand_Parms;

	pFnPushCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushCommand, &PushCommand_Parms, NULL );

	pFnPushCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.AllCommands
// [0x00420405] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::AllCommands ( )
{
	static UFunction* pFnAllCommands = NULL;

	if ( ! pFnAllCommands )
		pFnAllCommands = (UFunction*) UObject::GObjObjects()->Data[ 42900 ];

	AGameAIController_execAllCommands_Parms AllCommands_Parms;

	pFnAllCommands->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAllCommands, &AllCommands_Parms, NULL );

	pFnAllCommands->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMeshWithoutBeingSeen ( )
{
	static UFunction* pFnReattachMeshWithoutBeingSeen = NULL;

	if ( ! pFnReattachMeshWithoutBeingSeen )
		pFnReattachMeshWithoutBeingSeen = (UFunction*) UObject::GObjObjects()->Data[ 43878 ];

	AGamePawn_execReattachMeshWithoutBeingSeen_Parms ReattachMeshWithoutBeingSeen_Parms;

	this->ProcessEvent ( pFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMesh ( )
{
	static UFunction* pFnReattachMesh = NULL;

	if ( ! pFnReattachMesh )
		pFnReattachMesh = (UFunction*) UObject::GObjObjects()->Data[ 43877 ];

	AGamePawn_execReattachMesh_Parms ReattachMesh_Parms;

	this->ProcessEvent ( pFnReattachMesh, &ReattachMesh_Parms, NULL );
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGamePawn::eventUpdateShadowSettings ( )
{
	static UFunction* pFnUpdateShadowSettings = NULL;

	if ( ! pFnUpdateShadowSettings )
		pFnUpdateShadowSettings = (UFunction*) UObject::GObjObjects()->Data[ 43873 ];

	AGamePawn_eventUpdateShadowSettings_Parms UpdateShadowSettings_Parms;

	this->ProcessEvent ( pFnUpdateShadowSettings, &UpdateShadowSettings_Parms, NULL );
};

// Function GameFramework.GameAICommand.HandlePathObstruction
// [0x00020002] 
// Parameters infos:

void UGameAICommand::HandlePathObstruction ( )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 42743 ];

	UGameAICommand_execHandlePathObstruction_Parms HandlePathObstruction_Parms;

	this->ProcessEvent ( pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );
};

// Function GameFramework.GameAICommand.MoveUnreachable
// [0x00020000] 
// Parameters infos:

void UGameAICommand::MoveUnreachable ( )
{
	static UFunction* pFnMoveUnreachable = NULL;

	if ( ! pFnMoveUnreachable )
		pFnMoveUnreachable = (UFunction*) UObject::GObjObjects()->Data[ 42739 ];

	UGameAICommand_execMoveUnreachable_Parms MoveUnreachable_Parms;

	this->ProcessEvent ( pFnMoveUnreachable, &MoveUnreachable_Parms, NULL );
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
// [0x00020000] 
// Parameters infos:

void UGameAICommand::NotifyNeedRepath ( )
{
	static UFunction* pFnNotifyNeedRepath = NULL;

	if ( ! pFnNotifyNeedRepath )
		pFnNotifyNeedRepath = (UFunction*) UObject::GObjObjects()->Data[ 42738 ];

	UGameAICommand_execNotifyNeedRepath_Parms NotifyNeedRepath_Parms;

	this->ProcessEvent ( pFnNotifyNeedRepath, &NotifyNeedRepath_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventGetDebugVerboseText ( )
{
	static UFunction* pFnGetDebugVerboseText = NULL;

	if ( ! pFnGetDebugVerboseText )
		pFnGetDebugVerboseText = (UFunction*) UObject::GObjObjects()->Data[ 42736 ];

	UGameAICommand_eventGetDebugVerboseText_Parms GetDebugVerboseText_Parms;

	this->ProcessEvent ( pFnGetDebugVerboseText, &GetDebugVerboseText_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] 
// Parameters infos:

void UGameAICommand::GetDebugOverheadText ( )
{
	static UFunction* pFnGetDebugOverheadText = NULL;

	if ( ! pFnGetDebugOverheadText )
		pFnGetDebugOverheadText = (UFunction*) UObject::GObjObjects()->Data[ 42732 ];

	UGameAICommand_execGetDebugOverheadText_Parms GetDebugOverheadText_Parms;

	this->ProcessEvent ( pFnGetDebugOverheadText, &GetDebugOverheadText_Parms, NULL );
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventDrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 42729 ];

	UGameAICommand_eventDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventGetDumpString ( )
{
	static UFunction* pFnGetDumpString = NULL;

	if ( ! pFnGetDumpString )
		pFnGetDumpString = (UFunction*) UObject::GObjObjects()->Data[ 42716 ];

	UGameAICommand_eventGetDumpString_Parms GetDumpString_Parms;

	this->ProcessEvent ( pFnGetDumpString, &GetDumpString_Parms, NULL );
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Resumed ( )
{
	static UFunction* pFnResumed = NULL;

	if ( ! pFnResumed )
		pFnResumed = (UFunction*) UObject::GObjObjects()->Data[ 42714 ];

	UGameAICommand_execResumed_Parms Resumed_Parms;

	this->ProcessEvent ( pFnResumed, &Resumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Paused ( )
{
	static UFunction* pFnPaused = NULL;

	if ( ! pFnPaused )
		pFnPaused = (UFunction*) UObject::GObjObjects()->Data[ 42712 ];

	UGameAICommand_execPaused_Parms Paused_Parms;

	this->ProcessEvent ( pFnPaused, &Paused_Parms, NULL );
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 42711 ];

	UGameAICommand_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 42710 ];

	UGameAICommand_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] 
// Parameters infos:

void UGameAICommand::PostPopped ( )
{
	static UFunction* pFnPostPopped = NULL;

	if ( ! pFnPostPopped )
		pFnPostPopped = (UFunction*) UObject::GObjObjects()->Data[ 42709 ];

	UGameAICommand_execPostPopped_Parms PostPopped_Parms;

	this->ProcessEvent ( pFnPostPopped, &PostPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] 
// Parameters infos:

void UGameAICommand::PrePushed ( )
{
	static UFunction* pFnPrePushed = NULL;

	if ( ! pFnPrePushed )
		pFnPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 42707 ];

	UGameAICommand_execPrePushed_Parms PrePushed_Parms;

	this->ProcessEvent ( pFnPrePushed, &PrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] 
// Parameters infos:

void UGameAICommand::AllowStateTransitionTo ( )
{
	static UFunction* pFnAllowStateTransitionTo = NULL;

	if ( ! pFnAllowStateTransitionTo )
		pFnAllowStateTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 42704 ];

	UGameAICommand_execAllowStateTransitionTo_Parms AllowStateTransitionTo_Parms;

	this->ProcessEvent ( pFnAllowStateTransitionTo, &AllowStateTransitionTo_Parms, NULL );
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] 
// Parameters infos:

void UGameAICommand::AllowTransitionTo ( )
{
	static UFunction* pFnAllowTransitionTo = NULL;

	if ( ! pFnAllowTransitionTo )
		pFnAllowTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 42701 ];

	UGameAICommand_execAllowTransitionTo_Parms AllowTransitionTo_Parms;

	this->ProcessEvent ( pFnAllowTransitionTo, &AllowTransitionTo_Parms, NULL );
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] 
// Parameters infos:

void UGameAICommand::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42699 ];

	UGameAICommand_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameAICommand::ShouldIgnoreNotifies ( )
{
	static UFunction* pFnShouldIgnoreNotifies = NULL;

	if ( ! pFnShouldIgnoreNotifies )
		pFnShouldIgnoreNotifies = (UFunction*) UObject::GObjObjects()->Data[ 42697 ];

	UGameAICommand_execShouldIgnoreNotifies_Parms ShouldIgnoreNotifies_Parms;

	pFnShouldIgnoreNotifies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldIgnoreNotifies, &ShouldIgnoreNotifies_Parms, NULL );

	pFnShouldIgnoreNotifies->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalTick ( )
{
	static UFunction* pFnInternalTick = NULL;

	if ( ! pFnInternalTick )
		pFnInternalTick = (UFunction*) UObject::GObjObjects()->Data[ 42695 ];

	UGameAICommand_eventInternalTick_Parms InternalTick_Parms;

	this->ProcessEvent ( pFnInternalTick, &InternalTick_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalResumed ( )
{
	static UFunction* pFnInternalResumed = NULL;

	if ( ! pFnInternalResumed )
		pFnInternalResumed = (UFunction*) UObject::GObjObjects()->Data[ 42693 ];

	UGameAICommand_eventInternalResumed_Parms InternalResumed_Parms;

	this->ProcessEvent ( pFnInternalResumed, &InternalResumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPaused ( )
{
	static UFunction* pFnInternalPaused = NULL;

	if ( ! pFnInternalPaused )
		pFnInternalPaused = (UFunction*) UObject::GObjObjects()->Data[ 42691 ];

	UGameAICommand_eventInternalPaused_Parms InternalPaused_Parms;

	this->ProcessEvent ( pFnInternalPaused, &InternalPaused_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPopped ( )
{
	static UFunction* pFnInternalPopped = NULL;

	if ( ! pFnInternalPopped )
		pFnInternalPopped = (UFunction*) UObject::GObjObjects()->Data[ 42690 ];

	UGameAICommand_eventInternalPopped_Parms InternalPopped_Parms;

	this->ProcessEvent ( pFnInternalPopped, &InternalPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPushed ( )
{
	static UFunction* pFnInternalPushed = NULL;

	if ( ! pFnInternalPushed )
		pFnInternalPushed = (UFunction*) UObject::GObjObjects()->Data[ 42689 ];

	UGameAICommand_eventInternalPushed_Parms InternalPushed_Parms;

	this->ProcessEvent ( pFnInternalPushed, &InternalPushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPrePushed ( )
{
	static UFunction* pFnInternalPrePushed = NULL;

	if ( ! pFnInternalPrePushed )
		pFnInternalPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 42687 ];

	UGameAICommand_eventInternalPrePushed_Parms InternalPrePushed_Parms;

	this->ProcessEvent ( pFnInternalPrePushed, &InternalPrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] 
// Parameters infos:

void UGameAICommand::InitCommand ( )
{
	static UFunction* pFnInitCommand = NULL;

	if ( ! pFnInitCommand )
		pFnInitCommand = (UFunction*) UObject::GObjObjects()->Data[ 42683 ];

	UGameAICommand_execInitCommand_Parms InitCommand_Parms;

	this->ProcessEvent ( pFnInitCommand, &InitCommand_Parms, NULL );
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] 
// Parameters infos:

void UGameAICommand::InitCommandUserActor ( )
{
	static UFunction* pFnInitCommandUserActor = NULL;

	if ( ! pFnInitCommandUserActor )
		pFnInitCommandUserActor = (UFunction*) UObject::GObjObjects()->Data[ 42679 ];

	UGameAICommand_execInitCommandUserActor_Parms InitCommandUserActor_Parms;

	this->ProcessEvent ( pFnInitCommandUserActor, &InitCommandUserActor_Parms, NULL );
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] 
// Parameters infos:

void AGamePlayerController::ClientColorFade ( )
{
	static UFunction* pFnClientColorFade = NULL;

	if ( ! pFnClientColorFade )
		pFnClientColorFade = (UFunction*) UObject::GObjObjects()->Data[ 42176 ];

	AGamePlayerController_execClientColorFade_Parms ClientColorFade_Parms;

	this->ProcessEvent ( pFnClientColorFade, &ClientColorFade_Parms, NULL );
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void AGamePlayerController::eventWarmupPause ( )
{
	static UFunction* pFnWarmupPause = NULL;

	if ( ! pFnWarmupPause )
		pFnWarmupPause = (UFunction*) UObject::GObjObjects()->Data[ 42171 ];

	AGamePlayerController_eventWarmupPause_Parms WarmupPause_Parms;

	this->ProcessEvent ( pFnWarmupPause, &WarmupPause_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] 
// Parameters infos:

void AGamePlayerController::CanUnpauseWarmup ( )
{
	static UFunction* pFnCanUnpauseWarmup = NULL;

	if ( ! pFnCanUnpauseWarmup )
		pFnCanUnpauseWarmup = (UFunction*) UObject::GObjObjects()->Data[ 42169 ];

	AGamePlayerController_execCanUnpauseWarmup_Parms CanUnpauseWarmup_Parms;

	this->ProcessEvent ( pFnCanUnpauseWarmup, &CanUnpauseWarmup_Parms, NULL );
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerController::GetCurrentMovie ( )
{
	static UFunction* pFnGetCurrentMovie = NULL;

	if ( ! pFnGetCurrentMovie )
		pFnGetCurrentMovie = (UFunction*) UObject::GObjObjects()->Data[ 42167 ];

	AGamePlayerController_execGetCurrentMovie_Parms GetCurrentMovie_Parms;

	pFnGetCurrentMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentMovie, &GetCurrentMovie_Parms, NULL );

	pFnGetCurrentMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:

void AGamePlayerController::eventClientStopMovie ( )
{
	static UFunction* pFnClientStopMovie = NULL;

	if ( ! pFnClientStopMovie )
		pFnClientStopMovie = (UFunction*) UObject::GObjObjects()->Data[ 42162 ];

	AGamePlayerController_eventClientStopMovie_Parms ClientStopMovie_Parms;

	pFnClientStopMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientStopMovie, &ClientStopMovie_Parms, NULL );

	pFnClientStopMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:

void AGamePlayerController::eventClientPlayMovie ( )
{
	static UFunction* pFnClientPlayMovie = NULL;

	if ( ! pFnClientPlayMovie )
		pFnClientPlayMovie = (UFunction*) UObject::GObjObjects()->Data[ 42155 ];

	AGamePlayerController_eventClientPlayMovie_Parms ClientPlayMovie_Parms;

	pFnClientPlayMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientPlayMovie, &ClientPlayMovie_Parms, NULL );

	pFnClientPlayMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerController::KeepPlayingLoadingMovie ( )
{
	static UFunction* pFnKeepPlayingLoadingMovie = NULL;

	if ( ! pFnKeepPlayingLoadingMovie )
		pFnKeepPlayingLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 42154 ];

	AGamePlayerController_execKeepPlayingLoadingMovie_Parms KeepPlayingLoadingMovie_Parms;

	pFnKeepPlayingLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Parms, NULL );

	pFnKeepPlayingLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerController::ShowLoadingMovie ( )
{
	static UFunction* pFnShowLoadingMovie = NULL;

	if ( ! pFnShowLoadingMovie )
		pFnShowLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 42148 ];

	AGamePlayerController_execShowLoadingMovie_Parms ShowLoadingMovie_Parms;

	pFnShowLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoadingMovie, &ShowLoadingMovie_Parms, NULL );

	pFnShowLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] 
// Parameters infos:

void AGamePlayerController::SetSoundMode ( )
{
	static UFunction* pFnSetSoundMode = NULL;

	if ( ! pFnSetSoundMode )
		pFnSetSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 42144 ];

	AGamePlayerController_execSetSoundMode_Parms SetSoundMode_Parms;

	this->ProcessEvent ( pFnSetSoundMode, &SetSoundMode_Parms, NULL );
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] 
// Parameters infos:

void AGamePlayerController::DoForceFeedbackForScreenShake ( )
{
	static UFunction* pFnDoForceFeedbackForScreenShake = NULL;

	if ( ! pFnDoForceFeedbackForScreenShake )
		pFnDoForceFeedbackForScreenShake = (UFunction*) UObject::GObjObjects()->Data[ 42137 ];

	AGamePlayerController_execDoForceFeedbackForScreenShake_Parms DoForceFeedbackForScreenShake_Parms;

	this->ProcessEvent ( pFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGamePlayerController::eventNotifyCrowdAgentInRadius ( )
{
	static UFunction* pFnNotifyCrowdAgentInRadius = NULL;

	if ( ! pFnNotifyCrowdAgentInRadius )
		pFnNotifyCrowdAgentInRadius = (UFunction*) UObject::GObjObjects()->Data[ 42135 ];

	AGamePlayerController_eventNotifyCrowdAgentInRadius_Parms NotifyCrowdAgentInRadius_Parms;

	this->ProcessEvent ( pFnNotifyCrowdAgentInRadius, &NotifyCrowdAgentInRadius_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGamePlayerController::eventNotifyCrowdAgentRefresh ( )
{
	static UFunction* pFnNotifyCrowdAgentRefresh = NULL;

	if ( ! pFnNotifyCrowdAgentRefresh )
		pFnNotifyCrowdAgentRefresh = (UFunction*) UObject::GObjObjects()->Data[ 42134 ];

	AGamePlayerController_eventNotifyCrowdAgentRefresh_Parms NotifyCrowdAgentRefresh_Parms;

	this->ProcessEvent ( pFnNotifyCrowdAgentRefresh, &NotifyCrowdAgentRefresh_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGamePlayerController::CrowdDebug ( )
{
	static UFunction* pFnCrowdDebug = NULL;

	if ( ! pFnCrowdDebug )
		pFnCrowdDebug = (UFunction*) UObject::GObjObjects()->Data[ 42128 ];

	AGamePlayerController_execCrowdDebug_Parms CrowdDebug_Parms;

	this->ProcessEvent ( pFnCrowdDebug, &CrowdDebug_Parms, NULL );
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGamePlayerController::GetUIPlayerIndex ( )
{
	static UFunction* pFnGetUIPlayerIndex = NULL;

	if ( ! pFnGetUIPlayerIndex )
		pFnGetUIPlayerIndex = (UFunction*) UObject::GObjObjects()->Data[ 42126 ];

	AGamePlayerController_execGetUIPlayerIndex_Parms GetUIPlayerIndex_Parms;

	pFnGetUIPlayerIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUIPlayerIndex, &GetUIPlayerIndex_Parms, NULL );

	pFnGetUIPlayerIndex->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// [0x00020002] 
// Parameters infos:

void AGamePlayerController::OnToggleMouseCursor ( )
{
	static UFunction* pFnOnToggleMouseCursor = NULL;

	if ( ! pFnOnToggleMouseCursor )
		pFnOnToggleMouseCursor = (UFunction*) UObject::GObjObjects()->Data[ 42123 ];

	AGamePlayerController_execOnToggleMouseCursor_Parms OnToggleMouseCursor_Parms;

	this->ProcessEvent ( pFnOnToggleMouseCursor, &OnToggleMouseCursor_Parms, NULL );
};

// Function GameFramework.GameCheatManager.OnRequestComplete
// [0x00020002] 
// Parameters infos:

void UGameCheatManager::OnRequestComplete ( )
{
	static UFunction* pFnOnRequestComplete = NULL;

	if ( ! pFnOnRequestComplete )
		pFnOnRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 43011 ];

	UGameCheatManager_execOnRequestComplete_Parms OnRequestComplete_Parms;

	this->ProcessEvent ( pFnOnRequestComplete, &OnRequestComplete_Parms, NULL );
};

// Function GameFramework.GameCheatManager.TestHttp
// [0x00024202] ( FUNC_Exec )
// Parameters infos:

void UGameCheatManager::TestHttp ( )
{
	static UFunction* pFnTestHttp = NULL;

	if ( ! pFnTestHttp )
		pFnTestHttp = (UFunction*) UObject::GObjObjects()->Data[ 43005 ];

	UGameCheatManager_execTestHttp_Parms TestHttp_Parms;

	this->ProcessEvent ( pFnTestHttp, &TestHttp_Parms, NULL );
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
// [0x00820002] 
// Parameters infos:

void UGameCheatManager::EnableDebugCamera ( )
{
	static UFunction* pFnEnableDebugCamera = NULL;

	if ( ! pFnEnableDebugCamera )
		pFnEnableDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 42999 ];

	UGameCheatManager_execEnableDebugCamera_Parms EnableDebugCamera_Parms;

	this->ProcessEvent ( pFnEnableDebugCamera, &EnableDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// [0x00824202] ( FUNC_Exec )
// Parameters infos:

void UGameCheatManager::TeleportPawnToCamera ( )
{
	static UFunction* pFnTeleportPawnToCamera = NULL;

	if ( ! pFnTeleportPawnToCamera )
		pFnTeleportPawnToCamera = (UFunction*) UObject::GObjObjects()->Data[ 42993 ];

	UGameCheatManager_execTeleportPawnToCamera_Parms TeleportPawnToCamera_Parms;

	this->ProcessEvent ( pFnTeleportPawnToCamera, &TeleportPawnToCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
// [0x00024202] ( FUNC_Exec )
// Parameters infos:

void UGameCheatManager::ToggleDebugCamera ( )
{
	static UFunction* pFnToggleDebugCamera = NULL;

	if ( ! pFnToggleDebugCamera )
		pFnToggleDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 42989 ];

	UGameCheatManager_execToggleDebugCamera_Parms ToggleDebugCamera_Parms;

	this->ProcessEvent ( pFnToggleDebugCamera, &ToggleDebugCamera_Parms, NULL );
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
// [0x00020002] 
// Parameters infos:

void UGameCheatManager::PatchDebugCameraController ( )
{
	static UFunction* pFnPatchDebugCameraController = NULL;

	if ( ! pFnPatchDebugCameraController )
		pFnPatchDebugCameraController = (UFunction*) UObject::GObjObjects()->Data[ 42987 ];

	UGameCheatManager_execPatchDebugCameraController_Parms PatchDebugCameraController_Parms;

	this->ProcessEvent ( pFnPatchDebugCameraController, &PatchDebugCameraController_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::InitDebugColor ( )
{
	static UFunction* pFnInitDebugColor = NULL;

	if ( ! pFnInitDebugColor )
		pFnInitDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 43254 ];

	AGameCrowdAgent_execInitDebugColor_Parms InitDebugColor_Parms;

	this->ProcessEvent ( pFnInitDebugColor, &InitDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 43251 ];

	AGameCrowdAgent_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::GetDestString ( )
{
	static UFunction* pFnGetDestString = NULL;

	if ( ! pFnGetDestString )
		pFnGetDestString = (UFunction*) UObject::GObjObjects()->Data[ 43248 ];

	AGameCrowdAgent_execGetDestString_Parms GetDestString_Parms;

	this->ProcessEvent ( pFnGetDestString, &GetDestString_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventPostRenderFor ( )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 43232 ];

	AGameCrowdAgent_eventPostRenderFor_Parms PostRenderFor_Parms;

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void AGameCrowdAgent::NativePostRenderFor ( )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 43227 ];

	AGameCrowdAgent_execNativePostRenderFor_Parms NativePostRenderFor_Parms;

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventGeneratePathToActor ( )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 43221 ];

	AGameCrowdAgent_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventInitNavigationHandle ( )
{
	static UFunction* pFnInitNavigationHandle = NULL;

	if ( ! pFnInitNavigationHandle )
		pFnInitNavigationHandle = (UFunction*) UObject::GObjObjects()->Data[ 43220 ];

	AGameCrowdAgent_eventInitNavigationHandle_Parms InitNavigationHandle_Parms;

	this->ProcessEvent ( pFnInitNavigationHandle, &InitNavigationHandle_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventOverlappedActorEvent ( )
{
	static UFunction* pFnOverlappedActorEvent = NULL;

	if ( ! pFnOverlappedActorEvent )
		pFnOverlappedActorEvent = (UFunction*) UObject::GObjObjects()->Data[ 43218 ];

	AGameCrowdAgent_eventOverlappedActorEvent_Parms OverlappedActorEvent_Parms;

	this->ProcessEvent ( pFnOverlappedActorEvent, &OverlappedActorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] 
// Parameters infos:

void AGameCrowdAgent::TakeDamage ( )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 43210 ];

	AGameCrowdAgent_execTakeDamage_Parms TakeDamage_Parms;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventFireDeathEvent ( )
{
	static UFunction* pFnFireDeathEvent = NULL;

	if ( ! pFnFireDeathEvent )
		pFnFireDeathEvent = (UFunction*) UObject::GObjObjects()->Data[ 43209 ];

	AGameCrowdAgent_eventFireDeathEvent_Parms FireDeathEvent_Parms;

	this->ProcessEvent ( pFnFireDeathEvent, &FireDeathEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdAgent::PlayDeath ( )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 43207 ];

	AGameCrowdAgent_execPlayDeath_Parms PlayDeath_Parms;

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventUpdateIntermediatePoint ( )
{
	static UFunction* pFnUpdateIntermediatePoint = NULL;

	if ( ! pFnUpdateIntermediatePoint )
		pFnUpdateIntermediatePoint = (UFunction*) UObject::GObjObjects()->Data[ 43205 ];

	AGameCrowdAgent_eventUpdateIntermediatePoint_Parms UpdateIntermediatePoint_Parms;

	this->ProcessEvent ( pFnUpdateIntermediatePoint, &UpdateIntermediatePoint_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] 
// Parameters infos:

void AGameCrowdAgent::CalcCamera ( )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 43197 ];

	AGameCrowdAgent_execCalcCamera_Parms CalcCamera_Parms;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdAgent::IsIdle ( )
{
	static UFunction* pFnIsIdle = NULL;

	if ( ! pFnIsIdle )
		pFnIsIdle = (UFunction*) UObject::GObjObjects()->Data[ 43195 ];

	AGameCrowdAgent_execIsIdle_Parms IsIdle_Parms;

	pFnIsIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsIdle, &IsIdle_Parms, NULL );

	pFnIsIdle->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameCrowdAgent::SetCurrentBehavior ( )
{
	static UFunction* pFnSetCurrentBehavior = NULL;

	if ( ! pFnSetCurrentBehavior )
		pFnSetCurrentBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43193 ];

	AGameCrowdAgent_execSetCurrentBehavior_Parms SetCurrentBehavior_Parms;

	pFnSetCurrentBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentBehavior, &SetCurrentBehavior_Parms, NULL );

	pFnSetCurrentBehavior->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43192 ];

	AGameCrowdAgent_eventStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventHandleBehaviorEvent ( )
{
	static UFunction* pFnHandleBehaviorEvent = NULL;

	if ( ! pFnHandleBehaviorEvent )
		pFnHandleBehaviorEvent = (UFunction*) UObject::GObjObjects()->Data[ 43186 ];

	AGameCrowdAgent_eventHandleBehaviorEvent_Parms HandleBehaviorEvent_Parms;

	this->ProcessEvent ( pFnHandleBehaviorEvent, &HandleBehaviorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ActivateInstancedBehavior ( )
{
	static UFunction* pFnActivateInstancedBehavior = NULL;

	if ( ! pFnActivateInstancedBehavior )
		pFnActivateInstancedBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43184 ];

	AGameCrowdAgent_execActivateInstancedBehavior_Parms ActivateInstancedBehavior_Parms;

	this->ProcessEvent ( pFnActivateInstancedBehavior, &ActivateInstancedBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00024802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventActivateBehavior ( )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43181 ];

	AGameCrowdAgent_eventActivateBehavior_Parms ActivateBehavior_Parms;

	this->ProcessEvent ( pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetSeePlayer ( )
{
	static UFunction* pFnResetSeePlayer = NULL;

	if ( ! pFnResetSeePlayer )
		pFnResetSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 43180 ];

	AGameCrowdAgent_execResetSeePlayer_Parms ResetSeePlayer_Parms;

	this->ProcessEvent ( pFnResetSeePlayer, &ResetSeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::TryRandomBehavior ( )
{
	static UFunction* pFnTryRandomBehavior = NULL;

	if ( ! pFnTryRandomBehavior )
		pFnTryRandomBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43177 ];

	AGameCrowdAgent_execTryRandomBehavior_Parms TryRandomBehavior_Parms;

	this->ProcessEvent ( pFnTryRandomBehavior, &TryRandomBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventNotifySeePlayer ( )
{
	static UFunction* pFnNotifySeePlayer = NULL;

	if ( ! pFnNotifySeePlayer )
		pFnNotifySeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 43173 ];

	AGameCrowdAgent_eventNotifySeePlayer_Parms NotifySeePlayer_Parms;

	this->ProcessEvent ( pFnNotifySeePlayer, &NotifySeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::PlaySpawnBehavior ( )
{
	static UFunction* pFnPlaySpawnBehavior = NULL;

	if ( ! pFnPlaySpawnBehavior )
		pFnPlaySpawnBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43172 ];

	AGameCrowdAgent_execPlaySpawnBehavior_Parms PlaySpawnBehavior_Parms;

	this->ProcessEvent ( pFnPlaySpawnBehavior, &PlaySpawnBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventHandlePotentialAgentEncounter ( )
{
	static UFunction* pFnHandlePotentialAgentEncounter = NULL;

	if ( ! pFnHandlePotentialAgentEncounter )
		pFnHandlePotentialAgentEncounter = (UFunction*) UObject::GObjObjects()->Data[ 43171 ];

	AGameCrowdAgent_eventHandlePotentialAgentEncounter_Parms HandlePotentialAgentEncounter_Parms;

	this->ProcessEvent ( pFnHandlePotentialAgentEncounter, &HandlePotentialAgentEncounter_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 43170 ];

	AGameCrowdAgent_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 43169 ];

	AGameCrowdAgent_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::OnPlayAgentAnimation ( )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 43167 ];

	AGameCrowdAgent_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00C20102] 
// Parameters infos:

void AGameCrowdAgent::InitializeAgent ( )
{
	static UFunction* pFnInitializeAgent = NULL;

	if ( ! pFnInitializeAgent )
		pFnInitializeAgent = (UFunction*) UObject::GObjObjects()->Data[ 43132 ];

	AGameCrowdAgent_execInitializeAgent_Parms InitializeAgent_Parms;

	this->ProcessEvent ( pFnInitializeAgent, &InitializeAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// [0x00820102] 
// Parameters infos:

void AGameCrowdAgent::GetAttemptedSpawnLocation ( )
{
	static UFunction* pFnGetAttemptedSpawnLocation = NULL;

	if ( ! pFnGetAttemptedSpawnLocation )
		pFnGetAttemptedSpawnLocation = (UFunction*) UObject::GObjObjects()->Data[ 43122 ];

	AGameCrowdAgent_execGetAttemptedSpawnLocation_Parms GetAttemptedSpawnLocation_Parms;

	this->ProcessEvent ( pFnGetAttemptedSpawnLocation, &GetAttemptedSpawnLocation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::SetLighting ( )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 43118 ];

	AGameCrowdAgent_execSetLighting_Parms SetLighting_Parms;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] 
// Parameters infos:

void AGameCrowdAgent::DisplayDebug ( )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 43112 ];

	AGameCrowdAgent_execDisplayDebug_Parms DisplayDebug_Parms;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43111 ];

	AGameCrowdAgent_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetPooledAgent ( )
{
	static UFunction* pFnResetPooledAgent = NULL;

	if ( ! pFnResetPooledAgent )
		pFnResetPooledAgent = (UFunction*) UObject::GObjObjects()->Data[ 43110 ];

	AGameCrowdAgent_execResetPooledAgent_Parms ResetPooledAgent_Parms;

	this->ProcessEvent ( pFnResetPooledAgent, &ResetPooledAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventKillAgent ( )
{
	static UFunction* pFnKillAgent = NULL;

	if ( ! pFnKillAgent )
		pFnKillAgent = (UFunction*) UObject::GObjObjects()->Data[ 43109 ];

	AGameCrowdAgent_eventKillAgent_Parms KillAgent_Parms;

	this->ProcessEvent ( pFnKillAgent, &KillAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] 
// Parameters infos:

void AGameCrowdAgent::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43105 ];

	AGameCrowdAgent_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::SetMaxSpeed ( )
{
	static UFunction* pFnSetMaxSpeed = NULL;

	if ( ! pFnSetMaxSpeed )
		pFnSetMaxSpeed = (UFunction*) UObject::GObjObjects()->Data[ 43104 ];

	AGameCrowdAgent_execSetMaxSpeed_Parms SetMaxSpeed_Parms;

	this->ProcessEvent ( pFnSetMaxSpeed, &SetMaxSpeed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventSetCurrentDestination ( )
{
	static UFunction* pFnSetCurrentDestination = NULL;

	if ( ! pFnSetCurrentDestination )
		pFnSetCurrentDestination = (UFunction*) UObject::GObjObjects()->Data[ 43102 ];

	AGameCrowdAgent_eventSetCurrentDestination_Parms SetCurrentDestination_Parms;

	this->ProcessEvent ( pFnSetCurrentDestination, &SetCurrentDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventWaitForGroupMembers ( )
{
	static UFunction* pFnWaitForGroupMembers = NULL;

	if ( ! pFnWaitForGroupMembers )
		pFnWaitForGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 43100 ];

	AGameCrowdAgent_eventWaitForGroupMembers_Parms WaitForGroupMembers_Parms;

	this->ProcessEvent ( pFnWaitForGroupMembers, &WaitForGroupMembers_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] 
// Parameters infos:

void AGameCrowdAgent::PickBehaviorFrom ( )
{
	static UFunction* pFnPickBehaviorFrom = NULL;

	if ( ! pFnPickBehaviorFrom )
		pFnPickBehaviorFrom = (UFunction*) UObject::GObjObjects()->Data[ 42648 ];

	AGameCrowdAgent_execPickBehaviorFrom_Parms PickBehaviorFrom_Parms;

	this->ProcessEvent ( pFnPickBehaviorFrom, &PickBehaviorFrom_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdAgent::IsPanicked ( )
{
	static UFunction* pFnIsPanicked = NULL;

	if ( ! pFnIsPanicked )
		pFnIsPanicked = (UFunction*) UObject::GObjObjects()->Data[ 43087 ];

	AGameCrowdAgent_execIsPanicked_Parms IsPanicked_Parms;

	pFnIsPanicked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPanicked, &IsPanicked_Parms, NULL );

	pFnIsPanicked->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventFellOutOfWorld ( )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 43085 ];

	AGameCrowdAgent_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdAgent::GetCollisionExtent ( )
{
	static UFunction* pFnGetCollisionExtent = NULL;

	if ( ! pFnGetCollisionExtent )
		pFnGetCollisionExtent = (UFunction*) UObject::GObjObjects()->Data[ 43083 ];

	AGameCrowdAgent_execGetCollisionExtent_Parms GetCollisionExtent_Parms;

	pFnGetCollisionExtent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCollisionExtent, &GetCollisionExtent_Parms, NULL );

	pFnGetCollisionExtent->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::CreateAttachments ( )
{
	static UFunction* pFnCreateAttachments = NULL;

	if ( ! pFnCreateAttachments )
		pFnCreateAttachments = (UFunction*) UObject::GObjObjects()->Data[ 43318 ];

	AGameCrowdAgentSkeletal_execCreateAttachments_Parms CreateAttachments_Parms;

	this->ProcessEvent ( pFnCreateAttachments, &CreateAttachments_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventOnAnimEnd ( )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 43314 ];

	AGameCrowdAgentSkeletal_eventOnAnimEnd_Parms OnAnimEnd_Parms;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 43313 ];

	AGameCrowdAgentSkeletal_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 43312 ];

	AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventClearLatentAnimation ( )
{
	static UFunction* pFnClearLatentAnimation = NULL;

	if ( ! pFnClearLatentAnimation )
		pFnClearLatentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 43311 ];

	AGameCrowdAgentSkeletal_eventClearLatentAnimation_Parms ClearLatentAnimation_Parms;

	this->ProcessEvent ( pFnClearLatentAnimation, &ClearLatentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation ( )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 43309 ];

	AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdAgentSkeletal::SetRootMotion ( )
{
	static UFunction* pFnSetRootMotion = NULL;

	if ( ! pFnSetRootMotion )
		pFnSetRootMotion = (UFunction*) UObject::GObjObjects()->Data[ 43307 ];

	AGameCrowdAgentSkeletal_execSetRootMotion_Parms SetRootMotion_Parms;

	pFnSetRootMotion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRootMotion, &SetRootMotion_Parms, NULL );

	pFnSetRootMotion->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdAgentSkeletal::PlayDeath ( )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 43305 ];

	AGameCrowdAgentSkeletal_execPlayDeath_Parms PlayDeath_Parms;

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::SetLighting ( )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 43301 ];

	AGameCrowdAgentSkeletal_execSetLighting_Parms SetLighting_Parms;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43300 ];

	AGameCrowdAgentSkeletal_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgentSM::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43339 ];

	AGameCrowdAgentSM_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// [0x00024002] 
// Parameters infos:

void AGameCrowdAgentSM::ActivateBehavior ( )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43336 ];

	AGameCrowdAgentSM_execActivateBehavior_Parms ActivateBehavior_Parms;

	this->ProcessEvent ( pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// [0x00820102] 
// Parameters infos:

void AGameCrowdAgentSM::ChangeDebugColor ( )
{
	static UFunction* pFnChangeDebugColor = NULL;

	if ( ! pFnChangeDebugColor )
		pFnChangeDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 43333 ];

	AGameCrowdAgentSM_execChangeDebugColor_Parms ChangeDebugColor_Parms;

	this->ProcessEvent ( pFnChangeDebugColor, &ChangeDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSM::InitDebugColor ( )
{
	static UFunction* pFnInitDebugColor = NULL;

	if ( ! pFnInitDebugColor )
		pFnInitDebugColor = (UFunction*) UObject::GObjObjects()->Data[ 43332 ];

	AGameCrowdAgentSM_execInitDebugColor_Parms InitDebugColor_Parms;

	this->ProcessEvent ( pFnInitDebugColor, &InitDebugColor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSM::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43331 ];

	AGameCrowdAgentSM_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::AllowBehaviorAt ( )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 42646 ];

	UGameCrowdAgentBehavior_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::AllowThisDestination ( )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 42636 ];

	UGameCrowdAgentBehavior_execAllowThisDestination_Parms AllowThisDestination_Parms;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameCrowdAgentBehavior::eventPropagateViralBehaviorTo ( )
{
	static UFunction* pFnPropagateViralBehaviorTo = NULL;

	if ( ! pFnPropagateViralBehaviorTo )
		pFnPropagateViralBehaviorTo = (UFunction*) UObject::GObjObjects()->Data[ 43078 ];

	UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Parms PropagateViralBehaviorTo_Parms;

	this->ProcessEvent ( pFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::GetBehaviorInstigator ( )
{
	static UFunction* pFnGetBehaviorInstigator = NULL;

	if ( ! pFnGetBehaviorInstigator )
		pFnGetBehaviorInstigator = (UFunction*) UObject::GObjObjects()->Data[ 43076 ];

	UGameCrowdAgentBehavior_execGetBehaviorInstigator_Parms GetBehaviorInstigator_Parms;

	this->ProcessEvent ( pFnGetBehaviorInstigator, &GetBehaviorInstigator_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::ActivatedBy ( )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 43074 ];

	UGameCrowdAgentBehavior_execActivatedBy_Parms ActivatedBy_Parms;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 43072 ];

	UGameCrowdAgentBehavior_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] 
// Parameters infos:

void UGameCrowdAgentBehavior::ChangingDestination ( )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 43070 ];

	UGameCrowdAgentBehavior_execChangingDestination_Parms ChangingDestination_Parms;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 43068 ];

	UGameCrowdAgentBehavior_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameCrowdAgentBehavior::eventOnAnimEnd ( )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 43064 ];

	UGameCrowdAgentBehavior_eventOnAnimEnd_Parms OnAnimEnd_Parms;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] 
// Parameters infos:

void UGameCrowdAgentBehavior::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43063 ];

	UGameCrowdAgentBehavior_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::InitBehavior ( )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43061 ];

	UGameCrowdAgentBehavior_execInitBehavior_Parms InitBehavior_Parms;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdAgentBehavior::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 43059 ];

	UGameCrowdAgentBehavior_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameCrowdAgentBehavior::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 43058 ];

	UGameCrowdAgentBehavior_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] 
// Parameters infos:

void UGameCrowdAgentBehavior::CanBeUsedBy ( )
{
	static UFunction* pFnCanBeUsedBy = NULL;

	if ( ! pFnCanBeUsedBy )
		pFnCanBeUsedBy = (UFunction*) UObject::GObjObjects()->Data[ 43054 ];

	UGameCrowdAgentBehavior_execCanBeUsedBy_Parms CanBeUsedBy_Parms;

	this->ProcessEvent ( pFnCanBeUsedBy, &CanBeUsedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameCrowdAgentBehavior::eventTick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43052 ];

	UGameCrowdAgentBehavior_eventTick_Parms Tick_Parms;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdAgentBehavior::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 43050 ];

	UGameCrowdAgentBehavior_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// [0x00026400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdAgentBehavior::TriggerCrowdBehavior ( )
{
	static UFunction* pFnTriggerCrowdBehavior = NULL;

	if ( ! pFnTriggerCrowdBehavior )
		pFnTriggerCrowdBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43041 ];

	UGameCrowdAgentBehavior_execTriggerCrowdBehavior_Parms TriggerCrowdBehavior_Parms;

	pFnTriggerCrowdBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTriggerCrowdBehavior, &TriggerCrowdBehavior_Parms, NULL );

	pFnTriggerCrowdBehavior->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 43373 ];

	UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43372 ];

	UGameCrowdBehavior_PlayAnimation_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow ( )
{
	static UFunction* pFnPlayAgentAnimationNow = NULL;

	if ( ! pFnPlayAgentAnimationNow )
		pFnPlayAgentAnimationNow = (UFunction*) UObject::GObjObjects()->Data[ 43368 ];

	UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Parms PlayAgentAnimationNow_Parms;

	this->ProcessEvent ( pFnPlayAgentAnimationNow, &PlayAgentAnimationNow_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::eventOnAnimEnd ( )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 43364 ];

	UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Parms OnAnimEnd_Parms;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput ( )
{
	static UFunction* pFnSetSequenceOutput = NULL;

	if ( ! pFnSetSequenceOutput )
		pFnSetSequenceOutput = (UFunction*) UObject::GObjObjects()->Data[ 43363 ];

	UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Parms SetSequenceOutput_Parms;

	pFnSetSequenceOutput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSequenceOutput, &SetSequenceOutput_Parms, NULL );

	pFnSetSequenceOutput->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 43362 ];

	UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::InitBehavior ( )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43355 ];

	UGameCrowdBehavior_PlayAnimation_execInitBehavior_Parms InitBehavior_Parms;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 43392 ];

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt ( )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 43389 ];

	UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::AllowThisDestination ( )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 43386 ];

	UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Parms AllowThisDestination_Parms;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator ( )
{
	static UFunction* pFnGetBehaviorInstigator = NULL;

	if ( ! pFnGetBehaviorInstigator )
		pFnGetBehaviorInstigator = (UFunction*) UObject::GObjObjects()->Data[ 43384 ];

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorInstigator_Parms GetBehaviorInstigator_Parms;

	this->ProcessEvent ( pFnGetBehaviorInstigator, &GetBehaviorInstigator_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43383 ];

	UGameCrowdBehavior_RunFromPanic_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::InitBehavior ( )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43381 ];

	UGameCrowdBehavior_RunFromPanic_execInitBehavior_Parms InitBehavior_Parms;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::ActivatedBy ( )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 43377 ];

	UGameCrowdBehavior_RunFromPanic_execActivatedBy_Parms ActivatedBy_Parms;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43401 ];

	UGameCrowdBehavior_WaitForGroup_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 43399 ];

	UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 43396 ];

	UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::InitBehavior ( )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43394 ];

	UGameCrowdBehavior_WaitForGroup_execInitBehavior_Parms InitBehavior_Parms;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 43414 ];

	UGameCrowdBehavior_WaitInQueue_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 43412 ];

	UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 43410 ];

	UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 43408 ];

	UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::ChangingDestination ( )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 43406 ];

	UGameCrowdBehavior_WaitInQueue_execChangingDestination_Parms ChangingDestination_Parms;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 43404 ];

	UGameCrowdBehavior_WaitInQueue_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] 
// Parameters infos:

void UGameCrowdGroup::UpdateDestinations ( )
{
	static UFunction* pFnUpdateDestinations = NULL;

	if ( ! pFnUpdateDestinations )
		pFnUpdateDestinations = (UFunction*) UObject::GObjObjects()->Data[ 43458 ];

	UGameCrowdGroup_execUpdateDestinations_Parms UpdateDestinations_Parms;

	this->ProcessEvent ( pFnUpdateDestinations, &UpdateDestinations_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] 
// Parameters infos:

void UGameCrowdGroup::RemoveMember ( )
{
	static UFunction* pFnRemoveMember = NULL;

	if ( ! pFnRemoveMember )
		pFnRemoveMember = (UFunction*) UObject::GObjObjects()->Data[ 43456 ];

	UGameCrowdGroup_execRemoveMember_Parms RemoveMember_Parms;

	this->ProcessEvent ( pFnRemoveMember, &RemoveMember_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] 
// Parameters infos:

void UGameCrowdGroup::AddMember ( )
{
	static UFunction* pFnAddMember = NULL;

	if ( ! pFnAddMember )
		pFnAddMember = (UFunction*) UObject::GObjObjects()->Data[ 43454 ];

	UGameCrowdGroup_execAddMember_Parms AddMember_Parms;

	this->ProcessEvent ( pFnAddMember, &AddMember_Parms, NULL );
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
// [0x00020102] 
// Parameters infos:

void AGameCrowdInfoVolume::UnTouch ( )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 43470 ];

	AGameCrowdInfoVolume_execUnTouch_Parms UnTouch_Parms;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function GameFramework.GameCrowdInfoVolume.Touch
// [0x00020102] 
// Parameters infos:

void AGameCrowdInfoVolume::Touch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 43463 ];

	AGameCrowdInfoVolume_execTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] 
// Parameters infos:

void AGameCrowdInteractionPoint::OnToggle ( )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 42285 ];

	AGameCrowdInteractionPoint_execOnToggle_Parms OnToggle_Parms;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdBehaviorPoint::eventTouch ( )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 43422 ];

	AGameCrowdBehaviorPoint_eventTouch_Parms Touch_Parms;

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// [0x00020002] 
// Parameters infos:

void AGameCrowdBehaviorPoint::DestroySelf ( )
{
	static UFunction* pFnDestroySelf = NULL;

	if ( ! pFnDestroySelf )
		pFnDestroySelf = (UFunction*) UObject::GObjObjects()->Data[ 43421 ];

	AGameCrowdBehaviorPoint_execDestroySelf_Parms DestroySelf_Parms;

	this->ProcessEvent ( pFnDestroySelf, &DestroySelf_Parms, NULL );
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdBehaviorPoint::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43420 ];

	AGameCrowdBehaviorPoint_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DrawDebug
// [0x00C24102] 
// Parameters infos:

void AGameCrowdDestination::DrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 42630 ];

	AGameCrowdDestination_execDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// [0x00020002] 
// Parameters infos:

void AGameCrowdDestination::GetDestinationRadius ( )
{
	static UFunction* pFnGetDestinationRadius = NULL;

	if ( ! pFnGetDestinationRadius )
		pFnGetDestinationRadius = (UFunction*) UObject::GObjObjects()->Data[ 42628 ];

	AGameCrowdDestination_execGetDestinationRadius_Parms GetDestinationRadius_Parms;

	this->ProcessEvent ( pFnGetDestinationRadius, &GetDestinationRadius_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// [0x00420102] 
// Parameters infos:

void AGameCrowdDestination::PrioritizeSpawnPoint ( )
{
	static UFunction* pFnPrioritizeSpawnPoint = NULL;

	if ( ! pFnPrioritizeSpawnPoint )
		pFnPrioritizeSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 42622 ];

	AGameCrowdDestination_execPrioritizeSpawnPoint_Parms PrioritizeSpawnPoint_Parms;

	this->ProcessEvent ( pFnPrioritizeSpawnPoint, &PrioritizeSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// [0x00C20102] 
// Parameters infos:

void AGameCrowdDestination::AnalyzeSpawnPoint ( )
{
	static UFunction* pFnAnalyzeSpawnPoint = NULL;

	if ( ! pFnAnalyzeSpawnPoint )
		pFnAnalyzeSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 42607 ];

	AGameCrowdDestination_execAnalyzeSpawnPoint_Parms AnalyzeSpawnPoint_Parms;

	this->ProcessEvent ( pFnAnalyzeSpawnPoint, &AnalyzeSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20102] 
// Parameters infos:

void AGameCrowdDestination::GetSpawnPosition ( )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 42601 ];

	AGameCrowdDestination_execGetSpawnPosition_Parms GetSpawnPosition_Parms;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::GetSpawnRadius ( )
{
	static UFunction* pFnGetSpawnRadius = NULL;

	if ( ! pFnGetSpawnRadius )
		pFnGetSpawnRadius = (UFunction*) UObject::GObjObjects()->Data[ 42599 ];

	AGameCrowdDestination_execGetSpawnRadius_Parms GetSpawnRadius_Parms;

	this->ProcessEvent ( pFnGetSpawnRadius, &GetSpawnRadius_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdDestination::eventAllowableDestinationFor ( )
{
	static UFunction* pFnAllowableDestinationFor = NULL;

	if ( ! pFnAllowableDestinationFor )
		pFnAllowableDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 42594 ];

	AGameCrowdDestination_eventAllowableDestinationFor_Parms AllowableDestinationFor_Parms;

	this->ProcessEvent ( pFnAllowableDestinationFor, &AllowableDestinationFor_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00024102] 
// Parameters infos:

void AGameCrowdDestination::AtCapacity ( )
{
	static UFunction* pFnAtCapacity = NULL;

	if ( ! pFnAtCapacity )
		pFnAtCapacity = (UFunction*) UObject::GObjObjects()->Data[ 42591 ];

	AGameCrowdDestination_execAtCapacity_Parms AtCapacity_Parms;

	this->ProcessEvent ( pFnAtCapacity, &AtCapacity_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdDestination::eventIncrementCustomerCount ( )
{
	static UFunction* pFnIncrementCustomerCount = NULL;

	if ( ! pFnIncrementCustomerCount )
		pFnIncrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 42589 ];

	AGameCrowdDestination_eventIncrementCustomerCount_Parms IncrementCustomerCount_Parms;

	this->ProcessEvent ( pFnIncrementCustomerCount, &IncrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdDestination::eventDecrementCustomerCount ( )
{
	static UFunction* pFnDecrementCustomerCount = NULL;

	if ( ! pFnDecrementCustomerCount )
		pFnDecrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 42585 ];

	AGameCrowdDestination_eventDecrementCustomerCount_Parms DecrementCustomerCount_Parms;

	this->ProcessEvent ( pFnDecrementCustomerCount, &DecrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::PickNewDestinationFor ( )
{
	static UFunction* pFnPickNewDestinationFor = NULL;

	if ( ! pFnPickNewDestinationFor )
		pFnPickNewDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 42577 ];

	AGameCrowdDestination_execPickNewDestinationFor_Parms PickNewDestinationFor_Parms;

	this->ProcessEvent ( pFnPickNewDestinationFor, &PickNewDestinationFor_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdDestination::eventReachedDestination ( )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 42571 ];

	AGameCrowdDestination_eventReachedDestination_Parms ReachedDestination_Parms;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42570 ];

	AGameCrowdDestination_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42567 ];

	AGameCrowdDestination_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void AGameCrowdDestination::ReachedByAgent ( )
{
	static UFunction* pFnReachedByAgent = NULL;

	if ( ! pFnReachedByAgent )
		pFnReachedByAgent = (UFunction*) UObject::GObjObjects()->Data[ 42562 ];

	AGameCrowdDestination_execReachedByAgent_Parms ReachedByAgent_Parms;

	pFnReachedByAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReachedByAgent, &ReachedByAgent_Parms, NULL );

	pFnReachedByAgent->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestinationQueuePoint::HasCustomer ( )
{
	static UFunction* pFnHasCustomer = NULL;

	if ( ! pFnHasCustomer )
		pFnHasCustomer = (UFunction*) UObject::GObjObjects()->Data[ 42644 ];

	AGameCrowdDestinationQueuePoint_execHasCustomer_Parms HasCustomer_Parms;

	this->ProcessEvent ( pFnHasCustomer, &HasCustomer_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestinationQueuePoint::ClearQueue ( )
{
	static UFunction* pFnClearQueue = NULL;

	if ( ! pFnClearQueue )
		pFnClearQueue = (UFunction*) UObject::GObjObjects()->Data[ 43450 ];

	AGameCrowdDestinationQueuePoint_execClearQueue_Parms ClearQueue_Parms;

	this->ProcessEvent ( pFnClearQueue, &ClearQueue_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestinationQueuePoint::AddCustomer ( )
{
	static UFunction* pFnAddCustomer = NULL;

	if ( ! pFnAddCustomer )
		pFnAddCustomer = (UFunction*) UObject::GObjObjects()->Data[ 43447 ];

	AGameCrowdDestinationQueuePoint_execAddCustomer_Parms AddCustomer_Parms;

	this->ProcessEvent ( pFnAddCustomer, &AddCustomer_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040103] ( FUNC_Final )
// Parameters infos:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance ( )
{
	static UFunction* pFnActuallyAdvance = NULL;

	if ( ! pFnActuallyAdvance )
		pFnActuallyAdvance = (UFunction*) UObject::GObjObjects()->Data[ 43443 ];

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Parms ActuallyAdvance_Parms;

	this->ProcessEvent ( pFnActuallyAdvance, &ActuallyAdvance_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo ( )
{
	static UFunction* pFnAdvanceCustomerTo = NULL;

	if ( ! pFnAdvanceCustomerTo )
		pFnAdvanceCustomerTo = (UFunction*) UObject::GObjObjects()->Data[ 43441 ];

	AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Parms AdvanceCustomerTo_Parms;

	this->ProcessEvent ( pFnAdvanceCustomerTo, &AdvanceCustomerTo_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdDestinationQueuePoint::eventReachedDestination ( )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 43438 ];

	AGameCrowdDestinationQueuePoint_eventReachedDestination_Parms ReachedDestination_Parms;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestinationQueuePoint::HasSpace ( )
{
	static UFunction* pFnHasSpace = NULL;

	if ( ! pFnHasSpace )
		pFnHasSpace = (UFunction*) UObject::GObjObjects()->Data[ 42639 ];

	AGameCrowdDestinationQueuePoint_execHasSpace_Parms HasSpace_Parms;

	this->ProcessEvent ( pFnHasSpace, &HasSpace_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdDestinationQueuePoint::QueueReachedBy ( )
{
	static UFunction* pFnQueueReachedBy = NULL;

	if ( ! pFnQueueReachedBy )
		pFnQueueReachedBy = (UFunction*) UObject::GObjObjects()->Data[ 43434 ];

	AGameCrowdDestinationQueuePoint_execQueueReachedBy_Parms QueueReachedBy_Parms;

	pFnQueueReachedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueueReachedBy, &QueueReachedBy_Parms, NULL );

	pFnQueueReachedBy->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00C20802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventCreateNewAgent ( )
{
	static UFunction* pFnCreateNewAgent = NULL;

	if ( ! pFnCreateNewAgent )
		pFnCreateNewAgent = (UFunction*) UObject::GObjObjects()->Data[ 43614 ];

	AGameCrowdPopulationManager_eventCreateNewAgent_Parms CreateNewAgent_Parms;

	this->ProcessEvent ( pFnCreateNewAgent, &CreateNewAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdPopulationManager::Warmup ( )
{
	static UFunction* pFnWarmup = NULL;

	if ( ! pFnWarmup )
		pFnWarmup = (UFunction*) UObject::GObjObjects()->Data[ 43610 ];

	AGameCrowdPopulationManager_execWarmup_Parms Warmup_Parms;

	pFnWarmup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWarmup, &Warmup_Parms, NULL );

	pFnWarmup->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdPopulationManager::SpawnAgent ( )
{
	static UFunction* pFnSpawnAgent = NULL;

	if ( ! pFnSpawnAgent )
		pFnSpawnAgent = (UFunction*) UObject::GObjObjects()->Data[ 43606 ];

	AGameCrowdPopulationManager_execSpawnAgent_Parms SpawnAgent_Parms;

	pFnSpawnAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpawnAgent, &SpawnAgent_Parms, NULL );

	pFnSpawnAgent->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdPopulationManager::SpawnAgentByIdx ( )
{
	static UFunction* pFnSpawnAgentByIdx = NULL;

	if ( ! pFnSpawnAgentByIdx )
		pFnSpawnAgentByIdx = (UFunction*) UObject::GObjObjects()->Data[ 43602 ];

	AGameCrowdPopulationManager_execSpawnAgentByIdx_Parms SpawnAgentByIdx_Parms;

	pFnSpawnAgentByIdx->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpawnAgentByIdx, &SpawnAgentByIdx_Parms, NULL );

	pFnSpawnAgentByIdx->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00C20002] 
// Parameters infos:

void AGameCrowdPopulationManager::ValidateSpawnAt ( )
{
	static UFunction* pFnValidateSpawnAt = NULL;

	if ( ! pFnValidateSpawnAt )
		pFnValidateSpawnAt = (UFunction*) UObject::GObjObjects()->Data[ 43591 ];

	AGameCrowdPopulationManager_execValidateSpawnAt_Parms ValidateSpawnAt_Parms;

	this->ProcessEvent ( pFnValidateSpawnAt, &ValidateSpawnAt_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00420002] 
// Parameters infos:

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint ( )
{
	static UFunction* pFnAddPrioritizedSpawnPoint = NULL;

	if ( ! pFnAddPrioritizedSpawnPoint )
		pFnAddPrioritizedSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43586 ];

	AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Parms AddPrioritizedSpawnPoint_Parms;

	this->ProcessEvent ( pFnAddPrioritizedSpawnPoint, &AddPrioritizedSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00420002] 
// Parameters infos:

void AGameCrowdPopulationManager::AnalyzeSpawnPoints ( )
{
	static UFunction* pFnAnalyzeSpawnPoints = NULL;

	if ( ! pFnAnalyzeSpawnPoints )
		pFnAnalyzeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 43578 ];

	AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Parms AnalyzeSpawnPoints_Parms;

	this->ProcessEvent ( pFnAnalyzeSpawnPoints, &AnalyzeSpawnPoints_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventPrioritizeSpawnPoints ( )
{
	static UFunction* pFnPrioritizeSpawnPoints = NULL;

	if ( ! pFnPrioritizeSpawnPoints )
		pFnPrioritizeSpawnPoints = (UFunction*) UObject::GObjObjects()->Data[ 43574 ];

	AGameCrowdPopulationManager_eventPrioritizeSpawnPoints_Parms PrioritizeSpawnPoints_Parms;

	this->ProcessEvent ( pFnPrioritizeSpawnPoints, &PrioritizeSpawnPoints_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// [0x00422500] ( FUNC_Native )
// Parameters infos:

void AGameCrowdPopulationManager::StaticGetPlayerInfo ( )
{
	static UFunction* pFnStaticGetPlayerInfo = NULL;

	if ( ! pFnStaticGetPlayerInfo )
		pFnStaticGetPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 43570 ];

	AGameCrowdPopulationManager_execStaticGetPlayerInfo_Parms StaticGetPlayerInfo_Parms;

	pFnStaticGetPlayerInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStaticGetPlayerInfo, &StaticGetPlayerInfo_Parms, NULL );

	pFnStaticGetPlayerInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void AGameCrowdPopulationManager::GetPlayerInfo ( )
{
	static UFunction* pFnGetPlayerInfo = NULL;

	if ( ! pFnGetPlayerInfo )
		pFnGetPlayerInfo = (UFunction*) UObject::GObjObjects()->Data[ 43568 ];

	AGameCrowdPopulationManager_execGetPlayerInfo_Parms GetPlayerInfo_Parms;

	pFnGetPlayerInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPlayerInfo, &GetPlayerInfo_Parms, NULL );

	pFnGetPlayerInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventPickSpawnPoint ( )
{
	static UFunction* pFnPickSpawnPoint = NULL;

	if ( ! pFnPickSpawnPoint )
		pFnPickSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43562 ];

	AGameCrowdPopulationManager_eventPickSpawnPoint_Parms PickSpawnPoint_Parms;

	this->ProcessEvent ( pFnPickSpawnPoint, &PickSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventUpdateSpawner ( )
{
	static UFunction* pFnUpdateSpawner = NULL;

	if ( ! pFnUpdateSpawner )
		pFnUpdateSpawner = (UFunction*) UObject::GObjObjects()->Data[ 43555 ];

	AGameCrowdPopulationManager_eventUpdateSpawner_Parms UpdateSpawner_Parms;

	this->ProcessEvent ( pFnUpdateSpawner, &UpdateSpawner_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AGameCrowdPopulationManager::UpdateAllSpawners ( )
{
	static UFunction* pFnUpdateAllSpawners = NULL;

	if ( ! pFnUpdateAllSpawners )
		pFnUpdateAllSpawners = (UFunction*) UObject::GObjObjects()->Data[ 43553 ];

	AGameCrowdPopulationManager_execUpdateAllSpawners_Parms UpdateAllSpawners_Parms;

	pFnUpdateAllSpawners->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateAllSpawners, &UpdateAllSpawners_Parms, NULL );

	pFnUpdateAllSpawners->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43548 ];

	AGameCrowdPopulationManager_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// [0x00020102] 
// Parameters infos:

void AGameCrowdPopulationManager::ShouldDebugDestinations ( )
{
	static UFunction* pFnShouldDebugDestinations = NULL;

	if ( ! pFnShouldDebugDestinations )
		pFnShouldDebugDestinations = (UFunction*) UObject::GObjObjects()->Data[ 43546 ];

	AGameCrowdPopulationManager_execShouldDebugDestinations_Parms ShouldDebugDestinations_Parms;

	this->ProcessEvent ( pFnShouldDebugDestinations, &ShouldDebugDestinations_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::IsSpawningActive ( )
{
	static UFunction* pFnIsSpawningActive = NULL;

	if ( ! pFnIsSpawningActive )
		pFnIsSpawningActive = (UFunction*) UObject::GObjObjects()->Data[ 43543 ];

	AGameCrowdPopulationManager_execIsSpawningActive_Parms IsSpawningActive_Parms;

	this->ProcessEvent ( pFnIsSpawningActive, &IsSpawningActive_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00C20102] 
// Parameters infos:

void AGameCrowdPopulationManager::DisplayDebug ( )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 43520 ];

	AGameCrowdPopulationManager_execDisplayDebug_Parms DisplayDebug_Parms;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::AgentDestroyed ( )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43516 ];

	AGameCrowdPopulationManager_execAgentDestroyed_Parms AgentDestroyed_Parms;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventFlushAllAgents ( )
{
	static UFunction* pFnFlushAllAgents = NULL;

	if ( ! pFnFlushAllAgents )
		pFnFlushAllAgents = (UFunction*) UObject::GObjObjects()->Data[ 43514 ];

	AGameCrowdPopulationManager_eventFlushAllAgents_Parms FlushAllAgents_Parms;

	this->ProcessEvent ( pFnFlushAllAgents, &FlushAllAgents_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventFlushAgents ( )
{
	static UFunction* pFnFlushAgents = NULL;

	if ( ! pFnFlushAgents )
		pFnFlushAgents = (UFunction*) UObject::GObjObjects()->Data[ 43511 ];

	AGameCrowdPopulationManager_eventFlushAgents_Parms FlushAgents_Parms;

	this->ProcessEvent ( pFnFlushAgents, &FlushAgents_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventCreateSpawner ( )
{
	static UFunction* pFnCreateSpawner = NULL;

	if ( ! pFnCreateSpawner )
		pFnCreateSpawner = (UFunction*) UObject::GObjObjects()->Data[ 43507 ];

	AGameCrowdPopulationManager_eventCreateSpawner_Parms CreateSpawner_Parms;

	this->ProcessEvent ( pFnCreateSpawner, &CreateSpawner_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::SetCrowdInfoVolume ( )
{
	static UFunction* pFnSetCrowdInfoVolume = NULL;

	if ( ! pFnSetCrowdInfoVolume )
		pFnSetCrowdInfoVolume = (UFunction*) UObject::GObjObjects()->Data[ 43505 ];

	AGameCrowdPopulationManager_execSetCrowdInfoVolume_Parms SetCrowdInfoVolume_Parms;

	this->ProcessEvent ( pFnSetCrowdInfoVolume, &SetCrowdInfoVolume_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::RemoveSpawnPoint ( )
{
	static UFunction* pFnRemoveSpawnPoint = NULL;

	if ( ! pFnRemoveSpawnPoint )
		pFnRemoveSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43501 ];

	AGameCrowdPopulationManager_execRemoveSpawnPoint_Parms RemoveSpawnPoint_Parms;

	this->ProcessEvent ( pFnRemoveSpawnPoint, &RemoveSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::AddSpawnPoint ( )
{
	static UFunction* pFnAddSpawnPoint = NULL;

	if ( ! pFnAddSpawnPoint )
		pFnAddSpawnPoint = (UFunction*) UObject::GObjObjects()->Data[ 43499 ];

	AGameCrowdPopulationManager_execAddSpawnPoint_Parms AddSpawnPoint_Parms;

	this->ProcessEvent ( pFnAddSpawnPoint, &AddSpawnPoint_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGameCrowdPopulationManager::eventNotifyPathChanged ( )
{
	static UFunction* pFnNotifyPathChanged = NULL;

	if ( ! pFnNotifyPathChanged )
		pFnNotifyPathChanged = (UFunction*) UObject::GObjObjects()->Data[ 43498 ];

	AGameCrowdPopulationManager_eventNotifyPathChanged_Parms NotifyPathChanged_Parms;

	this->ProcessEvent ( pFnNotifyPathChanged, &NotifyPathChanged_Parms, NULL );
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGameCrowdPopulationManager::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43496 ];

	AGameCrowdPopulationManager_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdReplicationActor::eventReplicatedEvent ( )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 43628 ];

	AGameCrowdReplicationActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880102] 
// Parameters infos:

void AGameExplosionActor::ChooseCameraShake ( )
{
	static UFunction* pFnChooseCameraShake = NULL;

	if ( ! pFnChooseCameraShake )
		pFnChooseCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 43815 ];

	AGameExplosionActor_execChooseCameraShake_Parms ChooseCameraShake_Parms;

	this->ProcessEvent ( pFnChooseCameraShake, &ChooseCameraShake_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::SpawnCameraLensEffects ( )
{
	static UFunction* pFnSpawnCameraLensEffects = NULL;

	if ( ! pFnSpawnCameraLensEffects )
		pFnSpawnCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 43813 ];

	AGameExplosionActor_execSpawnCameraLensEffects_Parms SpawnCameraLensEffects_Parms;

	this->ProcessEvent ( pFnSpawnCameraLensEffects, &SpawnCameraLensEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionCameraEffects ( )
{
	static UFunction* pFnDoExplosionCameraEffects = NULL;

	if ( ! pFnDoExplosionCameraEffects )
		pFnDoExplosionCameraEffects = (UFunction*) UObject::GObjObjects()->Data[ 43809 ];

	AGameExplosionActor_execDoExplosionCameraEffects_Parms DoExplosionCameraEffects_Parms;

	this->ProcessEvent ( pFnDoExplosionCameraEffects, &DoExplosionCameraEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] 
// Parameters infos:

void AGameExplosionActor::DrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 43806 ];

	AGameExplosionActor_execDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DelayedExplosionDamage ( )
{
	static UFunction* pFnDelayedExplosionDamage = NULL;

	if ( ! pFnDelayedExplosionDamage )
		pFnDelayedExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 43805 ];

	AGameExplosionActor_execDelayedExplosionDamage_Parms DelayedExplosionDamage_Parms;

	this->ProcessEvent ( pFnDelayedExplosionDamage, &DelayedExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024102] 
// Parameters infos:

void AGameExplosionActor::Explode ( )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 43799 ];

	AGameExplosionActor_execExplode_Parms Explode_Parms;

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionFogVolume ( )
{
	static UFunction* pFnSpawnExplosionFogVolume = NULL;

	if ( ! pFnSpawnExplosionFogVolume )
		pFnSpawnExplosionFogVolume = (UFunction*) UObject::GObjObjects()->Data[ 43798 ];

	AGameExplosionActor_execSpawnExplosionFogVolume_Parms SpawnExplosionFogVolume_Parms;

	this->ProcessEvent ( pFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionDecal ( )
{
	static UFunction* pFnSpawnExplosionDecal = NULL;

	if ( ! pFnSpawnExplosionDecal )
		pFnSpawnExplosionDecal = (UFunction*) UObject::GObjObjects()->Data[ 43797 ];

	AGameExplosionActor_execSpawnExplosionDecal_Parms SpawnExplosionDecal_Parms;

	this->ProcessEvent ( pFnSpawnExplosionDecal, &SpawnExplosionDecal_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionParticleSystem ( )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 43795 ];

	AGameExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
// Parameters infos:

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX ( )
{
	static UFunction* pFnUpdateExplosionTemplateWithPerMaterialFX = NULL;

	if ( ! pFnUpdateExplosionTemplateWithPerMaterialFX )
		pFnUpdateExplosionTemplateWithPerMaterialFX = (UFunction*) UObject::GObjObjects()->Data[ 43793 ];

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms UpdateExplosionTemplateWithPerMaterialFX_Parms;

	this->ProcessEvent ( pFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// [0x00080000] 
// Parameters infos:

void AGameExplosionActor::SpecialCringeEffectsFor ( )
{
	static UFunction* pFnSpecialCringeEffectsFor = NULL;

	if ( ! pFnSpecialCringeEffectsFor )
		pFnSpecialCringeEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 43790 ];

	AGameExplosionActor_execSpecialCringeEffectsFor_Parms SpecialCringeEffectsFor_Parms;

	this->ProcessEvent ( pFnSpecialCringeEffectsFor, &SpecialCringeEffectsFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00080000] 
// Parameters infos:

void AGameExplosionActor::SpecialPawnEffectsFor ( )
{
	static UFunction* pFnSpecialPawnEffectsFor = NULL;

	if ( ! pFnSpecialPawnEffectsFor )
		pFnSpecialPawnEffectsFor = (UFunction*) UObject::GObjObjects()->Data[ 43787 ];

	AGameExplosionActor_execSpecialPawnEffectsFor_Parms SpecialPawnEffectsFor_Parms;

	this->ProcessEvent ( pFnSpecialPawnEffectsFor, &SpecialPawnEffectsFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.GetDamageFor
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::GetDamageFor ( )
{
	static UFunction* pFnGetDamageFor = NULL;

	if ( ! pFnGetDamageFor )
		pFnGetDamageFor = (UFunction*) UObject::GObjObjects()->Data[ 43784 ];

	AGameExplosionActor_execGetDamageFor_Parms GetDamageFor_Parms;

	this->ProcessEvent ( pFnGetDamageFor, &GetDamageFor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00020002] 
// Parameters infos:

void AGameExplosionActor::GetEffectCheckRadius ( )
{
	static UFunction* pFnGetEffectCheckRadius = NULL;

	if ( ! pFnGetEffectCheckRadius )
		pFnGetEffectCheckRadius = (UFunction*) UObject::GObjObjects()->Data[ 43778 ];

	AGameExplosionActor_execGetEffectCheckRadius_Parms GetEffectCheckRadius_Parms;

	this->ProcessEvent ( pFnGetEffectCheckRadius, &GetEffectCheckRadius_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.HandleIgnoredVictim
// [0x00020000] 
// Parameters infos:

void AGameExplosionActor::HandleIgnoredVictim ( )
{
	static UFunction* pFnHandleIgnoredVictim = NULL;

	if ( ! pFnHandleIgnoredVictim )
		pFnHandleIgnoredVictim = (UFunction*) UObject::GObjObjects()->Data[ 43776 ];

	AGameExplosionActor_execHandleIgnoredVictim_Parms HandleIgnoredVictim_Parms;

	this->ProcessEvent ( pFnHandleIgnoredVictim, &HandleIgnoredVictim_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00880102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionDamage ( )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 43749 ];

	AGameExplosionActor_execDoExplosionDamage_Parms DoExplosionDamage_Parms;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameExplosionActor::BoxDistanceToPoint ( )
{
	static UFunction* pFnBoxDistanceToPoint = NULL;

	if ( ! pFnBoxDistanceToPoint )
		pFnBoxDistanceToPoint = (UFunction*) UObject::GObjObjects()->Data[ 43745 ];

	AGameExplosionActor_execBoxDistanceToPoint_Parms BoxDistanceToPoint_Parms;

	pFnBoxDistanceToPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBoxDistanceToPoint, &BoxDistanceToPoint_Parms, NULL );

	pFnBoxDistanceToPoint->FunctionFlags |= 0x400;
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] 
// Parameters infos:

void AGameExplosionActor::IsBehindExplosion ( )
{
	static UFunction* pFnIsBehindExplosion = NULL;

	if ( ! pFnIsBehindExplosion )
		pFnIsBehindExplosion = (UFunction*) UObject::GObjObjects()->Data[ 43742 ];

	AGameExplosionActor_execIsBehindExplosion_Parms IsBehindExplosion_Parms;

	this->ProcessEvent ( pFnIsBehindExplosion, &IsBehindExplosion_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoFullDamageToActor ( )
{
	static UFunction* pFnDoFullDamageToActor = NULL;

	if ( ! pFnDoFullDamageToActor )
		pFnDoFullDamageToActor = (UFunction*) UObject::GObjObjects()->Data[ 43739 ];

	AGameExplosionActor_execDoFullDamageToActor_Parms DoFullDamageToActor_Parms;

	this->ProcessEvent ( pFnDoFullDamageToActor, &DoFullDamageToActor_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
// Parameters infos:

void AGameExplosionActor::GetPhysicalMaterial ( )
{
	static UFunction* pFnGetPhysicalMaterial = NULL;

	if ( ! pFnGetPhysicalMaterial )
		pFnGetPhysicalMaterial = (UFunction*) UObject::GObjObjects()->Data[ 43731 ];

	AGameExplosionActor_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

	this->ProcessEvent ( pFnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameExplosionActor::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43730 ];

	AGameExplosionActor_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.StaticTraceExplosive
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void AGameExplosionActor::StaticTraceExplosive ( )
{
	static UFunction* pFnStaticTraceExplosive = NULL;

	if ( ! pFnStaticTraceExplosive )
		pFnStaticTraceExplosive = (UFunction*) UObject::GObjObjects()->Data[ 43725 ];

	AGameExplosionActor_execStaticTraceExplosive_Parms StaticTraceExplosive_Parms;

	pFnStaticTraceExplosive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStaticTraceExplosive, &StaticTraceExplosive_Parms, NULL );

	pFnStaticTraceExplosive->FunctionFlags |= 0x400;
};

// Function GameFramework.GameExplosionActor.TraceExplosive
// [0x00020002] 
// Parameters infos:

void AGameExplosionActor::TraceExplosive ( )
{
	static UFunction* pFnTraceExplosive = NULL;

	if ( ! pFnTraceExplosive )
		pFnTraceExplosive = (UFunction*) UObject::GObjObjects()->Data[ 43721 ];

	AGameExplosionActor_execTraceExplosive_Parms TraceExplosive_Parms;

	this->ProcessEvent ( pFnTraceExplosive, &TraceExplosive_Parms, NULL );
};

// Function GameFramework.DebugCameraController.ConsoleCommand
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void ADebugCameraController::ConsoleCommand ( )
{
	static UFunction* pFnConsoleCommand = NULL;

	if ( ! pFnConsoleCommand )
		pFnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 42238 ];

	ADebugCameraController_execConsoleCommand_Parms ConsoleCommand_Parms;

	pFnConsoleCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConsoleCommand, &ConsoleCommand_Parms, NULL );

	pFnConsoleCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::ShowDebugSelectedInfo ( )
{
	static UFunction* pFnShowDebugSelectedInfo = NULL;

	if ( ! pFnShowDebugSelectedInfo )
		pFnShowDebugSelectedInfo = (UFunction*) UObject::GObjObjects()->Data[ 42237 ];

	ADebugCameraController_execShowDebugSelectedInfo_Parms ShowDebugSelectedInfo_Parms;

	this->ProcessEvent ( pFnShowDebugSelectedInfo, &ShowDebugSelectedInfo_Parms, NULL );
};

// Function GameFramework.DebugCameraController.NativeInputKey
// [0x00824002] 
// Parameters infos:

void ADebugCameraController::NativeInputKey ( )
{
	static UFunction* pFnNativeInputKey = NULL;

	if ( ! pFnNativeInputKey )
		pFnNativeInputKey = (UFunction*) UObject::GObjObjects()->Data[ 42223 ];

	ADebugCameraController_execNativeInputKey_Parms NativeInputKey_Parms;

	this->ProcessEvent ( pFnNativeInputKey, &NativeInputKey_Parms, NULL );
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::InitDebugInputSystem ( )
{
	static UFunction* pFnInitDebugInputSystem = NULL;

	if ( ! pFnInitDebugInputSystem )
		pFnInitDebugInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 42218 ];

	ADebugCameraController_execInitDebugInputSystem_Parms InitDebugInputSystem_Parms;

	this->ProcessEvent ( pFnInitDebugInputSystem, &InitDebugInputSystem_Parms, NULL );
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::DisableDebugCamera ( )
{
	static UFunction* pFnDisableDebugCamera = NULL;

	if ( ! pFnDisableDebugCamera )
		pFnDisableDebugCamera = (UFunction*) UObject::GObjObjects()->Data[ 42217 ];

	ADebugCameraController_execDisableDebugCamera_Parms DisableDebugCamera_Parms;

	this->ProcessEvent ( pFnDisableDebugCamera, &DisableDebugCamera_Parms, NULL );
};

// Function GameFramework.DebugCameraController.NormalSpeed
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::NormalSpeed ( )
{
	static UFunction* pFnNormalSpeed = NULL;

	if ( ! pFnNormalSpeed )
		pFnNormalSpeed = (UFunction*) UObject::GObjObjects()->Data[ 42216 ];

	ADebugCameraController_execNormalSpeed_Parms NormalSpeed_Parms;

	this->ProcessEvent ( pFnNormalSpeed, &NormalSpeed_Parms, NULL );
};

// Function GameFramework.DebugCameraController.MoreSpeed
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::MoreSpeed ( )
{
	static UFunction* pFnMoreSpeed = NULL;

	if ( ! pFnMoreSpeed )
		pFnMoreSpeed = (UFunction*) UObject::GObjObjects()->Data[ 42215 ];

	ADebugCameraController_execMoreSpeed_Parms MoreSpeed_Parms;

	this->ProcessEvent ( pFnMoreSpeed, &MoreSpeed_Parms, NULL );
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ADebugCameraController::SetFreezeRendering ( )
{
	static UFunction* pFnSetFreezeRendering = NULL;

	if ( ! pFnSetFreezeRendering )
		pFnSetFreezeRendering = (UFunction*) UObject::GObjObjects()->Data[ 42214 ];

	ADebugCameraController_execSetFreezeRendering_Parms SetFreezeRendering_Parms;

	this->ProcessEvent ( pFnSetFreezeRendering, &SetFreezeRendering_Parms, NULL );
};

// Function GameFramework.DebugCameraController.OnDeactivate
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::OnDeactivate ( )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 42212 ];

	ADebugCameraController_execOnDeactivate_Parms OnDeactivate_Parms;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function GameFramework.DebugCameraController.OnActivate
// [0x00020002] 
// Parameters infos:

void ADebugCameraController::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 42210 ];

	ADebugCameraController_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function GameFramework.DebugCameraController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADebugCameraController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42209 ];

	ADebugCameraController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.DebugCameraController.Unselect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ADebugCameraController::Unselect ( )
{
	static UFunction* pFnUnselect = NULL;

	if ( ! pFnUnselect )
		pFnUnselect = (UFunction*) UObject::GObjObjects()->Data[ 42208 ];

	ADebugCameraController_execUnselect_Parms Unselect_Parms;

	pFnUnselect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnselect, &Unselect_Parms, NULL );

	pFnUnselect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.SecondarySelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ADebugCameraController::SecondarySelect ( )
{
	static UFunction* pFnSecondarySelect = NULL;

	if ( ! pFnSecondarySelect )
		pFnSecondarySelect = (UFunction*) UObject::GObjObjects()->Data[ 42204 ];

	ADebugCameraController_execSecondarySelect_Parms SecondarySelect_Parms;

	pFnSecondarySelect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSecondarySelect, &SecondarySelect_Parms, NULL );

	pFnSecondarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.PrimarySelect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ADebugCameraController::PrimarySelect ( )
{
	static UFunction* pFnPrimarySelect = NULL;

	if ( ! pFnPrimarySelect )
		pFnPrimarySelect = (UFunction*) UObject::GObjObjects()->Data[ 42200 ];

	ADebugCameraController_execPrimarySelect_Parms PrimarySelect_Parms;

	pFnPrimarySelect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPrimarySelect, &PrimarySelect_Parms, NULL );

	pFnPrimarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileHUD.RenderKismetHud
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RenderKismetHud ( )
{
	static UFunction* pFnRenderKismetHud = NULL;

	if ( ! pFnRenderKismetHud )
		pFnRenderKismetHud = (UFunction*) UObject::GObjObjects()->Data[ 44533 ];

	AMobileHUD_execRenderKismetHud_Parms RenderKismetHud_Parms;

	this->ProcessEvent ( pFnRenderKismetHud, &RenderKismetHud_Parms, NULL );
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
// [0x00020002] 
// Parameters infos:

void AMobileHUD::AddKismetRenderEvent ( )
{
	static UFunction* pFnAddKismetRenderEvent = NULL;

	if ( ! pFnAddKismetRenderEvent )
		pFnAddKismetRenderEvent = (UFunction*) UObject::GObjObjects()->Data[ 44530 ];

	AMobileHUD_execAddKismetRenderEvent_Parms AddKismetRenderEvent_Parms;

	this->ProcessEvent ( pFnAddKismetRenderEvent, &AddKismetRenderEvent_Parms, NULL );
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RefreshKismetLinks ( )
{
	static UFunction* pFnRefreshKismetLinks = NULL;

	if ( ! pFnRefreshKismetLinks )
		pFnRefreshKismetLinks = (UFunction*) UObject::GObjObjects()->Data[ 44525 ];

	AMobileHUD_execRefreshKismetLinks_Parms RefreshKismetLinks_Parms;

	this->ProcessEvent ( pFnRefreshKismetLinks, &RefreshKismetLinks_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// [0x00820002] 
// Parameters infos:

void AMobileHUD::DrawMobileZone_Slider ( )
{
	static UFunction* pFnDrawMobileZone_Slider = NULL;

	if ( ! pFnDrawMobileZone_Slider )
		pFnDrawMobileZone_Slider = (UFunction*) UObject::GObjObjects()->Data[ 44519 ];

	AMobileHUD_execDrawMobileZone_Slider_Parms DrawMobileZone_Slider_Parms;

	this->ProcessEvent ( pFnDrawMobileZone_Slider, &DrawMobileZone_Slider_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawMobileTilt ( )
{
	static UFunction* pFnDrawMobileTilt = NULL;

	if ( ! pFnDrawMobileTilt )
		pFnDrawMobileTilt = (UFunction*) UObject::GObjObjects()->Data[ 44504 ];

	AMobileHUD_execDrawMobileTilt_Parms DrawMobileTilt_Parms;

	this->ProcessEvent ( pFnDrawMobileTilt, &DrawMobileTilt_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawMobileZone_Trackball ( )
{
	static UFunction* pFnDrawMobileZone_Trackball = NULL;

	if ( ! pFnDrawMobileZone_Trackball )
		pFnDrawMobileZone_Trackball = (UFunction*) UObject::GObjObjects()->Data[ 44500 ];

	AMobileHUD_execDrawMobileZone_Trackball_Parms DrawMobileZone_Trackball_Parms;

	this->ProcessEvent ( pFnDrawMobileZone_Trackball, &DrawMobileZone_Trackball_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00820002] 
// Parameters infos:

void AMobileHUD::DrawMobileZone_Joystick ( )
{
	static UFunction* pFnDrawMobileZone_Joystick = NULL;

	if ( ! pFnDrawMobileZone_Joystick )
		pFnDrawMobileZone_Joystick = (UFunction*) UObject::GObjObjects()->Data[ 44489 ];

	AMobileHUD_execDrawMobileZone_Joystick_Parms DrawMobileZone_Joystick_Parms;

	this->ProcessEvent ( pFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawMobileZone_Button ( )
{
	static UFunction* pFnDrawMobileZone_Button = NULL;

	if ( ! pFnDrawMobileZone_Button )
		pFnDrawMobileZone_Button = (UFunction*) UObject::GObjObjects()->Data[ 44478 ];

	AMobileHUD_execDrawMobileZone_Button_Parms DrawMobileZone_Button_Parms;

	this->ProcessEvent ( pFnDrawMobileZone_Button, &DrawMobileZone_Button_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawInputZoneOverlays ( )
{
	static UFunction* pFnDrawInputZoneOverlays = NULL;

	if ( ! pFnDrawInputZoneOverlays )
		pFnDrawInputZoneOverlays = (UFunction*) UObject::GObjObjects()->Data[ 44471 ];

	AMobileHUD_execDrawInputZoneOverlays_Parms DrawInputZoneOverlays_Parms;

	this->ProcessEvent ( pFnDrawInputZoneOverlays, &DrawInputZoneOverlays_Parms, NULL );
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00020002] 
// Parameters infos:

void AMobileHUD::RenderMobileMenu ( )
{
	static UFunction* pFnRenderMobileMenu = NULL;

	if ( ! pFnRenderMobileMenu )
		pFnRenderMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 44467 ];

	AMobileHUD_execRenderMobileMenu_Parms RenderMobileMenu_Parms;

	this->ProcessEvent ( pFnRenderMobileMenu, &RenderMobileMenu_Parms, NULL );
};

// Function GameFramework.MobileHUD.ShowMobileHud
// [0x00020002] 
// Parameters infos:

void AMobileHUD::ShowMobileHud ( )
{
	static UFunction* pFnShowMobileHud = NULL;

	if ( ! pFnShowMobileHud )
		pFnShowMobileHud = (UFunction*) UObject::GObjObjects()->Data[ 44465 ];

	AMobileHUD_execShowMobileHud_Parms ShowMobileHud_Parms;

	this->ProcessEvent ( pFnShowMobileHud, &ShowMobileHud_Parms, NULL );
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
// [0x00020002] 
// Parameters infos:

void AMobileHUD::DrawMobileDebugString ( )
{
	static UFunction* pFnDrawMobileDebugString = NULL;

	if ( ! pFnDrawMobileDebugString )
		pFnDrawMobileDebugString = (UFunction*) UObject::GObjObjects()->Data[ 44461 ];

	AMobileHUD_execDrawMobileDebugString_Parms DrawMobileDebugString_Parms;

	this->ProcessEvent ( pFnDrawMobileDebugString, &DrawMobileDebugString_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostRender
// [0x00020002] 
// Parameters infos:

void AMobileHUD::PostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 44459 ];

	AMobileHUD_execPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AMobileHUD::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44458 ];

	AMobileHUD_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
// [0x00020002] 
// Parameters infos:

void UMobileInputZone::AddKismetEventHandler ( )
{
	static UFunction* pFnAddKismetEventHandler = NULL;

	if ( ! pFnAddKismetEventHandler )
		pFnAddKismetEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 44869 ];

	UMobileInputZone_execAddKismetEventHandler_Parms AddKismetEventHandler_Parms;

	this->ProcessEvent ( pFnAddKismetEventHandler, &AddKismetEventHandler_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
// [0x00120000] 
// Parameters infos:

void UMobileInputZone::OnPostDrawZone ( )
{
	static UFunction* pFnOnPostDrawZone = NULL;

	if ( ! pFnOnPostDrawZone )
		pFnOnPostDrawZone = (UFunction*) UObject::GObjObjects()->Data[ 44866 ];

	UMobileInputZone_execOnPostDrawZone_Parms OnPostDrawZone_Parms;

	this->ProcessEvent ( pFnOnPostDrawZone, &OnPostDrawZone_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
// [0x00120000] 
// Parameters infos:

void UMobileInputZone::OnPreDrawZone ( )
{
	static UFunction* pFnOnPreDrawZone = NULL;

	if ( ! pFnOnPreDrawZone )
		pFnOnPreDrawZone = (UFunction*) UObject::GObjObjects()->Data[ 44565 ];

	UMobileInputZone_execOnPreDrawZone_Parms OnPreDrawZone_Parms;

	this->ProcessEvent ( pFnOnPreDrawZone, &OnPreDrawZone_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnProcessSlide
// [0x00120000] 
// Parameters infos:

void UMobileInputZone::OnProcessSlide ( )
{
	static UFunction* pFnOnProcessSlide = NULL;

	if ( ! pFnOnProcessSlide )
		pFnOnProcessSlide = (UFunction*) UObject::GObjObjects()->Data[ 44858 ];

	UMobileInputZone_execOnProcessSlide_Parms OnProcessSlide_Parms;

	this->ProcessEvent ( pFnOnProcessSlide, &OnProcessSlide_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00120000] 
// Parameters infos:

void UMobileInputZone::OnDoubleTapDelegate ( )
{
	static UFunction* pFnOnDoubleTapDelegate = NULL;

	if ( ! pFnOnDoubleTapDelegate )
		pFnOnDoubleTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44853 ];

	UMobileInputZone_execOnDoubleTapDelegate_Parms OnDoubleTapDelegate_Parms;

	this->ProcessEvent ( pFnOnDoubleTapDelegate, &OnDoubleTapDelegate_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00120000] 
// Parameters infos:

void UMobileInputZone::OnTapDelegate ( )
{
	static UFunction* pFnOnTapDelegate = NULL;

	if ( ! pFnOnTapDelegate )
		pFnOnTapDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44848 ];

	UMobileInputZone_execOnTapDelegate_Parms OnTapDelegate_Parms;

	this->ProcessEvent ( pFnOnTapDelegate, &OnTapDelegate_Parms, NULL );
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00120000] 
// Parameters infos:

void UMobileInputZone::OnProcessInputDelegate ( )
{
	static UFunction* pFnOnProcessInputDelegate = NULL;

	if ( ! pFnOnProcessInputDelegate )
		pFnOnProcessInputDelegate = (UFunction*) UObject::GObjObjects()->Data[ 44841 ];

	UMobileInputZone_execOnProcessInputDelegate_Parms OnProcessInputDelegate_Parms;

	this->ProcessEvent ( pFnOnProcessInputDelegate, &OnProcessInputDelegate_Parms, NULL );
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::DeactivateZone ( )
{
	static UFunction* pFnDeactivateZone = NULL;

	if ( ! pFnDeactivateZone )
		pFnDeactivateZone = (UFunction*) UObject::GObjObjects()->Data[ 44840 ];

	UMobileInputZone_execDeactivateZone_Parms DeactivateZone_Parms;

	pFnDeactivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeactivateZone, &DeactivateZone_Parms, NULL );

	pFnDeactivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileInputZone::ActivateZone ( )
{
	static UFunction* pFnActivateZone = NULL;

	if ( ! pFnActivateZone )
		pFnActivateZone = (UFunction*) UObject::GObjObjects()->Data[ 44839 ];

	UMobileInputZone_execActivateZone_Parms ActivateZone_Parms;

	pFnActivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActivateZone, &ActivateZone_Parms, NULL );

	pFnActivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00020000] 
// Parameters infos:

void UMobileMenuObject::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44945 ];

	UMobileMenuObject_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
// [0x00024002] 
// Parameters infos:

void UMobileMenuObject::SetCanvasPos ( )
{
	static UFunction* pFnSetCanvasPos = NULL;

	if ( ! pFnSetCanvasPos )
		pFnSetCanvasPos = (UFunction*) UObject::GObjObjects()->Data[ 44939 ];

	UMobileMenuObject_execSetCanvasPos_Parms SetCanvasPos_Parms;

	this->ProcessEvent ( pFnSetCanvasPos, &SetCanvasPos_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.InitMenuObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuObject::InitMenuObject ( )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44926 ];

	UMobileMenuObject_execInitMenuObject_Parms InitMenuObject_Parms;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.GetRealPosition
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuObject::eventGetRealPosition ( )
{
	static UFunction* pFnGetRealPosition = NULL;

	if ( ! pFnGetRealPosition )
		pFnGetRealPosition = (UFunction*) UObject::GObjObjects()->Data[ 44923 ];

	UMobileMenuObject_eventGetRealPosition_Parms GetRealPosition_Parms;

	this->ProcessEvent ( pFnGetRealPosition, &GetRealPosition_Parms, NULL );
};

// Function GameFramework.MobileMenuObject.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuObject::eventOnTouch ( )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44916 ];

	UMobileMenuObject_eventOnTouch_Parms OnTouch_Parms;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00820002] 
// Parameters infos:

void UMobileMenuImage::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 45069 ];

	UMobileMenuImage_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::MobileMenuCommand ( )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 44770 ];

	UMobileMenuScene_execMobileMenuCommand_Parms MobileMenuCommand_Parms;

	this->ProcessEvent ( pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::FindMenuObject ( )
{
	static UFunction* pFnFindMenuObject = NULL;

	if ( ! pFnFindMenuObject )
		pFnFindMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44948 ];

	UMobileMenuScene_execFindMenuObject_Parms FindMenuObject_Parms;

	this->ProcessEvent ( pFnFindMenuObject, &FindMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobileMenuScene::CleanUpScene ( )
{
	static UFunction* pFnCleanUpScene = NULL;

	if ( ! pFnCleanUpScene )
		pFnCleanUpScene = (UFunction*) UObject::GObjObjects()->Data[ 45429 ];

	UMobileMenuScene_execCleanUpScene_Parms CleanUpScene_Parms;

	pFnCleanUpScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCleanUpScene, &CleanUpScene_Parms, NULL );

	pFnCleanUpScene->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 45428 ];

	UMobileMenuScene_execClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::Closing ( )
{
	static UFunction* pFnClosing = NULL;

	if ( ! pFnClosing )
		pFnClosing = (UFunction*) UObject::GObjObjects()->Data[ 44772 ];

	UMobileMenuScene_execClosing_Parms Closing_Parms;

	this->ProcessEvent ( pFnClosing, &Closing_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
// [0x00020000] 
// Parameters infos:

void UMobileMenuScene::MadeTopMenu ( )
{
	static UFunction* pFnMadeTopMenu = NULL;

	if ( ! pFnMadeTopMenu )
		pFnMadeTopMenu = (UFunction*) UObject::GObjObjects()->Data[ 45427 ];

	UMobileMenuScene_execMadeTopMenu_Parms MadeTopMenu_Parms;

	this->ProcessEvent ( pFnMadeTopMenu, &MadeTopMenu_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00020000] 
// Parameters infos:

void UMobileMenuScene::Opened ( )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = (UFunction*) UObject::GObjObjects()->Data[ 45425 ];

	UMobileMenuScene_execOpened_Parms Opened_Parms;

	this->ProcessEvent ( pFnOpened, &Opened_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuScene::eventOnSceneTouch ( )
{
	static UFunction* pFnOnSceneTouch = NULL;

	if ( ! pFnOnSceneTouch )
		pFnOnSceneTouch = (UFunction*) UObject::GObjObjects()->Data[ 45419 ];

	UMobileMenuScene_eventOnSceneTouch_Parms OnSceneTouch_Parms;

	this->ProcessEvent ( pFnOnSceneTouch, &OnSceneTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UMobileMenuScene::eventOnTouch ( )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 45414 ];

	UMobileMenuScene_eventOnTouch_Parms OnTouch_Parms;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// [0x00020000] 
// Parameters infos:

void UMobileMenuScene::PreRenderMenuObject ( )
{
	static UFunction* pFnPreRenderMenuObject = NULL;

	if ( ! pFnPreRenderMenuObject )
		pFnPreRenderMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 45410 ];

	UMobileMenuScene_execPreRenderMenuObject_Parms PreRenderMenuObject_Parms;

	this->ProcessEvent ( pFnPreRenderMenuObject, &PreRenderMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::RenderScene ( )
{
	static UFunction* pFnRenderScene = NULL;

	if ( ! pFnRenderScene )
		pFnRenderScene = (UFunction*) UObject::GObjObjects()->Data[ 45406 ];

	UMobileMenuScene_execRenderScene_Parms RenderScene_Parms;

	this->ProcessEvent ( pFnRenderScene, &RenderScene_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.GetSceneFont
// [0x00020002] 
// Parameters infos:

void UMobileMenuScene::GetSceneFont ( )
{
	static UFunction* pFnGetSceneFont = NULL;

	if ( ! pFnGetSceneFont )
		pFnGetSceneFont = (UFunction*) UObject::GObjObjects()->Data[ 45404 ];

	UMobileMenuScene_execGetSceneFont_Parms GetSceneFont_Parms;

	this->ProcessEvent ( pFnGetSceneFont, &GetSceneFont_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.InitMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuScene::eventInitMenuScene ( )
{
	static UFunction* pFnInitMenuScene = NULL;

	if ( ! pFnInitMenuScene )
		pFnInitMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 45394 ];

	UMobileMenuScene_eventInitMenuScene_Parms InitMenuScene_Parms;

	this->ProcessEvent ( pFnInitMenuScene, &InitMenuScene_Parms, NULL );
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UMobileMenuScene::GetGlobalScaleY ( )
{
	static UFunction* pFnGetGlobalScaleY = NULL;

	if ( ! pFnGetGlobalScaleY )
		pFnGetGlobalScaleY = (UFunction*) UObject::GObjObjects()->Data[ 44955 ];

	UMobileMenuScene_execGetGlobalScaleY_Parms GetGlobalScaleY_Parms;

	pFnGetGlobalScaleY->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGlobalScaleY, &GetGlobalScaleY_Parms, NULL );

	pFnGetGlobalScaleY->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UMobileMenuScene::GetGlobalScaleX ( )
{
	static UFunction* pFnGetGlobalScaleX = NULL;

	if ( ! pFnGetGlobalScaleX )
		pFnGetGlobalScaleX = (UFunction*) UObject::GObjObjects()->Data[ 44953 ];

	UMobileMenuScene_execGetGlobalScaleX_Parms GetGlobalScaleX_Parms;

	pFnGetGlobalScaleX->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGlobalScaleX, &GetGlobalScaleX_Parms, NULL );

	pFnGetGlobalScaleX->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::OpenMobileMenuMode ( )
{
	static UFunction* pFnOpenMobileMenuMode = NULL;

	if ( ! pFnOpenMobileMenuMode )
		pFnOpenMobileMenuMode = (UFunction*) UObject::GObjObjects()->Data[ 44765 ];

	UMobilePlayerInput_execOpenMobileMenuMode_Parms OpenMobileMenuMode_Parms;

	this->ProcessEvent ( pFnOpenMobileMenuMode, &OpenMobileMenuMode_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::OpenMobileMenu ( )
{
	static UFunction* pFnOpenMobileMenu = NULL;

	if ( ! pFnOpenMobileMenu )
		pFnOpenMobileMenu = (UFunction*) UObject::GObjObjects()->Data[ 44761 ];

	UMobilePlayerInput_execOpenMobileMenu_Parms OpenMobileMenu_Parms;

	this->ProcessEvent ( pFnOpenMobileMenu, &OpenMobileMenu_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::MobileMenuCommand ( )
{
	static UFunction* pFnMobileMenuCommand = NULL;

	if ( ! pFnMobileMenuCommand )
		pFnMobileMenuCommand = (UFunction*) UObject::GObjObjects()->Data[ 44758 ];

	UMobilePlayerInput_execMobileMenuCommand_Parms MobileMenuCommand_Parms;

	this->ProcessEvent ( pFnMobileMenuCommand, &MobileMenuCommand_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::SceneRenderToggle ( )
{
	static UFunction* pFnSceneRenderToggle = NULL;

	if ( ! pFnSceneRenderToggle )
		pFnSceneRenderToggle = (UFunction*) UObject::GObjObjects()->Data[ 44757 ];

	UMobilePlayerInput_execSceneRenderToggle_Parms SceneRenderToggle_Parms;

	this->ProcessEvent ( pFnSceneRenderToggle, &SceneRenderToggle_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::PreClientTravel ( )
{
	static UFunction* pFnPreClientTravel = NULL;

	if ( ! pFnPreClientTravel )
		pFnPreClientTravel = (UFunction*) UObject::GObjObjects()->Data[ 44752 ];

	UMobilePlayerInput_execPreClientTravel_Parms PreClientTravel_Parms;

	this->ProcessEvent ( pFnPreClientTravel, &PreClientTravel_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventRenderMenus ( )
{
	static UFunction* pFnRenderMenus = NULL;

	if ( ! pFnRenderMenus )
		pFnRenderMenus = (UFunction*) UObject::GObjObjects()->Data[ 44748 ];

	UMobilePlayerInput_eventRenderMenus_Parms RenderMenus_Parms;

	this->ProcessEvent ( pFnRenderMenus, &RenderMenus_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventCloseAllMenus ( )
{
	static UFunction* pFnCloseAllMenus = NULL;

	if ( ! pFnCloseAllMenus )
		pFnCloseAllMenus = (UFunction*) UObject::GObjObjects()->Data[ 44747 ];

	UMobilePlayerInput_eventCloseAllMenus_Parms CloseAllMenus_Parms;

	this->ProcessEvent ( pFnCloseAllMenus, &CloseAllMenus_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventCloseMenuScene ( )
{
	static UFunction* pFnCloseMenuScene = NULL;

	if ( ! pFnCloseMenuScene )
		pFnCloseMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 44742 ];

	UMobilePlayerInput_eventCloseMenuScene_Parms CloseMenuScene_Parms;

	this->ProcessEvent ( pFnCloseMenuScene, &CloseMenuScene_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00824802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventOpenMenuScene ( )
{
	static UFunction* pFnOpenMenuScene = NULL;

	if ( ! pFnOpenMenuScene )
		pFnOpenMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 44736 ];

	UMobilePlayerInput_eventOpenMenuScene_Parms OpenMenuScene_Parms;

	this->ProcessEvent ( pFnOpenMenuScene, &OpenMenuScene_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::SetMobileInputConfig ( )
{
	static UFunction* pFnSetMobileInputConfig = NULL;

	if ( ! pFnSetMobileInputConfig )
		pFnSetMobileInputConfig = (UFunction*) UObject::GObjObjects()->Data[ 44733 ];

	UMobilePlayerInput_execSetMobileInputConfig_Parms SetMobileInputConfig_Parms;

	this->ProcessEvent ( pFnSetMobileInputConfig, &SetMobileInputConfig_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UMobilePlayerInput::ActivateInputGroup ( )
{
	static UFunction* pFnActivateInputGroup = NULL;

	if ( ! pFnActivateInputGroup )
		pFnActivateInputGroup = (UFunction*) UObject::GObjObjects()->Data[ 44730 ];

	UMobilePlayerInput_execActivateInputGroup_Parms ActivateInputGroup_Parms;

	this->ProcessEvent ( pFnActivateInputGroup, &ActivateInputGroup_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::GetCurrentZones ( )
{
	static UFunction* pFnGetCurrentZones = NULL;

	if ( ! pFnGetCurrentZones )
		pFnGetCurrentZones = (UFunction*) UObject::GObjObjects()->Data[ 44556 ];

	UMobilePlayerInput_execGetCurrentZones_Parms GetCurrentZones_Parms;

	this->ProcessEvent ( pFnGetCurrentZones, &GetCurrentZones_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::HasZones ( )
{
	static UFunction* pFnHasZones = NULL;

	if ( ! pFnHasZones )
		pFnHasZones = (UFunction*) UObject::GObjObjects()->Data[ 44554 ];

	UMobilePlayerInput_execHasZones_Parms HasZones_Parms;

	this->ProcessEvent ( pFnHasZones, &HasZones_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::FindorAddZone ( )
{
	static UFunction* pFnFindorAddZone = NULL;

	if ( ! pFnFindorAddZone )
		pFnFindorAddZone = (UFunction*) UObject::GObjObjects()->Data[ 44723 ];

	UMobilePlayerInput_execFindorAddZone_Parms FindorAddZone_Parms;

	this->ProcessEvent ( pFnFindorAddZone, &FindorAddZone_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::FindZone ( )
{
	static UFunction* pFnFindZone = NULL;

	if ( ! pFnFindZone )
		pFnFindZone = (UFunction*) UObject::GObjObjects()->Data[ 44411 ];

	UMobilePlayerInput_execFindZone_Parms FindZone_Parms;

	this->ProcessEvent ( pFnFindZone, &FindZone_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::AddKismetRawInputEventHandler ( )
{
	static UFunction* pFnAddKismetRawInputEventHandler = NULL;

	if ( ! pFnAddKismetRawInputEventHandler )
		pFnAddKismetRawInputEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 44718 ];

	UMobilePlayerInput_execAddKismetRawInputEventHandler_Parms AddKismetRawInputEventHandler_Parms;

	this->ProcessEvent ( pFnAddKismetRawInputEventHandler, &AddKismetRawInputEventHandler_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::AddKismetEventHandler ( )
{
	static UFunction* pFnAddKismetEventHandler = NULL;

	if ( ! pFnAddKismetEventHandler )
		pFnAddKismetEventHandler = (UFunction*) UObject::GObjObjects()->Data[ 44715 ];

	UMobilePlayerInput_execAddKismetEventHandler_Parms AddKismetEventHandler_Parms;

	this->ProcessEvent ( pFnAddKismetEventHandler, &AddKismetEventHandler_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventRefreshKismetLinks ( )
{
	static UFunction* pFnRefreshKismetLinks = NULL;

	if ( ! pFnRefreshKismetLinks )
		pFnRefreshKismetLinks = (UFunction*) UObject::GObjObjects()->Data[ 44710 ];

	UMobilePlayerInput_eventRefreshKismetLinks_Parms RefreshKismetLinks_Parms;

	this->ProcessEvent ( pFnRefreshKismetLinks, &RefreshKismetLinks_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::SwapZoneOwners ( )
{
	static UFunction* pFnSwapZoneOwners = NULL;

	if ( ! pFnSwapZoneOwners )
		pFnSwapZoneOwners = (UFunction*) UObject::GObjObjects()->Data[ 44708 ];

	UMobilePlayerInput_execSwapZoneOwners_Parms SwapZoneOwners_Parms;

	this->ProcessEvent ( pFnSwapZoneOwners, &SwapZoneOwners_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitializeInputZones ( )
{
	static UFunction* pFnInitializeInputZones = NULL;

	if ( ! pFnInitializeInputZones )
		pFnInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 44703 ];

	UMobilePlayerInput_execInitializeInputZones_Parms InitializeInputZones_Parms;

	this->ProcessEvent ( pFnInitializeInputZones, &InitializeInputZones_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitTouchSystem ( )
{
	static UFunction* pFnInitTouchSystem = NULL;

	if ( ! pFnInitTouchSystem )
		pFnInitTouchSystem = (UFunction*) UObject::GObjObjects()->Data[ 44702 ];

	UMobilePlayerInput_execInitTouchSystem_Parms InitTouchSystem_Parms;

	this->ProcessEvent ( pFnInitTouchSystem, &InitTouchSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::ClientInitInputSystem ( )
{
	static UFunction* pFnClientInitInputSystem = NULL;

	if ( ! pFnClientInitInputSystem )
		pFnClientInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44701 ];

	UMobilePlayerInput_execClientInitInputSystem_Parms ClientInitInputSystem_Parms;

	this->ProcessEvent ( pFnClientInitInputSystem, &ClientInitInputSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00020002] 
// Parameters infos:

void UMobilePlayerInput::InitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44700 ];

	UMobilePlayerInput_execInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::ProcessWorldTouch ( )
{
	static UFunction* pFnProcessWorldTouch = NULL;

	if ( ! pFnProcessWorldTouch )
		pFnProcessWorldTouch = (UFunction*) UObject::GObjObjects()->Data[ 44695 ];

	UMobilePlayerInput_execProcessWorldTouch_Parms ProcessWorldTouch_Parms;

	pFnProcessWorldTouch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessWorldTouch, &ProcessWorldTouch_Parms, NULL );

	pFnProcessWorldTouch->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::SendInputAxis ( )
{
	static UFunction* pFnSendInputAxis = NULL;

	if ( ! pFnSendInputAxis )
		pFnSendInputAxis = (UFunction*) UObject::GObjObjects()->Data[ 44691 ];

	UMobilePlayerInput_execSendInputAxis_Parms SendInputAxis_Parms;

	pFnSendInputAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendInputAxis, &SendInputAxis_Parms, NULL );

	pFnSendInputAxis->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::SendInputKey ( )
{
	static UFunction* pFnSendInputKey = NULL;

	if ( ! pFnSendInputKey )
		pFnSendInputKey = (UFunction*) UObject::GObjObjects()->Data[ 44687 ];

	UMobilePlayerInput_execSendInputKey_Parms SendInputKey_Parms;

	pFnSendInputKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendInputKey, &SendInputKey_Parms, NULL );

	pFnSendInputKey->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::ConditionalUpdateInputZones ( )
{
	static UFunction* pFnConditionalUpdateInputZones = NULL;

	if ( ! pFnConditionalUpdateInputZones )
		pFnConditionalUpdateInputZones = (UFunction*) UObject::GObjObjects()->Data[ 44682 ];

	UMobilePlayerInput_execConditionalUpdateInputZones_Parms ConditionalUpdateInputZones_Parms;

	pFnConditionalUpdateInputZones->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConditionalUpdateInputZones, &ConditionalUpdateInputZones_Parms, NULL );

	pFnConditionalUpdateInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::NativeInitializeInputZones ( )
{
	static UFunction* pFnNativeInitializeInputZones = NULL;

	if ( ! pFnNativeInitializeInputZones )
		pFnNativeInitializeInputZones = (UFunction*) UObject::GObjObjects()->Data[ 44680 ];

	UMobilePlayerInput_execNativeInitializeInputZones_Parms NativeInitializeInputZones_Parms;

	pFnNativeInitializeInputZones->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeInitializeInputZones, &NativeInitializeInputZones_Parms, NULL );

	pFnNativeInitializeInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::NativeInitializeInputSystem ( )
{
	static UFunction* pFnNativeInitializeInputSystem = NULL;

	if ( ! pFnNativeInitializeInputSystem )
		pFnNativeInitializeInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44679 ];

	UMobilePlayerInput_execNativeInitializeInputSystem_Parms NativeInitializeInputSystem_Parms;

	pFnNativeInitializeInputSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeInitializeInputSystem, &NativeInitializeInputSystem_Parms, NULL );

	pFnNativeInitializeInputSystem->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
// [0x00120000] 
// Parameters infos:

void UMobilePlayerInput::OnInputTouch ( )
{
	static UFunction* pFnOnInputTouch = NULL;

	if ( ! pFnOnInputTouch )
		pFnOnInputTouch = (UFunction*) UObject::GObjObjects()->Data[ 44673 ];

	UMobilePlayerInput_execOnInputTouch_Parms OnInputTouch_Parms;

	this->ProcessEvent ( pFnOnInputTouch, &OnInputTouch_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// [0x00120000] 
// Parameters infos:

void UMobilePlayerInput::OnPreviewTouch ( )
{
	static UFunction* pFnOnPreviewTouch = NULL;

	if ( ! pFnOnPreviewTouch )
		pFnOnPreviewTouch = (UFunction*) UObject::GObjObjects()->Data[ 44668 ];

	UMobilePlayerInput_execOnPreviewTouch_Parms OnPreviewTouch_Parms;

	this->ProcessEvent ( pFnOnPreviewTouch, &OnPreviewTouch_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// [0x00120000] 
// Parameters infos:

void UMobilePlayerInput::OnTouchNotHandledInMenu ( )
{
	static UFunction* pFnOnTouchNotHandledInMenu = NULL;

	if ( ! pFnOnTouchNotHandledInMenu )
		pFnOnTouchNotHandledInMenu = (UFunction*) UObject::GObjObjects()->Data[ 44667 ];

	UMobilePlayerInput_execOnTouchNotHandledInMenu_Parms OnTouchNotHandledInMenu_Parms;

	this->ProcessEvent ( pFnOnTouchNotHandledInMenu, &OnTouchNotHandledInMenu_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.PlayerInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobilePlayerInput::eventPlayerInput ( )
{
	static UFunction* pFnPlayerInput = NULL;

	if ( ! pFnPlayerInput )
		pFnPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 44665 ];

	UMobilePlayerInput_eventPlayerInput_Parms PlayerInput_Parms;

	this->ProcessEvent ( pFnPlayerInput, &PlayerInput_Parms, NULL );
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::CancelMobileInput ( )
{
	static UFunction* pFnCancelMobileInput = NULL;

	if ( ! pFnCancelMobileInput )
		pFnCancelMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 44664 ];

	UMobilePlayerInput_execCancelMobileInput_Parms CancelMobileInput_Parms;

	pFnCancelMobileInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelMobileInput, &CancelMobileInput_Parms, NULL );

	pFnCancelMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMobilePlayerInput::ProcessMobileInput ( )
{
	static UFunction* pFnProcessMobileInput = NULL;

	if ( ! pFnProcessMobileInput )
		pFnProcessMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 44662 ];

	UMobilePlayerInput_execProcessMobileInput_Parms ProcessMobileInput_Parms;

	pFnProcessMobileInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessMobileInput, &ProcessMobileInput_Parms, NULL );

	pFnProcessMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 45460 ];

	UNavMeshGoal_OutOfViewFrom_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] 
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint ( )
{
	static UFunction* pFnMustBeHiddenFromThisPoint = NULL;

	if ( ! pFnMustBeHiddenFromThisPoint )
		pFnMustBeHiddenFromThisPoint = (UFunction*) UObject::GObjObjects()->Data[ 45455 ];

	UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Parms MustBeHiddenFromThisPoint_Parms;

	this->ProcessEvent ( pFnMustBeHiddenFromThisPoint, &MustBeHiddenFromThisPoint_Parms, NULL );
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::RecycleNative ( )
{
	static UFunction* pFnRecycleNative = NULL;

	if ( ! pFnRecycleNative )
		pFnRecycleNative = (UFunction*) UObject::GObjObjects()->Data[ 45454 ];

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Parms RecycleNative_Parms;

	pFnRecycleNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRecycleNative, &RecycleNative_Parms, NULL );

	pFnRecycleNative->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] 
// Parameters infos:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle ( )
{
	static UFunction* pFnRecycle = NULL;

	if ( ! pFnRecycle )
		pFnRecycle = (UFunction*) UObject::GObjObjects()->Data[ 45475 ];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent ( pFnRecycle, &Recycle_Parms, NULL );
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] 
// Parameters infos:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations ( )
{
	static UFunction* pFnBiasAgainstPolysWithinDistanceOfLocations = NULL;

	if ( ! pFnBiasAgainstPolysWithinDistanceOfLocations )
		pFnBiasAgainstPolysWithinDistanceOfLocations = (UFunction*) UObject::GObjObjects()->Data[ 45466 ];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Parms BiasAgainstPolysWithinDistanceOfLocations_Parms;

	this->ProcessEvent ( pFnBiasAgainstPolysWithinDistanceOfLocations, &BiasAgainstPolysWithinDistanceOfLocations_Parms, NULL );
};

// Function GameFramework.SecondaryViewportClient.PostRender
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void USecondaryViewportClient::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 45433 ];

	USecondaryViewportClient_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobileSecondaryViewportClient::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 45435 ];

	UMobileSecondaryViewportClient_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// [0x00020002] 
// Parameters infos:

void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed ( )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 45530 ];

	USeqAct_GameCrowdPopulationManagerToggle_execAgentDestroyed_Parms AgentDestroyed_Parms;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// [0x00020002] 
// Parameters infos:

void USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 45528 ];

	USeqAct_GameCrowdPopulationManagerToggle_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	this->ProcessEvent ( pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void USeqAct_GameCrowdPopulationManagerToggle::eventFillCrowdSpawnInfoItem ( )
{
	static UFunction* pFnFillCrowdSpawnInfoItem = NULL;

	if ( ! pFnFillCrowdSpawnInfoItem )
		pFnFillCrowdSpawnInfoItem = (UFunction*) UObject::GObjObjects()->Data[ 45524 ];

	USeqAct_GameCrowdPopulationManagerToggle_eventFillCrowdSpawnInfoItem_Parms FillCrowdSpawnInfoItem_Parms;

	this->ProcessEvent ( pFnFillCrowdSpawnInfoItem, &FillCrowdSpawnInfoItem_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void USeqAct_GameCrowdPopulationManagerToggle::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45522 ];

	USeqAct_GameCrowdPopulationManagerToggle_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void USeqAct_GameCrowdSpawner::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45533 ];

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void USeqAct_MobileSaveLoadValue::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45538 ];

	USeqAct_MobileSaveLoadValue_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] 
// Parameters infos:

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor ( )
{
	static UFunction* pFnSetCurrentAnimationActionFor = NULL;

	if ( ! pFnSetCurrentAnimationActionFor )
		pFnSetCurrentAnimationActionFor = (UFunction*) UObject::GObjObjects()->Data[ 45559 ];

	USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Parms SetCurrentAnimationActionFor_Parms;

	this->ProcessEvent ( pFnSetCurrentAnimationActionFor, &SetCurrentAnimationActionFor_Parms, NULL );
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void USeqAct_PlayAgentAnimation::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45557 ];

	USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRender.Render
// [0x00020000] 
// Parameters infos:

void USeqEvent_HudRender::Render ( )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 45571 ];

	USeqEvent_HudRender_execRender_Parms Render_Parms;

	this->ProcessEvent ( pFnRender, &Render_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_HudRender::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 45567 ];

	USeqEvent_HudRender_eventRegisterEvent_Parms RegisterEvent_Parms;

	this->ProcessEvent ( pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileBase::eventAddToMobileInput ( )
{
	static UFunction* pFnAddToMobileInput = NULL;

	if ( ! pFnAddToMobileInput )
		pFnAddToMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 45619 ];

	USeqEvent_MobileBase_eventAddToMobileInput_Parms AddToMobileInput_Parms;

	this->ProcessEvent ( pFnAddToMobileInput, &AddToMobileInput_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileBase::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 45615 ];

	USeqEvent_MobileBase_eventRegisterEvent_Parms RegisterEvent_Parms;

	this->ProcessEvent ( pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileMotion::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45643 ];

	USeqEvent_MobileMotion_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileZoneBase::eventAddToMobileInput ( )
{
	static UFunction* pFnAddToMobileInput = NULL;

	if ( ! pFnAddToMobileInput )
		pFnAddToMobileInput = (UFunction*) UObject::GObjObjects()->Data[ 45622 ];

	USeqEvent_MobileZoneBase_eventAddToMobileInput_Parms AddToMobileInput_Parms;

	this->ProcessEvent ( pFnAddToMobileInput, &AddToMobileInput_Parms, NULL );
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_MobileRawInput::eventRegisterEvent ( )
{
	static UFunction* pFnRegisterEvent = NULL;

	if ( ! pFnRegisterEvent )
		pFnRegisterEvent = (UFunction*) UObject::GObjObjects()->Data[ 45650 ];

	USeqEvent_MobileRawInput_eventRegisterEvent_Parms RegisterEvent_Parms;

	this->ProcessEvent ( pFnRegisterEvent, &RegisterEvent_Parms, NULL );
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] ( FUNC_Event )
// Parameters infos:

void UGameCameraBase::eventModifyPostProcessSettings ( )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 42981 ];

	UGameCameraBase_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] 
// Parameters infos:

void UGameCameraBase::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 42980 ];

	UGameCameraBase_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameCameraBase.DisplayDebug
// [0x00420100] 
// Parameters infos:

void UGameCameraBase::DisplayDebug ( )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 42976 ];

	UGameCameraBase_execDisplayDebug_Parms DisplayDebug_Parms;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] 
// Parameters infos:

void UGameCameraBase::ProcessViewRotation ( )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 42971 ];

	UGameCameraBase_execProcessViewRotation_Parms ProcessViewRotation_Parms;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] 
// Parameters infos:

void UGameCameraBase::UpdateCamera ( )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 42966 ];

	UGameCameraBase_execUpdateCamera_Parms UpdateCamera_Parms;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameCameraBase::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 42965 ];

	UGameCameraBase_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] 
// Parameters infos:

void UGameCameraBase::OnBecomeInActive ( )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 42963 ];

	UGameCameraBase_execOnBecomeInActive_Parms OnBecomeInActive_Parms;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] 
// Parameters infos:

void UGameCameraBase::OnBecomeActive ( )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 42961 ];

	UGameCameraBase_execOnBecomeActive_Parms OnBecomeActive_Parms;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 44271 ];

	UGameThirdPersonCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void UGameThirdPersonCamera::eventModifyPostProcessSettings ( )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 44269 ];

	UGameThirdPersonCamera_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::OnBecomeActive ( )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 44267 ];

	UGameThirdPersonCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:

void UGameThirdPersonCamera::ProcessViewRotation ( )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 44262 ];

	UGameThirdPersonCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] ( FUNC_Final )
// Parameters infos:

void UGameThirdPersonCamera::UpdateCameraMode ( )
{
	static UFunction* pFnUpdateCameraMode = NULL;

	if ( ! pFnUpdateCameraMode )
		pFnUpdateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 44259 ];

	UGameThirdPersonCamera_execUpdateCameraMode_Parms UpdateCameraMode_Parms;

	this->ProcessEvent ( pFnUpdateCameraMode, &UpdateCameraMode_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::FindBestCameraMode ( )
{
	static UFunction* pFnFindBestCameraMode = NULL;

	if ( ! pFnFindBestCameraMode )
		pFnFindBestCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 44256 ];

	UGameThirdPersonCamera_execFindBestCameraMode_Parms FindBestCameraMode_Parms;

	this->ProcessEvent ( pFnFindBestCameraMode, &FindBestCameraMode_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::AdjustFocusPointInterpolation ( )
{
	static UFunction* pFnAdjustFocusPointInterpolation = NULL;

	if ( ! pFnAdjustFocusPointInterpolation )
		pFnAdjustFocusPointInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 44254 ];

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Parms AdjustFocusPointInterpolation_Parms;

	this->ProcessEvent ( pFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] 
// Parameters infos:

void UGameThirdPersonCamera::GetActualFocusLocation ( )
{
	static UFunction* pFnGetActualFocusLocation = NULL;

	if ( ! pFnGetActualFocusLocation )
		pFnGetActualFocusLocation = (UFunction*) UObject::GObjObjects()->Data[ 44250 ];

	UGameThirdPersonCamera_execGetActualFocusLocation_Parms GetActualFocusLocation_Parms;

	this->ProcessEvent ( pFnGetActualFocusLocation, &GetActualFocusLocation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] ( FUNC_Event )
// Parameters infos:

void UGameThirdPersonCamera::eventUpdateFocusPoint ( )
{
	static UFunction* pFnUpdateFocusPoint = NULL;

	if ( ! pFnUpdateFocusPoint )
		pFnUpdateFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 44248 ];

	UGameThirdPersonCamera_eventUpdateFocusPoint_Parms UpdateFocusPoint_Parms;

	this->ProcessEvent ( pFnUpdateFocusPoint, &UpdateFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] 
// Parameters infos:

void UGameThirdPersonCamera::ClearFocusPoint ( )
{
	static UFunction* pFnClearFocusPoint = NULL;

	if ( ! pFnClearFocusPoint )
		pFnClearFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 44246 ];

	UGameThirdPersonCamera_execClearFocusPoint_Parms ClearFocusPoint_Parms;

	this->ProcessEvent ( pFnClearFocusPoint, &ClearFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::GetFocusActor ( )
{
	static UFunction* pFnGetFocusActor = NULL;

	if ( ! pFnGetFocusActor )
		pFnGetFocusActor = (UFunction*) UObject::GObjObjects()->Data[ 44244 ];

	UGameThirdPersonCamera_execGetFocusActor_Parms GetFocusActor_Parms;

	this->ProcessEvent ( pFnGetFocusActor, &GetFocusActor_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] 
// Parameters infos:

void UGameThirdPersonCamera::SetFocusOnActor ( )
{
	static UFunction* pFnSetFocusOnActor = NULL;

	if ( ! pFnSetFocusOnActor )
		pFnSetFocusOnActor = (UFunction*) UObject::GObjObjects()->Data[ 44234 ];

	UGameThirdPersonCamera_execSetFocusOnActor_Parms SetFocusOnActor_Parms;

	this->ProcessEvent ( pFnSetFocusOnActor, &SetFocusOnActor_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] 
// Parameters infos:

void UGameThirdPersonCamera::SetFocusOnLoc ( )
{
	static UFunction* pFnSetFocusOnLoc = NULL;

	if ( ! pFnSetFocusOnLoc )
		pFnSetFocusOnLoc = (UFunction*) UObject::GObjObjects()->Data[ 44225 ];

	UGameThirdPersonCamera_execSetFocusOnLoc_Parms SetFocusOnLoc_Parms;

	this->ProcessEvent ( pFnSetFocusOnLoc, &SetFocusOnLoc_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::AdjustTurn ( )
{
	static UFunction* pFnAdjustTurn = NULL;

	if ( ! pFnAdjustTurn )
		pFnAdjustTurn = (UFunction*) UObject::GObjObjects()->Data[ 44223 ];

	UGameThirdPersonCamera_execAdjustTurn_Parms AdjustTurn_Parms;

	this->ProcessEvent ( pFnAdjustTurn, &AdjustTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameThirdPersonCamera::EndTurn ( )
{
	static UFunction* pFnEndTurn = NULL;

	if ( ! pFnEndTurn )
		pFnEndTurn = (UFunction*) UObject::GObjObjects()->Data[ 44222 ];

	UGameThirdPersonCamera_execEndTurn_Parms EndTurn_Parms;

	pFnEndTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndTurn, &EndTurn_Parms, NULL );

	pFnEndTurn->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] 
// Parameters infos:

void UGameThirdPersonCamera::BeginTurn ( )
{
	static UFunction* pFnBeginTurn = NULL;

	if ( ! pFnBeginTurn )
		pFnBeginTurn = (UFunction*) UObject::GObjObjects()->Data[ 44216 ];

	UGameThirdPersonCamera_execBeginTurn_Parms BeginTurn_Parms;

	this->ProcessEvent ( pFnBeginTurn, &BeginTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] ( FUNC_Native )
// Parameters infos:

void UGameThirdPersonCamera::PlayerUpdateCamera ( )
{
	static UFunction* pFnPlayerUpdateCamera = NULL;

	if ( ! pFnPlayerUpdateCamera )
		pFnPlayerUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 44211 ];

	UGameThirdPersonCamera_execPlayerUpdateCamera_Parms PlayerUpdateCamera_Parms;

	pFnPlayerUpdateCamera->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerUpdateCamera, &PlayerUpdateCamera_Parms, NULL );

	pFnPlayerUpdateCamera->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] 
// Parameters infos:

void UGameThirdPersonCamera::UpdateCamera ( )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 44206 ];

	UGameThirdPersonCamera_execUpdateCamera_Parms UpdateCamera_Parms;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameThirdPersonCamera::eventGetDesiredFOV ( )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 44203 ];

	UGameThirdPersonCamera_eventGetDesiredFOV_Parms GetDesiredFOV_Parms;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 44202 ];

	UGameThirdPersonCamera_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44201 ];

	UGameThirdPersonCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] 
// Parameters infos:

void UGameThirdPersonCamera::CreateCameraMode ( )
{
	static UFunction* pFnCreateCameraMode = NULL;

	if ( ! pFnCreateCameraMode )
		pFnCreateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 44197 ];

	UGameThirdPersonCamera_execCreateCameraMode_Parms CreateCameraMode_Parms;

	this->ProcessEvent ( pFnCreateCameraMode, &CreateCameraMode_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerCamera::AdjustFOVForViewport ( )
{
	static UFunction* pFnAdjustFOVForViewport = NULL;

	if ( ! pFnAdjustFOVForViewport )
		pFnAdjustFOVForViewport = (UFunction*) UObject::GObjObjects()->Data[ 43928 ];

	AGamePlayerCamera_execAdjustFOVForViewport_Parms AdjustFOVForViewport_Parms;

	pFnAdjustFOVForViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdjustFOVForViewport, &AdjustFOVForViewport_Parms, NULL );

	pFnAdjustFOVForViewport->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:

void AGamePlayerCamera::ProcessViewRotation ( )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 43924 ];

	AGamePlayerCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] 
// Parameters infos:

void AGamePlayerCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 43923 ];

	AGamePlayerCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] 
// Parameters infos:

void AGamePlayerCamera::SetColorScale ( )
{
	static UFunction* pFnSetColorScale = NULL;

	if ( ! pFnSetColorScale )
		pFnSetColorScale = (UFunction*) UObject::GObjObjects()->Data[ 43921 ];

	AGamePlayerCamera_execSetColorScale_Parms SetColorScale_Parms;

	this->ProcessEvent ( pFnSetColorScale, &SetColorScale_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] 
// Parameters infos:

void AGamePlayerCamera::DisplayDebug ( )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 43916 ];

	AGamePlayerCamera_execDisplayDebug_Parms DisplayDebug_Parms;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420102] 
// Parameters infos:

void AGamePlayerCamera::UpdateCameraLensEffects ( )
{
	static UFunction* pFnUpdateCameraLensEffects = NULL;

	if ( ! pFnUpdateCameraLensEffects )
		pFnUpdateCameraLensEffects = (UFunction*) UObject::GObjObjects()->Data[ 43913 ];

	AGamePlayerCamera_execUpdateCameraLensEffects_Parms UpdateCameraLensEffects_Parms;

	this->ProcessEvent ( pFnUpdateCameraLensEffects, &UpdateCameraLensEffects_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] 
// Parameters infos:

void AGamePlayerCamera::UpdateViewTarget ( )
{
	static UFunction* pFnUpdateViewTarget = NULL;

	if ( ! pFnUpdateViewTarget )
		pFnUpdateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 43907 ];

	AGamePlayerCamera_execUpdateViewTarget_Parms UpdateViewTarget_Parms;

	this->ProcessEvent ( pFnUpdateViewTarget, &UpdateViewTarget_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::ShouldConstrainAspectRatio ( )
{
	static UFunction* pFnShouldConstrainAspectRatio = NULL;

	if ( ! pFnShouldConstrainAspectRatio )
		pFnShouldConstrainAspectRatio = (UFunction*) UObject::GObjObjects()->Data[ 43905 ];

	AGamePlayerCamera_execShouldConstrainAspectRatio_Parms ShouldConstrainAspectRatio_Parms;

	this->ProcessEvent ( pFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] 
// Parameters infos:

void AGamePlayerCamera::FindBestCameraType ( )
{
	static UFunction* pFnFindBestCameraType = NULL;

	if ( ! pFnFindBestCameraType )
		pFnFindBestCameraType = (UFunction*) UObject::GObjObjects()->Data[ 43901 ];

	AGamePlayerCamera_execFindBestCameraType_Parms FindBestCameraType_Parms;

	this->ProcessEvent ( pFnFindBestCameraType, &FindBestCameraType_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 43900 ];

	AGamePlayerCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43899 ];

	AGamePlayerCamera_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] ( FUNC_Native )
// Parameters infos:

void AGamePlayerCamera::CacheLastTargetBaseInfo ( )
{
	static UFunction* pFnCacheLastTargetBaseInfo = NULL;

	if ( ! pFnCacheLastTargetBaseInfo )
		pFnCacheLastTargetBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 43897 ];

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Parms CacheLastTargetBaseInfo_Parms;

	pFnCacheLastTargetBaseInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Parms, NULL );

	pFnCacheLastTargetBaseInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] 
// Parameters infos:

void AGamePlayerCamera::CreateCamera ( )
{
	static UFunction* pFnCreateCamera = NULL;

	if ( ! pFnCreateCamera )
		pFnCreateCamera = (UFunction*) UObject::GObjObjects()->Data[ 43893 ];

	AGamePlayerCamera_execCreateCamera_Parms CreateCamera_Parms;

	this->ProcessEvent ( pFnCreateCamera, &CreateCamera_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameThirdPersonCameraMode::SetViewOffset ( )
{
	static UFunction* pFnSetViewOffset = NULL;

	if ( ! pFnSetViewOffset )
		pFnSetViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 44385 ];

	UGameThirdPersonCameraMode_execSetViewOffset_Parms SetViewOffset_Parms;

	pFnSetViewOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewOffset, &SetViewOffset_Parms, NULL );

	pFnSetViewOffset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] 
// Parameters infos:

void UGameThirdPersonCameraMode::ModifyPostProcessSettings ( )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 44383 ];

	UGameThirdPersonCameraMode_execModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] 
// Parameters infos:

void UGameThirdPersonCameraMode::UpdatePostProcess ( )
{
	static UFunction* pFnUpdatePostProcess = NULL;

	if ( ! pFnUpdatePostProcess )
		pFnUpdatePostProcess = (UFunction*) UObject::GObjObjects()->Data[ 44373 ];

	UGameThirdPersonCameraMode_execUpdatePostProcess_Parms UpdatePostProcess_Parms;

	this->ProcessEvent ( pFnUpdatePostProcess, &UpdatePostProcess_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] 
// Parameters infos:

void UGameThirdPersonCameraMode::DOFTrace ( )
{
	static UFunction* pFnDOFTrace = NULL;

	if ( ! pFnDOFTrace )
		pFnDOFTrace = (UFunction*) UObject::GObjObjects()->Data[ 44365 ];

	UGameThirdPersonCameraMode_execDOFTrace_Parms DOFTrace_Parms;

	this->ProcessEvent ( pFnDOFTrace, &DOFTrace_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] 
// Parameters infos:

void UGameThirdPersonCameraMode::GetDOFFocusLoc ( )
{
	static UFunction* pFnGetDOFFocusLoc = NULL;

	if ( ! pFnGetDOFFocusLoc )
		pFnGetDOFFocusLoc = (UFunction*) UObject::GObjObjects()->Data[ 44360 ];

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Parms GetDOFFocusLoc_Parms;

	this->ProcessEvent ( pFnGetDOFFocusLoc, &GetDOFFocusLoc_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] 
// Parameters infos:

void UGameThirdPersonCameraMode::ProcessViewRotation ( )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 44355 ];

	UGameThirdPersonCameraMode_execProcessViewRotation_Parms ProcessViewRotation_Parms;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] 
// Parameters infos:

void UGameThirdPersonCameraMode::SetFocusPoint ( )
{
	static UFunction* pFnSetFocusPoint = NULL;

	if ( ! pFnSetFocusPoint )
		pFnSetFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 44272 ];

	UGameThirdPersonCameraMode_execSetFocusPoint_Parms SetFocusPoint_Parms;

	this->ProcessEvent ( pFnSetFocusPoint, &SetFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc ( )
{
	static UFunction* pFnGetCameraWorstCaseLoc = NULL;

	if ( ! pFnGetCameraWorstCaseLoc )
		pFnGetCameraWorstCaseLoc = (UFunction*) UObject::GObjObjects()->Data[ 44350 ];

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Parms GetCameraWorstCaseLoc_Parms;

	this->ProcessEvent ( pFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCameraMode::GetDesiredFOV ( )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 44274 ];

	UGameThirdPersonCameraMode_execGetDesiredFOV_Parms GetDesiredFOV_Parms;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameThirdPersonCameraMode::eventAdjustViewOffset ( )
{
	static UFunction* pFnAdjustViewOffset = NULL;

	if ( ! pFnAdjustViewOffset )
		pFnAdjustViewOffset = (UFunction*) UObject::GObjObjects()->Data[ 44345 ];

	UGameThirdPersonCameraMode_eventAdjustViewOffset_Parms AdjustViewOffset_Parms;

	this->ProcessEvent ( pFnAdjustViewOffset, &AdjustViewOffset_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] 
// Parameters infos:

void UGameThirdPersonCameraMode::OnBecomeInActive ( )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 44342 ];

	UGameThirdPersonCameraMode_execOnBecomeInActive_Parms OnBecomeInActive_Parms;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCameraMode::OnBecomeActive ( )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 44339 ];

	UGameThirdPersonCameraMode_execOnBecomeActive_Parms OnBecomeActive_Parms;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] 
// Parameters infos:

void UGameThirdPersonCameraMode::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 44338 ];

	UGameThirdPersonCameraMode_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::RelativeToWorldOffset ( )
{
	static UFunction* pFnRelativeToWorldOffset = NULL;

	if ( ! pFnRelativeToWorldOffset )
		pFnRelativeToWorldOffset = (UFunction*) UObject::GObjObjects()->Data[ 44023 ];

	UGameSpecialMove_execRelativeToWorldOffset_Parms RelativeToWorldOffset_Parms;

	pFnRelativeToWorldOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRelativeToWorldOffset, &RelativeToWorldOffset_Parms, NULL );

	pFnRelativeToWorldOffset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::WorldToRelativeOffset ( )
{
	static UFunction* pFnWorldToRelativeOffset = NULL;

	if ( ! pFnWorldToRelativeOffset )
		pFnWorldToRelativeOffset = (UFunction*) UObject::GObjObjects()->Data[ 44019 ];

	UGameSpecialMove_execWorldToRelativeOffset_Parms WorldToRelativeOffset_Parms;

	pFnWorldToRelativeOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWorldToRelativeOffset, &WorldToRelativeOffset_Parms, NULL );

	pFnWorldToRelativeOffset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::ForcePawnRotation ( )
{
	static UFunction* pFnForcePawnRotation = NULL;

	if ( ! pFnForcePawnRotation )
		pFnForcePawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 44015 ];

	UGameSpecialMove_execForcePawnRotation_Parms ForcePawnRotation_Parms;

	pFnForcePawnRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForcePawnRotation, &ForcePawnRotation_Parms, NULL );

	pFnForcePawnRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00020002] 
// Parameters infos:

void UGameSpecialMove::MessageEvent ( )
{
	static UFunction* pFnMessageEvent = NULL;

	if ( ! pFnMessageEvent )
		pFnMessageEvent = (UFunction*) UObject::GObjObjects()->Data[ 44011 ];

	UGameSpecialMove_execMessageEvent_Parms MessageEvent_Parms;

	this->ProcessEvent ( pFnMessageEvent, &MessageEvent_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::ResetFacePreciseRotation ( )
{
	static UFunction* pFnResetFacePreciseRotation = NULL;

	if ( ! pFnResetFacePreciseRotation )
		pFnResetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 44010 ];

	UGameSpecialMove_execResetFacePreciseRotation_Parms ResetFacePreciseRotation_Parms;

	pFnResetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetFacePreciseRotation, &ResetFacePreciseRotation_Parms, NULL );

	pFnResetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameSpecialMove::eventReachedPrecisePosition ( )
{
	static UFunction* pFnReachedPrecisePosition = NULL;

	if ( ! pFnReachedPrecisePosition )
		pFnReachedPrecisePosition = (UFunction*) UObject::GObjObjects()->Data[ 44009 ];

	UGameSpecialMove_eventReachedPrecisePosition_Parms ReachedPrecisePosition_Parms;

	this->ProcessEvent ( pFnReachedPrecisePosition, &ReachedPrecisePosition_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::SetFacePreciseRotation ( )
{
	static UFunction* pFnSetFacePreciseRotation = NULL;

	if ( ! pFnSetFacePreciseRotation )
		pFnSetFacePreciseRotation = (UFunction*) UObject::GObjObjects()->Data[ 44006 ];

	UGameSpecialMove_execSetFacePreciseRotation_Parms SetFacePreciseRotation_Parms;

	pFnSetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFacePreciseRotation, &SetFacePreciseRotation_Parms, NULL );

	pFnSetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGameSpecialMove::SetReachPreciseDestination ( )
{
	static UFunction* pFnSetReachPreciseDestination = NULL;

	if ( ! pFnSetReachPreciseDestination )
		pFnSetReachPreciseDestination = (UFunction*) UObject::GObjObjects()->Data[ 44003 ];

	UGameSpecialMove_execSetReachPreciseDestination_Parms SetReachPreciseDestination_Parms;

	pFnSetReachPreciseDestination->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetReachPreciseDestination, &SetReachPreciseDestination_Parms, NULL );

	pFnSetReachPreciseDestination->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00020002] 
// Parameters infos:

void UGameSpecialMove::ShouldReplicate ( )
{
	static UFunction* pFnShouldReplicate = NULL;

	if ( ! pFnShouldReplicate )
		pFnShouldReplicate = (UFunction*) UObject::GObjObjects()->Data[ 44001 ];

	UGameSpecialMove_execShouldReplicate_Parms ShouldReplicate_Parms;

	this->ProcessEvent ( pFnShouldReplicate, &ShouldReplicate_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::SpecialMoveFlagsUpdated ( )
{
	static UFunction* pFnSpecialMoveFlagsUpdated = NULL;

	if ( ! pFnSpecialMoveFlagsUpdated )
		pFnSpecialMoveFlagsUpdated = (UFunction*) UObject::GObjObjects()->Data[ 44000 ];

	UGameSpecialMove_execSpecialMoveFlagsUpdated_Parms SpecialMoveFlagsUpdated_Parms;

	this->ProcessEvent ( pFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 43998 ];

	UGameSpecialMove_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::SpecialMoveEnded ( )
{
	static UFunction* pFnSpecialMoveEnded = NULL;

	if ( ! pFnSpecialMoveEnded )
		pFnSpecialMoveEnded = (UFunction*) UObject::GObjObjects()->Data[ 43995 ];

	UGameSpecialMove_execSpecialMoveEnded_Parms SpecialMoveEnded_Parms;

	this->ProcessEvent ( pFnSpecialMoveEnded, &SpecialMoveEnded_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::SpecialMoveStarted ( )
{
	static UFunction* pFnSpecialMoveStarted = NULL;

	if ( ! pFnSpecialMoveStarted )
		pFnSpecialMoveStarted = (UFunction*) UObject::GObjObjects()->Data[ 43992 ];

	UGameSpecialMove_execSpecialMoveStarted_Parms SpecialMoveStarted_Parms;

	this->ProcessEvent ( pFnSpecialMoveStarted, &SpecialMoveStarted_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00080002] 
// Parameters infos:

void UGameSpecialMove::InternalCanDoSpecialMove ( )
{
	static UFunction* pFnInternalCanDoSpecialMove = NULL;

	if ( ! pFnInternalCanDoSpecialMove )
		pFnInternalCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43990 ];

	UGameSpecialMove_execInternalCanDoSpecialMove_Parms InternalCanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00024003] ( FUNC_Final )
// Parameters infos:

void UGameSpecialMove::CanDoSpecialMove ( )
{
	static UFunction* pFnCanDoSpecialMove = NULL;

	if ( ! pFnCanDoSpecialMove )
		pFnCanDoSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43987 ];

	UGameSpecialMove_execCanDoSpecialMove_Parms CanDoSpecialMove_Parms;

	this->ProcessEvent ( pFnCanDoSpecialMove, &CanDoSpecialMove_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00020002] 
// Parameters infos:

void UGameSpecialMove::CanOverrideSpecialMove ( )
{
	static UFunction* pFnCanOverrideSpecialMove = NULL;

	if ( ! pFnCanOverrideSpecialMove )
		pFnCanOverrideSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43984 ];

	UGameSpecialMove_execCanOverrideSpecialMove_Parms CanOverrideSpecialMove_Parms;

	this->ProcessEvent ( pFnCanOverrideSpecialMove, &CanOverrideSpecialMove_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00020002] 
// Parameters infos:

void UGameSpecialMove::CanOverrideMoveWith ( )
{
	static UFunction* pFnCanOverrideMoveWith = NULL;

	if ( ! pFnCanOverrideMoveWith )
		pFnCanOverrideMoveWith = (UFunction*) UObject::GObjObjects()->Data[ 43981 ];

	UGameSpecialMove_execCanOverrideMoveWith_Parms CanOverrideMoveWith_Parms;

	this->ProcessEvent ( pFnCanOverrideMoveWith, &CanOverrideMoveWith_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00020002] 
// Parameters infos:

void UGameSpecialMove::CanChainMove ( )
{
	static UFunction* pFnCanChainMove = NULL;

	if ( ! pFnCanChainMove )
		pFnCanChainMove = (UFunction*) UObject::GObjObjects()->Data[ 43978 ];

	UGameSpecialMove_execCanChainMove_Parms CanChainMove_Parms;

	this->ProcessEvent ( pFnCanChainMove, &CanChainMove_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00020000] 
// Parameters infos:

void UGameSpecialMove::ExtractSpecialMoveFlags ( )
{
	static UFunction* pFnExtractSpecialMoveFlags = NULL;

	if ( ! pFnExtractSpecialMoveFlags )
		pFnExtractSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 43976 ];

	UGameSpecialMove_execExtractSpecialMoveFlags_Parms ExtractSpecialMoveFlags_Parms;

	this->ProcessEvent ( pFnExtractSpecialMoveFlags, &ExtractSpecialMoveFlags_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00420000] 
// Parameters infos:

void UGameSpecialMove::InitSpecialMoveFlags ( )
{
	static UFunction* pFnInitSpecialMoveFlags = NULL;

	if ( ! pFnInitSpecialMoveFlags )
		pFnInitSpecialMoveFlags = (UFunction*) UObject::GObjObjects()->Data[ 43974 ];

	UGameSpecialMove_execInitSpecialMoveFlags_Parms InitSpecialMoveFlags_Parms;

	this->ProcessEvent ( pFnInitSpecialMoveFlags, &InitSpecialMoveFlags_Parms, NULL );
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00020002] 
// Parameters infos:

void UGameSpecialMove::InitSpecialMove ( )
{
	static UFunction* pFnInitSpecialMove = NULL;

	if ( ! pFnInitSpecialMove )
		pFnInitSpecialMove = (UFunction*) UObject::GObjObjects()->Data[ 43971 ];

	UGameSpecialMove_execInitSpecialMove_Parms InitSpecialMove_Parms;

	this->ProcessEvent ( pFnInitSpecialMove, &InitSpecialMove_Parms, NULL );
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStateObject::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44045 ];

	UGameStateObject_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStateObject::eventPreProcessStream ( )
{
	static UFunction* pFnPreProcessStream = NULL;

	if ( ! pFnPreProcessStream )
		pFnPreProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 44044 ];

	UGameStateObject_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreProcessStream, &PreProcessStream_Parms, NULL );

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::GetAggregateMappingIDs ( )
{
	static UFunction* pFnGetAggregateMappingIDs = NULL;

	if ( ! pFnGetAggregateMappingIDs )
		pFnGetAggregateMappingIDs = (UFunction*) UObject::GObjObjects()->Data[ 44121 ];

	UGameStatsAggregator_execGetAggregateMappingIDs_Parms GetAggregateMappingIDs_Parms;

	pFnGetAggregateMappingIDs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAggregateMappingIDs, &GetAggregateMappingIDs_Parms, NULL );

	pFnGetAggregateMappingIDs->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 44120 ];

	UGameStatsAggregator_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPostProcessStream ( )
{
	static UFunction* pFnPostProcessStream = NULL;

	if ( ! pFnPostProcessStream )
		pFnPostProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 44119 ];

	UGameStatsAggregator_eventPostProcessStream_Parms PostProcessStream_Parms;

	pFnPostProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostProcessStream, &PostProcessStream_Parms, NULL );

	pFnPostProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPreProcessStream ( )
{
	static UFunction* pFnPreProcessStream = NULL;

	if ( ! pFnPreProcessStream )
		pFnPreProcessStream = (UFunction*) UObject::GObjObjects()->Data[ 44118 ];

	UGameStatsAggregator_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreProcessStream, &PreProcessStream_Parms, NULL );

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ADebugCameraHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 42256 ];

	ADebugCameraHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
// [0x00420002] 
// Parameters infos:

void ADebugCameraHUD::DisplayMaterials ( )
{
	static UFunction* pFnDisplayMaterials = NULL;

	if ( ! pFnDisplayMaterials )
		pFnDisplayMaterials = (UFunction*) UObject::GObjObjects()->Data[ 42247 ];

	ADebugCameraHUD_execDisplayMaterials_Parms DisplayMaterials_Parms;

	this->ProcessEvent ( pFnDisplayMaterials, &DisplayMaterials_Parms, NULL );
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ADebugCameraHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42246 ];

	ADebugCameraHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.DebugCameraInput.InputKey
// [0x00024002] 
// Parameters infos:

void UDebugCameraInput::InputKey ( )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 42273 ];

	UDebugCameraInput_execInputKey_Parms InputKey_Parms;

	this->ProcessEvent ( pFnInputKey, &InputKey_Parms, NULL );
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] 
// Parameters infos:

void UGameCrowdSpawnInterface::GetSpawnPosition ( )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 43636 ];

	UGameCrowdSpawnInterface_execGetSpawnPosition_Parms GetSpawnPosition_Parms;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor ( )
{
	static UFunction* pFnIsEnemyBasedOnInterpActor = NULL;

	if ( ! pFnIsEnemyBasedOnInterpActor )
		pFnIsEnemyBasedOnInterpActor = (UFunction*) UObject::GObjObjects()->Data[ 42788 ];

	UGameAICmd_Hover_MoveToGoal_execIsEnemyBasedOnInterpActor_Parms IsEnemyBasedOnInterpActor_Parms;

	this->ProcessEvent ( pFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal::HandlePathObstruction ( )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 42766 ];

	UGameAICmd_Hover_MoveToGoal_execHandlePathObstruction_Parms HandlePathObstruction_Parms;

	this->ProcessEvent ( pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 42765 ];

	UGameAICmd_Hover_MoveToGoal_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// [0x00022002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal::MoveToGoal ( )
{
	static UFunction* pFnMoveToGoal = NULL;

	if ( ! pFnMoveToGoal )
		pFnMoveToGoal = (UFunction*) UObject::GObjObjects()->Data[ 42758 ];

	UGameAICmd_Hover_MoveToGoal_execMoveToGoal_Parms MoveToGoal_Parms;

	this->ProcessEvent ( pFnMoveToGoal, &MoveToGoal_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::eventDrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 42880 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_eventDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor ( )
{
	static UFunction* pFnIsEnemyBasedOnInterpActor = NULL;

	if ( ! pFnIsEnemyBasedOnInterpActor )
		pFnIsEnemyBasedOnInterpActor = (UFunction*) UObject::GObjObjects()->Data[ 42877 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execIsEnemyBasedOnInterpActor_Parms IsEnemyBasedOnInterpActor_Parms;

	this->ProcessEvent ( pFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs ( )
{
	static UFunction* pFnShouldUpdateBreadCrumbs = NULL;

	if ( ! pFnShouldUpdateBreadCrumbs )
		pFnShouldUpdateBreadCrumbs = (UFunction*) UObject::GObjObjects()->Data[ 42849 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execShouldUpdateBreadCrumbs_Parms ShouldUpdateBreadCrumbs_Parms;

	this->ProcessEvent ( pFnShouldUpdateBreadCrumbs, &ShouldUpdateBreadCrumbs_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal ( )
{
	static UFunction* pFnHasReachedGoal = NULL;

	if ( ! pFnHasReachedGoal )
		pFnHasReachedGoal = (UFunction*) UObject::GObjObjects()->Data[ 42847 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHasReachedGoal_Parms HasReachedGoal_Parms;

	this->ProcessEvent ( pFnHasReachedGoal, &HasReachedGoal_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// [0x00020000] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath ( )
{
	static UFunction* pFnReEvaluatePath = NULL;

	if ( ! pFnReEvaluatePath )
		pFnReEvaluatePath = (UFunction*) UObject::GObjObjects()->Data[ 42846 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execReEvaluatePath_Parms ReEvaluatePath_Parms;

	this->ProcessEvent ( pFnReEvaluatePath, &ReEvaluatePath_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction ( )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 42832 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHandlePathObstruction_Parms HandlePathObstruction_Parms;

	this->ProcessEvent ( pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick ( )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42830 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execTick_Parms Tick_Parms;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 42829 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 42828 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// [0x00022002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::HoverBackToMesh ( )
{
	static UFunction* pFnHoverBackToMesh = NULL;

	if ( ! pFnHoverBackToMesh )
		pFnHoverBackToMesh = (UFunction*) UObject::GObjObjects()->Data[ 42824 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverBackToMesh_Parms HoverBackToMesh_Parms;

	this->ProcessEvent ( pFnHoverBackToMesh, &HoverBackToMesh_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// [0x00022002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::HoverToPoint ( )
{
	static UFunction* pFnHoverToPoint = NULL;

	if ( ! pFnHoverToPoint )
		pFnHoverToPoint = (UFunction*) UObject::GObjObjects()->Data[ 42817 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToPoint_Parms HoverToPoint_Parms;

	this->ProcessEvent ( pFnHoverToPoint, &HoverToPoint_Parms, NULL );
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// [0x00022002] 
// Parameters infos:

void UGameAICmd_Hover_MoveToGoal_Mesh::HoverToGoal ( )
{
	static UFunction* pFnHoverToGoal = NULL;

	if ( ! pFnHoverToGoal )
		pFnHoverToGoal = (UFunction*) UObject::GObjObjects()->Data[ 42810 ];

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToGoal_Parms HoverToGoal_Parms;

	this->ProcessEvent ( pFnHoverToGoal, &HoverToGoal_Parms, NULL );
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00020000] 
// Parameters infos:

void UGameCrowdSpawnerInterface::GetMaxSpawnDist ( )
{
	static UFunction* pFnGetMaxSpawnDist = NULL;

	if ( ! pFnGetMaxSpawnDist )
		pFnGetMaxSpawnDist = (UFunction*) UObject::GObjObjects()->Data[ 43256 ];

	UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Parms GetMaxSpawnDist_Parms;

	this->ProcessEvent ( pFnGetMaxSpawnDist, &GetMaxSpawnDist_Parms, NULL );
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00020000] 
// Parameters infos:

void UGameCrowdSpawnerInterface::AgentDestroyed ( )
{
	static UFunction* pFnAgentDestroyed = NULL;

	if ( ! pFnAgentDestroyed )
		pFnAgentDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43633 ];

	UGameCrowdSpawnerInterface_execAgentDestroyed_Parms AgentDestroyed_Parms;

	this->ProcessEvent ( pFnAgentDestroyed, &AgentDestroyed_Parms, NULL );
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:

void UGameFixedCamera::OnBecomeActive ( )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 43857 ];

	UGameFixedCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] 
// Parameters infos:

void UGameFixedCamera::UpdateCamera ( )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 43851 ];

	UGameFixedCamera_execUpdateCamera_Parms UpdateCamera_Parms;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// [0x00020102] 
// Parameters infos:

void AGameKActorSpawnableEffect::StartScalingDown ( )
{
	static UFunction* pFnStartScalingDown = NULL;

	if ( ! pFnStartScalingDown )
		pFnStartScalingDown = (UFunction*) UObject::GObjObjects()->Data[ 43864 ];

	AGameKActorSpawnableEffect_execStartScalingDown_Parms StartScalingDown_Parms;

	this->ProcessEvent ( pFnStartScalingDown, &StartScalingDown_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameKActorSpawnableEffect::eventFellOutOfWorld ( )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 43862 ];

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameKActorSpawnableEffect::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43861 ];

	AGameKActorSpawnableEffect_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// [0x00820002] 
// Parameters infos:

void AMobileDebugCameraController::SetupDebugZones ( )
{
	static UFunction* pFnSetupDebugZones = NULL;

	if ( ! pFnSetupDebugZones )
		pFnSetupDebugZones = (UFunction*) UObject::GObjObjects()->Data[ 44405 ];

	AMobileDebugCameraController_execSetupDebugZones_Parms SetupDebugZones_Parms;

	this->ProcessEvent ( pFnSetupDebugZones, &SetupDebugZones_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraController::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44404 ];

	AMobileDebugCameraController_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
// [0x00020002] 
// Parameters infos:

void AMobileDebugCameraController::OnDeactivate ( )
{
	static UFunction* pFnOnDeactivate = NULL;

	if ( ! pFnOnDeactivate )
		pFnOnDeactivate = (UFunction*) UObject::GObjObjects()->Data[ 44401 ];

	AMobileDebugCameraController_execOnDeactivate_Parms OnDeactivate_Parms;

	this->ProcessEvent ( pFnOnDeactivate, &OnDeactivate_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// [0x00020002] 
// Parameters infos:

void AMobileDebugCameraController::InitDebugInputSystem ( )
{
	static UFunction* pFnInitDebugInputSystem = NULL;

	if ( ! pFnInitDebugInputSystem )
		pFnInitDebugInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 44400 ];

	AMobileDebugCameraController_execInitDebugInputSystem_Parms InitDebugInputSystem_Parms;

	this->ProcessEvent ( pFnInitDebugInputSystem, &InitDebugInputSystem_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraController.OnActivate
// [0x00020002] 
// Parameters infos:

void AMobileDebugCameraController::OnActivate ( )
{
	static UFunction* pFnOnActivate = NULL;

	if ( ! pFnOnActivate )
		pFnOnActivate = (UFunction*) UObject::GObjObjects()->Data[ 44398 ];

	AMobileDebugCameraController_execOnActivate_Parms OnActivate_Parms;

	this->ProcessEvent ( pFnOnActivate, &OnActivate_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraInput.InputKey
// [0x00024002] 
// Parameters infos:

void UMobileDebugCameraInput::InputKey ( )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 44775 ];

	UMobileDebugCameraInput_execInputKey_Parms InputKey_Parms;

	this->ProcessEvent ( pFnInputKey, &InputKey_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 44586 ];

	AMobileDebugCameraHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// [0x00420002] 
// Parameters infos:

void AMobileDebugCameraHUD::DisplayMaterials ( )
{
	static UFunction* pFnDisplayMaterials = NULL;

	if ( ! pFnDisplayMaterials )
		pFnDisplayMaterials = (UFunction*) UObject::GObjObjects()->Data[ 44577 ];

	AMobileDebugCameraHUD_execDisplayMaterials_Parms DisplayMaterials_Parms;

	this->ProcessEvent ( pFnDisplayMaterials, &DisplayMaterials_Parms, NULL );
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMobileDebugCameraHUD::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44576 ];

	AMobileDebugCameraHUD_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.UpdateItemViewports
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::UpdateItemViewports ( )
{
	static UFunction* pFnUpdateItemViewports = NULL;

	if ( ! pFnUpdateItemViewports )
		pFnUpdateItemViewports = (UFunction*) UObject::GObjObjects()->Data[ 44998 ];

	UMobileMenuBar_execUpdateItemViewports_Parms UpdateItemViewports_Parms;

	this->ProcessEvent ( pFnUpdateItemViewports, &UpdateItemViewports_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.SetFirstItem
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::SetFirstItem ( )
{
	static UFunction* pFnSetFirstItem = NULL;

	if ( ! pFnSetFirstItem )
		pFnSetFirstItem = (UFunction*) UObject::GObjObjects()->Data[ 44996 ];

	UMobileMenuBar_execSetFirstItem_Parms SetFirstItem_Parms;

	this->ProcessEvent ( pFnSetFirstItem, &SetFirstItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.RenderItem
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::RenderItem ( )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 44992 ];

	UMobileMenuBar_execRenderItem_Parms RenderItem_Parms;

	this->ProcessEvent ( pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.RenderObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 44986 ];

	UMobileMenuBar_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuBar::eventOnTouch ( )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 44979 ];

	UMobileMenuBar_eventOnTouch_Parms OnTouch_Parms;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.GetSelected
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::GetSelected ( )
{
	static UFunction* pFnGetSelected = NULL;

	if ( ! pFnGetSelected )
		pFnGetSelected = (UFunction*) UObject::GObjObjects()->Data[ 44977 ];

	UMobileMenuBar_execGetSelected_Parms GetSelected_Parms;

	this->ProcessEvent ( pFnGetSelected, &GetSelected_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.Num
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::Num ( )
{
	static UFunction* pFnNum = NULL;

	if ( ! pFnNum )
		pFnNum = (UFunction*) UObject::GObjObjects()->Data[ 44975 ];

	UMobileMenuBar_execNum_Parms Num_Parms;

	this->ProcessEvent ( pFnNum, &Num_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.AddItem
// [0x00024002] 
// Parameters infos:

void UMobileMenuBar::AddItem ( )
{
	static UFunction* pFnAddItem = NULL;

	if ( ! pFnAddItem )
		pFnAddItem = (UFunction*) UObject::GObjObjects()->Data[ 44972 ];

	UMobileMenuBar_execAddItem_Parms AddItem_Parms;

	this->ProcessEvent ( pFnAddItem, &AddItem_Parms, NULL );
};

// Function GameFramework.MobileMenuBar.InitMenuObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuBar::InitMenuObject ( )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 44966 ];

	UMobileMenuBar_execInitMenuObject_Parms InitMenuObject_Parms;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuBarItem.RenderItem
// [0x00020000] 
// Parameters infos:

void UMobileMenuBarItem::RenderItem ( )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 45007 ];

	UMobileMenuBarItem_execRenderItem_Parms RenderItem_Parms;

	this->ProcessEvent ( pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00020002] 
// Parameters infos:

void UMobileMenuButton::RenderCaption ( )
{
	static UFunction* pFnRenderCaption = NULL;

	if ( ! pFnRenderCaption )
		pFnRenderCaption = (UFunction*) UObject::GObjObjects()->Data[ 45030 ];

	UMobileMenuButton_execRenderCaption_Parms RenderCaption_Parms;

	this->ProcessEvent ( pFnRenderCaption, &RenderCaption_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00820002] 
// Parameters infos:

void UMobileMenuButton::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 45025 ];

	UMobileMenuButton_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuButton.InitMenuObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuButton::InitMenuObject ( )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 45018 ];

	UMobileMenuButton_execInitMenuObject_Parms InitMenuObject_Parms;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuElement.RenderElement
// [0x00020000] 
// Parameters infos:

void UMobileMenuElement::RenderElement ( )
{
	static UFunction* pFnRenderElement = NULL;

	if ( ! pFnRenderElement )
		pFnRenderElement = (UFunction*) UObject::GObjObjects()->Data[ 45048 ];

	UMobileMenuElement_execRenderElement_Parms RenderElement_Parms;

	this->ProcessEvent ( pFnRenderElement, &RenderElement_Parms, NULL );
};

// Function GameFramework.MobileMenuElement.OnTouch
// [0x00020002] 
// Parameters infos:

void UMobileMenuElement::OnTouch ( )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 45042 ];

	UMobileMenuElement_execOnTouch_Parms OnTouch_Parms;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00020000] 
// Parameters infos:

void AMobileMenuGame::RestartPlayer ( )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45060 ];

	AMobileMenuGame_execRestartPlayer_Parms RestartPlayer_Parms;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00020000] 
// Parameters infos:

void AMobileMenuGame::StartMatch ( )
{
	static UFunction* pFnStartMatch = NULL;

	if ( ! pFnStartMatch )
		pFnStartMatch = (UFunction*) UObject::GObjObjects()->Data[ 45059 ];

	AMobileMenuGame_execStartMatch_Parms StartMatch_Parms;

	this->ProcessEvent ( pFnStartMatch, &StartMatch_Parms, NULL );
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AMobileMenuGame::eventPostLogin ( )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 45056 ];

	AMobileMenuGame_eventPostLogin_Parms PostLogin_Parms;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.RenderDragItem
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::RenderDragItem ( )
{
	static UFunction* pFnRenderDragItem = NULL;

	if ( ! pFnRenderDragItem )
		pFnRenderDragItem = (UFunction*) UObject::GObjObjects()->Data[ 45178 ];

	UMobileMenuInventory_execRenderDragItem_Parms RenderDragItem_Parms;

	this->ProcessEvent ( pFnRenderDragItem, &RenderDragItem_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.RenderObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 45172 ];

	UMobileMenuInventory_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::GetIndexOfItem ( )
{
	static UFunction* pFnGetIndexOfItem = NULL;

	if ( ! pFnGetIndexOfItem )
		pFnGetIndexOfItem = (UFunction*) UObject::GObjObjects()->Data[ 45169 ];

	UMobileMenuInventory_execGetIndexOfItem_Parms GetIndexOfItem_Parms;

	this->ProcessEvent ( pFnGetIndexOfItem, &GetIndexOfItem_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::FindSlotIndexAt ( )
{
	static UFunction* pFnFindSlotIndexAt = NULL;

	if ( ! pFnFindSlotIndexAt )
		pFnFindSlotIndexAt = (UFunction*) UObject::GObjObjects()->Data[ 45161 ];

	UMobileMenuInventory_execFindSlotIndexAt_Parms FindSlotIndexAt_Parms;

	this->ProcessEvent ( pFnFindSlotIndexAt, &FindSlotIndexAt_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.InitDragAt
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::InitDragAt ( )
{
	static UFunction* pFnInitDragAt = NULL;

	if ( ! pFnInitDragAt )
		pFnInitDragAt = (UFunction*) UObject::GObjObjects()->Data[ 45158 ];

	UMobileMenuInventory_execInitDragAt_Parms InitDragAt_Parms;

	this->ProcessEvent ( pFnInitDragAt, &InitDragAt_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// [0x00080002] 
// Parameters infos:

void UMobileMenuInventory::UpdateItemInSlot ( )
{
	static UFunction* pFnUpdateItemInSlot = NULL;

	if ( ! pFnUpdateItemInSlot )
		pFnUpdateItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 45154 ];

	UMobileMenuInventory_execUpdateItemInSlot_Parms UpdateItemInSlot_Parms;

	this->ProcessEvent ( pFnUpdateItemInSlot, &UpdateItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.AddItemToSlot
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::AddItemToSlot ( )
{
	static UFunction* pFnAddItemToSlot = NULL;

	if ( ! pFnAddItemToSlot )
		pFnAddItemToSlot = (UFunction*) UObject::GObjObjects()->Data[ 45149 ];

	UMobileMenuInventory_execAddItemToSlot_Parms AddItemToSlot_Parms;

	this->ProcessEvent ( pFnAddItemToSlot, &AddItemToSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::SwapItemsInSlots ( )
{
	static UFunction* pFnSwapItemsInSlots = NULL;

	if ( ! pFnSwapItemsInSlots )
		pFnSwapItemsInSlots = (UFunction*) UObject::GObjObjects()->Data[ 45143 ];

	UMobileMenuInventory_execSwapItemsInSlots_Parms SwapItemsInSlots_Parms;

	this->ProcessEvent ( pFnSwapItemsInSlots, &SwapItemsInSlots_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.OnTouch
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuInventory::eventOnTouch ( )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 45135 ];

	UMobileMenuInventory_eventOnTouch_Parms OnTouch_Parms;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// [0x00024002] 
// Parameters infos:

void UMobileMenuInventory::CanPutItemInSlot ( )
{
	static UFunction* pFnCanPutItemInSlot = NULL;

	if ( ! pFnCanPutItemInSlot )
		pFnCanPutItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 45129 ];

	UMobileMenuInventory_execCanPutItemInSlot_Parms CanPutItemInSlot_Parms;

	this->ProcessEvent ( pFnCanPutItemInSlot, &CanPutItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.ScaleSlot
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void UMobileMenuInventory::ScaleSlot ( )
{
	static UFunction* pFnScaleSlot = NULL;

	if ( ! pFnScaleSlot )
		pFnScaleSlot = (UFunction*) UObject::GObjObjects()->Data[ 45127 ];

	UMobileMenuInventory_execScaleSlot_Parms ScaleSlot_Parms;

	this->ProcessEvent ( pFnScaleSlot, &ScaleSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.AddSlot
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::AddSlot ( )
{
	static UFunction* pFnAddSlot = NULL;

	if ( ! pFnAddSlot )
		pFnAddSlot = (UFunction*) UObject::GObjObjects()->Data[ 45124 ];

	UMobileMenuInventory_execAddSlot_Parms AddSlot_Parms;

	this->ProcessEvent ( pFnAddSlot, &AddSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.InitMenuObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuInventory::InitMenuObject ( )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 45117 ];

	UMobileMenuInventory_execInitMenuObject_Parms InitMenuObject_Parms;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// [0x00520000] 
// Parameters infos:

void UMobileMenuInventory::OnUpdateDrag ( )
{
	static UFunction* pFnOnUpdateDrag = NULL;

	if ( ! pFnOnUpdateDrag )
		pFnOnUpdateDrag = (UFunction*) UObject::GObjObjects()->Data[ 45114 ];

	UMobileMenuInventory_execOnUpdateDrag_Parms OnUpdateDrag_Parms;

	this->ProcessEvent ( pFnOnUpdateDrag, &OnUpdateDrag_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// [0x00120000] 
// Parameters infos:

void UMobileMenuInventory::DoCanPutItemInSlot ( )
{
	static UFunction* pFnDoCanPutItemInSlot = NULL;

	if ( ! pFnDoCanPutItemInSlot )
		pFnDoCanPutItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 45107 ];

	UMobileMenuInventory_execDoCanPutItemInSlot_Parms DoCanPutItemInSlot_Parms;

	this->ProcessEvent ( pFnDoCanPutItemInSlot, &DoCanPutItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// [0x00120000] 
// Parameters infos:

void UMobileMenuInventory::OnUpdateItemInSlot ( )
{
	static UFunction* pFnOnUpdateItemInSlot = NULL;

	if ( ! pFnOnUpdateItemInSlot )
		pFnOnUpdateItemInSlot = (UFunction*) UObject::GObjObjects()->Data[ 45104 ];

	UMobileMenuInventory_execOnUpdateItemInSlot_Parms OnUpdateItemInSlot_Parms;

	this->ProcessEvent ( pFnOnUpdateItemInSlot, &OnUpdateItemInSlot_Parms, NULL );
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuLabel::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 45193 ];

	UMobileMenuLabel_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuList.ItemScrollSize
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::ItemScrollSize ( )
{
	static UFunction* pFnItemScrollSize = NULL;

	if ( ! pFnItemScrollSize )
		pFnItemScrollSize = (UFunction*) UObject::GObjObjects()->Data[ 45334 ];

	UMobileMenuList_execItemScrollSize_Parms ItemScrollSize_Parms;

	this->ProcessEvent ( pFnItemScrollSize, &ItemScrollSize_Parms, NULL );
};

// Function GameFramework.MobileMenuList.RenderObject
// [0x00820002] 
// Parameters infos:

void UMobileMenuList::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 45319 ];

	UMobileMenuList_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuList.UpdateScroll
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::UpdateScroll ( )
{
	static UFunction* pFnUpdateScroll = NULL;

	if ( ! pFnUpdateScroll )
		pFnUpdateScroll = (UFunction*) UObject::GObjObjects()->Data[ 45316 ];

	UMobileMenuList_execUpdateScroll_Parms UpdateScroll_Parms;

	this->ProcessEvent ( pFnUpdateScroll, &UpdateScroll_Parms, NULL );
};

// Function GameFramework.MobileMenuList.CalculateSelectedItem
// [0x00420002] 
// Parameters infos:

void UMobileMenuList::CalculateSelectedItem ( )
{
	static UFunction* pFnCalculateSelectedItem = NULL;

	if ( ! pFnCalculateSelectedItem )
		pFnCalculateSelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 45305 ];

	UMobileMenuList_execCalculateSelectedItem_Parms CalculateSelectedItem_Parms;

	this->ProcessEvent ( pFnCalculateSelectedItem, &CalculateSelectedItem_Parms, NULL );
};

// Function GameFramework.MobileMenuList.GetItemClickPosition
// [0x00420002] 
// Parameters infos:

void UMobileMenuList::GetItemClickPosition ( )
{
	static UFunction* pFnGetItemClickPosition = NULL;

	if ( ! pFnGetItemClickPosition )
		pFnGetItemClickPosition = (UFunction*) UObject::GObjObjects()->Data[ 45297 ];

	UMobileMenuList_execGetItemClickPosition_Parms GetItemClickPosition_Parms;

	this->ProcessEvent ( pFnGetItemClickPosition, &GetItemClickPosition_Parms, NULL );
};

// Function GameFramework.MobileMenuList.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuList::eventOnTouch ( )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 45281 ];

	UMobileMenuList_eventOnTouch_Parms OnTouch_Parms;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuList.SetSelectedItem
// [0x00024002] 
// Parameters infos:

void UMobileMenuList::SetSelectedItem ( )
{
	static UFunction* pFnSetSelectedItem = NULL;

	if ( ! pFnSetSelectedItem )
		pFnSetSelectedItem = (UFunction*) UObject::GObjObjects()->Data[ 45277 ];

	UMobileMenuList_execSetSelectedItem_Parms SetSelectedItem_Parms;

	this->ProcessEvent ( pFnSetSelectedItem, &SetSelectedItem_Parms, NULL );
};

// Function GameFramework.MobileMenuList.GetNumVisible
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::GetNumVisible ( )
{
	static UFunction* pFnGetNumVisible = NULL;

	if ( ! pFnGetNumVisible )
		pFnGetNumVisible = (UFunction*) UObject::GObjObjects()->Data[ 45273 ];

	UMobileMenuList_execGetNumVisible_Parms GetNumVisible_Parms;

	this->ProcessEvent ( pFnGetNumVisible, &GetNumVisible_Parms, NULL );
};

// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::SetSelectedToVisibleIndex ( )
{
	static UFunction* pFnSetSelectedToVisibleIndex = NULL;

	if ( ! pFnSetSelectedToVisibleIndex )
		pFnSetSelectedToVisibleIndex = (UFunction*) UObject::GObjObjects()->Data[ 45269 ];

	UMobileMenuList_execSetSelectedToVisibleIndex_Parms SetSelectedToVisibleIndex_Parms;

	this->ProcessEvent ( pFnSetSelectedToVisibleIndex, &SetSelectedToVisibleIndex_Parms, NULL );
};

// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::GetVisibleIndexOfSelected ( )
{
	static UFunction* pFnGetVisibleIndexOfSelected = NULL;

	if ( ! pFnGetVisibleIndexOfSelected )
		pFnGetVisibleIndexOfSelected = (UFunction*) UObject::GObjObjects()->Data[ 45264 ];

	UMobileMenuList_execGetVisibleIndexOfSelected_Parms GetVisibleIndexOfSelected_Parms;

	this->ProcessEvent ( pFnGetVisibleIndexOfSelected, &GetVisibleIndexOfSelected_Parms, NULL );
};

// Function GameFramework.MobileMenuList.GetAmountSelected
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::GetAmountSelected ( )
{
	static UFunction* pFnGetAmountSelected = NULL;

	if ( ! pFnGetAmountSelected )
		pFnGetAmountSelected = (UFunction*) UObject::GObjObjects()->Data[ 45259 ];

	UMobileMenuList_execGetAmountSelected_Parms GetAmountSelected_Parms;

	this->ProcessEvent ( pFnGetAmountSelected, &GetAmountSelected_Parms, NULL );
};

// Function GameFramework.MobileMenuList.GetSelected
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::GetSelected ( )
{
	static UFunction* pFnGetSelected = NULL;

	if ( ! pFnGetSelected )
		pFnGetSelected = (UFunction*) UObject::GObjObjects()->Data[ 45256 ];

	UMobileMenuList_execGetSelected_Parms GetSelected_Parms;

	this->ProcessEvent ( pFnGetSelected, &GetSelected_Parms, NULL );
};

// Function GameFramework.MobileMenuList.Num
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::Num ( )
{
	static UFunction* pFnNum = NULL;

	if ( ! pFnNum )
		pFnNum = (UFunction*) UObject::GObjObjects()->Data[ 45254 ];

	UMobileMenuList_execNum_Parms Num_Parms;

	this->ProcessEvent ( pFnNum, &Num_Parms, NULL );
};

// Function GameFramework.MobileMenuList.AddItem
// [0x00024002] 
// Parameters infos:

void UMobileMenuList::AddItem ( )
{
	static UFunction* pFnAddItem = NULL;

	if ( ! pFnAddItem )
		pFnAddItem = (UFunction*) UObject::GObjObjects()->Data[ 45251 ];

	UMobileMenuList_execAddItem_Parms AddItem_Parms;

	this->ProcessEvent ( pFnAddItem, &AddItem_Parms, NULL );
};

// Function GameFramework.MobileMenuList.InitMenuObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuList::InitMenuObject ( )
{
	static UFunction* pFnInitMenuObject = NULL;

	if ( ! pFnInitMenuObject )
		pFnInitMenuObject = (UFunction*) UObject::GObjObjects()->Data[ 45245 ];

	UMobileMenuList_execInitMenuObject_Parms InitMenuObject_Parms;

	this->ProcessEvent ( pFnInitMenuObject, &InitMenuObject_Parms, NULL );
};

// Function GameFramework.MobileMenuListItem.RenderItem
// [0x00020000] 
// Parameters infos:

void UMobileMenuListItem::RenderItem ( )
{
	static UFunction* pFnRenderItem = NULL;

	if ( ! pFnRenderItem )
		pFnRenderItem = (UFunction*) UObject::GObjObjects()->Data[ 45341 ];

	UMobileMenuListItem_execRenderItem_Parms RenderItem_Parms;

	this->ProcessEvent ( pFnRenderItem, &RenderItem_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.RenderObject
// [0x00020002] 
// Parameters infos:

void UMobileMenuObjectProxy::RenderObject ( )
{
	static UFunction* pFnRenderObject = NULL;

	if ( ! pFnRenderObject )
		pFnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 45368 ];

	UMobileMenuObjectProxy_execRenderObject_Parms RenderObject_Parms;

	this->ProcessEvent ( pFnRenderObject, &RenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UMobileMenuObjectProxy::eventOnTouch ( )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 45361 ];

	UMobileMenuObjectProxy_eventOnTouch_Parms OnTouch_Parms;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// [0x00120000] 
// Parameters infos:

void UMobileMenuObjectProxy::OnRenderObject ( )
{
	static UFunction* pFnOnRenderObject = NULL;

	if ( ! pFnOnRenderObject )
		pFnOnRenderObject = (UFunction*) UObject::GObjObjects()->Data[ 45357 ];

	UMobileMenuObjectProxy_execOnRenderObject_Parms OnRenderObject_Parms;

	this->ProcessEvent ( pFnOnRenderObject, &OnRenderObject_Parms, NULL );
};

// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// [0x00120000] 
// Parameters infos:

void UMobileMenuObjectProxy::OnTouchEvent ( )
{
	static UFunction* pFnOnTouchEvent = NULL;

	if ( ! pFnOnTouchEvent )
		pFnOnTouchEvent = (UFunction*) UObject::GObjObjects()->Data[ 45347 ];

	UMobileMenuObjectProxy_execOnTouchEvent_Parms OnTouchEvent_Parms;

	this->ProcessEvent ( pFnOnTouchEvent, &OnTouchEvent_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleDragOver ( )
{
	static UFunction* pFnHandleDragOver = NULL;

	if ( ! pFnHandleDragOver )
		pFnHandleDragOver = (UFunction*) UObject::GObjObjects()->Data[ 45446 ];

	AMobileTouchInputVolume_execHandleDragOver_Parms HandleDragOver_Parms;

	this->ProcessEvent ( pFnHandleDragOver, &HandleDragOver_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleDoubleClick ( )
{
	static UFunction* pFnHandleDoubleClick = NULL;

	if ( ! pFnHandleDoubleClick )
		pFnHandleDoubleClick = (UFunction*) UObject::GObjObjects()->Data[ 45445 ];

	AMobileTouchInputVolume_execHandleDoubleClick_Parms HandleDoubleClick_Parms;

	this->ProcessEvent ( pFnHandleDoubleClick, &HandleDoubleClick_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
// [0x00020002] 
// Parameters infos:

void AMobileTouchInputVolume::HandleClick ( )
{
	static UFunction* pFnHandleClick = NULL;

	if ( ! pFnHandleClick )
		pFnHandleClick = (UFunction*) UObject::GObjObjects()->Data[ 45444 ];

	AMobileTouchInputVolume_execHandleClick_Parms HandleClick_Parms;

	this->ProcessEvent ( pFnHandleClick, &HandleClick_Parms, NULL );
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
// [0x00020102] 
// Parameters infos:

void AMobileTouchInputVolume::OnToggle ( )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 45442 ];

	AMobileTouchInputVolume_execOnToggle_Parms OnToggle_Parms;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleDragOver
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleDragOver ( )
{
	static UFunction* pFnHandleDragOver = NULL;

	if ( ! pFnHandleDragOver )
		pFnHandleDragOver = (UFunction*) UObject::GObjObjects()->Data[ 45670 ];

	UTouchableElement3D_execHandleDragOver_Parms HandleDragOver_Parms;

	this->ProcessEvent ( pFnHandleDragOver, &HandleDragOver_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleDoubleClick ( )
{
	static UFunction* pFnHandleDoubleClick = NULL;

	if ( ! pFnHandleDoubleClick )
		pFnHandleDoubleClick = (UFunction*) UObject::GObjObjects()->Data[ 45669 ];

	UTouchableElement3D_execHandleDoubleClick_Parms HandleDoubleClick_Parms;

	this->ProcessEvent ( pFnHandleDoubleClick, &HandleDoubleClick_Parms, NULL );
};

// Function GameFramework.TouchableElement3D.HandleClick
// [0x00020000] 
// Parameters infos:

void UTouchableElement3D::HandleClick ( )
{
	static UFunction* pFnHandleClick = NULL;

	if ( ! pFnHandleClick )
		pFnHandleClick = (UFunction*) UObject::GObjObjects()->Data[ 45668 ];

	UTouchableElement3D_execHandleClick_Parms HandleClick_Parms;

	this->ProcessEvent ( pFnHandleClick, &HandleClick_Parms, NULL );
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] ( FUNC_Event )
// Parameters infos:

void APlayerCollectorGame::eventGetSeamlessTravelActorList ( )
{
	static UFunction* pFnGetSeamlessTravelActorList = NULL;

	if ( ! pFnGetSeamlessTravelActorList )
		pFnGetSeamlessTravelActorList = (UFunction*) UObject::GObjObjects()->Data[ 45486 ];

	APlayerCollectorGame_eventGetSeamlessTravelActorList_Parms GetSeamlessTravelActorList_Parms;

	this->ProcessEvent ( pFnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Parms, NULL );
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] ( FUNC_Event )
// Parameters infos:

void APlayerCollectorGame::eventLogin ( )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 45479 ];

	APlayerCollectorGame_eventLogin_Parms Login_Parms;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
// [0x00020002] 
// Parameters infos:

void USeqEvent_HudRenderImage::Render ( )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 45584 ];

	USeqEvent_HudRenderImage_execRender_Parms Render_Parms;

	this->ProcessEvent ( pFnRender, &Render_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:

void USeqEvent_HudRenderText::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 45612 ];

	USeqEvent_HudRenderText_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );
};

// Function GameFramework.SeqEvent_HudRenderText.Render
// [0x00020002] 
// Parameters infos:

void USeqEvent_HudRenderText::Render ( )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 45601 ];

	USeqEvent_HudRenderText_execRender_Parms Render_Parms;

	this->ProcessEvent ( pFnRender, &Render_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif