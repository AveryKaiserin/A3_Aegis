#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class StaticShip;
	class House_F;
	// Arma 3 Jets
	class Land_Destroyer_01_base_F: StaticShip
	{
		displayName = "USS Liberty";
	};
	class Land_Destroyer_01_hull_base_F: House_F
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