class CfgAmmo
{
	class BulletBase;
    class B_23mm_AA: BulletBase
	{
		hit = 42;
		indirectHit = 15;
		indirectHitRange = 0.3;
		warheadName = "HE";
		visibleFire = 38;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		deflecting = 0;
		explosive = 0.6;
		airLock = true;
		aiAmmoUsageFlags = 64 + 128 + 256;
		cost = 34;
		CraterEffects = ExploAmmoCrater;
		explosionEffects = ExploAmmoExplosion;
		explosionSoundEffect = DefaultExplosion;
		model = "\A3\Weapons_F\Data\BulletTracer\tracer_white";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000824;
		muzzleEffect = "";
		caliber = 1.11;
		typicalSpeed = 980;
		class CamShakeExplode
		{
			power = 3.6;
			duration = 0.8;
			frequency = 20;
			distance = 41.9411;
		};
		class CamShakeHit
		{
			power = 18;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.49535;
			duration = 0.4;
			frequency = 20;
			distance = 17.8885;
		};
		class CamShakePlayerFire
		{
			power = 0.001;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class B_23mm_AA_Tracer_Red: B_23mm_AA
	{
		model = "\A3\Weapons_F\Data\BulletTracer\tracer_red.p3d";
	};
	class B_23mm_AA_Tracer_Green: B_23mm_AA
	{
		model = "\A3\Weapons_F\Data\BulletTracer\tracer_green.p3d";
	};
	class B_23mm_AA_Tracer_Yellow: B_23mm_AA
	{
		model = "\A3\Weapons_F\Data\BulletTracer\tracer_yellow.p3d";
	};
};