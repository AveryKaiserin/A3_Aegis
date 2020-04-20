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
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderOptics: CommanderOptics{};
		};
		class AnimationSources: AnimationSources{};
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
			"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
			"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderOptics: CommanderOptics{};
		};
		class AnimationSources: AnimationSources{};
	};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					mag_2(64Rnd_40mm_G_belt),
					mag_4(200Rnd_127x99_mag_Tracer_Red)
				};
			};
			class CommanderOptics: CommanderOptics{};
		};
		class TextureSources
		{
			class Sand
			{
				textures[] =
				{
					"\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
					"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
			};
			class Olive
			{
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
		};
		animationList[] =
		{
			showCamonetHull,0,
			showCamonetPlates1,0,
			showCamonetPlates2,0,
			showBags,0.67
		};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(200Rnd_127x99_mag_Tracer_Red)};
			};
			class CommanderOptics: CommanderOptics{};
		};
		animationList[] =
		{
			showCamonetHull,0,
			showCamonetPlates1,0,
			showCamonetPlates2,0,
			showWheels,0.5,
			showAmmobox,0.83,
			showBags,0.67
		};
		hiddenSelectionsTextures[] =
		{
			"\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_CO.paa",
			"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
			"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_CO.paa",
			"\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_CRV_CO.paa",
			"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
		class TextureSources
		{
			class Sand
			{
				textures[] =
				{
					"\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CRV_CO.paa",
					"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
					"\A3_Aegis\Data_F_Aegis\Vehicles\Turret_CO.paa",
					"\A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_CRV_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
			};
			class Olive
			{
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
		};
	};
	class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
	{
		animationList[] =
		{
			showCamonetHull,0,
			showCamonetTurret,0,
			showCamonetPlates1,0,
			showCamonetPlates2,0,
			showBags,0.67
		};
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
					500Rnd_35mm_AA_shells_Tracer_Red,
					mag_2(4Rnd_Titan_long_missiles)
				};
			};
		};
		class TextureSources
		{
			class Olive
			{
				factions[] =
				{
					BLU_T_F,
					BLU_W_F
				};
			};
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"
	#include "cfgBlufor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
};