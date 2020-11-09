class CfgVehicles
{
    /* Animals inheritance */
    #include "P:\A3_Aegis\animals.hpp"

	class Cow_random_F: Animal_Base_F
	{
		author = $STR_A3_A_AveryTheKitty;
		scope = protected;
		displayName = $STR_A3_A_CfgVehicles_Cow_random_F0;
		model = "\A3_Aegis\Animals_F_Aegis\Cow\Cow_F.p3d";
		hasGeometry = true;
		moves = CfgMovesCow_F;
		singSound[] = {"\A3_Aegis\Animals_F_Aegis\Cow\Data\Sound\cow_moo01",db0,1,300};
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
		hiddenSelections[] = {Camo};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) call Aegis_fnc_animalRandomization;";
		};
		class VariablesScalar
		{
			_threatMaxRadius = 40;
			_runDistanceMax = 100;
			_movePrefer = 0.25;
			_formationPrefer = 0.85;
			_scareLimit = 0.2;
			_dangerLimit = 5.0;
			_walkSpeed = 0.81;
		};
		class VariablesString
		{
			_expSafe = (0.5 * meadow) * (0.5 *  trees) * (1 - forest) * (1 - houses) * (1 - sea) * hills;
			_expDanger = (1 - sea) * hills;
		};
	};
};