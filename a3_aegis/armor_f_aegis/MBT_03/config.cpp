#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
	};
	class MBT_03_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] =
						{
							mag_2(200Rnd_127x99_mag_Tracer_Yellow),
							SmokeLauncherMag
						};
					};
				};
				magazines[] =
				{
					20Rnd_120mm_APFSDS_shells_Tracer_Yellow,
					12Rnd_120mm_HE_shells_Tracer_Yellow,
					12Rnd_120mm_HEAT_MP_T_Yellow,
					mag_20(200Rnd_762x51_Belt_Yellow),
					4Rnd_120mm_cannon_missiles
				};
			};
		};
		textureList[] =
		{
			Indep_01,1,
			Indep_02,0,
			Indep_03,0,
			Sand_01,0,
			Olive_01,0
		};
		class TextureSources
		{
			class Sand_01
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = {BLU_F};
			};
			class Olive_01
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext01_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_ext02_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\MBT_03\Data\MBT_03_rcws_olive_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
		};
		animationList[] =
		{
			HideTurret,0.17,
			HideHull,0.17,
			showCamonetHull,0,
			showCamonetTurret,0,
			showCamonetCannon,0,
			showCamonetCannon1,0
		};
	};
};