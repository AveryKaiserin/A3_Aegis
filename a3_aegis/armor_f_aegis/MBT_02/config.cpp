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
		class HitPoints;
	};
	class MBT_02_base_F: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitLTrack;
			class HitRTrack;
			class HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Left_1: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Left_2: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Right_1: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
			class HitERA_Right_2: HitERA_Front
			{
				class DestructionEffects
				{
					class Explo;
					class Smoke;
					class Sound;
				};
			};
		};
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
							mag_2(150Rnd_127x108_Ball),
							SmokeLauncherMag
						};
					};
				};
				weapons[] =
				{
					cannon_125mm,
					LMG_coax
				};
				magazines[] =
				{
					16Rnd_125mm_APFSDS_T_Green,
					12Rnd_125mm_HEAT_T_Green,
					12Rnd_125mm_HE_T_Green,
					mag_20(200Rnd_762x51_Belt_Green),
					4Rnd_125mm_cannon_missiles
				};
			};
		};
		animationList[] =
		{
			showCamonetHull,0,
			showCamonetCannon,0,
			showCamonetTurret,0,
			showLog,1
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F
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
							64Rnd_40mm_G_belt,
							mag_2(200Rnd_127x99_mag_Tracer_Green),
							SmokeLauncherMag
						};
					};
				};
			};
		};
	};
	class O_MBT_02_cannon_F;
	// Arma 3 Apex
	class O_T_MBT_02_cannon_ghex_F;
	// Arma 3 Aegis
	#include "cfgOpfor_Tacops.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgOpfor_Aegis.hpp"
};