#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class Boat_F;
	class Boat_Transport_02_base_F: Boat_F
	{
		class TextureSources
		{
			class Black
			{
				factions[] =
				{
					BLU_G_F,
					OPF_G_F,
					IND_G_F,
					IND_C_F
				};
			};
		};
	};
	class B_G_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		scope = public;
		scopeCurator = public;
	};
	class O_G_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		scope = public;
		scopeCurator = public;
	};
	class I_G_Boat_Transport_02_F: Boat_Transport_02_base_F
	{
		scope = public;
		scopeCurator = public;
	};
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"
	#include "cfgOpfor.hpp"
	#include "cfgIndep.hpp"
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
};