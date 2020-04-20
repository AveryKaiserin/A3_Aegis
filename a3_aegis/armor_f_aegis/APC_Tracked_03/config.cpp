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
	class APC_Tracked_03_base_F: Tank_F
	{
		class MFD
		{
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				class Draw
				{
					class Main_Armament_Ammo_Type_1
					{
						text = "GPR-T";
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
				weapons[] =
				{
					autocannon_40mm_CTWS,
					LMG_coax
				};
				magazines[] =
				{
					mag_2(120Rnd_40mm_GPR_Tracer_Yellow_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Yellow_shells),
					mag_10(200Rnd_762x51_Belt_Yellow)
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				weapon = autocannon_40mm_CTWS;
			};
			class muzzle_hide
			{
				weapon = autocannon_40mm_CTWS;
			};
		};
		animationList[] =
		{
			showBags,0.67,
			showBags2,0.5,
			showCamonetHull,0,
			showCamonetTurret,0,
			showTools,0.83,
			showSLATHull,0,
			showSLATTurret,0
		};
		class TextureSources
		{
			class Indep_02
			{
				textures[] =
				{
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext_INDP_CO.paa",
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext2_INDP_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"\A3\Armor_F\Data\cage_AAF_CO.paa"
				};
			};
			class Indep_03
			{
				textures[] =
				{
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext_INDP_CO.paa",
					"\A3\Armor_F_EPB\APC_Tracked_03\Data\APC_Tracked_03_Ext2_INDP_CO.paa",
					"\A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_AAF_CO.paa"
				};
			};
			class Sand_01
			{
				displayName = $STR_A3_TEXTURESOURCES_SAND0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_CO.paa",
					"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\A3\Armor_F\Data\cage_sand_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
			class Olive_01
			{
				displayName = $STR_A3_TEXTURESOURCES_OLIVE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\APC_Tracked_03\Data\APC_Tracked_03_Ext2_olive_CO.paa",
					"\A3_Aegis\Armor_F_Aegis\Data\camonet_NATO_Stripe_Green_CO.paa",
					"\A3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[] = {BLU_A_F};
			};
		};
	};
	// Arma 3 Enoch
	class I_E_APC_tracked_03_base_F: APC_Tracked_03_base_F{};
	class I_E_APC_tracked_03_cannon_F: I_E_APC_tracked_03_base_F
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
					mag_2(120Rnd_40mm_GPR_Tracer_Red_shells),
					mag_2(80Rnd_40mm_APFSDS_Tracer_Red_shells),
					mag_10(200Rnd_762x51_Belt_Red)
				};
			};
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Aegis.hpp"
};