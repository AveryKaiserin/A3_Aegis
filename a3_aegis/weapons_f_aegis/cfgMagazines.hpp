class CfgMagazines
{
	// Arma 3
	class CA_Magazine;
	class VehicleMagazine;
	class CA_LauncherMagazine;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"};
		descriptionShort = "Caliber: 6.5x39 mm - STANAG Caseless<br />Rounds: 30<br />Used in: MX/C/M/SW, L85A3";
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		descriptionShort = "Caliber: 6.5x39 mm Tracer - Red<br />Rounds: 30<br />Used in: MX/C/M/SW, L85A3";
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\DMR_06\Data\DMR_06_02_black_CO.paa"};
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_LMG_CO.paa"};
	};
	class 30Rnd_9x21_Mag;
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_15Rnd_9x21_Mag0;
		descriptionShort = $STR_A3_A_CfgMagazines_15Rnd_9x21_Mag1;
		count = 15;
	};
	class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_15Rnd_9x21_red_Mag0;
	};
	class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_15Rnd_9x21_green_Mag0;
	};
	class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag
	{
		displayName = $STR_A3_A_CfgMagazines_15Rnd_9x21_yellow_Mag0;
	};
	class 1Rnd_HE_Grenade_shell;
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class 1Rnd_SmokeYellow_Grenade_shell;
	class 1Rnd_SmokePurple_Grenade_shell;
	class 1Rnd_SmokeBlue_Grenade_shell;
	class 1Rnd_SmokeOrange_Grenade_shell;
	class 2000Rnd_65x39_Belt;
	class 2000Rnd_65x39_Belt_Tracer_Green_Splash;
	class 200Rnd_20mm_G_belt: VehicleMagazine
	{
		ammo = B_25x40mm_HE;
	};
	class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt
	{
		count = 36;
	};
	class UGL_FlareWhite_F;
	class UGL_FlareGreen_F;
	class UGL_FlareRed_F;
	class UGL_FlareYellow_F;
	class UGL_FlareCIR_F;
	class 9Rnd_45ACP_Mag;
	class 300Rnd_20mm_shells;
	class 300Rnd_25mm_shells;
	class 250Rnd_30mm_HE_shells;
	class 140Rnd_30mm_MP_shells;
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
	{
		displayNameMFDFormat = "MP-T";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells
	{
		displayNameMFDFormat = "ОФ";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow;
	class 60Rnd_30mm_APFSDS_shells;
	class 60Rnd_40mm_GPR_shells;
	class 38Rnd_80mm_rockets;
	class 680Rnd_35mm_AA_shells;
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_15Rnd_45ACP_Mag0;
		count = 15;
		descriptionShort = $STR_A3_A_CfgMagazines_15Rnd_45ACP_Mag1;
	};
	class O_IR_Grenade;
	class 1000Rnd_762x51_Belt_T_Red;
	class 1000Rnd_762x51_Belt_T_Green;
	class 1000Rnd_762x51_Belt_T_Yellow;
	class 2000Rnd_762x51_Belt_T_Red;
	class 2000Rnd_762x51_Belt_T_Green;
	class 2000Rnd_762x51_Belt_T_Yellow;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	// Arma 3 Marksmen
	class 130Rnd_338_Mag: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_338_Mag0;
		count = 100;
		descriptionShort = $STR_A3_A_CfgMagazines_100Rnd_338_Mag1;
		mass = 46;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_338_Mag0;
		count = 120;
		descriptionShort = $STR_A3_A_CfgMagazines_120Rnd_93x64_Mag1;
		mass = 56;
	};
	// Arma 3 Apex
	class 30Rnd_762x39_Mag_F: CA_Magazine
	{
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_762x39_Mag_F2;
	};
	class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_30Rnd_762x39_AK12_Mag_F1;
	};
	class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_30Rnd_762x39_AK12_Mag_Tracer_F1;
	};
	class 30Rnd_545x39_Mag_F: CA_Magazine
	{
		descriptionShort = $STR_A3_A_CfgMagazines_30Rnd_545x39_Mag_F2;
	};
	class 30Rnd_545x39_Mag_Green_F;
	class 30Rnd_545x39_Mag_Tracer_Green_F;
	class 30Rnd_580x42_Mag_F;
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75Rnd_580x42_Mag_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_75Rnd_580x42_Mag_F1;
		count = 75;
		mass = 16;
	};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75Rnd_580x42_Mag_Tracer_F0;
		lastRoundsTracer = 75;
	};
	class 100Rnd_580x42_hex_Mag_F: 100Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75Rnd_580x42_hex_Mag_F0;
	};
	class 100Rnd_580x42_hex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_75Rnd_580x42_hex_Mag_Tracer_F0;
	};
	class 100Rnd_580x42_ghex_Mag_F: 100Rnd_580x42_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_75Rnd_580x42_ghex_Mag_F0;
	};
	class 100Rnd_580x42_ghex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		displayName = $STR_A3_A_CfgMagazines_75Rnd_580x42_ghex_Mag_Tracer_F0;
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_10Rnd_650x39_Cased_Mag_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_10Rnd_650x39_Cased_Mag_F1;
		count = 10;
		mass = 6;
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_556x45_Drum_Mag_F0;
		descriptionShort = $STR_A3_A_CfgMagazines_100Rnd_556x45_Drum_Mag_F1;
		count = 100;
		mass = 20;
	};
	class 150Rnd_556x45_Drum_Sand_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_556x45_Drum_Sand_Mag_F0;
	};
	class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_556x45_Drum_Sand_Mag_Tracer_F0;
	};
	class 150Rnd_556x45_Drum_Green_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_556x45_Drum_Green_Mag_F0;
	};
	class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_556x45_Drum_Green_Mag_Tracer_F0;
	};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName = $STR_A3_A_CfgMagazines_100Rnd_556x45_Drum_Mag_Tracer_F0;
		lastRoundsTracer = 100;
	};
	// Arma 3 Enoch
	class 10Rnd_Mk14_762x51_Mag: 20Rnd_762x51_Mag
	{
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Enoch\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
	};
	class 2Rnd_12Gauge_Pellets;
	class 2Rnd_12Gauge_Slug;
	class O_R_IR_Grenade: O_IR_Grenade
	{
		displayName = $STR_A3_A_CfgMagazines_O_R_IR_Grenade0;
		descriptionShort = $STR_A3_A_CfgMagazines_O_R_IR_Grenade1;
	};
	// Arma 3 Aegis
	class 20Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "5.56 mm 20rnd STANAG Reload Tracer (Yellow) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_CA.paa";
		count = 20;
		mass = 6;
		descriptionShort = "Caliber: 5.56x45 mm STANAG< br/>Rounds: 20<br />Used in: SDAR";
	};
	class 20Rnd_556x45_Stanag_green: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd STANAG Reload Tracer (Green) Mag";
		ammo = B_556x45_Ball_Tracer_Green;
	};
	class 20Rnd_556x45_Stanag_red: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd STANAG Reload Tracer (Red) Mag";
		ammo = B_556x45_Ball_Tracer_Red;
	};
	class 20Rnd_556x45_Stanag_Tracer_Red: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd Tracer (Red) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_red_CA.paa";
		ammo = B_556x45_Ball_Tracer_Red;
		tracersEvery = 1;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Red<br />Rounds: 20<br />Used in: SDAR";
		displayNameShort = $STR_A3_TRACER_DNS;
	};
	class 20Rnd_556x45_Stanag_Tracer_Green: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd Tracer (Green) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_green_CA.paa";
		ammo = B_556x45_Ball_Tracer_Green;
		tracersEvery = 1;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Green<br />Rounds: 20<br />Used in: SDAR";
		displayNameShort = $STR_A3_TRACER_DNS;
	};
	class 20Rnd_556x45_Stanag_Tracer_Yellow: 20Rnd_556x45_Stanag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.56 mm 20rnd Tracer (Yellow) Mag";
		picture = "\A3\Weapons_F\Data\UI\M_20stanag_yellow_CA.paa";
		ammo = B_556x45_Ball_Tracer_Yellow;
		tracersEvery = 1;
		descriptionShort = "Caliber: 5.56x45 mm STANAG Tracers - Yellow<br />Rounds: 20<br />Used in: SDAR";
		displayNameShort = $STR_A3_TRACER_DNS;
	};
	class 20Rnd_762x51_weathered_Mag: 20Rnd_762x51_Mag
	{
		picture = "\A3\Weapons_F\Data\UI\M_20Rnd_762x51_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "7.62 mm 20rnd Mk14 Mag";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\Data\DMR_06_02_CO.paa"};
	};
	class 5Rnd_127x99_Mag: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "12.7 mm 5Rnd Mag";
		descriptionShort = "Caliber: 12.7x99 mm NATO<br />Rounds: 5<br />Used in: Warfare-50";
		ammo = B_127x99_Ball;
		count = 5;
		initSpeed = 880;
		picture = "\A3\Weapons_F\Data\UI\M_5Rnd_127x108_CA.paa";
		mass = 15;
	};
	class 17Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_17Rnd_9x21_Mag0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_17Rnd_9x21_Mag_CA.paa";
		count = 17;
		descriptionShort = $STR_A3_A_CfgMagazines_17Rnd_9x21_Mag1;
		mass = 6;
		initSpeed = 375;
	};
	class 7Rnd_45ACP_Mag: 9Rnd_45ACP_Mag
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_7Rnd_45ACP_Mag0;
		count = 7;
		descriptionShort = $STR_A3_A_CfgMagazines_7Rnd_45ACP_Mag1;
	};
	class 7Rnd_127x33_Mag: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_7Rnd_127x33_Mag0;
		ammo = B_127x33_Ball;
		count = 7;
		initSpeed = 470;
		picture = "\A3\Weapons_F\Data\UI\M_7Rnd_127x33_CA.paa";
		tracersEvery = 0;
		descriptionShort = $STR_A3_A_CfgMagazines_7Rnd_127x33_Mag1;
		mass = 8;
	};
	class 6Rnd_9x33_Cylinder: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_6Rnd_9x33_Cylinder0;
		ammo = B_9x33_Ball;
		count = 6;
		initSpeed = 380;
		picture = "\A3\Weapons_F_EPA\Data\UI\M_6Rnd_revolver_CA.paa";
		descriptionShort = "Caliber: .357 Magnum<br />Rounds: 6<br />Used in: RSh-42";
		mass = 6;
	};
	class 8Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_8Rnd_12Gauge_Pellets0;
		count = 8;
		mass = 12;
		initSpeed = 380;
		ammo = B_12Gauge_Pellets_Submunition_Cartridge;
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_12Gauge_AA12_8Rnd.p3d";
		//picture = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\UI\icon_8Rnd_12Gauge_Pellets_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\AA40_CO.paa"};
	};
	class 8Rnd_12Gauge_Slug: 8Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_8Rnd_12Gauge_Slug0;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1;
		descriptionShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1;
		//picture = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\UI\icon_8Rnd_12Gauge_Slug_CA.paa";
		ammo = B_12Gauge_Slug;
		initSpeed = 450;
		count = 8;
	};
	class 20Rnd_AA40_Pellets: 2Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_AA40_Pellets0;
		count = 20;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_20Rnd_AA40_Pellets_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_12Gauge_AA12_20Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\AA40_CO.paa"};
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_AA40_Pellets1;
		mass = 18;
	};
	class 20Rnd_AA40_Slug: 2Rnd_12Gauge_Slug
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_AA40_Slug0;
		count = 20;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_20Rnd_AA40_Slug_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_12Gauge_AA12_20Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Shotguns\AA40\Data\AA40_CO.paa"};
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_AA40_Slug1;
		mass = 18;
	};
	class 20Rnd_AA40_HE: 20Rnd_AA40_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_AA40_HE0;
		displayNameShort = $STR_A3_HE_dns;
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_AA40_HE2;
		picture = "\A3_Aegis\Weapons_F_Aegis\Data\UI\icon_20Rnd_AA40_HE_CA.paa";
		ammo = B_19mm_HE;
		initSpeed = 400;
	};
	class 7Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_7Rnd_12Gauge_Pellets0;
		count = 7;
		descriptionShort = $STR_A3_A_CfgMagazines_7Rnd_12Gauge_Pellets1;
		mass = 12;
	};
	class 7Rnd_12Gauge_Slug: 2Rnd_12Gauge_Slug
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_7Rnd_12Gauge_Slug0;
		count = 7;
		descriptionShort = $STR_A3_A_CfgMagazines_7Rnd_12Gauge_Slug1;
		mass = 12;
	};
	class 40Rnd_460x30_Mag_F: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_40Rnd_460x30_Mag_F0;
		ammo = B_460x30_Ball;
		count = 40;
		initSpeed = 725;
		picture = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\UI\icon_40Rnd_460x30_Mag_F_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_460x30_MP7_40Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\SMG_04_blk_F_CO.paa"};
		tracersEvery = 0;
		descriptionShort = $STR_A3_A_CfgMagazines_40Rnd_460x30_Mag_F1;
		mass = 10;
	};
	class 20Rnd_460x30_Mag_F: 40Rnd_460x30_Mag_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_20Rnd_460x30_Mag_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\UI\icon_20Rnd_460x30_Mag_F_CA.paa";
		modelSpecial = "\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Mag_460x30_MP7_20Rnd.p3d";
		modelSpecialIsProxy = true;
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\SMG_04_blk_F_CO.paa"};
		count = 20;
		mass = 6;
		descriptionShort = $STR_A3_A_CfgMagazines_20Rnd_460x30_Mag_F1;
	};
	class 4Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Pellets0;
		count = 4;
		descriptionShort = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Pellets1;
		mass = 6;
	};
	class 4Rnd_12Gauge_Slug: 2Rnd_12Gauge_Slug
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Slug0;
		count = 4;
		descriptionShort = $STR_A3_A_CfgMagazines_4Rnd_12Gauge_Slug1;
		mass = 6;
	};
	class 30Rnd_545x39_AK12_Mag_F: 30Rnd_545x39_Mag_Green_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK12 Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_black_CO.paa"};
	};
	class 30Rnd_545x39_AK12_Mag_Tracer_F: 30Rnd_545x39_Mag_Tracer_Green_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK12 Tracer Mag";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_black_CO.paa"};
	};
	class 30Rnd_545x39_AK12_Lush_Mag_F: 30Rnd_545x39_AK12_Mag_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK12 Khaki Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki.rvmat"};
	};
	class 30Rnd_545x39_AK12_Lush_Mag_Tracer_F: 30Rnd_545x39_AK12_Mag_Tracer_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK12 Tracer Khaki Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_khaki.rvmat"};
	};
	class 30Rnd_545x39_AK12_Arid_Mag_F: 30Rnd_545x39_AK12_Mag_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK12 Sand Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo.rvmat"};
	};
	class 30Rnd_545x39_AK12_Arid_Mag_Tracer_F: 30Rnd_545x39_AK12_Mag_Tracer_F
	{
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_CA.paa";
		author = $STR_A3_A_AveryTheKitty;
		displayName = "5.45 mm 30Rnd AK12 Tracer Sand Mag";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3_Aegis\Weapons_F_Aegis\MagazineProxies\Data\magazine_AK74_camo.rvmat"};
	};
	class 1Rnd_Pellets_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "40 mm Pellets Round";
		picture = "\A3\Weapons_F\Data\Placeholder_CO.paa";
		ammo = B_12Gauge_Pellets_Submunition;
		descriptionShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
	};
	class 3Rnd_Pellets_Grenade_shell: 1Rnd_Pellets_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 3;
		displayName = "40 mm 3Rnd Pellets Rounds";
		descriptionShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		mass = 12;
	};
	class 6Rnd_HE_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "40 mm 6Rnd HE Grenade";
		descriptionShort = "Type: High Explosive Grenade Rounds<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_Smoke_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (White)";
		descriptionShort = "Type: Smoke Rounds - White<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Red)";
		descriptionShort = "Type: Smoke Rounds - Red<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Green)";
		descriptionShort = "Type: Smoke Rounds - Green<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Yellow)";
		descriptionShort = "Type: Smoke Rounds - Yellow<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Purple)";
		descriptionShort = "Type: Smoke Rounds - Purple<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Blue)";
		descriptionShort = "Type: Smoke Rounds - Blue<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Smoke Rounds (Orange)";
		descriptionShort = "Type: Smoke Rounds - Orange<br />Rounds: 6<br />Used in: M32";
		mass = 24;
	};
	class 6Rnd_UGL_FlareWhite_F: UGL_FlareWhite_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (White)";
		descriptionShort = "Type: Flare Rounds - White<br />Rounds: 6<br />Used in: M32";
		displayNameShort = STR_A3_CfgMagazines_FlareWhite_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareGreen_F: UGL_FlareGreen_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (Green)";
		descriptionShort = "Type: Flare Rounds - Green<br />Rounds: 6<br />Used in: M32";
		displayNameShort = STR_A3_CfgMagazines_FlareGreen_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareRed_F: UGL_FlareRed_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (Red)";
		descriptionShort = "Type: Flare Rounds - Red<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_FlareRed_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareYellow_F: UGL_FlareYellow_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (Yellow)";
		descriptionShort = "Type: Flare Rounds - Yellow<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_FlareYellow_F_dns;
		mass = 24;
	};
	class 6Rnd_UGL_FlareCIR_F: UGL_FlareCIR_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "6Rnd M32 Flares (IR)";
		descriptionShort = "Type: Flare Rounds - IR<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_FlareCIR_F_dns;
		mass = 24;
	};
	class 6Rnd_Pellets_Grenade_shell: 1Rnd_Pellets_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 6;
		displayName = "40 mm 6Rnd Pellets Rounds";
		descriptionShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		displayNameShort = $STR_A3_C_CfgMagazines_2Rnd_12Gauge_Pellets1;
		mass = 24;
	};
	class 6Rnd_APERSMine_Grenade_shell: 6Rnd_HE_Grenade_shell
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = "6Rnd M32 APERS Mines";
		picture = "\A3\Weapons_F\Data\Placeholder_CO.paa";
		ammo = G_40mm_APERSMine;
		descriptionShort = "Type: Anti-Personnel Mine Rounds<br />Rounds: 6<br />Used in: M32";
		displayNameShort = $STR_A3_CfgMagazines_ClassicMineRangeMagazine0;
	};
	class 5Rnd_25x40mm_HE: CA_Magazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		type = 64+128;
		displayName = "25 mm 5Rnd HE Grenade";
		displayNameShort = $STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns;
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_slug_CA.paa";
		ammo = B_25x40mm_HE;
		initSpeed = 210;
		count = 5;
		nameSound = "";
		descriptionShort = "Caliber: 25x40 mm HE<br />Rounds: 5 <br />Used in: Punisher";
		mass = 16;
	};
	class 5Rnd_25x40mm_airburst: 5Rnd_25x40mm_HE
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		type = 64+128;
		displayName = "25 mm 5Rnd Airburst";
		displayNameShort = "Airburst";
		picture = "\A3\Weapons_F\Data\UI\gear_UGL_slug_CA.paa";
		ammo = B_25x40mm_airburst;
		descriptionShort = "Caliber: 25x40 mm Airburst<br />Rounds: 5 <br />Used in: Punisher";
	};
	class 500Rnd_762x51_Belt: 2000Rnd_65x39_Belt
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Red_splash;
		displayName = $STR_A3_A_CfgMagazines_2000Rnd_762x45_Belt0;
		descriptionShort = $STR_A3_A_CfgMagazines_2000Rnd_762x45_Belt1;
		tracersEvery = 1;
		count = 500;
		initSpeed = 860;
		weight = 16;
	};
	class 500Rnd_762x51_Green_Belt: 500Rnd_762x51_Belt
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Green_splash;
	};
	class 500Rnd_762x51_Yellow_Belt: 500Rnd_762x51_Belt
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Yellow_splash;
	};
	class 500Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_1000Rnd_20mm_shells0;
		count = 500;
		ammo = B_20mm_Tracer_Red;
		weight = 126;
	};
	class 250Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_1000Rnd_20mm_shells0;
		count = 250;
		ammo = B_20mm;
	};
	class 220Rnd_25mm_shells: 300Rnd_25mm_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 220;
	};
	class 250Rnd_30mm_HE_shells_Tracer_Yellow: 250Rnd_30mm_HE_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = "30 mm HE Tracer (Yellow) Shells";
		ammo = B_30mm_HE_Tracer_Yellow;
		tracersEvery = 1;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
	{
		displayNameMFDFormat = "APFSDS-T";
	};
	class 120Rnd_40mm_GPR_shells: 60Rnd_40mm_GPR_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CFGMAGAZINES_40MMGPR;
		displayNameShort = $STR_A3_CFGMAGAZINES_GPR;
		ammo = B_40mm_GPR;
		initSpeed = 1035;
		count = 120;
	};
	class 120Rnd_40mm_GPR_Tracer_Red_shells: 120Rnd_40mm_GPR_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CFGMAGAZINES_40MMGPRT;
		displayNameShort = $STR_A3_CFGMAGAZINES_GPRT;
		ammo = B_40mm_GPR_Tracer_Red;
		displayNameMFDFormat = "GPR-T";
	};
	class 120Rnd_40mm_GPR_Tracer_Green_shells: 120Rnd_40mm_GPR_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CFGMAGAZINES_40MMGPRT;
		displayNameShort = $STR_A3_CFGMAGAZINES_GPRT;
		ammo = B_40mm_GPR_Tracer_Green;
	};
	class 120Rnd_40mm_GPR_Tracer_Yellow_shells: 120Rnd_40mm_GPR_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CFGMAGAZINES_40MMGPRT;
		displayNameShort = $STR_A3_CFGMAGAZINES_GPRT;
		ammo = B_40mm_GPR_Tracer_Yellow;
		displayNameMFDFormat = "GPR-T";
	};
	class 80Rnd_40mm_APFSDS_shells: 120Rnd_40mm_GPR_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CFGMAGAZINES_40MM_APFSD;
		displayNameShort = $STR_A3_CFGMAGAZINES_APFSD0;
		ammo = B_40mm_APFSDS;
		initSpeed = 1600;
		count = 80;
	};
	class 80Rnd_40mm_APFSDS_Tracer_Red_shells: 80Rnd_40mm_APFSDS_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_CfgMagazines_40Rnd_40mm_APFSDS_Tracer_Red_shells0;
		displayNameShort = $STR_A3_CfGMAGAZINES_APFSD_T0;
		ammo = B_40mm_APFSDS_Tracer_Red;
		count = 80;
		displayNameMFDFormat = "APFSDS-T";
	};
	class 80Rnd_40mm_APFSDS_Tracer_Green_shells: 80Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_40mm_APFSDS_Tracer_Green;
	};
	class 80Rnd_40mm_APFSDS_Tracer_Yellow_shells: 80Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_40mm_APFSDS_Tracer_Yellow;
		displayNameMFDFormat = "APFSDS-T";
	};
	class 14Rnd_50mm_rockets: VehicleMagazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_14Rnd_50mm_rockets0;
		displayNameShort = $STR_A3_CfgMagazines_14Rnd_80mm_rockets_dns;
		descriptionShort = $STR_A3_cfgMagazine_Skyfire_tooltip;
		ammo = R_50mm_HE;
		initSpeed = 44;
		maxLeadSpeed = 41.6667;
		count = 14;
		nameSound = rockets;
	};
	class 12Rnd_Vikhr_missiles: VehicleMagazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_12Rnd_Vikhr_missiles0;
		displayNameShort = $STR_A3_CfgMagazines_8Rnd_LG_scalpel_dns;
		descriptionShort = $STR_A3_cfgMagazine_Scalpel_tooltip;
		ammo = M_Vikhr_AT;
		initSpeed = 0;
		count = 12;
		nameSound = missiles;
		weight = 600;
	};
	class magazine_Bomb_AGM_154_x1: VehicleMagazine
	{
		scope = public;
		displayName = $STR_A3_A_CfgMagazines_magazine_Bomb_AGM_154_x10;
		descriptionShort = $STR_A3_A_CfgMagazines_magazine_Bomb_AGM_154_x11;
		displayNameShort = $STR_A3_Bomb_SDB_magazine_shortName;
		ammo = ammo_Bomb_AGM_154;
		initSpeed = 0;
		maxLeadSpeed = 60;
		sound[] = {"",db0,1};
		reloadSound[] = {"",db-50,1};
		count = 1;
		nameSound = "";
	};
	class 500Rnd_35mm_AA_shells: 680Rnd_35mm_AA_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_680Rnd_35mm_AA_shells0;
		displayNameShort = $STR_A3_A_CfgMagazines_680Rnd_35mm_AA_shells_dns;
		ammo = B_35mm_AA;
		initSpeed = 1440;
		count = 500;
	};
	class 500Rnd_35mm_AA_shells_Tracer_Red: 500Rnd_35mm_AA_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_35mm_AA_Tracer_Red;
		displayNameMFDFormat = "AA SHELLS";
	};
	class 500Rnd_35mm_AA_shells_Tracer_Green: 500Rnd_35mm_AA_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_35mm_AA_Tracer_Green;
		displayNameMFDFormat = "ОФЗТ";
	};
	class 500Rnd_35mm_AA_shells_Tracer_Yellow: 500Rnd_35mm_AA_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_35mm_AA_Tracer_Yellow;
	};
	class 1000Rnd_762x51_Belt_T_Red_Splash: 1000Rnd_762x51_Belt_T_Red
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Red_splash;
	};
	class 1000Rnd_762x51_Belt_T_Green_Splash: 1000Rnd_762x51_Belt_T_Green
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Green_splash;
	};
	class 1000Rnd_762x51_Belt_T_Yellow_Splash: 1000Rnd_762x51_Belt_T_Yellow
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Yellow_splash;
	};
	class 2000Rnd_762x51_Belt_T_Red_Splash: 2000Rnd_762x51_Belt_T_Red
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Red_splash;
	};
	class 2000Rnd_762x51_Belt_T_Green_Splash: 2000Rnd_762x51_Belt_T_Green
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Green_splash;
	};
	class 2000Rnd_762x51_Belt_T_Yellow_Splash: 2000Rnd_762x51_Belt_T_Yellow
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Minigun_Tracer_Yellow_splash;
	};
	class 1350Rnd_Gatling_30mm_Plane_CAS_01_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 1350;
	};
	class magazine_Fighter04_Gun20mm_AA_x120: VehicleMagazine
	{
		scope = public;
		displayName = $STR_A3_Gun_Fighter_20mm_x150_magazine_name;
		descriptionShort = $STR_A3_Gun_Fighter_20mm_x150_magazine_description;
		ammo = ammo_Fighter04_Gun20mm_AA;
		count = 120;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		tracersEvery = 3;
		nameSound = cannon;
	};
	class magazine_Fighter04_Gun20mm_AA_x120_red: VehicleMagazine
	{
		scope = public;
		displayName = $STR_A3_Gun_Fighter_20mm_x150_magazine_name;
		descriptionShort = $STR_A3_Gun_Fighter_20mm_x150_magazine_description;
		ammo = ammo_Fighter04_Gun20mm_AA_red;
		count = 120;
		initSpeed = 1036;
		maxLeadSpeed = 300;
		tracersEvery = 3;
		nameSound = cannon;
	};
	class 60Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 60;
	};
	class 60Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Yellow
	{
		author = $STR_A3_A_AveryTheKitty;
		count = 60;
	};
	class 250Rnd_762x51_Belt: VehicleMagazine
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		count = 250;
		ammo = B_762x51_Ball;
		initSpeed = 860;
		maxLeadSpeed = 36.111099;
		tracersEvery = 5;
		lastRoundsTracer = 4;
		nameSound = mgun;
		displayName = $STR_A3_CfgMagazines_2000Rnd_762x45_Belt0;
		descriptionShort = $STR_A3_CfgMagazines_2000Rnd_762x45_Belt1;
		displayNameMFDFormat = "COAX";
	};
	class 250Rnd_762x51_Belt_Red: 250Rnd_762x51_Belt
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Tracer_Red;
	};
	class 250Rnd_762x51_Belt_T_Red: 250Rnd_762x51_Belt_Red
	{
		author = $STR_A3_A_AveryTheKitty;
		tracersEvery = 1;
		displaynameshort = $STR_A3_tracer_dns;
	};
	class 250Rnd_762x51_Belt_Green: 250Rnd_762x51_Belt
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Tracer_Green;
		displayNameMFDFormat = "П";
	};
	class 250Rnd_762x51_Belt_T_Green: 250Rnd_762x51_Belt_Green
	{
		author = $STR_A3_A_AveryTheKitty;
		tracersEvery = 1;
		displaynameshort = $STR_A3_tracer_dns;
	};
	class 250Rnd_762x51_Belt_Yellow: 250Rnd_762x51_Belt
	{
		author = $STR_A3_A_AveryTheKitty;
		ammo = B_762x51_Tracer_Yellow;
	};
	class 250Rnd_762x51_Belt_T_Yellow: 250Rnd_762x51_Belt_Yellow
	{
		author = $STR_A3_A_AveryTheKitty;
		tracersEvery = 1;
		displaynameshort = $STR_A3_tracer_dns;
	};
	#include "dynamicLoadout.hpp"
};
