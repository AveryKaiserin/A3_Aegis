#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgVehicles.hpp"
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F: InventoryItem_Base_F
	{
		zeroingSound[] = {"\A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_plastic",db0,1,5};
	};
	class UavTerminal_base: ItemCore
	{
		class ItemInfo;
	};
	class B_ION_UavTerminal: UavTerminal_base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_B_ION_UavTerminal0;
		model = /*"\A3_Aegis\Weapons_F_Aegis\Items\UAV_controller_ION_F.p3d"*/ "\A3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Items\Data\UI\icon_B_ION_UavTerminal_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Items\Data\UAV_controller_ION_CO.paa"};
		class ItemInfo: ItemInfo
		{
			side = TWest;
		};
	};
	class O_R_UavTerminal: UavTerminal_base
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_O_R_UavTerminal0;
		model = /*"\A3_Aegis\Weapons_F_Aegis\Items\UAV_controller_RUS_F.p3d"*/ "\A3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_F.p3d";
		picture = "\A3_Aegis\Weapons_F_Aegis\Items\Data\UI\icon_O_R_UavTerminal_CA.paa";
        hiddenSelectionsTextures[] = {"\A3_Aegis\Weapons_F_Aegis\Items\Data\UAV_controller_RUkhk_CO.paa"};
		class ItemInfo: ItemInfo
		{
			side = TEast;
		};
	};
	class ItemSmartPhone: ItemCore
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = public;
		displayName = $STR_A3_A_CfgWeapons_ItemSmartPhone0;
		descriptionUse = $STR_A3_CfgWeapons_Default_ItemGPS0;
		simulation = ItemGPS;
		picture = "\A3\Missions_F_Oldman\Props\Data\SmartPhone_CA.paa";
		model = "\A3\Structures_F\Items\Electronics\MobilePhone_smart_F.p3d";
		descriptionShort = $STR_A3_CfgWeapons_ItemGPS1;
		class ItemInfo
		{
			mass = 5;
		};
	};
};