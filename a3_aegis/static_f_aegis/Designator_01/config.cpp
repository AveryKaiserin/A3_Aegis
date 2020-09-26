#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Marksman
	class Static_Designator_01_base_F;
	class B_Static_Designator_01_F: Static_Designator_01_base_F
    {
        displayName = $STR_A3_CfgVehicles_Static_Designator_01_base_F1;
    };
	class Weapon_Bag_Base;
	class B_Static_Designator_01_weapon_F: Weapon_Bag_Base
	{
		hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_compact_mcamo_CO.paa"};
		class assembleInfo;
	};
	// Arma 3 Enoch
	class B_W_Static_Designator_01_F: Static_Designator_01_base_F
    {
        displayName = $STR_A3_CfgVehicles_Static_Designator_01_base_F1;
    };
	class B_W_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
	{
		displayName = $STR_A3_A_CfgVehicles_B_W_Static_Designator_01_weapon_F0;
	};
	// Arma 3 Aegis
	#include "cfgIndep.hpp"
	#include "cfgBlufor_Exp.hpp"
	#include "cfgEAF.hpp"
	#include "cfgBlufor_Aegis.hpp"
};