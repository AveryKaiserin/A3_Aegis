#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
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
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class CommanderTurret: MainTurret{};
		};
		class Reflectors
		{
			class Left
			{
				useFlare = true;
			};
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CommanderTurret: CommanderTurret{};
		};
	};
	class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
			class CommanderTurret: CommanderTurret{};
		};
	};
    // Arma 3 Theseus
	#include "cfgNAAF.hpp"				// NAAF
};