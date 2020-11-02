class CfgMagazines
{
	// Arma 3
	class HandGrenade;
	class SmokeShell;
    // Arma 3 Aegis
	class FlashGrenade: HandGrenade
	{
		author = $STR_A3_A_AveryTheKitty_and_Roman;
		mass = 8;
		displayName = /*$STR_A3_A_CfgMagazines_FlashGrenade0*/ "Flash Grenade";
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\gear_RGO_CA.paa"; // Placeholder
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east.p3d"; // Placeholder
		ammo = GrenadeFlash;
		displayNameShort = /*$STR_A3_A_CfgMagazines_FlashGrenade_dns*/ "Flash Grenade";
	};
	class HandFlare: SmokeShell
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = /*$STR_A3_A_CfgMagazines_HandFlare0*/ "Handheld Flare (Red)";
		picture = "\A3\Weapons_F\Data\UI\gear_Flare_Red_CA.paa";
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east.p3d"; // Placeholder
		ammo = FlareHand;
		displayNameShort = $STR_A3_CfgMagazines_FlareRed_F_dns;
	};
};