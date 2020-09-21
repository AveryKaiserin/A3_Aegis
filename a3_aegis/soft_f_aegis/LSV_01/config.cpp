#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class LSV_01_base_F: Car_F
	{
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_02: CargoTurret{};
			class CargoTurret_03: CargoTurret_02{};
		};
		class TextureSources
		{
			class Black
			{
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
					"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\Launcher_blk_CO.paa",
					"\A3_Aegis\Weapons_F_Aegis\Launchers\Titan\Data\TubeM_blk_CO.paa"
				};
				factions[] =
				{
					BLU_T_F,
					BLU_F,
					BLU_W_F,
					BLU_A_F,
					BLU_A_tna_F,
					BLU_A_BAF_F
				};
			};
			class Olive
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
				factions[] =
				{
					BLU_T_F,
					BLU_W_F,
					BLU_A_tna_F,
					BLU_A_BAF_F
				};
			};
			class Sand
			{
				factions[] =
				{
					BLU_F,
					BLU_A_F
				};
			};
			class Dazzle
			{
				displayName = $STR_A3_A_TEXTURESOURCES_TROPIC0;
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
				factions[] = {BLU_CTRG_tna_F};
			};
			class Dazzle_02
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_CO.paa"
				};
				factions[] = {BLU_CTRG_F};
			};
			class BAF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_BAF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_BAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_BAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_BAF_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_BAF_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
					"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
				};
				factions[] =
				{
					BLU_A_tna_F,
					BLU_A_BAF_F
				};
			};
		};
        // TFAR compatibility
		tf_hasLRradio = true;
		tf_isolatedAmount = 0.7;
	};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initFov = 0.4375;
					minFov = 0.03482;
					maxFov = 0.4375;
					visionMode[] =
					{
						Normal,
						NVG
					};
				};
			};
			class CodRiverTurret: MainTurret{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
		};
	};
	class LSV_01_unarmed_base_F: LSV_01_base_F{};
	class LSV_01_light_base_F: LSV_01_base_F{};
	class LSV_01_AT_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class TopTurret: MainTurret{};
			class CodRiverTurret: MainTurret{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
		};
	};
	class B_T_LSV_01_armed_F;
	class B_T_LSV_01_AT_F: LSV_01_AT_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_CO.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_short_tna_F_02_CO.paa"
		};
	};
	class B_T_LSV_01_unarmed_F;
	class B_LSV_01_armed_F: LSV_01_armed_base_F{};
	class B_LSV_01_unarmed_F;
	class B_CTRG_LSV_01_light_F: LSV_01_light_base_F
	{
		faction = BLU_CTRG_tna_F;
		textureList[] =
		{
			Dazzle,1,
			Dazzle_02,0
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_red,16);
			mag_xx(150Rnd_556x45_Drum_Mag_F,6);
			mag_xx(HandGrenade,10);
			mag_xx(1Rnd_HE_Grenade_shell,10);
			mag_xx(1Rnd_Smoke_Grenade_shell,4);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
			mag_xx(16Rnd_9x21_Mag,12);
			mag_xx(SmokeShell,4);
			mag_xx(SmokeShellGreen,4);
			mag_xx(SmokeShellOrange,4);
			mag_xx(SmokeShellBlue,4);
			mag_xx(NLAW_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_SPAR_01_blk_F,2);
		};
	};
	class B_T_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_F
	{
		faction = BLU_CTRG_tna_F;
		textureList[] =
		{
			Dazzle,1,
			Dazzle_02,0
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_red,16);
			mag_xx(150Rnd_556x45_Drum_Mag_F,6);
			mag_xx(HandGrenade,10);
			mag_xx(1Rnd_HE_Grenade_shell,10);
			mag_xx(1Rnd_Smoke_Grenade_shell,4);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
			mag_xx(16Rnd_9x21_Mag,12);
			mag_xx(SmokeShell,4);
			mag_xx(SmokeShellGreen,4);
			mag_xx(SmokeShellOrange,4);
			mag_xx(SmokeShellBlue,4);
			mag_xx(NLAW_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_SPAR_01_blk_F,2);
		};
	};
	class B_T_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_F
	{
		faction = BLU_CTRG_tna_F;
		textureList[] =
		{
			Dazzle,1,
			Dazzle_02,0
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_red,16);
			mag_xx(150Rnd_556x45_Drum_Mag_F,6);
			mag_xx(HandGrenade,10);
			mag_xx(1Rnd_HE_Grenade_shell,10);
			mag_xx(1Rnd_Smoke_Grenade_shell,4);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,4);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,4);
			mag_xx(16Rnd_9x21_Mag,12);
			mag_xx(SmokeShell,4);
			mag_xx(SmokeShellGreen,4);
			mag_xx(SmokeShellOrange,4);
			mag_xx(SmokeShellBlue,4);
			mag_xx(NLAW_F,2);
		};
		class TransportWeapons
		{
			weap_xx(arifle_SPAR_01_blk_F,2);
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"
	#include "cfgBlufor_Exp.hpp"
	#include "cfgCTRG.hpp"
	#include "cfgBlufor_Enoch.hpp"
	#include "cfgBlufor_Aegis.hpp"
};
