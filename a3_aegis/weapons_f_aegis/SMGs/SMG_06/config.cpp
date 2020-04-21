#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
/*
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class MuzzleSlot_556;
class MuzzleSlot_65;
class MuzzleSlot_762;
class MuzzleSlot_MG;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	// arsenal weapons
	class SMG_06_base_F: Rifle_Short_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_Krycek_and_Noodum;
		scope = private;
		displayName = $STR_A3_A_CfgWeapons_SMG_06_base_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_SMG_06_base_F1;
		model = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_06\SMG_06_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {camo_1};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Beta\SMGs\SMG_02\Data\Anim\SMG_02.rtm"
		};
		reloadAction = GestureReloadSMG_02;
		magazines[] =
		{
			30Rnd_9x21_Mag_SMG_02,
			30Rnd_9x21_Mag_SMG_02_Tracer_Red,
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow,
			30Rnd_9x21_Mag_SMG_02_Tracer_Green
		};
		htMin = 7;
		htMax = 880;
		inertia = 0.4;
		aimTransitionSpeed = 1.3;
		dexterity = 1.6;
		initSpeed = 380;
		recoil = recoil_smg_06;
		maxZeroing = 400;
		discreteDistance[] =
		{
			100,
			200
		};
		discreteDistanceInitIndex = 0;
		cursor = smg;
		bullet1[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_01",db-6,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_02",db-6,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_03",db-6,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\Shells\9mm\metal_9mm_04",db-6,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_01",db-8,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_02",db-8,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_03",db-8,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\Shells\9mm\dirt_9mm_04",db-8,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_01",db-13,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_02",db-13,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_03",db-13,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\Shells\9mm\grass_9mm_04",db-13,1,15};
		soundBullet[] =
		{
			bullet1,1/12,
			bullet2,1/12,
			bullet3,1/12,
			bullet4,1/12,
			bullet5,1/12,
			bullet6,1/12,
			bullet7,1/12,
			bullet8,1/12,
			bullet9,1/12,
			bullet10,1/12,
			bullet11,1/12,
			bullet12,1/12
		};
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_SMG_06_base_F_Library0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\Data_F\Proxies\weapon_slots\MUZZLE";
				compatibleItems[] =
				{
					muzzle_snds_L,
					muzzle_mzls_L
				};
				iconPosition[] = {0.08,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.45,0.27};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] = {0.28,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				iconPosition[] = {0.4,0.32};
				iconScale = 0.15;
			};
			mass = 90;
		};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		modes[] =
		{
			FullAuto,
			Single
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00174;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.085;
			dispersion = 0.00174;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			aiRateOfFireDistance = 50;
	  	};
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 9;
	};

	// unit weapons
	class SMG_06_F: SMG_06_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Krycek_and_Noodum;
		baseWeapon = SMG_06_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_SMG_06_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_06\Data\UI\icon_SMG_06_F_X_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_06\Data\SMG_06_F_CO.paa"};
	};
	class SMG_06_ACO_F: SMG_06_F
	{
		author = $STR_A3_A_AveryTheKitty_Krycek_and_Noodum;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO_grn_smg;
			};
		};
	};
};
*/