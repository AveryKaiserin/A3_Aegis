#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class AnimationSources;
		class TextureSources
		{
			class Sand_01
			{
				factions[] = {BLU_E_F};
			};
			class Olive_01
			{
				factions[] = {BLU_E_F};
			};
		};
	};
	// Arma 3 Atlas
	#include "cfgBlufor_Atlas.hpp"
};