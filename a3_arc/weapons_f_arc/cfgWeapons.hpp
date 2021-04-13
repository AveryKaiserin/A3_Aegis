class CfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class NVGoggles_arc_F: NVGoggles
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_NVGoggles_arc_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Binocular\Data\UI\icon_NVGoggles_arc_F_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\A3_Arc\Weapons_F_Arc\Binocular\Data\NVGoggles_arc_F.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {camo};
		};
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_03_F;
	class srifle_DMR_03_arctic_F: srifle_DMR_03_F
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_srifle_DMR_03_arctic_F0;
		picture = "\A3_Arc\Weapons_F_Arc\LongRangeRifles\DMR_03\Data\UI\icon_srifle_DMR_03_arctic_F_X_CA.paa";
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\LongRangeRifles\DMR_03\Data\DMR_03_01_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\LongRangeRifles\DMR_03\Data\DMR_03_02_arctic_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_01_woodland.rvmat",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\Data\DMR_03_02_woodland.rvmat"
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
		class Single;
		class Burst;
		class FullAuto;
	};
	class arifle_AK12_F: arifle_AK12_base_F{};
	class arifle_AK12_545_F: arifle_AK12_F{};
	class arifle_AK12_arctic_F: arifle_AK12_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_arctic_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_arctic_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\UI\icon_arifle_AK12_arctic_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_1_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_2_arctic_CO.paa"
		};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F{};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F{};
	class arifle_AK12_GL_545_F: arifle_AK12_GL_F{};
	class arifle_AK12_GL_arctic_F: arifle_AK12_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_GL_arctic_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_GL_arctic_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arctic_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_1_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_2_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_gl_arctic_CO.paa"
		};
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F{};
	class arifle_AK12U_F: arifle_AK12U_base_F{};
	class arifle_AK12U_545_F: arifle_AK12U_F{};
	class arifle_AK12U_arctic_F: arifle_AK12U_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12U_arctic_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_arctic_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\UI\icon_arifle_AK12U_arctic_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_1_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_2_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AKU12_RPK12_parts_arctic_CO.paa"
		};
	};
	class arifle_RPK12_base_F: arifle_AK12_base_F{};
	class arifle_RPK12_arctic_F: arifle_RPK12_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_RPK12_arctic_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_RPK12_arctic_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\UI\icon_arifle_RPK12_arctic_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_1_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_2_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AKU12_RPK12_parts_arctic_CO.paa"
		};
	};
	class arifle_AK12_545_arctic_F: arifle_AK12_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_545_arctic_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_arctic_F0;
	  	descriptionShort = $STR_A3_CfgWeapons_arifle_AKS_base_F1;
		magazines[] = {30Rnd_545x39_black_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\UI\icon_arifle_AK12_arctic_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_1_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_2_arctic_CO.paa"
		};
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
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12_GL_545_arctic_F: arifle_AK12_GL_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12_GL_545_arctic_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12_545_GL_arctic_F0;
	  	descriptionShort = $STR_A3_CfgWeapons_arifle_AKS_base_F1;
		magazines[] = {30Rnd_545x39_black_Mag_F};
		magazineWell[] = {AK_545x39};
	 	initSpeed = 900;
	  	recoil = recoil_ak12_545;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\UI\icon_arifle_AK12_GL_arctic_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_1_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_2_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_gl_arctic_CO.paa"
		};
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
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00073;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00073;
		};
	};
	class arifle_AK12U_545_arctic_F: arifle_AK12U_545_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_AK12U_545_arctic_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_AK12U_545_arctic_F0;
	  	descriptionShort = $STR_A3_CfgWeapons_arifle_AKS_base_F1;
		magazines[] = {30Rnd_545x39_black_Mag_F};
		magazineWell[] = {AK_545x39};
	  	initSpeed = 735;
	  	recoil = recoil_ak12u_545;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\UI\icon_arifle_AK12U_arctic_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_1_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AK12_ak12_2_arctic_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\AK12\Data\AKU12_RPK12_parts_arctic_CO.paa"
		};
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
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
		class Burst: Burst
		{
			textureType = dual;
			burst = 2;
	    	reloadTime = 0.06;
			dispersion = 0.00087;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.086;
			dispersion = 0.00087;
		};
	};
	class arifle_SPAR_01_base_F;
	class arifle_SPAR_01_arc_F: arifle_SPAR_01_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_01_arc_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SPAR_01_arc_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\UI\icon_arifle_SPAR_01_arc_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_01_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_C_base_F;
	class arifle_SPAR_01_C_arc_F: arifle_SPAR_01_C_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_01_C_arc_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SPAR_01_C_arc_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\UI\icon_arifle_SPAR_01_arc_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_01_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_02_CO.paa"
		};
	};
	class arifle_SPAR_01_GL_base_F;
	class arifle_SPAR_01_GL_arc_F: arifle_SPAR_01_GL_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_01_GL_arc_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SPAR_01_GL_arc_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\UI\icon_arifle_SPAR_01_GL_arc_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_01_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_02_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_arc_F_01_CO.paa"
		};
	};
	class arifle_SPAR_02_base_F;
	class arifle_SPAR_02_arc_F: arifle_SPAR_02_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_02_arc_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SPAR_02_arc_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\SPAR_02\Data\UI\icon_arifle_SPAR_02_arc_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_01_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_02_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = UnderBarrelSlot;
				item = bipod_01_F_blk;
			};
		};
	};
	class arifle_SPAR_03_base_F;
	class arifle_SPAR_03_arc_F: arifle_SPAR_03_base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		baseWeapon = arifle_SPAR_03_arc_F;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_arifle_SPAR_03_arc_F0;
		picture = "\A3_Arc\Weapons_F_Arc\Rifles\SPAR_03\Data\UI\icon_arifle_SPAR_03_arc_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_03\Data\arifle_SPAR_03_arc_F_01_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_03\Data\arifle_SPAR_03_arc_F_02_CO.paa",
			"\A3_Arc\Weapons_F_Arc\Rifles\SPAR_01\Data\arifle_SPAR_01_arc_F_01_CO.paa"
		};
	};
};