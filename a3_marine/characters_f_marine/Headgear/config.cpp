#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	// Arma 3
	class H_MilCap_ocamo;
	// Arma 3 Marine
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