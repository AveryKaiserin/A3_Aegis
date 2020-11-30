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
				factions[] += {Marine_BLU_USMC_F};
			};
		};
	};
	// Arma 3 Marine
	#include "cfgUSMC.hpp"			// USMC
};