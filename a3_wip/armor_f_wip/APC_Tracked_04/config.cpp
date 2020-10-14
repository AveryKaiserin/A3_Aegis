#include "\ca\tracked_e\BasicDefines.hpp"

#define VIEW_GUNNER 1000
#define VIEW_PILOT 1100
#define VIEW_CARGO 1200

class CfgPatches
{
	class CATracked_E_M113
	{
		units[] ={};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {CATracked_E};
	};
};

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}

#define DefaultEastMagazines(x) \
class TransportMagazines \
{ \
	mag_xx(30Rnd_545x39_AK,30*x); \
	mag_xx(100Rnd_762x54_PK,5*x); \
	mag_xx(8Rnd_9x18_Makarov,20*x); \
	mag_xx(HandGrenade_east,10*x); \
	mag_xx(10Rnd_762x54_SVD,10*x); \
	mag_xx(PG7VR,3*x); \
	mag_xx(1Rnd_HE_GP25,3*x); \
};

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*-*-*-*-*-*-*Real Vehicles*-*-*-*-*-*-*-*-*-*-*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

//West Vehicles

	class M113_Base: Tank
	{
		brakeDistance=9.0;

		htMin = 60;		// Minimum half-cooling time (in seconds)
		htMax = 1800;	// Maximum half-cooling time (in seconds)
		afMax = 200;	// Maximum temperature in case the model is alive (in celsius)
		mfMax = 100;	// Maximum temperature when the model is moving (in celsius)
		mFact = 1;		// Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered)).
		tBody = 250;	 	// Metabolism temperature of the model (in celsius)

    driverForceOptics = 0;
//    driverOpticsModel = "CA\Tracked_E\driverOptics";

		LODTurnedOut = VIEW_CARGO;
		radarType = 4;

		crewVulnerable = false;
		viewDriverInExternal = true;

		tracksSpeed = 3;


		scope=0;
		picture="\ca\tracked_e\Data\ui\Picture_m113_CA.paa";
		Icon="\Ca\tracked_e\Data\ui\Icon_m113_CA.paa";
		mapSize = 5;
		displayName=$STR_DN_M113;
		accuracy=0.30;

		armor=105;
		damageResistance = 0.03249;
		cost=100000;

		maxSpeed=66;

		hasGunner = 1;
		hasCommander = 0; //ToDo: Still needed?

		viewCargoShadow = true;
		// let only small amount of direct light go through, to avoid shadow artifacts
		viewCargoShadowDiff = 0.05;
		// reduce amount of ambient light as well
		viewCargoShadowAmb = 0.5;

		transportSoldier = 11;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		supplyRadius = 1.8;

		DefaultEastMagazines(1);
		transportAmmo = 0;
		gunnerHasFlares = false;

		weapons[] = {SmokeLauncher};
		magazines[] = {SmokeLauncherMag};

		outsideSoundFilter=true;
		insideSoundCoef = 0.9;
		soundGear[]={,db-85,1};
		soundGetIn[]={"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",db-5,1};
		soundGetOut[]={"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-door-1",db-5,1,60};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Tracked\T72\int\int-tank-diesel-start-2", db0, 1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Tracked\T72\ext\ext-tank-diesel-start-2", db8, 1.0,500};
		soundEngineOffInt[] ={"ca\sounds\vehicles\Tracked\T72\int\int-tank-diesel-stop-1", db0, 1.0};
		soundEngineOffExt[] ={"ca\sounds\vehicles\Tracked\T72\ext\ext-tank-diesel-stop-1", db0, 0.8,500};

		buildCrash0[]={"Ca\sounds\Vehicles\Crash\tank_building_01", db-3, 1,150};
		buildCrash1[]={"Ca\sounds\Vehicles\Crash\tank_building_02", db-3, 1,150};
 		buildCrash2[]={"Ca\sounds\Vehicles\Crash\tank_building_03", db-3, 1,150};
 		buildCrash3[]={"Ca\sounds\Vehicles\Crash\tank_building_04", db-3, 1,150};
 		soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

		WoodCrash0[]={"Ca\sounds\Vehicles\Crash\tank_wood_01", db-3, 1,150};
		WoodCrash1[]={"Ca\sounds\Vehicles\Crash\tank_wood_02", db-3, 1,150};
		WoodCrash2[]={"Ca\sounds\Vehicles\Crash\tank_wood_03", db-3, 1,150};
		WoodCrash3[]={"Ca\sounds\Vehicles\Crash\tank_wood_04", db-3, 1,150};
		soundWoodCrash[]={woodCrash0, 0.25, woodCrash1, 0.25, woodCrash2, 0.25, woodCrash3, 0.25};

		ArmorCrash0[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_01", db-3, 1,150};
		ArmorCrash1[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_02", db-3, 1,150};
		ArmorCrash2[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_03", db-3, 1,150};
		ArmorCrash3[]={"Ca\sounds\Vehicles\Crash\tank_vehicle_04", db-3, 1,150};
		soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

	class SoundEvents
  	{
		class AccelerationIn
		{
			sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_int_acceleration1", db5, 1.0};
			limit = "0.15";
			expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
		class AccelerationOut
		{
			sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_acceleration1", db5, 1.0,650};
			limit = "0.15";
			expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
		};
  	};

	class Sounds
	{
	/* ---------------------------------
	     EXTERNAL SOUNDS
	   --------------------------------- */
		class Engine
		{
			sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high", db5, 1.0,600};
			frequency = "(randomizer*0.05+0.8)*rpm"; //frequency = "0.975+(0.05*thrust)";
			volume = "engineOn*camPos*(rpm factor[0.3, 0.9])";
		};
		class IdleOut
		{
			sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle", db-5, 1.0,300};
			frequency = "1";
			volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
		};
		class NoiseOut
		{
			sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\noise2", db0, 1.0,150};
			frequency = "1";
			volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
				// "hard" track sample, driven by controller grass
		class ThreadsOutH0
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_01", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
		};
		class ThreadsOutH1
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_02", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
		};
		class ThreadsOutH2
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_03", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
		};
		class ThreadsOutH3
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_04", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
		};
		class ThreadsOutH4
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_hard_05", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
		};
		// "soft" samples
		class ThreadsOutS0
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_01", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
		};
		class ThreadsOutS1
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_02", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
		};
		class ThreadsOutS2
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_03", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
		};
		class ThreadsOutS3
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_04", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
		};
		class ThreadsOutS4
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\ext_treads_soft_05", db0, 1.0, 200};
			frequency = "1";
			volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
		};
		// override basic declaration
		class Movement
		{
			sound[] =  {"", db0, 1.0};
			frequency = "0";
			volume = "0";
		};
	/* ---------------------------------
	     INTERNAL SOUNDS
	   --------------------------------- */
		class EngineIn
		{
			sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_high", db0, 1.0};
			frequency = "(randomizer*0.05+0.8)*rpm"; //frequency = "0.975+(0.05*thrust)";
			volume = "engineOn*(1-camPos)*(rpm factor[0.3, 0.9])";
		};
	 	class IdleIn
		{
			sound[] = {"ca\Sounds_E\Tracked_E\BVP2\BVP2_ext_idle", db5, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
		};
		class NoiseIn
		{
			sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\noise2", db-16, 1.0};
			frequency = "1";
			volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
		};
       // "hard"
		class ThreadsInH0
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_01", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
		};
		class ThreadsInH1
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_02", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
		};
		class ThreadsInH2
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_03", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
		};
		class ThreadsInH3
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_04", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
		};
		class ThreadsInH4
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_hard_05", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
		};
		// "soft"
		class ThreadsInS0
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_01", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
		};
		class ThreadsInS1
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_02", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
		};
		class ThreadsInS2
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_03", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
		};
		class ThreadsInS3
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_04", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
		};
		class ThreadsInS4
		{
			sound[] = {"ca\Sounds_E\Tracked_E\Treads\int_treads_soft_05", db-15, 1.0};
			frequency = "1";
			volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
		};
	};

		class AnimationSources:AnimationSources
		{
			class ReloadAnim{source="reload";weapon="M2";};
			class ReloadMagazine{source="reloadmagazine";weapon="M2";};
			class Revolving{source="revolving";weapon="M2";};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				outGunnerMayFire = true;
				forceHideGunner = true;
				viewGunnerInExternal = true;
				gunnerHasFlares = false; // required parameter for tanks
				gunnerAction = M113_Gunner_EP1;
				gunnerInAction = M113_Gunner_EP1;
				gunnerGetInAction = GetInLow;
				gunnerGetOutAction = GetOutLow;
				minElev=-25; maxElev=+60; initElev=0;
				soundServo[]={\ca\Weapons\Data\Sound\gun_elevate2,db-60,1.0};
				weapons[] = {M2};
				magazines[] = {100Rnd_127x99_M2,100Rnd_127x99_M2,100Rnd_127x99_M2,100Rnd_127x99_M2};
				gunnerOpticsModel = \ca\Weapons\optika_empty;
				gunnerForceOptics = 0;
				gunnerOpticsShowCursor=0;
				gunnerOutOpticsShowCursor=0;

				class Turrets {};
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.42; minFov=0.22; maxFov=0.64;
				};
			};
		};

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"Ca\Tracked_E\M113\Data\m113_track.rvmat",
				"Ca\Tracked_E\M113\Data\m113_track.rvmat",
				"Ca\Tracked_E\M113\Data\m113_track_destruct.rvmat",

				"Ca\Tracked_E\M113\Data\m113_01.rvmat",
				"Ca\Tracked_E\M113\Data\m113_01.rvmat",
				"Ca\Tracked_E\M113\Data\m113_01_destruct.rvmat",

				"Ca\Tracked_E\M113\Data\m113_02.rvmat",
				"Ca\Tracked_E\M113\Data\m113_02.rvmat",
				"Ca\Tracked_E\M113\Data\m113_02_destruct.rvmat",

				"Ca\Tracked_E\M113\Data\cargo.rvmat",
				"Ca\Tracked_E\M113\Data\cargo.rvmat",
				"Ca\Tracked_E\M113\Data\cargo_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat",
			};
		};

		driverAction = M113_Driver_EP1;
		driverInAction = M113_Driver_EP1;
		getInAction = GetInHigh;
		getOutAction = GetOutHigh;
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};

		cargoAction[] = {
			M113_Cargo01_EP1,M113_Cargo03_EP1,M113_Cargo02_EP1,M113_Cargo02_EP1,
			M113_Cargo02_EP1,M113_Cargo02_EP1,M113_Cargo03_EP1,M113_Cargo01_EP1,
			M113_Cargo03_EP1, M113_Cargo03_EP1, M113_Cargo01_EP1
		};
		/*soundGetIn[]={\ca\Tracked\Data\Sound\metal_door2,db-40,1};
		soundGetOut[]={\ca\Tracked\Data\Sound\metal_door2,db-40,1};
		soundEnviron[]={\ca\Tracked\Data\Sound\M1A1_treads3,db17,0.8};
		soundEngine[]={\ca\Tracked\Data\Sound\m113_loop_1a,db18,1};
		soundCrash[]={\ca\Tracked\Data\Sound\crash2,db20,1};
		soundGear[]={\ca\Tracked\Data\Sound\Gear_Trans1,db-60,1};*/

		model = \ca\Tracked_E\m113\m113;
		canFloat=true;

		//gunnerOpticsModel = "optika_m2mg";


		initCargoAngleY=+90; // cargo viewing limitations

		threat[]={0.9, 0.6, 0.6};


		transportMaxMagazines = 100;
		transportMaxWeapons = 20;

		class Library {libTextDesc = $STR_LIB_M113;};

		hiddenSelections[] ={"Camo"};
	};
	class M113Ambul_Base: M113_Base
	{
		accuracy=1000; // never recognized
		vehicleClass="Support";
  	picture="\ca\tracked_e\Data\ui\Picture_m113_amb_CA.paa";
		Icon="\Ca\tracked_e\Data\ui\Icon_m113_amb_CA.paa";
		mapSize = 5;

		scope=0;
		displayName=$STR_DN_M113_AMB;

		class TransportMagazines{};
		attendant = true;
		hasGunner = false;
		class Turrets {};
		model = \ca\Tracked_e\m113\M113_ambulance;

		transportSoldier = 3;

		threat[]={0.0, 0.0, 0.0};

		cargoAction[] = {M113_Cargo02_EP1, M113_Cargo04_EP1, M113_Cargo04_EP1};
		cargoIsCoDriver[] = {false};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;

		LODTurnedOut = VIEW_PILOT;

		class Damage
		{
			tex[]={};
			mat[]={
				"Ca\Tracked_E\M113\Data\m113_track.rvmat",
				"Ca\Tracked_E\M113\Data\m113_track.rvmat",
				"Ca\Tracked_E\M113\Data\m113_track_destruct.rvmat",

				"Ca\Tracked_E\M113\Data\m113_01.rvmat",
				"Ca\Tracked_E\M113\Data\m113_01.rvmat",
				"Ca\Tracked_E\M113\Data\m113_01_destruct.rvmat",

				"Ca\Tracked_E\M113\Data\m113_02.rvmat",
				"Ca\Tracked_E\M113\Data\m113_02.rvmat",
				"Ca\Tracked_E\M113\Data\m113_02_destruct.rvmat",

				"Ca\Tracked_E\M113\Data\cargo.rvmat",
				"Ca\Tracked_E\M113\Data\cargo.rvmat",
				"Ca\Tracked_E\M113\Data\cargo_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat",
			};
		};
		class Library {libTextDesc = $STR_LIB_M113_AMB;};
	};
	class M113Ambul_UN_EP1:M113Ambul_Base
	{
		expansion = 1;
		scope = 2;
		side=TGuerrila;
		faction=BIS_UN;
		crew = UN_CDF_Soldier_Crew_EP1;
		typicalCargo[]={UN_CDF_Soldier_Crew_EP1,UN_CDF_Soldier_Crew_EP1};
		hiddenSelectionsTextures[] ={"\ca\Tracked_E\M113\Data\m113a3_01_UN_co.paa"};
	};
	class M113_UN_EP1:M113_Base
	{
		expansion = 1;
		scope = 2;
		side=TGuerrila;
		faction=BIS_UN;
		crew = UN_CDF_Soldier_Crew_EP1;
		typicalCargo[]={UN_CDF_Soldier_Crew_EP1,UN_CDF_Soldier_Crew_EP1};
		hiddenSelectionsTextures[] ={"\ca\Tracked_E\M113\Data\m113a3_01_UN_co.paa"};

	    class TransportMagazines
		{
			mag_xx(30Rnd_545x39_AK,30);
			mag_xx(1Rnd_HE_GP25,5);
			mag_xx(HandGrenade_East,10);
			mag_xx(100Rnd_762x54_PK,5);
			mag_xx(SmokeShell,2);
			mag_xx(SmokeShellOrange,2);
		};

		class TransportWeapons
		{
			weap_xx(AK_74,2);
		};


	};

	class M113Ambul_TK_EP1:M113Ambul_Base
	{
		expansion = 1;
		scope = 2;
		side=TEast;
		faction=BIS_TK;
		crew = TK_Soldier_Crew_EP1;
		typicalCargo[]={TK_Soldier_Crew_EP1};
		hiddenSelectionsTextures[] ={"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};
	};
	class M113_TK_EP1:M113_Base
	{
		expansion = 1;
		scope = 2;
		side=TEast;
		faction=BIS_TK;
		crew = TK_Soldier_Crew_EP1;
		typicalCargo[]={TK_Soldier_Crew_EP1};
		hiddenSelectionsTextures[] ={"\ca\Tracked_E\M113\Data\m113a3_01_TK_co.paa"};

	    class TransportMagazines
		{
			mag_xx(20Rnd_762x51_FNFAL,30);
			mag_xx(HandGrenade_East,10);
		    mag_xx(100Rnd_762x54_PK,5);
		    mag_xx(SmokeShellOrange,2);
		    mag_xx(SmokeShell,2);
		};

		class TransportWeapons
		{
			weap_xx(FN_FAL,2);
		};

	};
};