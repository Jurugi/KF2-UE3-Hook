/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_functions.h
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
# Basic Functions
# ========================================================================================= #
*/

TArray< UObject* >* UObject::GObjObjects() 
{ 
	TArray< UObject* >* ObjectArray = (TArray< UObject* >*) GObjects; 
	return ObjectArray; 
} 

char* UObject::GetName() 
{ 
	static char cOutBuffer[ 256 ]; 

	sprintf_s ( cOutBuffer, "%s", this->Name.GetName() ); 

	return cOutBuffer; 
} 

char* UObject::GetNameCPP() 
{ 
	static char cOutBuffer[ 256 ]; 

	if ( this->IsA ( UClass::StaticClass() ) ) 
	{ 
		UClass* pClass = (UClass*) this; 
		while ( pClass ) 
		{ 
			if ( ! strcmp ( pClass->GetName(), "Actor" ) ) 
			{ 
				strcpy_s ( cOutBuffer, "A" ); 
				break; 
			} 
			else if ( ! strcmp ( pClass->GetName(), "Object" ) ) 
			{ 
				strcpy_s ( cOutBuffer, "U" ); 
				break; 
			} 

			pClass = (UClass*) pClass->SuperField; 
		} 
	} 
	else 
	{ 
		strcpy_s ( cOutBuffer, "F" ); 
	} 

	strcat_s ( cOutBuffer, this->GetName() ); 

	return cOutBuffer; 
} 

char* UObject::GetFullName() 
{ 
	if ( this->Class && this->Outer ) 
	{ 
		static char cOutBuffer[ 256 ]; 

		if ( this->Outer->Outer ) 
		{ 
			strcpy_s ( cOutBuffer, this->Class->GetName() ); 
			strcat_s ( cOutBuffer, " " ); 
			strcat_s ( cOutBuffer, this->Outer->Outer->GetName() ); 
			strcat_s ( cOutBuffer, "." ); 
			strcat_s ( cOutBuffer, this->Outer->GetName() ); 
			strcat_s ( cOutBuffer, "." ); 
			strcat_s ( cOutBuffer, this->GetName() ); 
		} 
		else 
		{ 
			strcpy_s ( cOutBuffer, this->Class->GetName() ); 
			strcat_s ( cOutBuffer, " " ); 
			strcat_s ( cOutBuffer, this->Outer->GetName() ); 
			strcat_s ( cOutBuffer, "." ); 
			strcat_s ( cOutBuffer, this->GetName() ); 
		} 

		return cOutBuffer; 
	} 

	return "(null)"; 
} 

template< class T > T* UObject::FindObject ( char* ObjectFullName ) 
{ 
	while ( ! UObject::GObjObjects() ) 
		Sleep ( 100 ); 

	while ( ! FName::Names() ) 
		Sleep( 100 ); 

	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i ) 
	{ 
		UObject* Object = UObject::GObjObjects()->Data[ i ]; 

		// skip no T class objects 
		if 
		( 
				! Object 
			||	! Object->IsA ( T::StaticClass() ) 
		) 
			continue; 

		// check 
		if ( ! _stricmp ( Object->GetFullName(), ObjectFullName ) ) 
			return (T*) Object; 
	} 

	return NULL; 
} 

UClass* UObject::FindClass ( char* ClassFullName ) 
{ 
	while ( ! UObject::GObjObjects() ) 
		Sleep ( 100 ); 

	while ( ! FName::Names() ) 
		Sleep ( 100 ); 

	for ( int i = 0; i < UObject::GObjObjects()->Count; ++i ) 
	{ 
		UObject* Object = UObject::GObjObjects()->Data[ i ]; 

		if ( ! Object ) 
			continue; 

		if ( ! _stricmp ( Object->GetFullName(), ClassFullName ) ) 
			return (UClass*) Object; 
	} 

	return NULL; 
} 

bool UObject::IsA ( UClass* pClass ) 
{ 
	for ( UClass* SuperClass = this->Class; SuperClass; SuperClass = ( UClass* ) SuperClass->SuperField ) 
	{ 
		if ( SuperClass == pClass ) 
			return true; 
	} 

	return false; 
} 

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function Core.Object.ProfNodeEvent
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ProfNodeEvent ( )
{
	static UFunction* pFnProfNodeEvent = NULL;

	if ( ! pFnProfNodeEvent )
		pFnProfNodeEvent = (UFunction*) UObject::GObjObjects()->Data[ 3612 ];

	UObject_execProfNodeEvent_Parms ProfNodeEvent_Parms;

	pFnProfNodeEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProfNodeEvent, &ProfNodeEvent_Parms, NULL );

	pFnProfNodeEvent->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeSetDepthThreshold
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ProfNodeSetDepthThreshold ( )
{
	static UFunction* pFnProfNodeSetDepthThreshold = NULL;

	if ( ! pFnProfNodeSetDepthThreshold )
		pFnProfNodeSetDepthThreshold = (UFunction*) UObject::GObjObjects()->Data[ 3613 ];

	UObject_execProfNodeSetDepthThreshold_Parms ProfNodeSetDepthThreshold_Parms;

	pFnProfNodeSetDepthThreshold->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProfNodeSetDepthThreshold, &ProfNodeSetDepthThreshold_Parms, NULL );

	pFnProfNodeSetDepthThreshold->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeSetTimeThresholdSeconds
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ProfNodeSetTimeThresholdSeconds ( )
{
	static UFunction* pFnProfNodeSetTimeThresholdSeconds = NULL;

	if ( ! pFnProfNodeSetTimeThresholdSeconds )
		pFnProfNodeSetTimeThresholdSeconds = (UFunction*) UObject::GObjObjects()->Data[ 3615 ];

	UObject_execProfNodeSetTimeThresholdSeconds_Parms ProfNodeSetTimeThresholdSeconds_Parms;

	pFnProfNodeSetTimeThresholdSeconds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProfNodeSetTimeThresholdSeconds, &ProfNodeSetTimeThresholdSeconds_Parms, NULL );

	pFnProfNodeSetTimeThresholdSeconds->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeStop
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ProfNodeStop ( )
{
	static UFunction* pFnProfNodeStop = NULL;

	if ( ! pFnProfNodeStop )
		pFnProfNodeStop = (UFunction*) UObject::GObjObjects()->Data[ 3617 ];

	UObject_execProfNodeStop_Parms ProfNodeStop_Parms;

	pFnProfNodeStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProfNodeStop, &ProfNodeStop_Parms, NULL );

	pFnProfNodeStop->FunctionFlags |= 0x400;
};

// Function Core.Object.ProfNodeStart
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ProfNodeStart ( )
{
	static UFunction* pFnProfNodeStart = NULL;

	if ( ! pFnProfNodeStart )
		pFnProfNodeStart = (UFunction*) UObject::GObjObjects()->Data[ 3619 ];

	UObject_execProfNodeStart_Parms ProfNodeStart_Parms;

	pFnProfNodeStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProfNodeStart, &ProfNodeStart_Parms, NULL );

	pFnProfNodeStart->FunctionFlags |= 0x400;
};

// Function Core.Object.GetStringFromGuid
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetStringFromGuid ( )
{
	static UFunction* pFnGetStringFromGuid = NULL;

	if ( ! pFnGetStringFromGuid )
		pFnGetStringFromGuid = (UFunction*) UObject::GObjObjects()->Data[ 3621 ];

	UObject_execGetStringFromGuid_Parms GetStringFromGuid_Parms;

	pFnGetStringFromGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStringFromGuid, &GetStringFromGuid_Parms, NULL );

	pFnGetStringFromGuid->FunctionFlags |= 0x400;
};

// Function Core.Object.GetGuidFromString
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetGuidFromString ( )
{
	static UFunction* pFnGetGuidFromString = NULL;

	if ( ! pFnGetGuidFromString )
		pFnGetGuidFromString = (UFunction*) UObject::GObjObjects()->Data[ 3624 ];

	UObject_execGetGuidFromString_Parms GetGuidFromString_Parms;

	pFnGetGuidFromString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGuidFromString, &GetGuidFromString_Parms, NULL );

	pFnGetGuidFromString->FunctionFlags |= 0x400;
};

// Function Core.Object.CreateGuid
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::CreateGuid ( )
{
	static UFunction* pFnCreateGuid = NULL;

	if ( ! pFnCreateGuid )
		pFnCreateGuid = (UFunction*) UObject::GObjObjects()->Data[ 3633 ];

	UObject_execCreateGuid_Parms CreateGuid_Parms;

	pFnCreateGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateGuid, &CreateGuid_Parms, NULL );

	pFnCreateGuid->FunctionFlags |= 0x400;
};

// Function Core.Object.IsGuidValid
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::IsGuidValid ( )
{
	static UFunction* pFnIsGuidValid = NULL;

	if ( ! pFnIsGuidValid )
		pFnIsGuidValid = (UFunction*) UObject::GObjObjects()->Data[ 3636 ];

	UObject_execIsGuidValid_Parms IsGuidValid_Parms;

	pFnIsGuidValid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsGuidValid, &IsGuidValid_Parms, NULL );

	pFnIsGuidValid->FunctionFlags |= 0x400;
};

// Function Core.Object.InvalidateGuid
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::InvalidateGuid ( )
{
	static UFunction* pFnInvalidateGuid = NULL;

	if ( ! pFnInvalidateGuid )
		pFnInvalidateGuid = (UFunction*) UObject::GObjObjects()->Data[ 3638 ];

	UObject_execInvalidateGuid_Parms InvalidateGuid_Parms;

	pFnInvalidateGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvalidateGuid, &InvalidateGuid_Parms, NULL );

	pFnInvalidateGuid->FunctionFlags |= 0x400;
};

// Function Core.Object.GetLanguage
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetLanguage ( )
{
	static UFunction* pFnGetLanguage = NULL;

	if ( ! pFnGetLanguage )
		pFnGetLanguage = (UFunction*) UObject::GObjObjects()->Data[ 3641 ];

	UObject_execGetLanguage_Parms GetLanguage_Parms;

	pFnGetLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLanguage, &GetLanguage_Parms, NULL );

	pFnGetLanguage->FunctionFlags |= 0x400;
};

// Function Core.Object.GetRandomOptionSumFrequency
// [0x00420003] ( FUNC_Final )
// Parameters infos:

void UObject::GetRandomOptionSumFrequency ( )
{
	static UFunction* pFnGetRandomOptionSumFrequency = NULL;

	if ( ! pFnGetRandomOptionSumFrequency )
		pFnGetRandomOptionSumFrequency = (UFunction*) UObject::GObjObjects()->Data[ 3643 ];

	UObject_execGetRandomOptionSumFrequency_Parms GetRandomOptionSumFrequency_Parms;

	this->ProcessEvent ( pFnGetRandomOptionSumFrequency, &GetRandomOptionSumFrequency_Parms, NULL );
};

// Function Core.Object.GetBuildChangelistNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetBuildChangelistNumber ( )
{
	static UFunction* pFnGetBuildChangelistNumber = NULL;

	if ( ! pFnGetBuildChangelistNumber )
		pFnGetBuildChangelistNumber = (UFunction*) UObject::GObjObjects()->Data[ 3645 ];

	UObject_execGetBuildChangelistNumber_Parms GetBuildChangelistNumber_Parms;

	pFnGetBuildChangelistNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBuildChangelistNumber, &GetBuildChangelistNumber_Parms, NULL );

	pFnGetBuildChangelistNumber->FunctionFlags |= 0x400;
};

// Function Core.Object.GetEngineVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetEngineVersion ( )
{
	static UFunction* pFnGetEngineVersion = NULL;

	if ( ! pFnGetEngineVersion )
		pFnGetEngineVersion = (UFunction*) UObject::GObjObjects()->Data[ 3652 ];

	UObject_execGetEngineVersion_Parms GetEngineVersion_Parms;

	pFnGetEngineVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEngineVersion, &GetEngineVersion_Parms, NULL );

	pFnGetEngineVersion->FunctionFlags |= 0x400;
};

// Function Core.Object.GetSystemTime
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetSystemTime ( )
{
	static UFunction* pFnGetSystemTime = NULL;

	if ( ! pFnGetSystemTime )
		pFnGetSystemTime = (UFunction*) UObject::GObjObjects()->Data[ 3654 ];

	UObject_execGetSystemTime_Parms GetSystemTime_Parms;

	pFnGetSystemTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSystemTime, &GetSystemTime_Parms, NULL );

	pFnGetSystemTime->FunctionFlags |= 0x400;
};

// Function Core.Object.TimeStamp
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::TimeStamp ( )
{
	static UFunction* pFnTimeStamp = NULL;

	if ( ! pFnTimeStamp )
		pFnTimeStamp = (UFunction*) UObject::GObjObjects()->Data[ 3656 ];

	UObject_execTimeStamp_Parms TimeStamp_Parms;

	pFnTimeStamp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTimeStamp, &TimeStamp_Parms, NULL );

	pFnTimeStamp->FunctionFlags |= 0x400;
};

// Function Core.Object.TransformVectorByRotation
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::TransformVectorByRotation ( )
{
	static UFunction* pFnTransformVectorByRotation = NULL;

	if ( ! pFnTransformVectorByRotation )
		pFnTransformVectorByRotation = (UFunction*) UObject::GObjObjects()->Data[ 3665 ];

	UObject_execTransformVectorByRotation_Parms TransformVectorByRotation_Parms;

	pFnTransformVectorByRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTransformVectorByRotation, &TransformVectorByRotation_Parms, NULL );

	pFnTransformVectorByRotation->FunctionFlags |= 0x400;
};

// Function Core.Object.GetPackageName
// [0x00020003] ( FUNC_Final )
// Parameters infos:

void UObject::GetPackageName ( )
{
	static UFunction* pFnGetPackageName = NULL;

	if ( ! pFnGetPackageName )
		pFnGetPackageName = (UFunction*) UObject::GObjObjects()->Data[ 3667 ];

	UObject_execGetPackageName_Parms GetPackageName_Parms;

	this->ProcessEvent ( pFnGetPackageName, &GetPackageName_Parms, NULL );
};

// Function Core.Object.IsPendingKill
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::IsPendingKill ( )
{
	static UFunction* pFnIsPendingKill = NULL;

	if ( ! pFnIsPendingKill )
		pFnIsPendingKill = (UFunction*) UObject::GObjObjects()->Data[ 3681 ];

	UObject_execIsPendingKill_Parms IsPendingKill_Parms;

	pFnIsPendingKill->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPendingKill, &IsPendingKill_Parms, NULL );

	pFnIsPendingKill->FunctionFlags |= 0x400;
};

// Function Core.Object.ByteToFloat
// [0x00024103] ( FUNC_Final )
// Parameters infos:

void UObject::ByteToFloat ( )
{
	static UFunction* pFnByteToFloat = NULL;

	if ( ! pFnByteToFloat )
		pFnByteToFloat = (UFunction*) UObject::GObjObjects()->Data[ 3686 ];

	UObject_execByteToFloat_Parms ByteToFloat_Parms;

	this->ProcessEvent ( pFnByteToFloat, &ByteToFloat_Parms, NULL );
};

// Function Core.Object.FloatToByte
// [0x00024103] ( FUNC_Final )
// Parameters infos:

void UObject::FloatToByte ( )
{
	static UFunction* pFnFloatToByte = NULL;

	if ( ! pFnFloatToByte )
		pFnFloatToByte = (UFunction*) UObject::GObjObjects()->Data[ 3688 ];

	UObject_execFloatToByte_Parms FloatToByte_Parms;

	this->ProcessEvent ( pFnFloatToByte, &FloatToByte_Parms, NULL );
};

// Function Core.Object.UnwindHeading
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::UnwindHeading ( )
{
	static UFunction* pFnUnwindHeading = NULL;

	if ( ! pFnUnwindHeading )
		pFnUnwindHeading = (UFunction*) UObject::GObjObjects()->Data[ 3692 ];

	UObject_execUnwindHeading_Parms UnwindHeading_Parms;

	this->ProcessEvent ( pFnUnwindHeading, &UnwindHeading_Parms, NULL );
};

// Function Core.Object.FindDeltaAngle
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::FindDeltaAngle ( )
{
	static UFunction* pFnFindDeltaAngle = NULL;

	if ( ! pFnFindDeltaAngle )
		pFnFindDeltaAngle = (UFunction*) UObject::GObjObjects()->Data[ 3696 ];

	UObject_execFindDeltaAngle_Parms FindDeltaAngle_Parms;

	this->ProcessEvent ( pFnFindDeltaAngle, &FindDeltaAngle_Parms, NULL );
};

// Function Core.Object.GetHeadingAngle
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::GetHeadingAngle ( )
{
	static UFunction* pFnGetHeadingAngle = NULL;

	if ( ! pFnGetHeadingAngle )
		pFnGetHeadingAngle = (UFunction*) UObject::GObjObjects()->Data[ 3699 ];

	UObject_execGetHeadingAngle_Parms GetHeadingAngle_Parms;

	this->ProcessEvent ( pFnGetHeadingAngle, &GetHeadingAngle_Parms, NULL );
};

// Function Core.Object.GetAngularDegreesFromRadians
// [0x00422103] ( FUNC_Final )
// Parameters infos:

void UObject::GetAngularDegreesFromRadians ( )
{
	static UFunction* pFnGetAngularDegreesFromRadians = NULL;

	if ( ! pFnGetAngularDegreesFromRadians )
		pFnGetAngularDegreesFromRadians = (UFunction*) UObject::GObjObjects()->Data[ 3704 ];

	UObject_execGetAngularDegreesFromRadians_Parms GetAngularDegreesFromRadians_Parms;

	this->ProcessEvent ( pFnGetAngularDegreesFromRadians, &GetAngularDegreesFromRadians_Parms, NULL );
};

// Function Core.Object.GetAngularFromDotDist
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetAngularFromDotDist ( )
{
	static UFunction* pFnGetAngularFromDotDist = NULL;

	if ( ! pFnGetAngularFromDotDist )
		pFnGetAngularFromDotDist = (UFunction*) UObject::GObjObjects()->Data[ 3709 ];

	UObject_execGetAngularFromDotDist_Parms GetAngularFromDotDist_Parms;

	pFnGetAngularFromDotDist->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAngularFromDotDist, &GetAngularFromDotDist_Parms, NULL );

	pFnGetAngularFromDotDist->FunctionFlags |= 0x400;
};

// Function Core.Object.GetAngularDistance
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetAngularDistance ( )
{
	static UFunction* pFnGetAngularDistance = NULL;

	if ( ! pFnGetAngularDistance )
		pFnGetAngularDistance = (UFunction*) UObject::GObjObjects()->Data[ 3715 ];

	UObject_execGetAngularDistance_Parms GetAngularDistance_Parms;

	pFnGetAngularDistance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAngularDistance, &GetAngularDistance_Parms, NULL );

	pFnGetAngularDistance->FunctionFlags |= 0x400;
};

// Function Core.Object.GetDotDistance
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetDotDistance ( )
{
	static UFunction* pFnGetDotDistance = NULL;

	if ( ! pFnGetDotDistance )
		pFnGetDotDistance = (UFunction*) UObject::GObjObjects()->Data[ 3718 ];

	UObject_execGetDotDistance_Parms GetDotDistance_Parms;

	pFnGetDotDistance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDotDistance, &GetDotDistance_Parms, NULL );

	pFnGetDotDistance->FunctionFlags |= 0x400;
};

// Function Core.Object.PointProjectToPlane
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::PointProjectToPlane ( )
{
	static UFunction* pFnPointProjectToPlane = NULL;

	if ( ! pFnPointProjectToPlane )
		pFnPointProjectToPlane = (UFunction*) UObject::GObjObjects()->Data[ 3725 ];

	UObject_execPointProjectToPlane_Parms PointProjectToPlane_Parms;

	pFnPointProjectToPlane->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPointProjectToPlane, &PointProjectToPlane_Parms, NULL );

	pFnPointProjectToPlane->FunctionFlags |= 0x400;
};

// Function Core.Object.PointDistToPlane
// [0x00C24103] ( FUNC_Final )
// Parameters infos:

void UObject::PointDistToPlane ( )
{
	static UFunction* pFnPointDistToPlane = NULL;

	if ( ! pFnPointDistToPlane )
		pFnPointDistToPlane = (UFunction*) UObject::GObjObjects()->Data[ 3732 ];

	UObject_execPointDistToPlane_Parms PointDistToPlane_Parms;

	this->ProcessEvent ( pFnPointDistToPlane, &PointDistToPlane_Parms, NULL );
};

// Function Core.Object.PointDistToSegment
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::PointDistToSegment ( )
{
	static UFunction* pFnPointDistToSegment = NULL;

	if ( ! pFnPointDistToSegment )
		pFnPointDistToSegment = (UFunction*) UObject::GObjObjects()->Data[ 3738 ];

	UObject_execPointDistToSegment_Parms PointDistToSegment_Parms;

	pFnPointDistToSegment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPointDistToSegment, &PointDistToSegment_Parms, NULL );

	pFnPointDistToSegment->FunctionFlags |= 0x400;
};

// Function Core.Object.PointDistToLine
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::PointDistToLine ( )
{
	static UFunction* pFnPointDistToLine = NULL;

	if ( ! pFnPointDistToLine )
		pFnPointDistToLine = (UFunction*) UObject::GObjObjects()->Data[ 3751 ];

	UObject_execPointDistToLine_Parms PointDistToLine_Parms;

	pFnPointDistToLine->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPointDistToLine, &PointDistToLine_Parms, NULL );

	pFnPointDistToLine->FunctionFlags |= 0x400;
};

// Function Core.Object.GetPerObjectConfigSections
// [0x00426401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetPerObjectConfigSections ( )
{
	static UFunction* pFnGetPerObjectConfigSections = NULL;

	if ( ! pFnGetPerObjectConfigSections )
		pFnGetPerObjectConfigSections = (UFunction*) UObject::GObjObjects()->Data[ 3757 ];

	UObject_execGetPerObjectConfigSections_Parms GetPerObjectConfigSections_Parms;

	pFnGetPerObjectConfigSections->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPerObjectConfigSections, &GetPerObjectConfigSections_Parms, NULL );

	pFnGetPerObjectConfigSections->FunctionFlags |= 0x400;
};

// Function Core.Object.ImportJSON
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ImportJSON ( )
{
	static UFunction* pFnImportJSON = NULL;

	if ( ! pFnImportJSON )
		pFnImportJSON = (UFunction*) UObject::GObjObjects()->Data[ 3763 ];

	UObject_execImportJSON_Parms ImportJSON_Parms;

	pFnImportJSON->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnImportJSON, &ImportJSON_Parms, NULL );

	pFnImportJSON->FunctionFlags |= 0x400;
};

// Function Core.Object.StaticSaveConfig
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::StaticSaveConfig ( )
{
	static UFunction* pFnStaticSaveConfig = NULL;

	if ( ! pFnStaticSaveConfig )
		pFnStaticSaveConfig = (UFunction*) UObject::GObjObjects()->Data[ 3770 ];

	UObject_execStaticSaveConfig_Parms StaticSaveConfig_Parms;

	pFnStaticSaveConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStaticSaveConfig, &StaticSaveConfig_Parms, NULL );

	pFnStaticSaveConfig->FunctionFlags |= 0x400;
};

// Function Core.Object.SaveConfig
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0218]
// Parameters infos:

void UObject::SaveConfig ( )
{
	static UFunction* pFnSaveConfig = NULL;

	if ( ! pFnSaveConfig )
		pFnSaveConfig = (UFunction*) UObject::GObjObjects()->Data[ 3773 ];

	UObject_execSaveConfig_Parms SaveConfig_Parms;

	unsigned short NativeIndex = pFnSaveConfig->iNative;
	pFnSaveConfig->iNative = 0;

	pFnSaveConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveConfig, &SaveConfig_Parms, NULL );

	pFnSaveConfig->FunctionFlags |= 0x400;

	pFnSaveConfig->iNative = NativeIndex;
};

// Function Core.Object.FindObject
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::FindObject ( )
{
	static UFunction* pFnFindObject = NULL;

	if ( ! pFnFindObject )
		pFnFindObject = (UFunction*) UObject::GObjObjects()->Data[ 3774 ];

	UObject_execFindObject_Parms FindObject_Parms;

	pFnFindObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindObject, &FindObject_Parms, NULL );

	pFnFindObject->FunctionFlags |= 0x400;
};

