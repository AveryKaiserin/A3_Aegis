#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class House_F;
	// Arma 3 Jets
	class Land_Carrier_01_hull_base_F: House_F
	{
		class MarkerLights
		{
			class M_light_base
			{
				useFlare = true;
			};
		};
	};
};