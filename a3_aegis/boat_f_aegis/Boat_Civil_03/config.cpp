#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class ViewPilot;
		class AnimationSources;
		class EventHandlers;
		class HitPoints
		{
			class HitEngine;
		};
	};
	class Boat_Civil_03_base_F: Boat_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 8;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_ship_boat_s};
				speechPlural[] = {veh_ship_boat_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_ship_boat_s;
		textPlural = $STR_A3_nameSound_veh_ship_boat_p;
		nameSound = veh_ship_boat_s;
		displayName = $STR_A3_CfgVehicles_Boat_Civil_03_base0;
		accuracy = 0.5;
		model = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Boat_Civil_03_F.p3d";
		editorSubcategory = EdSubcat_Boats;
		picture = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\UI\Boat_Civil_03_CA.paa";
		Icon = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\UI\map_Boat_Civil_03_CA.paa";
		cost = 10000;
		threat[] = {0,0,0};
		unitInfoType = RscUnitInfoNoWeapon;
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_001_CO.paa",
			"\A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_002_CO.paa"
		};
		memoryPointTaskMarker = TaskMarker_1_pos;
		leftEngineEffect = LEngEffects;
		rightEngineEffect = REngEffects;
		class TransportItems
		{
			item_xx(FirstAidKit,10);
		};
		armor = 10;
    	damageResistance = 0.00318;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 0.2;
				material = 50;
				visual = zbytek;
				passThrough = 1;
				explosionShielding = 2;
				name = karoserie;
			};
			class HitEngine: HitEngine
			{
				armor = 0.2;
				material = -1;
				visual = "";
				passThrough = 1;
				explosionSHielding = 2;
				name = engine;
				convexComponent = engine;
			};
		};
		class Turrets{};
		driverLeftHandAnimName = volant;
		driverRightHandAnimName = volant;
		driverAction = Driver_Boat_Civil_03;
		cargoAction[] =
		{
			passenger_cargo01,
			passenger_cargo02,
			passenger_cargo03,
			passenger_cargo03,
			passenger_cargo03,
			passenger_cargo03,
			passenger_cargo04
		};
		getInAction = GetInMedium;
		getOutAction = GetOutMedium;
		cargoGetInAction[] = {GetInMedium};
		cargoGetOutAction[] = {GetOutMedium};
		castDriverShadow = true;
		castCargoShadow = true;
		ejectDeadDriver = true;
		ejectDeadCargo = true;
		hideWeaponsCargo = true;
		#include "PhysX.hpp"
		transportSoldier = 7;
		supplyRadius = 3;
		fuelExplosionPower = 0;
		enableRadio = true;
		class Library
		{
			libTextDesc = $STR_A3_CfgVehicles_Boat_Civil_03_base_Library0;
		};
    	extCameraPosition[] = {0,4,-14};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = ExhaustsEffect;
				engineIndex = 0;
			};
		};
		leftFastWaterEffect = LFastWaterEffects;
		rightFastWaterEffect = RFastWaterEffects;
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_001.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_001_damage.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_001_damage.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_002.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_002_damage.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_03\Data\Boat_Civil_03_002_damage.rvmat"
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = svetlo;
				direction = "svetlo konec";
				hitpoint = svetlo;
				selection = svetlo;
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = true;
				dayLight = true;
				flareSize = 2;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0,0};
				ambient[] = {0.08,0,0};
				intensity = 50;
				name = PositionLight_Red_1_pos;
				drawLight = true;
				drawLightSize = 0.15;
				drawLightCenterSize = 0.04;
				activeLight = false;
				blinking = false;
				dayLight = true;
				useFlare = true;
			};
			class PositionGreen: PositionRed
			{
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
				name = PositionLight_Green_1_pos;
			};
			class PositionWhite: PositionRed
			{
				color[] = {1,1,1};
				ambient[] = {0.1,0.1,0.1};
				name = PositionLight_White_1_pos;
				blinking = true;
				blinkingStartsOn = true;
				blinkingPattern[] = {0.5,0.5};
				blinkingPatternGuarantee = true;
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	#include "cfgCivil.hpp"
};