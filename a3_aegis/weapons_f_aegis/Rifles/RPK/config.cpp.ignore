#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

	// arsenal weapons
	class arifle_RPK_base_F: Rifle_Base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\RPK\RPK_F.p3d";
	  	hiddenSelections[] = {camo_1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Rifles\RPK\Data\RPK_CO.paa"};
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_RPK_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_RPK_base_F_Library0;
		};
		handAnim[] =
		{
	    	OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\AKM.rtm"
		};
		reloadAction = GestureReloadAKM;
		magazines[] = {75Rnd_762x39_Mag_F};
		magazineWell[] = {AK_762x39};
		magazineReloadSwitchPhase = 0.48;
		discreteDistance[] =
		{
			100,
			200,
			300,
			400,
			500,
			600,
			700,
			800
		};
		discreteDistanceInitIndex = 1;
		initSpeed = 715;
		inertia = 0.8;
		dexterity = 1.6;
		aimTransitionSpeed = 0.9;
		recoil = recoil_rpk;
		deployedPivot = bipod;
		hasBipod = true;
		bullet1[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_01",db-6,1,15};
		bullet2[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_02",db-6,1,15};
		bullet3[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_03",db-6,1,15};
		bullet4[] = {"\A3\Sounds_F\weapons\shells\7_62\metal_762_04",db-6,1,15};
		bullet5[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_01",db-8,1,15};
		bullet6[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_02",db-8,1,15};
		bullet7[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_03",db-8,1,15};
		bullet8[] = {"\A3\Sounds_F\weapons\shells\7_62\dirt_762_04",db-8,1,15};
		bullet9[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_01",db-12,1,15};
		bullet10[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_02",db-12,1,15};
		bullet11[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_03",db-12,1,15};
		bullet12[] = {"\A3\Sounds_F\weapons\shells\7_62\grass_762_04",db-12,1,15};
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
			mass = 160;
		};
		modes[] =
		{
			FullAuto,
	    	Single,
			FullAuto_medium
	  	};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
	  	};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1;
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = false;
			burstRangeMax = 8;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 175;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.25;
			aiRateOfFire = 2;
		};
	};
	class arifle_RPK_F: arifle_RPK_base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_BOOLY;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\RPK\Data\UI\icon_arifle_RPK_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_RPK_F0;
		baseWeapon = arifle_RPK_F;
	};
};