#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class MuzzleSlot_762;
class SlotInfo;
class CowsSlot_Rail;
class PointerSlot;
class UnderBarrelSlot_Rail;
class MagazineSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	// Arma 3 Apex
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1; // 600 RPM
		};
		class Burst: Mode_Burst
		{
	    	reloadTime = 0.06; // 1000 RPM
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.1; // 600 RPM
		};
	};
	class arifle_AK12_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F{};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_F_X_CA.paa";
	};
	// Arma 3 Enoch
	class arifle_AK12_lush_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_lush_F0;
	};
	class arifle_AK12_arid_F: arifle_AK12_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_arid_F0;
	};
	class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_lush_F0;
	};
	class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_arid_F0;
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F{};
	class arifle_AK12U_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_F0;
	};
	class arifle_AK12U_lush_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_lush_F0;
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
	};
	class arifle_AK12U_arid_F: arifle_AK12U_base_F
	{
	  	displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_arid_F0;
	};
	class arifle_RPK12_base_F;
	class arifle_RPK12_F;
	class arifle_RPK12_lush_F: arifle_RPK12_base_F
	{
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
	};
	// Arma 3 Aegis
	class arifle_AK12_545_base_F: arifle_AK12_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = {AK_545x39};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.085; // 700 RPM
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.085; // 700 RPM
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_GL_545_base_F: arifle_AK12_GL_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = {AK_545x39};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.085; // 700 RPM
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.085; // 700 RPM
			dispersion = 0.00073;
		};
	};
	class arifle_AK12U_545_base_F: arifle_AK12U_base_F
	{
	  	descriptionShort = $STR_A3_A_CfgWeapons_arifle_AK12_545_base_F1;
		magazineWell[] = {AK_545x39};
	  	initSpeed = 735;
	  	recoil = recoil_ak12u_545;
		class WeaponSlotsInfo: WeaponSlotsInfo
	  	{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] =
				{
					muzzle_snds_545,
					muzzle_snds_545_wdm_F,
					muzzle_snds_545_lush_F,
					muzzle_snds_545_arid_F,
					muzzle_mzls_545
				};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot{};
	  	};
		class Single: Single
		{
			reloadTime = 0.085; // 700 RPM
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.085; // 700 RPM
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_545_F: arifle_AK12_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762{};
			class CowsSlot: CowsSlot_Rail{};
			class UnderBarrelSlot: UnderBarrelSlot_Rail{};
		};
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"
		};
		baseWeapon = arifle_AK12_545_F;
	};
	class arifle_AK12_545_lush_F: arifle_AK12_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_lush_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_lush_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762{};
			class CowsSlot: CowsSlot_Rail{};
			class UnderBarrelSlot: UnderBarrelSlot_Rail{};
		};
		magazines[] =
		{
			30Rnd_545x39_AK12_Lush_Mag_F,
			30Rnd_545x39_AK12_Lush_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat"
		};
		baseWeapon = arifle_AK12_545_lush_F;
	};
	class arifle_AK12_545_arid_F: arifle_AK12_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_arid_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_545_arid_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762{};
			class CowsSlot: CowsSlot_Rail{};
			class UnderBarrelSlot: UnderBarrelSlot_Rail{};
		};
		magazines[] =
		{
			30Rnd_545x39_AK12_Arid_Mag_F,
			30Rnd_545x39_AK12_Arid_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"
		};
		baseWeapon = arifle_AK12_545_arid_F;
	};
	class arifle_AK12_GL_545_F: arifle_AK12_GL_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762{};
			class CowsSlot: CowsSlot_Rail{};
		};
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_gl_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_GL_F.rvmat"
		};
		baseWeapon = arifle_AK12_GL_545_F;
	};
	class arifle_AK12_GL_545_lush_F: arifle_AK12_GL_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_lush_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_lush_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762{};
			class CowsSlot: CowsSlot_Rail{};
		};
		magazines[] =
		{
			30Rnd_545x39_AK12_Lush_Mag_F,
			30Rnd_545x39_AK12_Lush_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_khaki.rvmat"
		};
		baseWeapon = arifle_AK12_GL_545_lush_F;
	};
	class arifle_AK12_GL_545_arid_F: arifle_AK12_GL_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_545_arid_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_545_arid_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762{};
			class CowsSlot: CowsSlot_Rail{};
		};
		magazines[] =
		{
			30Rnd_545x39_AK12_Arid_Mag_F,
			30Rnd_545x39_AK12_Arid_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_gl_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_GL_F_camo.rvmat"
		};
		baseWeapon = arifle_AK12_GL_545_arid_F;
	};
	class arifle_AK12U_545_F: arifle_AK12U_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Mag_F,
			30Rnd_545x39_AK12_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_CO.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_1.rvmat",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
		};
		baseWeapon = arifle_AK12U_545_F;
	};
	class arifle_AK12U_545_lush_F: arifle_AK12U_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_lush_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_lush_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Lush_Mag_F,
			30Rnd_545x39_AK12_Lush_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_khaki_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_khaki_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_khaki.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_khaki.rvmat"
		};
		baseWeapon = arifle_AK12U_545_lush_F;
	};
	class arifle_AK12U_545_arid_F: arifle_AK12U_545_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_arid_F0;
		picture = "\A3_Aegis\Weapons_F_Aegis\Rifles\AK12\Data\UI\icon_arifle_AK12U_545_arid_F_X_CA.paa";
		magazines[] =
		{
			30Rnd_545x39_AK12_Arid_Mag_F,
			30Rnd_545x39_AK12_Arid_Mag_Tracer_F
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_1_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_ak12_2_camo_CO.paa",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_1_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat",
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"
		};
		baseWeapon = arifle_AK12U_545_arid_F;
	};
	#include "presets.hpp"
};