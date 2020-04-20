#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
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
			Green,0,
			Green_02,0,
			Green_03,0
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
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
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
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
			Green,0,
			Green_02,0,
			Green_03,0
		};
	};
	// Arma 3 Apex
	class O_T_APC_Tracked_02_cannon_ghex_F;
	// Arma 3 Aegis
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgOpfor_Aegis.hpp"
};