#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane_Base_F;
	class Ejection_Seat_Plane_CAS_01_base_F;
	class Plane_CAS_01_base_F: Plane_Base_F
	{
		magazines[] =
		{
			1350Rnd_Gatling_30mm_Plane_CAS_01_F,
			2Rnd_Missile_AA_04_F,
			6Rnd_Missile_AGM_02_F,
			4Rnd_Bomb_04_F,
			7Rnd_Rocket_04_HE_F,
			7Rnd_Rocket_04_AP_F,
			Laserbatteries,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class EjectionSystem;
	};
	class Plane_CAS_01_dynamicLoadout_base_F: Plane_CAS_01_base_F
	{
		magazines[] =
		{
			1350Rnd_Gatling_30mm_Plane_CAS_01_F,
			Laserbatteries,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F
	{
		displayName = $STR_A3_CfGVEHICLES_B_PLANE_01_F0;
	};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"        // US (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
};