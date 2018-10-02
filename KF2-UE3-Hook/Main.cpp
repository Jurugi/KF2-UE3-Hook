/*
Killing Floor 2 UE3 Hook

// gObjects
// 3B ?? ?? ?? ?? ?? 7D ?? 48 8B C8 48 8B ?? ?? ?? ?? ?? 48 8B 0C C8 E8 ?? ?? ?? ?? 48 8B C8 gObjects counter at some addr+8 and gObjects at addr

// gNames
// 48 8B 0D ?? ?? ?? ?? 48 83 3C F9

// uWorld
// 48 8B 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 85 C0 74 10 83 B8
*/

// Includes
#include "Main.h"
#include "Logging.h"
#include "Signatures.h"
#include "Misc.h"
#include "SdkHeaders.h"

// Globals
HMODULE g_hInst = 0;
unsigned long long GObjects = 0;
unsigned long long GNames = 0;
gUnrealInfo gUE;

// Misc Functions (mostly KF1-UE2 hack functions converted to UE3)
bool IsValidTarget(APawn* pTarget)
{
	//Validate pTarget by checking some of its members
	return pTarget != nullptr
		&& !pTarget->bDeleteMe
		&& pTarget->Mesh != nullptr
		&& pTarget->Health > 0;
}

UObject* GetInstanceOf(UClass* Class)
{
	static UObject* ObjectInstance;

	ObjectInstance = NULL;

	for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
	{
		UObject* CheckObject = (*UObject::GObjObjects())(i);

		if (CheckObject && CheckObject->IsA(Class))
		{
			if (!strstr(CheckObject->GetFullName(), "Default"))
				ObjectInstance = CheckObject;
		}
	}

	return ObjectInstance;
};

void SetRotation(UCanvas* Canvas, AKFPawn_Monster* Target)
{
	FRotator AimRotation;
	FRotator AimRotation_Temp;
	FVector AimLocation;
	FVector  MyLocation = FVector();
	FRotator MyRotation = FRotator();
	FVector Velocity = FVector();
	FVector Difference = FVector();
	
	if (!Target || !gUE.gPlayerController || !gUE.gPlayerController->PlayerCamera) return;
	
	// Do FOV calculations here
	
	// Get head location
	Target->Mesh->GetBoneLocation(Target->HeadBoneName, AimLocation); //headbone is just named "head" for all zeds
	AimLocation.Z += (1.5f * Target->CurrentHeadScale); // scale of the head
	
	// Use velocity based prediction here
	
	// one way to set player rotation is here
	gUE.gPlayerController->Rotation = AimRotation;
}


// Hooks
void PostRenderMenu(UCanvas* pCanvas)
{
	if (!pCanvas) return;

	// Draw text/menus here that will show up on all in-game menus
	pCanvas->DrawTextA(TEXT(L"KF2"), 0.8f, 0.8f);
}

void PostRender(UCanvas* pCanvas)
{
	//Wait for gObjects to load
	if (!gUE.Initialize)
	{
		if (UObject::GObjObjects() && UObject::GObjObjects()->Count < 100000) return;

		// Get resolution once Engine is loaded
		if (gUE.gEngine)
		{
			gUE.gEngine->GameViewport->GetViewportSize(gUE.ViewportSize);
			gUE.Initialize = TRUE;
		}
	}

	//Wait for Engine to load
	if (!gUE.gEngine)
	{
		gUE.gEngine = (UEngine*)GetInstanceOf(UEngine::StaticClass());
		return;
	}

	// Check Canvas
	if (!pCanvas)
	{
		if (gUE.Canvas) pCanvas = gUE.Canvas;
		else
		{
			pCanvas = (UCanvas*)GetInstanceOf(UCanvas::StaticClass());
			if (!pCanvas) return;
		}
	}
	gUE.Canvas = pCanvas;

	// Turn off everything until you press INS
	if (GetAsyncKeyState(VK_INSERT) & 1) gUE.Features = !gUE.Features;
	if (!gUE.Features) return;

	// Retrieve local player pawn to do stuff
	if (gUE.gPlayerController)
	{
		AKFPawn* PlayerPawn = (AKFPawn*)gUE.gPlayerController->Pawn;
		if (PlayerPawn)
		{
			// Norecoil
			if (GetAsyncKeyState(VK_DELETE)) gUE.Recoil = !gUE.Recoil;
			if (gUE.Recoil && PlayerPawn->Weapon)
			{
				AKFWeapon* CurWeapon = (AKFWeapon*)PlayerPawn->Weapon;
				CurWeapon->SetRecoil(0.0f);
			}

			// Pawn loop (ESP, Aimbot, ZED stuff)
			if (PlayerPawn->WorldInfo && PlayerPawn->WorldInfo->PawnList)
			{
				APawn* Temp = (AKFPawn*)PlayerPawn->WorldInfo->PawnList;
				while (Temp)
				{
					if (IsValidTarget(Temp) && Temp->IsA(AKFPawn_Monster::StaticClass()) && ((AKFPawn_Monster*)Temp)->bIsHeadless == 0)
					{
						AKFPawn_Monster* Zed = (AKFPawn_Monster*)Temp;
						FVector TempV;
						pCanvas->Project(Temp->Location, TempV);
						if (TempV.Z > 0.01f)
						{
							//GetName, convert to Wchar
							//const char* c = Zed->GetName(); c += 7;
							//const size_t cSize = strlen(c) + 1;
							//wchar_t* wc = new wchar_t[cSize];
							//size_t Num;
							//mbstowcs_s(&Num, wc, cSize, c, cSize);

							//Draw box
							//pCanvas->SetPos(TempV.X, TempV.Y);
							//pCanvas->SetDrawColor(200, 150, 0, 0);
							//pCanvas->DrawBox(40.0f, 40.0f);
							//pCanvas->DrawText(wc, 1.0f, 1.0f);
							//delete[cSize] wc;

							// Draw line to each box
							//FColor LineColor = FColor();
							//LineColor.A = 200; LineColor.G = 200;
							//pCanvas->Draw2DLine(gUE.ViewportSize.X/2, gUE.ViewportSize.Y + 1, (int)TempV.X, (int)TempV.Y, LineColor);

							// Basic Rotator Aimbot
							if (GetAsyncKeyState(0x02))	SetRotation(pCanvas, Zed);
						}
					}
					Temp = Temp->NextPawn;
				}
			}

			//auto InvManager = PlayerPawn->InvManager;
			//if (InvManager)
			//{
			//	AInventory* nWeaponInvent = NULL;
			//	for (nWeaponInvent = InvManager->InventoryChain; nWeaponInvent != NULL; nWeaponInvent = nWeaponInvent->Inventory)
			//	{
			//		AWeapon* WriteAmmo = (AWeapon*)nWeaponInvent;
					//add_log("Weapon: %s", WriteAmmo->GetName()); // works!
			//	}
			//}
		}
	}
}

