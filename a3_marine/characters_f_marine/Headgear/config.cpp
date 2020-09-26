#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class HelmetBase;
	class H_Booniehat_khk: HelmetBase
    {
        class ItemInfo;
    };
	class H_MilCap_ocamo;
	// Arma 3 Marine
	class H_Booniehat_desert: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_M_CfgWeapons_H_Booniehat_desert0;
		picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_Booniehat_desert_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Headgear\Data\booniehat_desert_CO.paa"};
	};
	class H_Booniehat_desert_hs: H_Booniehat_desert
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_Booniehat_desert_hs_CA.paa";
		displayName = $STR_A3_M_CfgWeapons_H_Booniehat_desert_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_Booniehat_mwdl: H_Booniehat_khk
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_M_CfgWeapons_H_Booniehat_mwdl0;
		picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_Booniehat_mwdl_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Headgear\Data\booniehat_mwdl_CO.paa"};
	};
	class H_Booniehat_mwdl_hs: H_Booniehat_mwdl
	{
		author = $STR_A3_A_AveryTheKitty;
		picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_Booniehat_mwdl_hs_CA.paa";
		displayName = $STR_A3_M_CfgWeapons_H_Booniehat_mwdl_hs0;
		model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
		};
	};
	class H_MilCap_desert: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_M_CfgWeapons_H_MilCap_desert0;
		picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_MilCap_desert_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Headgear\Data\cappatrol_desert_CO.paa"};
	};
	class H_MilCap_mwdl: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_M_CfgWeapons_H_MilCap_mwdl0;
		picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_MilCap_mwdl_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Headgear\Data\cappatrol_mwdl_CO.paa"};
	};
};