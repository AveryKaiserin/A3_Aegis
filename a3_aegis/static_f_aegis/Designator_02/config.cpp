#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Marksman
	class Static_Designator_02_base_F;
	class O_Static_Designator_02_F: Static_Designator_02_base_F
    {
        displayName = $STR_A3_CfgVehicles_Static_Designator_01_base_F1;
    };
	class Weapon_Bag_Base;
	class O_Static_Designator_02_weapon_F: Weapon_Bag_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_ocamo_CO.paa"};
		class assembleInfo;
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
};