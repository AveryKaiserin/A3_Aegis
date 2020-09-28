#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3 Apex
	class VTOL_Base_F;
	class VTOL_01_base_F: VTOL_Base_F
	{
		class TextureSources
		{
			class Blue
			{
				factions[] +=
				{
					BLU_F,
					BLU_W_F
				};
			};
			class Olive
			{
				factions[] +=
				{
					BLU_F,
					BLU_W_F,
					BLU_A_F,
					BLU_A_tna_F,
					BLU_A_wdl_F
				};
			};
		};
	};
	class VTOL_01_infantry_base_F;
	class VTOL_01_vehicle_base_F;
	class VTOL_01_armed_base_F;
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"			// US
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
	#include "cfgBlufor_Aegis.hpp"		// BAF
};