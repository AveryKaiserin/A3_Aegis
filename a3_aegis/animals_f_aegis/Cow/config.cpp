#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgMovesAnimal_Base_F.hpp"
#include "CfgMovesCow_F.hpp"
#include "cfgSounds.hpp"
class CfgVehicles
{
	class Animal;
	class Animal_Base_F: Animal
	{
		class EventHandlers;
	};
	class Aegis_Cow_random_F: Animal_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Aegis_Cow_random_F0;
		model = "\A3_Aegis\Animals_F_Aegis\Cow\Cow_F.p3d";
		hasGeometry = true;
		moves = CfgMovesCow_F;
		singSound[] = {"\A3_Aegis\Animals_F_Aegis\Cow\Data\Sound\cow_moo01",1,1,300};
		class Wounds
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Animals_F_Aegis\Cow\Data\Cow.rvmat",
				"A3_Aegis\Animals_F_Aegis\Cow\Data\W1_Cow.rvmat",
				"A3_Aegis\Animals_F_Aegis\Cow\Data\W2_Cow.rvmat"
			};
		};
		hiddenSelections[] = {camo};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM '\A3_Aegis\Animals_F_Aegis\Cow\Scripts\randomize.sqf';";
		};
		class VariablesScalar
		{
			_threatMaxRadius = 10;
			_runDistanceMax = 25;
			_movePrefer = 0.25;
			_formationPrefer = 0.85;
			_scareLimit = 0.2;
			_dangerLimit = 12;
			_walkSpeed = 0.81;
		};
		class VariablesString
		{
			_expSafe = (0.5 * meadow) * (0.5 *  houses) * (1 - forest) * (1 - trees) * (1 - sea);
			_expDanger = (0.5 * meadow) * (0.5 *  houses) * (1 - forest) * (1 - trees) * (1 - sea);
		};
	};
};