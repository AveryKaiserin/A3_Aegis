#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class H_HelmetO_ocamo;
	class H_HelmetLeaderO_ocamo;
	class H_MilCap_ocamo;
	class H_HelmetSpecO_ocamo;
	// Arma 3 Marine
	class H_HelmetO_oceanic: H_HelmetO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_M_CfgWeapons_H_HelmetO_oceanic0;
		//picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_HelmetO_oceanic_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\tech_oceanic_CO.paa"};
	};
	class H_HelmetLeaderO_oceanic: H_HelmetLeaderO_ocamo
	{
	  	author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_M_CfgWeapons_H_HelmetLeaderO_oceanic0;
		//picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_HelmetLeaderO_oceanic_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\tech_oceanic_CO.paa"};
	};
	class H_HelmetSpecO_oceanic: H_HelmetSpecO_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgWeapons_H_HelmetSpecO_oceanic0;
		//picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_HelmetSpecO_oceanic_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\tech_oceanic_CO.paa"};
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
	class H_MilCap_oceanic: H_MilCap_ocamo
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_M_CfgWeapons_H_MilCap_oceanic0;
		//picture = "\A3_Marine\Characters_F_Marine\Headgear\Data\UI\icon_H_MilCap_oceanic_CA.paa";
		//hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Headgear\Data\cappatrol_oceanic_CO.paa"};
	};
};