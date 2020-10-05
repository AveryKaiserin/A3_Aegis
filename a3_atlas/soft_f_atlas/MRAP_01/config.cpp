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
	class MRAP_01_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class TextureSources
		{
			class Brown
			{
				DisplayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_base_brown_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_adds_brown_CO.paa",
					""
				};
				factions[] = {Atlas_IND_I_F};
			};
		};
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class TextureSources
		{
			class Brown
			{
				DisplayName = $STR_A3_TEXTURESOURCES_BROWN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_base_brown_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\MRAP_01\Data\MRAP_01_adds_brown_CO.paa",
					"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_brown_CO.paa"
				};
				factions[] = {Atlas_IND_I_F};
			};
		};
	};
	class MRAP_01_hmg_base_F: MRAP_01_gmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	// Arma 3 Atlas
	#include "cfgIDF.hpp"				// IDF
    // Deprecated classes
    #include "deprecated.hpp"
};