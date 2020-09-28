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
			class White
			{
				factions[] =
				{
					CIV_F,
                    Police_IND_P_F
				};
			};
        };
    };
	// Arma 3 Police
	#include "cfgPolice.hpp"			// Police
	// Deprecated Classes
	#include "deprecated.hpp"
};