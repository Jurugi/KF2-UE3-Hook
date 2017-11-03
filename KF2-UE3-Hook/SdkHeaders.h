/*
#############################################################################################
# Killing Floor 2 (1.8787) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SdkHeaders.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

//#define GObjects			0x7FF616EBC800
//#define GNames			0x7FF616EBC750
extern unsigned long long GObjects;
extern unsigned long long GNames;

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template< class T > struct TArray 
{ 
public: 
	T* Data; 
	int Count; 
	int Max; 

public: 
	TArray() 
	{ 
		Data = NULL; 
		Count = Max = 0; 
	}; 

public: 
	int Num() 
	{ 
		return this->Count; 
	}; 

	T& operator() ( int i ) 
	{ 
		return this->Data[ i ]; 
	}; 

	const T& operator() ( int i ) const 
	{ 
		return this->Data[ i ]; 
	}; 

	void Add ( T InputData ) 
	{ 
		Data = (T*) realloc ( Data, sizeof ( T ) * ( Count + 1 ) ); 
		Data[ Count++ ] = InputData; 
		Max = Count; 
	}; 

	void Clear() 
	{ 
		free ( Data ); 
		Count = Max = 0; 
	}; 
}; 

struct FNameEntry 
{ 
	unsigned char	UnknownData00[ 0x14 ]; 
	char			Name[ 0x10 ]; 
}; 

struct FName 
{ 
	int				Index; 
	unsigned char	unknownData00[ 0x4 ]; 

	FName() : Index ( 0 ) {}; 

	FName ( int i ) : Index ( i ) {}; 

	~FName() {}; 

	FName ( char* FindName ) 
	{ 
		static TArray< int > NameCache; 

		for ( int i = 0; i < NameCache.Count; ++i ) 
		{ 
		if ( ! strcmp ( this->Names()->Data[ NameCache ( i ) ]->Name, FindName ) ) 
			{ 
				Index = NameCache ( i ); 
				return; 
			} 
		} 

		for ( int i = 0; i < this->Names()->Count; ++i ) 
		{ 
			if ( this->Names()->Data[ i ] ) 
			{ 
				if ( ! strcmp ( this->Names()->Data[ i ]->Name, FindName ) ) 
				{ 
					NameCache.Add ( i ); 
					Index = i; 
				} 
			} 
		} 
	}; 

	static TArray< FNameEntry* >* Names() 
	{ 
		return (TArray< FNameEntry* >*) GNames; 
	}; 

	char* GetName() 
	{ 
		return this->Names()->Data[ Index ]->Name; 
	}; 

	bool operator == ( const FName& A ) const 
	{ 
		return ( Index == A.Index ); 
	}; 
}; 

struct FString : public TArray< wchar_t > 
{ 
	FString() {}; 

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
}; 

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK_HEADERS\Core_structs.h"
#include "SDK_HEADERS\Core_classes.h"
#include "SDK_HEADERS\Core_f_structs.h"
#include "SDK_HEADERS\Core_functions.h"
#include "SDK_HEADERS\Engine_structs.h"
#include "SDK_HEADERS\Engine_classes.h"
#include "SDK_HEADERS\Engine_f_structs.h"
#include "SDK_HEADERS\Engine_functions.h"
#include "SDK_HEADERS\GameFramework_structs.h"
#include "SDK_HEADERS\GameFramework_classes.h"
#include "SDK_HEADERS\GameFramework_f_structs.h"
#include "SDK_HEADERS\GameFramework_functions.h"
#include "SDK_HEADERS\BaseAI_structs.h"
#include "SDK_HEADERS\BaseAI_classes.h"
#include "SDK_HEADERS\BaseAI_f_structs.h"
#include "SDK_HEADERS\BaseAI_functions.h"
#include "SDK_HEADERS\IpDrv_structs.h"
#include "SDK_HEADERS\IpDrv_classes.h"
#include "SDK_HEADERS\IpDrv_f_structs.h"
#include "SDK_HEADERS\IpDrv_functions.h"
#include "SDK_HEADERS\XAudio2_structs.h"
#include "SDK_HEADERS\XAudio2_classes.h"
#include "SDK_HEADERS\XAudio2_f_structs.h"
#include "SDK_HEADERS\XAudio2_functions.h"
#include "SDK_HEADERS\GFxUI_structs.h"
#include "SDK_HEADERS\GFxUI_classes.h"
#include "SDK_HEADERS\GFxUI_f_structs.h"
#include "SDK_HEADERS\GFxUI_functions.h"
#include "SDK_HEADERS\AkAudio_structs.h"
#include "SDK_HEADERS\AkAudio_classes.h"
#include "SDK_HEADERS\AkAudio_f_structs.h"
#include "SDK_HEADERS\AkAudio_functions.h"
#include "SDK_HEADERS\WinDrv_structs.h"
#include "SDK_HEADERS\WinDrv_classes.h"
#include "SDK_HEADERS\WinDrv_f_structs.h"
#include "SDK_HEADERS\WinDrv_functions.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_structs.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_classes.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_f_structs.h"
#include "SDK_HEADERS\OnlineSubsystemSteamworks_functions.h"
#include "SDK_HEADERS\KFGame_structs.h"
#include "SDK_HEADERS\KFGame_classes.h"
#include "SDK_HEADERS\KFGame_f_structs.h"
#include "SDK_HEADERS\KFGame_functions.h"
#include "SDK_HEADERS\kfgamecontent_structs.h"
#include "SDK_HEADERS\kfgamecontent_classes.h"
#include "SDK_HEADERS\kfgamecontent_f_structs.h"
#include "SDK_HEADERS\kfgamecontent_functions.h"


/*
# ========================================================================================= #
# Math
# ========================================================================================= #
*/
FVector inline RotationToVector(FRotator Rot)
{
	FVector Vec;
	float fYaw = Rot.Yaw * CONST_UnrRotToRad;
	float fPitch = Rot.Pitch * CONST_UnrRotToRad;
	float fCosPitch = cos(fPitch);
	Vec.X = cos(fYaw) * fCosPitch;
	Vec.Y = sin(fYaw) * fCosPitch;
	Vec.Z = sin(fPitch);
	return Vec;
}
FRotator inline VectorToRotation(FVector Vec)
{
	FRotator rRotation;
	rRotation.Yaw = atan2(Vec.Y, Vec.X) * CONST_RadToUnrRot;
	rRotation.Pitch = atan2(Vec.Z, sqrt((Vec.X * Vec.X) + (Vec.Y * Vec.Y))) * CONST_RadToUnrRot;
	rRotation.Roll = 0;
	return rRotation;
}
FVector inline VectorSubtract(FVector Vector1, FVector Vector2)
{
	FVector Vec;
	Vec.X = Vector1.X - Vector2.X;
	Vec.Y = Vector1.Y - Vector2.Y;
	Vec.Z = Vector1.Z - Vector2.Z;
	return Vec;
}
FVector inline VectorAdd(FVector Vector1, FVector Vector2)
{
	FVector Vec;
	Vec.X = Vector1.X + Vector2.X;
	Vec.Y = Vector1.Y + Vector2.Y;
	Vec.Z = Vector1.Z + Vector2.Z;
	return Vec;
}
FRotator inline RotatorSubtract(FRotator Vector1, FRotator Vector2)
{
	FRotator Vec;
	Vec.Pitch = Vector1.Pitch - Vector2.Pitch;
	Vec.Yaw = Vector1.Yaw - Vector2.Yaw;
	Vec.Roll = Vector1.Roll - Vector2.Roll;
	return Vec;
}
FRotator inline RotatorAdd(FRotator Vector1, FRotator Vector2)
{
	FRotator Vec;
	Vec.Pitch = Vector1.Pitch + Vector2.Pitch;
	Vec.Yaw = Vector1.Yaw + Vector2.Yaw;
	Vec.Roll = Vector1.Roll + Vector2.Roll;
	return Vec;
}
FRotator inline LimitRotation(UCanvas* pCanvas, FRotator rStartRotation, FRotator rEndRotation)
{
	int nMaxRotation = 360;

	FRotator rDeltaRotation;
	pCanvas->Normalize(RotatorSubtract(rEndRotation, rStartRotation), rDeltaRotation);

	// yaw
	if (rDeltaRotation.Yaw > nMaxRotation) { rDeltaRotation.Yaw = nMaxRotation; }
	else if (rDeltaRotation.Yaw < -nMaxRotation) { rDeltaRotation.Yaw = -nMaxRotation; }

	// pitch
	if (rDeltaRotation.Pitch > nMaxRotation) { rDeltaRotation.Pitch = nMaxRotation; }
	else if (rDeltaRotation.Pitch < -nMaxRotation) { rDeltaRotation.Pitch = -nMaxRotation; }

	// roll
	//if ( rDeltaRotation.Roll > nMaxRotation  ) { rDeltaRotation.Roll = nMaxRotation; }
	//else if ( rDeltaRotation.Roll < -nMaxRotation ) { rDeltaRotation.Roll = -nMaxRotation; }

	return RotatorAdd(rStartRotation, rDeltaRotation);
}

