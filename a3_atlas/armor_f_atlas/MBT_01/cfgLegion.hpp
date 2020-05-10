class B_L_MBT_01_cannon_F: B_MBT_01_cannon_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.02},
            {wheel_kolol1,0.02},
            {wheel_podkolol1,0.54},
            {wheel_kolp1,0.02},
            {wheel_kolop1,0.02},
            {wheel_podkolop1,0.54},
            {wheel_koll2,0.02},
            {wheel_kolp2,0.02},
            {wheel_kolol2,0.02},
            {wheel_kolol3,0.02},
            {wheel_kolol4,0.02},
            {wheel_kolol5,0.02},
            {wheel_kolol6,0.02},
            {wheel_kolop2,0.02},
            {wheel_kolop3,0.02},
            {wheel_kolop4,0.02},
            {wheel_kolop5,0.02},
            {wheel_kolop6,0.02},
            {wheel_podkolol2,0.57},
            {wheel_podkolol3,0.6},
            {wheel_podkolol4,0.63},
            {wheel_podkolol5,0.66},
            {wheel_podkolol6,0.69},
            {wheel_podkolop2,0.56},
            {wheel_podkolop3,0.59},
            {wheel_podkolop4,0.64},
            {wheel_podkolop5,0.67},
            {wheel_podkolop6,0.68},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0.17},
            {hatchcommander,0},
            {recoil,0},
            {obsturret,0},
            {obsgun,0},
            {maingunoptics,0.17},
            {maingunint,0.17},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_driver_damage,0},
            {hatchdriver,0},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {dmg_com_halo_unhide,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {track_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_turret_damage_hull,0},
            {lights_turret2,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_comturret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {cannon_muzzle_flash,0},
            {zaslehrot_cannon,618},
            {cannon_ready_light,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0}
        };
		hide[] = 
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.465;
		verticalOffsetWorld = -0.22;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_MBT_01_cannon_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_L_F;
	crew = B_L_Crew_F;
	typicalCargo[] = {B_L_Soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_sgg,2);
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_body_olive_CO.paa",
        "\A3\Armor_F_Exp\MBT_01\Data\MBT_01_tow_olive_CO.paa",
        "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};
class B_L_MBT_01_TUSK_F: B_MBT_01_TUSK_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {wheel_koll1,0.02},
            {wheel_kolol1,0.02},
            {wheel_podkolol1,0.54},
            {wheel_kolp1,0.02},
            {wheel_kolop1,0.02},
            {wheel_podkolop1,0.54},
            {wheel_koll2,0.02},
            {wheel_kolp2,0.02},
            {wheel_kolol2,0.02},
            {wheel_kolol3,0.02},
            {wheel_kolol4,0.02},
            {wheel_kolol5,0.02},
            {wheel_kolol6,0.02},
            {wheel_kolop2,0.02},
            {wheel_kolop3,0.02},
            {wheel_kolop4,0.02},
            {wheel_kolop5,0.02},
            {wheel_kolop6,0.02},
            {wheel_podkolol2,0.57},
            {wheel_podkolol3,0.6},
            {wheel_podkolol4,0.63},
            {wheel_podkolol5,0.66},
            {wheel_podkolol6,0.69},
            {wheel_podkolop2,0.56},
            {wheel_podkolop3,0.59},
            {wheel_podkolop4,0.64},
            {wheel_podkolop5,0.67},
            {wheel_podkolop6,0.68},
            {podkolol1_hide_damage,0},
            {podkolol2_hide_damage,0},
            {podkolol3_hide_damage,0},
            {podkolol4_hide_damage,0},
            {podkolol5_hide_damage,0},
            {podkolol6_hide_damage,0},
            {podkolol7_hide_damage,0},
            {podkolol8_hide_damage,0},
            {podkolop1_hide_damage,0},
            {podkolop2_hide_damage,0},
            {podkolop3_hide_damage,0},
            {podkolop4_hide_damage,0},
            {podkolop5_hide_damage,0},
            {podkolop6_hide_damage,0},
            {podkolop7_hide_damage,0},
            {podkolop8_hide_damage,0},
            {damagevez,0},
            {mainturret,0},
            {maingun,0.17},
            {hatchcommander,0},
            {recoil,0},
            {obsturret,0},
            {obsgun,0},
            {maingunoptics,0.17},
            {maingunint,0.17},
            {damagevezvelitele,0},
            {poklop_commander_damage,0},
            {poklop_driver_damage,0},
            {hatchdriver,0},
            {plates_1_y,0},
            {plates_2_y,0},
            {plates_1_x,0},
            {plates_2_x,0},
            {plates_1_bank,0},
            {plates_2_bank,0},
            {drivingwheel,0},
            {indicatorspeed_mfd_driver,0},
            {indicatorrpm,0},
            {indicatorrpm_mfd_driver,0},
            {lights_driver,0},
            {lights_driver_off,0},
            {lights_turret,0},
            {dmg_com_halo_unhide,0},
            {engine_damage_indicator,0},
            {main_gun_damage_indicator,0},
            {track_damage_indicator,0},
            {pedal_thrust,0},
            {pedal_brake,1},
            {indicatortempwater_mfd_driver,0},
            {indicatorfuel_mfd_driver,1},
            {indicator_hull_direction_mfd_driver,0},
            {indicator_main_turret_mfd_driver,0},
            {indicator_hull_direction_mfd_com,0},
            {indicator_main_turret_mfd_com,0},
            {indicator_main_turret_onscreen_com,0},
            {indicator_com_turret_mfd_com,0},
            {indicator_com_turret_onscreen_com,0},
            {indicator_com_turret_counter_mfd_com,0},
            {indicator_hull_direction_mfd_gunner,0},
            {indicator_main_turret_mfd_gunner,0},
            {indicator_com_smoke_1,1},
            {indicator_com_smoke_2,1},
            {indicator_damage_engine,0},
            {indicator_damage_fuel,0},
            {indicator_damage_tracks,0},
            {indicator_turret_damage_hull,0},
            {lights_turret2,0},
            {indicator_turret_damage_engine,0},
            {indicator_turret_damage_fuel,0},
            {indicator_turret_damage_main_gun,0},
            {indicator_turret_damage_track,0},
            {indicator_turret_damage_turret,0},
            {indicator_turret_damage_comturret,0},
            {hide_mfd_and_pip_screen_driver,1},
            {hide_mfd_and_pip_screen_gunner,1},
            {hide_mfd_elements,1},
            {cannon_muzzle_flash,0},
            {zaslehrot_cannon,618},
            {cannon_ready_light,0},
            {turret_control_x,0},
            {turret_control_y,0},
            {com_turret_control_x,0},
            {com_turret_control_y,0},
            {indicator_com_turret_mfd_gunner,0},
            {indicator_com_turret_counter_mfd_gunner,0},
            {indicator_com_turret_mfd_driver,0},
            {indicator_com_turret_counter_mfd_driver,0}
        };
		hide[] = 
        {
            clan,
            zasleh,
            zasleh_1,
            light_l,
            light_r,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.465;
		verticalOffsetWorld = -0.22;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_MBT_01_TUSK_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_L_F;
	crew = B_L_Crew_F;
	typicalCargo[] = {B_L_Soldier_F};
	class TransportWeapons
	{
		weap_xx(arifle_MSBS65_black_F,2);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellBlue,2);
		mag_xx(30Rnd_65x39_caseless_msbs_mag,4);
	};
	class TransportBackpacks
	{
		bag_xx(B_AssaultPack_sgg,2);
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Armor_F_Exp\MBT_01\Data\MBT_01_body_olive_CO.paa",
        "\A3\Armor_F_Exp\MBT_01\Data\MBT_01_tow_olive_CO.paa",
        "\A3\Armor_F_Exp\MBT_01\Data\MBT_addons_olive_CO.paa",
        "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};