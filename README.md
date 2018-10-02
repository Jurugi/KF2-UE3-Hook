/*
Killing Floor 2 UE3 Hook
*/

Example hook made for Unreal Engine 3 on the game Killing Floor 2

1) Note: after the 2018 update, I fixed this for you in the SDK. The relevant functions are not using indexes, but searchable names. It was already obvious to do this change before if you wanted to maintain this.. (you're welcome).

When the game updates, the GName and Object indexes had a low probability of shifting or breaking. If the SDK breaks: Simply redump the SDK and fix any few functions needed. See my post for copy-pasteable code to dump the SDK at https://www.unknowncheats.me/forum/unreal-engine-3-a/237415-killing-floor-2-ue3-sdk.html

2) VAC doesn't really work on this game, it's just to serve as an example of a hook done on x64 bit for Unreal Engine 3.

3) Updated SDK for Halloween update 10/1/2018. 

The purpose is mostly to demonstrate how a hack could be made on any Unreal Engine game in 64bit very quickly, even given the lack of references/info around. 

I added anti-copy paste which are easy to fix and striped a few lines of features to deter noobs that can't use the supplied SDK or dump one from the signatures given.
