#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
#include "\A3_Aegis\sensors.inc"
#include "\A3_Aegis\optics.inc"
class CfgVehicles
{
    // Arma 3
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class HitPoints;
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
	};
    // Arma 3 Aegis
	class AAA_System_01_base_F: StaticMortar
	{
		author = $STR_A3_A_AveryTheKitty;
        mapSize = 6.18;
		scope = private;
		displayName = $STR_A3_A_CfgVehicles_AAA_System_01_base_F0;
		model = "\A3_Aegis\Static_F_Aegis\Arty_System_01\Arty_System_01_F.p3d";
		icon = "\A3_Aegis\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_icon_CA.paa";
		picture = "\A3_Aegis\Static_F_Jets\AAA_system_01\Data\UI\AAA_system_01_picture_CA.paa";
		vehicleClass = Autonomous;
		editorSubcategory = EdSubcat_Turrets;
		hasDriver = false;
		hasGunner = true;
		isUav = true;
		getInRadius = 0;
		accuracy = 0.4;
		cost = 200000;
		threat[] =
        {
            0.8,    // Soft
            0.8,    // Armor
            0.1     // Air
        };
        availableForSupportTypes[] = {Artillery};
        class Library
        {
            libTextDesc = $STR_A3_A_CfgVehicles_AAA_System_01_base_F_Library0;
        };
		unitInfoType = RscUnitInfoArtillery;
        // Camera and optics
		extCameraPosition[] =
        {
            0,      // X
            1.5,    // Y
            -10.0   // Z
        };
        // Physics and handling
		canFloat = false;
        // Sensors and electronics
		enableGPS = true;
		radartype = VehicleRadar;
		radarTarget = true;
		radarTargetSize = 0.9;
		visualTarget = true;
		visualTargetSize = 1.2;
		irTarget = true;
		irTargetSize = 0.5;
		reportRemoteTargets = false;
		receiveRemoteTargets = false;
		reportOwnPosition = false;
		incomingMissileDetectionSystem = CM_No_Missiles;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 3500;
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 60;
						angleRangeVertical = 40;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 7000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						aimDown = -45;
						maxTrackableSpeed = 1388.89;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink{};
				};
			};
		};
        // Selections for engine-based animations
		uavCameraGunnerPos = gunnerview;
		uavCameraGunnerDir = gunnerview_dir;
		memoryPointGun = "usti hlavne";
		memoryPointTaskMarker = TaskMarker_1_pos;
        // Model animations
		class AnimationSources
		{
            class revolving_cannon
            {
                source = revolving;
                weapon = mortar_120mm_AMOS;
            };
		};
        // Damage and hitpoints
		armor = 80;
		armorStructural = 2;
		damageResistance = 0.004;
		damageEffect = AirDestructionEffects;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 3;
				name = hit_hull;
				visual = zbytek;
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 0.2;
				depends = Total;
				passThrough = 0.1;
				material = 51;
			};
			class Hitoptics: HitHull
			{
				armor = 0.2;
				name = hit_optics;
				visual = optics;
				convexComponent = optics;
				radius = 0.06;
				minimalHit = 0.01;
				explosionShielding = 0.1;
			};
			class HitTurret: HitHull
			{
				armor = 3;
				name = hit_turret;
				convexComponent = turret;
				visual = turret;
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				class DestructionEffects
				{
					class light1
					{
						simulation = light;
						type = ObjectDestructionLight;
						position = turretdestruct_pos;
						intensity = 0.001;
						interval = 1;
						lifeTime = 3;
					};
					class smoke1
					{
						simulation = particles;
						type = ObjectDestructionSmoke;
						position = turretdestruct_pos;
						intensity = 0.15;
						interval = 1;
						lifeTime = 3.5;
					};
					class fire1
					{
						simulation = particles;
						type = ObjectDestructionFire1;
						position = turretdestruct_pos;
						intensity = 0.15;
						interval = 1;
						lifeTime = 3;
					};
					class sparks1
					{
						simulation = particles;
						type = ObjectDestructionSparks;
						position = turretdestruct_pos;
						intensity = 0;
						interval = 1;
						lifeTime = 0;
					};
					class sound
					{
						simulation = sound;
						position = turretdestruct_pos;
						intensity = 1;
						interval = 1;
						lifeTime = 1;
						type = Fire;
					};
				};
			};
			class Hitgun: HitTurret
			{
				name = hit_gun;
				visual = gun;
				convexComponent = gun;
				armor = 2;
				passThrough = 0.1;
				explosionShielding = 1.0;
				class DestructionEffects: DestructionEffects
				{
					class light1: light1
					{
						position = gundestruct_pos;
					};
					class smoke1: smoke1
					{
						position = gundestruct_pos;
					};
					class fire1: fire1
					{
						position = gundestruct_pos;
					};
					class sparks1: sparks1
					{
						position = gundestruct_pos;
					};
					class sound: sound
					{
						position = gundestruct_pos;
					};
				};
			};
		};
        // Textures and materials
		class Damage
		{
			tex[] = {};
			mat[] =
            {
                "A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows.rvmat",
                "A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_damage.rvmat",
                "A3\Armor_F_Beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_destruct.rvmat",
                "A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1.rvmat",
                "A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1_damage.rvmat",
                "A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part1_destruct.rvmat",
                "A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2.rvmat",
                "A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2_damage.rvmat",
                "A3\Supplies_F_Heli\Slingload\Data\Slingload_01_part2_destruct.rvmat"
            };
		};
        // Turrets and weapons
        #include "turrets.hpp"
	};
	#include "cfgBlufor.hpp"		    // US
};