// Function Core.Object.DynamicLoadObject
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::DynamicLoadObject ( )
{
	static UFunction* pFnDynamicLoadObject = NULL;

	if ( ! pFnDynamicLoadObject )
		pFnDynamicLoadObject = (UFunction*) UObject::GObjObjects()->Data[ 3775 ];

	UObject_execDynamicLoadObject_Parms DynamicLoadObject_Parms;

	pFnDynamicLoadObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDynamicLoadObject, &DynamicLoadObject_Parms, NULL );

	pFnDynamicLoadObject->FunctionFlags |= 0x400;
};

// Function Core.Object.GetEnum
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetEnum ( )
{
	static UFunction* pFnGetEnum = NULL;

	if ( ! pFnGetEnum )
		pFnGetEnum = (UFunction*) UObject::GObjObjects()->Data[ 3779 ];

	UObject_execGetEnum_Parms GetEnum_Parms;

	pFnGetEnum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEnum, &GetEnum_Parms, NULL );

	pFnGetEnum->FunctionFlags |= 0x400;
};

// Function Core.Object.Disable
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0076]
// Parameters infos:

void UObject::Disable ( )
{
	static UFunction* pFnDisable = NULL;

	if ( ! pFnDisable )
		pFnDisable = (UFunction*) UObject::GObjObjects()->Data[ 3784 ];

	UObject_execDisable_Parms Disable_Parms;

	unsigned short NativeIndex = pFnDisable->iNative;
	pFnDisable->iNative = 0;

	pFnDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisable, &Disable_Parms, NULL );

	pFnDisable->FunctionFlags |= 0x400;

	pFnDisable->iNative = NativeIndex;
};

// Function Core.Object.Enable
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0075]
// Parameters infos:

void UObject::Enable ( )
{
	static UFunction* pFnEnable = NULL;

	if ( ! pFnEnable )
		pFnEnable = (UFunction*) UObject::GObjObjects()->Data[ 3788 ];

	UObject_execEnable_Parms Enable_Parms;

	unsigned short NativeIndex = pFnEnable->iNative;
	pFnEnable->iNative = 0;

	pFnEnable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnable, &Enable_Parms, NULL );

	pFnEnable->FunctionFlags |= 0x400;

	pFnEnable->iNative = NativeIndex;
};

// Function Core.Object.ContinuedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventContinuedState ( )
{
	static UFunction* pFnContinuedState = NULL;

	if ( ! pFnContinuedState )
		pFnContinuedState = (UFunction*) UObject::GObjObjects()->Data[ 3790 ];

	UObject_eventContinuedState_Parms ContinuedState_Parms;

	this->ProcessEvent ( pFnContinuedState, &ContinuedState_Parms, NULL );
};

// Function Core.Object.PausedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPausedState ( )
{
	static UFunction* pFnPausedState = NULL;

	if ( ! pFnPausedState )
		pFnPausedState = (UFunction*) UObject::GObjObjects()->Data[ 3792 ];

	UObject_eventPausedState_Parms PausedState_Parms;

	this->ProcessEvent ( pFnPausedState, &PausedState_Parms, NULL );
};

// Function Core.Object.PoppedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPoppedState ( )
{
	static UFunction* pFnPoppedState = NULL;

	if ( ! pFnPoppedState )
		pFnPoppedState = (UFunction*) UObject::GObjObjects()->Data[ 3793 ];

	UObject_eventPoppedState_Parms PoppedState_Parms;

	this->ProcessEvent ( pFnPoppedState, &PoppedState_Parms, NULL );
};

// Function Core.Object.PushedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPushedState ( )
{
	static UFunction* pFnPushedState = NULL;

	if ( ! pFnPushedState )
		pFnPushedState = (UFunction*) UObject::GObjObjects()->Data[ 3794 ];

	UObject_eventPushedState_Parms PushedState_Parms;

	this->ProcessEvent ( pFnPushedState, &PushedState_Parms, NULL );
};

// Function Core.Object.EndState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventEndState ( )
{
	static UFunction* pFnEndState = NULL;

	if ( ! pFnEndState )
		pFnEndState = (UFunction*) UObject::GObjObjects()->Data[ 3795 ];

	UObject_eventEndState_Parms EndState_Parms;

	this->ProcessEvent ( pFnEndState, &EndState_Parms, NULL );
};

// Function Core.Object.BeginState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventBeginState ( )
{
	static UFunction* pFnBeginState = NULL;

	if ( ! pFnBeginState )
		pFnBeginState = (UFunction*) UObject::GObjObjects()->Data[ 3796 ];

	UObject_eventBeginState_Parms BeginState_Parms;

	this->ProcessEvent ( pFnBeginState, &BeginState_Parms, NULL );
};

// Function Core.Object.DumpStateStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::DumpStateStack ( )
{
	static UFunction* pFnDumpStateStack = NULL;

	if ( ! pFnDumpStateStack )
		pFnDumpStateStack = (UFunction*) UObject::GObjObjects()->Data[ 3798 ];

	UObject_execDumpStateStack_Parms DumpStateStack_Parms;

	pFnDumpStateStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDumpStateStack, &DumpStateStack_Parms, NULL );

	pFnDumpStateStack->FunctionFlags |= 0x400;
};

// Function Core.Object.PopState
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::PopState ( )
{
	static UFunction* pFnPopState = NULL;

	if ( ! pFnPopState )
		pFnPopState = (UFunction*) UObject::GObjObjects()->Data[ 3800 ];

	UObject_execPopState_Parms PopState_Parms;

	pFnPopState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopState, &PopState_Parms, NULL );

	pFnPopState->FunctionFlags |= 0x400;
};

// Function Core.Object.PushState
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::PushState ( )
{
	static UFunction* pFnPushState = NULL;

	if ( ! pFnPushState )
		pFnPushState = (UFunction*) UObject::GObjObjects()->Data[ 3801 ];

	UObject_execPushState_Parms PushState_Parms;

	pFnPushState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushState, &PushState_Parms, NULL );

	pFnPushState->FunctionFlags |= 0x400;
};

// Function Core.Object.GetStateName
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x011C]
// Parameters infos:

void UObject::GetStateName ( )
{
	static UFunction* pFnGetStateName = NULL;

	if ( ! pFnGetStateName )
		pFnGetStateName = (UFunction*) UObject::GObjObjects()->Data[ 3803 ];

	UObject_execGetStateName_Parms GetStateName_Parms;

	unsigned short NativeIndex = pFnGetStateName->iNative;
	pFnGetStateName->iNative = 0;

	pFnGetStateName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStateName, &GetStateName_Parms, NULL );

	pFnGetStateName->FunctionFlags |= 0x400;

	pFnGetStateName->iNative = NativeIndex;
};

// Function Core.Object.IsChildState
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::IsChildState ( )
{
	static UFunction* pFnIsChildState = NULL;

	if ( ! pFnIsChildState )
		pFnIsChildState = (UFunction*) UObject::GObjObjects()->Data[ 3806 ];

	UObject_execIsChildState_Parms IsChildState_Parms;

	pFnIsChildState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsChildState, &IsChildState_Parms, NULL );

	pFnIsChildState->FunctionFlags |= 0x400;
};

// Function Core.Object.IsInState
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0119]
// Parameters infos:

void UObject::IsInState ( )
{
	static UFunction* pFnIsInState = NULL;

	if ( ! pFnIsInState )
		pFnIsInState = (UFunction*) UObject::GObjObjects()->Data[ 3808 ];

	UObject_execIsInState_Parms IsInState_Parms;

	unsigned short NativeIndex = pFnIsInState->iNative;
	pFnIsInState->iNative = 0;

	pFnIsInState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInState, &IsInState_Parms, NULL );

	pFnIsInState->FunctionFlags |= 0x400;

	pFnIsInState->iNative = NativeIndex;
};

// Function Core.Object.GotoState
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0071]
// Parameters infos:

void UObject::GotoState ( )
{
	static UFunction* pFnGotoState = NULL;

	if ( ! pFnGotoState )
		pFnGotoState = (UFunction*) UObject::GObjObjects()->Data[ 3812 ];

	UObject_execGotoState_Parms GotoState_Parms;

	unsigned short NativeIndex = pFnGotoState->iNative;
	pFnGotoState->iNative = 0;

	pFnGotoState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoState, &GotoState_Parms, NULL );

	pFnGotoState->FunctionFlags |= 0x400;

	pFnGotoState->iNative = NativeIndex;
};

// Function Core.Object.IsUTracing
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::IsUTracing ( )
{
	static UFunction* pFnIsUTracing = NULL;

	if ( ! pFnIsUTracing )
		pFnIsUTracing = (UFunction*) UObject::GObjObjects()->Data[ 3816 ];

	UObject_execIsUTracing_Parms IsUTracing_Parms;

	pFnIsUTracing->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsUTracing, &IsUTracing_Parms, NULL );

	pFnIsUTracing->FunctionFlags |= 0x400;
};

// Function Core.Object.SetUTracing
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::SetUTracing ( )
{
	static UFunction* pFnSetUTracing = NULL;

	if ( ! pFnSetUTracing )
		pFnSetUTracing = (UFunction*) UObject::GObjObjects()->Data[ 3821 ];

	UObject_execSetUTracing_Parms SetUTracing_Parms;

	pFnSetUTracing->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetUTracing, &SetUTracing_Parms, NULL );

	pFnSetUTracing->FunctionFlags |= 0x400;
};

// Function Core.Object.GetFuncName
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetFuncName ( )
{
	static UFunction* pFnGetFuncName = NULL;

	if ( ! pFnGetFuncName )
		pFnGetFuncName = (UFunction*) UObject::GObjObjects()->Data[ 3823 ];

	UObject_execGetFuncName_Parms GetFuncName_Parms;

	pFnGetFuncName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFuncName, &GetFuncName_Parms, NULL );

	pFnGetFuncName->FunctionFlags |= 0x400;
};

// Function Core.Object.DebugBreak
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::DebugBreak ( )
{
	static UFunction* pFnDebugBreak = NULL;

	if ( ! pFnDebugBreak )
		pFnDebugBreak = (UFunction*) UObject::GObjObjects()->Data[ 3825 ];

	UObject_execDebugBreak_Parms DebugBreak_Parms;

	pFnDebugBreak->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDebugBreak, &DebugBreak_Parms, NULL );

	pFnDebugBreak->FunctionFlags |= 0x400;
};

// Function Core.Object.GetScriptTrace
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetScriptTrace ( )
{
	static UFunction* pFnGetScriptTrace = NULL;

	if ( ! pFnGetScriptTrace )
		pFnGetScriptTrace = (UFunction*) UObject::GObjObjects()->Data[ 3827 ];

	UObject_execGetScriptTrace_Parms GetScriptTrace_Parms;

	pFnGetScriptTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetScriptTrace, &GetScriptTrace_Parms, NULL );

	pFnGetScriptTrace->FunctionFlags |= 0x400;
};

// Function Core.Object.ScriptTrace
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ScriptTrace ( )
{
	static UFunction* pFnScriptTrace = NULL;

	if ( ! pFnScriptTrace )
		pFnScriptTrace = (UFunction*) UObject::GObjObjects()->Data[ 3832 ];

	UObject_execScriptTrace_Parms ScriptTrace_Parms;

	pFnScriptTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnScriptTrace, &ScriptTrace_Parms, NULL );

	pFnScriptTrace->FunctionFlags |= 0x400;
};

// Function Core.Object.ParseLocalizedPropertyPath
// [0x00022003] ( FUNC_Final )
// Parameters infos:

void UObject::ParseLocalizedPropertyPath ( )
{
	static UFunction* pFnParseLocalizedPropertyPath = NULL;

	if ( ! pFnParseLocalizedPropertyPath )
		pFnParseLocalizedPropertyPath = (UFunction*) UObject::GObjObjects()->Data[ 3834 ];

	UObject_execParseLocalizedPropertyPath_Parms ParseLocalizedPropertyPath_Parms;

	this->ProcessEvent ( pFnParseLocalizedPropertyPath, &ParseLocalizedPropertyPath_Parms, NULL );
};

// Function Core.Object.Localize
// [0x00022400] ( FUNC_Native )
// Parameters infos:

void UObject::Localize ( )
{
	static UFunction* pFnLocalize = NULL;

	if ( ! pFnLocalize )
		pFnLocalize = (UFunction*) UObject::GObjObjects()->Data[ 3835 ];

	UObject_execLocalize_Parms Localize_Parms;

	pFnLocalize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLocalize, &Localize_Parms, NULL );

	pFnLocalize->FunctionFlags |= 0x400;
};

// Function Core.Object.WarnInternal
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E8]
// Parameters infos:

void UObject::WarnInternal ( )
{
	static UFunction* pFnWarnInternal = NULL;

	if ( ! pFnWarnInternal )
		pFnWarnInternal = (UFunction*) UObject::GObjObjects()->Data[ 3841 ];

	UObject_execWarnInternal_Parms WarnInternal_Parms;

	unsigned short NativeIndex = pFnWarnInternal->iNative;
	pFnWarnInternal->iNative = 0;

	pFnWarnInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWarnInternal, &WarnInternal_Parms, NULL );

	pFnWarnInternal->FunctionFlags |= 0x400;

	pFnWarnInternal->iNative = NativeIndex;
};

// Function Core.Object.LogInternal
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x00E7]
// Parameters infos:

void UObject::LogInternal ( )
{
	static UFunction* pFnLogInternal = NULL;

	if ( ! pFnLogInternal )
		pFnLogInternal = (UFunction*) UObject::GObjObjects()->Data[ 3846 ];

	UObject_execLogInternal_Parms LogInternal_Parms;

	unsigned short NativeIndex = pFnLogInternal->iNative;
	pFnLogInternal->iNative = 0;

	pFnLogInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogInternal, &LogInternal_Parms, NULL );

	pFnLogInternal->FunctionFlags |= 0x400;

	pFnLogInternal->iNative = NativeIndex;
};

// Function Core.Object.Subtract_LinearColorLinearColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:

void UObject::Subtract_LinearColorLinearColor ( )
{
	static UFunction* pFnSubtract_LinearColorLinearColor = NULL;

	if ( ! pFnSubtract_LinearColorLinearColor )
		pFnSubtract_LinearColorLinearColor = (UFunction*) UObject::GObjObjects()->Data[ 3848 ];

	UObject_execSubtract_LinearColorLinearColor_Parms Subtract_LinearColorLinearColor_Parms;

	this->ProcessEvent ( pFnSubtract_LinearColorLinearColor, &Subtract_LinearColorLinearColor_Parms, NULL );
};

// Function Core.Object.Multiply_LinearColorFloat
// [0x00023003] ( FUNC_Final )
// Parameters infos:

void UObject::Multiply_LinearColorFloat ( )
{
	static UFunction* pFnMultiply_LinearColorFloat = NULL;

	if ( ! pFnMultiply_LinearColorFloat )
		pFnMultiply_LinearColorFloat = (UFunction*) UObject::GObjObjects()->Data[ 3851 ];

	UObject_execMultiply_LinearColorFloat_Parms Multiply_LinearColorFloat_Parms;

	this->ProcessEvent ( pFnMultiply_LinearColorFloat, &Multiply_LinearColorFloat_Parms, NULL );
};

// Function Core.Object.ColorToLinearColor
// [0x00022003] ( FUNC_Final )
// Parameters infos:

void UObject::ColorToLinearColor ( )
{
	static UFunction* pFnColorToLinearColor = NULL;

	if ( ! pFnColorToLinearColor )
		pFnColorToLinearColor = (UFunction*) UObject::GObjObjects()->Data[ 3861 ];

	UObject_execColorToLinearColor_Parms ColorToLinearColor_Parms;

	this->ProcessEvent ( pFnColorToLinearColor, &ColorToLinearColor_Parms, NULL );
};

// Function Core.Object.MakeLinearColor
// [0x00822003] ( FUNC_Final )
// Parameters infos:

void UObject::MakeLinearColor ( )
{
	static UFunction* pFnMakeLinearColor = NULL;

	if ( ! pFnMakeLinearColor )
		pFnMakeLinearColor = (UFunction*) UObject::GObjObjects()->Data[ 3865 ];

	UObject_execMakeLinearColor_Parms MakeLinearColor_Parms;

	this->ProcessEvent ( pFnMakeLinearColor, &MakeLinearColor_Parms, NULL );
};

// Function Core.Object.LerpColor
// [0x00822003] ( FUNC_Final )
// Parameters infos:

void UObject::LerpColor ( )
{
	static UFunction* pFnLerpColor = NULL;

	if ( ! pFnLerpColor )
		pFnLerpColor = (UFunction*) UObject::GObjObjects()->Data[ 3873 ];

	UObject_execLerpColor_Parms LerpColor_Parms;

	this->ProcessEvent ( pFnLerpColor, &LerpColor_Parms, NULL );
};

// Function Core.Object.MakeColor
// [0x00826003] ( FUNC_Final )
// Parameters infos:

void UObject::MakeColor ( )
{
	static UFunction* pFnMakeColor = NULL;

	if ( ! pFnMakeColor )
		pFnMakeColor = (UFunction*) UObject::GObjObjects()->Data[ 3880 ];

	UObject_execMakeColor_Parms MakeColor_Parms;

	this->ProcessEvent ( pFnMakeColor, &MakeColor_Parms, NULL );
};

// Function Core.Object.Add_ColorColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:

void UObject::Add_ColorColor ( )
{
	static UFunction* pFnAdd_ColorColor = NULL;

	if ( ! pFnAdd_ColorColor )
		pFnAdd_ColorColor = (UFunction*) UObject::GObjObjects()->Data[ 3892 ];

	UObject_execAdd_ColorColor_Parms Add_ColorColor_Parms;

	this->ProcessEvent ( pFnAdd_ColorColor, &Add_ColorColor_Parms, NULL );
};

// Function Core.Object.Multiply_ColorFloat
// [0x00023003] ( FUNC_Final )
// Parameters infos:

void UObject::Multiply_ColorFloat ( )
{
	static UFunction* pFnMultiply_ColorFloat = NULL;

	if ( ! pFnMultiply_ColorFloat )
		pFnMultiply_ColorFloat = (UFunction*) UObject::GObjObjects()->Data[ 3899 ];

	UObject_execMultiply_ColorFloat_Parms Multiply_ColorFloat_Parms;

	this->ProcessEvent ( pFnMultiply_ColorFloat, &Multiply_ColorFloat_Parms, NULL );
};

// Function Core.Object.Multiply_FloatColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:

void UObject::Multiply_FloatColor ( )
{
	static UFunction* pFnMultiply_FloatColor = NULL;

	if ( ! pFnMultiply_FloatColor )
		pFnMultiply_FloatColor = (UFunction*) UObject::GObjObjects()->Data[ 3903 ];

	UObject_execMultiply_FloatColor_Parms Multiply_FloatColor_Parms;

	this->ProcessEvent ( pFnMultiply_FloatColor, &Multiply_FloatColor_Parms, NULL );
};

// Function Core.Object.Subtract_ColorColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:

void UObject::Subtract_ColorColor ( )
{
	static UFunction* pFnSubtract_ColorColor = NULL;

	if ( ! pFnSubtract_ColorColor )
		pFnSubtract_ColorColor = (UFunction*) UObject::GObjObjects()->Data[ 3907 ];

	UObject_execSubtract_ColorColor_Parms Subtract_ColorColor_Parms;

	this->ProcessEvent ( pFnSubtract_ColorColor, &Subtract_ColorColor_Parms, NULL );
};

// Function Core.Object.EvalInterpCurveVector2D
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::EvalInterpCurveVector2D ( )
{
	static UFunction* pFnEvalInterpCurveVector2D = NULL;

	if ( ! pFnEvalInterpCurveVector2D )
		pFnEvalInterpCurveVector2D = (UFunction*) UObject::GObjObjects()->Data[ 3911 ];

	UObject_execEvalInterpCurveVector2D_Parms EvalInterpCurveVector2D_Parms;

	pFnEvalInterpCurveVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEvalInterpCurveVector2D, &EvalInterpCurveVector2D_Parms, NULL );

	pFnEvalInterpCurveVector2D->FunctionFlags |= 0x400;
};

// Function Core.Object.EvalInterpCurveVector
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::EvalInterpCurveVector ( )
{
	static UFunction* pFnEvalInterpCurveVector = NULL;

	if ( ! pFnEvalInterpCurveVector )
		pFnEvalInterpCurveVector = (UFunction*) UObject::GObjObjects()->Data[ 3915 ];

	UObject_execEvalInterpCurveVector_Parms EvalInterpCurveVector_Parms;

	pFnEvalInterpCurveVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEvalInterpCurveVector, &EvalInterpCurveVector_Parms, NULL );

	pFnEvalInterpCurveVector->FunctionFlags |= 0x400;
};

// Function Core.Object.EvalInterpCurveFloat
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::EvalInterpCurveFloat ( )
{
	static UFunction* pFnEvalInterpCurveFloat = NULL;

	if ( ! pFnEvalInterpCurveFloat )
		pFnEvalInterpCurveFloat = (UFunction*) UObject::GObjObjects()->Data[ 3933 ];

	UObject_execEvalInterpCurveFloat_Parms EvalInterpCurveFloat_Parms;

	pFnEvalInterpCurveFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEvalInterpCurveFloat, &EvalInterpCurveFloat_Parms, NULL );

	pFnEvalInterpCurveFloat->FunctionFlags |= 0x400;
};

// Function Core.Object.vect2d
// [0x00822003] ( FUNC_Final )
// Parameters infos:

void UObject::vect2d ( )
{
	static UFunction* pFnvect2d = NULL;

	if ( ! pFnvect2d )
		pFnvect2d = (UFunction*) UObject::GObjObjects()->Data[ 3947 ];

	UObject_execvect2d_Parms vect2d_Parms;

	this->ProcessEvent ( pFnvect2d, &vect2d_Parms, NULL );
};

// Function Core.Object.GetMappedRangeValue
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetMappedRangeValue ( )
{
	static UFunction* pFnGetMappedRangeValue = NULL;

	if ( ! pFnGetMappedRangeValue )
		pFnGetMappedRangeValue = (UFunction*) UObject::GObjObjects()->Data[ 3960 ];

	UObject_execGetMappedRangeValue_Parms GetMappedRangeValue_Parms;

	pFnGetMappedRangeValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMappedRangeValue, &GetMappedRangeValue_Parms, NULL );

	pFnGetMappedRangeValue->FunctionFlags |= 0x400;
};

// Function Core.Object.GetRangePctByValue
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::GetRangePctByValue ( )
{
	static UFunction* pFnGetRangePctByValue = NULL;

	if ( ! pFnGetRangePctByValue )
		pFnGetRangePctByValue = (UFunction*) UObject::GObjObjects()->Data[ 3965 ];

	UObject_execGetRangePctByValue_Parms GetRangePctByValue_Parms;

	this->ProcessEvent ( pFnGetRangePctByValue, &GetRangePctByValue_Parms, NULL );
};

// Function Core.Object.GetRangeValueByPct
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::GetRangeValueByPct ( )
{
	static UFunction* pFnGetRangeValueByPct = NULL;

	if ( ! pFnGetRangeValueByPct )
		pFnGetRangeValueByPct = (UFunction*) UObject::GObjObjects()->Data[ 3970 ];

	UObject_execGetRangeValueByPct_Parms GetRangeValueByPct_Parms;

	this->ProcessEvent ( pFnGetRangeValueByPct, &GetRangeValueByPct_Parms, NULL );
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::SubtractEqual_Vector2DVector2D ( )
{
	static UFunction* pFnSubtractEqual_Vector2DVector2D = NULL;

	if ( ! pFnSubtractEqual_Vector2DVector2D )
		pFnSubtractEqual_Vector2DVector2D = (UFunction*) UObject::GObjObjects()->Data[ 3974 ];

	UObject_execSubtractEqual_Vector2DVector2D_Parms SubtractEqual_Vector2DVector2D_Parms;

	pFnSubtractEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractEqual_Vector2DVector2D, &SubtractEqual_Vector2DVector2D_Parms, NULL );

	pFnSubtractEqual_Vector2DVector2D->FunctionFlags |= 0x400;
};

