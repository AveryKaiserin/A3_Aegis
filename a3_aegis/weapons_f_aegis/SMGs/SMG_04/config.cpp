#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot_Rail;
class PointerSlot_Rail;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SMG_04_base_F: Rifle_Short_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Steffe_Engdahl;
		scope = private;
		displayName = $STR_A3_A_CfgWeapons_SMG_04_base_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_SMG_04_base_F1;
		model = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\SMG_04_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {camo};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\Anim\SMG_04.rtm"
		};
		reloadAction = GestureReloadSMG_03;
		magazines[] =
		{
			40Rnd_460x30_Mag_F,
			20Rnd_460x30_Mag_F
		};
		magazineWell[] = {SMG_04_460x30};
		magazineReloadSwitchPhase = 0.48;
		htMin = 3;
		htMax = 380;
		inertia = 0.2;
		aimTransitionSpeed = 1.5;
		dexterity = 1.8;
		initSpeed = 735;
		recoil = recoil_smg_04;
		maxZeroing = 400;
		discreteDistance[] =
		{
			100,
			200
		};
		discreteDistanceInitIndex = 0;
		cursor = smg;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_SMG_04_base_F_Library0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\Data_F\Proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {muzzle_snds_460};
				iconPosition[] =
				{
					0.13, // X
					0.42 // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] =
				{
					0.36, // X
					0.22 // Y
				};
				iconScale = 0.15;
			};
			class PointerSlot{};
	/*
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] =
				{
					0.31, // X
					0.43 // Y
				};
				iconScale = 0.2;
			};
	*/
			mass = 40;
		};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		modes[] =
		{
			Single,
			FullAuto
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.063; // 950 RPM
			dispersion = 0.00131;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.063; // 950 RPM
			dispersion = 0.00131;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
	  	};
	};
	class SMG_04_blk_F: SMG_04_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Steffe_Engdahl;
		baseWeapon = SMG_04_blk_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_SMG_04_blk_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\UI\icon_SMG_04_blk_F_X_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\SMG_04_blk_F_CO.paa"};
	};
	class SMG_04_khk_F: SMG_04_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Steffe_Engdahl;
		baseWeapon = SMG_04_khk_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_SMG_04_khk_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\UI\icon_SMG_04_khk_F_X_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\SMG_04_khk_F_CO.paa"};
	};
	class SMG_04_snd_F: SMG_04_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_Steffe_Engdahl;
		baseWeapon = SMG_04_snd_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_SMG_04_snd_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\UI\icon_SMG_04_snd_F_X_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_04\Data\SMG_04_snd_F_CO.paa"};
	};
	#include "presets.hpp"
};