/*
# ========================================================================================= #
# Custom
# ========================================================================================= #
*/
class gUnrealInfo
{
public:
	UWorld* GWorld;
	UEngine* gEngine;
	UCanvas* Canvas;
	AKFPlayerController* gPlayerController;
	AKFPawn* gPlayerPawn;
	UKFOnlineStatsWrite* gOnlineStats;
	ULocalPlayer* gLocalPlayer;
	float DeltaTime;
	FVector  MyCameraLocation;
	FRotator MyCameraRotation;
	FVector2D ViewportSize;
	BOOLEAN Initialize;
	BOOLEAN Features;
	BOOLEAN Recoil;
	gUnrealInfo() {
		GWorld = 0;
		gEngine = 0;
		Canvas = 0;
		gPlayerController = 0;
		gPlayerPawn = 0;
		gOnlineStats = 0;
		gLocalPlayer = 0;
		DeltaTime = 0;
		MyCameraLocation = FVector();
		MyCameraRotation = FRotator();
		ViewportSize = FVector2D();
		Initialize = 0;
		Features = 0;
	}
};

// CalcViewAngle
float inline GetViewAngle(UCanvas* Canvas, FVector vPawnLocation, FVector vViewLocation, FRotator rViewRotation)
{
	float fAngle;
	float fDeltaSize;
	FVector vDelta = VectorSubtract(vPawnLocation, vViewLocation);
	Canvas->VSize(vDelta, fDeltaSize);
	FVector vDeltaDivDeltaSize;
	vDeltaDivDeltaSize.X = vDelta.X / fDeltaSize;
	vDeltaDivDeltaSize.Y = vDelta.Y / fDeltaSize;
	vDeltaDivDeltaSize.Z = vDelta.Z / fDeltaSize;
	FVector vViewRotationToVector = RotationToVector(rViewRotation);
	Canvas->Dot_VectorVector(vDeltaDivDeltaSize, vViewRotationToVector, fAngle);
	return fAngle;
}