typedef signed int(__thiscall *tProcessEvent) (UObject*, UFunction*, void*, void*);
tProcessEvent oProcessEvent = NULL;
signed int __stdcall hProcessEvent(UObject* pCallObject, UFunction* pUFunc, void* pParms, void* pResult)
{
	if (pUFunc)
	{
		//add_log("0x%p, 0x%p %s (%i)(%i), %s (%i)(%i), 0x%p, 0x%p", pCallObject, pUFunc, pUFunc->GetFullName(), pUFunc->Name.Index, pUFunc->ObjectInternalInteger, pCallObject->GetFullName(), pCallObject->Name.Index, pCallObject->ObjectInternalInteger, pParms, pResult);
		if(pCallObject->Name.Index == 13321 || pCallObject->Name.Index == 13323 || pCallObject->Name.Index == 74548) // KFGame.KFPlayerController OR KFPlayerController_WeeklySurvival OR AKFPlayerControllerVersus
		{
			if (pUFunc->Name.Index == 13840 && (DWORD64)gUE.gPlayerController != (DWORD64)pCallObject) // .PlayerTick
				gUE.gPlayerController = (AKFPlayerController*)pCallObject;
			else if (pUFunc->Name.Index == 300 && (DWORD64)gUE.gPlayerController == (DWORD64)pCallObject) // .Destroyed
				gUE.gPlayerController = 0;
		}
		else if(pUFunc->Name.Index == 13852) // Engine.xxx.PostRender
		{
			//if(pCallObject->Name.Index == 13419) PostRenderMenu(((UGameViewportClient_eventPostRender_Parms*)pParms)->Canvas); // .KFGameViewportClient.
			if (pCallObject->Name.Index == 49183 || pCallObject->Name.Index == 74487) PostRender(0); // .KFGFxHudWrapper. or .KFGFXHudWrapper_Versus.
		}
		
		//if (strstr(pUFunc->GetFullName(),"KFOnlineStatsWrite.AddXP")) // KFOnlineStatsWrite.AddXP
		//{
		//	((UKFOnlineStatsWrite_eventAddXP_Parms*)pParms)->dXP *= 150;
		//}
	}

	return oProcessEvent(pCallObject, pUFunc, pParms, pResult);
}


DWORD Initialize()
{
	//Get signatures
	LoadSignatures();
	GObjects = dwSignatures[0] + 6 + *(DWORD*)(dwSignatures[0] + 2) - 0x8;
	GNames = dwSignatures[1] + 7 + (*(DWORD*)(dwSignatures[1] + 3));
	gUE.GWorld = (UWorld*)(dwSignatures[2] + 7 + (*(DWORD*)(dwSignatures[2] + 3)));

	//Log signatures
	/*DWORD64 ModuleAddress = (DWORD64)GetModuleHandle(0);
	add_log("gObjects: 0x%llx (KFGame.exe+0x%llx)", dwSignatures[0] + 6 + *(DWORD*)(dwSignatures[0] + 2) - 0x8, dwSignatures[0] + 6 + *(DWORD*)(dwSignatures[0] + 2) - 0x8 - ModuleAddress);
	add_log("gNames: 0x%llx (KFGame.exe+0x%llx)", dwSignatures[1] + 7 + (*(DWORD*)(dwSignatures[1] + 3)), dwSignatures[1] + 7 + (*(DWORD*)(dwSignatures[1] + 3)) - ModuleAddress);
	add_log("uWorld: 0x%llx (KFGame.exe+0x%llx)", dwSignatures[2] + 7 + (*(DWORD*)(dwSignatures[2] + 3)), dwSignatures[2] + 7 + (*(DWORD*)(dwSignatures[2] + 3)) - ModuleAddress);
	add_log("ProcessEvent: 0x%llx (KFGame.exe+0x%llx)", dwSignatures[3], dwSignatures[3] - ModuleAddress);*/

	//Hook ProcessEvent
	oProcessEvent = (tProcessEvent)DetourFunc64((BYTE*)dwSignatures[3],(BYTE*)hProcessEvent,18);

	return 0;
}

// DLL
BOOL WINAPI DllMain(HMODULE hinst, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		g_hInst = hinst;
		Initialize();
	}
	return true;
}
