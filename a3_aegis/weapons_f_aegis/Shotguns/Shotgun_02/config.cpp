#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
/*
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot_Rail;
class PointerSlot_Rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class sgun_Shotgun_02_base_F: Rifle_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		displayName = $STR_A3_A_CfgWeapons_sgun_Shotgun_02_base_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_sgun_Shotgun_02_base_F1;
		model = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Shotgun_02\Shotgun_02_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\Anim\CTAR_F.rtm"
		};
		reloadAction = GestureReloadCTAR;
		magazines[] =
		{
			8Rnd_12Gauge_Pellets,
			8Rnd_12Gauge_Slug
		};
		magazineWell[] = {Shotgun_12GA};
		magazineReloadSwitchPhase = 0.48;
		htMin = 9;
		htMax = 870;
		inertia = 0.4;
		aimTransitionSpeed = 1.1;
		initSpeed = 375;
		recoil = recoil_car_shotgun;
		maxZeroing = 100;
		cursor = sgun;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_sgun_Shotgun_02_base_F_Library0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] =
				{
					0.45, // X
					0.28 // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] =
				{
					0.35, // X
					0.45 // Y
				};
				iconScale = 0.2;
			};
			mass = 100;
		};
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {Single};
		class Single: Mode_SemiAuto
		{
			sounds[] = {StandardSound};
			reloadTime = 0.15;
			dispersion = 0.00116;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
	};
	class sgun_Shotgun_02_blk_F: sgun_Shotgun_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = sgun_Shotgun_02_blk_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_Shotgun_02_blk_F0;
		//picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Shotgun_02\Data\UI\icon_sgun_Shotgun_02_blk_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Shotguns\Shotgun_02\Data\Shotgun_02_F_CO.paa"
		};
	};
	class sgun_Shotgun_02_hex_F: sgun_Shotgun_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = sgun_Shotgun_02_hex_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_Shotgun_02_hex_F0;
		//picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Shotgun_02\Data\UI\icon_sgun_Shotgun_02_hex_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_bhex_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_bhex_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Shotguns\Shotgun_02\Data\Shotgun_02_F_bhex_CO.paa"
		};
	};
	class sgun_Shotgun_02_ghex_F: sgun_Shotgun_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = sgun_Shotgun_02_ghex_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_sgun_Shotgun_02_ghex_F0;
		//picture = "\A3_Aegis\Weapons_F_Aegis\Shotguns\Shotgun_02\Data\UI\icon_sgun_Shotgun_02_ghex_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_1_ghex_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_ghex_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Shotguns\Shotgun_02\Data\Shotgun_02_F_ghex_CO.paa"
		};
	};
	#include "presets.hpp"
};
*/