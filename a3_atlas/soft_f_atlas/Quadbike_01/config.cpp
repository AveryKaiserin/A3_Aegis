#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class TextureSources
		{
			class Olive
			{
				factions[] += {BLU_E_F};
			};
			class Jungle
			{
				displayName = $STR_A3_TEXTURESOURCES_JUNGLE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_jungle_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_jungle_CO.paa"
                };
				factions[] = {BLU_H_F};
			};
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_brown_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\Quadbike_01\Data\Quadbike_01_wheel_brown_CO.paa"
                };
				factions[] = {IND_I_F};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgOpfor_Aegis.hpp"       // CSAT (Woodland)
	#include "cfgLegion.hpp"            // Legion
	#include "cfgBlufor_Atlas.hpp"      // NATO (German)
	#include "cfgOpfor_Atlas.hpp"       // CSAT (Takistani)
    /*
	#include "cfgADF.hpp"               // ADF
	*/
    #include "cfgHIMF.hpp"              // HIMF
    /*
	#include "cfgCDF.hpp"               // CDF
    */
	#include "cfgIDF.hpp"               // IDF
};