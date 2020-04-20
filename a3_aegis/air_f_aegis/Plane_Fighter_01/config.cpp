#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Jets
	class Plane_Base_F;
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class TextureSources
		{
			class DarkGrey
			{
				displayName = "Dark Grey";
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
			class DarkGreyCamo
			{
				displayName = "Dark Grey Camo";
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F
				};
			};
		};
		class EjectionSystem;
	};
	class Ejection_Seat_Plane_Fighter_01_base_F;
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F{};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F{};
	// Arma 3 Aegis
	#include "cfgBlufor_Exp.hpp"
	#include "cfgBlufor_Enoch.hpp"
};