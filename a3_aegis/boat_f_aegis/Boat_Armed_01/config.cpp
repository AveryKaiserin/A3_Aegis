#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Ship_F;
	class Boat_F: Ship_F
	{
		class NewTurret;
		class Turrets;
	};
	class Boat_Armed_01_base_F: Boat_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: NewTurret
			{
				magazines[] = {mag_2(64Rnd_40mm_G_belt)};
			};
			class RearTurret: FrontTurret
			{
				weapons[] = {HMG_static};
				magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Red)};
				gunnerOpticsModel = "\A3\Weapons_F_Gamma\reticle\HMG_01_Optics_Gunner_F.p3d";
			};
		};
		class TextureSources
		{
			class Blu
			{
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_A_F
				};
			};
			class Opfor
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F
				};
			};
			class Rus
			{
				displayName = $STR_A3_A_TEXTURESOURCES_RUS0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
					"\A3_Aegis\Boat_F_Aegis\Boat_Armed_01\Data\Boat_Armed_01_ext_RUS_CO.paa",
					"\A3_Aegis\Boat_F_Aegis\Boat_Armed_01\Data\Boat_Armed_01_int_RUS_CO.paa",
					"\A3_Aegis\Boat_F_Aegis\Boat_Armed_01\Data\Boat_Armed_01_crows_RUS_CO.paa"
				};
				factions[] =
				{
					OPF_R_F,
					OPF_R_ard_F
				};
			};
		};
	};
	class Boat_Armed_01_minigun_base_F: Boat_Armed_01_base_F
	{
		class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Red_Splash)};
			};
		};
	};
	class O_Boat_Armed_01_hmg_F: Boat_Armed_01_base_F
	{
        class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
				magazines[] = {mag_3(100Rnd_127x99_mag_Tracer_Green)};
			};
		};
	};
	class I_Boat_Armed_01_minigun_F: Boat_Armed_01_minigun_base_F
	{
        class Turrets: Turrets
		{
			class FrontTurret: FrontTurret{};
			class RearTurret: RearTurret
			{
				magazines[] = {mag_2(1000Rnd_762x51_Belt_T_Yellow_Splash)};
			};
		};
	};
	// Arma 3 Aegis
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
};