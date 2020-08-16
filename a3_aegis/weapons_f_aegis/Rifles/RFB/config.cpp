#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class SlotInfo;
class MuzzleSlot_762;
class CowsSlot_Rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
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
			"\A3\Weapons_F\Rifles\SDAR\Data\RFB_UW_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\RFB\Data\RFB.rvmat",
			"\A3\Weapons_F\Rifles\SDAR\Data\RFB_UW.rvmat"
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
				iconPosition[] =
				{
					0.5, // X
					0.35 // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot{};
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
			reloadTime = 0.13;
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