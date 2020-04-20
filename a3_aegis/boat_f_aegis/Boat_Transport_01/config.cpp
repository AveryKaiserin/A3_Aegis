#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Boat_F;
	class Rubber_duck_base_F: Boat_F
	{
		class TextureSources
		{
			class Black
			{
				factions[] =
				{
					BLU_F,
					BLU_G_F,
					OPF_G_F,
					IND_G_F,
					IND_C_F,
					BLU_T_F,
					BLU_W_F,
					BLU_A_F,
					OPF_R_F
				};
			};
			class Hex
			{
				factions[] =
				{
					OPF_F,
					OPF_T_F
				};
			};
			class Rescue
			{
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F,
					BLU_A_F,
					OPF_F,
					OPF_T_F,
					OPF_R_F
				};
			};
		};
	};
	class Rescue_duck_base_F;
	// Arma 3 Aegis
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
};