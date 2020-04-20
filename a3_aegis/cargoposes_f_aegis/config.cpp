#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Driver_Boat_Civil_02 = Driver_Boat_Civil_02;
		Driver_Boat_Civil_03 = Driver_Boat_Civil_03;
		passenger_cargo01 = passenger_cargo01;
		passenger_cargo02 = passenger_cargo02;
		passenger_cargo03 = passenger_cargo03;
		passenger_cargo04 = passenger_cargo04;
		Passenger_Plane_Transport_01 = Passenger_Plane_Transport_01;
		Pilot_Plane_Fighter_05 = Pilot_Plane_Fighter_05;
		Pilot_Plane_Transport_01 = Pilot_Plane_Transport_01;
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_Driver_Boat_Civil_02: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Driver_Boat_Civil_02: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_02.rtm";
			interpolateTo[] = {KIA_Driver_Boat_Civil_02,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
/*
		class KIA_Driver_Boat_Civil_03: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_03_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
*/
		class Driver_Boat_Civil_03: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Driver_Boat_Civil_03.rtm";
			interpolateTo[] = {/*KIA_Driver_Boat_Civil_03,true*/};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class passenger_cargo01: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\passenger_cargo01.rtm";
			interpolateTo[] = {/*KIA_passenger_cargo01,true*/};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class passenger_cargo02: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\passenger_cargo02.rtm";
			interpolateTo[] = {/*KIA_passenger_cargo02,true*/};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class passenger_cargo03: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\passenger_cargo03.rtm";
			interpolateTo[] = {/*KIA_passenger_cargo03,true*/};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class passenger_cargo04: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\passenger_cargo04.rtm";
			interpolateTo[] = {/*KIA_passenger_cargo04,true*/};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Passenger_Plane_Transport_01: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Passenger_Plane_Transport_01: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Passenger_Plane_Transport_01.rtm";
			interpolateTo[] = {KIA_Passenger_Plane_Transport_01,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Pilot_Plane_Fighter_05: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Fighter_05_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Pilot_Plane_Fighter_05: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Fighter_05.rtm";
			interpolateTo[] = {KIA_Pilot_Plane_Fighter_05,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_Pilot_Plane_Transport_01: DefaultDie
		{
			actions = DeadActions;
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01_KIA.rtm";
			looped = false;
			terminal = true;
			soundEnabled = false;
			connectTo[] = {Unconscious,0.1};
		};
		class Pilot_Plane_Transport_01: Crew
		{
			file = "\A3_Aegis\Cargoposes_F_Aegis\Anim\Pilot_Plane_Transport_01.rtm";
			interpolateTo[] = {KIA_Pilot_Plane_Transport_01,true};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
	};
};
