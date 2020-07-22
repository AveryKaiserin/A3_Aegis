#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Plane_Base_F;
	class Ejection_Seat_Plane_Fighter_03_base_F;
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class TextureSources
		{
			class Grey
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F,
					OPF_A_F
				};
			};
		};
		class AnimationSources;
		class EjectionSystem;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F{};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"		// NATO (European)
	#include "cfgOpfor_Atlas.hpp"		// NATO (Caspian)
};