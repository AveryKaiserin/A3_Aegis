#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class CommanderTurret: MainTurret{};
		};
		class TextureSources
		{
			class Blufor
			{
				factions[] += {BLU_E_F};
			};
			class Olive
			{
				factions[] += {BLU_E_F};
			};
			class Woodland
			{
				displayName = $STR_A3_A_TEXTURESOURCES_WOODLAND0;
				author = $STR_A3_A_wsxcgy;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_03\Data\MRAP_03_ext_wdl_CO.paa",
					"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_wdl_CO.paa"
				};
				factions[] = {BLU_E_F};
			};
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderTurret: CommanderTurret{};
		};
	};
	class MRAP_03_gmg_base_F;
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"      // NATO (German)
};