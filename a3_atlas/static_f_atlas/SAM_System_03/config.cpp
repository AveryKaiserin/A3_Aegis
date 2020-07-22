#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class StaticMGWeapon;
	class SAM_System_03_base_F: StaticMGWeapon
	{
		class TextureSources
		{
			/*
			class ADF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_ADF0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {BLU_ADF_F};
				textures[] =
				{
					"\A3_Atlas\Static_F_Atlas\SAM_System_03\Data\Sam_system_03_mat_01_ADF_CO.paa",
					"\A3_Atlas\Static_F_Atlas\SAM_System_03\Data\Sam_system_03_mat_02_ADF_CO.paa"
				};
			};
			*/
			class IDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				factions[] = {IND_I_F};
				textures[] =
				{
					"\A3_Atlas\Static_F_Atlas\Sam_System_01\Data\Sam_system_01_mat_01_IDF_CO.paa",
					"\A3_Atlas\Static_F_Atlas\Sam_System_01\Data\Sam_system_01_mat_02_IDF_CO.paa"
				};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"		// NATO (European)
	//#include "cfgADF.hpp"				// ADF
	#include "cfgIDF.hpp"				// IDF
};