// Function Core.Object.AddEqual_Vector2DVector2D
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::AddEqual_Vector2DVector2D ( )
{
	static UFunction* pFnAddEqual_Vector2DVector2D = NULL;

	if ( ! pFnAddEqual_Vector2DVector2D )
		pFnAddEqual_Vector2DVector2D = (UFunction*) UObject::GObjObjects()->Data[ 3978 ];

	UObject_execAddEqual_Vector2DVector2D_Parms AddEqual_Vector2DVector2D_Parms;

	pFnAddEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddEqual_Vector2DVector2D, &AddEqual_Vector2DVector2D_Parms, NULL );

	pFnAddEqual_Vector2DVector2D->FunctionFlags |= 0x400;
};

// Function Core.Object.DivideEqual_Vector2DFloat
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::DivideEqual_Vector2DFloat ( )
{
	static UFunction* pFnDivideEqual_Vector2DFloat = NULL;

	if ( ! pFnDivideEqual_Vector2DFloat )
		pFnDivideEqual_Vector2DFloat = (UFunction*) UObject::GObjObjects()->Data[ 3982 ];

	UObject_execDivideEqual_Vector2DFloat_Parms DivideEqual_Vector2DFloat_Parms;

	pFnDivideEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivideEqual_Vector2DFloat, &DivideEqual_Vector2DFloat_Parms, NULL );

	pFnDivideEqual_Vector2DFloat->FunctionFlags |= 0x400;
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::MultiplyEqual_Vector2DFloat ( )
{
	static UFunction* pFnMultiplyEqual_Vector2DFloat = NULL;

	if ( ! pFnMultiplyEqual_Vector2DFloat )
		pFnMultiplyEqual_Vector2DFloat = (UFunction*) UObject::GObjObjects()->Data[ 3986 ];

	UObject_execMultiplyEqual_Vector2DFloat_Parms MultiplyEqual_Vector2DFloat_Parms;

	pFnMultiplyEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_Vector2DFloat, &MultiplyEqual_Vector2DFloat_Parms, NULL );

	pFnMultiplyEqual_Vector2DFloat->FunctionFlags |= 0x400;
};

// Function Core.Object.Divide_Vector2DFloat
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Divide_Vector2DFloat ( )
{
	static UFunction* pFnDivide_Vector2DFloat = NULL;

	if ( ! pFnDivide_Vector2DFloat )
		pFnDivide_Vector2DFloat = (UFunction*) UObject::GObjObjects()->Data[ 3990 ];

	UObject_execDivide_Vector2DFloat_Parms Divide_Vector2DFloat_Parms;

	pFnDivide_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivide_Vector2DFloat, &Divide_Vector2DFloat_Parms, NULL );

	pFnDivide_Vector2DFloat->FunctionFlags |= 0x400;
};

// Function Core.Object.Multiply_Vector2DFloat
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Multiply_Vector2DFloat ( )
{
	static UFunction* pFnMultiply_Vector2DFloat = NULL;

	if ( ! pFnMultiply_Vector2DFloat )
		pFnMultiply_Vector2DFloat = (UFunction*) UObject::GObjObjects()->Data[ 3994 ];

	UObject_execMultiply_Vector2DFloat_Parms Multiply_Vector2DFloat_Parms;

	pFnMultiply_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_Vector2DFloat, &Multiply_Vector2DFloat_Parms, NULL );

	pFnMultiply_Vector2DFloat->FunctionFlags |= 0x400;
};

// Function Core.Object.Subtract_Vector2DVector2D
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Subtract_Vector2DVector2D ( )
{
	static UFunction* pFnSubtract_Vector2DVector2D = NULL;

	if ( ! pFnSubtract_Vector2DVector2D )
		pFnSubtract_Vector2DVector2D = (UFunction*) UObject::GObjObjects()->Data[ 3998 ];

	UObject_execSubtract_Vector2DVector2D_Parms Subtract_Vector2DVector2D_Parms;

	pFnSubtract_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_Vector2DVector2D, &Subtract_Vector2DVector2D_Parms, NULL );

	pFnSubtract_Vector2DVector2D->FunctionFlags |= 0x400;
};

// Function Core.Object.Add_Vector2DVector2D
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Add_Vector2DVector2D ( )
{
	static UFunction* pFnAdd_Vector2DVector2D = NULL;

	if ( ! pFnAdd_Vector2DVector2D )
		pFnAdd_Vector2DVector2D = (UFunction*) UObject::GObjObjects()->Data[ 4002 ];

	UObject_execAdd_Vector2DVector2D_Parms Add_Vector2DVector2D_Parms;

	pFnAdd_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdd_Vector2DVector2D, &Add_Vector2DVector2D_Parms, NULL );

	pFnAdd_Vector2DVector2D->FunctionFlags |= 0x400;
};

// Function Core.Object.Subtract_QuatQuat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x010F]
// Parameters infos:

void UObject::Subtract_QuatQuat ( )
{
	static UFunction* pFnSubtract_QuatQuat = NULL;

	if ( ! pFnSubtract_QuatQuat )
		pFnSubtract_QuatQuat = (UFunction*) UObject::GObjObjects()->Data[ 4006 ];

	UObject_execSubtract_QuatQuat_Parms Subtract_QuatQuat_Parms;

	unsigned short NativeIndex = pFnSubtract_QuatQuat->iNative;
	pFnSubtract_QuatQuat->iNative = 0;

	pFnSubtract_QuatQuat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_QuatQuat, &Subtract_QuatQuat_Parms, NULL );

	pFnSubtract_QuatQuat->FunctionFlags |= 0x400;

	pFnSubtract_QuatQuat->iNative = NativeIndex;
};

// Function Core.Object.Add_QuatQuat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x010E]
// Parameters infos:

void UObject::Add_QuatQuat ( )
{
	static UFunction* pFnAdd_QuatQuat = NULL;

	if ( ! pFnAdd_QuatQuat )
		pFnAdd_QuatQuat = (UFunction*) UObject::GObjObjects()->Data[ 4010 ];

	UObject_execAdd_QuatQuat_Parms Add_QuatQuat_Parms;

	unsigned short NativeIndex = pFnAdd_QuatQuat->iNative;
	pFnAdd_QuatQuat->iNative = 0;

	pFnAdd_QuatQuat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdd_QuatQuat, &Add_QuatQuat_Parms, NULL );

	pFnAdd_QuatQuat->FunctionFlags |= 0x400;

	pFnAdd_QuatQuat->iNative = NativeIndex;
};

// Function Core.Object.QuatSlerp
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatSlerp ( )
{
	static UFunction* pFnQuatSlerp = NULL;

	if ( ! pFnQuatSlerp )
		pFnQuatSlerp = (UFunction*) UObject::GObjObjects()->Data[ 4019 ];

	UObject_execQuatSlerp_Parms QuatSlerp_Parms;

	pFnQuatSlerp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatSlerp, &QuatSlerp_Parms, NULL );

	pFnQuatSlerp->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatToRotator
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatToRotator ( )
{
	static UFunction* pFnQuatToRotator = NULL;

	if ( ! pFnQuatToRotator )
		pFnQuatToRotator = (UFunction*) UObject::GObjObjects()->Data[ 4023 ];

	UObject_execQuatToRotator_Parms QuatToRotator_Parms;

	pFnQuatToRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatToRotator, &QuatToRotator_Parms, NULL );

	pFnQuatToRotator->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatFromRotator
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatFromRotator ( )
{
	static UFunction* pFnQuatFromRotator = NULL;

	if ( ! pFnQuatFromRotator )
		pFnQuatFromRotator = (UFunction*) UObject::GObjObjects()->Data[ 4029 ];

	UObject_execQuatFromRotator_Parms QuatFromRotator_Parms;

	pFnQuatFromRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatFromRotator, &QuatFromRotator_Parms, NULL );

	pFnQuatFromRotator->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatFromAxisAndAngle
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatFromAxisAndAngle ( )
{
	static UFunction* pFnQuatFromAxisAndAngle = NULL;

	if ( ! pFnQuatFromAxisAndAngle )
		pFnQuatFromAxisAndAngle = (UFunction*) UObject::GObjObjects()->Data[ 4032 ];

	UObject_execQuatFromAxisAndAngle_Parms QuatFromAxisAndAngle_Parms;

	pFnQuatFromAxisAndAngle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatFromAxisAndAngle, &QuatFromAxisAndAngle_Parms, NULL );

	pFnQuatFromAxisAndAngle->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatFindBetween
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatFindBetween ( )
{
	static UFunction* pFnQuatFindBetween = NULL;

	if ( ! pFnQuatFindBetween )
		pFnQuatFindBetween = (UFunction*) UObject::GObjObjects()->Data[ 4035 ];

	UObject_execQuatFindBetween_Parms QuatFindBetween_Parms;

	pFnQuatFindBetween->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatFindBetween, &QuatFindBetween_Parms, NULL );

	pFnQuatFindBetween->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatRotateVector
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatRotateVector ( )
{
	static UFunction* pFnQuatRotateVector = NULL;

	if ( ! pFnQuatRotateVector )
		pFnQuatRotateVector = (UFunction*) UObject::GObjObjects()->Data[ 4039 ];

	UObject_execQuatRotateVector_Parms QuatRotateVector_Parms;

	pFnQuatRotateVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatRotateVector, &QuatRotateVector_Parms, NULL );

	pFnQuatRotateVector->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatInvert
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatInvert ( )
{
	static UFunction* pFnQuatInvert = NULL;

	if ( ! pFnQuatInvert )
		pFnQuatInvert = (UFunction*) UObject::GObjObjects()->Data[ 4043 ];

	UObject_execQuatInvert_Parms QuatInvert_Parms;

	pFnQuatInvert->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatInvert, &QuatInvert_Parms, NULL );

	pFnQuatInvert->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatDot
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatDot ( )
{
	static UFunction* pFnQuatDot = NULL;

	if ( ! pFnQuatDot )
		pFnQuatDot = (UFunction*) UObject::GObjObjects()->Data[ 4047 ];

	UObject_execQuatDot_Parms QuatDot_Parms;

	pFnQuatDot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatDot, &QuatDot_Parms, NULL );

	pFnQuatDot->FunctionFlags |= 0x400;
};

// Function Core.Object.QuatProduct
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::QuatProduct ( )
{
	static UFunction* pFnQuatProduct = NULL;

	if ( ! pFnQuatProduct )
		pFnQuatProduct = (UFunction*) UObject::GObjObjects()->Data[ 4050 ];

	UObject_execQuatProduct_Parms QuatProduct_Parms;

	pFnQuatProduct->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuatProduct, &QuatProduct_Parms, NULL );

	pFnQuatProduct->FunctionFlags |= 0x400;
};

// Function Core.Object.MatrixGetAxis
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::MatrixGetAxis ( )
{
	static UFunction* pFnMatrixGetAxis = NULL;

	if ( ! pFnMatrixGetAxis )
		pFnMatrixGetAxis = (UFunction*) UObject::GObjObjects()->Data[ 4054 ];

	UObject_execMatrixGetAxis_Parms MatrixGetAxis_Parms;

	pFnMatrixGetAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMatrixGetAxis, &MatrixGetAxis_Parms, NULL );

	pFnMatrixGetAxis->FunctionFlags |= 0x400;
};

// Function Core.Object.MatrixGetOrigin
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::MatrixGetOrigin ( )
{
	static UFunction* pFnMatrixGetOrigin = NULL;

	if ( ! pFnMatrixGetOrigin )
		pFnMatrixGetOrigin = (UFunction*) UObject::GObjObjects()->Data[ 4058 ];

	UObject_execMatrixGetOrigin_Parms MatrixGetOrigin_Parms;

	pFnMatrixGetOrigin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMatrixGetOrigin, &MatrixGetOrigin_Parms, NULL );

	pFnMatrixGetOrigin->FunctionFlags |= 0x400;
};

// Function Core.Object.MatrixGetRotator
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::MatrixGetRotator ( )
{
	static UFunction* pFnMatrixGetRotator = NULL;

	if ( ! pFnMatrixGetRotator )
		pFnMatrixGetRotator = (UFunction*) UObject::GObjObjects()->Data[ 4072 ];

	UObject_execMatrixGetRotator_Parms MatrixGetRotator_Parms;

	pFnMatrixGetRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMatrixGetRotator, &MatrixGetRotator_Parms, NULL );

	pFnMatrixGetRotator->FunctionFlags |= 0x400;
};

// Function Core.Object.MakeRotationMatrix
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::MakeRotationMatrix ( )
{
	static UFunction* pFnMakeRotationMatrix = NULL;

	if ( ! pFnMakeRotationMatrix )
		pFnMakeRotationMatrix = (UFunction*) UObject::GObjObjects()->Data[ 4075 ];

	UObject_execMakeRotationMatrix_Parms MakeRotationMatrix_Parms;

	pFnMakeRotationMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeRotationMatrix, &MakeRotationMatrix_Parms, NULL );

	pFnMakeRotationMatrix->FunctionFlags |= 0x400;
};

// Function Core.Object.MakeRotationTranslationMatrix
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::MakeRotationTranslationMatrix ( )
{
	static UFunction* pFnMakeRotationTranslationMatrix = NULL;

	if ( ! pFnMakeRotationTranslationMatrix )
		pFnMakeRotationTranslationMatrix = (UFunction*) UObject::GObjObjects()->Data[ 4078 ];

	UObject_execMakeRotationTranslationMatrix_Parms MakeRotationTranslationMatrix_Parms;

	pFnMakeRotationTranslationMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMakeRotationTranslationMatrix, &MakeRotationTranslationMatrix_Parms, NULL );

	pFnMakeRotationTranslationMatrix->FunctionFlags |= 0x400;
};

// Function Core.Object.InverseTransformNormal
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::InverseTransformNormal ( )
{
	static UFunction* pFnInverseTransformNormal = NULL;

	if ( ! pFnInverseTransformNormal )
		pFnInverseTransformNormal = (UFunction*) UObject::GObjObjects()->Data[ 4081 ];

	UObject_execInverseTransformNormal_Parms InverseTransformNormal_Parms;

	pFnInverseTransformNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInverseTransformNormal, &InverseTransformNormal_Parms, NULL );

	pFnInverseTransformNormal->FunctionFlags |= 0x400;
};

// Function Core.Object.TransformNormal
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::TransformNormal ( )
{
	static UFunction* pFnTransformNormal = NULL;

	if ( ! pFnTransformNormal )
		pFnTransformNormal = (UFunction*) UObject::GObjObjects()->Data[ 4085 ];

	UObject_execTransformNormal_Parms TransformNormal_Parms;

	pFnTransformNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTransformNormal, &TransformNormal_Parms, NULL );

	pFnTransformNormal->FunctionFlags |= 0x400;
};

// Function Core.Object.InverseTransformVector
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::InverseTransformVector ( )
{
	static UFunction* pFnInverseTransformVector = NULL;

	if ( ! pFnInverseTransformVector )
		pFnInverseTransformVector = (UFunction*) UObject::GObjObjects()->Data[ 4089 ];

	UObject_execInverseTransformVector_Parms InverseTransformVector_Parms;

	pFnInverseTransformVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInverseTransformVector, &InverseTransformVector_Parms, NULL );

	pFnInverseTransformVector->FunctionFlags |= 0x400;
};

// Function Core.Object.TransformVector
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::TransformVector ( )
{
	static UFunction* pFnTransformVector = NULL;

	if ( ! pFnTransformVector )
		pFnTransformVector = (UFunction*) UObject::GObjObjects()->Data[ 4093 ];

	UObject_execTransformVector_Parms TransformVector_Parms;

	pFnTransformVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTransformVector, &TransformVector_Parms, NULL );

	pFnTransformVector->FunctionFlags |= 0x400;
};

// Function Core.Object.Multiply_MatrixMatrix
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Multiply_MatrixMatrix ( )
{
	static UFunction* pFnMultiply_MatrixMatrix = NULL;

	if ( ! pFnMultiply_MatrixMatrix )
		pFnMultiply_MatrixMatrix = (UFunction*) UObject::GObjObjects()->Data[ 4097 ];

	UObject_execMultiply_MatrixMatrix_Parms Multiply_MatrixMatrix_Parms;

	pFnMultiply_MatrixMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_MatrixMatrix, &Multiply_MatrixMatrix_Parms, NULL );

	pFnMultiply_MatrixMatrix->FunctionFlags |= 0x400;
};

// Function Core.Object.NotEqual_NameName
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00FF]
// Parameters infos:

void UObject::NotEqual_NameName ( )
{
	static UFunction* pFnNotEqual_NameName = NULL;

	if ( ! pFnNotEqual_NameName )
		pFnNotEqual_NameName = (UFunction*) UObject::GObjObjects()->Data[ 4101 ];

	UObject_execNotEqual_NameName_Parms NotEqual_NameName_Parms;

	unsigned short NativeIndex = pFnNotEqual_NameName->iNative;
	pFnNotEqual_NameName->iNative = 0;

	pFnNotEqual_NameName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_NameName, &NotEqual_NameName_Parms, NULL );

	pFnNotEqual_NameName->FunctionFlags |= 0x400;

	pFnNotEqual_NameName->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_NameName
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00FE]
// Parameters infos:

void UObject::EqualEqual_NameName ( )
{
	static UFunction* pFnEqualEqual_NameName = NULL;

	if ( ! pFnEqualEqual_NameName )
		pFnEqualEqual_NameName = (UFunction*) UObject::GObjObjects()->Data[ 4105 ];

	UObject_execEqualEqual_NameName_Parms EqualEqual_NameName_Parms;

	unsigned short NativeIndex = pFnEqualEqual_NameName->iNative;
	pFnEqualEqual_NameName->iNative = 0;

	pFnEqualEqual_NameName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_NameName, &EqualEqual_NameName_Parms, NULL );

	pFnEqualEqual_NameName->FunctionFlags |= 0x400;

	pFnEqualEqual_NameName->iNative = NativeIndex;
};

// Function Core.Object.IsA
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x00C5]
// Parameters infos:

void UObject::IsA ( )
{
	static UFunction* pFnIsA = NULL;

	if ( ! pFnIsA )
		pFnIsA = (UFunction*) UObject::GObjObjects()->Data[ 4109 ];

	UObject_execIsA_Parms IsA_Parms;

	unsigned short NativeIndex = pFnIsA->iNative;
	pFnIsA->iNative = 0;

	pFnIsA->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsA, &IsA_Parms, NULL );

	pFnIsA->FunctionFlags |= 0x400;

	pFnIsA->iNative = NativeIndex;
};

// Function Core.Object.ClassIsChildOf
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x0102]
// Parameters infos:

void UObject::ClassIsChildOf ( )
{
	static UFunction* pFnClassIsChildOf = NULL;

	if ( ! pFnClassIsChildOf )
		pFnClassIsChildOf = (UFunction*) UObject::GObjObjects()->Data[ 4113 ];

	UObject_execClassIsChildOf_Parms ClassIsChildOf_Parms;

	unsigned short NativeIndex = pFnClassIsChildOf->iNative;
	pFnClassIsChildOf->iNative = 0;

	pFnClassIsChildOf->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClassIsChildOf, &ClassIsChildOf_Parms, NULL );

	pFnClassIsChildOf->FunctionFlags |= 0x400;

	pFnClassIsChildOf->iNative = NativeIndex;
};

// Function Core.Object.NotEqual_InterfaceInterface
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::NotEqual_InterfaceInterface ( )
{
	static UFunction* pFnNotEqual_InterfaceInterface = NULL;

	if ( ! pFnNotEqual_InterfaceInterface )
		pFnNotEqual_InterfaceInterface = (UFunction*) UObject::GObjObjects()->Data[ 4116 ];

	UObject_execNotEqual_InterfaceInterface_Parms NotEqual_InterfaceInterface_Parms;

	pFnNotEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_InterfaceInterface, &NotEqual_InterfaceInterface_Parms, NULL );

	pFnNotEqual_InterfaceInterface->FunctionFlags |= 0x400;
};

// Function Core.Object.EqualEqual_InterfaceInterface
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::EqualEqual_InterfaceInterface ( )
{
	static UFunction* pFnEqualEqual_InterfaceInterface = NULL;

	if ( ! pFnEqualEqual_InterfaceInterface )
		pFnEqualEqual_InterfaceInterface = (UFunction*) UObject::GObjObjects()->Data[ 4120 ];

	UObject_execEqualEqual_InterfaceInterface_Parms EqualEqual_InterfaceInterface_Parms;

	pFnEqualEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_InterfaceInterface, &EqualEqual_InterfaceInterface_Parms, NULL );

	pFnEqualEqual_InterfaceInterface->FunctionFlags |= 0x400;
};

// Function Core.Object.NotEqual_ObjectObject
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0077]
// Parameters infos:

void UObject::NotEqual_ObjectObject ( )
{
	static UFunction* pFnNotEqual_ObjectObject = NULL;

	if ( ! pFnNotEqual_ObjectObject )
		pFnNotEqual_ObjectObject = (UFunction*) UObject::GObjObjects()->Data[ 4124 ];

	UObject_execNotEqual_ObjectObject_Parms NotEqual_ObjectObject_Parms;

	unsigned short NativeIndex = pFnNotEqual_ObjectObject->iNative;
	pFnNotEqual_ObjectObject->iNative = 0;

	pFnNotEqual_ObjectObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_ObjectObject, &NotEqual_ObjectObject_Parms, NULL );

	pFnNotEqual_ObjectObject->FunctionFlags |= 0x400;

	pFnNotEqual_ObjectObject->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_ObjectObject
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0072]
// Parameters infos:

void UObject::EqualEqual_ObjectObject ( )
{
	static UFunction* pFnEqualEqual_ObjectObject = NULL;

	if ( ! pFnEqualEqual_ObjectObject )
		pFnEqualEqual_ObjectObject = (UFunction*) UObject::GObjObjects()->Data[ 4128 ];

	UObject_execEqualEqual_ObjectObject_Parms EqualEqual_ObjectObject_Parms;

	unsigned short NativeIndex = pFnEqualEqual_ObjectObject->iNative;
	pFnEqualEqual_ObjectObject->iNative = 0;

	pFnEqualEqual_ObjectObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_ObjectObject, &EqualEqual_ObjectObject_Parms, NULL );

	pFnEqualEqual_ObjectObject->FunctionFlags |= 0x400;

	pFnEqualEqual_ObjectObject->iNative = NativeIndex;
};

// Function Core.Object.PathName
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::PathName ( )
{
	static UFunction* pFnPathName = NULL;

	if ( ! pFnPathName )
		pFnPathName = (UFunction*) UObject::GObjObjects()->Data[ 4132 ];

	UObject_execPathName_Parms PathName_Parms;

	pFnPathName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPathName, &PathName_Parms, NULL );

	pFnPathName->FunctionFlags |= 0x400;
};

// Function Core.Object.SplitString
// [0x00026003] ( FUNC_Final )
// Parameters infos:

void UObject::SplitString ( )
{
	static UFunction* pFnSplitString = NULL;

	if ( ! pFnSplitString )
		pFnSplitString = (UFunction*) UObject::GObjObjects()->Data[ 4136 ];

	UObject_execSplitString_Parms SplitString_Parms;

	this->ProcessEvent ( pFnSplitString, &SplitString_Parms, NULL );
};

// Function Core.Object.ParseStringIntoArray
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ParseStringIntoArray ( )
{
	static UFunction* pFnParseStringIntoArray = NULL;

	if ( ! pFnParseStringIntoArray )
		pFnParseStringIntoArray = (UFunction*) UObject::GObjObjects()->Data[ 3837 ];

	UObject_execParseStringIntoArray_Parms ParseStringIntoArray_Parms;

	pFnParseStringIntoArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnParseStringIntoArray, &ParseStringIntoArray_Parms, NULL );

	pFnParseStringIntoArray->FunctionFlags |= 0x400;
};

// Function Core.Object.JoinArray
// [0x00426003] ( FUNC_Final )
// Parameters infos:

void UObject::JoinArray ( )
{
	static UFunction* pFnJoinArray = NULL;

	if ( ! pFnJoinArray )
		pFnJoinArray = (UFunction*) UObject::GObjObjects()->Data[ 4146 ];

	UObject_execJoinArray_Parms JoinArray_Parms;

	this->ProcessEvent ( pFnJoinArray, &JoinArray_Parms, NULL );
};

// Function Core.Object.GetRightMost
// [0x00022003] ( FUNC_Final )
// Parameters infos:

void UObject::GetRightMost ( )
{
	static UFunction* pFnGetRightMost = NULL;

	if ( ! pFnGetRightMost )
		pFnGetRightMost = (UFunction*) UObject::GObjObjects()->Data[ 4152 ];

	UObject_execGetRightMost_Parms GetRightMost_Parms;

	this->ProcessEvent ( pFnGetRightMost, &GetRightMost_Parms, NULL );
};

// Function Core.Object.Split
// [0x00026003] ( FUNC_Final )
// Parameters infos:

void UObject::Split ( )
{
	static UFunction* pFnSplit = NULL;

	if ( ! pFnSplit )
		pFnSplit = (UFunction*) UObject::GObjObjects()->Data[ 4161 ];

	UObject_execSplit_Parms Split_Parms;

	this->ProcessEvent ( pFnSplit, &Split_Parms, NULL );
};

// Function Core.Object.Repl
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x00C9]
// Parameters infos:

void UObject::Repl ( )
{
	static UFunction* pFnRepl = NULL;

	if ( ! pFnRepl )
		pFnRepl = (UFunction*) UObject::GObjObjects()->Data[ 4165 ];

	UObject_execRepl_Parms Repl_Parms;

	unsigned short NativeIndex = pFnRepl->iNative;
	pFnRepl->iNative = 0;

	pFnRepl->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRepl, &Repl_Parms, NULL );

	pFnRepl->FunctionFlags |= 0x400;

	pFnRepl->iNative = NativeIndex;
};

// Function Core.Object.Asc
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00ED]
// Parameters infos:

void UObject::Asc ( )
{
	static UFunction* pFnAsc = NULL;

	if ( ! pFnAsc )
		pFnAsc = (UFunction*) UObject::GObjObjects()->Data[ 4171 ];

	UObject_execAsc_Parms Asc_Parms;

	unsigned short NativeIndex = pFnAsc->iNative;
	pFnAsc->iNative = 0;

	pFnAsc->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAsc, &Asc_Parms, NULL );

	pFnAsc->FunctionFlags |= 0x400;

	pFnAsc->iNative = NativeIndex;
};

// Function Core.Object.Chr
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EC]
// Parameters infos:

void UObject::Chr ( )
{
	static UFunction* pFnChr = NULL;

	if ( ! pFnChr )
		pFnChr = (UFunction*) UObject::GObjObjects()->Data[ 4177 ];

	UObject_execChr_Parms Chr_Parms;

	unsigned short NativeIndex = pFnChr->iNative;
	pFnChr->iNative = 0;

	pFnChr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChr, &Chr_Parms, NULL );

	pFnChr->FunctionFlags |= 0x400;

	pFnChr->iNative = NativeIndex;
};

// Function Core.Object.Locs
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EE]
// Parameters infos:

void UObject::Locs ( )
{
	static UFunction* pFnLocs = NULL;

	if ( ! pFnLocs )
		pFnLocs = (UFunction*) UObject::GObjObjects()->Data[ 4180 ];

	UObject_execLocs_Parms Locs_Parms;

	unsigned short NativeIndex = pFnLocs->iNative;
	pFnLocs->iNative = 0;

	pFnLocs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLocs, &Locs_Parms, NULL );

	pFnLocs->FunctionFlags |= 0x400;

	pFnLocs->iNative = NativeIndex;
};

// Function Core.Object.Caps
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EB]
// Parameters infos:

void UObject::Caps ( )
{
	static UFunction* pFnCaps = NULL;

	if ( ! pFnCaps )
		pFnCaps = (UFunction*) UObject::GObjObjects()->Data[ 4183 ];

	UObject_execCaps_Parms Caps_Parms;

	unsigned short NativeIndex = pFnCaps->iNative;
	pFnCaps->iNative = 0;

	pFnCaps->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCaps, &Caps_Parms, NULL );

	pFnCaps->FunctionFlags |= 0x400;

	pFnCaps->iNative = NativeIndex;
};

// Function Core.Object.Right
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EA]
// Parameters infos:

void UObject::Right ( )
{
	static UFunction* pFnRight = NULL;

	if ( ! pFnRight )
		pFnRight = (UFunction*) UObject::GObjObjects()->Data[ 4186 ];

	UObject_execRight_Parms Right_Parms;

	unsigned short NativeIndex = pFnRight->iNative;
	pFnRight->iNative = 0;

	pFnRight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRight, &Right_Parms, NULL );

	pFnRight->FunctionFlags |= 0x400;

	pFnRight->iNative = NativeIndex;
};

// Function Core.Object.Left
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x0080]
// Parameters infos:

void UObject::Left ( )
{
	static UFunction* pFnLeft = NULL;

	if ( ! pFnLeft )
		pFnLeft = (UFunction*) UObject::GObjObjects()->Data[ 4189 ];

	UObject_execLeft_Parms Left_Parms;

	unsigned short NativeIndex = pFnLeft->iNative;
	pFnLeft->iNative = 0;

	pFnLeft->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeft, &Left_Parms, NULL );

	pFnLeft->FunctionFlags |= 0x400;

	pFnLeft->iNative = NativeIndex;
};

// Function Core.Object.Mid
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x007F]
// Parameters infos:

void UObject::Mid ( )
{
	static UFunction* pFnMid = NULL;

	if ( ! pFnMid )
		pFnMid = (UFunction*) UObject::GObjObjects()->Data[ 4193 ];

	UObject_execMid_Parms Mid_Parms;

	unsigned short NativeIndex = pFnMid->iNative;
	pFnMid->iNative = 0;

	pFnMid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMid, &Mid_Parms, NULL );

	pFnMid->FunctionFlags |= 0x400;

	pFnMid->iNative = NativeIndex;
};

// Function Core.Object.InStr
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x007E]
// Parameters infos:

void UObject::InStr ( )
{
	static UFunction* pFnInStr = NULL;

	if ( ! pFnInStr )
		pFnInStr = (UFunction*) UObject::GObjObjects()->Data[ 4197 ];

	UObject_execInStr_Parms InStr_Parms;

	unsigned short NativeIndex = pFnInStr->iNative;
	pFnInStr->iNative = 0;

	pFnInStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInStr, &InStr_Parms, NULL );

	pFnInStr->FunctionFlags |= 0x400;

	pFnInStr->iNative = NativeIndex;
};

// Function Core.Object.Len
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x007D]
// Parameters infos:

void UObject::Len ( )
{
	static UFunction* pFnLen = NULL;

	if ( ! pFnLen )
		pFnLen = (UFunction*) UObject::GObjObjects()->Data[ 4202 ];

	UObject_execLen_Parms Len_Parms;

	unsigned short NativeIndex = pFnLen->iNative;
	pFnLen->iNative = 0;

	pFnLen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLen, &Len_Parms, NULL );

	pFnLen->FunctionFlags |= 0x400;

	pFnLen->iNative = NativeIndex;
};

// Function Core.Object.SubtractEqual_StrStr
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0144]
// Parameters infos:

void UObject::SubtractEqual_StrStr ( )
{
	static UFunction* pFnSubtractEqual_StrStr = NULL;

	if ( ! pFnSubtractEqual_StrStr )
		pFnSubtractEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4209 ];

	UObject_execSubtractEqual_StrStr_Parms SubtractEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnSubtractEqual_StrStr->iNative;
	pFnSubtractEqual_StrStr->iNative = 0;

	pFnSubtractEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractEqual_StrStr, &SubtractEqual_StrStr_Parms, NULL );

	pFnSubtractEqual_StrStr->FunctionFlags |= 0x400;

	pFnSubtractEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.AtEqual_StrStr
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0143]
// Parameters infos:

void UObject::AtEqual_StrStr ( )
{
	static UFunction* pFnAtEqual_StrStr = NULL;

	if ( ! pFnAtEqual_StrStr )
		pFnAtEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4212 ];

	UObject_execAtEqual_StrStr_Parms AtEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnAtEqual_StrStr->iNative;
	pFnAtEqual_StrStr->iNative = 0;

	pFnAtEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtEqual_StrStr, &AtEqual_StrStr_Parms, NULL );

	pFnAtEqual_StrStr->FunctionFlags |= 0x400;

	pFnAtEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.ConcatEqual_StrStr
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0142]
// Parameters infos:

void UObject::ConcatEqual_StrStr ( )
{
	static UFunction* pFnConcatEqual_StrStr = NULL;

	if ( ! pFnConcatEqual_StrStr )
		pFnConcatEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4157 ];

	UObject_execConcatEqual_StrStr_Parms ConcatEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnConcatEqual_StrStr->iNative;
	pFnConcatEqual_StrStr->iNative = 0;

	pFnConcatEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConcatEqual_StrStr, &ConcatEqual_StrStr_Parms, NULL );

	pFnConcatEqual_StrStr->FunctionFlags |= 0x400;

	pFnConcatEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.ComplementEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x007C]
// Parameters infos:

void UObject::ComplementEqual_StrStr ( )
{
	static UFunction* pFnComplementEqual_StrStr = NULL;

	if ( ! pFnComplementEqual_StrStr )
		pFnComplementEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4219 ];

	UObject_execComplementEqual_StrStr_Parms ComplementEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnComplementEqual_StrStr->iNative;
	pFnComplementEqual_StrStr->iNative = 0;

	pFnComplementEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnComplementEqual_StrStr, &ComplementEqual_StrStr_Parms, NULL );

	pFnComplementEqual_StrStr->FunctionFlags |= 0x400;

	pFnComplementEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.NotEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x007B]
// Parameters infos:

void UObject::NotEqual_StrStr ( )
{
	static UFunction* pFnNotEqual_StrStr = NULL;

	if ( ! pFnNotEqual_StrStr )
		pFnNotEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4222 ];

	UObject_execNotEqual_StrStr_Parms NotEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnNotEqual_StrStr->iNative;
	pFnNotEqual_StrStr->iNative = 0;

	pFnNotEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_StrStr, &NotEqual_StrStr_Parms, NULL );

	pFnNotEqual_StrStr->FunctionFlags |= 0x400;

	pFnNotEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x007A]
// Parameters infos:

void UObject::EqualEqual_StrStr ( )
{
	static UFunction* pFnEqualEqual_StrStr = NULL;

	if ( ! pFnEqualEqual_StrStr )
		pFnEqualEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4226 ];

	UObject_execEqualEqual_StrStr_Parms EqualEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnEqualEqual_StrStr->iNative;
	pFnEqualEqual_StrStr->iNative = 0;

	pFnEqualEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_StrStr, &EqualEqual_StrStr_Parms, NULL );

	pFnEqualEqual_StrStr->FunctionFlags |= 0x400;

	pFnEqualEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.GreaterEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0079]
// Parameters infos:

void UObject::GreaterEqual_StrStr ( )
{
	static UFunction* pFnGreaterEqual_StrStr = NULL;

	if ( ! pFnGreaterEqual_StrStr )
		pFnGreaterEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4230 ];

	UObject_execGreaterEqual_StrStr_Parms GreaterEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnGreaterEqual_StrStr->iNative;
	pFnGreaterEqual_StrStr->iNative = 0;

	pFnGreaterEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreaterEqual_StrStr, &GreaterEqual_StrStr_Parms, NULL );

	pFnGreaterEqual_StrStr->FunctionFlags |= 0x400;

	pFnGreaterEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.LessEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0078]
// Parameters infos:

void UObject::LessEqual_StrStr ( )
{
	static UFunction* pFnLessEqual_StrStr = NULL;

	if ( ! pFnLessEqual_StrStr )
		pFnLessEqual_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4234 ];

	UObject_execLessEqual_StrStr_Parms LessEqual_StrStr_Parms;

	unsigned short NativeIndex = pFnLessEqual_StrStr->iNative;
	pFnLessEqual_StrStr->iNative = 0;

	pFnLessEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLessEqual_StrStr, &LessEqual_StrStr_Parms, NULL );

	pFnLessEqual_StrStr->FunctionFlags |= 0x400;

	pFnLessEqual_StrStr->iNative = NativeIndex;
};

// Function Core.Object.Greater_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0074]
// Parameters infos:

void UObject::Greater_StrStr ( )
{
	static UFunction* pFnGreater_StrStr = NULL;

	if ( ! pFnGreater_StrStr )
		pFnGreater_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4238 ];

	UObject_execGreater_StrStr_Parms Greater_StrStr_Parms;

	unsigned short NativeIndex = pFnGreater_StrStr->iNative;
	pFnGreater_StrStr->iNative = 0;

	pFnGreater_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreater_StrStr, &Greater_StrStr_Parms, NULL );

	pFnGreater_StrStr->FunctionFlags |= 0x400;

	pFnGreater_StrStr->iNative = NativeIndex;
};

// Function Core.Object.Less_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0073]
// Parameters infos:

void UObject::Less_StrStr ( )
{
	static UFunction* pFnLess_StrStr = NULL;

	if ( ! pFnLess_StrStr )
		pFnLess_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4242 ];

	UObject_execLess_StrStr_Parms Less_StrStr_Parms;

	unsigned short NativeIndex = pFnLess_StrStr->iNative;
	pFnLess_StrStr->iNative = 0;

	pFnLess_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLess_StrStr, &Less_StrStr_Parms, NULL );

	pFnLess_StrStr->FunctionFlags |= 0x400;

	pFnLess_StrStr->iNative = NativeIndex;
};

// Function Core.Object.At_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00A8]
// Parameters infos:

void UObject::At_StrStr ( )
{
	static UFunction* pFnAt_StrStr = NULL;

	if ( ! pFnAt_StrStr )
		pFnAt_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4246 ];

	UObject_execAt_StrStr_Parms At_StrStr_Parms;

	unsigned short NativeIndex = pFnAt_StrStr->iNative;
	pFnAt_StrStr->iNative = 0;

	pFnAt_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAt_StrStr, &At_StrStr_Parms, NULL );

	pFnAt_StrStr->FunctionFlags |= 0x400;

	pFnAt_StrStr->iNative = NativeIndex;
};

// Function Core.Object.Concat_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0070]
// Parameters infos:

void UObject::Concat_StrStr ( )
{
	static UFunction* pFnConcat_StrStr = NULL;

	if ( ! pFnConcat_StrStr )
		pFnConcat_StrStr = (UFunction*) UObject::GObjObjects()->Data[ 4250 ];

	UObject_execConcat_StrStr_Parms Concat_StrStr_Parms;

	unsigned short NativeIndex = pFnConcat_StrStr->iNative;
	pFnConcat_StrStr->iNative = 0;

	pFnConcat_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnConcat_StrStr, &Concat_StrStr_Parms, NULL );

	pFnConcat_StrStr->FunctionFlags |= 0x400;

	pFnConcat_StrStr->iNative = NativeIndex;
};

// Function Core.Object.MakeRotator
// [0x00822003] ( FUNC_Final )
// Parameters infos:

void UObject::MakeRotator ( )
{
	static UFunction* pFnMakeRotator = NULL;

	if ( ! pFnMakeRotator )
		pFnMakeRotator = (UFunction*) UObject::GObjObjects()->Data[ 4254 ];

	UObject_execMakeRotator_Parms MakeRotator_Parms;

	this->ProcessEvent ( pFnMakeRotator, &MakeRotator_Parms, NULL );
};

// Function Core.Object.SClampRotAxis
// [0x00422103] ( FUNC_Final )
// Parameters infos:

void UObject::SClampRotAxis ( )
{
	static UFunction* pFnSClampRotAxis = NULL;

	if ( ! pFnSClampRotAxis )
		pFnSClampRotAxis = (UFunction*) UObject::GObjObjects()->Data[ 4258 ];

	UObject_execSClampRotAxis_Parms SClampRotAxis_Parms;

	this->ProcessEvent ( pFnSClampRotAxis, &SClampRotAxis_Parms, NULL );
};

// Function Core.Object.ClampRotAxisFromRange
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::ClampRotAxisFromRange ( )
{
	static UFunction* pFnClampRotAxisFromRange = NULL;

	if ( ! pFnClampRotAxisFromRange )
		pFnClampRotAxisFromRange = (UFunction*) UObject::GObjObjects()->Data[ 4264 ];

	UObject_execClampRotAxisFromRange_Parms ClampRotAxisFromRange_Parms;

	this->ProcessEvent ( pFnClampRotAxisFromRange, &ClampRotAxisFromRange_Parms, NULL );
};

// Function Core.Object.ClampRotAxisFromBase
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::ClampRotAxisFromBase ( )
{
	static UFunction* pFnClampRotAxisFromBase = NULL;

	if ( ! pFnClampRotAxisFromBase )
		pFnClampRotAxisFromBase = (UFunction*) UObject::GObjObjects()->Data[ 4275 ];

	UObject_execClampRotAxisFromBase_Parms ClampRotAxisFromBase_Parms;

	this->ProcessEvent ( pFnClampRotAxisFromBase, &ClampRotAxisFromBase_Parms, NULL );
};

// Function Core.Object.ClampRotAxis
// [0x00422103] ( FUNC_Final )
// Parameters infos:

void UObject::ClampRotAxis ( )
{
	static UFunction* pFnClampRotAxis = NULL;

	if ( ! pFnClampRotAxis )
		pFnClampRotAxis = (UFunction*) UObject::GObjObjects()->Data[ 4282 ];

	UObject_execClampRotAxis_Parms ClampRotAxis_Parms;

	this->ProcessEvent ( pFnClampRotAxis, &ClampRotAxis_Parms, NULL );
};

// Function Core.Object.RSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::RSize ( )
{
	static UFunction* pFnRSize = NULL;

	if ( ! pFnRSize )
		pFnRSize = (UFunction*) UObject::GObjObjects()->Data[ 4288 ];

	UObject_execRSize_Parms RSize_Parms;

	pFnRSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRSize, &RSize_Parms, NULL );

	pFnRSize->FunctionFlags |= 0x400;
};

// Function Core.Object.RDiff
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::RDiff ( )
{
	static UFunction* pFnRDiff = NULL;

	if ( ! pFnRDiff )
		pFnRDiff = (UFunction*) UObject::GObjObjects()->Data[ 4294 ];

	UObject_execRDiff_Parms RDiff_Parms;

	pFnRDiff->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRDiff, &RDiff_Parms, NULL );

	pFnRDiff->FunctionFlags |= 0x400;
};

// Function Core.Object.NormalizeRotAxis
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::NormalizeRotAxis ( )
{
	static UFunction* pFnNormalizeRotAxis = NULL;

	if ( ! pFnNormalizeRotAxis )
		pFnNormalizeRotAxis = (UFunction*) UObject::GObjObjects()->Data[ 4267 ];

	UObject_execNormalizeRotAxis_Parms NormalizeRotAxis_Parms;

	pFnNormalizeRotAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNormalizeRotAxis, &NormalizeRotAxis_Parms, NULL );

	pFnNormalizeRotAxis->FunctionFlags |= 0x400;
};

// Function Core.Object.RInterpTo
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::RInterpTo ( )
{
	static UFunction* pFnRInterpTo = NULL;

	if ( ! pFnRInterpTo )
		pFnRInterpTo = (UFunction*) UObject::GObjObjects()->Data[ 4300 ];

	UObject_execRInterpTo_Parms RInterpTo_Parms;

	pFnRInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRInterpTo, &RInterpTo_Parms, NULL );

	pFnRInterpTo->FunctionFlags |= 0x400;
};

// Function Core.Object.RTransform
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::RTransform ( )
{
	static UFunction* pFnRTransform = NULL;

	if ( ! pFnRTransform )
		pFnRTransform = (UFunction*) UObject::GObjObjects()->Data[ 4303 ];

	UObject_execRTransform_Parms RTransform_Parms;

	pFnRTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRTransform, &RTransform_Parms, NULL );

	pFnRTransform->FunctionFlags |= 0x400;
};

// Function Core.Object.RLerp
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::RLerp ( )
{
	static UFunction* pFnRLerp = NULL;

	if ( ! pFnRLerp )
		pFnRLerp = (UFunction*) UObject::GObjObjects()->Data[ 4310 ];

	UObject_execRLerp_Parms RLerp_Parms;

	pFnRLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRLerp, &RLerp_Parms, NULL );

	pFnRLerp->FunctionFlags |= 0x400;
};

// Function Core.Object.Normalize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Normalize (FRotator Rot, FRotator &Out)
{
	static UFunction* pFnNormalize = NULL;

	if ( ! pFnNormalize )
		pFnNormalize = (UFunction*) UObject::GObjObjects()->Data[ 4314 ];

	UObject_execNormalize_Parms Normalize_Parms;
	Normalize_Parms.Rot = Rot;

	pFnNormalize->FunctionFlags |= ~0x400;
	this->ProcessEvent ( pFnNormalize, &Normalize_Parms, NULL );
	pFnNormalize->FunctionFlags |= 0x400;

	Out = Normalize_Parms.ReturnValue;
};

// Function Core.Object.OrthoRotation
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::OrthoRotation ( )
{
	static UFunction* pFnOrthoRotation = NULL;

	if ( ! pFnOrthoRotation )
		pFnOrthoRotation = (UFunction*) UObject::GObjObjects()->Data[ 4320 ];

	UObject_execOrthoRotation_Parms OrthoRotation_Parms;

	pFnOrthoRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOrthoRotation, &OrthoRotation_Parms, NULL );

	pFnOrthoRotation->FunctionFlags |= 0x400;
};

// Function Core.Object.RotRand
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x0140]
// Parameters infos:

void UObject::RotRand ( )
{
	static UFunction* pFnRotRand = NULL;

	if ( ! pFnRotRand )
		pFnRotRand = (UFunction*) UObject::GObjObjects()->Data[ 4323 ];

	UObject_execRotRand_Parms RotRand_Parms;

	unsigned short NativeIndex = pFnRotRand->iNative;
	pFnRotRand->iNative = 0;

	pFnRotRand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRotRand, &RotRand_Parms, NULL );

	pFnRotRand->FunctionFlags |= 0x400;

	pFnRotRand->iNative = NativeIndex;
};

// Function Core.Object.GetRotatorAxis
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::GetRotatorAxis ( )
{
	static UFunction* pFnGetRotatorAxis = NULL;

	if ( ! pFnGetRotatorAxis )
		pFnGetRotatorAxis = (UFunction*) UObject::GObjObjects()->Data[ 4328 ];

	UObject_execGetRotatorAxis_Parms GetRotatorAxis_Parms;

	pFnGetRotatorAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRotatorAxis, &GetRotatorAxis_Parms, NULL );

	pFnGetRotatorAxis->FunctionFlags |= 0x400;
};

// Function Core.Object.GetUnAxes
// [0x00422401] ( FUNC_Final | FUNC_Native ) iNative [0x00E6]
// Parameters infos:

void UObject::GetUnAxes ( )
{
	static UFunction* pFnGetUnAxes = NULL;

	if ( ! pFnGetUnAxes )
		pFnGetUnAxes = (UFunction*) UObject::GObjObjects()->Data[ 4331 ];

	UObject_execGetUnAxes_Parms GetUnAxes_Parms;

	unsigned short NativeIndex = pFnGetUnAxes->iNative;
	pFnGetUnAxes->iNative = 0;

	pFnGetUnAxes->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUnAxes, &GetUnAxes_Parms, NULL );

	pFnGetUnAxes->FunctionFlags |= 0x400;

	pFnGetUnAxes->iNative = NativeIndex;
};

// Function Core.Object.GetAxes
// [0x00422401] ( FUNC_Final | FUNC_Native ) iNative [0x00E5]
// Parameters infos:

