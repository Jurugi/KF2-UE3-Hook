#include "Signatures.h"
#include "Logging.h"

DWORD64 dwSignatures[NumSigs] = { 0 };

bool bDataCompare(const BYTE *pData, const BYTE *bMask, const char *szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask) if (*szMask == 'x' && *pData != *bMask) return false;
	return (*szMask) == NULL;
}

DWORD64 dwFindPattern(DWORD64 dwAddress, DWORD dwLen, BYTE *bMask, char *szMask)
{
	for (DWORD i = 0; i < dwLen; i++) if (bDataCompare((BYTE*)(dwAddress + i), bMask, szMask)) return (DWORD64)(dwAddress + i);
	return 0;
}

void LoadSignatures()
{
	DWORD64 ModuleAddress = (DWORD64)GetModuleHandle(0) + 0x1000;
	 
	// GObjects pointer used to dump UE3-SDK related objects
	dwSignatures[0] = dwFindPattern(ModuleAddress, 0x1000000, (BYTE*)"\x3B\x00\x00\x00\x00\x00\x7D\x00\x48\x8B\xC8\x48\x8B\x00\x00\x00\x00\x00\x48\x8B\x0C\xC8\xE8\x00\x00\x00\x00\x48\x8B\xC8", "x?????x?xxxxx?????xxxxx????xxx");

	// GNames pointer used to dump UE3-SDK related objects
	dwSignatures[1] = dwFindPattern(ModuleAddress, 0x1000000, (BYTE*)"\x48\x8B\x0D\x00\x00\x00\x00\x48\x83\x3C\xF9", "xxx????xxxx");
	
	// UWorld pointer
	dwSignatures[2] = dwFindPattern(ModuleAddress, 0x1000000, (BYTE*)"\x48\x8B\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x85\xC0\x74\x10\x83\xB8", "xxx????x????xxxxxxx");

	// ProcessEvent (x64) address (detour sizes 6, 13, 18, 26) (Halloween Beta change)
	dwSignatures[3] = dwFindPattern(ModuleAddress, 0x1000000, (BYTE*)"\x40\x55\x41\x56\x41\x57\x48\x81\xEC\xB0\x00\x00\x00\x48\x8D\x6C\x24\x20", "xxxxxxxxxxxxxxxxxx");

	// Automatically exit if a signature fails 
	for (int i = 0; i < NumSigs; i++) if (dwSignatures[i] == 0)
	{
		#ifdef Logging
		LogSignatures();
		#endif
		exit(0); 
	}

}

#ifdef Logging
void LogSignatures()
{
	for (int i = 0; i < NumSigs; i++) add_log("%i: 0x%x", i, dwSignatures[i]);
}
#endif


