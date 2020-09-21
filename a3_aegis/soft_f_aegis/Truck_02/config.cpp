#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Truck_F: Car_F
	{
		class AnimationSources;
        class EventHandlers;
	};
	class Truck_02_base_F: Truck_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			camo4
		};
		class AnimationSources: AnimationSources
		{
			class spz_hide;
		};
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class OrangeBlue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class OrangeOlive
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_olive_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueBlue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueOlive
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_olive_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kab_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kuz_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_int_IDAP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
        class EventHandlers: EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
	};
	class Truck_02_transport_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class Orange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Blue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kab_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kuz_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_int_IDAP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_Truck_02_covered_F: Truck_02_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			camo4
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
		};
	};
	class O_Truck_02_transport_F: Truck_02_transport_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
		};
	};
	class I_Truck_02_covered_F: Truck_02_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};
	};
	class I_Truck_02_transport_F: Truck_02_transport_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};
	};
	class C_Truck_02_covered_F: Truck_02_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		textureList[] =
        {
            OrangeBlue,1,
            OrangeOlive,1,
            BlueBlue,1,
            BlueOlive,1
        };
	};
	class C_Truck_02_transport_F: Truck_02_transport_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		textureList[] =
        {
            Blue,1,
            Orange,1
        };
	};
	class Truck_02_box_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class OrangeOrange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class OrangeGreen
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_green_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueOrange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class BlueGreen
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_green_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class Truck_02_medical_base_F: Truck_02_box_base_F
	{
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class Orange
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Blue
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class IDAP
			{
				textures[] =
				{
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kab_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_water_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_int_IDAP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class O_Truck_02_box_F: Truck_02_box_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
		};
	};
	class O_Truck_02_medical_F: Truck_02_medical_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
		};
	};
	class O_Truck_02_Ammo_F: Truck_02_Ammo_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
		};
	};
	class O_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_OPFOR_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
		};
	};
	class I_Truck_02_ammo_F: Truck_02_Ammo_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};
	};
	class I_Truck_02_box_F: Truck_02_box_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_repair_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};
	};
	class I_Truck_02_medical_F: Truck_02_medical_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};
	};
	class I_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_fuel_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};
	};
	class Truck_02_MRL_base_F: Truck_02_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3,
			camo4
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
		};
		class TextureSources
		{
			class Indep
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
			};
			class Opfor
			{
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Gamma\Truck_02\Data\Truck_02_MRL_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_MRL_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class C_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		textureList[] =
        {
            Blue,1,
            Orange,1
        };
	};
	class C_Truck_02_box_F: Truck_02_box_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		textureList[] =
        {
            OrangeOrange,1,
            OrangeGreen,1,
            BlueOrange,1,
            BlueGreen,1
        };
	};
	// Arma 3 Apex
	class O_T_Truck_02_F: Truck_02_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
		};
	};
	class O_T_Truck_02_transport_F: Truck_02_transport_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
		};
	};
	class O_T_Truck_02_Box_F: Truck_02_box_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
		};
	};
	class O_T_Truck_02_Medical_F: Truck_02_medical_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
		};
	};
	class O_T_Truck_02_Ammo_F: Truck_02_ammo_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_repair_ghex_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
		};
	};
	class O_T_Truck_02_fuel_F: Truck_02_fuel_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_fuel_ghex_CO.paa",
			"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
		};
	};
	// Arma 3 Laws of War
	class Truck_02_water_base_F;
	class C_IDAP_Truck_02_F: Truck_02_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
	};
	class C_IDAP_Truck_02_transport_F: Truck_02_transport_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
	};
	class C_IDAP_Truck_02_water_F: Truck_02_water_base_F
	{
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
	};
	// Arma 3 Aegis
	class Truck_02_cargo_base_F: Truck_02_base_F
	{
		model = "\A3_Aegis\Soft_F_Aegis\Truck_02\Truck_02_cargo_F.p3d";
		picture = "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\UI\Truck_02_cargo_CA.paa";
		icon = "\A3\Soft_F_Beta\Truck_02\Data\UI\Map_Truck_02_dump_CA.paa";
		accuracy = 0.9;
		vehicleClass = Support;
		castCargoShadow = true;
		transportSoldier = 2;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
		cargoAction[] =
		{
			passenger_apc_narrow_generic01_ns,
			passenger_apc_narrow_generic03still_ns
		};
		driverAction = Truck_02_Driver;
		class TextureSources
		{
			class Indep
			{
				displayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_INDP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_INDP_CO.paa"
				};
				factions[] = {IND_F};
			};
			class Opfor
			{
				displayName = $STR_A3_TEXTURESOURCES_OPFOR0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_OPFOR_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class Orange
			{
				displayName = $STR_A3_TEXTURESOURCES_ORANGE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class Blue
			{
				displayName = $STR_A3_TEXTURESOURCES_BLUE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kab_blue_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_kuz_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
				factions[] = {CIV_F};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_ghex_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_int_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_ghex_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_W_F
				};
			};
			class IDAP
			{
				displayName = $STR_A3_CfgFactionClasses_CIV_IDAP_F0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kab_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_kuz_IDAP_CO.paa",
					"\A3\Soft_F_Orange\Truck_02\Data\Truck_02_int_IDAP_CO.paa",
					"\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_CO.paa"
				};
				factions[] = {CIV_IDAP_F};
			};
			class EAF
			{
				displayName = $STR_A3_C_TEXTURESOURCES_EAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_kab_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_kuz_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_chassis_EAF_CO.paa"
				};
				factions[] = {IND_E_F};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kab_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_kuz_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_int_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\Truck_02\Data\Truck_02_chassis_RUkhk_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[] =
				{
					VVT_cargo_1,
					VVT_cargo_2
				};
				disableHeightLimit = true;
				maxLoadMass = 45000;
				cargoAlignment[] =
				{
					center,
					front
				};
				cargoSpacing[] = {0,0,0};
				exits[] = {VVT_exit};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = B_Parachute_02_F;
				parachuteHeightLimitDefault = 5;
			};
		};
	};
	#include "cfgCivil.hpp"
	#include "cfgOpfor.hpp"
	#include "cfgIndep.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgIDAP.hpp"
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgEAF.hpp"
};