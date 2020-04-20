#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	// arsenal weapons
	class RFB_base_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		magazines[] = {20Rnd_762x51_Mag};
		reloadAction = GestureReloadSDAR;
		recoil = recoil_rfb;
		maxZeroing = 800;
		hiddenSelections[] =
		{
			camo,
			camo1
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\RFB\Data\RFB_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\RFB\Data\RFB_UW_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\RFB\Data\RFB.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\RFB\Data\RFB_UW.rvmat"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F\Rifles\SDAR\Data\Anim\SDAR.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot{};
		};
		bullet1[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Metal_01",db-7,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Metal_02",db-7,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Metal_03",db-7,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Metal_04",db-7,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Dirt_01",db-7,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Dirt_02",db-7,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Dirt_03",db-7,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Dirt_04",db-7,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Grass_01",db-7,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Grass_02",db-7,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Grass_03",db-7,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\shells\5_56\Shellcase_556_Grass_04",db-7,1,15};
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
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			Single,
			single_medium_optics1,
			single_far_optics2
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.1;
			dispersion = 0.00131;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
		};
		aiDispersionCoefY = 6;
		aiDispersionCoefX = 4;
	};
	class arifle_RFB_F: RFB_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_RFB_F;
		scope = public;
		model = "\A3\Weapons_F\Rifles\SDAR\SDAR_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
		};
		inertia = 0.4;
		aimTransitionSpeed = 1.4;
		dexterity = 1.6;
		displayName = $STR_A3_A_CfgWeapons_arifle_RFB_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\RFB\Data\UI\icon_arifle_RFB_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_RFB_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_RFB_F_Library0;
		};
	};
};