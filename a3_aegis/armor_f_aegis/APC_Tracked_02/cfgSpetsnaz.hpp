class O_R_APC_Tracked_02_base_F: APC_Tracked_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Crew_F;
	typicalCargo[] = {O_R_Soldier_F};
	class Components;
};
class O_R_APC_Tracked_02_cannon_F: O_R_APC_Tracked_02_base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Tracked_02_cannon_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_APC_Tracked_02_0;
	picture = "\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\APC_Tracked_02_cannon_CA.paa";
	Icon = "\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\map_APC_Tracked_02_cannon_CA.paa";
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
                mag_2(140Rnd_30mm_MP_shells_Tracer_Green),
                mag_2(60Rnd_30mm_APFSDS_shells_Tracer_Green),
                mag_10(200Rnd_762x51_Belt_Green),
                mag_2(2Rnd_GAT_missiles_O)
            };
		};
	};
	threat[] = {1,0.8,0.3};
	transportSoldier = 8;
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
		class showTracks
		{
            displayName = $STR_A3_animationsources_showtrackshull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            mass = -50;
		};
		class showCamonetHull
		{
            displayName = $STR_A3_animationsources_showcamonethull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            forceAnimatePhase = true;
            forceAnimate[] = {showTracks,true};
            mass = -50;
		};
		class showBags
		{
            displayName = $STR_A3_animationsources_showbagshull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            mass = -50;
		};
		class showSLATHull
		{
            displayName = $STR_A3_animationsources_showslathull0;
            author = $STR_A3_A_AveryTheKitty;
            source = user;
            animPeriod = 0.001;
            initPhase = false;
            mass = -50;
		};
	};
	animationList[] =
	{
		showTracks,0.5,
		showCamonetHull,0,
		showBags,0.67,
		showSLATHull,0
	};
	selectionFireAnim = "";
	class TextureSources
	{
		class Green
		{
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
		class Green_02
		{
            displayName = $STR_A3_A_TEXTURESOURCES_GREENJUNGLE0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Jungle_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
		class Green_03
		{
            displayName = $STR_A3_A_TEXTURESOURCES_GREENDESERT0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Desert_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
	};
	textureList[] =
	{
		Green,1,
		Green_02,0,
		Green_03,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\RCWS30_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_545_F,2);
		weap_xx(arifle_RPK12_F,2);
		weap_xx(launch_RPG32_green_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_black_Mag_F,12);
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
		mag_xx(Titan_AA,2);
	};
};
class O_R_APC_Tracked_02_AA_F: O_R_APC_Tracked_02_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_APC_Tracked_02_AA_F.jpg";
	class MFD
	{
		class MFD_Driver_Heading
		{
            topLeft = MFD_1_TL;
            topRight = MFD_1_TR;
            bottomLeft = MFD_1_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            font = LCD14;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0.61,0.62,0};
                alpha = 1;
                condition = on;
                class Driver_Heading
                {
                    type = text;
                    source = heading;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.5,0},1
                    };
                    right[] =
                    {
                        {1,0},1
                    };
                    down[] =
                    {
                        {0.5,0.81},1
                    };
                };
            };
		};
		class MFD_Driver_Heading_text
		{
            topLeft = MFD_Driver_1_TL;
            topRight = MFD_Driver_1_TR;
            bottomLeft = MFD_Driver_1_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Driver_Heading
                {
                    type = text;
                    source = static;
                    text = "АЗИМУТ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0.02},1
                    };
                    right[] =
                    {
                        {0.7,0.02},1
                    };
                    down[] =
                    {
                        {0.45,0.87},1
                    };
                };
            };
		};
		class MFD_Driver_Heading_second
		{
            topLeft = MFD_Driver_2_TL;
            topRight = MFD_Driver_2_TR;
            bottomLeft = MFD_Driver_2_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Driver_Heading
                {
                    type = text;
                    source = heading;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0},1
                    };
                    right[] =
                    {
                        {0.95,0},1
                    };
                    down[] =
                    {
                        {0.45,0.81},1
                    };
                };
            };
		};
		class MFD_Gunner_AmmoType
		{
            topLeft = MFD_5_TL;
            topRight = MFD_5_TR;
            bottomLeft = MFD_5_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            turret[] = {0};
            enableParallax = false;
            font = LCD14;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0.92,0.01,0};
                alpha = 1;
                condition = 1;
                class Gunner_AmmoType
                {
                    type = text;
                    source = ammoFormat;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.455,0.05},1
                    };
                    right[] =
                    {
                        {1.355,0.05},1
                    };
                    down[] =
                    {
                        {0.455,0.76},1
                    };
                };
            };
		};
		class MFD_Gunner_AmmoIndicator
		{
            topLeft = MFD_3_TL;
            topRight = MFD_3_TR;
            bottomLeft = MFD_3_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = LCD14;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0.92,0.01,0};
                alpha = 1;
                condition = 1;
                class Gunner_Text_1
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 1000;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.5,0},1
                    };
                    right[] =
                    {
                        {1.3,0},1
                    };
                    down[] =
                    {
                        {0.5,0.3},1
                    };
                };
                class Gunner_Text_2
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 1001;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.5,0.3},1
                    };
                    right[] =
                    {
                        {1.3,0.3},1
                    };
                    down[] =
                    {
                        {0.5,0.6},1
                    };
                };
                class Gunner_Text_3
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 1002;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.5,0.6},1
                    };
                    right[] =
                    {
                        {1.3,0.6},1
                    };
                    down[] =
                    {
                        {0.5,0.9},1
                    };
                };
            };
		};
		class MFD_Gunner_Ready_To_Fire
		{
            topLeft = MFD_gun_cli_TL;
            topRight = MFD_gun_cli_TR;
            bottomLeft = MFD_gun_cli_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0,0,0};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0,0,0};
                alpha = 1;
                condition = 1;
                class Top_text
                {
                    type = text;
                    source = static;
                    text = "К СТРЕЛЬБЕ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0.05},1
                    };
                    right[] =
                    {
                        {0.67,0.05},1
                    };
                    down[] =
                    {
                        {0.45,0.55},1
                    };
                };
                class Bottom_text
                {
                    type = text;
                    source = static;
                    text = "ГОТОВ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.465,0.45},1
                    };
                    right[] =
                    {
                        {0.685,0.45},1
                    };
                    down[] =
                    {
                        {0.465,0.95},1
                    };
                };
            };
		};
		class MFD_Gunner_Display
		{
            topLeft = MFD_gun_TL;
            topRight = MFD_gun_TR;
            bottomLeft = MFD_gun_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Main_armament
                {
                    type = text;
                    source = static;
                    text = "ГЛАВНОЕ ОРУДИЕ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,-0.005},1
                    };
                    right[] =
                    {
                        {0.075,-0.005},1
                    };
                    down[] =
                    {
                        {0.015,0.073},1
                    };
                };
                class Main_armament_ammo_type
                {
                    type = text;
                    source = static;
                    text = "ТИП АМУНИЦИИ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.55,-0.0045},1
                    };
                    right[] =
                    {
                        {0.61,-0.0045},1
                    };
                    down[] =
                    {
                        {0.55,0.073},1
                    };
                };
                class Lased_distance_elevation
                {
                    type = text;
                    source = static;
                    text = "ДАЛЬНОСТЬ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.84},1
                    };
                    right[] =
                    {
                        {0.075,0.84},1
                    };
                    down[] =
                    {
                        {0.015,0.918},1
                    };
                };
                class Azimut
                {
                    type = text;
                    source = static;
                    text = "АЗИМУТ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.915},1
                    };
                    right[] =
                    {
                        {0.075,0.915},1
                    };
                    down[] =
                    {
                        {0.015,0.993},1
                    };
                };
                class Damage
                {
                    type = text;
                    source = static;
                    text = "ПОВРЕЖДЕНИЯ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.39},1
                    };
                    right[] =
                    {
                        {0.075,0.39},1
                    };
                    down[] =
                    {
                        {0.015,0.468},1
                    };
                };
                class Heading
                {
                    type = text;
                    source = "[x]turretworld";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 0.2;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.915},1
                    };
                    right[] =
                    {
                        {0.4,0.915},1
                    };
                    down[] =
                    {
                        {0.34,0.993},1
                    };
                };
                class Lased_Range
                {
                    type = text;
                    source = laserDist;
                    sourceScale = 1;
                    sourceLength = 4;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.84},1
                    };
                    right[] =
                    {
                        {0.4,0.84},1
                    };
                    down[] =
                    {
                        {0.34,0.918},1
                    };
                };
            };
		};
		class MFD_Gunner_Main_Armament_Ammo_Type
		{
            topLeft = MFD_gun_TL;
            topRight = MFD_gun_TR;
            bottomLeft = MFD_gun_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            turret[] = {0};
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Gunner_AmmoType
                {
                    type = text;
                    source = ammoFormat;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.56,0.065},1
                    };
                    right[] =
                    {
                        {0.65,0.065},1
                    };
                    down[] =
                    {
                        {0.56,0.185},1
                    };
                };
            };
		};
		class MFD_Gunner_AmmoIndicator_Main_Armament
		{
            topLeft = MFD_gun_TL;
            topRight = MFD_gun_TR;
            bottomLeft = MFD_gun_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Main_Armament_Ammo_Type_1
                {
                    type = text;
                    source = static;
                    text = "35-мм ОФЗТ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.065},1
                    };
                    right[] =
                    {
                        {0.075,0.065},1
                    };
                    down[] =
                    {
                        {0.015,0.143},1
                    };
                };
                class Gunner_Text_1
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 1000;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.395,0.065},1
                    };
                    right[] =
                    {
                        {0.455,0.065},1
                    };
                    down[] =
                    {
                        {0.395,0.143},1
                    };
                };
                class Main_Armament_Ammo_Type_2
                {
                    type = text;
                    source = static;
                    text = "З-В РАКЕТА";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.125},1
                    };
                    right[] =
                    {
                        {0.075,0.125},1
                    };
                    down[] =
                    {
                        {0.015,0.203},1
                    };
                };
                class Gunner_Text_2
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 1001;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.395,0.125},1
                    };
                    right[] =
                    {
                        {0.455,0.125},1
                    };
                    down[] =
                    {
                        {0.395,0.203},1
                    };
                };
            };
		};
		class MFD_Commander_Ready_To_Fire
		{
            topLeft = MFD_com_cli_TL;
            topRight = MFD_com_cli_TR;
            bottomLeft = MFD_com_cli_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0,0,0};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0,0,0};
                alpha = 1;
                condition = 1;
                class Top_text
                {
                    type = text;
                    source = static;
                    text = "К СТРЕЛЬБЕ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.54,0},1
                    };
                    right[] =
                    {
                        {0.72,0},1
                    };
                    down[] =
                    {
                        {0.54,0.35},1
                    };
                };
                class Bottom_text
                {
                    type = text;
                    source = static;
                    text = "ГОТОВ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.55,0.3},1
                    };
                    right[] =
                    {
                        {0.73,0.3},1
                    };
                    down[] =
                    {
                        {0.55,0.65},1
                    };
                };
            };
		};
		class MFD_Commander_Main_Display
		{
            topLeft = MFD_com_TL;
            topRight = MFD_com_TR;
            bottomLeft = MFD_com_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Main_armament
                {
                    type = text;
                    source = static;
                    text = "ГЛАВНОЕ ОРУДИЕ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,-0.0059},1
                    };
                    right[] =
                    {
                        {0.075,-0.0059},1
                    };
                    down[] =
                    {
                        {0.015,0.0739},1
                    };
                };
                class Lased_distance_elevation
                {
                    type = text;
                    source = static;
                    text = "ДАЛЬНОСТЬ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.84},1
                    };
                    right[] =
                    {
                        {0.075,0.84},1
                    };
                    down[] =
                    {
                        {0.015,0.918},1
                    };
                };
                class Azimut
                {
                    type = text;
                    source = static;
                    text = "АЗИМУТ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.915},1
                    };
                    right[] =
                    {
                        {0.075,0.915},1
                    };
                    down[] =
                    {
                        {0.015,0.993},1
                    };
                };
                class Heading
                {
                    type = text;
                    source = [x]turretworld;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 0.2;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.915},1
                    };
                    right[] =
                    {
                        {0.4,0.915},1
                    };
                    down[] =
                    {
                        {0.34,0.993},1
                    };
                };
                class Lased_Range
                {
                    type = text;
                    source = laserDist;
                    sourceScale = 1;
                    sourceLength = 4;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.34,0.84},1
                    };
                    right[] =
                    {
                        {0.4,0.84},1
                    };
                    down[] =
                    {
                        {0.34,0.918},1
                    };
                };
            };
		};
		class MFD_Commander_Smoke_Indicator
		{
            topLeft = MFD_com_smoke_TL;
            topRight = MFD_com_smoke_TR;
            bottomLeft = MFD_com_smoke_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0,0,0};
            alpha = 0.5;
            enableParallax = false;
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {0,0,0};
                alpha = 1;
                condition = 1;
                class Top_text
                {
                    type = text;
                    source = static;
                    text = "ДЫМОВАЯ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0.05},1
                    };
                    right[] =
                    {
                        {0.7,0.05},1
                    };
                    down[] =
                    {
                        {0.45,0.55},1
                    };
                };
                class Bottom_text
                {
                    type = text;
                    source = static;
                    text = "ЗАВЕСА";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.45,0.38},1
                    };
                    right[] =
                    {
                        {0.7,0.38},1
                    };
                    down[] =
                    {
                        {0.45,0.88},1
                    };
                };
            };
		};
		class MFD_Commander_AmmoIndicator_Main_Armament
		{
            topLeft = MFD_com_TL;
            topRight = MFD_com_TR;
            bottomLeft = MFD_com_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {0.84,0.86,0.84};
            alpha = 0.5;
            enableParallax = false;
            turret[] = {0};
            font = RobotoCondensedLight;
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Main_Armament_Ammo_Type_1
                {
                    type = text;
                    source = static;
                    text = "35-мм ОФЗТ";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.0898},1
                    };
                    right[] =
                    {
                        {0.075,0.0898},1
                    };
                    down[] =
                    {
                        {0.015,0.158},1
                    };
                };
                class Commander_Text_1
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 1000;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.39,0.08},1
                    };
                    right[] =
                    {
                        {0.45,0.08},1
                    };
                    down[] =
                    {
                        {0.39,0.158},1
                    };
                };
                class Main_Armament_Ammo_Type_2
                {
                    type = text;
                    source = static;
                    text = "З-В РАКЕТА";
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 1;
                    align = right;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.015,0.15},1
                    };
                    right[] =
                    {
                        {0.075,0.15},1
                    };
                    down[] =
                    {
                        {0.015,0.228},1
                    };
                };
                class Commander_Text_2
                {
                    type = text;
                    source = ammo;
                    sourceScale = 1;
                    sourceLength = 2;
                    sourceIndex = 1;
                    scale = 1;
                    align = left;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.39,0.15},1
                    };
                    right[] =
                    {
                        {0.45,0.15},1
                    };
                    down[] =
                    {
                        {0.39,0.228},1
                    };
                };
            };
		};
		class MFD_Commander_Second_Display
		{
            topLeft = MFD_7_TL;
            topRight = MFD_7_TR;
            bottomLeft = MFD_7_BL;
            borderLeft = 0;
            borderRight = 0;
            borderTop = 0;
            borderBottom = 0;
            color[] = {1,1,1};
            alpha = 0.5;
            enableParallax = false;
            font = EtelkaMonospacePro;
            turret[] = {0,0};
            class material
            {
                ambient[] = {1,1,1,1};
                diffuse[] = {1,1,1,1};
                emissive[] = {1000,1000,1000,1};
            };
            class Bones{};
            class Draw
            {
                color[] = {1,1,1};
                alpha = 1;
                condition = 1;
                class Crosshair
                {
                    type = line;
                    width = 3;
                    points[] =
                    {
                        {
                        {0.5,0.42341301},1
                        },
                        {
                        {0.5,0.34642899},1
                        },
                        {},
                        {
                        {0.5,0.57738101},1
                        },
                        {
                        {0.5,0.654365},1
                        },
                        {},
                        {
                        {0.55,0.50039703},1
                        },
                        {
                        {0.60,0.50039703},1
                        },
                        {},
                        {
                        {0.4,0.50039703},1
                        },
                        {
                        {0.45,0.50039703},1
                        },
                        {},
                        {
                        {0.3,0.34642899},1
                        },
                        {
                        {0.3,0.26944399},1
                        },
                        {},
                        {
                        {0.3,0.26944399},1
                        },
                        {
                        {0.35,0.26944399},1
                        },
                        {},
                        {
                        {0.7,0.34642899},1
                        },
                        {
                        {0.7,0.26944399},1
                        },
                        {},
                        {
                        {0.65,0.26944399},1
                        },
                        {
                        {0.7,0.26944399},1
                        },
                        {},
                        {
                        {0.7,0.654365},1
                        },
                        {
                        {0.7,0.73134899},1
                        },
                        {},
                        {
                        {0.65,0.73134899},1
                        },
                        {
                        {0.7,0.73134899},1
                        },
                        {},
                        {
                        {0.3,0.654365},1
                        },
                        {
                        {0.3,0.73134899},1
                        },
                        {},
                        {
                        {0.3,0.73134899},1
                        },
                        {
                        {0.35,0.73134899},1
                        },
                        {}
                    };
                };
                class Heading
                {
                    type = text;
                    source = [x]turretworld;
                    sourceScale = 1;
                    sourceLength = 3;
                    scale = 0.2;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.838,0.25},1
                    };
                    right[] =
                    {
                        {0.88,0.25},1
                    };
                    down[] =
                    {
                        {0.838,0.33},1
                    };
                };
                class Lased_Range_Background
                {
                    color[] = {0,0,0};
                    class Background
                    {
                        type = polygon;
                        points[] =
                        {
                            {
                                {
                                {0.43,0.81},1
                                },
                                {
                                {0.57,0.81},1
                                },
                                {
                                {0.57,0.87},1
                                },
                                {
                                {0.43,0.87},1
                                }
                            }
                        };
                    };
                };
                class Lased_Range
                {
                    type = text;
                    source = laserDist;
                    sourceScale = 1;
                    sourceLength = 4;
                    scale = 1;
                    align = center;
                    refreshRate = 0.1;
                    pos[] =
                    {
                        {0.494,0.8},1
                    };
                    right[] =
                    {
                        {0.544,0.8},1
                    };
                    down[] =
                    {
                        {0.494,0.88},1
                    };
                };
            };
		};
	};
	scope = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_APC_Tracked_02_AA_F0;
	model = "\A3\Armor_F_Beta\APC_Tracked_02\APC_Tracked_02_aa_F.p3d";
	editorSubcategory = EdSubcat_AAs;
	picture = "\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\APC_Tracked_02_AA_CA.paa";
	Icon = "\A3\Armor_F_Beta\APC_Tracked_02\Data\UI\Map_APC_Tracked_02_AA_CA.paa";
	cost = 2000000;
	artilleryScanner = 0;
	irScanGround = 0;
	irScanRangeMax = 10000;
	irScanRangeMin = 2000;
	irScanToEyeFactor = 2;
	radarType = 2;
	reportRemoteTargets = true;
	receiveRemoteTargets = true;
	memoryPointLMissile = Rocket_1;
	memoryPointRMissile = Rocket_2;
	class RenderTargets
	{
		class commander_display
		{
            renderTarget = rendertarget3;
            class CameraView1
            {
                pointPosition = commanderview;
                pointDirection = commanderview_dir;
                renderVisionMode = 0;
                renderQuality = 2;
                fov = 0.305731;
                turret[] = {0,0};
            };
            BBoxes[] =
            {
                PIP_COM_TL,
                PIP_COM_TR,
                PIP_COM_BL,
                PIP_COM_BR
            };
		};
		class driver_display
		{
            renderTarget = rendertarget1;
            class CameraView1
            {
                pointPosition = PIP1_pos;
                pointDirection = PIP1_dir;
                renderVisionMode = 0;
                renderQuality = 2;
                fov = 0.8;
                turret[] = {-1};
            };
            BBoxes[] =
            {
                PIP_DRV_TL,
                PIP_DRV_TR,
                PIP_DRV_BL,
                PIP_DRV_BR
            };
		};
	};
	class AnimationSources: AnimationSources
	{
		class Missiles_revolving
		{
            source = revolving;
            weapon = missiles_titan_AA;
		};
		class Missiles_reloadMagazine: Missiles_revolving
		{
		    source = reloadMagazine;
		};
		class muzzle_rot
		{
            source = ammorandom;
            weapon = autocannon_35mm;
		};
		class showTracks
		{
            displayName = $STR_A3_animationsources_showtrackshull0;
            author = $STR_A3_Bohemia_Interactive;
            source = user;
            animPeriod = 0.001;
            initPhase = 0;
            mass = -50;
		};
		class showCamonetHull
		{
            displayName = $STR_A3_animationsources_showcamonethull0;
            author = $STR_A3_Bohemia_Interactive;
            source = user;
            animPeriod = 0.001;
            initPhase = 0;
            forceAnimatePhase = 1;
            forceAnimate[] = {showTracks,1};
            mass = -50;
		};
		class showCamonetTurret
		{
            displayName = $STR_A3_animationsources_showcamonetturret0;
            author = $STR_A3_Bohemia_Interactive;
            source = user;
            animPeriod = 0.001;
            initPhase = 0;
            mass = -50;
		};
		class showSLATHull
		{
            displayName = $STR_A3_animationsources_showslathull0;
            author = $STR_A3_Bohemia_Interactive;
            source = user;
            animPeriod = 0.001;
            initPhase = 0;
            mass = -50;
		};
	};
	animationList[] =
	{
		showTracks,0,
		showCamonetHull,0,
		showCamonetTurret,0,
		showSLATHull,0
	};
	class Components: Components
	{
		class SensorsManagerComponent
		{
            class Components
            {
                class ActiveRadarSensorComponent: SensorTemplateActiveRadar
                {
                    class AirTarget
                    {
                        minRange = 9000;
                        maxRange = 9000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    class GroundTarget
                    {
                        minRange = 6000;
                        maxRange = 6000;
                        objectDistanceLimitCoef = -1;
                        viewDistanceLimitCoef = -1;
                    };
                    typeRecognitionDistance = 6000;
                    angleRangeHorizontal = 360;
                    angleRangeVertical = 100;
                    aimDown = -45;
                    maxTrackableSpeed = 694.44397;
                };
                class DataLinkSensorComponent: SensorTemplateDataLink{};
            };
		};
	};
	class compartmentsLights
	{
		class Comp1
		{
            class Light1
            {
                color[] = {10,15,17};
                ambient[] = {0,0,0};
                intensity = 1;
                size = 0;
                useFlare = false;
                flareSize = 0;
                flareMaxDistance = 0;
                dayLight = false;
                blinking = 0;
                class Attenuation
                {
                    start = 0;
                    constant = 0;
                    linear = 1;
                    quadratic = 70;
                    hardLimitStart = 0.15;
                    hardLimitEnd = 1.15;
                };
                point = light_interior1;
            };
            class Light2: Light1
            {
                point = light_interior2;
                color[] = {10,15,17};
                ambient[] = {0,0,0};
                intensity = 1;
            };
            class Light3: Light1
            {
                point = light_interior3;
                color[] = {10,15,17};
                ambient[] = {0,0,0};
                intensity = 1;
            };
            class Light4: Light1
            {
                point = light_interior4;
                color[] = {10,15,17};
                ambient[] = {0,0,0};
                intensity = 0.5;
            };
            class Light5: Light1
            {
                point = light_interior5;
                color[] = {10,15,17};
                ambient[] = {0,0,0};
                intensity = 0.5;
            };
		};
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
            memoryPointGun[] =
            {
                "usti hlavne 1",
                "usti hlavne 2"
            };
            minElev = -10;
            maxElev = 80;
            initElev = 5;
            weapons[] =
            {
                autocannon_35mm,
                missiles_titan_AA
            };
            magazines[] =
            {
                500Rnd_35mm_AA_shells_Tracer_Green,
                mag_2(4Rnd_Titan_long_missiles_O)
            };
            soundServo[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",db-9,0.8,30};
            soundServoVertical[] = {"\A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",db-9,0.8,30};
            selectionFireAnim = zasleh;
            forceHideGunner = false;
            gunnerAction = Gunner_APC_tracked_02_aa_F_out;
            gunnerInAction = Gunner_APC_tracked_02_aa_F_in;
            isPersonTurret = false;
            gunnerRightHandAnimName = turret_control;
            gunnerLeftHandAnimName = turret_control;
            usePip = 2;
            class HitPoints: HitPoints
            {
                class HitTurret
                {
                    armor = 0.8;
                    material = -1;
                    armorComponent = hit_main_turret;
                    name = hit_main_turret_point;
                    visual = vez;
                    passThrough = 0;
                    minimalHit = 0.1;
                    explosionShielding = 0.2;
                    radius = 0.25;
                    isTurret = true;
                };
                class HitGun
                {
                    armor = 0.6;
                    material = -1;
                    armorComponent = hit_main_gun;
                    name = hit_main_gun_point;
                    visual = zbran;
                    passThrough = 0;
                    minimalHit = 0.1;
                    explosionShielding = 0.4;
                    radius = 0.2;
                    isGun = true;
                };
            };
            class OpticsIn: Optics_Gunner_AAA_01
            {
                class Wide: Wide{};
                class Medium: Medium{};
                class Narrow: Narrow{};
            };
            turretInfoType = RscOptics_APC_Tracked_01_gunner;
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
                {
                    class Components: components
                    {
                        class SensorDisplay
                        {
                            componentType = SensorsDisplayComponent;
                            range[] = {16000,8000,4000,2000};
                            resource = RscCustomInfoSensors;
                        };
                    };
                };
                class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
                {
                    defaultDisplay = SensorDisplay;
                    class Components: components
                    {
                        class SensorDisplay
                        {
                            componentType = SensorsDisplayComponent;
                            range[] = {16000,8000,4000,2000};
                            resource = RscCustomInfoSensors;
                        };
                    };
                };
            };
            class Turrets: Turrets
            {
                class CommanderOptics: CommanderOptics
                {
                    forceHideGunner = false;
                    gunnerAction = Commander_APC_tracked_02_aa_F_out;
                    gunnerInAction = Commander_APC_tracked_02_aa_F_in;
                    isPersonTurret = false;
                    usePip = 2;
                    turretFollowFreeLook = 2;
                    gunnerRightHandAnimName = com_turret_control;
                    gunnerLeftHandAnimName = "";
                    class HitPoints: HitPoints
                    {
                        class HitTurret
                        {
                            armor = 0.1;
                            material = -1;
                            armorComponent = hit_com_turret;
                            name = hit_com_turret_point;
                            visual = vezVelitele;
                            passThrough = 0;
                            minimalHit = 0.1;
                            explosionShielding = 1;
                            radius = 0.15;
                            isTurret = true;
                        };
                        class HitGun
                        {
                            armor = 0.1;
                            material = -1;
                            armorComponent = hit_com_gun;
                            name = hit_com_gun_point;
                            visual = zbranVelitele;
                            passThrough = 0;
                            minimalHit = 0.1;
                            explosionShielding = 1;
                            radius = 0.15;
                            isGun = true;
                        };
                    };
                    class Components
                    {
                        class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
                        {
                            class Components: components
                            {
                                class SensorDisplay
                                {
                                    componentType = SensorsDisplayComponent;
                                    range[] = {8000,4000,2000,16000};
                                    resource = RscCustomInfoSensors;
                                };
                            };
                        };
                        class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
                        {
                            defaultDisplay = SensorDisplay;
                            class Components: components
                            {
                                class SensorDisplay
                                {
                                    componentType = SensorsDisplayComponent;
                                    range[] = {8000,4000,2000,16000};
                                    resource = RscCustomInfoSensors;
                                };
                            };
                        };
                    };
                };
            };
		};
	};
	threat[] = {1,0.6,1};
	smokeLauncherOnTurret = true;
	class TextureSources
	{
		class Green
		{
            displayName = $STR_A3_TEXTURESOURCES_GREEN0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
		class Green_02
		{
            displayName = $STR_A3_A_TEXTURESOURCES_GREENJUNGLE0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Jungle_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
		class Green_03
		{
            displayName = $STR_A3_A_TEXTURESOURCES_GREENDESERT0;
            author = $STR_A3_A_AveryTheKitty;
            textures[] =
            {
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Desert_CO.paa",
                "\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
            };
            factions[] = {OPF_R_F};
		};
	};
	textureList[] =
	{
		Green,1,
		Green_02,0,
		Green_03,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_01_AA_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_ext_02_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\APC_Tracked_02\Data\APC_Tracked_02_AA_tower_RUS_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Stripe_Green_CO.paa",
		"\A3_Aegis\Armor_F_Aegis\Data\cage_RUS_CO.paa"
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_545_F,2);
		weap_xx(arifle_RPK12_F,2);
		weap_xx(launch_RPG32_green_F,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_545x39_black_Mag_F,12);
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
		mag_xx(Titan_AA,2);
	};
};