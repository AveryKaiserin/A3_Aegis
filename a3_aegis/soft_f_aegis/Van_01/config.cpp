#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Truck_F: Car_F
	{
		class EventHandlers;
	};
	class Van_01_base_F: Truck_F
	{
		class EventHandlers: EventHandlers{};
	};
	class Van_01_fuel_base_F: Van_01_base_F
	{
		class TextureSources
		{
			class Brown
			{
				displayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank_CO.paa",
					"\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] = {IND_C_F};
			};
			class Olive
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank_CO.paa",
					"\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] = {IND_C_F};
			};
		};
	};
	// Arma 3 Aegis
	#include "cfgSyndikat.hpp"
};
