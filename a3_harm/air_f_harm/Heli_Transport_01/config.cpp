#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Helicopter_Base_H;
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class TextureSources
		{
			class Grey
			{
				factions[] =
				{
					BLU_F,
					BLU_T_F,
					BLU_W_F,
					Marine_BLU_USMC_F
				};
			};
		};
	};
	class B_Heli_Transport_01_F;
	// Arma 3 Marine
	#include "cfgUSMC.hpp"			// USMC
	#include "cfgBlufor.hpp"
};