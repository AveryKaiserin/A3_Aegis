class CfgWeapons
{
	// Arma 3
    class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
        muzzles[] +=
        {
            FlashGrenadeMuzzle,
            HandFlareMuzzle
        };
        class ThrowMuzzle;
		class FlashGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {FlashGrenade};
            class EventHandlers
            {
                fired = "_this spawn Aegis_fnc_flashbangExploHandler;";
            };
		};
		class HandFlareMuzzle: ThrowMuzzle
		{
			magazines[] = {HandFlare};
		};
    };
};