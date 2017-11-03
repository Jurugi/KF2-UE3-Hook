/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_functions.h
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxFSCmdHandler::eventFSCommand ( )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = (UFunction*) UObject::GObjObjects()->Data[ 37988 ];

	UGFxFSCmdHandler_eventFSCommand_Parms FSCommand_Parms;

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::CloseAllMoviePlayers ( )
{
	static UFunction* pFnCloseAllMoviePlayers = NULL;

	if ( ! pFnCloseAllMoviePlayers )
		pFnCloseAllMoviePlayers = (UFunction*) UObject::GObjObjects()->Data[ 38013 ];

	UGFxInteraction_execCloseAllMoviePlayers_Parms CloseAllMoviePlayers_Parms;

	pFnCloseAllMoviePlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Parms, NULL );

	pFnCloseAllMoviePlayers->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifySplitscreenLayoutChanged ( )
{
	static UFunction* pFnNotifySplitscreenLayoutChanged = NULL;

	if ( ! pFnNotifySplitscreenLayoutChanged )
		pFnNotifySplitscreenLayoutChanged = (UFunction*) UObject::GObjObjects()->Data[ 38012 ];

	UGFxInteraction_execNotifySplitscreenLayoutChanged_Parms NotifySplitscreenLayoutChanged_Parms;

	pFnNotifySplitscreenLayoutChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifySplitscreenLayoutChanged, &NotifySplitscreenLayoutChanged_Parms, NULL );

	pFnNotifySplitscreenLayoutChanged->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifyPlayerRemoved ( )
{
	static UFunction* pFnNotifyPlayerRemoved = NULL;

	if ( ! pFnNotifyPlayerRemoved )
		pFnNotifyPlayerRemoved = (UFunction*) UObject::GObjObjects()->Data[ 38009 ];

	UGFxInteraction_execNotifyPlayerRemoved_Parms NotifyPlayerRemoved_Parms;

	pFnNotifyPlayerRemoved->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Parms, NULL );

	pFnNotifyPlayerRemoved->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifyPlayerAdded ( )
{
	static UFunction* pFnNotifyPlayerAdded = NULL;

	if ( ! pFnNotifyPlayerAdded )
		pFnNotifyPlayerAdded = (UFunction*) UObject::GObjObjects()->Data[ 38006 ];

	UGFxInteraction_execNotifyPlayerAdded_Parms NotifyPlayerAdded_Parms;

	pFnNotifyPlayerAdded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyPlayerAdded, &NotifyPlayerAdded_Parms, NULL );

	pFnNotifyPlayerAdded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 38005 ];

	UGFxInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	pFnNotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	pFnNotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::GetFocusMovie ( )
{
	static UFunction* pFnGetFocusMovie = NULL;

	if ( ! pFnGetFocusMovie )
		pFnGetFocusMovie = (UFunction*) UObject::GObjObjects()->Data[ 38002 ];

	UGFxInteraction_execGetFocusMovie_Parms GetFocusMovie_Parms;

	pFnGetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFocusMovie, &GetFocusMovie_Parms, NULL );

	pFnGetFocusMovie->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVisibility
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVisibility ( )
{
	static UFunction* pFnSetVisibility = NULL;

	if ( ! pFnSetVisibility )
		pFnSetVisibility = (UFunction*) UObject::GObjObjects()->Data[ 37312 ];

	UGFxMoviePlayer_execSetVisibility_Parms SetVisibility_Parms;

	pFnSetVisibility->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVisibility, &SetVisibility_Parms, NULL );

	pFnSetVisibility->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::UpdateSplitscreenLayout ( )
{
	static UFunction* pFnUpdateSplitscreenLayout = NULL;

	if ( ! pFnUpdateSplitscreenLayout )
		pFnUpdateSplitscreenLayout = (UFunction*) UObject::GObjObjects()->Data[ 37313 ];

	UGFxMoviePlayer_execUpdateSplitscreenLayout_Parms UpdateSplitscreenLayout_Parms;

	pFnUpdateSplitscreenLayout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSplitscreenLayout, &UpdateSplitscreenLayout_Parms, NULL );

	pFnUpdateSplitscreenLayout->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020000] 
