#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Heli_Light_01_unarmed_base_F;
	class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F
    {
		class TextureSources
		{
			class Police
			{
				displayName = $STR_A3_TEXTURESOURCES_POLICE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Police\Air_F_Police\Heli_Light_01\Data\Heli_Light_01_ext_police_CO.paa"};
				factions[] = {Police_IND_P_F};
			};
		};
    };
	// Arma 3 Police
	#include "cfgPolice.hpp"			// Police
	// Deprecated classes
	#include "deprecated.hpp"
};