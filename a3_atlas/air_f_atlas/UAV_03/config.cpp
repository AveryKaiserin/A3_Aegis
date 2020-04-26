#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class Helicopter_Base_F;
	class UAV_03_base_F: Helicopter_Base_F
	{
		class TextureSources
		{
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Air_F_Atlas\UAV_03\Data\UAV_03_1_IDF_CO.paa",
					"\A3_Atlas\Air_F_Atlas\UAV_03\Data\UAV_03_2_IDF_CO.paa"
				};
				factions[] = {IND_I_F};
			};
		};
	};
	class UAV_03_dynamicLoadout_base_F;
	// Arma 3 Atlas
	#include "cfgIDF.hpp"
};