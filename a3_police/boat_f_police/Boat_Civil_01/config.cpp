#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	// Arma 3
	class Ship_F;
	class Boat_Civil_01_base_F: Ship_F
	{
		class EventHandlers;
		class AnimationSources;
		class TextureSources
		{
			class Police
			{
				factions[] = {IND_P_F};
			};
		};
	};
	class C_Boat_Civil_01_police_F: Boat_Civil_01_base_F
	{
		scope = protected;
		scopeCurator = private;
	};
	// Arma 3 Police
	#include "cfgPolice.hpp"			// Police
};