// Return true if fAngle is within range of fMaxAngle (FOV Check)
bool inline CheckAngle(float fAngle, float fMaxAngle)
{
	return (fAngle > cos(fMaxAngle * CONST_Pi / 360.0f));
}

/*
# ========================================================================================= #
# Useless functions and placeholders
# ========================================================================================= #
*/
// todo experiment with using func = UObject::FindObject< UFunction >( "Function Core.Object.IsZero" ); rather than indexes to improve dynamic usage
/*
// Not working yet
bool GetKeyPressed(UCanvas * Canvas)
{
gUE.gEngine->GameViewport->HandleInputKey;
//if (Canvas && gUE.Viewport->Input && Canvas->Viewport->Input->KeyDown(Key)) return true;
//return false;
return false;
}

// Not needed..
FVector WorldToScreen(UCanvas* Canvas, FVector WorldLocation, FVector &Out)//Helios
{
static float PI = 3.1415926535897932f;
if (!gUE.gPlayerController || !gUE.gPlayerController->PlayerCamera) return{ 0, 0, 0 };

FVector MyCameraLocation = gUE.gPlayerController->PlayerCamera->Location;
FRotator MyCameraRotation = gUE.gPlayerController->PlayerCamera->Rotation;

FVector X, Y, Z, D;
Canvas->GetAxes(MyCameraRotation, X, Y, Z);

D.X = WorldLocation.X - MyCameraLocation.X;
D.Y = WorldLocation.Y - MyCameraLocation.Y;
D.Z = WorldLocation.Z - MyCameraLocation.Z;

float DP1 = gUE.gPlayerController->Dot_VectorVector(D, Y);
float DP2 = gUE.gPlayerController->Dot_VectorVector(D, X);
float DP3 = gUE.gPlayerController->Dot_VectorVector(D, Z);

// check if the vector is behind the camera
//if (DP2 < 0.01f) return{ 0, 0, 0 };

Out.X = (Canvas->ClipX / 2.f) + (DP1)*((Canvas->ClipX / 2.f) / tan(gUE.gPlayerController->DefaultFOV*PI / 360.f)) / DP2;
Out.Y = (Canvas->ClipY / 2.f) + (-DP3)*((Canvas->ClipX / 2.f) / tan(gUE.gPlayerController->DefaultFOV*PI / 360.f)) / DP2;
Out.Z = 0;
return Out;
}
*/

/*void GetCameraLocation(UCanvas* pCanvas) // not working, using better way
{
static UFunction* pFnGetPlayerViewPoint = NULL;
if (!pFnGetPlayerViewPoint) pFnGetPlayerViewPoint = (UFunction*)UObject::GObjObjects()->Data[12748];

AAIController_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

if (pFnGetPlayerViewPoint)
{
pCanvas->ProcessEvent(pFnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL);
gUE.MyCameraLocation = GetPlayerViewPoint_Parms.out_Location;
gUE.MyCameraRotation = GetPlayerViewPoint_Parms.out_Rotation;
}
}*/