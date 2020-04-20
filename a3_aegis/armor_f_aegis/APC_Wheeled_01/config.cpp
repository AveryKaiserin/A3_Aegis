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
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics{};
				};
			};
		};
		class MFD
		{
			class MFD_Gunner_AmmoIndicator_Main_Armament
			{
				class Draw
				{
					class Main_Armament_Ammo_Type_1
					{
						text = "MP-T";
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				weapon = autocannon_30mm;
			};
			class muzzle_hide
			{
				weapon = autocannon_30mm;
			};
			class revolving_cannon
			{
				weapon = autocannon_30mm;
			};
			class HideTurret;
			class showSLATHull;
			class showSLATTurret;
		};
		class TextureSources
		{
			class Sand;
			class Olive;
		};
	};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F{};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
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
					autocannon_30mm,
					LMG_coax
				};
				magazines[] =
				{
					mag_2(140Rnd_30mm_MP_shells_Tracer_Red),
					mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Red),
					mag_10(200Rnd_762x51_Belt_Red)
				};
			};
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"
	#include "cfgBlufor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
};