#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
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
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_SA80_base_F: Rifle_Base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\SA80_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		descriptionShort = $STR_A3_A_CfgWeapons_arifle_SA80_base_F1;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgWeapons_arifle_SA80_base_F_Library0;
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\Anim\SA80_vfg.rtm"
		};
		reloadAction = GestureReloadTRG;
		magazines[] = {30Rnd_65x39_caseless_black_mag};
		magazineWell[] = {MX_65x39};
		magazineReloadSwitchPhase = 0.48;
		recoil = recoil_sa80;
		initSpeed = 930;
		inertia = 0.5;
		dexterity = 1.6;
		aimTransitionSpeed = 1;
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
					0.043, // X
					0.348 // Y
				};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[] =
				{
					0.479, // X
					0.194 // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
			mass = 140;
		};
		modes[] =
		{
			Single,
			FullAuto,
			single_medium_optics1,
			single_medium_optics2,
			fullauto_medium
		};
		class Single: Mode_SemiAuto
		{
			RPM(705);
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
			RPM(705);
			dispersion = 0.00116;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = false;
			burst = 3;
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
		deployedPivot = bipod;
		hasBipod = true;
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
	class arifle_SA80_GL_base_F: arifle_SA80_base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\SA80_GL_F.p3d";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\Anim\SA80_GL.rtm"
		};
		inertia = 0.6;
		aimTransitionSpeed = 0.8;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				iconPosition[] =
				{
					0.123, // X
					0.789 // Y
				};
				iconScale = 0.2;
			};
	    	mass = 160;
	  	};
		muzzles[] =
		{
			this,
			EGLM
		};
		class EGLM: UGL_F
		{
			displayName = $STR_A3_A_CfgWeapons_arifle_SA80_GL_base_F_EGLM0;
			useModelOptics = false;
			useExternalOptic = false;
			cameraDir = OP_look;
			discreteDistance[] =
			{
				50,
				75,
				100,
				150,
				200,
				250,
				300,
				350,
				400
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_75,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250,
				OP_eye_300,
				OP_eye_350,
				OP_eye_400
			};
			discreteDistanceInitIndex = 1;
			reloadAction = GestureReloadSPARUGL;
			magazineReloadSwitchPhase = 0.4;
		};
		hasBipod = false;
	};
	class arifle_SA80_C_base_F: arifle_SA80_base_F
	{
		model = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\SA80_C_F.p3d";
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\Anim\SA80_C.rtm"
		};
		initSpeed = 780;
		inertia = 0.4;
		dexterity = 1.7;
		aimTransitionSpeed = 1.2;
		maxZeroing = 600;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] =
				{
					0.043, // X
					0.348 // Y
				};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[] =
				{
					0.285, // X
					0.344 // Y
				};
				iconScale = 0.2;
			};
	    	mass = 100;
	  	};
		class Single: Single
		{
			dispersion = 0.00145;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00145;
		};
		hasBipod = false;
	};
	class arifle_SA80_blk_F: arifle_SA80_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_blk_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_blk_F0;
		baseWeapon = arifle_SA80_blk_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\grip_CO.paa"
		};
	};
	class arifle_SA80_GL_blk_F: arifle_SA80_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_GL_blk_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_GL_blk_F0;
		baseWeapon = arifle_SA80_GL_blk_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class arifle_SA80_C_blk_F: arifle_SA80_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_C_blk_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_C_blk_F0;
		baseWeapon = arifle_SA80_C_blk_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_C_CO.paa"
		};
	};
	class arifle_SA80_snd_F: arifle_SA80_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_snd_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_snd_F0;
		baseWeapon = arifle_SA80_snd_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_02_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\grip_CO.paa"
		};
		magazines[] = {30Rnd_65x39_caseless_mag};
	};
	class arifle_SA80_GL_snd_F: arifle_SA80_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_GL_snd_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_GL_snd_F0;
		baseWeapon = arifle_SA80_GL_snd_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_02_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_snd_CO.paa"
		};
		magazines[] = {30Rnd_65x39_caseless_mag};
	};
	class arifle_SA80_C_snd_F: arifle_SA80_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_C_snd_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_C_snd_F0;
		baseWeapon = arifle_SA80_C_snd_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_snd_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_C_snd_CO.paa"
		};
		magazines[] = {30Rnd_65x39_caseless_mag};
	};
	class arifle_SA80_khk_F: arifle_SA80_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_khk_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_khk_F0;
		baseWeapon = arifle_SA80_khk_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_02_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\grip_khk_CO.paa"
		};
		magazines[] = {30Rnd_65x39_caseless_khaki_mag};
	};
	class arifle_SA80_GL_khk_F: arifle_SA80_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_GL_khk_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_GL_khk_F0;
		baseWeapon = arifle_SA80_GL_khk_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_02_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_khk_CO.paa"
		};
		magazines[] = {30Rnd_65x39_caseless_khaki_mag};
	};
	class arifle_SA80_C_khk_F: arifle_SA80_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\UI\icon_arifle_SA80_C_khk_F_X_CA.paa";
		displayName = $STR_A3_A_CfgWeapons_arifle_SA80_C_khk_F0;
		baseWeapon = arifle_SA80_C_khk_F;
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_01_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_C_khk_CO.paa"
		};
		magazines[] = {30Rnd_65x39_caseless_khaki_mag};
	};
	// L85A3 6.5 mm (Black) + ACO (Red) + IR Laser Pointer
	class arifle_SA80_blk_aco_pointer_f: arifle_SA80_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 6.5 mm (Black) + Mk17 Holosight (Black) + IR Laser Pointer
	class arifle_SA80_blk_holo_pointer_f: arifle_SA80_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 6.5 mm (Black) + ARCO (Black) + IR Laser Pointer
	class arifle_SA80_blk_arco_pointer_f: arifle_SA80_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 GL 6.5 mm (Black) + ACO (Red) + IR Laser Pointer
	class arifle_SA80_GL_blk_aco_pointer_f: arifle_SA80_GL_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 GL 6.5 mm (Black) + ARCO (Black) + IR Laser Pointer
	class arifle_SA80_GL_blk_arco_pointer_f: arifle_SA80_GL_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		_generalMacro = arifle_SA80_GL_blk_arco_pointer_f;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L22A3 6.5 mm (Black) + Mk17 Holosight (Black) + IR Laser Pointer
	class arifle_SA80_C_blk_holo_pointer_f: arifle_SA80_C_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L22A3 6.5 mm (Black) + Mk17 Holosight (Black)
	class arifle_SA80_C_blk_holo_f: arifle_SA80_C_blk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_blk_F;
			};
		};
	};
	// L85A3 6.5 mm (Khaki) + ACO (Red) + IR Laser Pointer
	class arifle_SA80_khk_aco_pointer_f: arifle_SA80_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 6.5 mm (Khaki) + Mk17 Holosight (Khaki) + IR Laser Pointer
	class arifle_SA80_khk_holo_pointer_f: arifle_SA80_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 6.5 mm (Khaki) + ARCO (Black) + IR Laser Pointer
	class arifle_SA80_khk_arco_pointer_f: arifle_SA80_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 GL 6.5 mm (Khaki) + ACO (Red) + IR Laser Pointer
	class arifle_SA80_GL_khk_aco_pointer_f: arifle_SA80_GL_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 GL 6.5 mm (Khaki) + ARCO (Black) + IR Laser Pointer
	class arifle_SA80_GL_khk_arco_pointer_f: arifle_SA80_GL_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco_blk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L22A3 6.5 mm (Khaki) + Mk17 Holosight (Khaki) + IR Laser Pointer
	class arifle_SA80_C_khk_holo_pointer_f: arifle_SA80_C_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_khk_F;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L22A3 6.5 mm (Khaki) + Mk17 Holosight (Khaki)
	class arifle_SA80_C_khk_holo_f: arifle_SA80_C_khk_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight_khk_F;
			};
		};
	};
	// L85A3 6.5 mm (Sand) + ACO (Red) + IR Laser Pointer
	class arifle_SA80_snd_aco_pointer_f: arifle_SA80_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 6.5 mm (Sand) + Mk17 Holosight + IR Laser Pointer
	class arifle_SA80_snd_holo_pointer_f: arifle_SA80_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 6.5 mm (Sand) + ARCO + IR Laser Pointer
	class arifle_SA80_snd_arco_pointer_f: arifle_SA80_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 GL 6.5 mm (Sand) + ACO (Red) + IR Laser Pointer
	class arifle_SA80_GL_snd_aco_pointer_f: arifle_SA80_GL_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_ACO;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L85A3 GL 6.5 mm (Sand) + ARCO + IR Laser Pointer
	class arifle_SA80_GL_snd_arco_pointer_f: arifle_SA80_GL_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Arco;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L22A3 6.5 mm (Sand) + Mk17 Holosight + IR Laser Pointer
	// L85A3 6.5 mm (Sand) + ARCO + IR Laser Pointer
	class arifle_SA80_C_snd_holo_pointer_f: arifle_SA80_C_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight;
			};
			class LinkedItemsAcc
			{
				slot = PointerSlot;
				item = acc_pointer_IR;
			};
		};
	};
	// L22A3 6.5 mm (Sand) + Mk17 Holosight
	// L85A3 6.5 mm (Sand) + ARCO + IR Laser Pointer
	class arifle_SA80_C_snd_holo_f: arifle_SA80_C_snd_F
	{
		author = $STR_A3_A_AveryTheKitty;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = CowsSlot;
				item = optic_Holosight;
			};
		};
	};
};