void UObject::GetAxes ( )
{
	static UFunction* pFnGetAxes = NULL;

	if ( ! pFnGetAxes )
		pFnGetAxes = (UFunction*) UObject::GObjObjects()->Data[ 4335 ];

	UObject_execGetAxes_Parms GetAxes_Parms;

	unsigned short NativeIndex = pFnGetAxes->iNative;
	pFnGetAxes->iNative = 0;

	pFnGetAxes->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAxes, &GetAxes_Parms, NULL );

	pFnGetAxes->FunctionFlags |= 0x400;

	pFnGetAxes->iNative = NativeIndex;
};

// Function Core.Object.ClockwiseFrom_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ClockwiseFrom_IntInt ( )
{
	static UFunction* pFnClockwiseFrom_IntInt = NULL;

	if ( ! pFnClockwiseFrom_IntInt )
		pFnClockwiseFrom_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4340 ];

	UObject_execClockwiseFrom_IntInt_Parms ClockwiseFrom_IntInt_Parms;

	pFnClockwiseFrom_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClockwiseFrom_IntInt, &ClockwiseFrom_IntInt_Parms, NULL );

	pFnClockwiseFrom_IntInt->FunctionFlags |= 0x400;
};

// Function Core.Object.SubtractEqual_RotatorRotator
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x013F]
// Parameters infos:

void UObject::SubtractEqual_RotatorRotator ( )
{
	static UFunction* pFnSubtractEqual_RotatorRotator = NULL;

	if ( ! pFnSubtractEqual_RotatorRotator )
		pFnSubtractEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4345 ];

	UObject_execSubtractEqual_RotatorRotator_Parms SubtractEqual_RotatorRotator_Parms;

	unsigned short NativeIndex = pFnSubtractEqual_RotatorRotator->iNative;
	pFnSubtractEqual_RotatorRotator->iNative = 0;

	pFnSubtractEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractEqual_RotatorRotator, &SubtractEqual_RotatorRotator_Parms, NULL );

	pFnSubtractEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnSubtractEqual_RotatorRotator->iNative = NativeIndex;
};

// Function Core.Object.AddEqual_RotatorRotator
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x013E]
// Parameters infos:

void UObject::AddEqual_RotatorRotator ( )
{
	static UFunction* pFnAddEqual_RotatorRotator = NULL;

	if ( ! pFnAddEqual_RotatorRotator )
		pFnAddEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4349 ];

	UObject_execAddEqual_RotatorRotator_Parms AddEqual_RotatorRotator_Parms;

	unsigned short NativeIndex = pFnAddEqual_RotatorRotator->iNative;
	pFnAddEqual_RotatorRotator->iNative = 0;

	pFnAddEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddEqual_RotatorRotator, &AddEqual_RotatorRotator_Parms, NULL );

	pFnAddEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnAddEqual_RotatorRotator->iNative = NativeIndex;
};

// Function Core.Object.Subtract_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x013D]
// Parameters infos:

void UObject::Subtract_RotatorRotator ( )
{
	static UFunction* pFnSubtract_RotatorRotator = NULL;

	if ( ! pFnSubtract_RotatorRotator )
		pFnSubtract_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4353 ];

	UObject_execSubtract_RotatorRotator_Parms Subtract_RotatorRotator_Parms;

	unsigned short NativeIndex = pFnSubtract_RotatorRotator->iNative;
	pFnSubtract_RotatorRotator->iNative = 0;

	pFnSubtract_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_RotatorRotator, &Subtract_RotatorRotator_Parms, NULL );

	pFnSubtract_RotatorRotator->FunctionFlags |= 0x400;

	pFnSubtract_RotatorRotator->iNative = NativeIndex;
};

// Function Core.Object.Add_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x013C]
// Parameters infos:

void UObject::Add_RotatorRotator ( )
{
	static UFunction* pFnAdd_RotatorRotator = NULL;

	if ( ! pFnAdd_RotatorRotator )
		pFnAdd_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4357 ];

	UObject_execAdd_RotatorRotator_Parms Add_RotatorRotator_Parms;

	unsigned short NativeIndex = pFnAdd_RotatorRotator->iNative;
	pFnAdd_RotatorRotator->iNative = 0;

	pFnAdd_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdd_RotatorRotator, &Add_RotatorRotator_Parms, NULL );

	pFnAdd_RotatorRotator->FunctionFlags |= 0x400;

	pFnAdd_RotatorRotator->iNative = NativeIndex;
};

// Function Core.Object.DivideEqual_RotatorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0123]
// Parameters infos:

void UObject::DivideEqual_RotatorFloat ( )
{
	static UFunction* pFnDivideEqual_RotatorFloat = NULL;

	if ( ! pFnDivideEqual_RotatorFloat )
		pFnDivideEqual_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4361 ];

	UObject_execDivideEqual_RotatorFloat_Parms DivideEqual_RotatorFloat_Parms;

	unsigned short NativeIndex = pFnDivideEqual_RotatorFloat->iNative;
	pFnDivideEqual_RotatorFloat->iNative = 0;

	pFnDivideEqual_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivideEqual_RotatorFloat, &DivideEqual_RotatorFloat_Parms, NULL );

	pFnDivideEqual_RotatorFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_RotatorFloat->iNative = NativeIndex;
};

// Function Core.Object.MultiplyEqual_RotatorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0122]
// Parameters infos:

void UObject::MultiplyEqual_RotatorFloat ( )
{
	static UFunction* pFnMultiplyEqual_RotatorFloat = NULL;

	if ( ! pFnMultiplyEqual_RotatorFloat )
		pFnMultiplyEqual_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4365 ];

	UObject_execMultiplyEqual_RotatorFloat_Parms MultiplyEqual_RotatorFloat_Parms;

	unsigned short NativeIndex = pFnMultiplyEqual_RotatorFloat->iNative;
	pFnMultiplyEqual_RotatorFloat->iNative = 0;

	pFnMultiplyEqual_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_RotatorFloat, &MultiplyEqual_RotatorFloat_Parms, NULL );

	pFnMultiplyEqual_RotatorFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_RotatorFloat->iNative = NativeIndex;
};

// Function Core.Object.Divide_RotatorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0121]
// Parameters infos:

void UObject::Divide_RotatorFloat ( )
{
	static UFunction* pFnDivide_RotatorFloat = NULL;

	if ( ! pFnDivide_RotatorFloat )
		pFnDivide_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4369 ];

	UObject_execDivide_RotatorFloat_Parms Divide_RotatorFloat_Parms;

	unsigned short NativeIndex = pFnDivide_RotatorFloat->iNative;
	pFnDivide_RotatorFloat->iNative = 0;

	pFnDivide_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivide_RotatorFloat, &Divide_RotatorFloat_Parms, NULL );

	pFnDivide_RotatorFloat->FunctionFlags |= 0x400;

	pFnDivide_RotatorFloat->iNative = NativeIndex;
};

// Function Core.Object.Multiply_FloatRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0120]
// Parameters infos:

void UObject::Multiply_FloatRotator ( )
{
	static UFunction* pFnMultiply_FloatRotator = NULL;

	if ( ! pFnMultiply_FloatRotator )
		pFnMultiply_FloatRotator = (UFunction*) UObject::GObjObjects()->Data[ 4373 ];

	UObject_execMultiply_FloatRotator_Parms Multiply_FloatRotator_Parms;

	unsigned short NativeIndex = pFnMultiply_FloatRotator->iNative;
	pFnMultiply_FloatRotator->iNative = 0;

	pFnMultiply_FloatRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_FloatRotator, &Multiply_FloatRotator_Parms, NULL );

	pFnMultiply_FloatRotator->FunctionFlags |= 0x400;

	pFnMultiply_FloatRotator->iNative = NativeIndex;
};

// Function Core.Object.Multiply_RotatorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x011F]
// Parameters infos:

void UObject::Multiply_RotatorFloat ( )
{
	static UFunction* pFnMultiply_RotatorFloat = NULL;

	if ( ! pFnMultiply_RotatorFloat )
		pFnMultiply_RotatorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4377 ];

	UObject_execMultiply_RotatorFloat_Parms Multiply_RotatorFloat_Parms;

	unsigned short NativeIndex = pFnMultiply_RotatorFloat->iNative;
	pFnMultiply_RotatorFloat->iNative = 0;

	pFnMultiply_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_RotatorFloat, &Multiply_RotatorFloat_Parms, NULL );

	pFnMultiply_RotatorFloat->FunctionFlags |= 0x400;

	pFnMultiply_RotatorFloat->iNative = NativeIndex;
};

// Function Core.Object.NotEqual_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00CB]
// Parameters infos:

void UObject::NotEqual_RotatorRotator ( )
{
	static UFunction* pFnNotEqual_RotatorRotator = NULL;

	if ( ! pFnNotEqual_RotatorRotator )
		pFnNotEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4381 ];

	UObject_execNotEqual_RotatorRotator_Parms NotEqual_RotatorRotator_Parms;

	unsigned short NativeIndex = pFnNotEqual_RotatorRotator->iNative;
	pFnNotEqual_RotatorRotator->iNative = 0;

	pFnNotEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_RotatorRotator, &NotEqual_RotatorRotator_Parms, NULL );

	pFnNotEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnNotEqual_RotatorRotator->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x008E]
// Parameters infos:

void UObject::EqualEqual_RotatorRotator ( )
{
	static UFunction* pFnEqualEqual_RotatorRotator = NULL;

	if ( ! pFnEqualEqual_RotatorRotator )
		pFnEqualEqual_RotatorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4385 ];

	UObject_execEqualEqual_RotatorRotator_Parms EqualEqual_RotatorRotator_Parms;

	unsigned short NativeIndex = pFnEqualEqual_RotatorRotator->iNative;
	pFnEqualEqual_RotatorRotator->iNative = 0;

	pFnEqualEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_RotatorRotator, &EqualEqual_RotatorRotator_Parms, NULL );

	pFnEqualEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnEqualEqual_RotatorRotator->iNative = NativeIndex;
};

// Function Core.Object.InCylinder
// [0x00824103] ( FUNC_Final )
// Parameters infos:

void UObject::InCylinder ( )
{
	static UFunction* pFnInCylinder = NULL;

	if ( ! pFnInCylinder )
		pFnInCylinder = (UFunction*) UObject::GObjObjects()->Data[ 4389 ];

	UObject_execInCylinder_Parms InCylinder_Parms;

	this->ProcessEvent ( pFnInCylinder, &InCylinder_Parms, NULL );
};

// Function Core.Object.NoZDot
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::NoZDot ( )
{
	static UFunction* pFnNoZDot = NULL;

	if ( ! pFnNoZDot )
		pFnNoZDot = (UFunction*) UObject::GObjObjects()->Data[ 4393 ];

	UObject_execNoZDot_Parms NoZDot_Parms;

	pFnNoZDot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNoZDot, &NoZDot_Parms, NULL );

	pFnNoZDot->FunctionFlags |= 0x400;
};

// Function Core.Object.ClampLength
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ClampLength ( )
{
	static UFunction* pFnClampLength = NULL;

	if ( ! pFnClampLength )
		pFnClampLength = (UFunction*) UObject::GObjObjects()->Data[ 4402 ];

	UObject_execClampLength_Parms ClampLength_Parms;

	pFnClampLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClampLength, &ClampLength_Parms, NULL );

	pFnClampLength->FunctionFlags |= 0x400;
};

// Function Core.Object.VInterpTo
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::VInterpTo ( )
{
	static UFunction* pFnVInterpTo = NULL;

	if ( ! pFnVInterpTo )
		pFnVInterpTo = (UFunction*) UObject::GObjObjects()->Data[ 4406 ];

	UObject_execVInterpTo_Parms VInterpTo_Parms;

	pFnVInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVInterpTo, &VInterpTo_Parms, NULL );

	pFnVInterpTo->FunctionFlags |= 0x400;
};

// Function Core.Object.IsZero
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x05DD]
// Parameters infos:

void UObject::IsZero ( )
{
	static UFunction* pFnIsZero = NULL;

	if ( ! pFnIsZero )
		pFnIsZero = (UFunction*) UObject::GObjObjects()->Data[ 4410 ];

	UObject_execIsZero_Parms IsZero_Parms;

	unsigned short NativeIndex = pFnIsZero->iNative;
	pFnIsZero->iNative = 0;

	pFnIsZero->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsZero, &IsZero_Parms, NULL );

	pFnIsZero->FunctionFlags |= 0x400;

	pFnIsZero->iNative = NativeIndex;
};

// Function Core.Object.ProjectOnTo
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x05DC]
// Parameters infos:

void UObject::ProjectOnTo ( )
{
	static UFunction* pFnProjectOnTo = NULL;

	if ( ! pFnProjectOnTo )
		pFnProjectOnTo = (UFunction*) UObject::GObjObjects()->Data[ 4416 ];

	UObject_execProjectOnTo_Parms ProjectOnTo_Parms;

	unsigned short NativeIndex = pFnProjectOnTo->iNative;
	pFnProjectOnTo->iNative = 0;

	pFnProjectOnTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProjectOnTo, &ProjectOnTo_Parms, NULL );

	pFnProjectOnTo->FunctionFlags |= 0x400;

	pFnProjectOnTo->iNative = NativeIndex;
};

// Function Core.Object.MirrorVectorByNormal
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x012C]
// Parameters infos:

void UObject::MirrorVectorByNormal ( )
{
	static UFunction* pFnMirrorVectorByNormal = NULL;

	if ( ! pFnMirrorVectorByNormal )
		pFnMirrorVectorByNormal = (UFunction*) UObject::GObjObjects()->Data[ 4419 ];

	UObject_execMirrorVectorByNormal_Parms MirrorVectorByNormal_Parms;

	unsigned short NativeIndex = pFnMirrorVectorByNormal->iNative;
	pFnMirrorVectorByNormal->iNative = 0;

	pFnMirrorVectorByNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMirrorVectorByNormal, &MirrorVectorByNormal_Parms, NULL );

	pFnMirrorVectorByNormal->FunctionFlags |= 0x400;

	pFnMirrorVectorByNormal->iNative = NativeIndex;
};

// Function Core.Object.VRandCone2
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::VRandCone2 ( )
{
	static UFunction* pFnVRandCone2 = NULL;

	if ( ! pFnVRandCone2 )
		pFnVRandCone2 = (UFunction*) UObject::GObjObjects()->Data[ 4423 ];

	UObject_execVRandCone2_Parms VRandCone2_Parms;

	pFnVRandCone2->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVRandCone2, &VRandCone2_Parms, NULL );

	pFnVRandCone2->FunctionFlags |= 0x400;
};

// Function Core.Object.VRandCone
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::VRandCone ( )
{
	static UFunction* pFnVRandCone = NULL;

	if ( ! pFnVRandCone )
		pFnVRandCone = (UFunction*) UObject::GObjObjects()->Data[ 4427 ];

	UObject_execVRandCone_Parms VRandCone_Parms;

	pFnVRandCone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVRandCone, &VRandCone_Parms, NULL );

	pFnVRandCone->FunctionFlags |= 0x400;
};

// Function Core.Object.VRand
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00FC]
// Parameters infos:

void UObject::VRand ( )
{
	static UFunction* pFnVRand = NULL;

	if ( ! pFnVRand )
		pFnVRand = (UFunction*) UObject::GObjObjects()->Data[ 4432 ];

	UObject_execVRand_Parms VRand_Parms;

	unsigned short NativeIndex = pFnVRand->iNative;
	pFnVRand->iNative = 0;

	pFnVRand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVRand, &VRand_Parms, NULL );

	pFnVRand->FunctionFlags |= 0x400;

	pFnVRand->iNative = NativeIndex;
};

// Function Core.Object.VLerp
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::VLerp ( )
{
	static UFunction* pFnVLerp = NULL;

	if ( ! pFnVLerp )
		pFnVLerp = (UFunction*) UObject::GObjObjects()->Data[ 4436 ];

	UObject_execVLerp_Parms VLerp_Parms;

	pFnVLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVLerp, &VLerp_Parms, NULL );

	pFnVLerp->FunctionFlags |= 0x400;
};

// Function Core.Object.Normal2D
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E3]
// Parameters infos:

void UObject::Normal2D ( )
{
	static UFunction* pFnNormal2D = NULL;

	if ( ! pFnNormal2D )
		pFnNormal2D = (UFunction*) UObject::GObjObjects()->Data[ 4438 ];

	UObject_execNormal2D_Parms Normal2D_Parms;

	unsigned short NativeIndex = pFnNormal2D->iNative;
	pFnNormal2D->iNative = 0;

	pFnNormal2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNormal2D, &Normal2D_Parms, NULL );

	pFnNormal2D->FunctionFlags |= 0x400;

	pFnNormal2D->iNative = NativeIndex;
};

// Function Core.Object.Normal
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E2]
// Parameters infos:

void UObject::Normal ( )
{
	static UFunction* pFnNormal = NULL;

	if ( ! pFnNormal )
		pFnNormal = (UFunction*) UObject::GObjObjects()->Data[ 4443 ];

	UObject_execNormal_Parms Normal_Parms;

	unsigned short NativeIndex = pFnNormal->iNative;
	pFnNormal->iNative = 0;

	pFnNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNormal, &Normal_Parms, NULL );

	pFnNormal->FunctionFlags |= 0x400;

	pFnNormal->iNative = NativeIndex;
};

// Function Core.Object.VSizeSq2D
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::VSizeSq2D ( )
{
	static UFunction* pFnVSizeSq2D = NULL;

	if ( ! pFnVSizeSq2D )
		pFnVSizeSq2D = (UFunction*) UObject::GObjObjects()->Data[ 4446 ];

	UObject_execVSizeSq2D_Parms VSizeSq2D_Parms;

	pFnVSizeSq2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVSizeSq2D, &VSizeSq2D_Parms, NULL );

	pFnVSizeSq2D->FunctionFlags |= 0x400;
};

// Function Core.Object.VSizeSq
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E4]
// Parameters infos:

void UObject::VSizeSq ( )
{
	static UFunction* pFnVSizeSq = NULL;

	if ( ! pFnVSizeSq )
		pFnVSizeSq = (UFunction*) UObject::GObjObjects()->Data[ 4449 ];

	UObject_execVSizeSq_Parms VSizeSq_Parms;

	unsigned short NativeIndex = pFnVSizeSq->iNative;
	pFnVSizeSq->iNative = 0;

	pFnVSizeSq->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVSizeSq, &VSizeSq_Parms, NULL );

	pFnVSizeSq->FunctionFlags |= 0x400;

	pFnVSizeSq->iNative = NativeIndex;
};

// Function Core.Object.VSize2D
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::VSize2D ( )
{
	static UFunction* pFnVSize2D = NULL;

	if ( ! pFnVSize2D )
		pFnVSize2D = (UFunction*) UObject::GObjObjects()->Data[ 4452 ];

	UObject_execVSize2D_Parms VSize2D_Parms;

	pFnVSize2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnVSize2D, &VSize2D_Parms, NULL );

	pFnVSize2D->FunctionFlags |= 0x400;
};

// Function Core.Object.VSize
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E1]
// Parameters infos:

void UObject::VSize (FVector In, float &Out)
{
	static UFunction* pFnVSize = NULL;

	if ( ! pFnVSize )
		pFnVSize = (UFunction*) UObject::GObjObjects()->Data[ 4455 ];

	UObject_execVSize_Parms VSize_Parms;
	VSize_Parms.A = In;

	unsigned short NativeIndex = pFnVSize->iNative;
	pFnVSize->iNative = 0;

	pFnVSize->FunctionFlags |= ~0x400;
	this->ProcessEvent ( pFnVSize, &VSize_Parms, NULL );
	pFnVSize->FunctionFlags |= 0x400;
	pFnVSize->iNative = NativeIndex;

	Out = VSize_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_VectorVector
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00E0]
// Parameters infos:

void UObject::SubtractEqual_VectorVector ( )
{
	static UFunction* pFnSubtractEqual_VectorVector = NULL;

	if ( ! pFnSubtractEqual_VectorVector )
		pFnSubtractEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4458 ];

	UObject_execSubtractEqual_VectorVector_Parms SubtractEqual_VectorVector_Parms;

	unsigned short NativeIndex = pFnSubtractEqual_VectorVector->iNative;
	pFnSubtractEqual_VectorVector->iNative = 0;

	pFnSubtractEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractEqual_VectorVector, &SubtractEqual_VectorVector_Parms, NULL );

	pFnSubtractEqual_VectorVector->FunctionFlags |= 0x400;

	pFnSubtractEqual_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.AddEqual_VectorVector
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00DF]
// Parameters infos:

void UObject::AddEqual_VectorVector ( )
{
	static UFunction* pFnAddEqual_VectorVector = NULL;

	if ( ! pFnAddEqual_VectorVector )
		pFnAddEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4461 ];

	UObject_execAddEqual_VectorVector_Parms AddEqual_VectorVector_Parms;

	unsigned short NativeIndex = pFnAddEqual_VectorVector->iNative;
	pFnAddEqual_VectorVector->iNative = 0;

	pFnAddEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddEqual_VectorVector, &AddEqual_VectorVector_Parms, NULL );

	pFnAddEqual_VectorVector->FunctionFlags |= 0x400;

	pFnAddEqual_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.DivideEqual_VectorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00DE]
// Parameters infos:

void UObject::DivideEqual_VectorFloat ( )
{
	static UFunction* pFnDivideEqual_VectorFloat = NULL;

	if ( ! pFnDivideEqual_VectorFloat )
		pFnDivideEqual_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4465 ];

	UObject_execDivideEqual_VectorFloat_Parms DivideEqual_VectorFloat_Parms;

	unsigned short NativeIndex = pFnDivideEqual_VectorFloat->iNative;
	pFnDivideEqual_VectorFloat->iNative = 0;

	pFnDivideEqual_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivideEqual_VectorFloat, &DivideEqual_VectorFloat_Parms, NULL );

	pFnDivideEqual_VectorFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_VectorFloat->iNative = NativeIndex;
};

// Function Core.Object.MultiplyEqual_VectorVector
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0129]
// Parameters infos:

void UObject::MultiplyEqual_VectorVector ( )
{
	static UFunction* pFnMultiplyEqual_VectorVector = NULL;

	if ( ! pFnMultiplyEqual_VectorVector )
		pFnMultiplyEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4469 ];

	UObject_execMultiplyEqual_VectorVector_Parms MultiplyEqual_VectorVector_Parms;

	unsigned short NativeIndex = pFnMultiplyEqual_VectorVector->iNative;
	pFnMultiplyEqual_VectorVector->iNative = 0;

	pFnMultiplyEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_VectorVector, &MultiplyEqual_VectorVector_Parms, NULL );

	pFnMultiplyEqual_VectorVector->FunctionFlags |= 0x400;

	pFnMultiplyEqual_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.MultiplyEqual_VectorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00DD]
// Parameters infos:

void UObject::MultiplyEqual_VectorFloat ( )
{
	static UFunction* pFnMultiplyEqual_VectorFloat = NULL;

	if ( ! pFnMultiplyEqual_VectorFloat )
		pFnMultiplyEqual_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4473 ];

	UObject_execMultiplyEqual_VectorFloat_Parms MultiplyEqual_VectorFloat_Parms;

	unsigned short NativeIndex = pFnMultiplyEqual_VectorFloat->iNative;
	pFnMultiplyEqual_VectorFloat->iNative = 0;

	pFnMultiplyEqual_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_VectorFloat, &MultiplyEqual_VectorFloat_Parms, NULL );

	pFnMultiplyEqual_VectorFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_VectorFloat->iNative = NativeIndex;
};

// Function Core.Object.Cross_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00DC]
// Parameters infos:

void UObject::Cross_VectorVector ( )
{
	static UFunction* pFnCross_VectorVector = NULL;

	if ( ! pFnCross_VectorVector )
		pFnCross_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4477 ];

	UObject_execCross_VectorVector_Parms Cross_VectorVector_Parms;

	unsigned short NativeIndex = pFnCross_VectorVector->iNative;
	pFnCross_VectorVector->iNative = 0;

	pFnCross_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCross_VectorVector, &Cross_VectorVector_Parms, NULL );

	pFnCross_VectorVector->FunctionFlags |= 0x400;

	pFnCross_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.Dot_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00DB]
// Parameters infos:

