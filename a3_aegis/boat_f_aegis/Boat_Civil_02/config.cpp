#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class EventHandlers;
	};
	class Boat_Civil_02_base_F: Boat_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 5;
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
		displayName = $STR_A3_A_CfgVehicles_Boat_Civil_02_base_F0;
		accuracy = 0.5;
		model = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Boat_Civil_02_F.p3d";
		editorSubcategory = EdSubcat_Boats;
		picture = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\UI\Boat_Civil_02_CA.paa";
		Icon = "\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\UI\Map_Boat_Civil_02_CA.paa";
		cost = 10000;
		threat[] = {0,0,0};
		unitInfoType = RscUnitInfoNoWeapon;
		hiddenSelections[] = {camo1};
		hiddenSelectionsTextures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_001_CO.paa"};
		memoryPointTaskMarker = TaskMarker_1_pos;
		leftEngineEffect = LEngEffectsSmall;
		rightEngineEffect = REngEffectsSmall;
		class TransportItems
		{
			item_xx(FirstAidKit,2);
		};
		armor = 10;
    	damageResistance = 0.00882;
		class HitPoints
		{
			class HitBody
			{
				armor = 0.6;
				material = 50;
				name = hull;
				visual = motor;
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 1.2;
				material = -1;
				name = Engine;
				visual = "";
				passThrough = 1;
			};
		};
		class Turrets{};
		driverRightHandAnimName = kormidlo;
		driverAction = Driver_Boat_Civil_02;
		cargoAction[] =
		{
			passenger_apc_narrow_generic03,
			passenger_generic01_leanright,
			passenger_apc_narrow_generic01,
			passenger_generic01_foldhands,
			passenger_apc_narrow_generic02
		};
		getInAction = GetInLow;
		getOutAction = GetOutLow;
		cargoGetInAction[] = {GetInLow};
		cargoGetOutAction[] = {GetOutLow};
		castDriverShadow = true;
		castCargoShadow = true;
		ejectDeadDriver = true;
		ejectDeadCargo = false;
		#include "PhysX.hpp"
		supplyRadius = 3;
		fuelExplosionPower = 0;
		transportSoldier = 5;
		class Library
		{
			libTextDesc = $STR_A3_A_CfgVehicles_Boat_civil_02_base_F_Library0;
		};
    	extCameraPosition[] = {0,4,-14};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_damage.rvmat",
				"A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_damage.rvmat"
			};
		};
		class AnimationSources
		{
			class HideCover
			{
				displayName = $STR_A3_C_CfgVehicles_Offroad_01_military_covered_base_F_AnimationSources_HideCover0;
				author = $STR_A3_A_AveryTheKitty;
				source = user;
				animPeriod = 0.001;
				initPhase = false;
			};
		};
		animationList[] = {HideCover,0.5};
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
		class TextureSources
		{
			class Red
			{
				displayName = $STR_A3_TEXTURESOURCES_RED0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_001_CO.paa"};
				factions[] = {CIV_F};
			};
			class Blue
			{
				displayName = $STR_A3_TEXTURESOURCES_BLUE0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] = {"\A3_Aegis\Boat_F_Aegis\Boat_Civil_02\Data\Boat_Civil_02_002_CO.paa"};
				factions[] = {CIV_F};
			};
		};
		textureList[] =
		{
			Red,true,
			Blue,true
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
	};
	#include "cfgCivil.hpp"
};
