class CfgVehicles
{
    /* Definitions */
    #include "\A3_Aegis\macros_statics.hpp"

	/* Inheritance Tree */
	class StaticWeapon;
	class StaticGrenadeLauncher: StaticWeapon
	{
		class Turrets;
	};
	class GMG_TriPod: StaticGrenadeLauncher
	{
		class Turrets: Turrets
		{
			class MainTurret;
        };
    };
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class GMG_02_base_F: GMG_TriPod
	{
        author = $STR_A3_A_AveryTheKitty;
        scope = private;
		displayName = $STR_A3_A_CfgVehicles_GMG_02_base_F0;
		class Armory
		{
			description = $STR_A3_A_CfgVehicles_GMG_02_base_F_Armory0;
		};
		editorSubcategory = EdSubcat_Turrets;
		model = "\A3_Aegis\Static_F_Aegis\GMG_02\GMG_02_F.p3d";
		picture = "\A3_Aegis\Static_F_Aegis\GMG_02\Data\UI\icon_GMG_02_CA.paa";
		UiPicture = "\A3_Aegis\Static_F_Aegis\GMG_02\Data\UI\icon_GMG_02_CA.paa";
		fireDustEffect = emptyEffect;
		cost = 200000;
		explosionEffect = "";
		getInAction = "";
		getOutAction = "";
		hiddenSelections[] =
        {
            camo_1,
            camo_2
        };
		hiddenSelectionsTextures[] =
        {
            "\A3_Aegis\Static_F_Aegis\GMG_02\Data\GMG_Tripod_CO.paa",
            "\A3_Aegis\Static_F_Aegis\GMG_02\Data\GMG_Static_CO.paa"
        };
		class Damage
		{
			tex[] = {};
			mat[] =
            {
                "A3_Aegis\Static_F_Aegis\GMG_02\Data\GMG_Tripod.rvmat",
                "A3_Aegis\Static_F_Aegis\GMG_02\Data\GMG_Tripod_damage.rvmat",
                "A3\Static_F\HMG_02\Data\static_destroyed.rvmat",
                
                "A3_Aegis\Static_F_Aegis\GMG_02\Data\GMG_Static.rvmat",
                "A3_Aegis\Static_F_Aegis\GMG_02\Data\GMG_Static_damage.rvmat",
                "A3\Static_F\HMG_02\Data\static_destroyed.rvmat",
            };
		};
		minTotalDamageThreshold = 0.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = true;
				discreteDistance[] =
                {
                    100,
                    200,
                    300,
                    400,
                    600,
                    800,
                    1000,
                    1200,
                    1500
                };
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\optics_empty.p3d";
				turretInfoType = RscOptics_Offroad_01;
				minElev = -5;
				maxElev = 15;
				minTurn = -20;
				maxTurn = 20;
				initTurn = 0;
				weapons[] = {GMG_40mm_Mounted};
				magazines[] = {mag_4(32Rnd_40mm_G_belt)};
				gunnerAction = gunner_hmg02_low;
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				LODOpticsIn = VIEW_PILOT;
				LODOpticsOut = VIEW_PILOT;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 1.25;
					visionMode[] = {Normal};
				};
				gunnerRightHandAnimName = OtocHlaven_shake;
				gunnerLeftHandAnimName = OtocHlaven_shake;
				ejectDeadGunner = true;
			};
		};
		class AnimationSources
		{
			class Hide_Rail
			{
				displayName = $STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Rail0;
				useSource = true;
				source = user;
				animPeriod = 0.01;
				initPhase = true;
			};
			class muzzle_source
			{
				source = reload;
				weapon = GMG_40mm_Mounted;
			};
			class muzzle_source_rot
			{
				source = ammorandom;
				weapon = GMG_40mm_Mounted;
			};
			class ReloadAnim
			{
				source = reload;
				weapon = GMG_40mm_Mounted;
			};
			class ReloadMagazine
			{
				source = reloadmagazine;
				weapon = GMG_40mm_Mounted;
			};
			class Revolving
			{
				source = revolving;
				weapon = GMG_40mm_Mounted;
			};
		};
		soundGetOut[] = {"\A3\Sounds_F\dummysound",db-60,1,5};
		soundGetIn[] = {"\A3\Sounds_F\dummysound",db-70,1,5};
    };
	class GMG_02_high_base_F: GMG_02_base_F
	{
        author = $STR_A3_A_AveryTheKitty;
		model = "\A3_Aegis\Static_F_Aegis\GMG_02\GMG_02_high_F.p3d";
		picture = "\A3_Aegis\Static_F_Aegis\GMG_02\Data\UI\icon_GMG_02_high_CA.paa";
		UiPicture = "\A3_Aegis\Static_F_Aegis\GMG_02\Data\UI\icon_GMG_02_high_CA.paa";
		displayName = $STR_A3_A_CfgVehicles_GMG_02_high_base_F0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				minElev = -8;
				maxElev = 35;
				gunnerAction = gunner_hmg02_standing;
				gunnerLeftLegAnimName = leg_left;
				gunnerRightLegAnimName = leg_right;
				gunnergetInAction = "";
				gunnergetOutAction = "";
			};
		};
    };

	/* Factions */
    #include "cfgBLUFOR.hpp"    // BAF
    #include "cfgIndep.hpp"     // AAF
    #include "cfgEAF.hpp"       // LDF
};