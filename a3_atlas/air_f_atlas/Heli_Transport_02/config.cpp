#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_H;
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class TextureSources
		{
			class Woodland
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_1_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_2_CO.paa",
					"\A3_Atlas\Air_F_Atlas\Heli_Transport_02\Data\Heli_Transport_02_3_CO.paa",
					"\A3\Air_F_Beta\Heli_Transport_02\Data\Heli_Transport_02_int_02_CO.paa"
				};
				factions[] = {BLU_E_F};
			};
		};
	};
	// Arma 3 Atlas
    /*
	#include "cfgLegion.hpp"            // Legion
	*/
    #include "cfgBlufor_Atlas.hpp"      // NATO (German)
};