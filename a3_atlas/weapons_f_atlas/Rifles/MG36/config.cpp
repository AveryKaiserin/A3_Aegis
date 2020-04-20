#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
/*
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot_65;
class CowsSlot_Rail;
class PointerSlot_Rail;
class UnderBarrelSlot_rail;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class UGL_F;

	// arsenal weapons
	class arifle_MG36_base_F: Rifle_Base_F
	{
		model = "\A3_Atlas\Weapons_F_Atlas\Rifles\MG36\MG36_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_MG_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_01_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_02_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_03_CO.paa"
		};
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_G36_base_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_G36_base_F_Library0;
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
		reloadAction = GestureReloadG36;
		magazines[] = {100Rnd_65x39_caseless_msbs_mag};
		magazineWell[] =
		{
			MX_65x39_MSBS,
			MX_65x39_MSBS_Large
		};
		magazineReloadSwitchPhase = 0.48;
		cursor = mg;
		recoil = recoil_G36;
		initSpeed = 920;
		inertia = 0.6;
		dexterity = 1.5;
		aimTransitionSpeed = 1.1;
		maxZeroing = 1000;
		discreteDistance[] =
		{
			100,
			200,
			300,
			400,
			500,
			600
		};
		discreteDistanceInitIndex = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[] =
				{
					0,
					0.38
				};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] =
				{
					0.479,
					0.194
				};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] =
				{
					0.285,
					0.344
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				iconPosition[] =
				{
					0.285,
					0.344
				};
				iconScale = 0.2;
			};
			mass = 100;
		};
		modes[] =
		{
			FullAuto,
			Burst,
			Single,
			Burst_medium,
			single_medium_optics1,
			single_medium_optics2
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			textureType = dual;
			burst = 2;
			reloadTime = 0.08;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.08;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class Burst_medium: Burst
		{
			showToPlayer = false;
			burstRangeMax = 5;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = Nabojnicestart;
				directionName = Nabojniceend;
				effectName = CaselessAmmoCloud;
			};
		};
	};
	class arifle_MG36_base_sand_F: arifle_MG36_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_01_sand_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_02_sand_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_03_sand_CO.paa"
		};
	};
	class arifle_MG36_base_khaki_F: arifle_MG36_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_01_khaki_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_02_khaki_CO.paa",
			"\A3_Atlas\Weapons_F_Atlas\Rifles\G36\Data\G36_F_03_khaki_CO.paa"
		};
	};
	class arifle_MG36_F: arifle_MG36_base_F
	{
		author = $STR_A3_A_AveryTheKitty_MrBrightside_and_Toadie2K;
		scope = public;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\MG36\Data\UI\icon_arifle_MG36_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_MG36_F0;
		baseWeapon = arifle_MG36_F;
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_MG36_sand_F: arifle_MG36_base_sand_F
	{
		author = $STR_A3_A_AveryTheKitty_MrBrightside_and_Toadie2K;
		scope = public;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\MG36\Data\UI\icon_arifle_MG36_sand_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_MG36_sand_F0;
		baseWeapon = arifle_MG36_sand_F;
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
	class arifle_MG36_khaki_F: arifle_MG36_base_sand_F
	{
		author = $STR_A3_A_AveryTheKitty_MrBrightside_and_Toadie2K;
		scope = public;
		picture = "\A3_Atlas\Weapons_F_Atlas\Rifles\MG36\Data\UI\icon_arifle_MG36_khaki_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_MG36_khaki_F0;
		baseWeapon = arifle_MG36_khaki_F;
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_khk;
			};
		};
	};

	// unit weapons
	class arifle_MG36_lrco_pointer_F: arifle_MG36_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRCO_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_MG36_sand_lrco_pointer_F: arifle_MG36_sand_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_LRCO_snd_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_snd;
			};
		};
	};
};
*/