class CfgVehicles
{
	/* Inheritance Tree */
	class Car_F;
	class Truck_F: Car_F
	{
		class AnimationSources;
        class EventHandlers;
	};

    /* Bases */
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

        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
			};
		};

        /* Scripts */
        class EventHandlers: EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
	};
	class Truck_02_transport_base_F: Truck_02_base_F
	{
        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
			};
		};
	};
	class Truck_02_box_base_F: Truck_02_base_F
	{
        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
			};
		};
	};
	class Truck_02_medical_base_F: Truck_02_box_base_F
	{
        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
			};
		};
	};
	class Truck_02_Ammo_base_F: Truck_02_base_F
	{
        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
			};
		};
	};
	class Truck_02_fuel_base_F: Truck_02_base_F
	{
        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
			};
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

        /* Liveries */
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
                factions[] = {};
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
                factions[] = {};
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
                factions[] = {};
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
                factions[] = {};
			};
		};
	};
	class Truck_02_water_base_F;
	class Truck_02_viv_base_F: Truck_02_base_F
    {
		accuracy = 0.9;
		castCargoShadow = true;
		transportSoldier = 2;
		cargoProxyIndexes[] =
        {
            1,
            2
        };
		cargoAction[] =
		{
			passenger_apc_narrow_generic01_ns,
			passenger_apc_narrow_generic03still_ns
		};
		driverAction = Truck_02_Driver;

        /* Inventory */
		class TransportItems
		{
			item_xx(FirstAidKit,4);
		};
        
        /* ViV */
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
	class Truck_02_cargo_base_F: Truck_02_viv_base_F
	{
		model = "\A3_Aegis\Soft_F_Aegis\Truck_02\Truck_02_cargo_F.p3d";
		picture = "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\UI\Truck_02_cargo_CA.paa";
		icon = "\A3\Soft_F_Beta\Truck_02\Data\UI\Map_Truck_02_dump_CA.paa";

        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				displayName = $STR_A3_C_CfgVehicles_Offroad_01_civil_base_F_TextureSources_EAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_kab_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_kuz_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_chassis_EAF_CO.paa"
				};
				factions[] = {};
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
				factions[] = {};
			};
		};
	};
	class Truck_02_flatbed_base_F: Truck_02_viv_base_F
	{
		model = "\A3_Aegis\Soft_F_Aegis\Truck_02\Truck_02_flatbed_F.p3d";
		picture = "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\UI\Truck_02_flatbed_CA.paa";
		icon = "\A3_Aegis\Soft_F_Aegis\Truck_02\Data\UI\Map_Truck_02_flatbed_CA.paa";

        /* Liveries */
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
				factions[] = {};
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
				factions[] = {};
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
				factions[] = {};
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
				displayName = $STR_A3_C_CfgVehicles_Offroad_01_civil_base_F_TextureSources_EAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_kab_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_kuz_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_int_EAF_CO.paa",
					"\A3\Soft_F_Enoch\Truck_02\Data\Truck_02_chassis_EAF_CO.paa"
				};
				factions[] = {};
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
				factions[] = {};
			};
		};
	};

    /* Factions */
    #include "cfgOPFOR.hpp" // IAF & China
    #include "cfgIndep.hpp" // AAF
    #include "cfgCivil.hpp" // Civilians
    #include "cfgIDAP.hpp"  // IDAP
    #include "cfgEAF.hpp"   // LDF
    #include "cfgRUS.hpp"   // Russia
};