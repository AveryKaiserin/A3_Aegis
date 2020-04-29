class O_T_Plane_Fighter_02_ghex_F: Plane_Fighter_02_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {muzzleflashrot,144},
            {left_rotor_rot,0},
            {right_rotor_rot,0},
            {mfd_dam_hull,0},
            {mfd_dam_caution,0},
            {mfd_dam_avionics,0},
            {mfd_dam_fuel_l,0},
            {mfd_dam_fuel_r,0},
            {mfd_dam_gear,0},
            {mfd_dam_engine,0},
            {mfd_dam_engine2,0},
            {mfd_dam_laileron,0},
            {mfd_dam_raileron,0},
            {mfd_dam_lcrudder,0},
            {mfd_dam_rrudder,0},
            {mfd_dam_lcelevator,0},
            {mfd_dam_relevator,0},
            {engine_damage,0},
            {engine2_damage,0},
            {mfd_on,0},
            {mfd_masterarm,0},
            {mfd_brake_lever,0},
            {mfd_gear_lever,0},
            {mfd_systems_gear,0},
            {mfd_systems_brake,0},
            {mfd_flaps_up_1,0},
            {mfd_systems_flaps_1,0},
            {mfd_systems_flaps_2,0},
            {mfd_compass_rotate,0},
            {mfd_fuel_level,0.08},
            {mfd_fuel_low,0.08},
            {mfd_horizon_ball_rotate_1,0},
            {mfd_horizon_ball_horizondive_0_1,0},
            {mfd_horizon_ball_horizondive_1,0},
            {mfd_horizon_ball_horizondive_2_1,0},
            {mfd_vert_speed,0},
            {mfd_throttle_1,0},
            {mfd_throttle_2,0},
            {mfd_rudder,0},
            {mfd_speed,0},
            {mfd_engine_rpm_1,0},
            {mfd_engine_rpm_2,0},
            {left_engine_on,0},
            {right_engine_on,0},
            {light_wingtip_red,0},
            {light_wingtip_green,0},
            {collision_lights_white_blinking,0},
            {pilotcamerarotx,0.26},
            {pilotcameraroty,0},
            {canopy_stage_1,0},
            {canopy_stage_2,0},
            {canopy_strut_stage_1_left,0},
            {canopy_strut_stage_1_right,0},
            {crew_ladder,0},
            {weapons_bay_door_c_left,0},
            {weapons_bay_door_c_right,0},
            {weapons_bay_door_left_1,0},
            {weapons_bay_door_left_2,0},
            {weapons_bay_door_right_1,0},
            {weapons_bay_door_right_2,0},
            {front_wheel,0},
            {left_wheel,0},
            {right_wheel,0},
            {front_gear_suspension,0},
            {front_gear_suspension_rot,0},
            {front_gear,0},
            {front_gear_piston,0},
            {front_hydraulic_bar_1_1,0},
            {front_stearing,0},
            {left_gear_suspension,0},
            {left_gear,0},
            {left_gear_hydraulics,0},
            {left_hydraulic_bar_1,0},
            {left_hydraulic_bar_2,0},
            {gear_rear_left_piston,0},
            {gear_rear_left_piston_1,0},
            {right_gear_suspension,0},
            {right_gear,0},
            {right_gear_hydraulics,0},
            {right_hydraulic_bar_1,0},
            {right_hydraulic_bar_2,0},
            {gear_rear_right_piston,0},
            {gear_rear_right_piston_1,0},
            {front_door_1,0},
            {front_door_2,0},
            {front_door_3,0},
            {front_door_4,0},
            {front_door_piston_1,0},
            {front_door_piston_2,0},
            {left_gear_door_1,0},
            {left_gear_door_2,0},
            {right_gear_door_1,0},
            {right_gear_door_2,0},
            {left_flap,0},
            {right_flap,0},
            {left_rudder,0},
            {left_rudder_brake,0},
            {right_rudder,0},
            {right_rudder_brake,0},
            {engine_left_rudder,0},
            {engine_right_rudder,0},
            {aileron_left,0},
            {aileron_right,0},
            {left_elevon,0},
            {right_elevon,0},
            {left_elevator,0},
            {right_elevator,0},
            {engine_left_elevator,0},
            {engine_left_elevon,0},
            {engine_right_elevator,0},
            {engine_right_elevon,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {throttle,0},
            {left_engine_nozzle_1,0},
            {left_engine_nozzle_2,0},
            {left_engine_nozzle_3,0},
            {left_engine_nozzle_4,0},
            {left_engine_nozzle_5,0},
            {left_engine_nozzle_6,0},
            {left_engine_nozzle_7,0},
            {left_engine_nozzle_8,0},
            {left_engine_nozzle_9,0},
            {left_engine_nozzle_10,0},
            {left_engine_nozzle_11,0},
            {right_engine_nozzle_1,0},
            {right_engine_nozzle_2,0},
            {right_engine_nozzle_3,0},
            {right_engine_nozzle_4,0},
            {right_engine_nozzle_5,0},
            {right_engine_nozzle_6,0},
            {right_engine_nozzle_7,0},
            {right_engine_nozzle_8,0},
            {right_engine_nozzle_9,0},
            {right_engine_nozzle_10,0},
            {right_engine_nozzle_11,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            "zadni svetlo",
            backlighting,
            poskozeni
        };
		verticalOffset = 2.346;
		verticalOffsetWorld = -0.127;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Fighter_02_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
	typicalCargo[] = {O_T_Fighter_Pilot_F};
	textureList[] =
	{
		CamoGreyHex,0,
		CamoGreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_T_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_T_Plane_Fighter_02_Stealth_ghex_F: Plane_Fighter_02_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {muzzleflashrot,144},
            {left_rotor_rot,0},
            {right_rotor_rot,0},
            {mfd_dam_hull,0},
            {mfd_dam_caution,0},
            {mfd_dam_avionics,0},
            {mfd_dam_fuel_l,0},
            {mfd_dam_fuel_r,0},
            {mfd_dam_gear,0},
            {mfd_dam_engine,0},
            {mfd_dam_engine2,0},
            {mfd_dam_laileron,0},
            {mfd_dam_raileron,0},
            {mfd_dam_lcrudder,0},
            {mfd_dam_rrudder,0},
            {mfd_dam_lcelevator,0},
            {mfd_dam_relevator,0},
            {engine_damage,0},
            {engine2_damage,0},
            {mfd_on,0},
            {mfd_masterarm,0},
            {mfd_brake_lever,0},
            {mfd_gear_lever,0},
            {mfd_systems_gear,0},
            {mfd_systems_brake,0},
            {mfd_flaps_up_1,0},
            {mfd_systems_flaps_1,0},
            {mfd_systems_flaps_2,0},
            {mfd_compass_rotate,0},
            {mfd_fuel_level,0.08},
            {mfd_fuel_low,0.08},
            {mfd_horizon_ball_rotate_1,0},
            {mfd_horizon_ball_horizondive_0_1,0},
            {mfd_horizon_ball_horizondive_1,0},
            {mfd_horizon_ball_horizondive_2_1,0},
            {mfd_vert_speed,0},
            {mfd_throttle_1,0},
            {mfd_throttle_2,0},
            {mfd_rudder,0},
            {mfd_speed,0},
            {mfd_engine_rpm_1,0},
            {mfd_engine_rpm_2,0},
            {left_engine_on,0},
            {right_engine_on,0},
            {light_wingtip_red,0},
            {light_wingtip_green,0},
            {collision_lights_white_blinking,0},
            {pilotcamerarotx,0.26},
            {pilotcameraroty,0},
            {canopy_stage_1,0},
            {canopy_stage_2,0},
            {canopy_strut_stage_1_left,0},
            {canopy_strut_stage_1_right,0},
            {crew_ladder,0},
            {weapons_bay_door_c_left,0},
            {weapons_bay_door_c_right,0},
            {weapons_bay_door_left_1,0},
            {weapons_bay_door_left_2,0},
            {weapons_bay_door_right_1,0},
            {weapons_bay_door_right_2,0},
            {front_wheel,0},
            {left_wheel,0},
            {right_wheel,0},
            {front_gear_suspension,0},
            {front_gear_suspension_rot,0},
            {front_gear,0},
            {front_gear_piston,0},
            {front_hydraulic_bar_1_1,0},
            {front_stearing,0},
            {left_gear_suspension,0},
            {left_gear,0},
            {left_gear_hydraulics,0},
            {left_hydraulic_bar_1,0},
            {left_hydraulic_bar_2,0},
            {gear_rear_left_piston,0},
            {gear_rear_left_piston_1,0},
            {right_gear_suspension,0},
            {right_gear,0},
            {right_gear_hydraulics,0},
            {right_hydraulic_bar_1,0},
            {right_hydraulic_bar_2,0},
            {gear_rear_right_piston,0},
            {gear_rear_right_piston_1,0},
            {front_door_1,0},
            {front_door_2,0},
            {front_door_3,0},
            {front_door_4,0},
            {front_door_piston_1,0},
            {front_door_piston_2,0},
            {left_gear_door_1,0},
            {left_gear_door_2,0},
            {right_gear_door_1,0},
            {right_gear_door_2,0},
            {left_flap,0},
            {right_flap,0},
            {left_rudder,0},
            {left_rudder_brake,0},
            {right_rudder,0},
            {right_rudder_brake,0},
            {engine_left_rudder,0},
            {engine_right_rudder,0},
            {aileron_left,0},
            {aileron_right,0},
            {left_elevon,0},
            {right_elevon,0},
            {left_elevator,0},
            {right_elevator,0},
            {engine_left_elevator,0},
            {engine_left_elevon,0},
            {engine_right_elevator,0},
            {engine_right_elevon,0},
            {stick_pilot_bank,0},
            {stick_pilot_dive,0},
            {throttle,0},
            {left_engine_nozzle_1,0},
            {left_engine_nozzle_2,0},
            {left_engine_nozzle_3,0},
            {left_engine_nozzle_4,0},
            {left_engine_nozzle_5,0},
            {left_engine_nozzle_6,0},
            {left_engine_nozzle_7,0},
            {left_engine_nozzle_8,0},
            {left_engine_nozzle_9,0},
            {left_engine_nozzle_10,0},
            {left_engine_nozzle_11,0},
            {right_engine_nozzle_1,0},
            {right_engine_nozzle_2,0},
            {right_engine_nozzle_3,0},
            {right_engine_nozzle_4,0},
            {right_engine_nozzle_5,0},
            {right_engine_nozzle_6,0},
            {right_engine_nozzle_7,0},
            {right_engine_nozzle_8,0},
            {right_engine_nozzle_9,0},
            {right_engine_nozzle_10,0},
            {right_engine_nozzle_11,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            "zadni svetlo",
            backlighting,
            poskozeni
        };
		verticalOffset = 2.346;
		verticalOffsetWorld = -0.127;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_Plane_Fighter_02_Stealth_ghex_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
	typicalCargo[] = {O_T_Fighter_Pilot_F};
	textureList[] =
	{
		CamoGreyHex,0,
		CamoGreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	radarTargetSize = 0.6;
	class AnimationSources: AnimationSources
	{
		class pylon_1_hide: pylon_1_hide
		{
		    initPhase = 1;
		};
		class pylon_2_hide: pylon_2_hide
		{
		    initPhase = 1;
		};
		class pylon_3_hide: pylon_3_hide
		{
		    initPhase = 1;
		};
		class pylon_4_hide: pylon_4_hide
		{
		    initPhase = 1;
		};
		class pylon_5_hide: pylon_5_hide
		{
		    initPhase = 1;
		};
		class pylon_6_hide: pylon_6_hide
		{
		    initPhase = 1;
		};
	};
	class Components: Components
	{
		class TransportPylonsComponent
		{
            UIPicture = "\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_CA.paa";
            class pylons
            {
                class pylonDummy1
                {
                    attachment = "";
                    UIposition[] = {10,10};
                };
                class pylonDummy2: pylonDummy1{};
                class pylonDummy3: pylonDummy1{};
                class pylonDummy4: pylonDummy1{};
                class pylonDummy5: pylonDummy1{};
                class pylonDummy6: pylonDummy1{};
                class pylonBayRight1
                {
                    hardpoints[] = {O_R73};
                    priority = 7;
                    attachment = PylonMissile_Missile_AA_R73_x1;
                    maxweight = 300;
                    UIposition[] = {0.45,0.15};
                    bay = 2;
                };
                class pylonBayLeft1: pylonBayRight1
                {
                    UIposition[] = {0.2,0.15};
                    mirroredMissilePos = 7;
                    bay = 1;
                };
                class pylonBayRight2
                {
                    hardpoints[] = {O_R77};
                    priority = 5;
                    attachment = PylonMissile_Missile_AA_R77_x1;
                    maxweight = 750;
                    UIposition[] = {0.33,0.3};
                    bay = 4;
                };
                class pylonBayLeft2: pylonBayRight2
                {
                    UIposition[] = {0.33,0.35};
                    mirroredMissilePos = 9;
                    bay = 3;
                };
                class pylonBayCenter1
                {
                    hardpoints[] = {O_R77_INT};
                    priority = 2;
                    attachment = PylonMissile_Missile_AA_R77_INT_x1;
                    maxweight = 750;
                    UIposition[] = {0.33,0.45};
                    bay = 5;
                };
                class pylonBayCenter2: pylonBayCenter1
                {
                    UIposition[] = {0.33,0.5};
                    mirroredMissilePos = 11;
                };
                class pylonBayCenter3
                {
                    hardpoints[] =
                    {
                        O_R77_INT,
                        O_KH25_INT,
                        O_KAB250_BOMB
                    };
                    priority = 1;
                    attachment = PylonMissile_Bomb_KAB250_x1;
                    maxweight = 1200;
                    UIposition[] = {0.33,0.55};
                    bay = 5;
                };
            };
            class Bays
            {
                class BayLeft1
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 0;
                    autoCloseWhenEmptyDelay = 1;
                };
                class BayRight1
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 0;
                    autoCloseWhenEmptyDelay = 1;
                };
                class BayLeft2
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 1;
                    autoCloseWhenEmptyDelay = 2;
                };
                class BayRight2
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 1;
                    autoCloseWhenEmptyDelay = 1;
                };
                class BayCenter1
                {
                    bayOpenTime = 0.5;
                    openBayWhenWeaponSelected = 1;
                    autoCloseWhenEmptyDelay = 2;
                };
            };
            class Presets
            {
                class Empty
                {
                    displayName = $STR_empty;
                    attachment[] = {};
                };
                class Default
                {
                    displayName = $STR_vehicle_default;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_Bomb_KAB250_x1
                    };
                };
                class AA
                {
                    displayName = $STR_A3_Cfgmagazines_titan_aa_dns;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_Missile_AA_R77_INT_x1
                    };
                };
                class CAS
                {
                    displayName = $STR_A3_CAS_PRESET_DISPLAYNAME;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_Missile_AGM_KH25_INT_x1
                    };
                };
                class Cluster
                {
                    displayName = $STR_A3_CfgVehicles_Pylons_Presets_Cluster0;
                    attachment[] =
                    {
                        "",
                        "",
                        "",
                        "",
                        "",
                        "",
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R73_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_Missile_AA_R77_INT_x1,
                        PylonMissile_1Rnd_BombCluster_02_cap_F
                    };
                };
            };
		};
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_T_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_T_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F
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
	faction = OPF_T_F;
	crew = O_T_Fighter_Pilot_F;
};