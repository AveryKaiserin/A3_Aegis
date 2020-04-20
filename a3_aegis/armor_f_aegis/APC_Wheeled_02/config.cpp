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
		class TextureSources
		{
			class Hex
			{
				factions[] =
				{
					OPF_F,
					OPF_A_F
				};
			};
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Green_02
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GREENJUNGLE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Jungle_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
			class Green_03
			{
				displayName = $STR_A3_A_TEXTURESOURCES_GREENDESERT0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Desert_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
				};
				factions[] = {OPF_R_F};
			};
		};
		textureList[] =
		{
			Hex,1,
			GreenHex,0,
			Green,1,
			Green_02,0,
			Green_03,0
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
	class O_APC_Wheeled_02_rcws_v2_F;
	// Arma 3 Apex
	class O_T_APC_Wheeled_02_rcws_v2_ghex_F;
	// Arma 3 Aegis
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgOpfor_Aegis.hpp"
};