// Parameters infos:

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect ( )
{
	static UFunction* pFnApplyPriorityVisibilityEffect = NULL;

	if ( ! pFnApplyPriorityVisibilityEffect )
		pFnApplyPriorityVisibilityEffect = (UFunction*) UObject::GObjObjects()->Data[ 37315 ];

	UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Parms ApplyPriorityVisibilityEffect_Parms;

	this->ProcessEvent ( pFnApplyPriorityVisibilityEffect, &ApplyPriorityVisibilityEffect_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020000] 
// Parameters infos:

void UGFxMoviePlayer::ApplyPriorityBlurEffect ( )
{
	static UFunction* pFnApplyPriorityBlurEffect = NULL;

	if ( ! pFnApplyPriorityBlurEffect )
		pFnApplyPriorityBlurEffect = (UFunction*) UObject::GObjObjects()->Data[ 37316 ];

	UGFxMoviePlayer_execApplyPriorityBlurEffect_Parms ApplyPriorityBlurEffect_Parms;

	this->ProcessEvent ( pFnApplyPriorityBlurEffect, &ApplyPriorityBlurEffect_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventApplyPriorityEffect ( )
{
	static UFunction* pFnApplyPriorityEffect = NULL;

	if ( ! pFnApplyPriorityEffect )
		pFnApplyPriorityEffect = (UFunction*) UObject::GObjObjects()->Data[ 37318 ];

	UGFxMoviePlayer_eventApplyPriorityEffect_Parms ApplyPriorityEffect_Parms;

	this->ProcessEvent ( pFnApplyPriorityEffect, &ApplyPriorityEffect_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024002] 
// Parameters infos:

void UGFxMoviePlayer::PlaySoundFromTheme ( )
{
	static UFunction* pFnPlaySoundFromTheme = NULL;

	if ( ! pFnPlaySoundFromTheme )
		pFnPlaySoundFromTheme = (UFunction*) UObject::GObjObjects()->Data[ 37320 ];

	UGFxMoviePlayer_execPlaySoundFromTheme_Parms PlaySoundFromTheme_Parms;

	this->ProcessEvent ( pFnPlaySoundFromTheme, &PlaySoundFromTheme_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventOnFocusLost ( )
{
	static UFunction* pFnOnFocusLost = NULL;

	if ( ! pFnOnFocusLost )
		pFnOnFocusLost = (UFunction*) UObject::GObjObjects()->Data[ 37327 ];

	UGFxMoviePlayer_eventOnFocusLost_Parms OnFocusLost_Parms;

	this->ProcessEvent ( pFnOnFocusLost, &OnFocusLost_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventOnFocusGained ( )
{
	static UFunction* pFnOnFocusGained = NULL;

	if ( ! pFnOnFocusGained )
		pFnOnFocusGained = (UFunction*) UObject::GObjObjects()->Data[ 37335 ];

	UGFxMoviePlayer_eventOnFocusGained_Parms OnFocusGained_Parms;

	this->ProcessEvent ( pFnOnFocusGained, &OnFocusGained_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020002] 
// Parameters infos:

void UGFxMoviePlayer::ConsoleCommand ( )
{
	static UFunction* pFnConsoleCommand = NULL;

	if ( ! pFnConsoleCommand )
		pFnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 37337 ];

	UGFxMoviePlayer_execConsoleCommand_Parms ConsoleCommand_Parms;

	this->ProcessEvent ( pFnConsoleCommand, &ConsoleCommand_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventGetPC ( )
{
	static UFunction* pFnGetPC = NULL;

	if ( ! pFnGetPC )
		pFnGetPC = (UFunction*) UObject::GObjObjects()->Data[ 37339 ];

	UGFxMoviePlayer_eventGetPC_Parms GetPC_Parms;

	this->ProcessEvent ( pFnGetPC, &GetPC_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventGetLP ( )
{
	static UFunction* pFnGetLP = NULL;

	if ( ! pFnGetLP )
		pFnGetLP = (UFunction*) UObject::GObjObjects()->Data[ 37342 ];

	UGFxMoviePlayer_eventGetLP_Parms GetLP_Parms;

	this->ProcessEvent ( pFnGetLP, &GetLP_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] 
// Parameters infos:

void UGFxMoviePlayer::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37345 ];

	UGFxMoviePlayer_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetWidgetPathBinding ( )
{
	static UFunction* pFnSetWidgetPathBinding = NULL;

	if ( ! pFnSetWidgetPathBinding )
		pFnSetWidgetPathBinding = (UFunction*) UObject::GObjObjects()->Data[ 37349 ];

	UGFxMoviePlayer_execSetWidgetPathBinding_Parms SetWidgetPathBinding_Parms;

	pFnSetWidgetPathBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWidgetPathBinding, &SetWidgetPathBinding_Parms, NULL );

	pFnSetWidgetPathBinding->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventPostWidgetInit ( )
{
	static UFunction* pFnPostWidgetInit = NULL;

	if ( ! pFnPostWidgetInit )
		pFnPostWidgetInit = (UFunction*) UObject::GObjObjects()->Data[ 37354 ];

	UGFxMoviePlayer_eventPostWidgetInit_Parms PostWidgetInit_Parms;

	this->ProcessEvent ( pFnPostWidgetInit, &PostWidgetInit_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventWidgetUnloaded ( )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = (UFunction*) UObject::GObjObjects()->Data[ 37357 ];

	UGFxMoviePlayer_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventWidgetInitialized ( )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->Data[ 37358 ];

	UGFxMoviePlayer_eventWidgetInitialized_Parms WidgetInitialized_Parms;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ActionScriptConstructor ( )
{
	static UFunction* pFnActionScriptConstructor = NULL;

	if ( ! pFnActionScriptConstructor )
		pFnActionScriptConstructor = (UFunction*) UObject::GObjObjects()->Data[ 37363 ];

	UGFxMoviePlayer_execActionScriptConstructor_Parms ActionScriptConstructor_Parms;

	pFnActionScriptConstructor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptConstructor, &ActionScriptConstructor_Parms, NULL );

	pFnActionScriptConstructor->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ActionScriptObject ( )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = (UFunction*) UObject::GObjObjects()->Data[ 37368 ];

	UGFxMoviePlayer_execActionScriptObject_Parms ActionScriptObject_Parms;

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ActionScriptString ( )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = (UFunction*) UObject::GObjObjects()->Data[ 37371 ];

	UGFxMoviePlayer_execActionScriptString_Parms ActionScriptString_Parms;

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ActionScriptFloat ( )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = (UFunction*) UObject::GObjObjects()->Data[ 37374 ];

	UGFxMoviePlayer_execActionScriptFloat_Parms ActionScriptFloat_Parms;

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ActionScriptInt ( )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = (UFunction*) UObject::GObjObjects()->Data[ 37377 ];

	UGFxMoviePlayer_execActionScriptInt_Parms ActionScriptInt_Parms;

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ActionScriptVoid ( )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = (UFunction*) UObject::GObjObjects()->Data[ 37380 ];

	UGFxMoviePlayer_execActionScriptVoid_Parms ActionScriptVoid_Parms;

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::Invoke ( )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = (UFunction*) UObject::GObjObjects()->Data[ 37383 ];

	UGFxMoviePlayer_execInvoke_Parms Invoke_Parms;

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ActionScriptSetFunction ( )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = (UFunction*) UObject::GObjObjects()->Data[ 37385 ];

	UGFxMoviePlayer_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::CreateArray ( )
{
	static UFunction* pFnCreateArray = NULL;

	if ( ! pFnCreateArray )
		pFnCreateArray = (UFunction*) UObject::GObjObjects()->Data[ 37398 ];

	UGFxMoviePlayer_execCreateArray_Parms CreateArray_Parms;

	pFnCreateArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateArray, &CreateArray_Parms, NULL );

	pFnCreateArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::CreateObject ( )
{
	static UFunction* pFnCreateObject = NULL;

	if ( ! pFnCreateObject )
		pFnCreateObject = (UFunction*) UObject::GObjObjects()->Data[ 37401 ];

	UGFxMoviePlayer_execCreateObject_Parms CreateObject_Parms;

	pFnCreateObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateObject, &CreateObject_Parms, NULL );

	pFnCreateObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableStringArray ( )
{
	static UFunction* pFnSetVariableStringArray = NULL;

	if ( ! pFnSetVariableStringArray )
		pFnSetVariableStringArray = (UFunction*) UObject::GObjObjects()->Data[ 37403 ];

	UGFxMoviePlayer_execSetVariableStringArray_Parms SetVariableStringArray_Parms;

	pFnSetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableStringArray, &SetVariableStringArray_Parms, NULL );

	pFnSetVariableStringArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableFloatArray ( )
{
	static UFunction* pFnSetVariableFloatArray = NULL;

	if ( ! pFnSetVariableFloatArray )
		pFnSetVariableFloatArray = (UFunction*) UObject::GObjObjects()->Data[ 37409 ];

	UGFxMoviePlayer_execSetVariableFloatArray_Parms SetVariableFloatArray_Parms;

	pFnSetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableFloatArray, &SetVariableFloatArray_Parms, NULL );

	pFnSetVariableFloatArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableIntArray ( )
{
	static UFunction* pFnSetVariableIntArray = NULL;

	if ( ! pFnSetVariableIntArray )
		pFnSetVariableIntArray = (UFunction*) UObject::GObjObjects()->Data[ 37415 ];

	UGFxMoviePlayer_execSetVariableIntArray_Parms SetVariableIntArray_Parms;

	pFnSetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableIntArray, &SetVariableIntArray_Parms, NULL );

	pFnSetVariableIntArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableArray ( )
{
	static UFunction* pFnSetVariableArray = NULL;

	if ( ! pFnSetVariableArray )
		pFnSetVariableArray = (UFunction*) UObject::GObjObjects()->Data[ 37421 ];

	UGFxMoviePlayer_execSetVariableArray_Parms SetVariableArray_Parms;

	pFnSetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableArray, &SetVariableArray_Parms, NULL );

	pFnSetVariableArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableStringArray ( )
{
	static UFunction* pFnGetVariableStringArray = NULL;

	if ( ! pFnGetVariableStringArray )
		pFnGetVariableStringArray = (UFunction*) UObject::GObjObjects()->Data[ 37427 ];

	UGFxMoviePlayer_execGetVariableStringArray_Parms GetVariableStringArray_Parms;

	pFnGetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableStringArray, &GetVariableStringArray_Parms, NULL );

	pFnGetVariableStringArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableFloatArray ( )
{
	static UFunction* pFnGetVariableFloatArray = NULL;

	if ( ! pFnGetVariableFloatArray )
		pFnGetVariableFloatArray = (UFunction*) UObject::GObjObjects()->Data[ 37433 ];

	UGFxMoviePlayer_execGetVariableFloatArray_Parms GetVariableFloatArray_Parms;

	pFnGetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableFloatArray, &GetVariableFloatArray_Parms, NULL );

	pFnGetVariableFloatArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableIntArray ( )
{
	static UFunction* pFnGetVariableIntArray = NULL;

	if ( ! pFnGetVariableIntArray )
		pFnGetVariableIntArray = (UFunction*) UObject::GObjObjects()->Data[ 37439 ];

	UGFxMoviePlayer_execGetVariableIntArray_Parms GetVariableIntArray_Parms;

	pFnGetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableIntArray, &GetVariableIntArray_Parms, NULL );

	pFnGetVariableIntArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableArray ( )
{
	static UFunction* pFnGetVariableArray = NULL;

	if ( ! pFnGetVariableArray )
		pFnGetVariableArray = (UFunction*) UObject::GObjObjects()->Data[ 37445 ];

	UGFxMoviePlayer_execGetVariableArray_Parms GetVariableArray_Parms;

	pFnGetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableArray, &GetVariableArray_Parms, NULL );

	pFnGetVariableArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableObject ( )
{
	static UFunction* pFnSetVariableObject = NULL;

	if ( ! pFnSetVariableObject )
		pFnSetVariableObject = (UFunction*) UObject::GObjObjects()->Data[ 37451 ];

	UGFxMoviePlayer_execSetVariableObject_Parms SetVariableObject_Parms;

	pFnSetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableObject, &SetVariableObject_Parms, NULL );

	pFnSetVariableObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableString ( )
{
	static UFunction* pFnSetVariableString = NULL;

	if ( ! pFnSetVariableString )
		pFnSetVariableString = (UFunction*) UObject::GObjObjects()->Data[ 37457 ];

	UGFxMoviePlayer_execSetVariableString_Parms SetVariableString_Parms;

	pFnSetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableString, &SetVariableString_Parms, NULL );

	pFnSetVariableString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableInt ( )
{
	static UFunction* pFnSetVariableInt = NULL;

	if ( ! pFnSetVariableInt )
		pFnSetVariableInt = (UFunction*) UObject::GObjObjects()->Data[ 37460 ];

	UGFxMoviePlayer_execSetVariableInt_Parms SetVariableInt_Parms;

	pFnSetVariableInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableInt, &SetVariableInt_Parms, NULL );

	pFnSetVariableInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableNumber ( )
{
	static UFunction* pFnSetVariableNumber = NULL;

	if ( ! pFnSetVariableNumber )
		pFnSetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 37463 ];

	UGFxMoviePlayer_execSetVariableNumber_Parms SetVariableNumber_Parms;

	pFnSetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableNumber, &SetVariableNumber_Parms, NULL );

	pFnSetVariableNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariableBool ( )
{
	static UFunction* pFnSetVariableBool = NULL;

	if ( ! pFnSetVariableBool )
		pFnSetVariableBool = (UFunction*) UObject::GObjObjects()->Data[ 37466 ];

	UGFxMoviePlayer_execSetVariableBool_Parms SetVariableBool_Parms;

	pFnSetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableBool, &SetVariableBool_Parms, NULL );

	pFnSetVariableBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetVariable ( )
{
	static UFunction* pFnSetVariable = NULL;

	if ( ! pFnSetVariable )
		pFnSetVariable = (UFunction*) UObject::GObjObjects()->Data[ 37469 ];

	UGFxMoviePlayer_execSetVariable_Parms SetVariable_Parms;

	pFnSetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariable, &SetVariable_Parms, NULL );

	pFnSetVariable->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableObject ( )
{
	static UFunction* pFnGetVariableObject = NULL;

	if ( ! pFnGetVariableObject )
		pFnGetVariableObject = (UFunction*) UObject::GObjObjects()->Data[ 37472 ];

	UGFxMoviePlayer_execGetVariableObject_Parms GetVariableObject_Parms;

	pFnGetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableObject, &GetVariableObject_Parms, NULL );

	pFnGetVariableObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableString ( )
{
	static UFunction* pFnGetVariableString = NULL;

	if ( ! pFnGetVariableString )
		pFnGetVariableString = (UFunction*) UObject::GObjObjects()->Data[ 37475 ];

	UGFxMoviePlayer_execGetVariableString_Parms GetVariableString_Parms;

	pFnGetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableString, &GetVariableString_Parms, NULL );

	pFnGetVariableString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableInt ( )
{
	static UFunction* pFnGetVariableInt = NULL;

	if ( ! pFnGetVariableInt )
		pFnGetVariableInt = (UFunction*) UObject::GObjObjects()->Data[ 37479 ];

	UGFxMoviePlayer_execGetVariableInt_Parms GetVariableInt_Parms;

	pFnGetVariableInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableInt, &GetVariableInt_Parms, NULL );

	pFnGetVariableInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableNumber ( )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 37482 ];

	UGFxMoviePlayer_execGetVariableNumber_Parms GetVariableNumber_Parms;

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	pFnGetVariableNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariableBool ( )
{
	static UFunction* pFnGetVariableBool = NULL;

	if ( ! pFnGetVariableBool )
		pFnGetVariableBool = (UFunction*) UObject::GObjObjects()->Data[ 37485 ];

	UGFxMoviePlayer_execGetVariableBool_Parms GetVariableBool_Parms;

	pFnGetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableBool, &GetVariableBool_Parms, NULL );

	pFnGetVariableBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVariable ( )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = (UFunction*) UObject::GObjObjects()->Data[ 37488 ];

	UGFxMoviePlayer_execGetVariable_Parms GetVariable_Parms;

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	pFnGetVariable->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetAVMVersion ( )
{
	static UFunction* pFnGetAVMVersion = NULL;

	if ( ! pFnGetAVMVersion )
		pFnGetAVMVersion = (UFunction*) UObject::GObjObjects()->Data[ 37491 ];

	UGFxMoviePlayer_execGetAVMVersion_Parms GetAVMVersion_Parms;

	pFnGetAVMVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAVMVersion, &GetAVMVersion_Parms, NULL );

	pFnGetAVMVersion->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventFilterButtonInput ( )
{
	static UFunction* pFnFilterButtonInput = NULL;

	if ( ! pFnFilterButtonInput )
		pFnFilterButtonInput = (UFunction*) UObject::GObjObjects()->Data[ 37494 ];

	UGFxMoviePlayer_eventFilterButtonInput_Parms FilterButtonInput_Parms;

	this->ProcessEvent ( pFnFilterButtonInput, &FilterButtonInput_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::FlushPlayerInput ( )
{
	static UFunction* pFnFlushPlayerInput = NULL;

	if ( ! pFnFlushPlayerInput )
		pFnFlushPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 37496 ];

	UGFxMoviePlayer_execFlushPlayerInput_Parms FlushPlayerInput_Parms;

	pFnFlushPlayerInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushPlayerInput, &FlushPlayerInput_Parms, NULL );

	pFnFlushPlayerInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ClearFocusIgnoreKeys ( )
{
	static UFunction* pFnClearFocusIgnoreKeys = NULL;

	if ( ! pFnClearFocusIgnoreKeys )
		pFnClearFocusIgnoreKeys = (UFunction*) UObject::GObjObjects()->Data[ 37501 ];

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Parms ClearFocusIgnoreKeys_Parms;

	pFnClearFocusIgnoreKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Parms, NULL );

	pFnClearFocusIgnoreKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::AddFocusIgnoreKey ( )
{
	static UFunction* pFnAddFocusIgnoreKey = NULL;

	if ( ! pFnAddFocusIgnoreKey )
		pFnAddFocusIgnoreKey = (UFunction*) UObject::GObjObjects()->Data[ 37503 ];

	UGFxMoviePlayer_execAddFocusIgnoreKey_Parms AddFocusIgnoreKey_Parms;

	pFnAddFocusIgnoreKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Parms, NULL );

	pFnAddFocusIgnoreKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::ClearCaptureKeys ( )
{
	static UFunction* pFnClearCaptureKeys = NULL;

	if ( ! pFnClearCaptureKeys )
		pFnClearCaptureKeys = (UFunction*) UObject::GObjObjects()->Data[ 37504 ];

	UGFxMoviePlayer_execClearCaptureKeys_Parms ClearCaptureKeys_Parms;

	pFnClearCaptureKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCaptureKeys, &ClearCaptureKeys_Parms, NULL );

	pFnClearCaptureKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::AddCaptureKey ( )
{
	static UFunction* pFnAddCaptureKey = NULL;

	if ( ! pFnAddCaptureKey )
		pFnAddCaptureKey = (UFunction*) UObject::GObjObjects()->Data[ 37506 ];

	UGFxMoviePlayer_execAddCaptureKey_Parms AddCaptureKey_Parms;

	pFnAddCaptureKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddCaptureKey, &AddCaptureKey_Parms, NULL );

	pFnAddCaptureKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetMovieCanReceiveInput ( )
{
	static UFunction* pFnSetMovieCanReceiveInput = NULL;

	if ( ! pFnSetMovieCanReceiveInput )
		pFnSetMovieCanReceiveInput = (UFunction*) UObject::GObjObjects()->Data[ 37507 ];

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Parms SetMovieCanReceiveInput_Parms;

	pFnSetMovieCanReceiveInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Parms, NULL );

	pFnSetMovieCanReceiveInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetMovieCanReceiveFocus ( )
{
	static UFunction* pFnSetMovieCanReceiveFocus = NULL;

	if ( ! pFnSetMovieCanReceiveFocus )
		pFnSetMovieCanReceiveFocus = (UFunction*) UObject::GObjObjects()->Data[ 37509 ];

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Parms SetMovieCanReceiveFocus_Parms;

	pFnSetMovieCanReceiveFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Parms, NULL );

	pFnSetMovieCanReceiveFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetPerspective3D ( )
{
	static UFunction* pFnSetPerspective3D = NULL;

	if ( ! pFnSetPerspective3D )
		pFnSetPerspective3D = (UFunction*) UObject::GObjObjects()->Data[ 37511 ];

	UGFxMoviePlayer_execSetPerspective3D_Parms SetPerspective3D_Parms;

	pFnSetPerspective3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPerspective3D, &SetPerspective3D_Parms, NULL );

	pFnSetPerspective3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetView3D ( )
{
	static UFunction* pFnSetView3D = NULL;

	if ( ! pFnSetView3D )
		pFnSetView3D = (UFunction*) UObject::GObjObjects()->Data[ 37513 ];

	UGFxMoviePlayer_execSetView3D_Parms SetView3D_Parms;

	pFnSetView3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetView3D, &SetView3D_Parms, NULL );

	pFnSetView3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetVisibleFrameRect ( )
{
	static UFunction* pFnGetVisibleFrameRect = NULL;

	if ( ! pFnGetVisibleFrameRect )
		pFnGetVisibleFrameRect = (UFunction*) UObject::GObjObjects()->Data[ 37515 ];

	UGFxMoviePlayer_execGetVisibleFrameRect_Parms GetVisibleFrameRect_Parms;

	pFnGetVisibleFrameRect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVisibleFrameRect, &GetVisibleFrameRect_Parms, NULL );

	pFnGetVisibleFrameRect->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetAlignment ( )
{
	static UFunction* pFnSetAlignment = NULL;

	if ( ! pFnSetAlignment )
		pFnSetAlignment = (UFunction*) UObject::GObjObjects()->Data[ 37517 ];

	UGFxMoviePlayer_execSetAlignment_Parms SetAlignment_Parms;

	pFnSetAlignment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAlignment, &SetAlignment_Parms, NULL );

	pFnSetAlignment->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetViewScaleMode ( )
{
	static UFunction* pFnSetViewScaleMode = NULL;

	if ( ! pFnSetViewScaleMode )
		pFnSetViewScaleMode = (UFunction*) UObject::GObjObjects()->Data[ 37522 ];

	UGFxMoviePlayer_execSetViewScaleMode_Parms SetViewScaleMode_Parms;

	pFnSetViewScaleMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewScaleMode, &SetViewScaleMode_Parms, NULL );

	pFnSetViewScaleMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetViewport ( )
{
	static UFunction* pFnSetViewport = NULL;

	if ( ! pFnSetViewport )
		pFnSetViewport = (UFunction*) UObject::GObjObjects()->Data[ 37526 ];

	UGFxMoviePlayer_execSetViewport_Parms SetViewport_Parms;

	pFnSetViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewport, &SetViewport_Parms, NULL );

	pFnSetViewport->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.IsViewportInFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::IsViewportInFocus ( )
{
	static UFunction* pFnIsViewportInFocus = NULL;

	if ( ! pFnIsViewportInFocus )
		pFnIsViewportInFocus = (UFunction*) UObject::GObjObjects()->Data[ 37528 ];

	UGFxMoviePlayer_execIsViewportInFocus_Parms IsViewportInFocus_Parms;

	pFnIsViewportInFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsViewportInFocus, &IsViewportInFocus_Parms, NULL );

	pFnIsViewportInFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::GetGameViewportClient ( )
{
	static UFunction* pFnGetGameViewportClient = NULL;

	if ( ! pFnGetGameViewportClient )
		pFnGetGameViewportClient = (UFunction*) UObject::GObjObjects()->Data[ 37533 ];

	UGFxMoviePlayer_execGetGameViewportClient_Parms GetGameViewportClient_Parms;

	pFnGetGameViewportClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameViewportClient, &GetGameViewportClient_Parms, NULL );

	pFnGetGameViewportClient->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetPriority ( )
{
	static UFunction* pFnSetPriority = NULL;

	if ( ! pFnSetPriority )
		pFnSetPriority = (UFunction*) UObject::GObjObjects()->Data[ 37535 ];

	UGFxMoviePlayer_execSetPriority_Parms SetPriority_Parms;

	pFnSetPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPriority, &SetPriority_Parms, NULL );

	pFnSetPriority->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetExternalTexture ( )
{
	static UFunction* pFnSetExternalTexture = NULL;

	if ( ! pFnSetExternalTexture )
		pFnSetExternalTexture = (UFunction*) UObject::GObjObjects()->Data[ 37537 ];

	UGFxMoviePlayer_execSetExternalTexture_Parms SetExternalTexture_Parms;

	pFnSetExternalTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetExternalTexture, &SetExternalTexture_Parms, NULL );

	pFnSetExternalTexture->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020002] 
// Parameters infos:

void UGFxMoviePlayer::SetExternalInterface ( )
{
	static UFunction* pFnSetExternalInterface = NULL;

	if ( ! pFnSetExternalInterface )
		pFnSetExternalInterface = (UFunction*) UObject::GObjObjects()->Data[ 37539 ];

	UGFxMoviePlayer_execSetExternalInterface_Parms SetExternalInterface_Parms;

	this->ProcessEvent ( pFnSetExternalInterface, &SetExternalInterface_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetTimingMode ( )
{
	static UFunction* pFnSetTimingMode = NULL;

	if ( ! pFnSetTimingMode )
		pFnSetTimingMode = (UFunction*) UObject::GObjObjects()->Data[ 37544 ];

	UGFxMoviePlayer_execSetTimingMode_Parms SetTimingMode_Parms;

	pFnSetTimingMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTimingMode, &SetTimingMode_Parms, NULL );

	pFnSetTimingMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020002] 
// Parameters infos:

void UGFxMoviePlayer::SetMovieInfo ( )
{
	static UFunction* pFnSetMovieInfo = NULL;

	if ( ! pFnSetMovieInfo )
		pFnSetMovieInfo = (UFunction*) UObject::GObjObjects()->Data[ 37547 ];

	UGFxMoviePlayer_execSetMovieInfo_Parms SetMovieInfo_Parms;

	this->ProcessEvent ( pFnSetMovieInfo, &SetMovieInfo_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventConditionalClearPause ( )
{
	static UFunction* pFnConditionalClearPause = NULL;

	if ( ! pFnConditionalClearPause )
		pFnConditionalClearPause = (UFunction*) UObject::GObjObjects()->Data[ 37550 ];

	UGFxMoviePlayer_eventConditionalClearPause_Parms ConditionalClearPause_Parms;

	this->ProcessEvent ( pFnConditionalClearPause, &ConditionalClearPause_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventOnCleanup ( )
{
	static UFunction* pFnOnCleanup = NULL;

	if ( ! pFnOnCleanup )
		pFnOnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 37552 ];

	UGFxMoviePlayer_eventOnCleanup_Parms OnCleanup_Parms;

	this->ProcessEvent ( pFnOnCleanup, &OnCleanup_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMoviePlayer::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 37555 ];

	UGFxMoviePlayer_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::Close ( )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->Data[ 37556 ];

	UGFxMoviePlayer_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::SetPause ( )
{
	static UFunction* pFnSetPause = NULL;

	if ( ! pFnSetPause )
		pFnSetPause = (UFunction*) UObject::GObjObjects()->Data[ 37557 ];

	UGFxMoviePlayer_execSetPause_Parms SetPause_Parms;

	pFnSetPause->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPause, &SetPause_Parms, NULL );

	pFnSetPause->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.RefreshViewportFlags
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::RefreshViewportFlags ( )
{
	static UFunction* pFnRefreshViewportFlags = NULL;

	if ( ! pFnRefreshViewportFlags )
		pFnRefreshViewportFlags = (UFunction*) UObject::GObjObjects()->Data[ 37559 ];

	UGFxMoviePlayer_execRefreshViewportFlags_Parms RefreshViewportFlags_Parms;

	pFnRefreshViewportFlags->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshViewportFlags, &RefreshViewportFlags_Parms, NULL );

	pFnRefreshViewportFlags->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
// Parameters infos:

void UGFxMoviePlayer::OnPostAdvance ( )
{
	static UFunction* pFnOnPostAdvance = NULL;

	if ( ! pFnOnPostAdvance )
		pFnOnPostAdvance = (UFunction*) UObject::GObjObjects()->Data[ 37561 ];

	UGFxMoviePlayer_execOnPostAdvance_Parms OnPostAdvance_Parms;

	this->ProcessEvent ( pFnOnPostAdvance, &OnPostAdvance_Parms, NULL );
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::PostAdvance ( )
{
	static UFunction* pFnPostAdvance = NULL;

	if ( ! pFnPostAdvance )
		pFnPostAdvance = (UFunction*) UObject::GObjObjects()->Data[ 37562 ];

	UGFxMoviePlayer_execPostAdvance_Parms PostAdvance_Parms;

	pFnPostAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostAdvance, &PostAdvance_Parms, NULL );

	pFnPostAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::Advance ( )
{
	static UFunction* pFnAdvance = NULL;

	if ( ! pFnAdvance )
		pFnAdvance = (UFunction*) UObject::GObjObjects()->Data[ 37353 ];

	UGFxMoviePlayer_execAdvance_Parms Advance_Parms;

	pFnAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdvance, &Advance_Parms, NULL );

	pFnAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGFxMoviePlayer::eventStart ( )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 37565 ];

	UGFxMoviePlayer_eventStart_Parms Start_Parms;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxObject::eventWidgetUnloaded ( )
{
	static UFunction* pFnWidgetUnloaded = NULL;

	if ( ! pFnWidgetUnloaded )
		pFnWidgetUnloaded = (UFunction*) UObject::GObjObjects()->Data[ 37914 ];

	UGFxObject_eventWidgetUnloaded_Parms WidgetUnloaded_Parms;

	this->ProcessEvent ( pFnWidgetUnloaded, &WidgetUnloaded_Parms, NULL );
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxObject::eventWidgetInitialized ( )
{
	static UFunction* pFnWidgetInitialized = NULL;

	if ( ! pFnWidgetInitialized )
		pFnWidgetInitialized = (UFunction*) UObject::GObjObjects()->Data[ 37909 ];

	UGFxObject_eventWidgetInitialized_Parms WidgetInitialized_Parms;

	this->ProcessEvent ( pFnWidgetInitialized, &WidgetInitialized_Parms, NULL );
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::AttachMovie ( )
{
	static UFunction* pFnAttachMovie = NULL;

	if ( ! pFnAttachMovie )
		pFnAttachMovie = (UFunction*) UObject::GObjObjects()->Data[ 37903 ];

	UGFxObject_execAttachMovie_Parms AttachMovie_Parms;

	pFnAttachMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachMovie, &AttachMovie_Parms, NULL );

	pFnAttachMovie->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::CreateEmptyMovieClip ( )
{
	static UFunction* pFnCreateEmptyMovieClip = NULL;

	if ( ! pFnCreateEmptyMovieClip )
		pFnCreateEmptyMovieClip = (UFunction*) UObject::GObjObjects()->Data[ 37898 ];

	UGFxObject_execCreateEmptyMovieClip_Parms CreateEmptyMovieClip_Parms;

	pFnCreateEmptyMovieClip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Parms, NULL );

	pFnCreateEmptyMovieClip->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GotoAndStopI ( )
{
	static UFunction* pFnGotoAndStopI = NULL;

	if ( ! pFnGotoAndStopI )
		pFnGotoAndStopI = (UFunction*) UObject::GObjObjects()->Data[ 37896 ];

	UGFxObject_execGotoAndStopI_Parms GotoAndStopI_Parms;

	pFnGotoAndStopI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStopI, &GotoAndStopI_Parms, NULL );

	pFnGotoAndStopI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GotoAndStop ( )
{
	static UFunction* pFnGotoAndStop = NULL;

	if ( ! pFnGotoAndStop )
		pFnGotoAndStop = (UFunction*) UObject::GObjObjects()->Data[ 37894 ];

	UGFxObject_execGotoAndStop_Parms GotoAndStop_Parms;

	pFnGotoAndStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStop, &GotoAndStop_Parms, NULL );

	pFnGotoAndStop->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GotoAndPlayI ( )
{
	static UFunction* pFnGotoAndPlayI = NULL;

	if ( ! pFnGotoAndPlayI )
		pFnGotoAndPlayI = (UFunction*) UObject::GObjObjects()->Data[ 37892 ];

	UGFxObject_execGotoAndPlayI_Parms GotoAndPlayI_Parms;

	pFnGotoAndPlayI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlayI, &GotoAndPlayI_Parms, NULL );

	pFnGotoAndPlayI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GotoAndPlay ( )
{
	static UFunction* pFnGotoAndPlay = NULL;

	if ( ! pFnGotoAndPlay )
		pFnGotoAndPlay = (UFunction*) UObject::GObjObjects()->Data[ 37890 ];

	UGFxObject_execGotoAndPlay_Parms GotoAndPlay_Parms;

	pFnGotoAndPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlay, &GotoAndPlay_Parms, NULL );

	pFnGotoAndPlay->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptArray ( )
{
	static UFunction* pFnActionScriptArray = NULL;

	if ( ! pFnActionScriptArray )
		pFnActionScriptArray = (UFunction*) UObject::GObjObjects()->Data[ 37886 ];

	UGFxObject_execActionScriptArray_Parms ActionScriptArray_Parms;

	pFnActionScriptArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptArray, &ActionScriptArray_Parms, NULL );

	pFnActionScriptArray->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptObject ( )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = (UFunction*) UObject::GObjObjects()->Data[ 37883 ];

	UGFxObject_execActionScriptObject_Parms ActionScriptObject_Parms;

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptString ( )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = (UFunction*) UObject::GObjObjects()->Data[ 37880 ];

	UGFxObject_execActionScriptString_Parms ActionScriptString_Parms;

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptFloat ( )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = (UFunction*) UObject::GObjObjects()->Data[ 37877 ];

	UGFxObject_execActionScriptFloat_Parms ActionScriptFloat_Parms;

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptInt ( )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = (UFunction*) UObject::GObjObjects()->Data[ 37874 ];

	UGFxObject_execActionScriptInt_Parms ActionScriptInt_Parms;

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptVoid ( )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = (UFunction*) UObject::GObjObjects()->Data[ 37872 ];

	UGFxObject_execActionScriptVoid_Parms ActionScriptVoid_Parms;

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::Invoke ( )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = (UFunction*) UObject::GObjObjects()->Data[ 37867 ];

	UGFxObject_execInvoke_Parms Invoke_Parms;

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptSetFunctionOn ( )
{
	static UFunction* pFnActionScriptSetFunctionOn = NULL;

	if ( ! pFnActionScriptSetFunctionOn )
		pFnActionScriptSetFunctionOn = (UFunction*) UObject::GObjObjects()->Data[ 37864 ];

	UGFxObject_execActionScriptSetFunctionOn_Parms ActionScriptSetFunctionOn_Parms;

	pFnActionScriptSetFunctionOn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Parms, NULL );

	pFnActionScriptSetFunctionOn->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::ActionScriptSetFunction ( )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = (UFunction*) UObject::GObjObjects()->Data[ 37862 ];

	UGFxObject_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementMemberString ( )
{
	static UFunction* pFnSetElementMemberString = NULL;

	if ( ! pFnSetElementMemberString )
		pFnSetElementMemberString = (UFunction*) UObject::GObjObjects()->Data[ 37858 ];

	UGFxObject_execSetElementMemberString_Parms SetElementMemberString_Parms;

	pFnSetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberString, &SetElementMemberString_Parms, NULL );

	pFnSetElementMemberString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementMemberInt ( )
{
	static UFunction* pFnSetElementMemberInt = NULL;

	if ( ! pFnSetElementMemberInt )
		pFnSetElementMemberInt = (UFunction*) UObject::GObjObjects()->Data[ 37854 ];

	UGFxObject_execSetElementMemberInt_Parms SetElementMemberInt_Parms;

	pFnSetElementMemberInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberInt, &SetElementMemberInt_Parms, NULL );

	pFnSetElementMemberInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementMemberFloat ( )
{
	static UFunction* pFnSetElementMemberFloat = NULL;

	if ( ! pFnSetElementMemberFloat )
		pFnSetElementMemberFloat = (UFunction*) UObject::GObjObjects()->Data[ 37850 ];

	UGFxObject_execSetElementMemberFloat_Parms SetElementMemberFloat_Parms;

	pFnSetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberFloat, &SetElementMemberFloat_Parms, NULL );

	pFnSetElementMemberFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementMemberBool ( )
{
	static UFunction* pFnSetElementMemberBool = NULL;

	if ( ! pFnSetElementMemberBool )
		pFnSetElementMemberBool = (UFunction*) UObject::GObjObjects()->Data[ 37846 ];

	UGFxObject_execSetElementMemberBool_Parms SetElementMemberBool_Parms;

	pFnSetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberBool, &SetElementMemberBool_Parms, NULL );

	pFnSetElementMemberBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementMemberObject ( )
{
	static UFunction* pFnSetElementMemberObject = NULL;

	if ( ! pFnSetElementMemberObject )
		pFnSetElementMemberObject = (UFunction*) UObject::GObjObjects()->Data[ 37842 ];

	UGFxObject_execSetElementMemberObject_Parms SetElementMemberObject_Parms;

	pFnSetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberObject, &SetElementMemberObject_Parms, NULL );

	pFnSetElementMemberObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementMember ( )
{
	static UFunction* pFnSetElementMember = NULL;

	if ( ! pFnSetElementMember )
		pFnSetElementMember = (UFunction*) UObject::GObjObjects()->Data[ 37838 ];

	UGFxObject_execSetElementMember_Parms SetElementMember_Parms;

	pFnSetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMember, &SetElementMember_Parms, NULL );

	pFnSetElementMember->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementMemberString ( )
{
	static UFunction* pFnGetElementMemberString = NULL;

	if ( ! pFnGetElementMemberString )
		pFnGetElementMemberString = (UFunction*) UObject::GObjObjects()->Data[ 37834 ];

	UGFxObject_execGetElementMemberString_Parms GetElementMemberString_Parms;

	pFnGetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberString, &GetElementMemberString_Parms, NULL );

	pFnGetElementMemberString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementMemberInt ( )
{
	static UFunction* pFnGetElementMemberInt = NULL;

	if ( ! pFnGetElementMemberInt )
		pFnGetElementMemberInt = (UFunction*) UObject::GObjObjects()->Data[ 37830 ];

	UGFxObject_execGetElementMemberInt_Parms GetElementMemberInt_Parms;

	pFnGetElementMemberInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberInt, &GetElementMemberInt_Parms, NULL );

	pFnGetElementMemberInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementMemberFloat ( )
{
	static UFunction* pFnGetElementMemberFloat = NULL;

	if ( ! pFnGetElementMemberFloat )
		pFnGetElementMemberFloat = (UFunction*) UObject::GObjObjects()->Data[ 37826 ];

	UGFxObject_execGetElementMemberFloat_Parms GetElementMemberFloat_Parms;

	pFnGetElementMemberFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberFloat, &GetElementMemberFloat_Parms, NULL );

	pFnGetElementMemberFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementMemberBool ( )
{
	static UFunction* pFnGetElementMemberBool = NULL;

	if ( ! pFnGetElementMemberBool )
		pFnGetElementMemberBool = (UFunction*) UObject::GObjObjects()->Data[ 37822 ];

	UGFxObject_execGetElementMemberBool_Parms GetElementMemberBool_Parms;

	pFnGetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberBool, &GetElementMemberBool_Parms, NULL );

	pFnGetElementMemberBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementMemberObject ( )
{
	static UFunction* pFnGetElementMemberObject = NULL;

	if ( ! pFnGetElementMemberObject )
		pFnGetElementMemberObject = (UFunction*) UObject::GObjObjects()->Data[ 37817 ];

	UGFxObject_execGetElementMemberObject_Parms GetElementMemberObject_Parms;

	pFnGetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberObject, &GetElementMemberObject_Parms, NULL );

	pFnGetElementMemberObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementMember ( )
{
	static UFunction* pFnGetElementMember = NULL;

	if ( ! pFnGetElementMember )
		pFnGetElementMember = (UFunction*) UObject::GObjObjects()->Data[ 37813 ];

	UGFxObject_execGetElementMember_Parms GetElementMember_Parms;

	pFnGetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMember, &GetElementMember_Parms, NULL );

	pFnGetElementMember->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementColorTransform ( )
{
	static UFunction* pFnSetElementColorTransform = NULL;

	if ( ! pFnSetElementColorTransform )
		pFnSetElementColorTransform = (UFunction*) UObject::GObjObjects()->Data[ 37810 ];

	UGFxObject_execSetElementColorTransform_Parms SetElementColorTransform_Parms;

	pFnSetElementColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementColorTransform, &SetElementColorTransform_Parms, NULL );

	pFnSetElementColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementPosition ( )
{
	static UFunction* pFnSetElementPosition = NULL;

	if ( ! pFnSetElementPosition )
		pFnSetElementPosition = (UFunction*) UObject::GObjObjects()->Data[ 37806 ];

	UGFxObject_execSetElementPosition_Parms SetElementPosition_Parms;

	pFnSetElementPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementPosition, &SetElementPosition_Parms, NULL );

	pFnSetElementPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementVisible ( )
{
	static UFunction* pFnSetElementVisible = NULL;

	if ( ! pFnSetElementVisible )
		pFnSetElementVisible = (UFunction*) UObject::GObjObjects()->Data[ 37803 ];

	UGFxObject_execSetElementVisible_Parms SetElementVisible_Parms;

	pFnSetElementVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementVisible, &SetElementVisible_Parms, NULL );

	pFnSetElementVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementDisplayMatrix ( )
{
	static UFunction* pFnSetElementDisplayMatrix = NULL;

	if ( ! pFnSetElementDisplayMatrix )
		pFnSetElementDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 37800 ];

	UGFxObject_execSetElementDisplayMatrix_Parms SetElementDisplayMatrix_Parms;

	pFnSetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Parms, NULL );

	pFnSetElementDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementDisplayInfo ( )
{
	static UFunction* pFnSetElementDisplayInfo = NULL;

	if ( ! pFnSetElementDisplayInfo )
		pFnSetElementDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 37797 ];

	UGFxObject_execSetElementDisplayInfo_Parms SetElementDisplayInfo_Parms;

	pFnSetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayInfo, &SetElementDisplayInfo_Parms, NULL );

	pFnSetElementDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementDisplayMatrix ( )
{
	static UFunction* pFnGetElementDisplayMatrix = NULL;

	if ( ! pFnGetElementDisplayMatrix )
		pFnGetElementDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 37794 ];

	UGFxObject_execGetElementDisplayMatrix_Parms GetElementDisplayMatrix_Parms;

	pFnGetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Parms, NULL );

	pFnGetElementDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementDisplayInfo ( )
{
	static UFunction* pFnGetElementDisplayInfo = NULL;

	if ( ! pFnGetElementDisplayInfo )
		pFnGetElementDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 37791 ];

	UGFxObject_execGetElementDisplayInfo_Parms GetElementDisplayInfo_Parms;

	pFnGetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayInfo, &GetElementDisplayInfo_Parms, NULL );

	pFnGetElementDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementString ( )
{
	static UFunction* pFnSetElementString = NULL;

	if ( ! pFnSetElementString )
		pFnSetElementString = (UFunction*) UObject::GObjObjects()->Data[ 37788 ];

	UGFxObject_execSetElementString_Parms SetElementString_Parms;

	pFnSetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementString, &SetElementString_Parms, NULL );

	pFnSetElementString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementInt ( )
{
	static UFunction* pFnSetElementInt = NULL;

	if ( ! pFnSetElementInt )
		pFnSetElementInt = (UFunction*) UObject::GObjObjects()->Data[ 37785 ];

	UGFxObject_execSetElementInt_Parms SetElementInt_Parms;

	pFnSetElementInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementInt, &SetElementInt_Parms, NULL );

	pFnSetElementInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementFloat ( )
{
	static UFunction* pFnSetElementFloat = NULL;

	if ( ! pFnSetElementFloat )
		pFnSetElementFloat = (UFunction*) UObject::GObjObjects()->Data[ 37782 ];

	UGFxObject_execSetElementFloat_Parms SetElementFloat_Parms;

	pFnSetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementFloat, &SetElementFloat_Parms, NULL );

	pFnSetElementFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementBool ( )
{
	static UFunction* pFnSetElementBool = NULL;

	if ( ! pFnSetElementBool )
		pFnSetElementBool = (UFunction*) UObject::GObjObjects()->Data[ 37779 ];

	UGFxObject_execSetElementBool_Parms SetElementBool_Parms;

	pFnSetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementBool, &SetElementBool_Parms, NULL );

	pFnSetElementBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElementObject ( )
{
	static UFunction* pFnSetElementObject = NULL;

	if ( ! pFnSetElementObject )
		pFnSetElementObject = (UFunction*) UObject::GObjObjects()->Data[ 37776 ];

	UGFxObject_execSetElementObject_Parms SetElementObject_Parms;

	pFnSetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementObject, &SetElementObject_Parms, NULL );

	pFnSetElementObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetElement ( )
{
	static UFunction* pFnSetElement = NULL;

	if ( ! pFnSetElement )
		pFnSetElement = (UFunction*) UObject::GObjObjects()->Data[ 37773 ];

	UGFxObject_execSetElement_Parms SetElement_Parms;

	pFnSetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElement, &SetElement_Parms, NULL );

	pFnSetElement->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementString ( )
{
	static UFunction* pFnGetElementString = NULL;

	if ( ! pFnGetElementString )
		pFnGetElementString = (UFunction*) UObject::GObjObjects()->Data[ 37770 ];

	UGFxObject_execGetElementString_Parms GetElementString_Parms;

	pFnGetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementString, &GetElementString_Parms, NULL );

	pFnGetElementString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementInt ( )
{
	static UFunction* pFnGetElementInt = NULL;

	if ( ! pFnGetElementInt )
		pFnGetElementInt = (UFunction*) UObject::GObjObjects()->Data[ 37767 ];

	UGFxObject_execGetElementInt_Parms GetElementInt_Parms;

	pFnGetElementInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementInt, &GetElementInt_Parms, NULL );

	pFnGetElementInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementFloat ( )
{
	static UFunction* pFnGetElementFloat = NULL;

	if ( ! pFnGetElementFloat )
		pFnGetElementFloat = (UFunction*) UObject::GObjObjects()->Data[ 37764 ];

	UGFxObject_execGetElementFloat_Parms GetElementFloat_Parms;

	pFnGetElementFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementFloat, &GetElementFloat_Parms, NULL );

	pFnGetElementFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementBool ( )
{
	static UFunction* pFnGetElementBool = NULL;

	if ( ! pFnGetElementBool )
		pFnGetElementBool = (UFunction*) UObject::GObjObjects()->Data[ 37761 ];

	UGFxObject_execGetElementBool_Parms GetElementBool_Parms;

	pFnGetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementBool, &GetElementBool_Parms, NULL );

	pFnGetElementBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElementObject ( )
{
	static UFunction* pFnGetElementObject = NULL;

	if ( ! pFnGetElementObject )
		pFnGetElementObject = (UFunction*) UObject::GObjObjects()->Data[ 37757 ];

	UGFxObject_execGetElementObject_Parms GetElementObject_Parms;

	pFnGetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementObject, &GetElementObject_Parms, NULL );

	pFnGetElementObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetElement ( )
{
	static UFunction* pFnGetElement = NULL;

	if ( ! pFnGetElement )
		pFnGetElement = (UFunction*) UObject::GObjObjects()->Data[ 37754 ];

	UGFxObject_execGetElement_Parms GetElement_Parms;

	pFnGetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElement, &GetElement_Parms, NULL );

	pFnGetElement->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetText
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetText ( )
{
	static UFunction* pFnSetText = NULL;

	if ( ! pFnSetText )
		pFnSetText = (UFunction*) UObject::GObjObjects()->Data[ 37751 ];

	UGFxObject_execSetText_Parms SetText_Parms;

	pFnSetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetText, &SetText_Parms, NULL );

	pFnSetText->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetText ( )
{
	static UFunction* pFnGetText = NULL;

	if ( ! pFnGetText )
		pFnGetText = (UFunction*) UObject::GObjObjects()->Data[ 37749 ];

	UGFxObject_execGetText_Parms GetText_Parms;

	pFnGetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetText, &GetText_Parms, NULL );

	pFnGetText->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetVisible ( )
{
	static UFunction* pFnSetVisible = NULL;

	if ( ! pFnSetVisible )
		pFnSetVisible = (UFunction*) UObject::GObjObjects()->Data[ 37747 ];

	UGFxObject_execSetVisible_Parms SetVisible_Parms;

	pFnSetVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVisible, &SetVisible_Parms, NULL );

	pFnSetVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetDisplayMatrix3D ( )
{
	static UFunction* pFnSetDisplayMatrix3D = NULL;

	if ( ! pFnSetDisplayMatrix3D )
		pFnSetDisplayMatrix3D = (UFunction*) UObject::GObjObjects()->Data[ 37745 ];

	UGFxObject_execSetDisplayMatrix3D_Parms SetDisplayMatrix3D_Parms;

	pFnSetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Parms, NULL );

	pFnSetDisplayMatrix3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetDisplayMatrix ( )
{
	static UFunction* pFnSetDisplayMatrix = NULL;

	if ( ! pFnSetDisplayMatrix )
		pFnSetDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 37743 ];

	UGFxObject_execSetDisplayMatrix_Parms SetDisplayMatrix_Parms;

	pFnSetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix, &SetDisplayMatrix_Parms, NULL );

	pFnSetDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetColorTransform ( )
{
	static UFunction* pFnSetColorTransform = NULL;

	if ( ! pFnSetColorTransform )
		pFnSetColorTransform = (UFunction*) UObject::GObjObjects()->Data[ 37741 ];

	UGFxObject_execSetColorTransform_Parms SetColorTransform_Parms;

	pFnSetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetColorTransform, &SetColorTransform_Parms, NULL );

	pFnSetColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetPosition ( )
{
	static UFunction* pFnSetPosition = NULL;

	if ( ! pFnSetPosition )
		pFnSetPosition = (UFunction*) UObject::GObjObjects()->Data[ 37738 ];

	UGFxObject_execSetPosition_Parms SetPosition_Parms;

	pFnSetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPosition, &SetPosition_Parms, NULL );

	pFnSetPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetDisplayInfo ( )
{
	static UFunction* pFnSetDisplayInfo = NULL;

	if ( ! pFnSetDisplayInfo )
		pFnSetDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 37736 ];

	UGFxObject_execSetDisplayInfo_Parms SetDisplayInfo_Parms;

	pFnSetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayInfo, &SetDisplayInfo_Parms, NULL );

	pFnSetDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetDisplayMatrix3D ( )
{
	static UFunction* pFnGetDisplayMatrix3D = NULL;

	if ( ! pFnGetDisplayMatrix3D )
		pFnGetDisplayMatrix3D = (UFunction*) UObject::GObjObjects()->Data[ 37734 ];

	UGFxObject_execGetDisplayMatrix3D_Parms GetDisplayMatrix3D_Parms;

	pFnGetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayMatrix3D, &GetDisplayMatrix3D_Parms, NULL );

	pFnGetDisplayMatrix3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetDisplayMatrix ( )
{
	static UFunction* pFnGetDisplayMatrix = NULL;

	if ( ! pFnGetDisplayMatrix )
		pFnGetDisplayMatrix = (UFunction*) UObject::GObjObjects()->Data[ 37732 ];

	UGFxObject_execGetDisplayMatrix_Parms GetDisplayMatrix_Parms;

	pFnGetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayMatrix, &GetDisplayMatrix_Parms, NULL );

	pFnGetDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetColorTransform ( )
{
	static UFunction* pFnGetColorTransform = NULL;

	if ( ! pFnGetColorTransform )
		pFnGetColorTransform = (UFunction*) UObject::GObjObjects()->Data[ 37730 ];

	UGFxObject_execGetColorTransform_Parms GetColorTransform_Parms;

	pFnGetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetColorTransform, &GetColorTransform_Parms, NULL );

	pFnGetColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetPosition ( )
{
	static UFunction* pFnGetPosition = NULL;

	if ( ! pFnGetPosition )
		pFnGetPosition = (UFunction*) UObject::GObjObjects()->Data[ 37726 ];

	UGFxObject_execGetPosition_Parms GetPosition_Parms;

	pFnGetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPosition, &GetPosition_Parms, NULL );

	pFnGetPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetDisplayInfo ( )
{
	static UFunction* pFnGetDisplayInfo = NULL;

	if ( ! pFnGetDisplayInfo )
		pFnGetDisplayInfo = (UFunction*) UObject::GObjObjects()->Data[ 37724 ];

	UGFxObject_execGetDisplayInfo_Parms GetDisplayInfo_Parms;

	pFnGetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayInfo, &GetDisplayInfo_Parms, NULL );

	pFnGetDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.TranslateString
// [0x00026400] ( FUNC_Native )
// Parameters infos:

void UGFxObject::TranslateString ( )
{
	static UFunction* pFnTranslateString = NULL;

	if ( ! pFnTranslateString )
		pFnTranslateString = (UFunction*) UObject::GObjObjects()->Data[ 37720 ];

	UGFxObject_execTranslateString_Parms TranslateString_Parms;

	pFnTranslateString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTranslateString, &TranslateString_Parms, NULL );

	pFnTranslateString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetFunction ( )
{
	static UFunction* pFnSetFunction = NULL;

	if ( ! pFnSetFunction )
		pFnSetFunction = (UFunction*) UObject::GObjObjects()->Data[ 37716 ];

	UGFxObject_execSetFunction_Parms SetFunction_Parms;

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFunction, &SetFunction_Parms, NULL );

	pFnSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetObject ( )
{
	static UFunction* pFnSetObject = NULL;

	if ( ! pFnSetObject )
		pFnSetObject = (UFunction*) UObject::GObjObjects()->Data[ 37713 ];

	UGFxObject_execSetObject_Parms SetObject_Parms;

	pFnSetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObject, &SetObject_Parms, NULL );

	pFnSetObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetString
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetString ( )
{
	static UFunction* pFnSetString = NULL;

	if ( ! pFnSetString )
		pFnSetString = (UFunction*) UObject::GObjObjects()->Data[ 37709 ];

	UGFxObject_execSetString_Parms SetString_Parms;

	pFnSetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetString, &SetString_Parms, NULL );

	pFnSetString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetInt ( )
{
	static UFunction* pFnSetInt = NULL;

	if ( ! pFnSetInt )
		pFnSetInt = (UFunction*) UObject::GObjObjects()->Data[ 37706 ];

	UGFxObject_execSetInt_Parms SetInt_Parms;

	pFnSetInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetInt, &SetInt_Parms, NULL );

	pFnSetInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetFloat ( )
{
	static UFunction* pFnSetFloat = NULL;

	if ( ! pFnSetFloat )
		pFnSetFloat = (UFunction*) UObject::GObjObjects()->Data[ 37703 ];

	UGFxObject_execSetFloat_Parms SetFloat_Parms;

	pFnSetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFloat, &SetFloat_Parms, NULL );

	pFnSetFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::SetBool ( )
{
	static UFunction* pFnSetBool = NULL;

	if ( ! pFnSetBool )
		pFnSetBool = (UFunction*) UObject::GObjObjects()->Data[ 37700 ];

	UGFxObject_execSetBool_Parms SetBool_Parms;

	pFnSetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBool, &SetBool_Parms, NULL );

	pFnSetBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::Set ( )
{
	static UFunction* pFnSet = NULL;

	if ( ! pFnSet )
		pFnSet = (UFunction*) UObject::GObjObjects()->Data[ 37697 ];

	UGFxObject_execSet_Parms Set_Parms;

	pFnSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet, &Set_Parms, NULL );

	pFnSet->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetObject ( )
{
	static UFunction* pFnGetObject = NULL;

	if ( ! pFnGetObject )
		pFnGetObject = (UFunction*) UObject::GObjObjects()->Data[ 37693 ];

	UGFxObject_execGetObject_Parms GetObject_Parms;

	pFnGetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetObject, &GetObject_Parms, NULL );

	pFnGetObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetString ( )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 37690 ];

	UGFxObject_execGetString_Parms GetString_Parms;

	pFnGetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	pFnGetString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetInt ( )
{
	static UFunction* pFnGetInt = NULL;

	if ( ! pFnGetInt )
		pFnGetInt = (UFunction*) UObject::GObjObjects()->Data[ 37687 ];

	UGFxObject_execGetInt_Parms GetInt_Parms;

	pFnGetInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInt, &GetInt_Parms, NULL );

	pFnGetInt->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetFloat ( )
{
	static UFunction* pFnGetFloat = NULL;

	if ( ! pFnGetFloat )
		pFnGetFloat = (UFunction*) UObject::GObjObjects()->Data[ 37684 ];

	UGFxObject_execGetFloat_Parms GetFloat_Parms;

	pFnGetFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFloat, &GetFloat_Parms, NULL );

	pFnGetFloat->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::GetBool ( )
{
	static UFunction* pFnGetBool = NULL;

	if ( ! pFnGetBool )
		pFnGetBool = (UFunction*) UObject::GObjObjects()->Data[ 37681 ];

	UGFxObject_execGetBool_Parms GetBool_Parms;

	pFnGetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBool, &GetBool_Parms, NULL );

	pFnGetBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxObject.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxObject::Get ( )
{
	static UFunction* pFnGet = NULL;

	if ( ! pFnGet )
		pFnGet = (UFunction*) UObject::GObjObjects()->Data[ 37678 ];

	UGFxObject_execGet_Parms Get_Parms;

	pFnGet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGet, &Get_Parms, NULL );

	pFnGet->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxAction_CloseMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 37306 ];

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxAction_GetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 37310 ];

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxAction_Invoke::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 37624 ];

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxAction_OpenMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 37640 ];

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGFxAction_SetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 37647 ];

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGFxFSCmdHandler_Kismet::eventFSCommand ( )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = (UFunction*) UObject::GObjObjects()->Data[ 37994 ];

	UGFxFSCmdHandler_Kismet_eventFSCommand_Parms FSCommand_Parms;

	pFnFSCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	pFnFSCommand->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxClikWidget.AS3RemoveEventListener
// [0x00044003] ( FUNC_Final )
// Parameters infos:

void UGFxClikWidget::AS3RemoveEventListener ( )
{
	static UFunction* pFnAS3RemoveEventListener = NULL;

	if ( ! pFnAS3RemoveEventListener )
		pFnAS3RemoveEventListener = (UFunction*) UObject::GObjObjects()->Data[ 37973 ];

	UGFxClikWidget_execAS3RemoveEventListener_Parms AS3RemoveEventListener_Parms;

	this->ProcessEvent ( pFnAS3RemoveEventListener, &AS3RemoveEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void UGFxClikWidget::ASRemoveAllEventListeners ( )
{
	static UFunction* pFnASRemoveAllEventListeners = NULL;

	if ( ! pFnASRemoveAllEventListeners )
		pFnASRemoveAllEventListeners = (UFunction*) UObject::GObjObjects()->Data[ 37971 ];

	UGFxClikWidget_execASRemoveAllEventListeners_Parms ASRemoveAllEventListeners_Parms;

	this->ProcessEvent ( pFnASRemoveAllEventListeners, &ASRemoveAllEventListeners_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x00044003] ( FUNC_Final )
// Parameters infos:

void UGFxClikWidget::AS3AddEventListener ( )
{
	static UFunction* pFnAS3AddEventListener = NULL;

	if ( ! pFnAS3AddEventListener )
		pFnAS3AddEventListener = (UFunction*) UObject::GObjObjects()->Data[ 37965 ];

	UGFxClikWidget_execAS3AddEventListener_Parms AS3AddEventListener_Parms;

	this->ProcessEvent ( pFnAS3AddEventListener, &AS3AddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void UGFxClikWidget::ASAddEventListener ( )
{
	static UFunction* pFnASAddEventListener = NULL;

	if ( ! pFnASAddEventListener )
		pFnASAddEventListener = (UFunction*) UObject::GObjObjects()->Data[ 37961 ];

	UGFxClikWidget_execASAddEventListener_Parms ASAddEventListener_Parms;

	this->ProcessEvent ( pFnASAddEventListener, &ASAddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void UGFxClikWidget::SetListener ( )
{
	static UFunction* pFnSetListener = NULL;

	if ( ! pFnSetListener )
		pFnSetListener = (UFunction*) UObject::GObjObjects()->Data[ 37957 ];

	UGFxClikWidget_execSetListener_Parms SetListener_Parms;

	this->ProcessEvent ( pFnSetListener, &SetListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void UGFxClikWidget::GetEventStringFromTypename ( )
{
	static UFunction* pFnGetEventStringFromTypename = NULL;

	if ( ! pFnGetEventStringFromTypename )
		pFnGetEventStringFromTypename = (UFunction*) UObject::GObjObjects()->Data[ 37953 ];

	UGFxClikWidget_execGetEventStringFromTypename_Parms GetEventStringFromTypename_Parms;

	this->ProcessEvent ( pFnGetEventStringFromTypename, &GetEventStringFromTypename_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020002] 
// Parameters infos:

void UGFxClikWidget::RemoveAllEventListeners ( )
{
	static UFunction* pFnRemoveAllEventListeners = NULL;

	if ( ! pFnRemoveAllEventListeners )
		pFnRemoveAllEventListeners = (UFunction*) UObject::GObjObjects()->Data[ 37951 ];

	UGFxClikWidget_execRemoveAllEventListeners_Parms RemoveAllEventListeners_Parms;

	this->ProcessEvent ( pFnRemoveAllEventListeners, &RemoveAllEventListeners_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.AddAS3EventListener
// [0x00024002] 
// Parameters infos:

void UGFxClikWidget::AddAS3EventListener ( )
{
	static UFunction* pFnAddAS3EventListener = NULL;

	if ( ! pFnAddAS3EventListener )
		pFnAddAS3EventListener = (UFunction*) UObject::GObjObjects()->Data[ 37942 ];

	UGFxClikWidget_execAddAS3EventListener_Parms AddAS3EventListener_Parms;

	this->ProcessEvent ( pFnAddAS3EventListener, &AddAS3EventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00024002] 
// Parameters infos:

void UGFxClikWidget::AddEventListener ( )
{
	static UFunction* pFnAddEventListener = NULL;

	if ( ! pFnAddEventListener )
		pFnAddEventListener = (UFunction*) UObject::GObjObjects()->Data[ 37933 ];

	UGFxClikWidget_execAddEventListener_Parms AddEventListener_Parms;

	this->ProcessEvent ( pFnAddEventListener, &AddEventListener_Parms, NULL );
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] 
// Parameters infos:

void UGFxClikWidget::EventListener ( )
{
	static UFunction* pFnEventListener = NULL;

	if ( ! pFnEventListener )
		pFnEventListener = (UFunction*) UObject::GObjObjects()->Data[ 37931 ];

	UGFxClikWidget_execEventListener_Parms EventListener_Parms;

	this->ProcessEvent ( pFnEventListener, &EventListener_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif