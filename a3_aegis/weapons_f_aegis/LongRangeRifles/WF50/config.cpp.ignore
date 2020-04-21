#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
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
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class WF50_base_F: Rifle_Long_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_srifle_WF50_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_srifle_WF50_F1;
		magazines[] = {5Rnd_127x99_Mag};
		magazineWell[] = {WF50_127x99};
		model = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\WF50_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
		hiddenSelections[] = {camo};
		recoil = recoil_wf50;
		initSpeed = 936;
		inertia = 1.2;
		aimTransitionSpeed = 0.5;
		reloadAction = GestureReloadDMR05;
		maxZeroing = 1800;
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\Anim\WF50.rtm"
		};
		cursor = srifle;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_srifle_WF50_F_Library0;
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = SniperCloud;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 380;
			class MuzzleSlot{};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.55,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] = {0.55,0.3};
				iconScale = 0.2;
			};
		};
		deployedPivot = bipod;
		hasBipod = true;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			Single,
			far_optic1,
			medium_optic2,
			far_optic2
		};
		bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01",db-4,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02",db-4,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03",db-4,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04",db-4,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01",db-4,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02",db-4,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03",db-4,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04",db-4,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01",db-4,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02",db-4,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03",db-4,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04",db-4,1,15};
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
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.25;
			dispersion = 0.00044;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single
		{
			showToPlayer = false;
			minRange = 150;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 700;
			requiredOpticType = 1;
		};
		class medium_optic2: Single
		{
			showToPlayer = false;
			minRange = 250;
			minRangeProbab = 0.1;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1000;
			requiredOpticType = 2;
		};
		class far_optic2: far_optic1
		{
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 1050;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 2000;
			requiredOpticType = 2;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
	};
	class srifle_WF50_F: WF50_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_srifle_WF50_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\UI\icon_srifle_WF50_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\LongRangeRifles\WF50\Data\WF50_CO.paa"};
	};
	class srifle_WF50_LRPS_F: srifle_WF50_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRPS;
			};
		};
	};
};