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
	class Van_01_transport_base_F: Van_01_base_F
	{
		class TextureSources
		{
			class Guerilla_09
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_090;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext_IG_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_adds_IG_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
		};
	};
	class Van_01_box_base_F: Van_01_base_F
	{
		class TextureSources
		{
			class Guerilla_01
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_010;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_02
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_020;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_03
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_030;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_04
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_040;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_05
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_050;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_06
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_060;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_07
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_070;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_08
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_080;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa",
					"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
			class Guerilla_09
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_090;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext_IG_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_adds_IG_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base_CO.paa"
				};
				materials[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
		};
	};
	class Van_01_fuel_base_F: Van_01_base_F
	{
		class TextureSources
		{
			class Guerilla_04
			{
				displayName = $STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_040;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_ext_IG_CO.paa",
					"\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank_IG_CO.paa"
				};
				factions[] =
				{
					BLU_F_F,
					OPF_G_F,
					IND_G_F
				};
			};
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
	class I_G_Van_01_transport_F: Van_01_transport_base_F
	{
		textureList[] =
		{
			Guerilla_01,1,
			Guerilla_02,1,
			Guerilla_03,1,
			Guerilla_04,1,
			Guerilla_05,1,
			Guerilla_06,1,
			Guerilla_07,1,
			Guerilla_08,1,
			Guerilla_09,1
		};
	};
	class I_G_Van_01_fuel_F: Van_01_fuel_base_F
	{
		textureList[] =
		{
			Guerilla_01,1,
			Guerilla_02,1,
			Guerilla_03,1,
			Guerilla_04,1,
			Guerilla_05,1,
			Guerilla_06,1,
			Guerilla_07,1,
			Guerilla_08,1,
			Guerilla_09,1
		};
	};
	// Arma 3 Aegis
	#include "cfgSyndikat.hpp"
};
