class CfgAmmo
{
	class BulletBase;
	class ammo_Penetrator_Base;
	class ShotDeployBase;
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class RocketBase;
	class B_762x51_Ball;
	class B_762x51_Minigun_Tracer_Red;
	class B_762x51_Minigun_Tracer_Green: B_762x51_Minigun_Tracer_Red
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_green.p3d";
		submunitionAmmo = B_762x51_Minigun_Tracer_Green_splash;
	};
	class B_762x51_Minigun_Tracer_Red_splash;
	class B_762x51_Minigun_Tracer_Green_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_green.p3d";
	};
	class B_127x33_Ball: BulletBase
	{
		cartridge = FxCartridge_9mm;
	};
	class B_19mm_HE: BulletBase
	{
		cartridge = FxCartridge_slug;
		delete CamShakeFire;
		delete CamShakePlayerFire;
	};
	class B_25mm: BulletBase
	{
		explosive = 0;
		nvgOnly = false;
	};
	class G_40mm_HE;
	// Arma 3 Jets
	class ammo_Gun20mmAABase;
	class ammo_Gun35mmAABase;
	class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_green.p3d";
	};
	class ammo_Fighter01_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
	};
	class ammo_Fighter04_Gun20mm_AA: ammo_Gun20mmAABase
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_yellow.p3d";
	};
	class ammo_Fighter04_Gun20mm_AA_red: ammo_Fighter04_Gun20mm_AA
	{
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
	};
	// Arma 3 Enoch
	class B_25x40mm_base: B_19mm_HE
	{
		simulationStep = 0.001;
		hit = 11;
		indirectHit = 6;
		indirectHitRange = 4;
		cartridge = FxCartridge_25x40;
	};
	class B_25x40mm_HE: B_25x40mm_base{};
	class B_25x40mm_airburst: B_25x40mm_base
	{
		triggerDistance = 22;
		submunitionConeType[] = {randomupcone,5};
		triggerSpeedCoef[] = {0.1,2};
		submunitionInitSpeed = 18;
		submunitionParentSpeedCoef = 0;
		directionalExplosion = true;
		submunitionConeAngle[] =
		{
			10,
			180
		};
		submunitionConeAngleHorizontal = 175;
		submunitionAutoleveling = true;
		submunitionAmmo[] = {B_25x40mm_airburst_deploy,1};
	};
	class B_25x40mm_airburst_deploy: B_25x40mm_HE
	{
		simulation = shotGrenade;
		model = "\A3\Weapons_F_EPB\Ammo\B_IRstrobe_F.p3d";
		airFriction = 0;
		sideairFriction = 0;
		simulationStep = 0.1;
		explosionTime = 0.1;
	};
	class B_25x40mm_autoseek: B_25x40mm_base{};
	class B_25x40mm_stick: B_25x40mm_base{};
	// Arma 3 Aegis
	class ammo_Penetrator_Vikhr: ammo_Penetrator_Base
	{
		caliber = 56.6667;
		warheadName = TandemHEAT;
		hit = 800;
	};
	class B_460x30_Ball: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 725;
		airFriction = -0.001412;
		caliber = 0.50715;
		deflecting = 20;
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		audibleFire = 25;
		visibleFire = 3;
		visibleFireTime = 5;
		dangerRadiusBulletClose = 8;
		suppressionRadiusBulletClose = 6;
		dangerRadiusHit = 12;
		suppressionRadiusHit = 8;
	};
	class B_9x33_Ball: BulletBase
	{
		hit = 6;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = FxCartridge_9mm;
		visibleFireTime = 3;
		audibleFire = 45;
		cost = 100;
		aiAmmoUsageFlags = AIAmmoUsageOffensiveInf; 
		airLock = true;
		typicalSpeed = 380;
		caliber = 1.2;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.0019;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class G_40mm_APERSMine: ShotDeployBase
	{
		submunitionAmmo = APERSMineDispenser_Mine_Ammo;
		model = "\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_AP.p3d";
		mineFloating = 1000;
	};
	class R_50mm_HE: RocketBase
	{
		model = "\A3\Weapons_F\Ammo\Rocket_01_fly_F.p3d";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 12;
		warheadName = "HE";
		cost = 200;
		maxSpeed = 580;
		initTime = 0.002;
		thrustTime = 1.10;
		thrust = 450;
		airFriction = 0.09;
		sideAirFriction = 0.15;
		fuseDistance = 40;
		whistleDist = 24;
		timeToLive = 20;
		effectsMissileInit = PylonBackEffectsRockets;
		muzzleEffect = "";
		simulation = shotMissile;
		class CamShakeExplode
		{
			power = 12;
			duration = 1.6;
			frequency = 20;
			distance = 141.968;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.78316;
			duration = 1.6;
			frequency = 20;
			distance = 61.967701;
		};
		class CamShakePlayerFire
		{
			power = 2;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class M_Vikhr_AT: MissileBase
	{
		hit = 150;
		indirectHit = 20;
		indirectHitRange = 2;
		proximityExplosionDistance = 5;
		warheadName = TandemHEAT;
		submunitionAmmo = ammo_Penetrator_Vikhr;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;
		model = "\A3\Weapons_F\Ammo\Missile_AT_02_fly_F.p3d";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_02_F.p3d";
		CraterEffects = ATRocketCrater;
		explosionEffects = ATRocketExplosion;
		whistleDist = 4;
		maneuvrability = 10;
		simulationStep = 0.002;
		aiAmmoUsageFlags = 128 + 512;
		irLock = true;
		nvLock = true;
		laserLock = true;
		cost = 1000;
		maxSpeed = 600;
		timeToLive = 23;
		airFriction = 0.103;
		sideAirFriction = 0.2;
		trackLead = 1;
		trackOversteer = 1;
		initTime = 0;
		thrustTime = 3.5;
		thrust = 200;
		fuseDistance = 50;
		muzzleEffect = BIS_fnc_effectFiredHeliRocket;
		class Hiteffects
		{
			hitWater = ImpactEffectsSmall;
		};
		cameraViewAvailable = true;
		airLock = true;
		activeSensorAlwaysOn = false;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 250;
		missileLockMaxSpeed = 800;
		weaponLockSystem = CM_Lock_IR + CM_Lock_Laser + CM_Lock_Radar + CM_Missile;
		cmImmunity = CMImmunity_MIDDLE;
		manualControl = true;
		maxControlRange = 8000;
		missileManualControlCone = 120;
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",db-5,1.5,700};
		flightProfiles[] = {TopDown};
		class TopDown
		{
			ascendHeight = 400;
			descendDistance = 800;
			minDistance = 800;
			ascendAngle = 20;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 45;
						angleRangeVertical = 35;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 70;
						angleRangeVertical = 50;
					};
				};
			};
		};
	};
};