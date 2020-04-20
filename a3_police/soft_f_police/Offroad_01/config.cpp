#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Offroad_01_base_F;
	class Offroad_01_civil_base_F: Offroad_01_base_F
	{
		class TextureSources
		{
			class Police
			{
				displayName = $STR_A3_TEXTURESOURCES_POLICE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
					"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa"
				};
				factions[] = {IND_P_F};
			};
		};
	};
	class Offroad_01_military_base_F;
	// Arma 3 Enoch
	class Offroad_01_military_covered_base_F: Offroad_01_military_base_F
	{
		class TextureSources
		{
			class Police
			{
				displayName = $STR_A3_TEXTURESOURCES_POLICE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
					"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_ext_police_CO.paa",
					"\A3_Police\Soft_F_Police\Offroad_01\Data\Offroad_01_cover_police_CO.paa"
				};
				factions[] = {IND_P_F};
			};
		};
	};
	class Offroad_01_military_comms_base_F;
	// Arma 3 Police
	#include "cfgPolice.hpp"
};