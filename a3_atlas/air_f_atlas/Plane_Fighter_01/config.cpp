#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane_Base_F;
	// Arma 3 Jets
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		class TextureSources
		{
			class DarkGrey;
		};
		class EjectionSystem;
	};
	class B_Plane_Fighter_01_F: Plane_Fighter_01_Base_F{};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F{};
	class Ejection_Seat_Plane_Fighter_01_base_F;
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"
};