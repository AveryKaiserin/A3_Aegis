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
    /*
	class 30Rnd_556x45_AUG_Mag_F: 30Rnd_556x45_Stanag
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Mag";
		modelSpecial = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Mag_556x45_AUG_30Rnd.p3d";
		ammo = B_556x45_Ball_Tracer_Red;
		hiddenSelections[] = {Camo};
		hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Rifles\AUG\Data\AUG_CO.paa"};
	};
	class 30Rnd_556x45_AUG_Mag_Tracer_F: 30Rnd_556x45_AUG_Mag_F
	{
		//picture = "\A3_Atlas\Weapons_F_Atlas\MagazineProxies\Data\UI\icon_30Rnd_556x45_AUG_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 30Rnd AUG Tracer Mag";
		displayNameShort = $STR_A3_TRACER_DNS;
		tracersEvery = 1;
		lastRoundsTracer = 30;
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