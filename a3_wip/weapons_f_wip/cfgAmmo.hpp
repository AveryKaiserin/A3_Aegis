class CfgAmmo
{
    class SubmunitionBase;
    class B_408_Ball;
	class B_408_Guided: SubmunitionBase
	{
		submunitionAmmo = B_408_Ball;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionCount = 1;
		submunitionConeAngle = 0;
		triggerDistance = 1;
		deleteParentWhenTriggered = true;
		simulation = shotMissile;
		cartridge = FxCartridge_127;
		visibleFire = 5;
		audibleFire = 120;
		visibleFireTime = 3;
		cost = 14;
		caliber = 2.4;
		typicalSpeed = 910;
		maneuvrability = 8;
		timeToLive = 15;
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00048;
		sideAirFriction = 0.1;
        lockType = /*manualLT*/ fireAndForgetLT;
		airLock = lockGroundTT;
		irLock = false;
		laserLock = false;
		missileLockCone = 60;
		missileKeepLockedCone = 120;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 35;
		aiAmmoUsageFlags = UsageOffensiveInf;
		trackOversteer = 1;
		trackLead = 1;
		autoSeekTarget = true;
		muzzleEffect = "";
		initTime = 0.05;
		thrustTime = 0.05;
		thrust = 910;
		fuseDistance = 0;
		effectsMissileInit = "";
		effectsMissile = "";
		weaponLockSystem = CM_Lock_Visual;
		cmImmunity = CMImmunity_GOOD;
		manualControl = true;
		maxControlRange = 5000;
		missileManualControlCone = 240;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ManSensorComponent: SensorTemplateMan
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 20;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
				};
			};
		};
	};
};