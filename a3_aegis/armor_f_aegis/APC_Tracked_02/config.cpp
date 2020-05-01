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
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class HitPoints;
					};
				};
				class HitPoints;
			};
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
		class AnimationSources: AnimationSources{};
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F{};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
				magazines[] =
				{
					mag_2(140Rnd_30mm_MP_shells_Tracer_Green),
					mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Green),
					mag_10(200Rnd_762x51_Belt_Green),
					mag_2(2Rnd_GAT_missiles_O)
				};
			};
		};
		animationList[] =
		{
			showTracks,0.5,
			showCamonetHull,0,
			showBags,0.67,
			showSLATHull,0
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUgrn_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Green_02
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GREENJUNGLE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Jungle_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUgrn_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Green_03
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GREENDESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Desert_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUgrn_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					500Rnd_35mm_AA_shells_Tracer_Green,
					mag_2(4Rnd_Titan_long_missiles)
				};
			};
		};
		animationList[] =
		{
			showTracks,0.5,
			showCamonetHull,0,
			showCamonetTurret,0,
			showSLATHull,0
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUgrn_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Green_02
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GREENJUNGLE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Jungle_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUgrn_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Green_03
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GREENDESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_01_AA_Tower_RUgrn_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Desert_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUgrn_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Hex,1,
			GreenHex,0,
			Green,0,
			Green_02,0,
			Green_03,0
		};
	};
	// Arma 3 Apex
	class O_T_APC_Tracked_02_cannon_ghex_F: O_APC_Tracked_02_cannon_F
	{
		class TransportMagazines
		{
			mag_xx(30Rnd_580x42_Mag_F,12);
			mag_xx(100Rnd_580x42_Mag_F,8);
			mag_xx(HandGrenade,6);
			mag_xx(MiniGrenade,6);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellRed,8);
			mag_xx(SmokeShellYellow,8);
			mag_xx(SmokeShellOrange,8);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
			mag_xx(RPG32_F,5);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Titan_AT,2);
			mag_xx(Titan_AA,2);
		};
		class TransportBackpacks
		{
			bag_xx(B_FieldPack_ghex_F,2);
		};
	};
	class O_T_APC_Tracked_02_AA_ghex_F: O_APC_Tracked_02_AA_F
	{
		class TransportMagazines
		{
			mag_xx(30Rnd_580x42_Mag_F,12);
			mag_xx(100Rnd_580x42_Mag_F,8);
			mag_xx(HandGrenade,6);
			mag_xx(MiniGrenade,6);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellRed,8);
			mag_xx(SmokeShellYellow,8);
			mag_xx(SmokeShellOrange,8);
			mag_xx(1Rnd_HE_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
			mag_xx(RPG32_F,5);
			mag_xx(RPG32_HE_F,2);
			mag_xx(Titan_AT,2);
			mag_xx(Titan_AA,2);
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