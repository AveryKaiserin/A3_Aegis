#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
    // Arma 3 Atlas
	class Heli_Attack_03_base_F: Helicopter_Base_F
    {
        author = $STR_A3_A_AveryTheKitty;
		mapSize = 15.5;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_air_gunship_s};
				speechPlural[] = {veh_air_gunship_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_air_gunship_s;
		textPlural = $STR_A3_nameSound_veh_air_gunship_p;
		nameSound = veh_air_gunship_s;
		scope = private;
		displayName = $STR_A3_A_CfgVehicles_Heli_Attack_03_base_F0;
		model = "\A3_Wip\Air_F_Wip\Heli_Attack_03\Heli_Attack_03_F.p3d";
		icon = "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\UI\Map_Heli_Attack_03_CA.paa";
		picture = "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\UI\Heli_Attack_03_CA.paa";
		editorSubcategory = EdSubcat_Helicopters;
		memoryPointTaskMarker = TaskMarker_1_pos;
		accuracy = 2.5;
        availableForSupportTypes[] = {CAS_Heli};
        class Library
        {
            libTextDesc = $STR_A3_A_CfgVehicles_Heli_Attack_03_base_F_Library0;
        };
        // Physics and handling
        #include "rtd.hpp"
        #include "flightModel.hpp"
		numberPhysicalWheels = 3;
        // Crew and cargo
		crewVulnerable = false;
		castDriverShadow = true;
		viewCargoShadow = true;
		driverAction = Heli_Attack_03_pilot;
		driverInAction = Heli_Attack_03_pilot;
		driverCanEject = false;
        // Get in / get out animations
		preciseGetInOut = true;
		getInRadius = 1.5;
		getinAction = GetInHigh;
		getoutaction = GetOutHigh;
        // MFD
		defaultUserMFDvalues[] =
        {
            0.0,    // R
            1.0,    // B
            0.3,    // G
            1       // A
        };
        #include "mfdPilot.hpp"
        // Camera and optics
		class ViewPilot: ViewPilot
		{
			initAngleX = -4;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
        // Damage and hitpoints
		armor = 60;
		damageResistance = 0.00593;
        destrType = DestructWreck;
		class HitPoints: HitPoints
        {
			class HitHull: HitHull
			{
				armor = 999;
				visual = zbytek;
				depends = Total;
				radius = 0.01;
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				radius = 0.25;
				minimalHit = 0.05;
			};
			class HitAvionics: HitAvionics
			{
				armor = 2;
				radius = 0.4;
				minimalHit = 0.05;
				visual = elektronika;
			};
			class HitMissiles: HitMissiles
			{
				armor = 1;
				radius = 0.15;
				minimalHit = 0.05;
			};
			class HitEngine1
			{
				armor = 2.5;
				radius = 0.4;
				name = engine_1_hit;
				explosionShielding = 3;
				minimalHit = 0.1;
				visual = motor;
				passThrough = 1;
				convexComponent = engine_1_hit;
				material = 51;
			};
			class HitEngine2: HitEngine1
			{
				name = engine_2_hit;
				convexComponent = engine_2_hit;
			};
			class HitEngine: HitEngine
			{
				armor = 999;
				radius = 0.05;
				minimalHit = 1;
				depends = 0.5 * (HitEngine1 + HitEngine2);
			};
			class HitHRotor: HitHRotor
			{
				armor = 4;
				radius = 0.3;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitVRotor: HitVRotor
			{
				armor = 3;
				radius = 0.2;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitGlass1: HitGlass1
			{
				armor = 3.5;
				radius = 0.4;
				explosionShielding = 4;
			};
			class HitGlass2: HitGlass2
			{
				armor = 3.5;
				radius = 0.4;
				explosionShielding = 4;
			};
			class HitGlass3: HitGlass3
			{
				armor = 3.5;
				radius = 0.4;
				explosionShielding = 4;
			};
			class HitGlass4: HitGlass4
			{
				armor = 3.5;
				radius = 0.4;
				explosionShielding = 4;
			};
			class HitGlass5: HitGlass5
			{
				armor = 3.5;
				radius = 0.4;
				explosionShielding = 4;
			};
			class HitWinch: HitWinch
			{
				class DestructionEffects{};
			};
        };
        // Turrets and weapons
		weapons[] = {CMFlareLauncher};
		magazines[] = {192Rnd_CMFlare_Chaff_Magazine};
		#include "turrets.hpp"
        // Textures and materials
        class Damage
		{
			tex[] = {};
			mat[] =
            {
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_damage.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_destruct.rvmat",

                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_damage.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_destruct.rvmat",

                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_damage.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_destruct.rvmat",

                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_glass.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_glass_damage.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_glass_damage.rvmat",

                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_glass_in.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_glass_in_damage.rvmat",
                "A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_glass_in_damage.rvmat",

                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter.rvmat",
                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter_damage.rvmat",
                "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_inter_destruct.rvmat"
            };
		};
		class TextureSources
		{
			class Blu
			{
				displayName = $STR_A3_TEXTURESOURCES_BLU0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_CO.paa"
				};
				factions[] =
                {
                    BLU_A_F,
                    BLU_A_tna_F,
                    BLU_A_wdl_F
                };
			};
			class Indep
			{
				displayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_INDP_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_INDP_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_INDP_CO.paa"
				};
				factions[] = {IND_F};
			};
            /*
			class AUSFOR
			{
				displayName = $STR_A3_A_TEXTURESOURCES_AUSFOR0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_AUSFOR_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_AUSFOR_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_AUSFOR_CO.paa"
				};
				factions[] = {Atlas_BLU_A_F};
			};
			class JSDF
			{
				displayName = $STR_A3_A_TEXTURESOURCES_JSDF0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_JSDF_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_JSDF_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_JSDF_CO.paa"
				};
				factions[] = {Atlas_BLU_J_F};
			};
			class RACS
			{
				displayName = $STR_A3_A_TEXTURESOURCES_RACS0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
				{
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_RACS_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_RACS_CO.paa",
                    "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_RACS_CO.paa"
				};
				factions[] = {Atlas_IND_R_F};
			};
            */
        };
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
		hiddenSelectionsTextures[] =
        {
            "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_body_CO.paa",
            "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_detail_CO.paa",
            "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\Heli_Attack_03_adds_CO.paa"
        };
        // Particles effects
        class Exhausts
		{
			class Exhaust1
			{
				position = exhaust1;
				direction = exhaust1_dir;
				effect = ExhaustsEffectHeliComHP;
			};
			class Exhaust2
			{
				position = exhaust2;
				direction = exhaust2_dir;
				effect = ExhaustsEffectHeliComHP;
			};
		};
        // Lights
        // Selections for engine-based animations
		selectionClan = clan;
		selectionFireAnim = zasleh;
		selectionShowDamage = poskozeni;
		memoryPointLMissile = Missile_1;
		memoryPointRMissile = Missile_2;
		memoryPointLRocket = Rocket_1;
		memoryPointRRocket = Rocket_2;
        // Inventory items, weapons, and magazines
        class TransportBackpacks
		{
            bag_xx(B_Parachute,2);
		};
		class TransportMagazines
		{
            mag_xx(SmokeShell,2);
            mag_xx(SmokeShellGreen,2);
            mag_xx(30Rnd_556x45_Stanag,4);
		};
		class TransportWeapons
		{
            weap_xx(arifle_Mk20C_F,2);
		};
		class TransportItems
		{
            item_xx(FirstAidKit,2);
            item_xx(Toolkit,1);
            item_xx(ItemGPS,1);
		};
        // Model animations
		class AnimationSources: AnimationSources
        {
			class HitGlass1
			{
				source = Hit;
				hitpoint = HitGlass1;
				raw = true;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = HitGlass2;
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = HitGlass3;
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = HitGlass4;
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = HitGlass5;
			};
			class Muzzle_flash
			{
				source = ammorandom;
				weapon = cannon_30mm_Heli_Attack_03;
			};
        };
        // Sensors and electronics
		lockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;
		incomingMissileDetectionSystem = CM_Radar_Missiles + CM_All_Missiles;
		laserScanner = true;
		showAllTargets = LockLaser;
		radarTargetSize = 0.7;
		irTargetSize = 0.8;
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
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = mainGun;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 1500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 70;
						animDirection = mainGun;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 125;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoAirborneMiniMap;
					};
					class CrewDisplay
					{
						componentType = CrewDisplayComponent;
						resource = RscCustomInfoCrew;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = PrimaryGunner;
					};
					class VehicleMissileDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = Missile;
					};
					class SensorDisplay
					{
						componentType = SensorsDisplayComponent;
						range[] =
                        {
                            4000,
                            2000,
                            16000,
                            8000
                        };
						resource = RscCustomInfoSensors;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = SensorDisplay;
				class Components: components
				{
					class EmptyDisplay
					{
						componentType = EmptyDisplayComponent;
					};
					class MinimapDisplay
					{
						componentType = MinimapDisplayComponent;
						resource = RscCustomInfoAirborneMiniMap;
					};
					class CrewDisplay
					{
						componentType = CrewDisplayComponent;
						resource = RscCustomInfoCrew;
					};
					class UAVDisplay
					{
						componentType = UAVFeedDisplayComponent;
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = PrimaryGunner;
					};
					class VehicleMissileDisplay
					{
						componentType = TransportFeedDisplayComponent;
						source = Missile;
					};
					class SensorDisplay
					{
						componentType = SensorsDisplayComponent;
						range[] =
                        {
                            4000,
                            2000,
                            16000,
                            8000
                        };
						resource = RscCustomInfoSensors;
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "\A3_Wip\Air_F_Wip\Heli_Attack_03\Data\UI\Heli_Attack_03_EDEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "";
						priority = 5;
						hardpoints[] = {};
						turret[] = {0};
						UIposition[] =
                        {
                            0.06,   // X
                            0.4     // Y
                        };
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "";
						priority = 4;
						hardpoints[] = {};
						UIposition[] =
                        {
                            0.08,   // X
                            0.35    // Y
                        };
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "";
						priority = 3;
						hardpoints[] = {};
						UIposition[] =
                        {
                            0.1,    // X
                            0.3     // Y
                        };
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] =
                        {
                            0.59,   // X
                            0.3     // Y
                        };
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] =
                        {
                            0.62,   // X
                            0.35    // Y
                        };
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] =
                        {
                            0.64,   // X
                            0.4     // Y
                        };
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = $STR_empty;
						attachment[] = {};
					};
					class Default
					{
						displayName = $STR_vehicle_default;
						attachment[] = {};
					};
					class AT
					{
						displayName = $STR_A3_cfgmagazines_titan_at_dns;
						attachment[] = {};
					};
					class CAS
					{
						displayName = $STR_A3_CAS_PRESET_DISPLAYNAME;
						attachment[] = {};
					};
				};
			};
		};
		memoryPointDriverOptics = PilotCamera_pos;
		driverWeaponsInfoType = RscOptics_Heli_Attack_01_pilot;
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = (30 / 120);
					minFov = (30 / 120);
					maxFov = (30 / 120);
					directionStabilized = true;
					visionMode[] =
                    {
                        Normal,
                        NVG,
                        Ti
                    };
					thermalMode[] =
                    {
                        TiWHot,
                        TiBHot
                    };
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = (6 / 120);
					minFov = (6 / 120);
					maxFov = (6 / 120);
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = (2 / 120);
					minFov = (2 / 120);
					maxFov = (2 / 120);
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Generic_narrow_F.p3d";
				};
			};
			minTurn = -110;
			maxTurn = 110;
			initTurn = 0;
			minElev = -15;
			maxElev = 60;
			initElev = 5;
			maxXRotSpeed = 1.0;
			maxYRotSpeed = 1.0;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = true;
			controllable = true;
		};
        // Scripted animations and functionality
        class EventHandlers: EventHandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
    };
    #include "cfgIndep.hpp"             // AAF
    /*
    #include "cfgAusfor.hpp"            // ANZAC
    #include "cfgJSDF.hpp"              // JSDF
    #include "cfgRACS.hpp"              // RACS
    */
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class proxyHeli_Attack_03_wreck_F: ProxyRetex
	{
		model = "\A3_Wip\Air_F_Wip\Heli_Attack_03\Heli_Attack_03_wreck_F.p3d";
		hiddenSelections[] =
		{
			camo1,
			camo2,
			camo3
		};
	};
};