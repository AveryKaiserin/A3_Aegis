class CfgMagazines
{
	// Arma 3
	class CA_Magazine;
    class 30Rnd_556x45_Stanag;
	class 20Rnd_762x51_Mag;
	class 150Rnd_762x51_Box: CA_Magazine
	{
		displayName = "7.62 mm 150Rnd Reload Tracer (Green) Box";
	};
	class 150Rnd_762x51_Box_Tracer;
	class I_IR_Grenade;
	// Arma 3 Marksman
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		displayName = "9.3mm 120Rnd Reload Tracer (Green) Belt";
	};
	// Arma 3 Aegis
	class 500Rnd_20mm_shells;
	class 220Rnd_25mm_shells;
	// Arma 3 Atlas
	class 150Rnd_762x51_Box_Yellow: 150Rnd_762x51_Box
	{
		displayName = "7.62 mm 150Rnd Reload Tracer (Yellow) Box";
		descriptionShort = "Caliber: 7.62x51 mm<br/>Rounds: 150<br />Used in: Negev";
		ammo = B_762x51_Tracer_Yellow;
	};
	class 150Rnd_762x51_Box_Tracer_Yellow: 150Rnd_762x51_Box
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 150Rnd Tracer (Yellow) Box";
		displayNameShort = $STR_A3_tracer_dns;
		descriptionShort = "Caliber: 7.62x51 mm Tracer - Yellow<br/>Rounds: 150<br />Used in: Negev";
		picture = "\A3\Weapons_F_Beta\Data\UI\M_150Rnd_762x51_tracer_CA.paa";
		tracersEvery = 1;
	};
	class I_I_IR_Grenade: I_IR_Grenade
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = I_I_IRStrobe;
		displayName = $STR_A3_A_CfgMagazines_I_I_IR_Grenade0;
		descriptionShort = $STR_A3_A_CfgMagazines_I_I_IR_Grenade1;
	};
	/*
	class 30Rnd_556x45_AUG_Mag_F: 30Rnd_556x45_Stanag
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd EF90 Mag";
		modelSpecial = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Mag_556x45_AUG_30Rnd.p3d";
		ammo = B_556x45_Ball_Tracer_Red;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\arifle_AUG_blk_F_CO.paa"};
	};
	class 30Rnd_556x45_AUG_Mag_Tracer_F: 30Rnd_556x45_AUG_Mag_F
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd EF90 Tracer Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 30Rnd_556x45_AUG_Khaki_Mag_F: 30Rnd_556x45_AUG_Mag_F
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Khaki_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd Khaki EF90 Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\arifle_AUG_khk_F_CO.paa"};
	};
	class 30Rnd_556x45_AUG_Khaki_Mag_Tracer_F: 30Rnd_556x45_AUG_Khaki_Mag_F
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Khaki_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd Khaki EF90 Tracer Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 30Rnd_556x45_AUG_Sand_Mag_F: 30Rnd_556x45_AUG_Mag_F
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Sand_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd Sand EF90 Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\arifle_AUG_snd_F_CO.paa"};
	};
	class 30Rnd_556x45_AUG_Sand_Mag_Tracer_F: 30Rnd_556x45_AUG_Sand_Mag_F
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Sand_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd Sand EF90 Tracer Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 20Rnd_762x51_SCAR_Mag_F: 20Rnd_762x51_Mag
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_20Rnd_762x51_SCAR_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 20Rnd SCAR Mag";
		descriptionShort = "Caliber: 7.62x51 mm<br />Rounds: 20<br />Used in: Mk17 SCAR";
		modelSpecial = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Mag_762x51_SCAR_20Rnd.p3d";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\SCAR\Data\arifle_SCAR_blk_F_01_CO.paa"};
	};
	class 20Rnd_762x51_SCAR_Khaki_Mag_F: 20Rnd_762x51_SCAR_Mag_F
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_20Rnd_762x51_SCAR_Khaki_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 20Rnd Khaki SCAR Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\SCAR\Data\arifle_SCAR_khk_F_01_CO.paa"};
	};
	class 20Rnd_762x51_SCAR_Sand_Mag_F: 20Rnd_762x51_SCAR_Mag_F
	{
		picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_20Rnd_762x51_SCAR_Sand_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 20Rnd Sand SCAR Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\SCAR\Data\arifle_SCAR_snd_F_01_CO.paa"};
	};
	*/
	class 500Rnd_20mm_shells_yellow: 500Rnd_20mm_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_20mm_Tracer_Yellow;
	};
	class 220Rnd_25mm_shells_yellow: 220Rnd_25mm_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_25mm_Tracer_Yellow;
	};
	class 150Rnd_93x64_Mag_Red: 150Rnd_93x64_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "9.3mm 120Rnd Reload Tracer (Red) Belt";
		ammo = B_93x64_Ball_Tracer_Red;
	};
	#include "dynamicLoadout.hpp"
};