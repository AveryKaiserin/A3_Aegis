#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Tank
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
	};
	class LT_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class LT_01_AT_base_F: LT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
				{
					HMG_127_LT,
					missiles_Firefist,
					SmokeLauncher
				};
				magazines[] =
				{
					mag_2(100Rnd_127x99_mag_Tracer_Yellow),
					mag_2(2Rnd_127mm_Firefist_missiles),
					SmokeLauncherMag
				};
				stabilizedInAxes = StabilizedInAxesBoth;
			};
		};
	};
	class LT_01_AA_base_F: LT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
				{
					HMG_127_LT,
					missiles_SAAMI,
					SmokeLauncher
				};
				magazines[] =
				{
					mag_2(100Rnd_127x99_mag_Tracer_Yellow),
					mag_2(4Rnd_70mm_SAAMI_missiles),
					SmokeLauncherMag
				};
				stabilizedInAxes = StabilizedInAxesBoth;
			};
		};
	};
	class LT_01_cannon_base_F: LT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] =
				{
					cannon_20mm,
					LMG_coax_ext,
					SmokeLauncher
				};
				magazines[] =
				{
					mag_2(60Rnd_20mm_HE_shells),
					mag_2(60Rnd_20mm_AP_shells),
					mag_4(250Rnd_762x51_Belt_Yellow),
					SmokeLauncherMag
				};
				stabilizedInAxes = StabilizedInAxesBoth;
			};
		};
	};
};