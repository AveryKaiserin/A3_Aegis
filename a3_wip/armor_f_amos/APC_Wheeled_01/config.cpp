#include "\A3_Aegis\basicDefines_A3.hpp"
#include "cfgPatches.hpp"
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	// Arma 3
	class Car_F;
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret;
		};
        class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class AnimationSources: AnimationSources
        {
            class showBags;
            class showCamonetTurret;
            class showSLATTurret;
        };
	};
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F{};
	// Arma 3 Aegis
	#include "cfgBlufor.hpp"			// US
	#include "cfgBlufor_Exp.hpp"		// US (Pacific)
	#include "cfgBlufor_Enoch.hpp"		// US (Woodland)
};
class CfgAmmo
{
    class Sh_155mm_AMOS;
    class Sh_82mm_AMOS_guided;
    class Sh_82mm_AMOS_LG;
	class Sh_120mm_AMOS: Sh_155mm_AMOS
	{
		hit = 250;
		indirectHit = 89;
		indirectHitRange = 24;
		cost = 250;
		class CamShakeExplode
		{
			power = 24;
			duration = 2.1;
			frequency = 20;
			distance = 278.021;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
    /*
	class Sh_120mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		submunitionAmmo = M_Mo_120mm_AT;
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class Sh_120mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		submunitionAmmo = M_Mo_120mm_AT_LG;
		muzzleEffect = "";
		triggerDistance = 500;
		hit = 300;
	};
	class Mine_120mm_AMOS_range: SubmunitionBase
	{
		submunitionAmmo = Mo_ClassicMineRange;
		submunitionConeType[] = {randomcenter,10};
		submunitionConeAngle = 30;
		triggerDistance = 100;
		cost = 500;
		airFriction = 0;
		muzzleEffect = "";
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class Cluster_120mm_AMOS: SubmunitionBase
	{
		triggerDistance = 100;
		triggerSpeedCoef[] = {0.5,1};
		submunitionConeAngle = 15;
		submunitionAmmo = Mo_cluster_AP;
		submunitionConeType[] = {randomcenter,10};
		submunitionConeAngle = 15;
		cost = 200;
		airFriction = 0;
		muzzleEffect = "";
		hit = 300;
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
    */
};
class CfgMagazines
{
    class VehicleMagazine;
	class 50Rnd_120mm_Mo_shells: VehicleMagazine
	{
        author = $STR_A3_A_AveryTheKitty;
		initSpeed = 810;
		displayNameShort = $STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns;
		scope = public;
		displayName = $STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells0;
		displayNameMFDFormat = "HE";
		ammo = Sh_120mm_AMOS;
		count = 50;
		nameSound = heat;
		muzzleImpulseFactor[] =
        {
            1.0,    // X
            10.0    // Y
        };
	};
    /*
	class 10Rnd_120mm_Mo_smoke: 50Rnd_120mm_Mo_shells
	{
        author = $STR_A3_A_AveryTheKitty;
		count = 10;
		ammo = Smoke_120mm_AMOS_White;
		displayName = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke0;
		displayNameShort = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke_dns;
		displayNameMFDFormat = "SMOKE";
	};
	class 10Rnd_120mm_Mo_guided: 10Rnd_120mm_Mo_smoke
	{
        author = $STR_A3_A_AveryTheKitty;
		ammo = Sh_120mm_AMOS_guided;
		displayName = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0;
		displayNameShort = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided_dns;
		displayNameMFDFormat = "GUIDED";
	};
	class 10Rnd_120mm_Mo_LG: 10Rnd_120mm_Mo_smoke
	{
        author = $STR_A3_A_AveryTheKitty;
		ammo = Sh_120mm_AMOS_LG;
		displayName = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0;
		displayNameShort = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG_dns;
		displayNameMFDFormat = "LASER GUID";
	};
	class 10Rnd_120mm_Mo_mine: 10Rnd_120mm_Mo_smoke
	{
        author = $STR_A3_A_AveryTheKitty;
		ammo = Mine_120mm_AMOS_range;
		displayName = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0;
		displayNameShort = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine_dns;
		displayNameMFDFormat = "MINE";
	};
	class 10Rnd_120mm_Mo_Cluster: 10Rnd_120mm_Mo_smoke
	{
        author = $STR_A3_A_AveryTheKitty;
		ammo = Cluster_120mm_AMOS;
		displayName = $STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0;
		displayNameShort = $STR_A3_cfgmagazines_Cluster_dns;
		displayNameMFDFormat = "CLUSTER";
	};
    */
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
    class CannonCore;
	class mortar_120mm_AMOS: CannonCore
	{
		scope = protected;
		displayName = "AMOS Mortar 120 mm";
		nameSound = cannon;
		cursor = mortar;
		cursorAim = EmptyCursor;
		sounds[] = {StandardSound};
		class StandardSound
		{
			SoundSetShot[] =
            {
                Mortar82mm_Shot_SoundSet,
                Mortar82mm_Tail_SoundSet
            };
		};
		reloadTime = 4.3;
		magazineReloadTime = 4.3;
		autoReload = true;
		canLock = false;
		magazines[] =
        {
            50Rnd_120mm_Mo_shells
            /*
            10Rnd_120mm_Mo_smoke,
            10Rnd_120mm_Mo_guided,
            10Rnd_120mm_Mo_LG,
            10Rnd_120mm_Mo_mine,
            10Rnd_120mm_Mo_Cluster
            */
        };
		modes[] =
        {
            Single1,
            Single2,
            Single3,
            Single4,
            Single5,
            Burst1,
            Burst2,
            Burst3,
            Burst4,
            Burst5
        };
		class GunParticles
		{
			class Effect1
			{
				effectName = MortarFired;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName = $STR_A3_mortar_120mm_AMOS_Single10;
			sounds[] = {StandardSound};
			class StandardSound
			{
                SoundSetShot[] =
                {
                    Mortar82mm_Shot_SoundSet,
                    Mortar82mm_Tail_SoundSet
                };
			};
			reloadTime = 5;
			artilleryDispersion = 3.2;
			artilleryCharge = 0.19;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class Single2: Single1
		{
			displayName = $STR_A3_mortar_120mm_AMOS_Single20;
			artilleryCharge = 0.3;
		};
		class Single3: Single1
		{
			displayName = $STR_A3_mortar_120mm_AMOS_Single30;
			artilleryCharge = 0.48;
		};
		class Single4: Single1
		{
			displayName = $STR_A3_mortar_120mm_AMOS_Single40;
			artilleryCharge = 0.8;
		};
		class Single5: Single1
		{
			displayName = $STR_A3_mortar_120mm_AMOS_Single50;
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = false;
			displayName = $STR_A3_mortar_120mm_AMOS_Burst10;
			burst = 6;
			sounds[] = {StandardSound};
			class StandardSound
			{
                SoundSetShot[] =
                {
                    Mortar82mm_Shot_SoundSet,
                    Mortar82mm_Tail_SoundSet
                };
			};
			soundBurst = false;
			reloadTime = 4;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 5.3;
			artilleryCharge = 0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer = false;
			displayName = $STR_A3_mortar_120mm_AMOS_Burst20;
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.3;
		};
		class Burst3: Burst1
		{
			showToPlayer = false;
			displayName = $STR_A3_mortar_120mm_AMOS_Burst30;
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.48;
		};
		class Burst4: Burst1
		{
			showToPlayer = false;
			displayName = $STR_A3_mortar_120mm_AMOS_Burst40;
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.8;
		};
		class Burst5: Burst1
		{
			showToPlayer = false;
			displayName = $STR_A3_mortar_120mm_AMOS_Burst50;
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
	};

};