#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SMG_06_base_F: Rifle_Short_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = private;
		displayName = $STR_A3_A_CfgWeapons_SMG_06_base_F0;
		descriptionShort = $STR_A3_A_CfgWeapons_SMG_06_base_F1;
		model = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_06\SMG_06_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {Camo};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_06\Data\Anim\SMG_06.rtm"
		};
		/*
		reloadAction = GestureReloadSMG_06;
		*/
		magazines[] = {53Rnd_9x21_Mag_F};
		magazineWell[] = {SMG_06_9x21};
		magazineReloadSwitchPhase = 0.48;
		htMin = 3;
		htMax = 380;
		inertia = 0.3;
		aimTransitionSpeed = 1.3;
		dexterity = 1.8;
		initSpeed = 380;
		recoil = recoil_smg_06;
		maxZeroing = 200;
		discreteDistance[] =
		{
			100,
			200
		};
		discreteDistanceInitIndex = 0;
		cursor = smg;
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
				iconPosition[] =
				{
					0.13, // X
					0.42 // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot{};
			class UnderbarrelSlot{};
			mass = 50;
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] =
		{
			FullAuto,
			Single
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.085; // 700 rpm
			dispersion = 0.00203;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.085; // 700 rpm
			dispersion = 0.00203;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 12;
			midRangeProbab = 0.7;
			maxRange = 25;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 25;
	  	};
	};
	class SMG_06_F: SMG_06_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = SMG_06_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_SMG_06_F0;
		//picture = "\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_06\Data\UI\icon_SMG_06_F_X_CA.paa";
	  	hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\SMGs\SMG_06\Data\Bizon_CO.paa"};
	};
};