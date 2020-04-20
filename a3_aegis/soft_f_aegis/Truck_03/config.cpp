#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Truck_F;
	class Truck_03_base_F: Truck_F
	{
		class Turrets{};
	};
	class O_Truck_03_ammo_F: Truck_03_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Truck_03_ammo_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_CO.paa"
		};
		class TextureSources
		{
			class Hex
			{
				textures[] =
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
				};
			};
		};
	};
	// Arma 3 Apex
	class O_T_Truck_03_ammo_ghex_F: O_Truck_03_ammo_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Truck_03_ammo_ghex_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
			"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_03\Data\Containers_02_set_ghex_CO.paa"
		};
	};
	// Arma 3 Aegis
	#include "cfgSpetsnaz.hpp"
};
