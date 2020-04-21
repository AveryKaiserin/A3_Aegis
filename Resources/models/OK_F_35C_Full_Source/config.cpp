#include "basicdefines_A3.hpp"

class CfgPatches
{
	class F_35C
	{
		units[] = { "F_35C" };
		weapons[] = {};
		requiredVersion = 0.1;
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		pilot_plane_OK_F_35C = "Pilot_Plane_OK_F_35C";
		pilot_plane_OK_F_35C_Exit = "Pilot_Plane_OK_F_35C_getout";
		pilot_plane_OK_F_35C_Enter = "Pilot_Plane_OK_F_35C_getin";
	};
};
class CfgMovesMaleSdr : CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class pilot_plane_cas_01;
		class pilot_plane_cas_01_getin;
		class pilot_plane_cas_01_getout;
		class pilot_plane_OK_F_35C : pilot_plane_cas_01
		{
			file = "\OK_F_35C\data\Anim\F_35C_Pilot_static.rtm";
			speed = 0.33;
		};
		class pilot_plane_OK_F_35C_getout : pilot_plane_cas_01_getout
		{
			file = "\OK_F_35C\data\Anim\F_35C_Pilot_getout.rtm";
		};
		class pilot_plane_OK_F_35C_getin : pilot_plane_cas_01_getin
		{
			file = "\OK_F_35C\data\Anim\F_35C_Pilot_getin.rtm";
		};
	};
};
class CfgCloudlets
{
	class BodyTrail{};
	class BodyTrailMed{};
	//class ExhaustSmoke1Jet {};
	//class OK_F_35C_Afterburn1 : ExhaustSmoke1Jet
	//{
	//	particleShape = "\OK_F_35C\data\particles\afterburn";
	//	particleFSNtieth = 1;
	//	particleFSIndex = 0;
	//	particleFSFrameCount = 1;
	//	particleFSLoop = 1;
	//	rotationVelocity = 0;
	//	rotationVelocityVar = 0;
	//	lifeTime = "0.1";
	//	lifeTimeVar = 0;
	//	interval = "0.003";
	//	circleRadius = 0;
	//	circleVelocity[] = { 0, 0, 0 };
	//	angleVar = 0;
	//	animationName = "";
	//	particleType = "Billboard";
	//	timerPeriod = 1;
	//	moveVelocity[] =
	//	{
	//		"positionX",
	//		"positionY",
	//		"positionZ"
	//	};
	//	weight = 0;
	//	volume = 0;
	//	rubbing = 0;
	//	size[] = { 1, 1 };
	//	sizeVar = 0;
	//	sizeCoef = "1";
	//	color[] = { { 1, 1, 1, 1 }, { 1, 1, 1, 0 } };
	//	colorCoef[] =
	//	{
	//		"0.2",
	//		"0.5",
	//		"1",
	//		"1"
	//	};
	//	animationSpeed[] = { 1 };
	//	animationSpeedCoef = 1;
	//	randomDirectionPeriod = 0;
	//	randomDirectionIntensity = 0;
	//	onTimerScript = "";
	//	beforeDestroyScript = "";
	//	blockAIVisibility = 0;
	//	destroyOnWaterSurface = 1;
	//	destroyOnWaterSurfaceOffset = 0;
	//	position[] =
	//	{
	//		"positionX",
	//		"positionY",
	//		"positionZ"
	//	};
	//	positionVar[] = { 0, 0, 0 };
	//	MoveVelocityVar[] =
	//	{
	//		"0",
	//		"0",
	//		"0"
	//	};
	//	
	//	
	//	colorVar[] = { 0, 0, 0, 0 };
	//	randomDirectionPeriodVar = 0;
	//	randomDirectionIntensityVar = 0;
	//};
	class OK_F_35C_BodyTrail : BodyTrail
	{
		lifeTime = 0.0002;
		lifeTimeVar = 0.0001;
		size[] = { 1.5 };
		sizeVar = 0.75;
		colorCoef[] =
		{
			1,
			1,
			1,
			"(accelY interpolate [80,250,0,1]) * ((altitude*altitude) interpolate [400,10000,2,0.5])"
		};
	};
	class OK_F_35C_BodyTrailMed : BodyTrailMed
	{
		lifeTime = 0.0001;
		lifeTimeVar = 0.00005;
		size[] = { 1.5 };
		sizeVar = 0.75;
		colorCoef[] =
		{
			1,
			1,
			1,
			"(accelY interpolate [80,250,0,1]) * ((altitude*altitude) interpolate [400,10000,2,0.5])"
		};
	};
};
class BodyVortices {};
//class ExhaustEffectJet {};
class OK_F_35C_BodyVortices : BodyVortices
{
	class BodyTrail1
	{
		simulation = "particles";
		type = "OK_F_35C_BodyTrail";
		qualityLevel = 2;
		enabled = "accelY interpolate [79.9999999,80,-1,1]";
	};
	class BodyTrail1Med
	{
		simulation = "particles";
		type = "OK_F_35C_BodyTrailMed";
		qualityLevel = 1;
		enabled = "accelY interpolate [79.9999999,80,-1,1]";
	};
};
//class OK_F_35C_ExhaustsEffectJet : ExhaustEffectJet
//{
//	class ExhaustsEffect02 {
//		simulation = "particles";
//		type = "OK_F_35C_Afterburn1";
//		qualitylevel = 2;
//		enabled = "intensity interpolate [0.199999,0.2,0,1]";
//	};
//};
class CfgAmmo
{
	class MissileBase;
	class BombCore;
	class LaserBombCore;
	class OK_F_35C_gunpod : BombCore
	{
//		model = "\OK_F_35C\bomberino\F_35C_gunpod";
		proxyShape = "\OK_F_35C\bomberino\F_35C_gunpod";
		hit = 0;
		indirectHit = 0;
	};
	class OK_F_35C_EMPTY : BombCore
	{
		model = "";
		proxyShape = "";
		hit = 0;
		indirectHit = 0;
	};
	class OK_F_35C_AIM9X_A : MissileBase {
		model = "\OK_F_35C\bomberino\F_35C_AIM9X_fly";
		proxyShape = "\OK_F_35C\bomberino\F_35C_AIM9X";
		maverickWeaponIndexOffset = 100;
		hit = 250;
		indirectHit = 100;
		maxSpeed = 828;
		indirectHitRange = 12;
		maneuvrability = 27;
		manualControl = 0;
		maxControlRange = 8000;
		simulationStep = 0.002;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		lockSeekRadius = 180;
		autoSeekTarget = true;
		canLock = 2;
		airLock = 2;
		irLock = 1;
		lockType = 0;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		cmImmunity = 0.95;
		timeToLive = 40;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0.1;
		thrustTime = 6;
		thrust = 240;
		fuseDistance = 500;
		cost = 1500;
		whistleDist = 20;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
	};
	class OK_F_35C_AIM120D_A : MissileBase
	{
		//model = "\A3\Weapons_F\Ammo\Missile_AA_02_fly_F.p3d";
		model = "\OK_F_35C\bomberino\F_35C_AIM120D_fly";
		proxyShape = "\OK_F_35C\bomberino\F_35C_AIM120D";
		maverickWeaponIndexOffset = 102;
		hit = 350;
		indirectHit = 200;
		indirectHitRange = 15;
		maxSpeed = 850;
		sideAirFriction = 0.18;
		maneuvrability = 26;
		simulationStep = 0.002;
		cmImmunity = 0.8;
		cost = 1400;
		timeToLive = 15;
		initTime = 0.25;
		thrustTime = 10;
		thrust = 385;
		canlock = 2;
		airlock = 2;
		irLock = 1;
		lockType = 0;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		fuseDistance = 250;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = "(80^0.25)";
			duration = "((round (80^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((80^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class OK_F_35C_AIM120D_int_A : OK_F_35C_AIM120D_A
	{
		maverickWeaponIndexOffset = 106;
	};
	class OK_F_35C_GBU32_A : LaserBombCore
	{
		hit = 5500;
		indirectHit = 2000;
		indirectHitRange = 12;
		maverickWeaponIndexOffset = 110;
		soundHit1[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_1",
			2.5118864,
			1,
			2400
		};
		soundHit2[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_2",
			2.5118864,
			1,
			2400
		};
		soundHit3[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_3",
			2.5118864,
			1,
			2400
		};
		soundHit4[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_1",
			2.5118864,
			1,
			2400
		};
		soundHit5[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_2",
			2.5118864,
			1,
			2400
		};
		multiSoundHit[] =
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.2,
			"soundHit5",
			0.2
		};
		explosionSoundEffect = "DefaultExplosion";
		model = "\OK_F_35C\bomberino\F_35C_JDAM83_fly"; // this for the flying version (lower tricount)
		proxyShape = "\OK_F_35C\bomberino\F_35C_JDAM83"; // this is the version attached to plane
		trackOversteer = 1;
		trackLead = 0.94999999;
		maneuvrability = 20;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionTime = 2;
		fuseDistance = 35;
		whistleDist = 24;
		weaponLockSystem = "2 + 16 + 4";
		laserLock = 1;
		nvLock = 1;
	};
	class OK_F_35C_GBU32_int_A : OK_F_35C_GBU32_A
	{
		maverickWeaponIndexOffset = 114;
	};
	class OK_F_35C_GBU53_A : LaserBombCore
	{
		model = "\OK_F_35C\bomberino\GBU53_fly\F_35C_GBU53_fly";
		proxyShape = "\OK_F_35C\bomberino\F_35C_GBU53";
		maverickWeaponIndexOffset = 116;
		hit = 1500;
		indirectHit = 500;
		indirectHitRange = 10;
		maxSpeed = 850;
		airFriction = 0.01;
		sideAirFriction = 0.18;
		maneuvrability = 6;
		simulationStep = 0.002;
		lockType = 0;
		irlock = 1;
		airlock = 0;
		laserlock = 1;
		nvLock = 1;
		cmImmunity = 0.6;
		cost = 1400;
		timeToLive = 120;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		fuseDistance = 0;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		soundHit1[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_1",
			2.5118864,
			1,
			2400
		};
		soundHit2[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_2",
			2.5118864,
			1,
			2400
		};
		soundHit3[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_big_3",
			2.5118864,
			1,
			2400
		};
		soundHit4[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_1",
			2.5118864,
			1,
			2400
		};
		soundHit5[] =
		{
			"A3\Sounds_F\weapons\Explosion\expl_shell_2",
			2.5118864,
			1,
			2400
		};
		multiSoundHit[] =
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.2,
			"soundHit5",
			0.2
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class OK_F_35C_CANNON_M : VehicleMagazine
	{
		scope = protected;
		displayName = "GAU-22/A";
		displayNameShort = "Cannon";
		ammo = "B_30mm_AP";
		count = 180;
		initSpeed = 1036;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class OK_F_35C_GUNPOD_M : VehicleMagazine
	{
		scope = protected;
		displayName = "FC-35 External Gun Pod";
		displayNameShort = "Gunpod";
		ammo = "OK_F_35C_gunpod";
		count = "1";
	};
	class OK_F_35C_EMPTY_M : VehicleMagazine
	{
		scope = protected;
		displayName = "-";
		ammo = "";
		count = "0";
	};
	class OK_F_35C_2Rnd_AIM9X_M : VehicleMagazine
	{
		scope = protected;
		displayName = "AIM-9X magazine";
		displayNameShort = "ASRAAM";
		ammo = "OK_F_35C_AIM9X_A";
		count = 2;
		initspeed = 0;
		maxLeadSpeed = 600;
		nameSound = "rockets";
	};
	class OK_F_35C_2Rnd_AIM120D_M : VehicleMagazine
	{
		scope = protected;
		displayName = "AIM-120D FMRAAM";
		displayNameShort = "FMRAAM";
		count = 2;
		ammo = "OK_F_35C_AIM120D_A";
		initSpeed = 40;
		maxLeadSpeed = 600;
		nameSound = "missiles";
	};
	class OK_F_35C_4Rnd_AIM120D_M : OK_F_35C_2Rnd_AIM120D_M
	{
		count = 4;
	};
	class OK_F_35C_2Rnd_AIM120D_int_M : OK_F_35C_2Rnd_AIM120D_M
	{
		ammo = "OK_F_35C_AIM120D_int_A";
		count = 2;
	};
	class OK_F_35C_4Rnd_AIM120D_int_M : OK_F_35C_2Rnd_AIM120D_int_M
	{
		count = 4;
	};
	class OK_F_35C_2Rnd_GBU32_M : VehicleMagazine
	{
		scope = protected;
		displayName = "GBU-32 JDAM";
		descriptionShort = "Guided Bomb Unit";
		displayNameShort = "JDAM";
		ammo = "OK_F_35C_GBU32_A";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] =
		{
			"",
			1,
			1
		};
		reloadSound[] =
		{
			"",
			0.00031622776,
			1
		};
		count = 2;
		nameSound = "cannon";
	};
	class OK_F_35C_4Rnd_GBU32_M : OK_F_35C_2Rnd_GBU32_M
	{
		count = 4;
	};
	class OK_F_35C_2Rnd_GBU32_int_M : OK_F_35C_2Rnd_GBU32_M
	{
		displayName = "GBU-32 JDAM";
		ammo = "OK_F_35C_GBU32_int_A";
		count = 2;
	};
	class OK_F_35C_8Rnd_GBU53_M : VehicleMagazine
	{
		scope = protected;
		displayName = "GBU-53 SDB";
		descriptionShort = "Small Diameter Bomb";
		displayNameShort = "SDB";
		ammo = "OK_F_35C_GBU53_A";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] =
		{
			"",
			1,
			1
		};
		reloadSound[] =
		{
			"",
			0.00031622776,
			1
		};
		count = 8;
		nameSound = "cannon";
	};
};
class CfgWeapons
{
	class MissileLauncher;
	class CannonCore;
	class RocketPods;
	class OK_F_35C_DESELECT_W : RocketPods
	{
		holdsterAnimValue = 1;
		scope = 2;
		displayName = "-";
		displayNameMagazine = "-";
		shortNameMagazine = "-";
		nameSound = "";
		magazines[] = { "OK_F_35C_EMPTY_M" };
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
	};
	class OK_F_35C_CANNON_W : CannonCore
	{
		holdsterAnimValue = 1;
		scope = protected;
		displayName = "GAU-22/A";
		displayNameMagazine = "GAU-22/A 25mm";
		shortNameMagazine = "GAU-22/A 25mm";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		magazines[] =
		{
			"OK_F_35C_CANNON_M"
		};
		canLock = 2;
		ballisticsComputer = 1;
		missileLockCone = 20;
		weaponLockSystem = 3;
		modes[] =
		{
			"manual",
			"close",
			"near",
			"medium",
			"far"
		};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "muzzle";
				directionName = "muzzle_dir";
			};
		};
		class manual : CannonCore
		{
			displayName = "GAU-22/A";
			autoFire = 1;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\sounds_f\weapons\gatling\minigun2_m134",
					1.7782794,
					1,
					2000
				};
				begin2[] =
				{
					"A3\sounds_f\weapons\gatling\minigun3_m134",
					1.7782794,
					1,
					2000
				};
				begin3[] =
				{
					"A3\sounds_f\weapons\gatling\minigun4_m134",
					1.7782794,
					1,
					2000
				};
				begin4[] =
				{
					"A3\sounds_f\weapons\gatling\minigun5_m134",
					1.7782794,
					1,
					2000
				};
				begin5[] =
				{
					"A3\sounds_f\weapons\gatling\minigun6_m134",
					1.7782794,
					1,
					2000
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5,
					"begin3",
					0.5,
					"begin4",
					0.5,
					"begin5",
					0.5
				};
				weaponSoundEffect = "DefaultRifle";
			};
			reloadTime = 0.02;
			dispersion = 0.0036;
			soundContinuous = 0;
			soundBurst = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			textureType = "fullAuto";
		};
		class close : manual
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class near : close
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far : close
		{
			burst = 4;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class OK_F_35C_AIM9X_W : MissileLauncher
	{
		holdsterAnimValue = 2;
		weaponLockDelay = 1;
		weaponLockSystem = 15;
		lockingTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[] =
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		displayName = "AIM-9X";
		displayNameMagazine = "AIM-9X Sidewinder";
		shortNameMagazine = "AIM-9X";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		minRange = 50;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.1;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		sounds[] =
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[] =
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.1220185,
				1.3,
				1000
			};
			soundBegin[] =
			{
				"begin1",
				1
			};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] =
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1,
			1.5,
			700
		};
		weaponSoundEffect = "DefaultRifle";
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] =
		{
			"OK_F_35C_2Rnd_AIM9X_M"
		};
		textureType = "semi";
	};
	class OK_F_35C_AIM120D_W : MissileLauncher
	{
		holdsterAnimValue = 3;
		canLock = 2;
		weaponLockDelay = 3;
		weaponLockSystem = "2 + 4 + 8";
//		cmImmunity = 0.6;
		lockingTargetSound[] =
		{
			"A3\Sounds_F\weapons\Rockets\locked_1",
			0.50118721,
			1
		};
		lockedTargetSound[] =
		{
			"A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		displayName = "AIM-120D";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		cursorSize = 1;
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		sounds[] =
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[] =
			{
				"A3\Sounds_F_EPC\Weapons\missile_epc_1",
				1.7782794,
				1,
				3500
			};
			soundBegin[] =
			{
				"begin1",
				1
			};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] =
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			1.9952624,
			1,
			1700
		};
		magazines[] =
		{
			"OK_F_35C_2Rnd_AIM120D_M"
		};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
