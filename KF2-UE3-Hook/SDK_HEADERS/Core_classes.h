/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
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

#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EAspectRatioAxisConstraint
/*enum EAspectRatioAxisConstraint
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_MAX                                    = 3
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostPhysicsPreClothWork                         = 3,
	TG_PostUpdateWork                                  = 4,
	TG_EffectsUpdateWork                               = 5,
	TG_MAX                                             = 6
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_MAX                                            = 7
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0060
class UObject
{
public:
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    HashNext;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FQWord                                      ObjectFlags;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FPointer                                    HashOuterNext;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FPointer                                    StateFrame;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	class UObject*                                     Linker;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FPointer                                    LinkerIndex;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                ObjectInternalInteger;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                NetIndex;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	class UObject*                                     Outer;                                            		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0048 (0x0008) [0x0000000000000000]              
	class UClass*                                      Class;                                            		// 0x0050 (0x0008) [0x0000000000000000]              
	class UObject*                                     ObjectArchetype;                                  		// 0x0058 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2 ];

		return pClassPointer;
	};

	void ProfNodeEvent ( );
	void ProfNodeSetDepthThreshold ( );
	void ProfNodeSetTimeThresholdSeconds ( );
	void ProfNodeStop ( );
	void ProfNodeStart ( );
	void GetStringFromGuid ( );
	void GetGuidFromString ( );
	void CreateGuid ( );
	void IsGuidValid ( );
	void InvalidateGuid ( );
	void GetLanguage ( );
	void GetRandomOptionSumFrequency ( );
	void GetBuildChangelistNumber ( );
	void GetEngineVersion ( );
	void GetSystemTime ( );
	void TimeStamp ( );
	void TransformVectorByRotation ( );
	void GetPackageName ( );
	void IsPendingKill ( );
	void ByteToFloat ( );
	void FloatToByte ( );
	void UnwindHeading ( );
	void FindDeltaAngle ( );
	void GetHeadingAngle ( );
	void GetAngularDegreesFromRadians ( );
	void GetAngularFromDotDist ( );
	void GetAngularDistance ( );
	void GetDotDistance ( );
	void PointProjectToPlane ( );
	void PointDistToPlane ( );
	void PointDistToSegment ( );
	void PointDistToLine ( );
	void GetPerObjectConfigSections ( );
	void ImportJSON ( );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	void FindObject ( );
	void DynamicLoadObject ( );
	void GetEnum ( );
	void Disable ( );
	void Enable ( );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( );
	void eventBeginState ( );
	void DumpStateStack ( );
	void PopState ( );
	void PushState ( );
	void GetStateName ( );
	void IsChildState ( );
	void IsInState ( );
	void GotoState ( );
	void IsUTracing ( );
	void SetUTracing ( );
	void GetFuncName ( );
	void DebugBreak ( );
	void GetScriptTrace ( );
	void ScriptTrace ( );
	void ParseLocalizedPropertyPath ( );
	void Localize ( );
	void WarnInternal ( );
	void LogInternal ( );
	void Subtract_LinearColorLinearColor ( );
	void Multiply_LinearColorFloat ( );
	void ColorToLinearColor ( );
	void MakeLinearColor ( );
	void LerpColor ( );
	void MakeColor ( );
	void Add_ColorColor ( );
	void Multiply_ColorFloat ( );
	void Multiply_FloatColor ( );
	void Subtract_ColorColor ( );
	void EvalInterpCurveVector2D ( );
	void EvalInterpCurveVector ( );
	void EvalInterpCurveFloat ( );
	void vect2d ( );
	void GetMappedRangeValue ( );
	void GetRangePctByValue ( );
	void GetRangeValueByPct ( );
	void SubtractEqual_Vector2DVector2D ( );
	void AddEqual_Vector2DVector2D ( );
	void DivideEqual_Vector2DFloat ( );
	void MultiplyEqual_Vector2DFloat ( );
	void Divide_Vector2DFloat ( );
	void Multiply_Vector2DFloat ( );
	void Subtract_Vector2DVector2D ( );
	void Add_Vector2DVector2D ( );
	void Subtract_QuatQuat ( );
	void Add_QuatQuat ( );
	void QuatSlerp ( );
	void QuatToRotator ( );
	void QuatFromRotator ( );
	void QuatFromAxisAndAngle ( );
	void QuatFindBetween ( );
	void QuatRotateVector ( );
	void QuatInvert ( );
	void QuatDot ( );
	void QuatProduct ( );
	void MatrixGetAxis ( );
	void MatrixGetOrigin ( );
	void MatrixGetRotator ( );
	void MakeRotationMatrix ( );
	void MakeRotationTranslationMatrix ( );
	void InverseTransformNormal ( );
	void TransformNormal ( );
	void InverseTransformVector ( );
	void TransformVector ( );
	void Multiply_MatrixMatrix ( );
	void NotEqual_NameName ( );
	void EqualEqual_NameName ( );
	void IsA ( );
	void ClassIsChildOf ( );
	void NotEqual_InterfaceInterface ( );
	void EqualEqual_InterfaceInterface ( );
	void NotEqual_ObjectObject ( );
	void EqualEqual_ObjectObject ( );
	void PathName ( );
	void SplitString ( );
	void ParseStringIntoArray ( );
	void JoinArray ( );
	void GetRightMost ( );
	void Split ( );
	void Repl ( );
	void Asc ( );
	void Chr ( );
	void Locs ( );
	void Caps ( );
	void Right ( );
	void Left ( );
	void Mid ( );
	void InStr ( );
	void Len ( );
	void SubtractEqual_StrStr ( );
	void AtEqual_StrStr ( );
	void ConcatEqual_StrStr ( );
	void ComplementEqual_StrStr ( );
	void NotEqual_StrStr ( );
	void EqualEqual_StrStr ( );
	void GreaterEqual_StrStr ( );
	void LessEqual_StrStr ( );
	void Greater_StrStr ( );
	void Less_StrStr ( );
	void At_StrStr ( );
	void Concat_StrStr ( );
	void MakeRotator ( );
	void SClampRotAxis ( );
	void ClampRotAxisFromRange ( );
	void ClampRotAxisFromBase ( );
	void ClampRotAxis ( );
	void RSize ( );
	void RDiff ( );
	void NormalizeRotAxis ( );
	void RInterpTo ( );
	void RTransform ( );
	void RLerp ( );
	void Normalize ( FRotator Rot, FRotator &Out );
	void OrthoRotation ( );
	void RotRand ( );
	void GetRotatorAxis ( );
	void GetUnAxes ( );
	void GetAxes ( );
	void ClockwiseFrom_IntInt ( );
	void SubtractEqual_RotatorRotator ( );
	void AddEqual_RotatorRotator ( );
	void Subtract_RotatorRotator ( );
	void Add_RotatorRotator ( );
	void DivideEqual_RotatorFloat ( );
	void MultiplyEqual_RotatorFloat ( );
	void Divide_RotatorFloat ( );
	void Multiply_FloatRotator ( );
	void Multiply_RotatorFloat ( );
	void NotEqual_RotatorRotator ( );
	void EqualEqual_RotatorRotator ( );
	void InCylinder ( );
	void NoZDot ( );
	void ClampLength ( );
	void VInterpTo ( );
	void IsZero ( );
	void ProjectOnTo ( );
	void MirrorVectorByNormal ( );
	void VRandCone2 ( );
	void VRandCone ( );
	void VRand ( );
	void VLerp ( );
	void Normal2D ( );
	void Normal ( );
	void VSizeSq2D ( );
	void VSizeSq ( );
	void VSize2D ( );
	void VSize ( FVector In, float &Out );
	void SubtractEqual_VectorVector ( );
	void AddEqual_VectorVector ( );
	void DivideEqual_VectorFloat ( );
	void MultiplyEqual_VectorVector ( );
	void MultiplyEqual_VectorFloat ( );
	void Cross_VectorVector ( );
	void Dot_VectorVector ( FVector A, FVector B, float &Out );
	void NotEqual_VectorVector ( );
	void EqualEqual_VectorVector ( );
	void GreaterGreater_VectorRotator ( );
	void LessLess_VectorRotator ( );
	void Subtract_VectorVector ( );
	void Add_VectorVector ( );
	void Divide_VectorFloat ( );
	void Multiply_VectorVector ( );
	void Multiply_FloatVector ( );
	void Multiply_VectorFloat ( );
	void Subtract_PreVector ( );
	void FInterpConstantTo ( );
	void FInterpTo ( );
	void FPctByRange ( );
	void RandRange ( );
	void FInterpEaseInOut ( );
	void FInterpEaseOut ( );
	void FInterpEaseIn ( );
	void FCubicInterp ( );
	void FCeil ( );
	void FFloor ( );
	void Round ( );
	void Lerp ( );
	void FClamp ( );
	void FMax ( );
	void FMin ( );
	void FRand ( );
	void Square ( );
	void Sqrt ( );
	void Loge ( );
	void Exp ( );
	void Atan2 ( );
	void Atan ( );
	void Tan ( );
	void Acos ( );
	void Cos ( );
	void Asin ( );
	void Sin ( );
	void Abs ( );
	void SubtractEqual_FloatFloat ( );
	void AddEqual_FloatFloat ( );
	void DivideEqual_FloatFloat ( );
	void MultiplyEqual_FloatFloat ( );
	void NotEqual_FloatFloat ( );
	void ComplementEqual_FloatFloat ( );
	void EqualEqual_FloatFloat ( );
	void GreaterEqual_FloatFloat ( );
	void LessEqual_FloatFloat ( );
	void Greater_FloatFloat ( );
	void Less_FloatFloat ( );
	void Subtract_FloatFloat ( );
	void Add_FloatFloat ( );
	void Percent_FloatFloat ( );
	void Divide_FloatFloat ( );
	void Multiply_FloatFloat ( );
	void MultiplyMultiply_FloatFloat ( );
	void Subtract_PreFloat ( );
	void ToHex ( );
	void Clamp ( );
	void Max ( );
	void Min ( );
	void Rand ( );
	void SubtractSubtract_Int ( );
	void AddAdd_Int ( );
	void SubtractSubtract_PreInt ( );
	void AddAdd_PreInt ( );
	void SubtractEqual_IntInt ( );
	void AddEqual_IntInt ( );
	void DivideEqual_IntFloat ( );
	void MultiplyEqual_IntFloat ( );
	void Or_IntInt ( );
	void Xor_IntInt ( );
	void And_IntInt ( );
	void NotEqual_IntInt ( );
	void EqualEqual_IntInt ( );
	void GreaterEqual_IntInt ( );
	void LessEqual_IntInt ( );
	void Greater_IntInt ( );
	void Less_IntInt ( );
	void GreaterGreaterGreater_IntInt ( );
	void GreaterGreater_IntInt ( );
	void LessLess_IntInt ( );
	void Subtract_IntInt ( );
	void Add_IntInt ( );
	void Percent_IntInt ( );
	void Divide_IntInt ( );
	void Multiply_IntInt ( );
	void Subtract_PreInt ( );
	void Complement_PreInt ( );
	void SubtractSubtract_Byte ( );
	void AddAdd_Byte ( );
	void SubtractSubtract_PreByte ( );
	void AddAdd_PreByte ( );
	void SubtractEqual_ByteByte ( );
	void AddEqual_ByteByte ( );
	void DivideEqual_ByteByte ( );
	void MultiplyEqual_ByteFloat ( );
	void MultiplyEqual_ByteByte ( );
	void OrOr_BoolBool ( );
	void XorXor_BoolBool ( );
	void AndAnd_BoolBool ( );
	void NotEqual_BoolBool ( );
	void EqualEqual_BoolBool ( );
	void Not_PreBool ( );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			
	virtual void VirtualFunction01 ( );																			
	virtual void VirtualFunction02 ( );																			
	virtual void VirtualFunction03 ( );																			
	virtual void VirtualFunction04 ( );																			
	virtual void VirtualFunction05 ( );																			
	virtual void VirtualFunction06 ( );																			
	virtual void VirtualFunction07 ( );																			
	virtual void VirtualFunction08 ( );																			
	virtual void VirtualFunction09 ( );																			
	virtual void VirtualFunction10 ( );																			
	virtual void VirtualFunction11 ( );																			
	virtual void VirtualFunction12 ( );																			
	virtual void VirtualFunction13 ( );																			
	virtual void VirtualFunction14 ( );																			
	virtual void VirtualFunction15 ( );																			
	virtual void VirtualFunction16 ( );																			
	virtual void VirtualFunction17 ( );																			
	virtual void VirtualFunction18 ( );																			
	virtual void VirtualFunction19 ( );																			
	virtual void VirtualFunction20 ( );																			
	virtual void VirtualFunction21 ( );																			
	virtual void VirtualFunction22 ( );																			
	virtual void VirtualFunction23 ( );																			
	virtual void VirtualFunction24 ( );																			
	virtual void VirtualFunction25 ( );																			
	virtual void VirtualFunction26 ( );																			
	virtual void VirtualFunction27 ( );																			
	virtual void VirtualFunction28 ( );																			
	virtual void VirtualFunction29 ( );																			
	virtual void VirtualFunction30 ( );																			
	virtual void VirtualFunction31 ( );																			
	virtual void VirtualFunction32 ( );																			
	virtual void VirtualFunction33 ( );																			
	virtual void VirtualFunction34 ( );																			
	virtual void VirtualFunction35 ( );																			
	virtual void VirtualFunction36 ( );																			
	virtual void VirtualFunction37 ( );																			
	virtual void VirtualFunction38 ( );																			
	virtual void VirtualFunction39 ( );																			
	virtual void VirtualFunction40 ( );																			
	virtual void VirtualFunction41 ( );																			
	virtual void VirtualFunction42 ( );																			
	virtual void VirtualFunction43 ( );																			
	virtual void VirtualFunction44 ( );																			
	virtual void VirtualFunction45 ( );																			
	virtual void VirtualFunction46 ( );																			
	virtual void VirtualFunction47 ( );																			
	virtual void VirtualFunction48 ( );																			
	virtual void VirtualFunction49 ( );																			
	virtual void VirtualFunction50 ( );																			
	virtual void VirtualFunction51 ( );																			
	virtual void VirtualFunction52 ( );																			
	virtual void VirtualFunction53 ( );																			
	virtual void VirtualFunction54 ( );																			
	virtual void VirtualFunction55 ( );																			
	virtual void VirtualFunction56 ( );																			
	virtual void VirtualFunction57 ( );																			
	virtual void VirtualFunction58 ( );																			
	virtual void VirtualFunction59 ( );																			
	virtual void VirtualFunction60 ( );																			
	virtual void VirtualFunction61 ( );																			
	virtual void VirtualFunction62 ( );																			
	virtual void VirtualFunction63 ( );																			
	virtual void VirtualFunction64 ( );																			
	virtual void VirtualFunction65 ( );																		
	virtual void VirtualFunction66 ( );																			
	virtual void ProcessEvent(class UFunction* pFunction, void* pParms, void* pResult = NULL);                  // 67
};

UClass* UObject::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x002C (0x008C - 0x0060)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x2C ];                            		// 0x0060 (0x002C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1 ];

		return pClassPointer;
	};

};

UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0008 (0x0068 - 0x0060)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x0060 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6 ];

		return pClassPointer;
	};

};

UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x00F4 (0x015C - 0x0068)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                MaxStaleCacheSize;                                		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                MaxOverallCacheSize;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                PackageSizeSoftLimit;                             		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              AsyncIOBandwidthLimit;                            		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     SavePath;                                         		// 0x007C (0x0010) [0x0000000000000000]              
	struct FString                                     CachePath;                                        		// 0x008C (0x0010) [0x0000000000000000]              
	struct FString                                     CacheExt;                                         		// 0x009C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Paths;                                            		// 0x00AC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x00BC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           ScriptPaths;                                      		// 0x00CC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00DC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00EC (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             Suppress;                                         		// 0x00FC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Extensions;                                       		// 0x010C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x011C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           LocalizationPaths;                                		// 0x012C (0x0010) [0x0000000000000000]              
	struct FString                                     TextureFileCacheExtension;                        		// 0x013C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           BrewedPCPaths;                                    		// 0x014C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 5 ];

		return pClassPointer;
	};

};

UClass* USystem::pClassPointer = NULL;

// Class Core.PackageMap
// 0x00A0 (0x0100 - 0x0060)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x0060 (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38 ];

		return pClassPointer;
	};

};

UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x0010 (0x0070 - 0x0060)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0060 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40 ];

		return pClassPointer;
	};

};

UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0008 (0x0068 - 0x0060)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42 ];

		return pClassPointer;
	};

};

UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.MetaData
// 0x0048 (0x00A8 - 0x0060)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0060 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44 ];

		return pClassPointer;
	};

};

UClass* UMetaData::pClassPointer = NULL;

// Class Core.Linker
// 0x0168 (0x01C8 - 0x0060)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x168 ];                           		// 0x0060 (0x0168) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47 ];

		return pClassPointer;
	};

};

UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x00B4 (0x027C - 0x01C8)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xB4 ];                            		// 0x01C8 (0x00B4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46 ];

		return pClassPointer;
	};

};

UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x0604 (0x07CC - 0x01C8)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x604 ];                           		// 0x01C8 (0x0604) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50 ];

		return pClassPointer;
	};

};

UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x0060 - 0x0060)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52 ];

		return pClassPointer;
	};

};

UClass* UInterface::pClassPointer = NULL;

// Class Core.Field
// 0x0008 (0x0068 - 0x0060)
class UField : public UObject
{
public:
		class UField*                                      Next;

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56 ];

		return pClassPointer;
	};

};

UClass* UField::pClassPointer = NULL;

// Class Core.Struct
// 0x0068 (0x00D0 - 0x0068)
class UStruct : public UField
{
public:
		unsigned char			UnknownData00[0x10];				// 0x0068 (0x10)
		class UField*			SuperField;							// 0x0078 (0x8)
		class UField*			Children;							// 0x0080 (0x8)
		int						PropertySize;						// 0x0088 (0x4)
		unsigned char			UnknownData01[0x44];				// 0x008C (0x44)

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55 ];

		return pClassPointer;
	};

};

UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x0024 (0x00F4 - 0x00D0)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x00D0 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54 ];

		return pClassPointer;
	};

};

UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.Function
// 0x0028 (0x00F8 - 0x00D0)
class UFunction : public UStruct
{
public:
		unsigned long		FunctionFlags;						// 0x00D0 (0x04)
		unsigned short		iNative;							// 0x00D4 (0x02)
		unsigned short		RepOffset;							// 0x00D6 (0x02)
		struct FName		FriendlyName;						// 0x00D8 (0x08)
		unsigned short		NumParms;							// 0x00E0 (0x02)
		unsigned short		ParmsSize;							// 0x00E2 (0x02)
		unsigned short		ReturnValueOffset;					// 0x00E4 (0x02)
		char				UnknownData[0xA];					// 0x00E6 (0x0A)
		void*				Func;								// 0x00F0 (0x08)

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60 ];

		return pClassPointer;
	};

};

UClass* UFunction::pClassPointer = NULL;

// Class Core.Property
// 0x0040 (0x00A8 - 0x0068)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x0068 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63 ];

		return pClassPointer;
	};

};

UClass* UProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0008 (0x00B0 - 0x00A8)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62 ];

		return pClassPointer;
	};

};

UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x00A8 - 0x00A8)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 66 ];

		return pClassPointer;
	};

};

UClass* UStrProperty::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0008 (0x00B0 - 0x00A8)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69 ];

		return pClassPointer;
	};

};

UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x00B0 - 0x00B0)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68 ];

		return pClassPointer;
	};

};

UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0008 (0x00B8 - 0x00B0)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72 ];

		return pClassPointer;
	};

};

UClass* UClassProperty::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x00A8 - 0x00A8)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 74 ];

		return pClassPointer;
	};

};

UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0010 (0x00B8 - 0x00A8)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x00A8 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76 ];

		return pClassPointer;
	};

};

UClass* UMapProperty::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x00A8 - 0x00A8)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78 ];

		return pClassPointer;
	};

};

UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0008 (0x00B0 - 0x00A8)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80 ];

		return pClassPointer;
	};

};

UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x00A8 - 0x00A8)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82 ];

		return pClassPointer;
	};

};

UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0010 (0x00B8 - 0x00A8)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x00A8 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84 ];

		return pClassPointer;
	};

};

UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0008 (0x00B0 - 0x00A8)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86 ];

		return pClassPointer;
	};

};

UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x00AC - 0x00A8)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A8 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88 ];

		return pClassPointer;
	};

};

UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0008 (0x00B0 - 0x00A8)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 90 ];

		return pClassPointer;
	};

};

UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Enum
// 0x0010 (0x0078 - 0x0068)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0068 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92 ];

		return pClassPointer;
	};

};

UClass* UEnum::pClassPointer = NULL;

// Class Core.Const
// 0x0010 (0x0078 - 0x0068)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0068 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 94 ];

		return pClassPointer;
	};

};

UClass* UConst::pClassPointer = NULL;

// Class Core.Factory
// 0x0048 (0x00A8 - 0x0060)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                   		// 0x0060 (0x0008) [0x0000000000000000]              
	class UClass*                                      ContextClass;                                     		// 0x0068 (0x0008) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0070 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Formats;                                          		// 0x0080 (0x0010) [0x0000000000000000]              
	DWORD                                              bCreateNew : 1;                                   		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bEditAfterNew : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              bEditorImport : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              bText : 1;                                        		// 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                AutoPriority;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0098 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 97 ];

		return pClassPointer;
	};

};

UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x00A8 - 0x00A8)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 96 ];

		return pClassPointer;
	};

};

UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.Exporter
// 0x0034 (0x0094 - 0x0060)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0068 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           FormatDescription;                                		// 0x0078 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0088 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 100 ];

		return pClassPointer;
	};

};

UClass* UExporter::pClassPointer = NULL;

// Class Core.Component
// 0x0010 (0x0070 - 0x0060)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FName                                       TemplateName;                                     		// 0x0068 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 107 ];

		return pClassPointer;
	};

};

UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x000C (0x007C - 0x0070)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000000000]              
	DWORD                                              bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106 ];

		return pClassPointer;
	};

	void GetVectorValue ( );
};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x000C (0x007C - 0x0070)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000000000]              
	DWORD                                              bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110 ];

		return pClassPointer;
	};

	void GetFloatValue ( );
};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0054 (0x00B4 - 0x0060)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FString                                     HelpUsage;                                        		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FString                                     HelpWebLink;                                      		// 0x0080 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0090 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x00A0 (0x0010) [0x0000000000000000]              
	DWORD                                              IsServer : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	DWORD                                              IsClient : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	DWORD                                              IsEditor : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	DWORD                                              LogToConsole : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	DWORD                                              ShowErrorCount : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113 ];

		return pClassPointer;
	};

	void eventMain ( );
};

UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112 ];

		return pClassPointer;
	};

	void eventMain ( );
};

UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.State
// 0x0054 (0x0124 - 0x00D0)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x00D0 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116 ];

		return pClassPointer;
	};

};

UClass* UState::pClassPointer = NULL;

// Class Core.Package
// 0x00D4 (0x0134 - 0x0060)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xD4 ];                            		// 0x0060 (0x00D4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118 ];

		return pClassPointer;
	};

};

UClass* UPackage::pClassPointer = NULL;

// Class Core.Class
// 0x014C (0x0270 - 0x0124)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x0124 (0x014C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 120 ];

		return pClassPointer;
	};

};

UClass* UClass::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif