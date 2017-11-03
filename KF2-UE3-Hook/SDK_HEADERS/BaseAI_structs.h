/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BaseAI_structs.h
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

// ScriptStruct BaseAI.BaseAITypes.SpaceLineInfo
// 0x0034
struct FSpaceLineInfo
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	struct FString                                     Comment;                                          		// 0x001C (0x0010) [0x0000000000000000]              
	struct FName                                       Category;                                         		// 0x002C (0x0008) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIDebugTool.String_Mirror
// 0x0010
struct FString_Mirror
{
	struct FString                                     Value;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIDebugTool.AIDebugLogLine
// 0x0018
struct FAIDebugLogLine
{
	struct FString_Mirror                              Line;                                             		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       LineCategory;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIDebugTool.AIDebugLogEntry
// 0x00F8
struct FAIDebugLogEntry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     WorldPosition;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     EnemyPosition;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Facing;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	struct FString_Mirror                              BTStatus;                                         		// 0x0028 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    BlackBoardEntries;                                		// 0x0038 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    BehaviorTrace;                                    		// 0x0048 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    Preconditions;                                    		// 0x0058 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    CommandStack;                                     		// 0x0068 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    SquadEnemyList;                                   		// 0x0078 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    LocalEnemyList;                                   		// 0x0088 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    InnerState;                                       		// 0x0098 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    AnimationProxy;                                   		// 0x00A8 (0x0010) [0x0000000000000000]              
	TArray< struct FVector >                           Route;                                            		// 0x00B8 (0x0010) [0x0000000000000000]              
	TArray< struct FSpaceLineInfo >                    DebugLines;                                       		// 0x00C8 (0x0010) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    WeaponInfo;                                       		// 0x00D8 (0x0010) [0x0000000000000000]              
	TArray< struct FAIDebugLogLine >                   Lines;                                            		// 0x00E8 (0x0010) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIDebugTool.AIDebugActorsLog
// 0x001C
struct FAIDebugActorsLog
{
	int                                                Tail;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FAIDebugLogEntry >                  Entries;                                          		// 0x0004 (0x0010) [0x0000000000000000]              
	int                                                NotEmptyElements;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIDebugTool.ETQDebugEntry
// 0x0014
struct FETQDebugEntry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FString_Mirror >                    ExecutedQueries;                                  		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct BaseAI.BaseAiPlugInHistory.BaseAIPlugInHistoryItem
// 0x0034
struct FBaseAIPlugInHistoryItem
{
	class UClass*                                      PlugInClass;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlugInName;                                       		// 0x0008 (0x0010) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	DWORD                                              bAborted : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bFailure : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bSuccess : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     VerboseString;                                    		// 0x0024 (0x0010) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIPluginLeap.LeapRequest
// 0x0020
struct FLeapRequest
{
	class AActor*                                      TheJumpDownNavPointPathObject;                    		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                LandSpotIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EdgesDropHeight;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	class UObject*                                     Observer;                                         		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                QueryID;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIPluginMovement.MoveRequestDestination
// 0x0015
struct FMoveRequestDestination
{
	struct FVector                                     VectorDest;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      ActorDest;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIPluginMovement.MoveParameters
// 0x0018
struct FMoveParameters
{
	unsigned char                                      MoveMood;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      MoveType;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	class AActor*                                      RotateAtEndToMatch;                               		// 0x0004 (0x0008) [0x0000000000000000]              
	class AActor*                                      FollowingActor;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	DWORD                                              bMovementCanBeInaccurate : 1;                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bMoveThroughLastPoint : 1;                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bStartPathFollowingShooting : 1;                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bEndPathFollowingShooting : 1;                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bForceAnyMove : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
	DWORD                                              bAllowedToFire : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct BaseAI.AIPluginMovement.MovementRequest
// 0x0068
struct FMovementRequest
{
	struct FMoveParameters                             MoveParams;                                       		// 0x0000 (0x0018) [0x0000000000000000]              
	float                                              AcceptableDistance;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     DestOffset;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     MidPointOffset;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FMoveRequestDestination                     Destination;                                      		// 0x0034 (0x0018) [0x0000000000000000]              
	class UNavigationPath*                             PreComputedPath;                                  		// 0x004C (0x0008) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x0054 (0x0001) [0x0000000000000000]              
	class UObject*                                     Observer;                                         		// 0x0058 (0x0008) [0x0000000000000000]              
	DWORD                                              bStickToNavmesh : 1;                              		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bStickToActionArea : 1;                           		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bDynamicDestOffset : 1;                           		// 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bDynamicMidPoint : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              bPostProcessPath : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                QueryID;                                          		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct BaseAI.AIPluginStuckFix.FixStuckRequest
// 0x0054
struct FFixStuckRequest
{
	struct FMoveParameters                             MoveParams;                                       		// 0x0000 (0x0018) [0x0000000000000000]              
	float                                              AcceptableDistance;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     DestOffset;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	struct FMoveRequestDestination                     Destination;                                      		// 0x0028 (0x0018) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x0040 (0x0001) [0x0000000000000000]              
	class UObject*                                     Observer;                                         		// 0x0044 (0x0008) [0x0000000000000000]              
	DWORD                                              bFinalApproach : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                QueryID;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct BaseAI.BaseAIController.LocalEnemyInfo
// 0x0034
struct FLocalEnemyInfo
{
	TArray< float >                                    PerceptionTimestamp;                              		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      LatestPerception;                                 		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      DominantPerception;                               		// 0x0011 (0x0001) [0x0000000000000000]              
	int                                                VisibleCoverActions;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              CurrentThreat;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     LatestLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	class APawn*                                       Pawn;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	DWORD                                              bSeenBefore : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bIsPlayer : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct BaseAI.BaseAIPawn.Breadcrumbs
// 0x0080
struct FBreadcrumbs
{
	struct FVector                                     Crumbs[ 0xA ];                                    		// 0x0000 (0x0078) [0x0000000000000000]              
	unsigned char                                      CurrentCrumb;                                     		// 0x0078 (0x0001) [0x0000000000000000]              
	float                                              CrumbDistanceSq;                                  		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct BaseAI.NavigationPath.BaseTransform
// 0x0100
struct FBaseTransform
{
	class AActor*                                      Base;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     InitialLocation;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    InitialRotation;                                  		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     UpdatedForLocation;                               		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FRotator                                    UpdatedForRotation;                               		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0038 (0x0008) MISSED OFFSET
	struct FMatrix                                     InitialReversedTransform;                         		// 0x0040 (0x0040) [0x0000000000000000]              
	struct FMatrix                                     IBS2WSTransform;                                  		// 0x0080 (0x0040) [0x0000000000000000]              
	struct FMatrix                                     WS2IBSTransform;                                  		// 0x00C0 (0x0040) [0x0000000000000000]              
};

// ScriptStruct BaseAI.NavigationPath.PathPoint
// 0x000D
struct FPathPoint
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      Flags;                                            		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct BaseAI.NavigationPath.PolyArray_Mirror
// 0x0010
struct FPolyArray_Mirror
{
	TArray< int >                                      Dummy;                                            		// 0x0000 (0x0010) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif