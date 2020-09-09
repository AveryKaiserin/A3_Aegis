#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
    // Arma 3
	class ItemCore;
	class UavTerminal_base: ItemCore
	{
		class ItemInfo;
	};
    // Arma 3 Atlas
	class I_I_UavTerminal: UavTerminal_base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_I_I_UavTerminal0;
		model = /*"\A3_Atlas\Weapons_F_Atlas\Items\UAV_controller_IDF_F.p3d"*/ "\A3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_F.p3d";
		picture = "\A3_Atlas\Weapons_F_Atlas\Items\Data\UI\icon_I_I_UavTerminal_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Atlas\Weapons_F_Atlas\Items\Data\UAV_controller_khk_CO.paa"};
		class ItemInfo: ItemInfo
		{
			side = TGuerrila;
		};
	};
};