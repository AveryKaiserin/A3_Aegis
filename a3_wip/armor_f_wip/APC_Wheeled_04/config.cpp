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
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
	};
    // Arma 3 Aegis
	class APC_Wheeled_04_base_F: Wheeled_APC_F
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 8;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_vehicle_APC_s};
				speechPlural[] = {veh_vehicle_APC_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_vehicle_APC_s;
		textPlural = $STR_A3_nameSound_veh_vehicle_APC_p;
		nameSound = veh_vehicle_APC_s;
		scope = private;
		displayName = $STR_A3_A_CfgVehicles_APC_Wheeled_04_base_F0;
		model = "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\APC_Wheeled_04_cannon_F.p3d";
		icon = "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\UI\Map_APC_Wheeled_04_CA.paa";
		picture = "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\UI\APC_Wheeled_04_CA.paa";
		editorSubcategory = EdSubcat_APCs;
		memoryPointTaskMarker = TaskMarker_1_pos;
		accuracy = 0.3;
        unitInfoType = RscUnitInfoTank;
        fuelCapacity = 24;
        // Physics and handling
        #include "PhysX.hpp"
        engineStartSpeed = 5;
        // Behaviour in water
		canFloat = true;
        waterLeakiness = 2.5;
		waterAngularDampingCoef = 10.0;
		waterPPInVehicle = false;
		waterResistanceCoef = 0.5;
        // Crew and cargo
		memoryPointDriverOptics = driverview;
		driverInfoPanelCameraPos = driverview_old;
		forceHideDriver = false;
		viewDriverInExternal = true;
		viewDriverShadowAmb = 0.5;
		viewDriverShadowDiff = 0.05;
		driverForceOptics = false;
		LODDriverTurnedOut = 1201;
		LODDriverTurnedin = 1100;
		LODDriverOpticsIn = 1202;
		driverOpticsModel = "\A3\Weapons_F\Reticle\optics_empty.p3d";
		driverLeftLegAnimName = pedal_brake;
		driverAction = Driver_APC_Wheeled_04_cannon_F_out;
		driverInAction = Driver_APC_Wheeled_04_cannon_F_in;
		hideWeaponsCargo = true;
		cargoIsCoDriver[] = {0};
		viewCargoShadowDiff = 1.0;
		viewCargoShadowAmb = 1.0;
		cargoAction[] =
        {
            passenger_apc_narrow_generic03,
            passenger_apc_narrow_generic01,
            passenger_apc_generic04,
            passenger_generic01_foldhands,
            passenger_apc_narrow_generic02,
            passenger_apc_generic02b,
            passenger_generic01_leanright
        };
		transportSoldier = 7;
		showNVGDriver = false;
		showNVGCommander = false;
		showNVGGunner = false;
        // Get in / get out animations
		getInAction = GetInHigh;
		getOutAction = GetOutHigh;
		cargoGetInAction[] = {GetInAMV_cargo};
		cargoGetOutAction[] = {GetOutLow};
        // MFD
		#include "mfd.hpp"
        // Camera and optics
        class ViewOptics: ViewOptics
		{
			visionMode[] =
            {
                Normal,
                NVG
            };
			initFov = 0.4;
			minFov = 0.23;
			maxFov = 0.4;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = -2.5;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		extCameraPosition[] =
        {
            0,      // X
            3,      // Y
            -7.2    // Z
        };
        // Damage and hitpoints
		wheelDestroyRadiusCoef = 0.6;
		armor = 200;
		armorStructural = 6;
		armorLights = 0.1;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9995;
		damageResistance = 0.02432;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 2;
				material = -1;
				armorComponent = hit_hull;
				name = hit_hull_point;
				visual = zbytek;
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor = 1.25;
				material = -1;
				armorComponent = hit_engine;
				name = hit_engine_point;
				visual = "-";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.2;
			};
			class HitFuel: HitFuel
			{
				armor = 0.75;
				material = -1;
				armorComponent = hit_fuel;
				name = hit_fuel_point;
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.2;
			};
            /* We don't have these modelled yet
			class HitSLAT_Left_1
			{
				simulation = Armor_SLAT;
				armorComponent = cage_left_1_geo;
				name = cage_left_1_point;
				armor = -200;
				minimalHit = 0.3;
				passThrough = 0;
				visual = "-";
				explosionShielding = 2;
				radius = 0.25;
			};
			class HitSLAT_Left_2: HitSLAT_Left_1
			{
				armorComponent = cage_left_2_geo;
				name = cage_left_2_point;
			};
			class HitSLAT_Left_3: HitSLAT_Left_1
			{
				armorComponent = cage_left_3_geo;
				name = cage_left_3_point;
			};
			class HitSLAT_Right_1: HitSLAT_Left_1
			{
				armorComponent = cage_right_1_geo;
				name = cage_right_1_point;
			};
			class HitSLAT_Right_2: HitSLAT_Left_1
			{
				armorComponent = cage_right_2_geo;
				name = cage_right_2_point;
			};
			class HitSLAT_Right_3: HitSLAT_Left_1
			{
				armorComponent = cage_right_3_geo;
				name = cage_right_3_point;
			};
			class HitSLAT_back: HitSLAT_Left_1
			{
				armorComponent = cage_back_geo;
				name = cage_back_point;
			};
			class HitSLAT_front: HitSLAT_Left_1
			{
				armorComponent = cage_front_geo;
				name = cage_front_point;
			};
            */
			class HitLFWheel: HitLFWheel
			{
				radius = 0.33;
				visual = wheel_1_1_hide;
				armorComponent = wheel_1_1_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius = 0.33;
				visual = wheel_1_2_hide;
				armorComponent = wheel_1_2_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius = 0.33;
				visual = wheel_1_3_hide;
				armorComponent = wheel_1_3_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius = 0.33;
				visual = wheel_1_4_hide;
				armorComponent = wheel_1_4_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius = 0.33;
				visual = wheel_2_1_hide;
				armorComponent = wheel_2_1_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius = 0.33;
				visual = wheel_2_2_hide;
				armorComponent = wheel_2_2_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius = 0.33;
				visual = wheel_2_3_hide;
				armorComponent = wheel_2_3_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius = 0.33;
				visual = wheel_2_4_hide;
				armorComponent = wheel_2_4_hide;
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
		};
		wheelDamageThreshold = 0.18;
		wheelDamageRadiusCoef = 0.75;
        // Turrets and weapons
		weapons[] = {TruckHorn};
		magazines[] = {};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",db0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\Armor\noises\alarm_locked_by_missile_2",db-10,1};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = true;
		smokeLauncherAngle = 70;
		#include "turrets.hpp"
        // Textures and materials
        class Damage
		{
			tex[] = {};
			mat[] =
            {
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body_damage.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body_destruct.rvmat",
                
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body2.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body2_damage.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body2_destruct.rvmat",
                /*
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_tows.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_tows_damage.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_tows_destruct.rvmat",
                */
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_int.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_int_damage.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_int_destruct.rvmat",
                
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_int2.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_int2_damage.rvmat",
                "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_int2_destruct.rvmat"
            };
		};
		class TextureSources
		{
			class Green
			{
				displayName = $STR_A3_TEXTURESOURCES_GREEN0;
				author = $STR_A3_A_AveryTheKitty;
				textures[] =
                {
                    "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body_RUkhk_CO.paa",
                    "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
                    "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_tows_RUkhk_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
                    "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
                };
				factions[] =
                {
                    OPF_R_F,
                    OPF_R_ard_F
                };
			};
		};
        hiddenSelections[] =
        {
            Camo1,
            Camo2,
            Camo3,
            camoNet,
            camoSlat,
        };
        hiddenSelectionsTextures[] =
        {
            "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body_RUkhk_CO.paa",
            "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
            "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_tows_RUkhk_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
            "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
        };
		textureList[] = {Green,1};
        // Particles effects
		engineEffectSpeed = 5.0;
		class Exhausts
		{
			class Exhaust1
			{
				position = exhaust1;
				direction = exhaust1_dir;
				effect = ExhaustsEffectAMV;
			};
			class Exhaust2
			{
				position = exhaust2;
				direction = exhaust2_dir;
				effect = ExhaustsEffectAMV;
			};
		};
		explosionEffect = FuelExplosionBig;
		memoryPointsLeftEngineEffect = EngineEffectL;
		memoryPointsRightEngineEffect = EngineEffectR;
        dustFrontLeftPos = dustFrontLeft;
        dustFrontRightPos = dustFrontRight;
        dustBackLeftPos = dustBackLeft;
        dustBackRightPos = dustBackRight;
        // Lights
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = nvg_marker;
				color[] =
                {
                    0.03,   // R
                    0.003,  // G
                    0.003,  // B
                    1       // A
                };
				ambient[] =
                {
                    0.003,  // R
                    0.0003, // G
                    0.0003, // B
                    1       // A
                };
				brightness = 0.001;
				blinking = true;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] =
                {
                    1900,   // R
                    1800,   // G
                    1700    // B
                };
				ambient[] =
                {
                    5,  // R
                    5,  // G
                    5   // B
                };
				position = Light_L;
				direction = Light_L_dir;
				hitpoint = Light_L;
				selection = Light_L;
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = false;
				dayLight = false;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = Light_R;
				direction = Light_R_dir;
				hitpoint = Light_R;
				selection = Light_R;
			};
			class Right2: Right
			{
				position = light_R_flare;
				hitpoint = Light_R_flare;
				useFlare = true;
			};
			class Left2: Left
			{
				position = light_L_flare;
				hitpoint = Light_L_flare;
				useFlare = true;
			};
		};
		aggregateReflectors[] =
        {
            {
                Left,
                Left2,
                Right,
                Right2
            }
        };
        // Selections for engine-based animations
		selectionClan = clan;
		selectionFireAnim = "";
		selectionShowDamage = poskozeni;
        selectionBrakeLights = "brzdove svetlo";
        selectionBackLights = "zadni svetlo";
        // Picture-in-picture
		#include "pip.hpp"
        // Inventory items, weapons, and magazines
        class TransportWeapons
        {
            weap_xx(arifle_AK12_545_F,2);
        };
        class TransportMagazines
        {
            mag_xx(30Rnd_545x39_AK12_Mag_F,12);
            mag_xx(75Rnd_762x39_AK12_Mag_F,8);
            mag_xx(HandGrenade,6);
            mag_xx(MiniGrenade,6);
            mag_xx(1Rnd_HE_Grenade_shell,6);
            mag_xx(1Rnd_Smoke_Grenade_shell,3);
            mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
            mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
            mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
            mag_xx(SmokeShell,8);
            mag_xx(SmokeShellRed,8);
            mag_xx(SmokeShellOrange,8);
            mag_xx(SmokeShellYellow,8);
            mag_xx(RPG32_F,5);
            mag_xx(RPG32_HE_F,2);
            mag_xx(Titan_AT,2);
            mag_xx(Titan_AP,2);
            mag_xx(Titan_AA,2);
        };
		class TransportItems
		{
			item_xx(FirstAidKit,10);
			item_xx(Toolkit,1);
			item_xx(Medikit,1);
		};
        class TransportBackpacks
        {
            bag_xx(B_FieldPack_taiga_F,2);
        };
        // Model animations
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				source = user;
				initPhase = false;
				animPeriod = 0.001;
			};
			class BreakWater
			{
				source = user;
				initPhase = false;
				animPeriod = 2;
			};
			class revolving_cannon
			{
				source = revolving;
				weapon = autocannon_30mm_APC_Wheeled_04;
			};
			class Missiles_revolving
			{
				source = revolving;
				weapon = missiles_titan;
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source = reloadMagazine;
			};
			class muzzle_rot
			{
				source = ammorandom;
				weapon = autocannon_30mm_APC_Wheeled_04;
			};
			class muzzle_hide
			{
				source = reload;
				weapon = autocannon_30mm_APC_Wheeled_04;
			};
			class HitEngine_src
			{
				source = Hit;
				hitpoint = HitEngine;
				raw = true;
			};
			class HitFuel_src
			{
				source = Hit;
				hitpoint = HitFuel;
				raw = true;
			};
			class HitHull_src
			{
				source = Hit;
				hitpoint = HitHull;
				raw = true;
			};
			class HitMainGun_src
			{
				source = Hit;
				hitpoint = HitGun;
				raw = true;
			};
			class HitTurret_src
			{
				source = Hit;
				hitpoint = HitTurret;
				raw = true;
			};
			class HitComTurret_src
			{
				source = Hit;
				hitpoint = HitComTurret;
				raw = true;
			};
            /* We don't have these modelled yet
			class HitSLAT_Left_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_1";
				raw = true;
			};
			class HitSLAT_Left_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_2";
				raw = true;
			};
			class HitSLAT_Left_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Left_3";
				raw = true;
			};
			class HitSLAT_Right_1_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_1";
				raw = true;
			};
			class HitSLAT_Right_2_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_2";
				raw = true;
			};
			class HitSLAT_Right_3_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_Right_3";
				raw = true;
			};
			class HitSLAT_back_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_back";
				raw = true;
			};
			class HitSLAT_front_src
			{
				source = "Hit";
				hitpoint = "HitSLAT_front";
				raw = true;
			};
			class showCamonetHull
			{
				displayName = "$STR_A3_animationsources_showcamonethull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showBags
			{
				displayName = "$STR_A3_animationsources_showbagshull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showSLATHull
			{
				displayName = "$STR_A3_animationsources_showslathull0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
            */
		};
		animationList[] =
        {
            /* We don't have these modelled yet
            showCamonetHull,0,
            showBags,0.33,
            showSLATHull,0
            */
        };
        // Scripted animations and functionality
		class EventHandlers: EventHandlers
		{
			/*fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";*/
		};
	};
    class APC_Wheeled_04_AT_base_F: APC_Wheeled_04_base_F{};
    #include "cfgSpetsnaz.hpp"          // Russia
    // Arma 3 Atlas
    #include "cfgCDF.hpp"               // CDF
};