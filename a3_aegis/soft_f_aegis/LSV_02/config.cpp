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
			class MainTurret: NewTurret{};
		};
	};
	class LSV_02_base_F: Car_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret{};
			class CargoTurret_02: CargoTurret_01{};
			class CargoTurret_03: CargoTurret_01{};
			class CargoTurret_04: CargoTurret_01{};
			class CargoTurret_05: CargoTurret_01{};
		};
		class TextureSources
		{
			class Black
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
				factions[] +=
				{
					OPF_F,
					OPF_T_F,
					OPF_V_F,
					OPF_A_F,
					OPF_V_tna_F,
					OPF_R_F,
					OPF_R_ard_F
				};
			};
			class GreenHex
			{
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
				factions[] =
				{
					OPF_T_F,
					OPF_V_tna_F
				};
			};
			class Arid
			{
				displayName = $STR_A3_TEXTURESOURCES_HEX0;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
				};
				factions[] =
				{
					OPF_F,
					OPF_V_F,
					OPF_A_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_RUkhk_CO.paa",
					"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_RUkhk_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				// Let's replace the original damage / destruct materials to work with our texture workaround
				"A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_damage.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_destruct.rvmat",

				"A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_damage.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_destruct.rvmat",

				"A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_damage.rvmat",
				"A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_destruct.rvmat"
			};
		};
        // TFAR compatibility
		tf_hasLRradio = true;
		tf_isolatedAmount = 0.7;
	};
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Green_Splash)};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
		};
	};
	class LSV_02_unarmed_base_F;
	class LSV_02_AT_base_F;
	class O_T_LSV_02_armed_F: LSV_02_armed_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_LSV_02_armed_viper_F: O_T_LSV_02_armed_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
		};
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_LSV_02_AT_F: LSV_02_AT_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
		};
		class TransportMagazines
		{
			mag_xx(100Rnd_580x42_Mag_F,8);
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_T_LSV_02_unarmed_viper_F: O_T_LSV_02_unarmed_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_LSV_02_armed_F: LSV_02_armed_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_LSV_02_armed_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
	};
	class O_LSV_02_armed_viper_F: O_LSV_02_armed_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_LSV_02_unarmed_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
		};
	};
	class O_LSV_02_AT_F: LSV_02_AT_base_F
	{
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_LSV_02_AT_F.jpg";
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
			"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
		};
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	class O_LSV_02_unarmed_viper_F: O_LSV_02_unarmed_F
	{
		class TransportMagazines
		{
			delete _xx_16Rnd_9x21_Mag;
			mag_xx(17Rnd_9x21_Mag,12);
		};
	};
	// Arma 3 Aegis
	#include "cfgViper.hpp"
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgSpetsnaz.hpp"
};