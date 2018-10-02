/*
Killing Floor 2 UE3 Hook
*/

Example hook made for Unreal Engine 3 on the game Killing Floor 2

1) When the game updates, the hardcoded FName indexes in ProcessEvent have a low probability of shifting or breaking. 
To fix:
Simply redump the SDK and redo the 5 or so function calls that the hook actually uses.
See my post here for help https://www.unknowncheats.me/forum/unreal-engine-3-a/237415-killing-floor-2-ue3-sdk.html

Note: after the 2018 update, I fixed this for you in the SDK. Functions included will work properly without needing updates. The only time you should need to fix is if some major shift occurs that breaks or crashes the game.. (you're welcome)

2) VAC doesn't really work on this game, it's just to serve as an example of a hook done on x64 bit for Unreal Engine 3.

3) Small anti-copy paste added in SDK (2018).

The purpose is mostly to demonstrate how a hack could be made on any Unreal Engine game in 64bit very quickly, even given the lack of references/info around. 

I added anti-copy paste which are easy to fix and striped a few lines of features to deter noobs that can't use the supplied SDK.
