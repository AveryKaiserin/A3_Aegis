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
	class MBT_03_base_F: Tank_F
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
			class Sand_01
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {BLU_E_F};
			};
			class Olive_01
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
					"\A3_Atlas\Armor_F_Atlas\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[] = {BLU_E_F};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"
};