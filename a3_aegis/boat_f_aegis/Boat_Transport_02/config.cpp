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
                    BLU_GEN_F,
					IND_C_F
				};
			};
		};
	};
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"
	#include "cfgOpfor.hpp"
	#include "cfgIndep.hpp"
	#include "cfgBlufor_Exp.hpp"
	#include "cfgOpfor_Exp.hpp"
	#include "cfgGendarmerie.hpp"
	#include "cfgSpetsnaz.hpp"
	#include "cfgBlufor_Aegis.hpp"
};