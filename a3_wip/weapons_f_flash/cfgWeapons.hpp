class CfgWeapons
{
	// Arma 3
    class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
        muzzles[] += {FlashGrenadeMuzzle};
        class ThrowMuzzle;
		class FlashGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {FlashGrenade};
		};
    };
};