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
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class UGV_01_base_F: Car_F
	{
		class TextureSources
		{
			class IDF
			{
				DisplayName = $STR_A3_A_TEXTURESOURCES_IDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_IDF_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_IDF_CO.paa",
					"\A3_Atlas\Data_F_Atlas\Vehicles\Turret_IDF_CO.paa"
				};
				factions[] = {IND_I_F};
			};
		};
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret{};
			class CargoTurret_01;
		};
	};
	// Arma 3 Aegis
	class UGV_01_medical_base_F: UGV_01_base_F
	{
		class TextureSources: TextureSources
		{
			class IDF: IDF
			{
				textures[] =
				{
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_ext_medevac_IDF_CO.paa",
					"\A3_Atlas\Soft_F_Atlas\UGV_01\Data\UGV_01_int_IDF_CO.paa",
					"\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
				};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"
	#include "cfgIDF.hpp"
};