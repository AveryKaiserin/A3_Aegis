#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_F;
	class Heli_light_03_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class Woodland
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Light_03\Data\Heli_Light_03_base_wdl_CO.paa",
					"\A3_Aegis\Supplies_F_Aegis\Ammoboxes\Data\Box_A_NATO_Wps_F_CO.paa",
					"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"
				};
				factions[] = {BLU_E_F};
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F{};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F{};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"      // NATO (German)
};