//		textureType = "semi";
	};
	class OK_F_35C_AIM120D_int_W : OK_F_35C_AIM120D_W
	{
		displayName = "AIM-120D Internal";
		holdsterAnimValue = 5;
		magazines[] =
		{
			"OK_F_35C_2Rnd_AIM120D_int_M"
		};
	};
	class OK_F_35C_4Rnd_AIM120D_W : OK_F_35C_AIM120D_W {
		magazines[] =
		{
			"OK_F_35C_4Rnd_AIM120D_M"
		};
	};
	class OK_F_35C_4Rnd_AIM120D_int_W : OK_F_35C_AIM120D_int_W {
		magazines[] =
		{
			"OK_F_35C_4Rnd_AIM120D_int_M"
		};
	};
	class OK_F_35C_GBU32_W : RocketPods
	{
		holdsterAnimValue = 4;
		autoFire = 0;
		displayName = "GBU-32";
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] =
		{
			"OK_F_35C_2Rnd_GBU32_M"
		};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = "";
		cursorAim = "EmptyCursor";
		textureType = "fullAuto";
		missileLockCone = 180;
		weaponLockDelay = 1;
	};
	class OK_F_35C_4Rnd_GBU32_W : OK_F_35C_GBU32_W
	{
		magazines[] =
		{
			"OK_F_35C_4Rnd_GBU32_M"
		};
	};
	class OK_F_35C_GBU32_int_W : OK_F_35C_GBU32_W
	{
		holdsterAnimValue = 6;
		displayName = "GBU-32 Internal";
		magazines[] =
		{
			"OK_F_35C_2Rnd_GBU32_int_M"
		};
		weaponLockDelay = 1;
	};
	class OK_F_35C_GBU53_int_W : RocketPods
	{
		holdsterAnimValue = 7;
		autoFire = 0;
		displayName = "GBU-53";
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] =
		{
			"OK_F_35C_8Rnd_GBU53_M"
		};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = "";
		cursorAim = "EmptyCursor";
		textureType = "fullAuto";
		missileLockCone = 180;
		weaponLockDelay = 0.0;
		weaponLockSystem = 15;
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints
		{
			class HitHull;
		};
	};

	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull{};
		};
	};

	class F_35C_Base: Plane_Base_F
	{
		displayName = "FC-37 Thunder";						/// how is the plane displayed in editor
		model = "\OK_F_35C\F_35C.p3d";								/// path to model of the plane
		accuracy = 0.3;											/// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		mapSize = 17.52;

		icon = "\OK_F_35C\data\f35_icon_bw.paa"; 	/// icon in map/editor
		picture = "\OK_F_35C\data\f35_icon_bw.paa";	/// small picture in command menu

		driverAction = "pilot_plane_OK_F_35C";	/// what is the standard pose for the pilot, defined as animation state
		getinAction = "pilot_plane_OK_F_35C_Enter";
		getoutaction = "pilot_plane_OK_F_35C_Exit";
		//driverAction = "pilot_plane_cas_01";
		//getinAction = "pilot_plane_cas_01_Enter";
		//getoutaction = "pilot_plane_cas_01_Exit";
		precisegetinout = 1;
		viewDriverShadow = true;
		viewCargoShadow = true;
		viewDriverShadowDiff = 0.5;
		viewDriverShadowAmb = 0.5;
		cabinOpening = 1;
		selectionFireAnim = "zasleh";

		class Library {
			libTextDesc = "The F-37 is a family of single-engine multirole fighter airctaft. It is the product of an international NATO venture. A true 5th generation fighter aircraft to replace the F/A-18, F-16 and A-10. The FC carrier variant is equipped with a tail hook, sturdier landing gear, and a wider wingspan to enable operation from aircraft carriers.";
		};

		//memory points for get in pos?
		memoryPointsGetInDriver = "GetIn_driver_pos";
		memoryPointsGetInDriverDir = "GetIn_driver_dir";

		// driver hand IK links
		driverLeftHandAnimName = "throttle_stick";
		driverRightHandAnimName = "flight_stick";
		// driver leg IK links?
		driverLeftLegAnimName = "pedal_left";
		driverRightLegAnimName = "pedal_right"; 
		memoryPointCM[] =
		{
			"FlareLauncher_1_pos"
		};
		memoryPointCMDir[] =
		{
			"FlareLauncher_1_dir"
		};
		memoryPointLDust = "WheelDust_left_pos";
		memoryPointRDust = "WheelDust_right_pos";

		LockDetectionSystem = CM_Lock_Radar;			/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;	/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case

		class Turrets {};	/// single seat planes don't have any kind of turret, we need to void it

		class TransportItems{};	/// planes are usually not used to transport items, there could possibly be a few FAKs	

		class WingVortices
		{
				class WingTipLeft
				{
						effectName = "WingVortices";// name of the effect
						position = "body_vapour_L_E"; // name of the memory point in model
				};

				class WingTipRight
				{
						effectName = "WingVortices"; // name of the effect
						position = "body_vapour_R_E";// name of the memory point in model
				};
				class BodyLeft
				{
						effectName = "OK_F_35C_BodyVortices";// name of the effect
						position = "body_vapour_L_S"; // name of the memory point in model
				};

				class BodyRight
				{
						effectName = "OK_F_35C_BodyVortices"; // name of the effect
						position = "body_vapour_R_S";// name of the memory point in model
				};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_pos";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectJet";
			};
		};
		#include "sounds.hpp" 	/// sounds are included in separate file to prevent cluttering

		landingSpeed = 190;		/// used for AI to approach the runawy, the plane should be stable at this speed
		acceleration = 300; 	/// used for AI to plan the waypoints and accelerating, doesn't affect plane performance
		maxSpeed = 1095;		/// maximal speed of the plane, affects even thrust and is base for both envelope and thrustCoef
		
		driveOnComponent[] = {"wheel_1", "wheel_2", "wheel_3"};  /// array of components to be assigned special low-friction material (usually wheels) "wheel_1","wheel_2","wheel_3"
		wheelSteeringSensitivity = 2.5;

		rudderInfluence = 0.02;		/// coefficient of rudder affecting steering of the plane
		aileronSensitivity = 2;		/// coefficient of ailerons affecting twisting the plane
		elevatorSensitivity = 1.2;	/// coefficient of elevators affecting changing of plane horizontal heading
		gearUpTime=6;
		gearDownTime=5;

		altNoForce = 35000;
		altFullForce = 13636;

		radarType = 4;

		irScanRangeMin = 500;		/// defines the range of IR sight of the vehicle
		irScanRangeMax = 10000;		/// defines the range of IR sight of the vehicle
		irScanToEyeFactor = 2;		/// defines the effectivity of IR sight of the vehicle
		showAllTargets = 2;

		canFloat = false;
		waterLeakiness = 35.0;
		camouflage = 20;
		audible = 20;


		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		///			  0%   10%   20%   30%   40%   50%   60%   70%   80%   90%   100%  110%  125%
		envelope[] = {0.0, 0.50, 1.0, 2.00, 7.00, 7.00, 7.00, 6.85, 6.50, 5.80, 4.60, 2.80, 0.00};
		
		/// angle of incidence - difference between forward and airfold chord line - def. val is 3*PI/180 (meaning three degrees)
		angleOfIndicence = "rad 1";

		/// forces keeping plane aligned with its speed direction - the bigger force the better it changes the direction of flight
		draconicForceXCoef = 7; //left/right
		draconicForceYCoef = 1.5; //up/down
		draconicForceZCoef = 0.5; // forward/back
		draconicTorqueXCoef = 1.2; //0.15
		draconicTorqueYCoef = 1; // noseup/down twist torque

		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used 
		// effectiveness according to current speed and maxSpeed ratio
		// last value goes for 150% of max speed
		//				  0%   10%  20%  30%  40%  50%  60%  70%  80%  90%  100% 110% 120% 130% 140% 150%
		thrustCoef[] =	{ 1.0, 1.4, 1.5, 1.5, 1.5, 1.4, 1.3, 1.2, 1.2, 1.0, 0.9, 0.7, 0.4, 0.3, 0.0, 0.0 };
		elevatorCoef[]= { 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 }; //default value is 1
		aileronCoef[]=	{   1, 1.5,   2, 2.5,   3,   3,   3,   3,   3,   3,   3,   3,   3,   2,   1,   1 };  //default value is 1
		rudderCoef[] = {};   //default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));

		//! coefficient of player's controller sensitivity (does not affect AI) (does not affect the rate of steer, only sensitivity
		elevatorControlsSensitivityCoef = 4; 
		aileronControlsSensitivityCoef = 3;
		rudderControlsSensitivityCoef = 4;

		brakeDistance = 150;

		landingAoa = "rad 8"; 	/// what AoA is the AI going to use to land the plane

		laserScanner = 1;		/// if the vehicle is able to see targets marked by laser marker 
		gunAimDown = "rad 0";	/// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	/// adjusts the view of pilot to have crosshair centred


		flapsFrictionCoef = 0.5;	/// sets the effectivity of using flaps to increase drag/lift
		
		minFireTime = 30;			/// how long does the pilot fire at one target before switching to another one

		threat[] = {0.1, 0.5, 1};		/// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies

		class Reflectors			/// landing lights of the plane, turned on by AI while in night and "careless" or "safe"
		{
			class Front
			{
				color[] = {7000, 7500, 10000, 1}; 	/// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100};		/// the same definition format for colouring the environment around
				position = "Light_front";				/// name of memory point in model to take the origin of the light
				direction = "Light_front_end";			/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_front";				/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_front_hide";				/// name of selection in visual lods of the model that are going to be hidden while the light is off
				innerAngle = 10;					/// angle from light direction vector where the light is at full strength
				outerAngle = 60;					/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					/// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = true;					/// boolean switch if the light produces flare or not
				dayLight = false;					/// boolean switch if the light is used during day or not
				FlareSize = 4;						/// how big is the flare, using the same metrics as intensity
				size = 1;							/// defines the visible size of light, has not much of an effect now
				class Attenuation					/// describes how fast does the light dim
				{
					start = 1;						/// offset of start of the attenuation
					constant = 0;					/// constant attenuation of the light in any distance from source
					linear = 0;						/// coefficient for linear attenuation
					quadratic = 4;					/// coefficient for attenuation with square of distance from source
					
					hardLimitStart = 150;			/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				/// distance from source where the light is not displayed (shorter distances increase performance)				
				};
			};
		};		

		armor = 40;				/// just some protection against missiles, collisions and explosions	
		damageResistance = 0.004;	/// for AI if it is worth to be shoot at
		armorStructural = 1;
		destrType = DestructWreck;	/// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		class HitPoints : HitPoints
		{
			class HitGlass1 : HitHull
			{
				armor = 3;
				explosionShielding = 2;
				radius = 0.5;
				passThrough = 0;
				name = "glass_1";
				visual = "glass_1";
				convexComponent = "glass_1";
			};
			class HitEngine : HitHull
			{
				armor = 30;
				explosionShielding = 3;
				radius = 1;
				passThrough = 1;
				name = "engine_hit";
				visual = "engine";
				convexComponent = "engine_hit";
			};
			class HitHull : HitHull
			{
				armor = 100;
				explosionShielding = 1;
				radius = 9;
				passThrough = 0.5;
				name = "hull_hit";
				visual = "fuselage";
				depends = "Total";
				minimumHit = 0.050000001;
			};
		};

		class Damage 	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] =
			{
				"OK_F_35C\data\F_35C_int_glass.rvmat",			/// material mapped in model
				"OK_F_35C\data\F_35C_int_glass_dmg.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"OK_F_35C\data\F_35C_int_glass_dmg.rvmat",	/// changes to this one once damage of the part reaches 1
				"OK_F_35C\data\F_35C_ext_glass.rvmat",
				"OK_F_35C\data\F_35C_ext_glass_dmg.rvmat",	
				"OK_F_35C\data\F_35C_ext_glass_dmg.rvmat",
				"OK_F_35C\data\F_35C_ext_1.rvmat",
				"OK_F_35C\data\F_35C_ext_1_dmg.rvmat",
				"OK_F_35C\data\F_35C_ext_1_dest.rvmat",
				"OK_F_35C\data\F_35C_ext_2.rvmat",
				"OK_F_35C\data\F_35C_ext_2_dmg.rvmat",
				"OK_F_35C\data\F_35C_ext_1_dest.rvmat",
				"OK_F_35C\data\F_35C_ext_3.rvmat",
				"OK_F_35C\data\F_35C_ext_3_dmg.rvmat",
				"OK_F_35C\data\F_35C_ext_1_dest.rvmat"
			};
		};
		//hiddenSelections[] =	/// we want to allow changing of colours, this defines on what selection are the textures used
		//{
		//	
		//};
		class MFD				/// class for helmet mounted displays, is going to be documented separately
		{
			class AirplaneHUD
			{
				#include "cfgHUD.hpp"
				helmetMountedDisplay = 1;
				helmetPosition[] = { -0.04, 0.03, 0.1 };
				helmetRight[] = { 0.08, 0, 0 }; 
				helmetDown[] = { -0, -0.06, 0 };
			};
		};
		class UserActions
		{
			class refuel {
				displayName = "Extend refueling nozzle";
				position = "pilot";
				priority = 6;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""refuel_hatch_1"" < 0.5";
				statement = "this animate [""refuel_hatch_1"",1];this animate [""refuel_hatch_2_a"",1];this animate [""refuel_hatch_2_b"",1];this animate [""refuel_limb"",1];this animate [""refuel_hatch_1_int"",1];this animate [""refuel_hatch_2_int_a"",1];this animate [""refuel_hatch_2_int_b"",1];this animate [""refuel_limb_int"",1];this animate [""refuel_mfd"",1];";
			};
			class unRefuel {
				displayName = "Retract refueling nozzle";
				position = "pilot";
				priority = 6;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""refuel_hatch_1"" > 0.5";
				statement = "this animate [""refuel_hatch_1"",0];this animate [""refuel_hatch_2_a"",0];this animate [""refuel_hatch_2_b"",0];this animate [""refuel_limb"",0];this animate [""refuel_hatch_1_int"",0];this animate [""refuel_hatch_2_int_a"",0];this animate [""refuel_hatch_2_int_b"",0];this animate [""refuel_limb_int"",0];this animate [""refuel_mfd"",0];";
			};
			class tailHook {
				displayName = "Extend arresting hook";
				position = "pilot";
				priority = 5;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""arresting_hook"" < 0.5";
				statement = "this animate [""hook_hatch_1"",1];this animate [""hook_hatch_2"",1];this animate [""hook_hatch_3"",1];this animate [""arresting_hook"",1];";
			};
			class tailHookOff {
				displayName = "Retract arresting hook";
				position = "pilot";
				priority = 5;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""arresting_hook"" > 0.5";
				statement = "this animate [""hook_hatch_1"",0];this animate [""hook_hatch_2"",0];this animate [""hook_hatch_3"",0];this animate [""arresting_hook"",0];";
			};
			class foldWingtips {
				displayName = "Fold wings";
				position = "pilot";
				priority = 4;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""wingtipR"" < 0.5 and velocityModelSpace this select 1 < 5 and getPosATL this select 2 < 10";
				statement = "this animate [""wingtipR"",1];this animate [""wingtipR_2"",1];this animate [""wingtipR_1"",1];this animate [""wingtipR_lip"",1];this animate [""wingtipL"",1];this animate [""wingtipL_2"",1];this animate [""wingtipL_1"",1];this animate [""wingtipL_lip"",1];";
			};
			class unfoldWingtips {
				displayName = "Unfold wings";
				position = "pilot";
				priority = 4;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""wingtipR"" > 0.5";
				statement = "this animate [""wingtipR"",0];this animate [""wingtipR_2"",0];this animate [""wingtipR_1"",0];this animate [""wingtipR_lip"",0];this animate [""wingtipL"",0];this animate [""wingtipL_2"",0];this animate [""wingtipL_1"",0];this animate [""wingtipL_lip"",0];";
			};
			class formationLights 
			{
				displayName = "Formation Lights On";
				position = "pilot";
				priority = 4;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""FormationLights"" > 0.5";
				statement = "this animate [""FormationLights"",0];";
			};
			class unFormationLights 
			{
				displayName = "Formation Lights Off";
				position = "pilot";
				priority = 4;
				radius = 20;
				showWindow = 0;
				hideOnUse = 1;
				onlyforplayer = 1;
				condition = "player in this and this animationPhase ""FormationLights"" < 0.5";
				statement = "this animate [""FormationLights"",1];";
			};
		};
		class AnimationSources	/// custom made animation sources to show/hide all the different parts for different loadout
		{												/// corresponds with source used in model.cfg, hidden by default
			class bayL_hatch_1		{ AnimPeriod = 1.5; source = "user"; InitPhase = 0; };
			class bayL_hatch_1_w : bayL_hatch_1	{ InitPhase = 1; };
			class bayL_hatch_2 : bayL_hatch_1	{};
			class bayR_hatch_1 : bayL_hatch_1	{};
			class bayR_hatch_1_w : bayL_hatch_1	{ InitPhase = 1; };
			class bayR_hatch_2 : bayL_hatch_1	{};
			class bayL_hatch_1_b : bayL_hatch_1	{};
			class bayL_hatch_2_b : bayL_hatch_1	{};
			class bayR_hatch_1_b : bayL_hatch_1	{};
			class bayR_hatch_2_b : bayL_hatch_1	{};

			class wingtipR		{ AnimPeriod = 4; source = "user"; InitPhase = 0; };
			class wingtipR_1 : wingtipR	{};
			class wingtipR_2 : wingtipR	{};
			class wingtipR_lip : wingtipR	{};
			class wingtipL : wingtipR	{};
			class wingtipL_1 : wingtipR	{};
			class wingtipL_2 : wingtipR	{};
			class wingtipL_lip : wingtipR	{};

			class FormationLights { AnimPeriod = 1; source = "user"; InitPhase = 1; };

			class refuel_hatch_1	{ AnimPeriod = 4; source = "user"; InitPhase = 0; };
			class refuel_hatch_2_a : refuel_hatch_1 {};
			class refuel_hatch_2_b : refuel_hatch_1 {};
			class refuel_limb : refuel_hatch_1 {};
			class refuel_hatch_1_int : refuel_hatch_1	{};
			class refuel_hatch_2_int_a : refuel_hatch_1 {};
			class refuel_hatch_2_int_b : refuel_hatch_1 {};
			class refuel_limb_int : refuel_hatch_1 {};
			class refuel_mfd : refuel_hatch_1 {};

			class arresting_hook { AnimPeriod = 2; source = "user"; InitPhase = 0; };
			class hook_hatch_1 : arresting_hook {};
			class hook_hatch_2 : arresting_hook {};
			class hook_hatch_3 : arresting_hook {};
			
			class station_01_aim9x { AnimPeriod = 0.01; source = "user"; InitPhase = 0; };
			class station_02_aim120d : station_01_aim9x {};
			class station_02_gbu32 : station_01_aim9x {};
			class station_03_aim120d : station_01_aim9x {};
			class station_03_gbu32 : station_01_aim9x {};
			class station_04_gbu53 : station_01_aim9x {};
			class station_04_gbu32 : station_01_aim9x {};
			class station_04_aim120d : station_01_aim9x {};
			class station_06_gun : station_01_aim9x {};

			class single_sidewinder : station_01_aim9x {};
			class single_amraam_int : station_01_aim9x { InitPhase = 0; };
			class single_amraam: station_01_aim9x{};
			class double_amraam : station_01_aim9x {};
			class single_jdam_int : station_01_aim9x {};
			class single_jdam : station_01_aim9x {};
			class double_jdam : station_01_aim9x {};
			class single_sdb : station_01_aim9x {};
			class ext_stations : station_01_aim9x {};
			class ext_station_R : station_01_aim9x { InitPhase = 0; };
			class ext_station_L : ext_station_R {};

			class mfd_double_amraam_1 : station_01_aim9x {};
			class mfd_double_amraam_2 : station_01_aim9x {};
			class mfd_double_amraam_int_1 : station_01_aim9x {};
			class mfd_double_amraam_int_2 : station_01_aim9x {};
			class mfd_double_gbu_1 : station_01_aim9x {};
			class mfd_double_gbu_2 : station_01_aim9x {};

			class OK_F_35C_AIM9X_revolve { source = "revolving"; weapon = "OK_F_35C_AIM9X_W"; };
			class OK_F_35C_AIM120D_revolve { source = "revolving"; weapon = "OK_F_35C_AIM120D_W"; };
			class OK_F_35C_AIM120D_revolve_4 { source = "revolving"; weapon = "OK_F_35C_4Rnd_AIM120D_W"; };
			class OK_F_35C_AIM120D_int_revolve { source = "revolving"; weapon = "OK_F_35C_AIM120D_int_W"; };
			class OK_F_35C_AIM120D_int_revolve_4 { source = "revolving"; weapon = "OK_F_35C_4Rnd_AIM120D_int_W"; };
			class OK_F_35C_GBU32_revolve { source = "revolving"; weapon = "OK_F_35C_GBU32_W"; };
			class OK_F_35C_GBU32_revolve_4 { source = "revolving"; weapon = "OK_F_35C_4Rnd_GBU32_W"; };
			class OK_F_35C_GBU32_int_revolve { source = "revolving"; weapon = "OK_F_35C_GBU32_int_W"; };
			class OK_F_35C_GBU53_int_revolve { source = "revolving"; weapon = "OK_F_35C_GBU53_int_W"; };
		};
		class RenderTargets
		{
			class mfdFlir
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "flir_pos";
					pointDirection = "flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.3;
				};
			};
		};
	};
	class F_35C : F_35C_Base /// Combat Air Patrol
	{
		scope = public;	/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		displayName = "FC-37 Thunder"; /// how does the vehicle show itself in editor
		author = "Olli Koskelainen";

		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction = BLU_F;					/// defines the faction inside of the side
		crew = "B_Pilot_F";		/// lets use the sample soldier we have as default captain of the boat

		typicalCargo[] =
		{
			"B_pilot_F"
		};
		//hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		//{
		//};

		weapons[] =	
		{
			CMFlareLauncher
		};
		magazines[] =
		{
			240Rnd_CMFlare_Chaff_Magazine
		};
		class UserActions : UserActions {};
		class AnimationSources : AnimationSources {};
		class EventHandlers
		{
			init = "_this execVM '\OK_F_35C\data\scripts\init.sqf'";
			gear = "_this execVM '\OK_F_35C\data\scripts\weapon_disabler.sqf'";
		};

		availableForSupportTypes[] = { "CAS_Bombing" };	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost = 3000000;	/// we need some high cost for such vehicles to be prioritized by AA defences
	};
	class F_35C_S : F_35C_Base
	{
		scope = public;
		displayName = "FC-37 Stealth Thunder";
		author = "Olli Koskelainen";

		side = 1;
		faction = BLU_F;
		crew = "B_Pilot_F";	

		typicalCargo[] =
		{
			"B_pilot_F"
		};

		landingSpeed = 160;
		landingAoa = "rad 8";

		accuracy = 0.35;

		//modify stealth version flight characteristics to be better than the non-stealth version (since its lighter)
		draconicForceXCoef = 8; //left/right
		draconicForceYCoef = 2; //up/down
		draconicForceZCoef = 1; // forward/back
		draconicTorqueXCoef = 1.2; //0.15
		draconicTorqueYCoef = 1; // noseup/down twist torque
		envelope[] = { 0.0, 0.50, 3.0, 8.00, 9.00, 9.00, 9.00, 6.85, 6.50, 5.80, 4.60, 2.80, 0.00 };
		
		thrustCoef[] = { 1.2, 1.6, 2.0, 1.9, 1.8, 1.7, 1.6, 1.5, 1.4, 1.2, 1.1, 0.9, 0.5, 0.3, 0.0, 0.0 };
		elevatorCoef[] = { 0.5, 0.9, 1.1, 1.3, 1.4, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5 }; //default value is 1
		aileronCoef[] = { 1, 1.75, 2.5, 2.5, 3.5, 3.5, 3.5, 3.5, 3.5, 3.5, 3.5, 3.5, 3.5, 2, 1, 1 };

		weapons[] =
		{
			CMFlareLauncher
		};
		magazines[] =
		{
			240Rnd_CMFlare_Chaff_Magazine
		};
		class EventHandlers
		{
			init = "_this execVM '\OK_F_35C\data\scripts\init_stealth.sqf'";
			gear = "_this execVM '\OK_F_35C\data\scripts\weapon_disabler.sqf'";
		};
		availableForSupportTypes[] = { "CAS_Bombing" };	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost = 2500000;	/// we need some high cost for such vehicles to be prioritized by AA defences
	};
	class PlaneWreck;

	class F_35C_wreck : PlaneWreck
	{
		scope = protected;
		model = "\OK_F_35C\F_35C_wreck";
		typicalCargo[] = {};
		irTarget = 0;
		canFloat = false;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 0;
		class Eventhandlers{};
	};
};