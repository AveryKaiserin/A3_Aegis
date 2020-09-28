#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Aegis_Driver_Boat_Civil_02 = Aegis_Driver_Boat_Civil_02;
		Aegis_Pilot_Plane_Fighter_05 = Aegis_Pilot_Plane_Fighter_05;
		Aegis_Pilot_Plane_Fighter_05_Enter = Aegis_Pilot_Plane_Fighter_05_GetIn;
		Aegis_Pilot_Plane_Fighter_05_Exit = Aegis_Pilot_Plane_Fighter_05_GetOut;
		Aegis_Pilot_Plane_Transport_01 = Aegis_Pilot_Plane_Transport_01;
		Aegis_Passenger_Plane_Transport_01 = Aegis_Passenger_Plane_Transport_01;
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class PreciseCrew;
		class Aegis_KIA_Driver_Boat_Civil_02: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Aegis_Driver_Boat_Civil_02: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02.rtm";
			interpolateTo[] = {Aegis_KIA_Driver_Boat_Civil_02,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Aegis_Pilot_Plane_Fighter_05: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\pilot_Plane_Fighter_05_idle.rtm";
			interpolateTo[] = {Aegis_KIA_Pilot_Plane_Fighter,1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Aegis_Pilot_Plane_Fighter_05_GetIn: PreciseCrew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\pilot_Plane_Fighter_05_get_in.rtm";
			speed = -6.2;
			looped = false;
			connectTo[] = {};
			interpolateTo[] =
			{
				Aegis_Pilot_Plane_Fighter_05,0.2,
				Aegis_KIA_Pilot_Plane_Fighter,1
			};
			variantsAI[] = {};
			variantsPlayer[] = {};
			variantAfter[] = {2.7,2.7,2.7};
			useIdles = false;
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			headBobMode = true;
			headBobStrength = 0.8;
		};
		class Aegis_Pilot_Plane_Fighter_05_GetOut: Aegis_Pilot_Plane_Fighter_05_GetIn
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\pilot_Plane_Fighter_05_get_out.rtm";
			speed = -5;
			connectTo[] = {AmovPercMstpSlowWpstDnon,0.02};
			interpolateTo[] = {Aegis_KIA_Pilot_Plane_Fighter,0.01};
			variantsPlayer[] = {};
		};
		class Aegis_KIA_Pilot_Plane_Transport_01: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Aegis_Pilot_Plane_Transport_01: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01.rtm";
			interpolateTo[] = {Aegis_KIA_Pilot_Plane_Transport_01,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class Aegis_KIA_Passenger_Plane_Transport_01: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Aegis_Passenger_Plane_Transport_01: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01.rtm";
			interpolateTo[] = {Aegis_KIA_Passenger_Plane_Transport_01,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
	};
};
