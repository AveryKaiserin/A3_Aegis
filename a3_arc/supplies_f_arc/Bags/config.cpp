#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class B_AssaultPack_Base;
	class B_AssaultPack_arc_F: B_AssaultPack_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_AssaultPack_arc_F0;
		picture = "\A3_Arc\Supplies_F_Arc\Bags\Data\UI\icon_B_AssaultPack_arc_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Arc\Supplies_F_Arc\Bags\Data\B_AssaultPack_arc_F_CO.paa"};
	};
	class B_Kitbag_Base;
	class B_Kitbag_arc_F: B_Kitbag_Base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgVehicles_B_Kitbag_arc_F0;
		picture = "\A3_Arc\Supplies_F_Arc\Bags\Data\UI\icon_B_Kitbag_arc_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Arc\Supplies_F_Arc\Bags\Data\B_Kitbag_arc_F_CO.paa"};
	};
	// Soldier Bags
	#include "cfgBlufor_Aegis.hpp"
	#include "cfgBlufor_Arc.hpp"
};