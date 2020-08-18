#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class O_APC_Tracked_02_base_F;
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class TextureSources
		{
			class Separatists
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_ext_01_camo_CO.paa",
					"\A3_Opf\Armor_F_Opf\APC_Tracked_02\Data\APC_Tracked_02_ext_02_camo_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUgrn_CO.paa",
					"\A3\Armor_F\Data\camonet_green_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUgrn_CO.paa"
				};
				factions[] = {OPF_E_F};
			};
		};
	};
	// Arma 3 Opposing Forces
	#include "cfgChKDZ.hpp"				// Separatists
};