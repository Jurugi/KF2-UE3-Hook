/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_f_structs.h
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
struct UGFxFSCmdHandler_eventFSCommand_Parms
{
	// class UGFxMoviePlayer*                          Movie;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGFxEvent_FSCommand*                      Event;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  Cmd;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  Arg;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execCloseAllMoviePlayers_Parms
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifySplitscreenLayoutChanged_Parms
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyPlayerRemoved_Parms
{
	// int                                             PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             RemovedPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyPlayerAdded_Parms
{
	// int                                             PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ULocalPlayer*                             AddedPlayer;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyGameSessionEnded_Parms
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execGetFocusMovie_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxMoviePlayer*                          ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetVisibility
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVisibility_Parms
{
	// DWORD                                           bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execUpdateSplitscreenLayout_Parms
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020000] 
struct UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Parms
{
	// DWORD                                           bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020000] 
struct UGFxMoviePlayer_execApplyPriorityBlurEffect_Parms
{
	// DWORD                                           bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020802] ( FUNC_Event )
struct UGFxMoviePlayer_eventApplyPriorityEffect_Parms
{
	// DWORD                                           bRequestedBlurState : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           bRequestedHiddenState : 1;                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024002] 
struct UGFxMoviePlayer_execPlaySoundFromTheme_Parms
{
	// struct FName                                    EventName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    SoundThemeName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             ThemeIndex;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UUISoundTheme*                            Theme;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnFocusLost_Parms
{
	// int                                             LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnFocusGained_Parms
{
	// int                                             LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020002] 
struct UGFxMoviePlayer_execConsoleCommand_Parms
{
	// struct FString                                  Command;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020802] ( FUNC_Event )
struct UGFxMoviePlayer_eventGetPC_Parms
{
	// class APlayerController*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             LocalPlayerOwner;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020802] ( FUNC_Event )
struct UGFxMoviePlayer_eventGetLP_Parms
{
	// class ULocalPlayer*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UEngine*                                  Eng;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] 
struct UGFxMoviePlayer_execInit_Parms
{
	// class ULocalPlayer*                             LocPlay;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetWidgetPathBinding_Parms
{
	// class UGFxObject*                               WidgetToBind;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    Path;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventPostWidgetInit_Parms
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventWidgetUnloaded_Parms
{
	// struct FName                                    WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               Widget;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventWidgetInitialized_Parms
{
	// struct FName                                    WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               Widget;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptConstructor_Parms
{
	// struct FString                                  ClassName;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptObject_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptString_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptFloat_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptInt_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptVoid_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execInvoke_Parms
{
	// struct FString                                  method;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 ReturnValue;                                      		// 0x0020 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execActionScriptSetFunction_Parms
{
	// class UGFxObject*                               Object;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execCreateArray_Parms
{
	// class UGFxObject*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024400] ( FUNC_Native )
struct UGFxMoviePlayer_execCreateObject_Parms
{
	// struct FString                                  ASClass;                                          		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UClass*                                   Type;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0018 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableStringArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableFloatArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< float >                                 Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableIntArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableStringArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableFloatArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< float >                                 Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableIntArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       Arg;                                              		// 0x0014 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableObject_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               Object;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableString_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableInt_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableNumber_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           F;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariableBool_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           B : 1;                                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetVariable_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 Arg;                                              		// 0x0010 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableObject_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UClass*                                   Type;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableString_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableInt_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableNumber_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariableBool_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetVariable_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 ReturnValue;                                      		// 0x0010 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execGetAVMVersion_Parms
{
	// int                                             ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventFilterButtonInput_Parms
{
	// int                                             ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    ButtonName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   InputEvent;                                       		// 0x000C (0x0001) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execFlushPlayerInput_Parms
{
	// DWORD                                           capturekeysonly : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execClearFocusIgnoreKeys_Parms
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execAddFocusIgnoreKey_Parms
{
	// struct FName                                    Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execClearCaptureKeys_Parms
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execAddCaptureKey_Parms
{
	// struct FName                                    Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetMovieCanReceiveInput_Parms
{
	// DWORD                                           bCanReceiveInput : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetMovieCanReceiveFocus_Parms
{
	// DWORD                                           bCanReceiveFocus : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetPerspective3D_Parms
{
	// struct FMatrix                                  matPersp;                                         		// 0x0000 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetView3D_Parms
{
	// struct FMatrix                                  matView;                                          		// 0x0000 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetVisibleFrameRect_Parms
{
	// float                                           x0;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           y0;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           X1;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           Y1;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetAlignment_Parms
{
	// unsigned char                                   A;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetViewScaleMode_Parms
{
	// unsigned char                                   SM;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execSetViewport_Parms
{
	// int                                             X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             Width;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.IsViewportInFocus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execIsViewportInFocus_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execGetGameViewportClient_Parms
{
	// class UGameViewportClient*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetPriority_Parms
{
	// unsigned char                                   NewPriority;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00024400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetExternalTexture_Parms
{
	// struct FString                                  Resource;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UTexture*                                 Texture;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           bForceFullScreen : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020002] 
struct UGFxMoviePlayer_execSetExternalInterface_Parms
{
	// class UObject*                                  H;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetTimingMode_Parms
{
	// unsigned char                                   Mode;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020002] 
struct UGFxMoviePlayer_execSetMovieInfo_Parms
{
	// class USwfMovie*                                Data;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGFxMoviePlayer_eventConditionalClearPause_Parms
{
	// class ULocalPlayer*                             LP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnCleanup_Parms
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] ( FUNC_Event )
struct UGFxMoviePlayer_eventOnClose_Parms
{
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execClose_Parms
{
	// DWORD                                           Unload : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400] ( FUNC_Native )
struct UGFxMoviePlayer_execSetPause_Parms
{
	// DWORD                                           bPausePlayback : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxMoviePlayer.RefreshViewportFlags
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execRefreshViewportFlags_Parms
{
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
struct UGFxMoviePlayer_execOnPostAdvance_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400] ( FUNC_Native )
struct UGFxMoviePlayer_execPostAdvance_Parms
{
	// float                                           DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMoviePlayer_execAdvance_Parms
{
	// float                                           Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UGFxMoviePlayer_eventStart_Parms
{
	// DWORD                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] ( FUNC_Event )
struct UGFxObject_eventWidgetUnloaded_Parms
{
	// struct FName                                    WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               Widget;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] ( FUNC_Event )
struct UGFxObject_eventWidgetInitialized_Parms
{
	// struct FName                                    WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FName                                    WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               Widget;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execAttachMovie_Parms
{
	// struct FString                                  symbolname;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  instancename;                                     		// 0x0010 (0x0010) [0x0000000000000000]              
	// int                                             Depth;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// class UClass*                                   Type;                                             		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execCreateEmptyMovieClip_Parms
{
	// struct FString                                  instancename;                                     		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             Depth;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UClass*                                   Type;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndStopI_Parms
{
	// int                                             frame;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndStop_Parms
{
	// struct FString                                  frame;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndPlayI_Parms
{
	// int                                             frame;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGotoAndPlay_Parms
{
	// struct FString                                  frame;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptArray_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< class UGFxObject* >                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptObject_Parms
{
	// struct FString                                  Path;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptString_Parms
{
	// struct FString                                  method;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptFloat_Parms
{
	// struct FString                                  method;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptInt_Parms
{
	// struct FString                                  method;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptVoid_Parms
{
	// struct FString                                  method;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execInvoke_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 ReturnValue;                                      		// 0x0020 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptSetFunctionOn_Parms
{
	// class UGFxObject*                               Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execActionScriptSetFunction_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberString_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberInt_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberFloat_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// float                                           F;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberBool_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           B : 1;                                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMemberObject_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               Val;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementMember_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 Arg;                                              		// 0x0014 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberString_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberInt_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberFloat_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberBool_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMemberObject_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// class UClass*                                   Type;                                             		// 0x0014 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementMember_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0004 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 ReturnValue;                                      		// 0x0014 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementColorTransform_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASColorTransform                        cxform;                                           		// 0x0004 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementPosition_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementVisible_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           Visible : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementDisplayMatrix_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FMatrix                                  M;                                                		// 0x0010 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementDisplayInfo_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           D;                                                		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementDisplayMatrix_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FMatrix                                  ReturnValue;                                      		// 0x0010 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementDisplayInfo_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           ReturnValue;                                      		// 0x0004 (0x002C) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementString_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementInt_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementFloat_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           F;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementBool_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElementObject_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               Val;                                              		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetElement_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASValue                                 Arg;                                              		// 0x0004 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementString_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementInt_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementFloat_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementBool_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElementObject_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UClass*                                   Type;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetElement_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FASValue                                 ReturnValue;                                      		// 0x0004 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetText
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetText_Parms
{
	// struct FString                                  Text;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UTranslationContext*                      InContext;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetText_Parms
{
	// struct FString                                  ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetVisible_Parms
{
	// DWORD                                           Visible : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetDisplayMatrix3D_Parms
{
	// struct FMatrix                                  M;                                                		// 0x0000 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetDisplayMatrix_Parms
{
	// struct FMatrix                                  M;                                                		// 0x0000 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetColorTransform_Parms
{
	// struct FASColorTransform                        cxform;                                           		// 0x0000 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetPosition_Parms
{
	// float                                           X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetDisplayInfo_Parms
{
	// struct FASDisplayInfo                           D;                                                		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetDisplayMatrix3D_Parms
{
	// struct FMatrix                                  ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetDisplayMatrix_Parms
{
	// struct FMatrix                                  ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetColorTransform_Parms
{
	// struct FASColorTransform                        ReturnValue;                                      		// 0x0000 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetPosition_Parms
{
	// float                                           X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetDisplayInfo_Parms
{
	// struct FASDisplayInfo                           ReturnValue;                                      		// 0x0000 (0x002C) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.TranslateString
// [0x00026400] ( FUNC_Native )
struct UGFxObject_execTranslateString_Parms
{
	// struct FString                                  StringToTranslate;                                		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UTranslationContext*                      InContext;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetFunction_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UObject*                                  context;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FName                                    fname;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetObject_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               Val;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetString
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetString_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UTranslationContext*                      InContext;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetInt_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetFloat_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           F;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSetBool_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           B : 1;                                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execSet_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 Arg;                                              		// 0x0010 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetObject_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UClass*                                   Type;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetString_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetInt_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// int                                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetFloat_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// float                                           ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGetBool_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxObject.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxObject_execGet_Parms
{
	// struct FString                                  Member;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	// struct FASValue                                 ReturnValue;                                      		// 0x0010 (0x0020) [0x0000000000000000]              
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms
{
	// DWORD                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Parms
{
	// class UGFxMoviePlayer*                          Movie;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UGFxEvent_FSCommand*                      Event;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  Cmd;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
	// struct FString                                  Arg;                                              		// 0x0020 (0x0010) [0x0000000000000000]              
	// DWORD                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxClikWidget.AS3RemoveEventListener
// [0x00044003] ( FUNC_Final )
struct UGFxClikWidget_execAS3RemoveEventListener_Parms
{
	// struct FString                                  Type;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               O;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           useCapture : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execASRemoveAllEventListeners_Parms
{
	// struct FString                                  Event;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x00044003] ( FUNC_Final )
struct UGFxClikWidget_execAS3AddEventListener_Parms
{
	// struct FString                                  Type;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               O;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// DWORD                                           useCapture : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             listenerPriority;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           useWeakReference : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execASAddEventListener_Parms
{
	// struct FString                                  Type;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	// class UGFxObject*                               O;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FString                                  func;                                             		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execSetListener_Parms
{
	// class UGFxObject*                               O;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  Member;                                           		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FScriptDelegate                          Listener;                                         		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] ( FUNC_Final )
struct UGFxClikWidget_execGetEventStringFromTypename_Parms
{
	// struct FName                                    Typename;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FString                                  ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000000]              
	// struct FString                                  TypeString;                                       		// 0x0018 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020002] 
struct UGFxClikWidget_execRemoveAllEventListeners_Parms
{
	// struct FString                                  Event;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxClikWidget.AddAS3EventListener
// [0x00024002] 
struct UGFxClikWidget_execAddAS3EventListener_Parms
{
	// struct FName                                    Type;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FScriptDelegate                          Listener;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           useCapture : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             listenerPriority;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           useWeakReference : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGFxObject*                               O;                                                		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               funcobj;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FString                                  TypeString;                                       		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00024002] 
struct UGFxClikWidget_execAddEventListener_Parms
{
	// struct FName                                    Type;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FScriptDelegate                          Listener;                                         		// 0x0008 (0x0010) [0x0000000000000000]              
	// DWORD                                           useCapture : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             listenerPriority;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	// DWORD                                           useWeakReference : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UGFxObject*                               O;                                                		// 0x0024 (0x0008) [0x0000000000000000]              
	// class UGFxObject*                               funcobj;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FString                                  TypeString;                                       		// 0x0034 (0x0010) [0x0000000000000000]              
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] 
struct UGFxClikWidget_execEventListener_Parms
{
	// struct FEventData                               Data;                                             		// 0x0000 (0x0034) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif