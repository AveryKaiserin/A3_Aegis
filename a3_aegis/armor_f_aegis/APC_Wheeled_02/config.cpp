#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car;
	class Car_F: Car
	{
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class CommanderOptics;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(64Rnd_40mm_G_belt),
					mag_4(200Rnd_127x99_mag_Tracer_Green),
					SmokeLauncherMag
				};
			};
			class CommanderOptics: CommanderOptics{};
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_65x39_caseless_green,12);
			mag_xx(150Rnd_762x54_Box,4);
			mag_xx(HandGrenade,6);
			mag_xx(MiniGrenade,6);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellRed,8);
			mag_xx(SmokeShellOrange,8);
			mag_xx(SmokeShellYellow,8);
			mag_xx(RPG32_F,5);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Titan_AT,2);
			mag_xx(Titan_AP,2);
			mag_xx(Titan_AA,2);
		};
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ocamo,2);
		};
		class TextureSources
		{
			class Hex
			{
				factions[] += {OPF_A_F};
			};
			class GreenHex
			{
				factions[] += {OPF_W_F};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Taiga
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TAIGA0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUcamo_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUcamo_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUcamo_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(64Rnd_40mm_G_belt),
					mag_4(200Rnd_127x99_mag_Tracer_Green),
					SmokeLauncherMag
				};
			};
		};
		animationList[] =
		{
			showBags,0.67,
			showCanisters,0.33,
			showTools,0.83,
			showCamonetHull,0,
			showSLATHull,0
		};
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F{};
	// Arma 3 Apex
	class O_T_APC_Wheeled_02_rcws_v2_ghex_F: APC_Wheeled_02_base_v2_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa",
			"\A3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa",
			"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa",
			"\A3\Armor_F\Data\camonet_CSAT_Hex_Green_CO.paa",
			"\A3\Armor_F\Data\cage_CSAT_Green_CO.paa"
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
	// Arma 3 Aegis
	#include "cfgOpfor_Tacops.hpp"		// CSAT (African)
	#include "cfgSpetsnaz.hpp"			// Russia
	#include "cfgOpfor_Aegis.hpp"		// CSAT (Woodland)
};