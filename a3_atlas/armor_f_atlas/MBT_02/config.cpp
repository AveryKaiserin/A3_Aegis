#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets;
			};
		};
	};
	class MBT_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class TextureSources
		{
			/*
			class CDF
			{
				displayName = "CDF";
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_body_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_turret_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_02\Data\MBT_02_CDF_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\Data\camonet_CDF_Green_CO.paa"
				};
				factions[] = {IND_CDF_F};
			};
			*/
		};
	};
	// Arma 3 Atlas
	//#include "cfgCDF.hpp"
};