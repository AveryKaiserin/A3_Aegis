class O_Ejection_Seat_Plane_Fighter_03_F: Ejection_Seat_Plane_Fighter_03_base_F
{
	class SimpleObject
	{
		eden = false;
		animate[] = {};
		hide[] =
		{
            zasleh,
            "zadni svetlo",
            "brzdove svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
		};
		verticalOffset = 0.002;
		verticalOffsetWorld = 0;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	side = TEast;
	faction = OPF_F;
	crew = O_Fighter_Pilot_F;
};
class O_Plane_Fighter_03_dynamicLoadout_F: Plane_Fighter_03_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {rotor,0},
            {flapl,0},
            {flapr,0},
            {airbrake1,0},
            {airbrake2,0},
            {aileronl,0},
            {aileronr,0},
            {elevatorl,0},
            {elevatorr,0},
            {rudder,0},
            {rudder_small,0},
            {canopy1,0},
            {canopy2,0},
            {gear_1,0},
            {gear_1_steering,0},
            {gear_1_steering2,0},
            {gear_1_hatch_1,0},
            {gear_1_hatch_2,0},
            {gear_1_damper,0.1},
            {gear_1_stabil_1,0.1},
            {gear_2,0},
            {gear_2_hatch,0},
            {gear_2_damper,0.27},
            {gear_2_stabil,0.27},
            {gear_3,0},
            {gear_3_hatch,0},
            {gear_3_damper,0.24},
            {gear_3_stabil,0.24},
            {ladder_1,0},
            {ladder,0},
            {wheel_1,0},
            {wheel_2,0},
            {wheel_3,0},
            {indicatorrpm,0},
            {indicatorrpm1,0},
            {indicatorrpm2,0},
            {indicatorrpm3,0},
            {indicatorrpm4,0},
            {indicatorrpm5,0},
            {indicatorrpm6,0},
            {indicatorrpm7,0},
            {indicatorrpm8,0},
            {indicatorcompass1,0},
            {indicatorcompass2,0},
            {horizontbank,0},
            {horizontdive,0.01},
            {horizon2bank,0},
            {watchhour,0.18},
            {watchminute,0.14},
            {watchsecond,0.53},
            {indicatorclimbplus_1,0},
            {indicatorclimbplus_2,0},
            {indicatorclimbplus_3,0},
            {indicatorclimbminus_1,0},
            {indicatorclimbminus_2,0},
            {indicatorclimbminus_3,0},
            {indicatorspeed_1_5,0},
            {indicatorspeed_2_5,0},
            {indicatorspeed_3_5,0},
            {indicatorspeed_4_5,0},
            {indicatorspeed_5_5,0},
            {indicatorfuel,1},
            {monitors_on,0},
            {avionics_damage,0},
            {indicatoraltbaro,7.45},
            {zaslehrot,580},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {collisionlight_white_blinking,0},
            {pilotcamera_h,0},
            {pilotcamera_v,0.09},
            {throttle,0}
        };
		hide[] =
        {
            zasleh,
            light_l,
            light_r,
            "zadni svetlo",
            clan,
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.447;
		verticalOffsetWorld = 0.025;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Plane_Fighter_03_dynamicLoadout_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_CfgVehicles_Plane_Fighter_03_base_F0;
	side = TEast;
	faction = OPF_F;
	crew = O_Fighter_Pilot_F;
	typicalCargo[] = {O_Fighter_Pilot_F};
	cost = 3000000;
	availableForSupportTypes[] = {CAS_Bombing};
	hiddenSelectionsTextures[] =
	{
		"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_brownhex_CO.paa",
		"\A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_brownhex_CO.paa"
	};
	textureList[] =
	{
		Hex,1,
		Grey,0
	};
	class AnimationSources: AnimationSources
	{
		class HideWeapons
		{
            source = user;
            animPeriod = 1e-006;
            initPhase = true;
		};
	};
	weapons[] = {CMFlareLauncher};
	magazines[] = {120Rnd_CMFlare_Chaff_Magazine};
	class Components: Components
	{
		class TransportPylonsComponent
		{
            UIPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
            class pylons
            {
                class pylons1
                {
                    hardpoints[] =
                    {
                        O_MISSILE_PYLON,
                        O_R73
                    };
                    attachment = PylonRack_1Rnd_Missile_AA_03_F;
                    priority = 5;
                    maxweight = 200;
                    UIposition[] = {0.35,0.0};
                };
                class pylons2: pylons1
                {
                    priority = 4;
                    attachment = PylonRack_20Rnd_Rocket_03_HE_F;
                    maxweight = 320;
                    UIposition[] = {0.345,0.05};
                };
                class pylons3: pylons1
                {
                    hardpoints[] =
                    {
                        "",
                        O_MISSILE_PYLON,
                        O_BOMB_PYLON,
                        SCALPEL_1RND,
                        UNI_SCALPEL,
                        O_R73,
                        O_R77
                    };
                    priority = 3;
                    attachment = PylonRack_1Rnd_Missile_AGM_01_F;
                    maxweight = 400;
                    UIposition[] = {0.34,0.1};
                };
                class pylons4: pylons1
                {
                    priority = 2;
                    attachment = PylonWeapon_300Rnd_20mm_shells;
                    maxweight = 500;
                    UIposition[] = {0.3,0.2};
                    hardpoints[] = {B_A143_BUZZARD_CENTER_PYLON};
                };
                class pylons5: pylons3
                {
                    UIposition[] = {0.33,0.3};
                    mirroredMissilePos = 3;
                };
                class pylons6: pylons2
                {
                    UIposition[] = {0.33,0.35};
                    mirroredMissilePos = 2;
                };
                class pylons7: pylons1
                {
                    UIposition[] = {0.34,0.4};
                    mirroredMissilePos = 1;
                };
            };
            class presets
            {
                class empty
                {
                    displayName = $STR_empty;
                    attachment[] = {};
                };
                class default
                {
                    displayName = $STR_vehicle_default;
                    attachment[] =
                    {
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonRack_20Rnd_Rocket_03_HE_F,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonWeapon_300Rnd_20mm_shells,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_20Rnd_Rocket_03_HE_F,
                        PylonRack_1Rnd_Missile_AA_03_F
                    };
                };
                class AT
                {
                    displayName = $STR_A3_Cfgmagazines_titan_at_dns;
                    attachment[] =
                    {
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonMissile_1Rnd_LG_scalpel,
                        PylonMissile_1Rnd_Bomb_03_F,
                        PylonWeapon_300Rnd_20mm_shells,
                        PylonMissile_1Rnd_Bomb_03_F,
                        PylonMissile_1Rnd_LG_scalpel,
                        PylonRack_1Rnd_Missile_AA_03_F
                    };
                };
                class AA
                {
                    displayName = $STR_A3_Cfgmagazines_titan_aa_dns;
                    attachment[] =
                    {
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonWeapon_300Rnd_20mm_shells,
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonRack_1Rnd_Missile_AA_03_F
                    };
                };
                class CAS
                {
                    displayName = $STR_A3_SHOWCASE_FIXEDWINGS_BIS_TSKAAF_WP;
                    attachment[] =
                    {
                        PylonMissile_1Rnd_LG_scalpel,
                        PylonRack_20Rnd_Rocket_03_HE_F,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonWeapon_300Rnd_20mm_shells,
                        PylonRack_1Rnd_Missile_AGM_01_F,
                        PylonRack_20Rnd_Rocket_03_HE_F,
                        PylonMissile_1Rnd_LG_scalpel
                    };
                };
                class Cluster
                {
                    displayName = $STR_A3_CfgVehicles_Pylons_Presets_Cluster0;
                    attachment[] =
                    {
                        PylonRack_1Rnd_Missile_AA_03_F,
                        PylonRack_20Rnd_Rocket_03_HE_F,
                        PylonMissile_1Rnd_BombCluster_02_cap_F,
                        PylonWeapon_300Rnd_20mm_shells,
                        PylonMissile_1Rnd_BombCluster_02_cap_F,
                        PylonRack_20Rnd_Rocket_03_HE_F,
                        PylonRack_1Rnd_Missile_AA_03_F
                    };
                };
            };
		};
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_Ejection_Seat_Plane_Fighter_03_F;
	};
};