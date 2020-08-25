class B_APC_Tracked_01_cannon_F: B_APC_Tracked_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
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
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_APC_Tracked_01_cannon_F.jpg";
	weaponsGroup1 = WEAPONGROUP_MGUNS;
	weaponsGroup2 = WEAPONGROUP_CANNONS + WEAPONGROUP_ROCKETS;
	weaponsGroup3 = WEAPONGROUP_AAMISSILES + WEAPONGROUP_ATMISSILES + WEAPONGROUP_MISSILES;
	weaponsGroup4 = WEAPONGROUP_BOMBS + WEAPONGROUP_SPECIAL;
    scope = protected;
	scopeCurator = private;
	displayName = STR_A3_A_CfgVehicles_B_APC_Tracked_01_cannon_F0;
	//model = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\APC_Tracked_01_cannon_F.p3d";
	picture = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\UI\APC_Tracked_01_cannon_CA.paa";
	icon = "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\UI\map_APC_Tracked_01_cannon_CA.paa";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            weapons[] =
            {
                autocannon_30mm_CTWS,
                LMG_coax_ext,
                missiles_titan
            };
            magazines[] =
            {
                mag_2(140Rnd_30mm_MP_shells_Tracer_Red),
                mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Red),
                mag_10(200Rnd_762x51_Belt_Red),
                mag_2(2Rnd_GAT_missiles)
            };
            gunnerGetInAction = GetInAMV_cargo;
            gunnerGetOutAction = GetOutLow;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",db-8,1,30};
            soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",db-8,1,30};
            LODTurnedIn = 1100;
		};
		class CommanderOptics: CommanderOptics
		{
		    LODTurnedIn = 1000;
		};
	};
	transportSoldier = 8;
	class TextureSources
	{
		class Sand
		{
            displayName = $STR_A3_TextureSources_Sand0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
                "\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
            };
            factions[] = {BLU_F};
		};
		class Olive
		{
            displayName = $STR_A3_TextureSources_Olive0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_olive_CO.paa",
                "\A3\Armor_F_Exp\APC_Tracked_01\Data\MBT_01_body_olive_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_olive_CO.paa",
                "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
            factions[] =
            {
                BLU_T_F,
                BLU_W_F
            };
		};
	};
	class AnimationSources: AnimationSources
	{
		class muzzle_rot
		{
            source = ammorandom;
            weapon = autocannon_30mm_CTWS;
		};
		class muzzle_hide
		{
            source = reload;
            weapon = autocannon_30mm_CTWS;
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
		class showCamonetPlates1
		{
            source = user;
            animPeriod = 0.001;
            initPhase = false;
		};
		class showCamonetPlates2
		{
            source = user;
            animPeriod = 0.001;
            initPhase = false;
		};
		class showCamonetHull
		{
            displayName = $STR_A3_AnimationSources_showCamonetHull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            forceAnimatePhase = true;
            forceAnimate[] =
            {
                showCamonetPlates1,1,
                showCamonetPlates2,1
            };
            mass = -50;
		};
		class showBags
		{
            displayName = $STR_A3_AnimationSources_showBagsHull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            mass = -50;
		};
	};
	animationList[] =
	{
		showCamonetHull,0,
		showCamonetPlates1,0,
		showCamonetPlates2,0,
		showBags,0.67
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
		"\A3\Armor_F_Beta\APC_Tracked_01\Data\MBT_01_body_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_01\Data\RCWS30_CO.paa",
		"\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
	};
};