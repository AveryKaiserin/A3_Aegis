#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Laws of War
	class Van_02_base_F;
	class Van_02_transport_base_F: Van_02_base_F
	{
		class TextureSources
		{
			class Police
			{
				displayName = $STR_A3_TEXTURESOURCES_POLICE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_transport_CO.paa",
					"\A3_Police\Soft_F_Police\Van_02\Data\Van_glass_police_CA.paa",
					"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Orange\Van_02\Data\Van_body.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_transport.rvmat",
					"",
					"\A3\Data_F\Lights\Car_Beacon_Blue_emit.rvmat"
				};
				factions[] = {IND_P_F};
			};
		};
	};
	class Van_02_vehicle_base_F: Van_02_base_F
	{
		class TextureSources
		{
			class Police
			{
				displayName = $STR_A3_TEXTURESOURCES_POLICE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_CO.paa",
					"\A3_Police\Soft_F_Police\Van_02\Data\Van_glass_police_CA.paa",
					"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Orange\Van_02\Data\Van_body.rvmat",
					"\A3\Soft_F_Orange\Van_02\Data\Van_wheel.rvmat",
					"",
					"\A3\Data_F\Lights\Car_Beacon_Blue_emit.rvmat"
				};
				factions[] = {IND_P_F};
			};
		};
	};
	// Arma 3 Police
	#include "cfgPolice.hpp"
};