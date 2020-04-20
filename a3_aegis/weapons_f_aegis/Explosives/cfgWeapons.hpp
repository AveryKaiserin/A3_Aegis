class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[] += {FlareMineWireMuzzle};
		class ClassicMineRangeMuzzle;
		class FlareMineWireMuzzle: ClassicMineRangeMuzzle
		{
			magazines[] = {FlareTripMine_Wire_Mag};
			displayName = "Tripwire Flare";
		};
	};
};