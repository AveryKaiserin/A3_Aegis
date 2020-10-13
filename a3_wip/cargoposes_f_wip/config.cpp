#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Heli_Attack_03_gunner = Heli_Attack_03_gunner;
		Heli_Attack_03_pilot = Heli_Attack_03_pilot;
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PreciseCrew;
		class KIA_Heli_Attack_03_pilot: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Wip\Cargoposes_F_Wip\Anim\Heli_Attack_03_pilot_KIA.rtm";
            speed = 0.5;
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Heli_Attack_03_pilot: Crew
		{
			file = "\A3_Wip\Cargoposes_F_Wip\Anim\Heli_Attack_03_pilot.rtm";
			interpolateTo[] = {KIA_Heli_Attack_03_pilot,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Heli_Attack_03_gunner: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Wip\Cargoposes_F_Wip\Anim\Heli_Attack_03_gunner_KIA.rtm";
            speed = 0.5;
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Heli_Attack_03_gunner: Crew
		{
			file = "\A3_Wip\Cargoposes_F_Wip\Anim\Heli_Attack_03_gunner.rtm";
			interpolateTo[] = {KIA_Heli_Attack_03_gunner,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
	};
};