void UObject::Dot_VectorVector (FVector A, FVector B, float &Out)
{
	static UFunction* pFnDot_VectorVector = NULL;

	if ( ! pFnDot_VectorVector )
		pFnDot_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4481 ];

	UObject_execDot_VectorVector_Parms Dot_VectorVector_Parms;
	Dot_VectorVector_Parms.A = A;
	Dot_VectorVector_Parms.B = B;

	unsigned short NativeIndex = pFnDot_VectorVector->iNative;
	pFnDot_VectorVector->iNative = 0;
	pFnDot_VectorVector->FunctionFlags |= ~0x400;
	this->ProcessEvent ( pFnDot_VectorVector, &Dot_VectorVector_Parms, NULL );
	pFnDot_VectorVector->FunctionFlags |= 0x400;
	pFnDot_VectorVector->iNative = NativeIndex;

	Out = Dot_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00DA]
// Parameters infos:

void UObject::NotEqual_VectorVector ( )
{
	static UFunction* pFnNotEqual_VectorVector = NULL;

	if ( ! pFnNotEqual_VectorVector )
		pFnNotEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4485 ];

	UObject_execNotEqual_VectorVector_Parms NotEqual_VectorVector_Parms;

	unsigned short NativeIndex = pFnNotEqual_VectorVector->iNative;
	pFnNotEqual_VectorVector->iNative = 0;

	pFnNotEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_VectorVector, &NotEqual_VectorVector_Parms, NULL );

	pFnNotEqual_VectorVector->FunctionFlags |= 0x400;

	pFnNotEqual_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D9]
// Parameters infos:

void UObject::EqualEqual_VectorVector ( )
{
	static UFunction* pFnEqualEqual_VectorVector = NULL;

	if ( ! pFnEqualEqual_VectorVector )
		pFnEqualEqual_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4489 ];

	UObject_execEqualEqual_VectorVector_Parms EqualEqual_VectorVector_Parms;

	unsigned short NativeIndex = pFnEqualEqual_VectorVector->iNative;
	pFnEqualEqual_VectorVector->iNative = 0;

	pFnEqualEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_VectorVector, &EqualEqual_VectorVector_Parms, NULL );

	pFnEqualEqual_VectorVector->FunctionFlags |= 0x400;

	pFnEqualEqual_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.GreaterGreater_VectorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0114]
// Parameters infos:

void UObject::GreaterGreater_VectorRotator ( )
{
	static UFunction* pFnGreaterGreater_VectorRotator = NULL;

	if ( ! pFnGreaterGreater_VectorRotator )
		pFnGreaterGreater_VectorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4493 ];

	UObject_execGreaterGreater_VectorRotator_Parms GreaterGreater_VectorRotator_Parms;

	unsigned short NativeIndex = pFnGreaterGreater_VectorRotator->iNative;
	pFnGreaterGreater_VectorRotator->iNative = 0;

	pFnGreaterGreater_VectorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreaterGreater_VectorRotator, &GreaterGreater_VectorRotator_Parms, NULL );

	pFnGreaterGreater_VectorRotator->FunctionFlags |= 0x400;

	pFnGreaterGreater_VectorRotator->iNative = NativeIndex;
};

// Function Core.Object.LessLess_VectorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0113]
// Parameters infos:

void UObject::LessLess_VectorRotator ( )
{
	static UFunction* pFnLessLess_VectorRotator = NULL;

	if ( ! pFnLessLess_VectorRotator )
		pFnLessLess_VectorRotator = (UFunction*) UObject::GObjObjects()->Data[ 4497 ];

	UObject_execLessLess_VectorRotator_Parms LessLess_VectorRotator_Parms;

	unsigned short NativeIndex = pFnLessLess_VectorRotator->iNative;
	pFnLessLess_VectorRotator->iNative = 0;

	pFnLessLess_VectorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLessLess_VectorRotator, &LessLess_VectorRotator_Parms, NULL );

	pFnLessLess_VectorRotator->FunctionFlags |= 0x400;

	pFnLessLess_VectorRotator->iNative = NativeIndex;
};

// Function Core.Object.Subtract_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D8]
// Parameters infos:

void UObject::Subtract_VectorVector ( )
{
	static UFunction* pFnSubtract_VectorVector = NULL;

	if ( ! pFnSubtract_VectorVector )
		pFnSubtract_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4501 ];

	UObject_execSubtract_VectorVector_Parms Subtract_VectorVector_Parms;

	unsigned short NativeIndex = pFnSubtract_VectorVector->iNative;
	pFnSubtract_VectorVector->iNative = 0;

	pFnSubtract_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_VectorVector, &Subtract_VectorVector_Parms, NULL );

	pFnSubtract_VectorVector->FunctionFlags |= 0x400;

	pFnSubtract_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.Add_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D7]
// Parameters infos:

void UObject::Add_VectorVector ( )
{
	static UFunction* pFnAdd_VectorVector = NULL;

	if ( ! pFnAdd_VectorVector )
		pFnAdd_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4505 ];

	UObject_execAdd_VectorVector_Parms Add_VectorVector_Parms;

	unsigned short NativeIndex = pFnAdd_VectorVector->iNative;
	pFnAdd_VectorVector->iNative = 0;

	pFnAdd_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdd_VectorVector, &Add_VectorVector_Parms, NULL );

	pFnAdd_VectorVector->FunctionFlags |= 0x400;

	pFnAdd_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.Divide_VectorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D6]
// Parameters infos:

void UObject::Divide_VectorFloat ( )
{
	static UFunction* pFnDivide_VectorFloat = NULL;

	if ( ! pFnDivide_VectorFloat )
		pFnDivide_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4509 ];

	UObject_execDivide_VectorFloat_Parms Divide_VectorFloat_Parms;

	unsigned short NativeIndex = pFnDivide_VectorFloat->iNative;
	pFnDivide_VectorFloat->iNative = 0;

	pFnDivide_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivide_VectorFloat, &Divide_VectorFloat_Parms, NULL );

	pFnDivide_VectorFloat->FunctionFlags |= 0x400;

	pFnDivide_VectorFloat->iNative = NativeIndex;
};

// Function Core.Object.Multiply_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0128]
// Parameters infos:

void UObject::Multiply_VectorVector ( )
{
	static UFunction* pFnMultiply_VectorVector = NULL;

	if ( ! pFnMultiply_VectorVector )
		pFnMultiply_VectorVector = (UFunction*) UObject::GObjObjects()->Data[ 4513 ];

	UObject_execMultiply_VectorVector_Parms Multiply_VectorVector_Parms;

	unsigned short NativeIndex = pFnMultiply_VectorVector->iNative;
	pFnMultiply_VectorVector->iNative = 0;

	pFnMultiply_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_VectorVector, &Multiply_VectorVector_Parms, NULL );

	pFnMultiply_VectorVector->FunctionFlags |= 0x400;

	pFnMultiply_VectorVector->iNative = NativeIndex;
};

// Function Core.Object.Multiply_FloatVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D5]
// Parameters infos:

void UObject::Multiply_FloatVector ( )
{
	static UFunction* pFnMultiply_FloatVector = NULL;

	if ( ! pFnMultiply_FloatVector )
		pFnMultiply_FloatVector = (UFunction*) UObject::GObjObjects()->Data[ 4517 ];

	UObject_execMultiply_FloatVector_Parms Multiply_FloatVector_Parms;

	unsigned short NativeIndex = pFnMultiply_FloatVector->iNative;
	pFnMultiply_FloatVector->iNative = 0;

	pFnMultiply_FloatVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_FloatVector, &Multiply_FloatVector_Parms, NULL );

	pFnMultiply_FloatVector->FunctionFlags |= 0x400;

	pFnMultiply_FloatVector->iNative = NativeIndex;
};

// Function Core.Object.Multiply_VectorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D4]
// Parameters infos:

void UObject::Multiply_VectorFloat ( )
{
	static UFunction* pFnMultiply_VectorFloat = NULL;

	if ( ! pFnMultiply_VectorFloat )
		pFnMultiply_VectorFloat = (UFunction*) UObject::GObjObjects()->Data[ 4521 ];

	UObject_execMultiply_VectorFloat_Parms Multiply_VectorFloat_Parms;

	unsigned short NativeIndex = pFnMultiply_VectorFloat->iNative;
	pFnMultiply_VectorFloat->iNative = 0;

	pFnMultiply_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_VectorFloat, &Multiply_VectorFloat_Parms, NULL );

	pFnMultiply_VectorFloat->FunctionFlags |= 0x400;

	pFnMultiply_VectorFloat->iNative = NativeIndex;
};

// Function Core.Object.Subtract_PreVector
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x00D3]
// Parameters infos:

void UObject::Subtract_PreVector ( )
{
	static UFunction* pFnSubtract_PreVector = NULL;

	if ( ! pFnSubtract_PreVector )
		pFnSubtract_PreVector = (UFunction*) UObject::GObjObjects()->Data[ 4525 ];

	UObject_execSubtract_PreVector_Parms Subtract_PreVector_Parms;

	unsigned short NativeIndex = pFnSubtract_PreVector->iNative;
	pFnSubtract_PreVector->iNative = 0;

	pFnSubtract_PreVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_PreVector, &Subtract_PreVector_Parms, NULL );

	pFnSubtract_PreVector->FunctionFlags |= 0x400;

	pFnSubtract_PreVector->iNative = NativeIndex;
};

// Function Core.Object.FInterpConstantTo
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::FInterpConstantTo ( )
{
	static UFunction* pFnFInterpConstantTo = NULL;

	if ( ! pFnFInterpConstantTo )
		pFnFInterpConstantTo = (UFunction*) UObject::GObjObjects()->Data[ 4529 ];

	UObject_execFInterpConstantTo_Parms FInterpConstantTo_Parms;

	pFnFInterpConstantTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFInterpConstantTo, &FInterpConstantTo_Parms, NULL );

	pFnFInterpConstantTo->FunctionFlags |= 0x400;
};

// Function Core.Object.FInterpTo
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::FInterpTo ( )
{
	static UFunction* pFnFInterpTo = NULL;

	if ( ! pFnFInterpTo )
		pFnFInterpTo = (UFunction*) UObject::GObjObjects()->Data[ 4271 ];

	UObject_execFInterpTo_Parms FInterpTo_Parms;

	pFnFInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFInterpTo, &FInterpTo_Parms, NULL );

	pFnFInterpTo->FunctionFlags |= 0x400;
};

// Function Core.Object.FPctByRange
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::FPctByRange ( )
{
	static UFunction* pFnFPctByRange = NULL;

	if ( ! pFnFPctByRange )
		pFnFPctByRange = (UFunction*) UObject::GObjObjects()->Data[ 4537 ];

	UObject_execFPctByRange_Parms FPctByRange_Parms;

	this->ProcessEvent ( pFnFPctByRange, &FPctByRange_Parms, NULL );
};

// Function Core.Object.RandRange
// [0x00022103] ( FUNC_Final )
// Parameters infos:

void UObject::RandRange ( )
{
	static UFunction* pFnRandRange = NULL;

	if ( ! pFnRandRange )
		pFnRandRange = (UFunction*) UObject::GObjObjects()->Data[ 4543 ];

	UObject_execRandRange_Parms RandRange_Parms;

	this->ProcessEvent ( pFnRandRange, &RandRange_Parms, NULL );
};

// Function Core.Object.FInterpEaseInOut
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::FInterpEaseInOut ( )
{
	static UFunction* pFnFInterpEaseInOut = NULL;

	if ( ! pFnFInterpEaseInOut )
		pFnFInterpEaseInOut = (UFunction*) UObject::GObjObjects()->Data[ 4548 ];

	UObject_execFInterpEaseInOut_Parms FInterpEaseInOut_Parms;

	pFnFInterpEaseInOut->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFInterpEaseInOut, &FInterpEaseInOut_Parms, NULL );

	pFnFInterpEaseInOut->FunctionFlags |= 0x400;
};

// Function Core.Object.FInterpEaseOut
// [0x00022003] ( FUNC_Final )
// Parameters infos:

void UObject::FInterpEaseOut ( )
{
	static UFunction* pFnFInterpEaseOut = NULL;

	if ( ! pFnFInterpEaseOut )
		pFnFInterpEaseOut = (UFunction*) UObject::GObjObjects()->Data[ 4552 ];

	UObject_execFInterpEaseOut_Parms FInterpEaseOut_Parms;

	this->ProcessEvent ( pFnFInterpEaseOut, &FInterpEaseOut_Parms, NULL );
};

// Function Core.Object.FInterpEaseIn
// [0x00022003] ( FUNC_Final )
// Parameters infos:

void UObject::FInterpEaseIn ( )
{
	static UFunction* pFnFInterpEaseIn = NULL;

	if ( ! pFnFInterpEaseIn )
		pFnFInterpEaseIn = (UFunction*) UObject::GObjObjects()->Data[ 4558 ];

	UObject_execFInterpEaseIn_Parms FInterpEaseIn_Parms;

	this->ProcessEvent ( pFnFInterpEaseIn, &FInterpEaseIn_Parms, NULL );
};

// Function Core.Object.FCubicInterp
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::FCubicInterp ( )
{
	static UFunction* pFnFCubicInterp = NULL;

	if ( ! pFnFCubicInterp )
		pFnFCubicInterp = (UFunction*) UObject::GObjObjects()->Data[ 4564 ];

	UObject_execFCubicInterp_Parms FCubicInterp_Parms;

	pFnFCubicInterp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFCubicInterp, &FCubicInterp_Parms, NULL );

	pFnFCubicInterp->FunctionFlags |= 0x400;
};

// Function Core.Object.FCeil
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::FCeil ( )
{
	static UFunction* pFnFCeil = NULL;

	if ( ! pFnFCeil )
		pFnFCeil = (UFunction*) UObject::GObjObjects()->Data[ 4570 ];

	UObject_execFCeil_Parms FCeil_Parms;

	pFnFCeil->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFCeil, &FCeil_Parms, NULL );

	pFnFCeil->FunctionFlags |= 0x400;
};

// Function Core.Object.FFloor
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::FFloor ( )
{
	static UFunction* pFnFFloor = NULL;

	if ( ! pFnFFloor )
		pFnFFloor = (UFunction*) UObject::GObjObjects()->Data[ 4577 ];

	UObject_execFFloor_Parms FFloor_Parms;

	pFnFFloor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFFloor, &FFloor_Parms, NULL );

	pFnFFloor->FunctionFlags |= 0x400;
};

// Function Core.Object.Round
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C7]
// Parameters infos:

void UObject::Round ( )
{
	static UFunction* pFnRound = NULL;

	if ( ! pFnRound )
		pFnRound = (UFunction*) UObject::GObjObjects()->Data[ 4580 ];

	UObject_execRound_Parms Round_Parms;

	unsigned short NativeIndex = pFnRound->iNative;
	pFnRound->iNative = 0;

	pFnRound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRound, &Round_Parms, NULL );

	pFnRound->FunctionFlags |= 0x400;

	pFnRound->iNative = NativeIndex;
};

// Function Core.Object.Lerp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F7]
// Parameters infos:

void UObject::Lerp ( )
{
	static UFunction* pFnLerp = NULL;

	if ( ! pFnLerp )
		pFnLerp = (UFunction*) UObject::GObjObjects()->Data[ 4583 ];

	UObject_execLerp_Parms Lerp_Parms;

	unsigned short NativeIndex = pFnLerp->iNative;
	pFnLerp->iNative = 0;

	pFnLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLerp, &Lerp_Parms, NULL );

	pFnLerp->FunctionFlags |= 0x400;

	pFnLerp->iNative = NativeIndex;
};

// Function Core.Object.FClamp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F6]
// Parameters infos:

void UObject::FClamp ( )
{
	static UFunction* pFnFClamp = NULL;

	if ( ! pFnFClamp )
		pFnFClamp = (UFunction*) UObject::GObjObjects()->Data[ 4586 ];

	UObject_execFClamp_Parms FClamp_Parms;

	unsigned short NativeIndex = pFnFClamp->iNative;
	pFnFClamp->iNative = 0;

	pFnFClamp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFClamp, &FClamp_Parms, NULL );

	pFnFClamp->FunctionFlags |= 0x400;

	pFnFClamp->iNative = NativeIndex;
};

// Function Core.Object.FMax
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F5]
// Parameters infos:

void UObject::FMax ( )
{
	static UFunction* pFnFMax = NULL;

	if ( ! pFnFMax )
		pFnFMax = (UFunction*) UObject::GObjObjects()->Data[ 4591 ];

	UObject_execFMax_Parms FMax_Parms;

	unsigned short NativeIndex = pFnFMax->iNative;
	pFnFMax->iNative = 0;

	pFnFMax->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFMax, &FMax_Parms, NULL );

	pFnFMax->FunctionFlags |= 0x400;

	pFnFMax->iNative = NativeIndex;
};

// Function Core.Object.FMin
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F4]
// Parameters infos:

void UObject::FMin ( )
{
	static UFunction* pFnFMin = NULL;

	if ( ! pFnFMin )
		pFnFMin = (UFunction*) UObject::GObjObjects()->Data[ 4596 ];

	UObject_execFMin_Parms FMin_Parms;

	unsigned short NativeIndex = pFnFMin->iNative;
	pFnFMin->iNative = 0;

	pFnFMin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFMin, &FMin_Parms, NULL );

	pFnFMin->FunctionFlags |= 0x400;

	pFnFMin->iNative = NativeIndex;
};

// Function Core.Object.FRand
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C3]
// Parameters infos:

void UObject::FRand ( )
{
	static UFunction* pFnFRand = NULL;

	if ( ! pFnFRand )
		pFnFRand = (UFunction*) UObject::GObjObjects()->Data[ 4600 ];

	UObject_execFRand_Parms FRand_Parms;

	unsigned short NativeIndex = pFnFRand->iNative;
	pFnFRand->iNative = 0;

	pFnFRand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFRand, &FRand_Parms, NULL );

	pFnFRand->FunctionFlags |= 0x400;

	pFnFRand->iNative = NativeIndex;
};

// Function Core.Object.Square
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C2]
// Parameters infos:

void UObject::Square ( )
{
	static UFunction* pFnSquare = NULL;

	if ( ! pFnSquare )
		pFnSquare = (UFunction*) UObject::GObjObjects()->Data[ 4604 ];

	UObject_execSquare_Parms Square_Parms;

	unsigned short NativeIndex = pFnSquare->iNative;
	pFnSquare->iNative = 0;

	pFnSquare->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSquare, &Square_Parms, NULL );

	pFnSquare->FunctionFlags |= 0x400;

	pFnSquare->iNative = NativeIndex;
};

// Function Core.Object.Sqrt
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C1]
// Parameters infos:

void UObject::Sqrt ( )
{
	static UFunction* pFnSqrt = NULL;

	if ( ! pFnSqrt )
		pFnSqrt = (UFunction*) UObject::GObjObjects()->Data[ 4606 ];

	UObject_execSqrt_Parms Sqrt_Parms;

	unsigned short NativeIndex = pFnSqrt->iNative;
	pFnSqrt->iNative = 0;

	pFnSqrt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSqrt, &Sqrt_Parms, NULL );

	pFnSqrt->FunctionFlags |= 0x400;

	pFnSqrt->iNative = NativeIndex;
};

// Function Core.Object.Loge
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C0]
// Parameters infos:

void UObject::Loge ( )
{
	static UFunction* pFnLoge = NULL;

	if ( ! pFnLoge )
		pFnLoge = (UFunction*) UObject::GObjObjects()->Data[ 4609 ];

	UObject_execLoge_Parms Loge_Parms;

	unsigned short NativeIndex = pFnLoge->iNative;
	pFnLoge->iNative = 0;

	pFnLoge->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoge, &Loge_Parms, NULL );

	pFnLoge->FunctionFlags |= 0x400;

	pFnLoge->iNative = NativeIndex;
};

// Function Core.Object.Exp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BF]
// Parameters infos:

void UObject::Exp ( )
{
	static UFunction* pFnExp = NULL;

	if ( ! pFnExp )
		pFnExp = (UFunction*) UObject::GObjObjects()->Data[ 4612 ];

	UObject_execExp_Parms Exp_Parms;

	unsigned short NativeIndex = pFnExp->iNative;
	pFnExp->iNative = 0;

	pFnExp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExp, &Exp_Parms, NULL );

	pFnExp->FunctionFlags |= 0x400;

	pFnExp->iNative = NativeIndex;
};

// Function Core.Object.Atan2
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Atan2 ( )
{
	static UFunction* pFnAtan2 = NULL;

	if ( ! pFnAtan2 )
		pFnAtan2 = (UFunction*) UObject::GObjObjects()->Data[ 4615 ];

	UObject_execAtan2_Parms Atan2_Parms;

	pFnAtan2->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtan2, &Atan2_Parms, NULL );

	pFnAtan2->FunctionFlags |= 0x400;
};

// Function Core.Object.Atan
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BE]
// Parameters infos:

void UObject::Atan ( )
{
	static UFunction* pFnAtan = NULL;

	if ( ! pFnAtan )
		pFnAtan = (UFunction*) UObject::GObjObjects()->Data[ 4618 ];

	UObject_execAtan_Parms Atan_Parms;

	unsigned short NativeIndex = pFnAtan->iNative;
	pFnAtan->iNative = 0;

	pFnAtan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAtan, &Atan_Parms, NULL );

	pFnAtan->FunctionFlags |= 0x400;

	pFnAtan->iNative = NativeIndex;
};

// Function Core.Object.Tan
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BD]
// Parameters infos:

void UObject::Tan ( )
{
	static UFunction* pFnTan = NULL;

	if ( ! pFnTan )
		pFnTan = (UFunction*) UObject::GObjObjects()->Data[ 4622 ];

	UObject_execTan_Parms Tan_Parms;

	unsigned short NativeIndex = pFnTan->iNative;
	pFnTan->iNative = 0;

	pFnTan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTan, &Tan_Parms, NULL );

	pFnTan->FunctionFlags |= 0x400;

	pFnTan->iNative = NativeIndex;
};

// Function Core.Object.Acos
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Acos ( )
{
	static UFunction* pFnAcos = NULL;

	if ( ! pFnAcos )
		pFnAcos = (UFunction*) UObject::GObjObjects()->Data[ 3707 ];

	UObject_execAcos_Parms Acos_Parms;

	pFnAcos->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcos, &Acos_Parms, NULL );

	pFnAcos->FunctionFlags |= 0x400;
};

// Function Core.Object.Cos
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BC]
// Parameters infos:

void UObject::Cos ( )
{
	static UFunction* pFnCos = NULL;

	if ( ! pFnCos )
		pFnCos = (UFunction*) UObject::GObjObjects()->Data[ 4627 ];

	UObject_execCos_Parms Cos_Parms;

	unsigned short NativeIndex = pFnCos->iNative;
	pFnCos->iNative = 0;

	pFnCos->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCos, &Cos_Parms, NULL );

	pFnCos->FunctionFlags |= 0x400;

	pFnCos->iNative = NativeIndex;
};

// Function Core.Object.Asin
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::Asin ( )
{
	static UFunction* pFnAsin = NULL;

	if ( ! pFnAsin )
		pFnAsin = (UFunction*) UObject::GObjObjects()->Data[ 4630 ];

	UObject_execAsin_Parms Asin_Parms;

	pFnAsin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAsin, &Asin_Parms, NULL );

	pFnAsin->FunctionFlags |= 0x400;
};

// Function Core.Object.Sin
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BB]
// Parameters infos:

void UObject::Sin ( )
{
	static UFunction* pFnSin = NULL;

	if ( ! pFnSin )
		pFnSin = (UFunction*) UObject::GObjObjects()->Data[ 4633 ];

	UObject_execSin_Parms Sin_Parms;

	unsigned short NativeIndex = pFnSin->iNative;
	pFnSin->iNative = 0;

	pFnSin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSin, &Sin_Parms, NULL );

	pFnSin->FunctionFlags |= 0x400;

	pFnSin->iNative = NativeIndex;
};

// Function Core.Object.Abs
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BA]
// Parameters infos:

void UObject::Abs ( )
{
	static UFunction* pFnAbs = NULL;

	if ( ! pFnAbs )
		pFnAbs = (UFunction*) UObject::GObjObjects()->Data[ 4636 ];

	UObject_execAbs_Parms Abs_Parms;

	unsigned short NativeIndex = pFnAbs->iNative;
	pFnAbs->iNative = 0;

	pFnAbs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAbs, &Abs_Parms, NULL );

	pFnAbs->FunctionFlags |= 0x400;

	pFnAbs->iNative = NativeIndex;
};

