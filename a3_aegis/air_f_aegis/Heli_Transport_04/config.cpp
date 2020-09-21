#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Heli
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret{};
		};
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class LoadmasterTurret;
		};
		class AnimationSources: AnimationSources
		{
			class Door_1_source;
			class Door_2_source;
			class Door_3_source;
		};
		class UserActions
		{
			class OpenDoor_1;
			class CloseDoor_1;
			class OpenDoor_2;
			class CloseDoor_2;
			class OpenDoor_3;
			class CloseDoor_3;
		};
		class HitPoints;
		class TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class O_Heli_Transport_04_F: Heli_Transport_04_base_F{};
	class O_Heli_Transport_04_ammo_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class O_Heli_Transport_04_bench_F: Heli_Transport_04_base_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class LoadmasterTurret: LoadmasterTurret{};
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
			class CargoTurret_03: CargoTurret_01{};
			class CargoTurret_04: CargoTurret_01{};
			class CargoTurret_05: CargoTurret_01{};
			class CargoTurret_06: CargoTurret_05{};
			class CargoTurret_07: CargoTurret_05{};
			class CargoTurret_08: CargoTurret_05{};
		};
		class TextureSources: TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Bench_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Bench_default_source;
			class Bench_black_source;
		};
	};
	class O_Heli_Transport_04_box_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
		class TransportMagazines
		{
            delete _xx_16Rnd_9x21_Mag;
            mag_xx(17Rnd_9x21_Mag,2);
            mag_xx(30Rnd_9x21_Mag_SMG_02,6);
            mag_xx(30Rnd_65x39_caseless_green,24);
            mag_xx(10Rnd_762x54_Mag,6);
            mag_xx(150Rnd_762x54_Box,4);
            mag_xx(1Rnd_HE_Grenade_shell,6);
            mag_xx(1Rnd_Smoke_Grenade_shell,2);
            mag_xx(1Rnd_SmokeRed_Grenade_shell,2);
            mag_xx(chemlight_red,2);
            mag_xx(RPG32_F,3);
            mag_xx(RPG32_HE_F,3);
            mag_xx(Laserbatteries,1);
            mag_xx(HandGrenade,6);
            mag_xx(MiniGrenade,6);
            mag_xx(SmokeShell,2);
            mag_xx(SmokeShellRed,2);
            mag_xx(UGL_FlareYellow_F,2);
            mag_xx(UGL_FlareRed_F,2);
        };
        class TransportWeapons
        {
            weap_xx(launch_RPG32_F,1);
            weap_xx(arifle_Katiba_F,2);
            weap_xx(LMG_Zafir_F,1);
            weap_xx(arifle_Katiba_GL_F,1);
            weap_xx(arifle_Katiba_C_F,1);
            weap_xx(srifle_DMR_01_F,1);
        };
        class TransportItems
        {
            item_xx(FirstAidKit,10);
            item_xx(Laserdesignator_02,1);
            item_xx(bipod_02_F_blk,2);
            item_xx(acc_flashlight,5);
            item_xx(Binocular,1);
            item_xx(optic_ACO_grn,1);
            item_xx(optic_ACO_grn_smg,1);
            item_xx(optic_Arco,1);
            item_xx(optic_Arco_blk_F,1);
            item_xx(optic_DMS,1);
            item_xx(acc_pointer_IR,5);
            item_xx(Medikit,1);
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
            item_xx(O_NVGoggles_blk_F,1);
            item_xx(O_NVGoggles_hex_F,3);
            item_xx(O_NVGoggles_urb_F,1);
        };
        class TransportBackpacks
        {
            bag_xx(B_Parachute,3);
            bag_xx(B_FieldPack_ocamo,2);
		};
	};
	class O_Heli_Transport_04_covered_F: Heli_Transport_04_base_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{};
			class LoadmasterTurret: LoadmasterTurret{};
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
		};
		class TextureSources: TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class O_Heli_Transport_04_fuel_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class O_Heli_Transport_04_medevac_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class O_Heli_Transport_04_repair_F: Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class EventHandlers;
	};
	class Pod_Heli_Transport_04_crewed_base_F: StaticWeapon
	{
		class TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Base_02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class ReammoBox_F;
	class Slingload_base_F: ReammoBox_F
	{
		class EventHandlers;
	};
	class Pod_Heli_Transport_04_base_F: Slingload_base_F
	{
		class TextureSources
		{
			class Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				displayName = $STR_A3_TEXTURESOURCES_GREENHEX0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
				factions[] = {OPF_T_F};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_ammo_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_bench_F: Pod_Heli_Transport_04_crewed_base_F
	{
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex: GreenHex
			{
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Bench_ghex_CO.paa"};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_box_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_covered_F: Pod_Heli_Transport_04_crewed_base_F
	{
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_fuel_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex: GreenHex
			{
				textures[] = {"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Fuel_ghex_CO.paa"};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_medevac_F: Pod_Heli_Transport_04_crewed_base_F
	{
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	class Land_Pod_Heli_Transport_04_repair_F: Pod_Heli_Transport_04_base_F
	{
		class TextureSources: TextureSources
		{
			class Black: Black
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex: GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_ghex_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_ghex_CO.paa"
				};
			};
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
};