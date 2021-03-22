#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	class H_Cap_red: HelmetBase
	{
		class ItemInfo;
	};
	class H_MilCap_oucamo;
	class H_Cap_headphones;
	class H_Shemag_khk: HelmetBase
	{
		scope = public;
		scopeCurator = public;
		displayName = $STR_A3_O_CfgWeapons_H_Shemag_khk0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_Shemag_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Headgear\Data\H_Shemag_khaki_CO.paa"};
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo;
	};
	class H_ShemagOpen_khk: HelmetBase
	{
		class ItemInfo;
	};
    // Arma 3 Atlas
	class H_HelmetSpecter_base_F;
	class H_HelmetSpecter_headset_base_F;
	class H_HelmetSpecter_cover_base_F;
	// Arma 3 Opposing Forces
	class H_HelmetSpecter_paint_F: H_HelmetSpecter_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_paint_F0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_HelmetSpecter_paint_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Headgear\Data\H_HelmetSpecter_01_paint_CO.paa"};
	};
	class H_HelmetSpecter_paint_headset_F: H_HelmetSpecter_headset_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_paint_headset_F0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_HelmetSpecter_paint_headset_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Opf\Characters_F_Opf\Headgear\Data\H_HelmetSpecter_01_paint_CO.paa",
			"\A3_Opf\Characters_F_Opf\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_khaki_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = protected;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_cover_khaki_F0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_HelmetSpecter_cover_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Opf\Characters_F_Opf\Headgear\Data\H_HelmetSpecter_01_cover_khaki_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_whex_CO: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = public;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_cover_khaki_F0;
		//picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_HelmetSpecter_cover_khaki_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Opf\Characters_F_Opf\Headgear\Data\H_HelmetSpecter_cover_whex_CO.paa"
		};
	};
	class H_HelmetSpecter_cover_taiga_F: H_HelmetSpecter_cover_base_F
	{
		author = $STR_A3_A_AveryTheKitty_Deathstruck_and_Midnas;
		scope = protected;
		displayName = $STR_A3_O_CfgWeapons_H_HelmetSpecter_cover_taiga_F0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_HelmetSpecter_cover_taiga_F_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\H_HelmetSpecter_01_CO.paa",
			"\A3_Opf\Characters_F_Opf\Headgear\Data\H_HelmetSpecter_01_cover_taiga_CO.paa"
		};
	};
	class H_Shemag_khk_hs: H_Shemag_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_Shemag_khk_hs_CA.paa";
		displayName = $STR_A3_O_CfgWeapons_H_Shemag_khk_hs0;
		model = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		};
	};
	class H_Shemag_blk: H_Shemag_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_O_CfgWeapons_H_Shemag_blk0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_Shemag_blk_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Headgear\Data\H_Shemag_black_CO.paa"};
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Shemag_blk_hs: H_Shemag_blk
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_Shemag_blk_hs_CA.paa";
		displayName = $STR_A3_O_CfgWeapons_H_Shemag_blk_hs0;
		model = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		};
	};
	class H_Shemag_red: H_Shemag_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_O_CfgWeapons_H_Shemag_red0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_Shemag_red_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Headgear\Data\H_Shemag_red_CO.paa"};
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
	};
	class H_Shemag_red_hs: H_Shemag_red
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_Shemag_red_hs_CA.paa";
		displayName = $STR_A3_O_CfgWeapons_H_Shemag_red_hs0;
		model = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		allowedFacewear[] =
		{
			"",2,
			G_Shades_Black,1,
			G_Shades_Blue,1,
			G_Shades_Red,1,
			G_Shades_Green,1,
			G_Shades_Yellowred,1
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Guerrilla\headgear_shemagmask_hs.p3d";
		};
	};
    /*
	class H_Cap_redburger: H_Cap_red
	{
		author = $STR_A3_A_AveryTheKitty;
	  	displayName = $STR_A3_O_CfgWeapons_H_Cap_redburger0;
		picture = "\A3_Opf\Characters_F_Opf\Headgear\Data\UI\icon_H_Cap_redburger_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Opf\Characters_F_Opf\Headgear\Data\capb_redburger_CO.paa"};
	};
    */
};