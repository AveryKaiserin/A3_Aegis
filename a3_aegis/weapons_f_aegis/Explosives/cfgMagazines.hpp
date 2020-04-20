class CfgMagazines
{
	class ATMine_Range_Mag;
	class FlareTripMine_Wire_Mag: ATMine_Range_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
		mass = 20;
		ammo = FlareTripMine_Wire_Ammo;
		displayName = "Tripwire Flare";
		picture = "\A3\Weapons_F\Data\UI\gear_Flare_tripwire_CA.paa";
		model = "\A3\Weapons_F\Explosives\Flare_tripwire_i.p3d";
		descriptionShort = "Type: Tripwire flare<br />Rounds: 1<br />Used on: Ground";
		class Library
		{
			libTextDesc = "Tripwire flares consist of a dug-in flare and a 5 m wire. They are very hard to spot, and are used to secure an area and to guard against infiltration.";
		};
		descriptionUse = $STR_A3_use_mine;
		allowedSlots[] =
		{
			BACKPACK_SLOT,
			VEST_SLOT
		};
	};
};
