/*
Killing Floor 2 UE3 Hook

// gObjects
// 3B ?? ?? ?? ?? ?? 7D ?? 48 8B C8 48 8B ?? ?? ?? ?? ?? 48 8B 0C C8 E8 ?? ?? ?? ?? 48 8B C8 gObjects counter at some addr+8 and gObjects at addr

// gNames
// 48 8B 0D ?? ?? ?? ?? 48 83 3C F9

// uWorld
// 48 8B 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 85 C0 74 10 83 B8
*/
Example hook made for Unreal Engine 3 on the game Killing Floor 2

1) When the game updates, the hardcoded FName indexes in ProcessEvent have a low probability of shifting or breaking. 
To fix:
Simply redump the SDK and replace/redo the 5 or so function calls that the hook actually uses.
See post here for help https://www.unknowncheats.me/forum/unreal-engine-3-a/237415-killing-floor-2-ue3-sdk.html

2) VAC doesn't really work on this game, it's just to serve as an example of a detour hook done on x64 bit for UE3. 

3) Small anti-copy paste added. Most of aimbot function stripped (if you can't make one using at least 3 of the available ways then you probably should not be using this).


The purpose is mostly to demonstrate how a hack could be made on any Unreal Engine game in 64bit very quickly, even given the lack of references/info around. There's not much stealth or other methods applied here. Sometimes the methods are varied depending on how well the dev integrates Unreal Engine to their project.
