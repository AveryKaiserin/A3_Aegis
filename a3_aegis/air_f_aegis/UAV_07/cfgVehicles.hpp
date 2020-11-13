class CfgVehicles
{
    /* Inheritance Tree */
    #include "\A3_Aegis\cfgHelis.hpp"

    /* Bases */
	class UAV_07_base_F: Helicopter_Base_F
	{
		author = $STR_A3_A_AveryTheKitty_and_mp5gosu;
		mapSize = 9;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {veh_air_UAV_s};
				speechPlural[] = {veh_air_UAV_p};
			};
		};
		textSingular = $STR_A3_nameSound_veh_air_UAV_s;
		textPlural = $STR_A3_nameSound_veh_air_UAV_p;
		nameSound = veh_air_UAV_s;
        scope = private;
		displayName = $STR_A3_A_CfgVehicles_UAV_07_base_F0;
		model = "\A3_Aegis\Air_F_Aegis\UAV_07\UAV_07_F.p3d";
		icon = "\A3_Aegis\Air_F_Aegis\UAV_07\Data\UI\Map_UAV_07_CA.paa";
		picture = "\A3_Aegis\Air_F_Aegis\UAV_07\Data\UI\UAV_07_CA.paa";
		hiddenSelections[] = {camo};
		editorSubcategory = EdSubcat_Drones;
		vehicleClass = Autonomous;
		isUav = true;
		threat[] =
        {
            0.1,    // Soft
            0.1,    // Armor
            0.1     // Air
        };
		disableInventory = true;
		accuracy = 0.4;
		audible = 4;
		cost = 1000000;
        class Library
        {
            libTextDesc = $STR_A3_A_CfgVehicles_UAV_07_base_F_Library0;
        };

        /* Liveries */
		class TextureSources
		{
			class Blufor
			{
				displayName = $STR_A3_TEXTURESOURCES_BLU0;
				author = $STR_A3_A_AveryTheKitty_and_mp5gosu;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07_BLUFOR_CO.paa"};
				factions[] = {};
			};
			class Opfor
			{
				displayName = $STR_A3_TEXTURESOURCES_OPFOR0;
				author = $STR_A3_A_AveryTheKitty_and_mp5gosu;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07_OPFOR_CO.paa"};
				factions[] = {};
			};
			class Indfor
			{
				displayName = $STR_A3_TEXTURESOURCES_INDEP0;
				author = $STR_A3_A_AveryTheKitty_and_mp5gosu;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07_INDP_CO.paa"};
				factions[] = {};
			};
			class Civ
			{
				displayName = $STR_A3_TEXTURESOURCES_CIV0;
				author = $STR_A3_A_AveryTheKitty_and_mp5gosu;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07_CIV_CO.paa"};
				factions[] = {CIV_F};
			};
			class Ion
			{
				displayName = $STR_A3_A_TextureSources_ION0;
				author = $STR_A3_A_AveryTheKitty_and_mp5gosu;
				textures[] = {"\A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07_ION_CO.paa"};
				factions[] = {BLU_ION_F};
			};
		};

        /* Animation Sources */
		class  AnimationSources : AnimationSources
		{
			class l_wing
			{
				source = user;
				animPeriod = 1e-008;
				initPhase = -12.50;
			};	
			class r_wing
			{
				source = user;
				animPeriod = 1e-008;
				initPhase = -12.50;
			};	
		};

        /* Damage */
		armor = 15;
		armorLights = 0.5;
		armorStructural = 2;
		damageResistance = 0.00085;
		destrType = DestructWreck;
		secondaryExplosion = 45;
		killFriendlyExpCoef = 0.02;
        class HitPoints: HitPoints
        {
            class HitHull
            {
                armor = 2.6;
                material = 50;
                name = Hull_Hit;
                passThrough = 1;
                visual = zbytek;
            };
            class HitFuel: HitHull
            {
                armor = 2.2;
                visual = zbytek;
            };
            class HitAvionics: HitHull
            {
                armor = 1.5;
                visual = "-";
            };
            class HitHRotor
            {
                name = "l_engine_hp";
                armor = 2.0;
                material = 40;
                passThrough = 0;
                visual = wingL;
            };
            class HitVRotor: HitHRotor
            {
                name = "r_engine_hp";
                visual = wingR;
            };
            class HitEngine: HitHRotor
            {
                visual = wingL;
            };
            class HitEngine2: HitVRotor
            {
                visual = wingR;
            };
            class HitWinch: HitHull
            {
                armor = 0.2;
                name = slingLoad0;
                passThrough = 0;
                radius = 0.15;
                visual = "-";
            };
        };
		class Damage
		{
			tex[] = {};
			mat[] =
            {
                "A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07.rvmat",
                "A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07_damage.rvmat",
                "A3_Aegis\Air_F_Aegis\UAV_07\Data\UAV_07_destruct.rvmat"
            };
		};

        /* Crew */
		crewVulnerable = false;

		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		simulation = "helicopterX";
		selectionClan = "clan";
		aggregateReflectors[] = {{"l_headlight","r_headlight"},{"l_cargolight","r_cargolight"}};
		
		unitInfoType = "RscOptics_AV_pilot";
		extCameraPosition[] = {0,2.0,-10.0};
		driverhasflares = 0;
		driveOnComponent[] = {"skids"};
		
		slingLoadMaxCargoMass = 550;
		slingLoadMemoryPoint = "slingLoad";
		showSlingLoadManagerInOptics = true;
		showUAVViewpInOptics = true;

		maxspeed = 290;
		altFullForce = 1000;
		altNoForce = 3000;
		backRotorForceCoef = 1.1;
		mainRotorSpeed = 2.1;
		backRotorSpeed = 2.08;
		bodyFrictionCoef = 0.04;
		cyclicAsideForceCoef = 2.1;
		cyclicForwardForceCoef = 0.28;		
		liftForceCoef = 1.1;
		mainBladeRadius = 0;
		maxFordingDepth = 0.63;
		fuelCapacity = 130;
		fuelConsumptionRate = "0.04f";
		fuelExplosionPower = 2.8;
		startDuration = 4;
		washDownDiameter = 8.0;
		washDownStrength = 0.3;
		
		selectionHRotorMove = "l_rotor_blur";
		selectionHRotorStill = "l_rotor_static";
		selectionVRotorMove = "r_rotor_blur";		
		selectionVRotorStill = "r_rotor_static";

		uavCameraDriverDir = "pip_pilot_dir";
		uavCameraDriverPos = "pip_pilot_pos";
		uavCameraGunnerPos = "pip_cargo_pos";
		uavCameraGunnerDir = "pip_cargo_dir";
 		
		class ViewPilot : ViewPilot 
		{
			initFov = 1.1;
			minFov = 0.6;
			maxFov = 1.7;
			minAngleX = -75;
			maxAngleX = 15;
			minAngleY = -140;
			maxAngleY = 140;
		};
		
		class Viewoptics : ViewOptics 
		{
			minAngleX = -35;
			maxAngleX = 35;
			minAngleY = -140;
			maxAngleY = 140;
			initFov = 0.8;
			minFov = 0.27;
			maxFov = 1.5;
			visionMode[] = {"Normal", "NVG", "Ti"};
			thermalMode[] = {0, 1};
		};	
		
        /* Particle Effects */
		class Exhausts
		{
			class Exhaust_1
			{
				position = exhaust1;
				direction = exhaust1_dir;
				effect = ExhaustsEffectHeliCom;
			};
			class Exhaust_2
			{
				position = exhaust2;
				direction = exhaust2_dir;
				effect = ExhaustsEffectHeliCom;
			};
        };
	};

    /* Factions */
    #include "cfgBLUFOR.hpp"    // US
    #include "cfgOPFOR.hpp"     // IAF & China
    #include "cfgIndep.hpp"     // AAF
    #include "cfgRUS.hpp"       // Russia
    #include "cfgEAF.hpp"       // LDF
    #include "cfgION.hpp"       // ION	
};