// Function Core.Object.SubtractEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B9]
// Parameters infos:

void UObject::SubtractEqual_FloatFloat ( )
{
	static UFunction* pFnSubtractEqual_FloatFloat = NULL;

	if ( ! pFnSubtractEqual_FloatFloat )
		pFnSubtractEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4639 ];

	UObject_execSubtractEqual_FloatFloat_Parms SubtractEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnSubtractEqual_FloatFloat->iNative;
	pFnSubtractEqual_FloatFloat->iNative = 0;

	pFnSubtractEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractEqual_FloatFloat, &SubtractEqual_FloatFloat_Parms, NULL );

	pFnSubtractEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnSubtractEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.AddEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B8]
// Parameters infos:

void UObject::AddEqual_FloatFloat ( )
{
	static UFunction* pFnAddEqual_FloatFloat = NULL;

	if ( ! pFnAddEqual_FloatFloat )
		pFnAddEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4642 ];

	UObject_execAddEqual_FloatFloat_Parms AddEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnAddEqual_FloatFloat->iNative;
	pFnAddEqual_FloatFloat->iNative = 0;

	pFnAddEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddEqual_FloatFloat, &AddEqual_FloatFloat_Parms, NULL );

	pFnAddEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnAddEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.DivideEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B7]
// Parameters infos:

void UObject::DivideEqual_FloatFloat ( )
{
	static UFunction* pFnDivideEqual_FloatFloat = NULL;

	if ( ! pFnDivideEqual_FloatFloat )
		pFnDivideEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4646 ];

	UObject_execDivideEqual_FloatFloat_Parms DivideEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnDivideEqual_FloatFloat->iNative;
	pFnDivideEqual_FloatFloat->iNative = 0;

	pFnDivideEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivideEqual_FloatFloat, &DivideEqual_FloatFloat_Parms, NULL );

	pFnDivideEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.MultiplyEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B6]
// Parameters infos:

void UObject::MultiplyEqual_FloatFloat ( )
{
	static UFunction* pFnMultiplyEqual_FloatFloat = NULL;

	if ( ! pFnMultiplyEqual_FloatFloat )
		pFnMultiplyEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4650 ];

	UObject_execMultiplyEqual_FloatFloat_Parms MultiplyEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnMultiplyEqual_FloatFloat->iNative;
	pFnMultiplyEqual_FloatFloat->iNative = 0;

	pFnMultiplyEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_FloatFloat, &MultiplyEqual_FloatFloat_Parms, NULL );

	pFnMultiplyEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.NotEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B5]
// Parameters infos:

void UObject::NotEqual_FloatFloat ( )
{
	static UFunction* pFnNotEqual_FloatFloat = NULL;

	if ( ! pFnNotEqual_FloatFloat )
		pFnNotEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4654 ];

	UObject_execNotEqual_FloatFloat_Parms NotEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnNotEqual_FloatFloat->iNative;
	pFnNotEqual_FloatFloat->iNative = 0;

	pFnNotEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_FloatFloat, &NotEqual_FloatFloat_Parms, NULL );

	pFnNotEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnNotEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.ComplementEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D2]
// Parameters infos:

void UObject::ComplementEqual_FloatFloat ( )
{
	static UFunction* pFnComplementEqual_FloatFloat = NULL;

	if ( ! pFnComplementEqual_FloatFloat )
		pFnComplementEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4658 ];

	UObject_execComplementEqual_FloatFloat_Parms ComplementEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnComplementEqual_FloatFloat->iNative;
	pFnComplementEqual_FloatFloat->iNative = 0;

	pFnComplementEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnComplementEqual_FloatFloat, &ComplementEqual_FloatFloat_Parms, NULL );

	pFnComplementEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnComplementEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B4]
// Parameters infos:

void UObject::EqualEqual_FloatFloat ( )
{
	static UFunction* pFnEqualEqual_FloatFloat = NULL;

	if ( ! pFnEqualEqual_FloatFloat )
		pFnEqualEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4662 ];

	UObject_execEqualEqual_FloatFloat_Parms EqualEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnEqualEqual_FloatFloat->iNative;
	pFnEqualEqual_FloatFloat->iNative = 0;

	pFnEqualEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_FloatFloat, &EqualEqual_FloatFloat_Parms, NULL );

	pFnEqualEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnEqualEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.GreaterEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B3]
// Parameters infos:

void UObject::GreaterEqual_FloatFloat ( )
{
	static UFunction* pFnGreaterEqual_FloatFloat = NULL;

	if ( ! pFnGreaterEqual_FloatFloat )
		pFnGreaterEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4666 ];

	UObject_execGreaterEqual_FloatFloat_Parms GreaterEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnGreaterEqual_FloatFloat->iNative;
	pFnGreaterEqual_FloatFloat->iNative = 0;

	pFnGreaterEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreaterEqual_FloatFloat, &GreaterEqual_FloatFloat_Parms, NULL );

	pFnGreaterEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnGreaterEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.LessEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B2]
// Parameters infos:

void UObject::LessEqual_FloatFloat ( )
{
	static UFunction* pFnLessEqual_FloatFloat = NULL;

	if ( ! pFnLessEqual_FloatFloat )
		pFnLessEqual_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4670 ];

	UObject_execLessEqual_FloatFloat_Parms LessEqual_FloatFloat_Parms;

	unsigned short NativeIndex = pFnLessEqual_FloatFloat->iNative;
	pFnLessEqual_FloatFloat->iNative = 0;

	pFnLessEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLessEqual_FloatFloat, &LessEqual_FloatFloat_Parms, NULL );

	pFnLessEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnLessEqual_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Greater_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B1]
// Parameters infos:

void UObject::Greater_FloatFloat ( )
{
	static UFunction* pFnGreater_FloatFloat = NULL;

	if ( ! pFnGreater_FloatFloat )
		pFnGreater_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4674 ];

	UObject_execGreater_FloatFloat_Parms Greater_FloatFloat_Parms;

	unsigned short NativeIndex = pFnGreater_FloatFloat->iNative;
	pFnGreater_FloatFloat->iNative = 0;

	pFnGreater_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreater_FloatFloat, &Greater_FloatFloat_Parms, NULL );

	pFnGreater_FloatFloat->FunctionFlags |= 0x400;

	pFnGreater_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Less_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B0]
// Parameters infos:

void UObject::Less_FloatFloat ( )
{
	static UFunction* pFnLess_FloatFloat = NULL;

	if ( ! pFnLess_FloatFloat )
		pFnLess_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4678 ];

	UObject_execLess_FloatFloat_Parms Less_FloatFloat_Parms;

	unsigned short NativeIndex = pFnLess_FloatFloat->iNative;
	pFnLess_FloatFloat->iNative = 0;

	pFnLess_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLess_FloatFloat, &Less_FloatFloat_Parms, NULL );

	pFnLess_FloatFloat->FunctionFlags |= 0x400;

	pFnLess_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Subtract_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AF]
// Parameters infos:

void UObject::Subtract_FloatFloat ( )
{
	static UFunction* pFnSubtract_FloatFloat = NULL;

	if ( ! pFnSubtract_FloatFloat )
		pFnSubtract_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4682 ];

	UObject_execSubtract_FloatFloat_Parms Subtract_FloatFloat_Parms;

	unsigned short NativeIndex = pFnSubtract_FloatFloat->iNative;
	pFnSubtract_FloatFloat->iNative = 0;

	pFnSubtract_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_FloatFloat, &Subtract_FloatFloat_Parms, NULL );

	pFnSubtract_FloatFloat->FunctionFlags |= 0x400;

	pFnSubtract_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Add_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AE]
// Parameters infos:

void UObject::Add_FloatFloat ( )
{
	static UFunction* pFnAdd_FloatFloat = NULL;

	if ( ! pFnAdd_FloatFloat )
		pFnAdd_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4686 ];

	UObject_execAdd_FloatFloat_Parms Add_FloatFloat_Parms;

	unsigned short NativeIndex = pFnAdd_FloatFloat->iNative;
	pFnAdd_FloatFloat->iNative = 0;

	pFnAdd_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdd_FloatFloat, &Add_FloatFloat_Parms, NULL );

	pFnAdd_FloatFloat->FunctionFlags |= 0x400;

	pFnAdd_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Percent_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AD]
// Parameters infos:

void UObject::Percent_FloatFloat ( )
{
	static UFunction* pFnPercent_FloatFloat = NULL;

	if ( ! pFnPercent_FloatFloat )
		pFnPercent_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4690 ];

	UObject_execPercent_FloatFloat_Parms Percent_FloatFloat_Parms;

	unsigned short NativeIndex = pFnPercent_FloatFloat->iNative;
	pFnPercent_FloatFloat->iNative = 0;

	pFnPercent_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPercent_FloatFloat, &Percent_FloatFloat_Parms, NULL );

	pFnPercent_FloatFloat->FunctionFlags |= 0x400;

	pFnPercent_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Divide_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AC]
// Parameters infos:

void UObject::Divide_FloatFloat ( )
{
	static UFunction* pFnDivide_FloatFloat = NULL;

	if ( ! pFnDivide_FloatFloat )
		pFnDivide_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4694 ];

	UObject_execDivide_FloatFloat_Parms Divide_FloatFloat_Parms;

	unsigned short NativeIndex = pFnDivide_FloatFloat->iNative;
	pFnDivide_FloatFloat->iNative = 0;

	pFnDivide_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivide_FloatFloat, &Divide_FloatFloat_Parms, NULL );

	pFnDivide_FloatFloat->FunctionFlags |= 0x400;

	pFnDivide_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Multiply_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AB]
// Parameters infos:

void UObject::Multiply_FloatFloat ( )
{
	static UFunction* pFnMultiply_FloatFloat = NULL;

	if ( ! pFnMultiply_FloatFloat )
		pFnMultiply_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4698 ];

	UObject_execMultiply_FloatFloat_Parms Multiply_FloatFloat_Parms;

	unsigned short NativeIndex = pFnMultiply_FloatFloat->iNative;
	pFnMultiply_FloatFloat->iNative = 0;

	pFnMultiply_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_FloatFloat, &Multiply_FloatFloat_Parms, NULL );

	pFnMultiply_FloatFloat->FunctionFlags |= 0x400;

	pFnMultiply_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.MultiplyMultiply_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AA]
// Parameters infos:

void UObject::MultiplyMultiply_FloatFloat ( )
{
	static UFunction* pFnMultiplyMultiply_FloatFloat = NULL;

	if ( ! pFnMultiplyMultiply_FloatFloat )
		pFnMultiplyMultiply_FloatFloat = (UFunction*) UObject::GObjObjects()->Data[ 4702 ];

	UObject_execMultiplyMultiply_FloatFloat_Parms MultiplyMultiply_FloatFloat_Parms;

	unsigned short NativeIndex = pFnMultiplyMultiply_FloatFloat->iNative;
	pFnMultiplyMultiply_FloatFloat->iNative = 0;

	pFnMultiplyMultiply_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyMultiply_FloatFloat, &MultiplyMultiply_FloatFloat_Parms, NULL );

	pFnMultiplyMultiply_FloatFloat->FunctionFlags |= 0x400;

	pFnMultiplyMultiply_FloatFloat->iNative = NativeIndex;
};

// Function Core.Object.Subtract_PreFloat
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x00A9]
// Parameters infos:

void UObject::Subtract_PreFloat ( )
{
	static UFunction* pFnSubtract_PreFloat = NULL;

	if ( ! pFnSubtract_PreFloat )
		pFnSubtract_PreFloat = (UFunction*) UObject::GObjObjects()->Data[ 4706 ];

	UObject_execSubtract_PreFloat_Parms Subtract_PreFloat_Parms;

	unsigned short NativeIndex = pFnSubtract_PreFloat->iNative;
	pFnSubtract_PreFloat->iNative = 0;

	pFnSubtract_PreFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_PreFloat, &Subtract_PreFloat_Parms, NULL );

	pFnSubtract_PreFloat->FunctionFlags |= 0x400;

	pFnSubtract_PreFloat->iNative = NativeIndex;
};

// Function Core.Object.ToHex
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ToHex ( )
{
	static UFunction* pFnToHex = NULL;

	if ( ! pFnToHex )
		pFnToHex = (UFunction*) UObject::GObjObjects()->Data[ 4710 ];

	UObject_execToHex_Parms ToHex_Parms;

	pFnToHex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToHex, &ToHex_Parms, NULL );

	pFnToHex->FunctionFlags |= 0x400;
};

// Function Core.Object.Clamp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00FB]
// Parameters infos:

void UObject::Clamp ( )
{
	static UFunction* pFnClamp = NULL;

	if ( ! pFnClamp )
		pFnClamp = (UFunction*) UObject::GObjObjects()->Data[ 4713 ];

	UObject_execClamp_Parms Clamp_Parms;

	unsigned short NativeIndex = pFnClamp->iNative;
	pFnClamp->iNative = 0;

	pFnClamp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClamp, &Clamp_Parms, NULL );

	pFnClamp->FunctionFlags |= 0x400;

	pFnClamp->iNative = NativeIndex;
};

// Function Core.Object.Max
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00FA]
// Parameters infos:

void UObject::Max ( )
{
	static UFunction* pFnMax = NULL;

	if ( ! pFnMax )
		pFnMax = (UFunction*) UObject::GObjObjects()->Data[ 4716 ];

	UObject_execMax_Parms Max_Parms;

	unsigned short NativeIndex = pFnMax->iNative;
	pFnMax->iNative = 0;

	pFnMax->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMax, &Max_Parms, NULL );

	pFnMax->FunctionFlags |= 0x400;

	pFnMax->iNative = NativeIndex;
};

// Function Core.Object.Min
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F9]
// Parameters infos:

void UObject::Min ( )
{
	static UFunction* pFnMin = NULL;

	if ( ! pFnMin )
		pFnMin = (UFunction*) UObject::GObjObjects()->Data[ 4721 ];

	UObject_execMin_Parms Min_Parms;

	unsigned short NativeIndex = pFnMin->iNative;
	pFnMin->iNative = 0;

	pFnMin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMin, &Min_Parms, NULL );

	pFnMin->FunctionFlags |= 0x400;

	pFnMin->iNative = NativeIndex;
};

// Function Core.Object.Rand
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00A7]
// Parameters infos:

void UObject::Rand ( )
{
	static UFunction* pFnRand = NULL;

	if ( ! pFnRand )
		pFnRand = (UFunction*) UObject::GObjObjects()->Data[ 4725 ];

	UObject_execRand_Parms Rand_Parms;

	unsigned short NativeIndex = pFnRand->iNative;
	pFnRand->iNative = 0;

	pFnRand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRand, &Rand_Parms, NULL );

	pFnRand->FunctionFlags |= 0x400;

	pFnRand->iNative = NativeIndex;
};

// Function Core.Object.SubtractSubtract_Int
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A6]
// Parameters infos:

void UObject::SubtractSubtract_Int ( )
{
	static UFunction* pFnSubtractSubtract_Int = NULL;

	if ( ! pFnSubtractSubtract_Int )
		pFnSubtractSubtract_Int = (UFunction*) UObject::GObjObjects()->Data[ 4729 ];

	UObject_execSubtractSubtract_Int_Parms SubtractSubtract_Int_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_Int->iNative;
	pFnSubtractSubtract_Int->iNative = 0;

	pFnSubtractSubtract_Int->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractSubtract_Int, &SubtractSubtract_Int_Parms, NULL );

	pFnSubtractSubtract_Int->FunctionFlags |= 0x400;

	pFnSubtractSubtract_Int->iNative = NativeIndex;
};

// Function Core.Object.AddAdd_Int
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A5]
// Parameters infos:

void UObject::AddAdd_Int ( )
{
	static UFunction* pFnAddAdd_Int = NULL;

	if ( ! pFnAddAdd_Int )
		pFnAddAdd_Int = (UFunction*) UObject::GObjObjects()->Data[ 4732 ];

	UObject_execAddAdd_Int_Parms AddAdd_Int_Parms;

	unsigned short NativeIndex = pFnAddAdd_Int->iNative;
	pFnAddAdd_Int->iNative = 0;

	pFnAddAdd_Int->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddAdd_Int, &AddAdd_Int_Parms, NULL );

	pFnAddAdd_Int->FunctionFlags |= 0x400;

	pFnAddAdd_Int->iNative = NativeIndex;
};

// Function Core.Object.SubtractSubtract_PreInt
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x00A4]
// Parameters infos:

void UObject::SubtractSubtract_PreInt ( )
{
	static UFunction* pFnSubtractSubtract_PreInt = NULL;

	if ( ! pFnSubtractSubtract_PreInt )
		pFnSubtractSubtract_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 4735 ];

	UObject_execSubtractSubtract_PreInt_Parms SubtractSubtract_PreInt_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_PreInt->iNative;
	pFnSubtractSubtract_PreInt->iNative = 0;

	pFnSubtractSubtract_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractSubtract_PreInt, &SubtractSubtract_PreInt_Parms, NULL );

	pFnSubtractSubtract_PreInt->FunctionFlags |= 0x400;

	pFnSubtractSubtract_PreInt->iNative = NativeIndex;
};

// Function Core.Object.AddAdd_PreInt
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x00A3]
// Parameters infos:

void UObject::AddAdd_PreInt ( )
{
	static UFunction* pFnAddAdd_PreInt = NULL;

	if ( ! pFnAddAdd_PreInt )
		pFnAddAdd_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 4738 ];

	UObject_execAddAdd_PreInt_Parms AddAdd_PreInt_Parms;

	unsigned short NativeIndex = pFnAddAdd_PreInt->iNative;
	pFnAddAdd_PreInt->iNative = 0;

	pFnAddAdd_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddAdd_PreInt, &AddAdd_PreInt_Parms, NULL );

	pFnAddAdd_PreInt->FunctionFlags |= 0x400;

	pFnAddAdd_PreInt->iNative = NativeIndex;
};

// Function Core.Object.SubtractEqual_IntInt
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A2]
// Parameters infos:

void UObject::SubtractEqual_IntInt ( )
{
	static UFunction* pFnSubtractEqual_IntInt = NULL;

	if ( ! pFnSubtractEqual_IntInt )
		pFnSubtractEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4741 ];

	UObject_execSubtractEqual_IntInt_Parms SubtractEqual_IntInt_Parms;

	unsigned short NativeIndex = pFnSubtractEqual_IntInt->iNative;
	pFnSubtractEqual_IntInt->iNative = 0;

	pFnSubtractEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractEqual_IntInt, &SubtractEqual_IntInt_Parms, NULL );

	pFnSubtractEqual_IntInt->FunctionFlags |= 0x400;

	pFnSubtractEqual_IntInt->iNative = NativeIndex;
};

// Function Core.Object.AddEqual_IntInt
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A1]
// Parameters infos:

void UObject::AddEqual_IntInt ( )
{
	static UFunction* pFnAddEqual_IntInt = NULL;

	if ( ! pFnAddEqual_IntInt )
		pFnAddEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4744 ];

	UObject_execAddEqual_IntInt_Parms AddEqual_IntInt_Parms;

	unsigned short NativeIndex = pFnAddEqual_IntInt->iNative;
	pFnAddEqual_IntInt->iNative = 0;

	pFnAddEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddEqual_IntInt, &AddEqual_IntInt_Parms, NULL );

	pFnAddEqual_IntInt->FunctionFlags |= 0x400;

	pFnAddEqual_IntInt->iNative = NativeIndex;
};

// Function Core.Object.DivideEqual_IntFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A0]
// Parameters infos:

void UObject::DivideEqual_IntFloat ( )
{
	static UFunction* pFnDivideEqual_IntFloat = NULL;

	if ( ! pFnDivideEqual_IntFloat )
		pFnDivideEqual_IntFloat = (UFunction*) UObject::GObjObjects()->Data[ 4748 ];

	UObject_execDivideEqual_IntFloat_Parms DivideEqual_IntFloat_Parms;

	unsigned short NativeIndex = pFnDivideEqual_IntFloat->iNative;
	pFnDivideEqual_IntFloat->iNative = 0;

	pFnDivideEqual_IntFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivideEqual_IntFloat, &DivideEqual_IntFloat_Parms, NULL );

	pFnDivideEqual_IntFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_IntFloat->iNative = NativeIndex;
};

// Function Core.Object.MultiplyEqual_IntFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x009F]
// Parameters infos:

void UObject::MultiplyEqual_IntFloat ( )
{
	static UFunction* pFnMultiplyEqual_IntFloat = NULL;

	if ( ! pFnMultiplyEqual_IntFloat )
		pFnMultiplyEqual_IntFloat = (UFunction*) UObject::GObjObjects()->Data[ 4752 ];

	UObject_execMultiplyEqual_IntFloat_Parms MultiplyEqual_IntFloat_Parms;

	unsigned short NativeIndex = pFnMultiplyEqual_IntFloat->iNative;
	pFnMultiplyEqual_IntFloat->iNative = 0;

	pFnMultiplyEqual_IntFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_IntFloat, &MultiplyEqual_IntFloat_Parms, NULL );

	pFnMultiplyEqual_IntFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_IntFloat->iNative = NativeIndex;
};

// Function Core.Object.Or_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009E]
// Parameters infos:

void UObject::Or_IntInt ( )
{
	static UFunction* pFnOr_IntInt = NULL;

	if ( ! pFnOr_IntInt )
		pFnOr_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4756 ];

	UObject_execOr_IntInt_Parms Or_IntInt_Parms;

	unsigned short NativeIndex = pFnOr_IntInt->iNative;
	pFnOr_IntInt->iNative = 0;

	pFnOr_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOr_IntInt, &Or_IntInt_Parms, NULL );

	pFnOr_IntInt->FunctionFlags |= 0x400;

	pFnOr_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Xor_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009D]
// Parameters infos:

void UObject::Xor_IntInt ( )
{
	static UFunction* pFnXor_IntInt = NULL;

	if ( ! pFnXor_IntInt )
		pFnXor_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4760 ];

	UObject_execXor_IntInt_Parms Xor_IntInt_Parms;

	unsigned short NativeIndex = pFnXor_IntInt->iNative;
	pFnXor_IntInt->iNative = 0;

	pFnXor_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnXor_IntInt, &Xor_IntInt_Parms, NULL );

	pFnXor_IntInt->FunctionFlags |= 0x400;

	pFnXor_IntInt->iNative = NativeIndex;
};

// Function Core.Object.And_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009C]
// Parameters infos:

void UObject::And_IntInt ( )
{
	static UFunction* pFnAnd_IntInt = NULL;

	if ( ! pFnAnd_IntInt )
		pFnAnd_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4764 ];

	UObject_execAnd_IntInt_Parms And_IntInt_Parms;

	unsigned short NativeIndex = pFnAnd_IntInt->iNative;
	pFnAnd_IntInt->iNative = 0;

	pFnAnd_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAnd_IntInt, &And_IntInt_Parms, NULL );

	pFnAnd_IntInt->FunctionFlags |= 0x400;

	pFnAnd_IntInt->iNative = NativeIndex;
};

// Function Core.Object.NotEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009B]
// Parameters infos:

void UObject::NotEqual_IntInt ( )
{
	static UFunction* pFnNotEqual_IntInt = NULL;

	if ( ! pFnNotEqual_IntInt )
		pFnNotEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4768 ];

	UObject_execNotEqual_IntInt_Parms NotEqual_IntInt_Parms;

	unsigned short NativeIndex = pFnNotEqual_IntInt->iNative;
	pFnNotEqual_IntInt->iNative = 0;

	pFnNotEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_IntInt, &NotEqual_IntInt_Parms, NULL );

	pFnNotEqual_IntInt->FunctionFlags |= 0x400;

	pFnNotEqual_IntInt->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009A]
// Parameters infos:

