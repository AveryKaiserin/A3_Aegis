#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Heli
	class Air;
	class Helicopter: Air
	{
		class Turrets;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F{};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
			class RightDoorGun: MainTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
		};
		class TextureSources
		{
			class Green
			{
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class Black
			{
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext02_black_CO.paa"
				};
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class Grey
			{
				displayName = $STR_A3_TEXTURESOURCES_GREY0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext01_grey_CO.paa",
					"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext02_grey_CO.paa"
				};
				factions[] = {BLU_USMC_F};
			};
		};
	};
	class Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F
	{
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
			"\A3_Aegis\Air_F_Aegis\Heli_Transport_03\Data\Heli_Transport_03_ext02_black_CO.paa"
		};
	};
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F{};
	class B_Heli_Transport_03_unarmed_F;
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"        // US (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
};