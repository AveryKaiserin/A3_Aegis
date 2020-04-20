#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Quadbike_01_base_F: Car_F
	{
		class TextureSources
		{
			class Blufor
			{
				factions[] =
				{
					BLU_F,
					BLU_A_F,
					BLU_E_F
				};
			};
			class Olive
			{
				factions[] =
				{
					BLU_T_F,
					BLU_W_F,
					BLU_A_F,
					BLU_E_F
				};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"
};