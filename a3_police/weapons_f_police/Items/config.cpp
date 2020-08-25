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
    // Arma 3 Police
	class I_P_UavTerminal: UavTerminal_base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_P_CfgWeapons_I_P_UavTerminal0;
		model = /*"\A3_Police\Weapons_F_Police\Items\UAV_controller_POLICE_F.p3d"*/ "\A3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_F.p3d";
		picture = "\A3_Police\Weapons_F_Police\Items\Data\UI\icon_I_P_UavTerminal_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Police\Weapons_F_Police\Items\Data\UAV_controller_police_CO.paa"};
		class ItemInfo: ItemInfo
		{
			side = TGuerrila;
		};
	};
};