void UObject::EqualEqual_IntInt ( )
{
	static UFunction* pFnEqualEqual_IntInt = NULL;

	if ( ! pFnEqualEqual_IntInt )
		pFnEqualEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4772 ];

	UObject_execEqualEqual_IntInt_Parms EqualEqual_IntInt_Parms;

	unsigned short NativeIndex = pFnEqualEqual_IntInt->iNative;
	pFnEqualEqual_IntInt->iNative = 0;

	pFnEqualEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_IntInt, &EqualEqual_IntInt_Parms, NULL );

	pFnEqualEqual_IntInt->FunctionFlags |= 0x400;

	pFnEqualEqual_IntInt->iNative = NativeIndex;
};

// Function Core.Object.GreaterEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0099]
// Parameters infos:

void UObject::GreaterEqual_IntInt ( )
{
	static UFunction* pFnGreaterEqual_IntInt = NULL;

	if ( ! pFnGreaterEqual_IntInt )
		pFnGreaterEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4776 ];

	UObject_execGreaterEqual_IntInt_Parms GreaterEqual_IntInt_Parms;

	unsigned short NativeIndex = pFnGreaterEqual_IntInt->iNative;
	pFnGreaterEqual_IntInt->iNative = 0;

	pFnGreaterEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreaterEqual_IntInt, &GreaterEqual_IntInt_Parms, NULL );

	pFnGreaterEqual_IntInt->FunctionFlags |= 0x400;

	pFnGreaterEqual_IntInt->iNative = NativeIndex;
};

// Function Core.Object.LessEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0098]
// Parameters infos:

void UObject::LessEqual_IntInt ( )
{
	static UFunction* pFnLessEqual_IntInt = NULL;

	if ( ! pFnLessEqual_IntInt )
		pFnLessEqual_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4780 ];

	UObject_execLessEqual_IntInt_Parms LessEqual_IntInt_Parms;

	unsigned short NativeIndex = pFnLessEqual_IntInt->iNative;
	pFnLessEqual_IntInt->iNative = 0;

	pFnLessEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLessEqual_IntInt, &LessEqual_IntInt_Parms, NULL );

	pFnLessEqual_IntInt->FunctionFlags |= 0x400;

	pFnLessEqual_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Greater_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0097]
// Parameters infos:

void UObject::Greater_IntInt ( )
{
	static UFunction* pFnGreater_IntInt = NULL;

	if ( ! pFnGreater_IntInt )
		pFnGreater_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4784 ];

	UObject_execGreater_IntInt_Parms Greater_IntInt_Parms;

	unsigned short NativeIndex = pFnGreater_IntInt->iNative;
	pFnGreater_IntInt->iNative = 0;

	pFnGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreater_IntInt, &Greater_IntInt_Parms, NULL );

	pFnGreater_IntInt->FunctionFlags |= 0x400;

	pFnGreater_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Less_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0096]
// Parameters infos:

void UObject::Less_IntInt ( )
{
	static UFunction* pFnLess_IntInt = NULL;

	if ( ! pFnLess_IntInt )
		pFnLess_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4788 ];

	UObject_execLess_IntInt_Parms Less_IntInt_Parms;

	unsigned short NativeIndex = pFnLess_IntInt->iNative;
	pFnLess_IntInt->iNative = 0;

	pFnLess_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLess_IntInt, &Less_IntInt_Parms, NULL );

	pFnLess_IntInt->FunctionFlags |= 0x400;

	pFnLess_IntInt->iNative = NativeIndex;
};

// Function Core.Object.GreaterGreaterGreater_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00C4]
// Parameters infos:

void UObject::GreaterGreaterGreater_IntInt ( )
{
	static UFunction* pFnGreaterGreaterGreater_IntInt = NULL;

	if ( ! pFnGreaterGreaterGreater_IntInt )
		pFnGreaterGreaterGreater_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4792 ];

	UObject_execGreaterGreaterGreater_IntInt_Parms GreaterGreaterGreater_IntInt_Parms;

	unsigned short NativeIndex = pFnGreaterGreaterGreater_IntInt->iNative;
	pFnGreaterGreaterGreater_IntInt->iNative = 0;

	pFnGreaterGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreaterGreaterGreater_IntInt, &GreaterGreaterGreater_IntInt_Parms, NULL );

	pFnGreaterGreaterGreater_IntInt->FunctionFlags |= 0x400;

	pFnGreaterGreaterGreater_IntInt->iNative = NativeIndex;
};

// Function Core.Object.GreaterGreater_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0095]
// Parameters infos:

void UObject::GreaterGreater_IntInt ( )
{
	static UFunction* pFnGreaterGreater_IntInt = NULL;

	if ( ! pFnGreaterGreater_IntInt )
		pFnGreaterGreater_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4796 ];

	UObject_execGreaterGreater_IntInt_Parms GreaterGreater_IntInt_Parms;

	unsigned short NativeIndex = pFnGreaterGreater_IntInt->iNative;
	pFnGreaterGreater_IntInt->iNative = 0;

	pFnGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGreaterGreater_IntInt, &GreaterGreater_IntInt_Parms, NULL );

	pFnGreaterGreater_IntInt->FunctionFlags |= 0x400;

	pFnGreaterGreater_IntInt->iNative = NativeIndex;
};

// Function Core.Object.LessLess_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0094]
// Parameters infos:

void UObject::LessLess_IntInt ( )
{
	static UFunction* pFnLessLess_IntInt = NULL;

	if ( ! pFnLessLess_IntInt )
		pFnLessLess_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4800 ];

	UObject_execLessLess_IntInt_Parms LessLess_IntInt_Parms;

	unsigned short NativeIndex = pFnLessLess_IntInt->iNative;
	pFnLessLess_IntInt->iNative = 0;

	pFnLessLess_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLessLess_IntInt, &LessLess_IntInt_Parms, NULL );

	pFnLessLess_IntInt->FunctionFlags |= 0x400;

	pFnLessLess_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Subtract_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0093]
// Parameters infos:

void UObject::Subtract_IntInt ( )
{
	static UFunction* pFnSubtract_IntInt = NULL;

	if ( ! pFnSubtract_IntInt )
		pFnSubtract_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4804 ];

	UObject_execSubtract_IntInt_Parms Subtract_IntInt_Parms;

	unsigned short NativeIndex = pFnSubtract_IntInt->iNative;
	pFnSubtract_IntInt->iNative = 0;

	pFnSubtract_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_IntInt, &Subtract_IntInt_Parms, NULL );

	pFnSubtract_IntInt->FunctionFlags |= 0x400;

	pFnSubtract_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Add_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0092]
// Parameters infos:

void UObject::Add_IntInt ( )
{
	static UFunction* pFnAdd_IntInt = NULL;

	if ( ! pFnAdd_IntInt )
		pFnAdd_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4808 ];

	UObject_execAdd_IntInt_Parms Add_IntInt_Parms;

	unsigned short NativeIndex = pFnAdd_IntInt->iNative;
	pFnAdd_IntInt->iNative = 0;

	pFnAdd_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdd_IntInt, &Add_IntInt_Parms, NULL );

	pFnAdd_IntInt->FunctionFlags |= 0x400;

	pFnAdd_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Percent_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00FD]
// Parameters infos:

void UObject::Percent_IntInt ( )
{
	static UFunction* pFnPercent_IntInt = NULL;

	if ( ! pFnPercent_IntInt )
		pFnPercent_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4812 ];

	UObject_execPercent_IntInt_Parms Percent_IntInt_Parms;

	unsigned short NativeIndex = pFnPercent_IntInt->iNative;
	pFnPercent_IntInt->iNative = 0;

	pFnPercent_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPercent_IntInt, &Percent_IntInt_Parms, NULL );

	pFnPercent_IntInt->FunctionFlags |= 0x400;

	pFnPercent_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Divide_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0091]
// Parameters infos:

void UObject::Divide_IntInt ( )
{
	static UFunction* pFnDivide_IntInt = NULL;

	if ( ! pFnDivide_IntInt )
		pFnDivide_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4816 ];

	UObject_execDivide_IntInt_Parms Divide_IntInt_Parms;

	unsigned short NativeIndex = pFnDivide_IntInt->iNative;
	pFnDivide_IntInt->iNative = 0;

	pFnDivide_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivide_IntInt, &Divide_IntInt_Parms, NULL );

	pFnDivide_IntInt->FunctionFlags |= 0x400;

	pFnDivide_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Multiply_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0090]
// Parameters infos:

void UObject::Multiply_IntInt ( )
{
	static UFunction* pFnMultiply_IntInt = NULL;

	if ( ! pFnMultiply_IntInt )
		pFnMultiply_IntInt = (UFunction*) UObject::GObjObjects()->Data[ 4820 ];

	UObject_execMultiply_IntInt_Parms Multiply_IntInt_Parms;

	unsigned short NativeIndex = pFnMultiply_IntInt->iNative;
	pFnMultiply_IntInt->iNative = 0;

	pFnMultiply_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiply_IntInt, &Multiply_IntInt_Parms, NULL );

	pFnMultiply_IntInt->FunctionFlags |= 0x400;

	pFnMultiply_IntInt->iNative = NativeIndex;
};

// Function Core.Object.Subtract_PreInt
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x008F]
// Parameters infos:

void UObject::Subtract_PreInt ( )
{
	static UFunction* pFnSubtract_PreInt = NULL;

	if ( ! pFnSubtract_PreInt )
		pFnSubtract_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 4824 ];

	UObject_execSubtract_PreInt_Parms Subtract_PreInt_Parms;

	unsigned short NativeIndex = pFnSubtract_PreInt->iNative;
	pFnSubtract_PreInt->iNative = 0;

	pFnSubtract_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtract_PreInt, &Subtract_PreInt_Parms, NULL );

	pFnSubtract_PreInt->FunctionFlags |= 0x400;

	pFnSubtract_PreInt->iNative = NativeIndex;
};

// Function Core.Object.Complement_PreInt
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x008D]
// Parameters infos:

void UObject::Complement_PreInt ( )
{
	static UFunction* pFnComplement_PreInt = NULL;

	if ( ! pFnComplement_PreInt )
		pFnComplement_PreInt = (UFunction*) UObject::GObjObjects()->Data[ 4828 ];

	UObject_execComplement_PreInt_Parms Complement_PreInt_Parms;

	unsigned short NativeIndex = pFnComplement_PreInt->iNative;
	pFnComplement_PreInt->iNative = 0;

	pFnComplement_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnComplement_PreInt, &Complement_PreInt_Parms, NULL );

	pFnComplement_PreInt->FunctionFlags |= 0x400;

	pFnComplement_PreInt->iNative = NativeIndex;
};

// Function Core.Object.SubtractSubtract_Byte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x008C]
// Parameters infos:

void UObject::SubtractSubtract_Byte ( )
{
	static UFunction* pFnSubtractSubtract_Byte = NULL;

	if ( ! pFnSubtractSubtract_Byte )
		pFnSubtractSubtract_Byte = (UFunction*) UObject::GObjObjects()->Data[ 4831 ];

	UObject_execSubtractSubtract_Byte_Parms SubtractSubtract_Byte_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_Byte->iNative;
	pFnSubtractSubtract_Byte->iNative = 0;

	pFnSubtractSubtract_Byte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractSubtract_Byte, &SubtractSubtract_Byte_Parms, NULL );

	pFnSubtractSubtract_Byte->FunctionFlags |= 0x400;

	pFnSubtractSubtract_Byte->iNative = NativeIndex;
};

// Function Core.Object.AddAdd_Byte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x008B]
// Parameters infos:

void UObject::AddAdd_Byte ( )
{
	static UFunction* pFnAddAdd_Byte = NULL;

	if ( ! pFnAddAdd_Byte )
		pFnAddAdd_Byte = (UFunction*) UObject::GObjObjects()->Data[ 4834 ];

	UObject_execAddAdd_Byte_Parms AddAdd_Byte_Parms;

	unsigned short NativeIndex = pFnAddAdd_Byte->iNative;
	pFnAddAdd_Byte->iNative = 0;

	pFnAddAdd_Byte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddAdd_Byte, &AddAdd_Byte_Parms, NULL );

	pFnAddAdd_Byte->FunctionFlags |= 0x400;

	pFnAddAdd_Byte->iNative = NativeIndex;
};

// Function Core.Object.SubtractSubtract_PreByte
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x008A]
// Parameters infos:

void UObject::SubtractSubtract_PreByte ( )
{
	static UFunction* pFnSubtractSubtract_PreByte = NULL;

	if ( ! pFnSubtractSubtract_PreByte )
		pFnSubtractSubtract_PreByte = (UFunction*) UObject::GObjObjects()->Data[ 4837 ];

	UObject_execSubtractSubtract_PreByte_Parms SubtractSubtract_PreByte_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_PreByte->iNative;
	pFnSubtractSubtract_PreByte->iNative = 0;

	pFnSubtractSubtract_PreByte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractSubtract_PreByte, &SubtractSubtract_PreByte_Parms, NULL );

	pFnSubtractSubtract_PreByte->FunctionFlags |= 0x400;

	pFnSubtractSubtract_PreByte->iNative = NativeIndex;
};

// Function Core.Object.AddAdd_PreByte
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x0089]
// Parameters infos:

void UObject::AddAdd_PreByte ( )
{
	static UFunction* pFnAddAdd_PreByte = NULL;

	if ( ! pFnAddAdd_PreByte )
		pFnAddAdd_PreByte = (UFunction*) UObject::GObjObjects()->Data[ 4840 ];

	UObject_execAddAdd_PreByte_Parms AddAdd_PreByte_Parms;

	unsigned short NativeIndex = pFnAddAdd_PreByte->iNative;
	pFnAddAdd_PreByte->iNative = 0;

	pFnAddAdd_PreByte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddAdd_PreByte, &AddAdd_PreByte_Parms, NULL );

	pFnAddAdd_PreByte->FunctionFlags |= 0x400;

	pFnAddAdd_PreByte->iNative = NativeIndex;
};

// Function Core.Object.SubtractEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0088]
// Parameters infos:

void UObject::SubtractEqual_ByteByte ( )
{
	static UFunction* pFnSubtractEqual_ByteByte = NULL;

	if ( ! pFnSubtractEqual_ByteByte )
		pFnSubtractEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 4843 ];

	UObject_execSubtractEqual_ByteByte_Parms SubtractEqual_ByteByte_Parms;

	unsigned short NativeIndex = pFnSubtractEqual_ByteByte->iNative;
	pFnSubtractEqual_ByteByte->iNative = 0;

	pFnSubtractEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSubtractEqual_ByteByte, &SubtractEqual_ByteByte_Parms, NULL );

	pFnSubtractEqual_ByteByte->FunctionFlags |= 0x400;

	pFnSubtractEqual_ByteByte->iNative = NativeIndex;
};

// Function Core.Object.AddEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0087]
// Parameters infos:

void UObject::AddEqual_ByteByte ( )
{
	static UFunction* pFnAddEqual_ByteByte = NULL;

	if ( ! pFnAddEqual_ByteByte )
		pFnAddEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 4846 ];

	UObject_execAddEqual_ByteByte_Parms AddEqual_ByteByte_Parms;

	unsigned short NativeIndex = pFnAddEqual_ByteByte->iNative;
	pFnAddEqual_ByteByte->iNative = 0;

	pFnAddEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddEqual_ByteByte, &AddEqual_ByteByte_Parms, NULL );

	pFnAddEqual_ByteByte->FunctionFlags |= 0x400;

	pFnAddEqual_ByteByte->iNative = NativeIndex;
};

// Function Core.Object.DivideEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0086]
// Parameters infos:

void UObject::DivideEqual_ByteByte ( )
{
	static UFunction* pFnDivideEqual_ByteByte = NULL;

	if ( ! pFnDivideEqual_ByteByte )
		pFnDivideEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 4850 ];

	UObject_execDivideEqual_ByteByte_Parms DivideEqual_ByteByte_Parms;

	unsigned short NativeIndex = pFnDivideEqual_ByteByte->iNative;
	pFnDivideEqual_ByteByte->iNative = 0;

	pFnDivideEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDivideEqual_ByteByte, &DivideEqual_ByteByte_Parms, NULL );

	pFnDivideEqual_ByteByte->FunctionFlags |= 0x400;

	pFnDivideEqual_ByteByte->iNative = NativeIndex;
};

// Function Core.Object.MultiplyEqual_ByteFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00C6]
// Parameters infos:

void UObject::MultiplyEqual_ByteFloat ( )
{
	static UFunction* pFnMultiplyEqual_ByteFloat = NULL;

	if ( ! pFnMultiplyEqual_ByteFloat )
		pFnMultiplyEqual_ByteFloat = (UFunction*) UObject::GObjObjects()->Data[ 4854 ];

	UObject_execMultiplyEqual_ByteFloat_Parms MultiplyEqual_ByteFloat_Parms;

	unsigned short NativeIndex = pFnMultiplyEqual_ByteFloat->iNative;
	pFnMultiplyEqual_ByteFloat->iNative = 0;

	pFnMultiplyEqual_ByteFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_ByteFloat, &MultiplyEqual_ByteFloat_Parms, NULL );

	pFnMultiplyEqual_ByteFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_ByteFloat->iNative = NativeIndex;
};

// Function Core.Object.MultiplyEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0085]
// Parameters infos:

void UObject::MultiplyEqual_ByteByte ( )
{
	static UFunction* pFnMultiplyEqual_ByteByte = NULL;

	if ( ! pFnMultiplyEqual_ByteByte )
		pFnMultiplyEqual_ByteByte = (UFunction*) UObject::GObjObjects()->Data[ 4858 ];

	UObject_execMultiplyEqual_ByteByte_Parms MultiplyEqual_ByteByte_Parms;

	unsigned short NativeIndex = pFnMultiplyEqual_ByteByte->iNative;
	pFnMultiplyEqual_ByteByte->iNative = 0;

	pFnMultiplyEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMultiplyEqual_ByteByte, &MultiplyEqual_ByteByte_Parms, NULL );

	pFnMultiplyEqual_ByteByte->FunctionFlags |= 0x400;

	pFnMultiplyEqual_ByteByte->iNative = NativeIndex;
};

// Function Core.Object.OrOr_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0084]
// Parameters infos:

void UObject::OrOr_BoolBool ( )
{
	static UFunction* pFnOrOr_BoolBool = NULL;

	if ( ! pFnOrOr_BoolBool )
		pFnOrOr_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 4862 ];

	UObject_execOrOr_BoolBool_Parms OrOr_BoolBool_Parms;

	unsigned short NativeIndex = pFnOrOr_BoolBool->iNative;
	pFnOrOr_BoolBool->iNative = 0;

	pFnOrOr_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOrOr_BoolBool, &OrOr_BoolBool_Parms, NULL );

	pFnOrOr_BoolBool->FunctionFlags |= 0x400;

	pFnOrOr_BoolBool->iNative = NativeIndex;
};

// Function Core.Object.XorXor_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0083]
// Parameters infos:

void UObject::XorXor_BoolBool ( )
{
	static UFunction* pFnXorXor_BoolBool = NULL;

	if ( ! pFnXorXor_BoolBool )
		pFnXorXor_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 4866 ];

	UObject_execXorXor_BoolBool_Parms XorXor_BoolBool_Parms;

	unsigned short NativeIndex = pFnXorXor_BoolBool->iNative;
	pFnXorXor_BoolBool->iNative = 0;

	pFnXorXor_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnXorXor_BoolBool, &XorXor_BoolBool_Parms, NULL );

	pFnXorXor_BoolBool->FunctionFlags |= 0x400;

	pFnXorXor_BoolBool->iNative = NativeIndex;
};

// Function Core.Object.AndAnd_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0082]
// Parameters infos:

void UObject::AndAnd_BoolBool ( )
{
	static UFunction* pFnAndAnd_BoolBool = NULL;

	if ( ! pFnAndAnd_BoolBool )
		pFnAndAnd_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 4870 ];

	UObject_execAndAnd_BoolBool_Parms AndAnd_BoolBool_Parms;

	unsigned short NativeIndex = pFnAndAnd_BoolBool->iNative;
	pFnAndAnd_BoolBool->iNative = 0;

	pFnAndAnd_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAndAnd_BoolBool, &AndAnd_BoolBool_Parms, NULL );

	pFnAndAnd_BoolBool->FunctionFlags |= 0x400;

	pFnAndAnd_BoolBool->iNative = NativeIndex;
};

// Function Core.Object.NotEqual_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00F3]
// Parameters infos:

void UObject::NotEqual_BoolBool ( )
{
	static UFunction* pFnNotEqual_BoolBool = NULL;

	if ( ! pFnNotEqual_BoolBool )
		pFnNotEqual_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 4874 ];

	UObject_execNotEqual_BoolBool_Parms NotEqual_BoolBool_Parms;

	unsigned short NativeIndex = pFnNotEqual_BoolBool->iNative;
	pFnNotEqual_BoolBool->iNative = 0;

	pFnNotEqual_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotEqual_BoolBool, &NotEqual_BoolBool_Parms, NULL );

	pFnNotEqual_BoolBool->FunctionFlags |= 0x400;

	pFnNotEqual_BoolBool->iNative = NativeIndex;
};

// Function Core.Object.EqualEqual_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00F2]
// Parameters infos:

void UObject::EqualEqual_BoolBool ( )
{
	static UFunction* pFnEqualEqual_BoolBool = NULL;

	if ( ! pFnEqualEqual_BoolBool )
		pFnEqualEqual_BoolBool = (UFunction*) UObject::GObjObjects()->Data[ 4878 ];

	UObject_execEqualEqual_BoolBool_Parms EqualEqual_BoolBool_Parms;

	unsigned short NativeIndex = pFnEqualEqual_BoolBool->iNative;
	pFnEqualEqual_BoolBool->iNative = 0;

	pFnEqualEqual_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEqualEqual_BoolBool, &EqualEqual_BoolBool_Parms, NULL );

	pFnEqualEqual_BoolBool->FunctionFlags |= 0x400;

	pFnEqualEqual_BoolBool->iNative = NativeIndex;
};

// Function Core.Object.Not_PreBool
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x0081]
// Parameters infos:

void UObject::Not_PreBool ( )
{
	static UFunction* pFnNot_PreBool = NULL;

	if ( ! pFnNot_PreBool )
		pFnNot_PreBool = (UFunction*) UObject::GObjObjects()->Data[ 4882 ];

	UObject_execNot_PreBool_Parms Not_PreBool_Parms;

	unsigned short NativeIndex = pFnNot_PreBool->iNative;
	pFnNot_PreBool->iNative = 0;

	pFnNot_PreBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNot_PreBool, &Not_PreBool_Parms, NULL );

	pFnNot_PreBool->FunctionFlags |= 0x400;

	pFnNot_PreBool->iNative = NativeIndex;
};

// Function Core.DistributionVector.GetVectorValue
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UDistributionVector::GetVectorValue ( )
{
	static UFunction* pFnGetVectorValue = NULL;

	if ( ! pFnGetVectorValue )
		pFnGetVectorValue = (UFunction*) UObject::GObjObjects()->Data[ 5113 ];

	UDistributionVector_execGetVectorValue_Parms GetVectorValue_Parms;

	pFnGetVectorValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVectorValue, &GetVectorValue_Parms, NULL );

	pFnGetVectorValue->FunctionFlags |= 0x400;
};

// Function Core.DistributionFloat.GetFloatValue
// [0x00024400] ( FUNC_Native )
// Parameters infos:

void UDistributionFloat::GetFloatValue ( )
{
	static UFunction* pFnGetFloatValue = NULL;

	if ( ! pFnGetFloatValue )
		pFnGetFloatValue = (UFunction*) UObject::GObjObjects()->Data[ 5103 ];

	UDistributionFloat_execGetFloatValue_Parms GetFloatValue_Parms;

	pFnGetFloatValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFloatValue, &GetFloatValue_Parms, NULL );

	pFnGetFloatValue->FunctionFlags |= 0x400;
};

// Function Core.HelpCommandlet.Main
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UHelpCommandlet::eventMain ( )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = (UFunction*) UObject::GObjObjects()->Data[ 5129 ];

	UHelpCommandlet_eventMain_Parms Main_Parms;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );
};

// Function Core.Commandlet.Main
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UCommandlet::eventMain ( )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = (UFunction*) UObject::GObjObjects()->Data[ 5092 ];

	UCommandlet_eventMain_Parms Main_Parms;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif