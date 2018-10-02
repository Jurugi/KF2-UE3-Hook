

Example hook made for Unreal Engine 3 on the game Killing Floor 2

1) Note: after the 2018 update, I fixed this for you in the SDK. The relevant functions are not using indexes, but searchable names. It was already obvious to do this change before if you wanted to maintain this.. (you're welcome).

When the game updates, the GName and Object indexes had a low probability of shifting or breaking. If the SDK breaks: Simply redump the SDK and fix any few functions needed. Search my internet posts for copy-pasteable code.

2) VAC doesn't really work on this game, it's just to serve as a base hook.

3) Updated SDK & Signatures for Halloween update 10/1/2018. 

The purpose is mostly to demonstrate how a hack could be made on any Unreal Engine game in 64bit very quickly, even given the lack of references/info around. 

I added anti-copy paste to deter noobs that can't use the supplied SDK or dump it from the signatures given.
