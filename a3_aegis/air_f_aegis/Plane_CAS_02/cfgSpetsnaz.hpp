class O_R_Ejection_Seat_Plane_CAS_02_F: Ejection_Seat_Plane_CAS_02_base_F
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
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
};
class O_R_Plane_CAS_02_dynamicLoadout_F: Plane_CAS_02_dynamicLoadout_base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {airintake_1_front_rot,0.07},
            {airintake_2_front_rot,0.07},
            {airintake_1_top_1_rot,0.07},
            {airintake_2_top_1_rot,0.07},
            {airintake_1_top_2_move,0.07},
            {airintake_2_top_2_move,0.07},
            {rotor_1_1_rot,0},
            {rotor_1_2_rot,0},
            {rotor_2_1_rot,0},
            {rotor_2_2_rot,0},
            {aileron_1_rot_1,0},
            {aileron_2_rot_1,0},
            {airbrake_rot_1,0},
            {airbrake_piston_1_move_1,0},
            {airbrake_piston_2_rot_1,0},
            {elevator_1_rot,0},
            {elevator_2_rot,0},
            {flap_1_rot,0},
            {flap_2_rot,0},
            {slat_1_1_rot,0},
            {slat_1_2_rot,0},
            {slat_2_1_rot,0},
            {slat_2_2_rot,0},
            {rudder_rot,0},
            {wheel_1_rot,0},
            {wheel_2_rot,0},
            {wheel_3_rot,0},
            {gear_1_rot,0},
            {gear_1_hatch_1_rot,0},
            {gear_1_hatch_2_rot,0},
            {gear_1_hatch_3_rot,0},
            {gear_1_hatch_4_rot,0},
            {gear_1_hatch_5_rot,0},
            {gear_1_steering_rot,0},
            {gear_1_damper_move,0},
            {gear_1_stabil_1_rot,0},
            {gear_1_stabil_2_rot,0},
            {gear_2_rot,0},
            {gear_2_hatch_1_rot,0},
            {gear_2_hatch_2_rot,0},
            {gear_2_hatch_3_rot,0},
            {gear_2_piston_1_rot,0},
            {gear_2_stabil_1_rot,0},
            {gear_2_stabil_2_rot,0},
            {gear_2_damper_move,0},
            {gear_3_rot,0},
            {gear_3_hatch_1_rot,0},
            {gear_3_hatch_2_rot,0},
            {gear_3_hatch_3_rot,0},
            {gear_3_piston_1_rot,0},
            {gear_3_stabil_1_rot,0},
            {gear_3_stabil_2_rot,0},
            {gear_3_damper_move,0},
            {canopy_rot,0},
            {ladder_hatch_l_rot,0},
            {ladder_hatch_r_rot,0},
            {display_off_hide,0},
            {avionics_damage,0},
            {display_cannon_rot,1},
            {display_cannon_rot_1,0},
            {display_cannon_rot_2,0},
            {display_missile_aa_1_rot,1},
            {display_missile_aa_1_rot_1,0},
            {display_missile_aa_1_rot_2,0},
            {display_missile_aa_2_rot,1},
            {display_missile_aa_2_rot_1,0},
            {display_missile_aa_2_rot_2,0},
            {display_missile_agm_2_1_rot,1},
            {display_missile_agm_2_1_rot_1,0},
            {display_missile_agm_2_1_rot_2,0},
            {display_missile_agm_1_1_rot,1},
            {display_missile_agm_1_1_rot_1,0},
            {display_missile_agm_1_1_rot_2,0},
            {display_missile_agm_2_2_rot,1},
            {display_missile_agm_2_2_rot_1,0},
            {display_missile_agm_2_2_rot_2,0},
            {display_missile_agm_1_2_rot,1},
            {display_missile_agm_1_2_rot_1,0},
            {display_missile_agm_1_2_rot_2,0},
            {display_rocketpod_2_rot,1},
            {display_rocketpod_2_rot_1,0},
            {display_rocketpod_2_rot_2,0},
            {display_rocketpod_1_rot,1},
            {display_rocketpod_1_rot_1,0},
            {display_rocketpod_1_rot_2,0},
            {display_bomb_1_rot,1},
            {display_bomb_1_rot_1,0},
            {display_bomb_1_rot_2,0},
            {display_bomb_2_rot,1},
            {display_bomb_2_rot_1,0},
            {display_bomb_2_rot_2,0},
            {display_cannon_slider_move,1},
            {display_rocketpod_1_slider_move,1},
            {display_rocketpod_2_slider_move,1},
            {display_horizon_rot_1,-0.03},
            {display_horizon_rot_2,0},
            {display_speed_rot,0},
            {display_compass_rot,0},
            {display_altitude_large_rot,7.98},
            {display_altitude_small_rot,7.98},
            {display_climb_rot,0},
            {display_engine_1_rot,0},
            {display_engine_2_rot,0},
            {display_engine_1_slider_move,0},
            {display_engine_2_slider_move,0},
            {display_gear_down_move,0},
            {display_gear_up_move,0},
            {controlstick_pitch_rot,0},
            {controlstick_roll_rot,0},
            {compass_rot,0},
            {cannon_muzzleflash_rot,878},
            {positionlights,0},
            {collisionlight_red_blinking,0},
            {pilotcamera_h,0},
            {pilotcamera_v,0.26},
            {unhidemfd,1}
        };
		hide[] =
        {
            clan,
            cannon_muzzleflash,
            gear_2_light_1_hide,
            gear_2_light_2_hide,
            gear_3_light_1_hide,
            gear_3_light_2_hide,
            gear_1_light_1_hide,
            gear_1_light_2_hide,
            "zadni svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 2.872;
		verticalOffsetWorld = -0.108;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_CAS_02_dynamicLoadout_F.jpg";
	scope = public;
	displayName = $STR_A3_CfgVehicles_O_Plane_02_F0;
	model = "\A3\Air_F_EPC\Plane_CAS_02\Plane_CAS_02_F.p3d";
	icon = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Map_Plane_CAS_02_F.paa";
	picture = "\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_CAS_02_F.paa";
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	availableForSupportTypes[] = {CAS_Bombing};
	textureList[] = {Blue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_blue_CO.paa"
	};
	class MFD
	{
		class AirplaneHUD
		{
			topLeft = "HUD_top_left";
			topRight = "HUD_top_right";
			bottomLeft = "HUD_bottom_left";
			borderLeft = 0;
			borderRight = 0;
			borderTop = 0;
			borderBottom = 0;
			color[] = {0.0,1.0,0.0,0.1};
			enableParallax = 1;
			class Bones
			{
				class PlaneOrientation
				{
					type = "fixed";
					pos[] = {0.5,0.53};
				};
				class ClimbFixed
				{
					type = "fixed";
					pos[] = {0.898,0.7};
				};
				class ClimbRotate
				{
					type = "rotational";
					source = "vspeed";
					sourceScale = 1.0;
					center[] = {0.88,0.7};
					min = -30;
					max = 30;
					minAngle = -90;
					maxAngle = 90;
					aspectRatio = 0.988636;
				};
				class WeaponAim
				{
					type = "vector";
					source = "weapon";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class Velocity
				{
					type = "vector";
					source = "velocity";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class HorizonBankSource
				{
					type = "rotational";
					source = "HorizonBank";
					center[] = {0.5,0.53};
					min = -6.2831;
					max = 6.2831;
					minAngle = -360;
					maxAngle = 360;
				};
				class HorizonBankInverted
				{
					type = "rotational";
					source = "HorizonBank";
					center[] = {0.5,0.53};
					min = -6.2831;
					max = 6.2831;
					minAngle = 360;
					maxAngle = -360;
				};
				class HorizonBankRotFull
				{
					type = "rotational";
					source = "horizonBank";
					center[] = {0,0};
					min = -3.1416;
					max = 3.1416;
					minAngle = -180;
					maxAngle = 180;
					aspectRatio = 1;
				};
				class Level0
				{
					source = "horizonDive";
					type = "linear";
					angle = 0;
					min = -3.4;
					max = 3.4;
					minPos[] = {0.5,4.78};
					maxPos[] = {0.5,-3.72};
				};
				class TerrainBone
				{
					type = "linear";
					source = "altitudeAGL";
					sourceScale = 1.0;
					min = 0;
					max = 200;
					minPos[] = {0.0,0.666};
					maxPos[] = {0.0,0.4};
				};
				class ImpactPoint
				{
					type = "vector";
					source = "ImpactPoint";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class ImpactPointRelative
				{
					type = "vector";
					source = "impactpointweaponRelative";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class Limit0109
				{
					type = "limit";
					limits[] = {0.1,0.1,0.9,0.9};
				};
				class Target
				{
					source = "target";
					type = "vector";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class TargetingPodDir
				{
					source = "pilotcamera";
					type = "vector";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class TargetingPodTarget
				{
					source = "pilotcameratarget";
					type = "vector";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class WPPoint
				{
					type = "vector";
					source = "WPPoint";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class MissileFlightTimeRot1
				{
					type = "rotational";
					source = "MissileFlightTime";
					sourceScale = 1.0;
					center[] = {0,0};
					min = 0;
					max = 0.5;
					minAngle = 0;
					maxAngle = 18;
					aspectRatio = 0.988636;
				};
				class MissileFlightTimeRot2: MissileFlightTimeRot1
				{
					maxAngle = 36;
					max = 1;
				};
				class MissileFlightTimeRot3: MissileFlightTimeRot1
				{
					maxAngle = 54;
					max = 1.5;
				};
				class MissileFlightTimeRot4: MissileFlightTimeRot1
				{
					maxAngle = 72;
					max = 2;
				};
				class MissileFlightTimeRot5: MissileFlightTimeRot1
				{
					maxAngle = 90;
					max = 2.5;
				};
				class MissileFlightTimeRot6: MissileFlightTimeRot1
				{
					maxAngle = 108;
					max = 3;
				};
				class MissileFlightTimeRot7: MissileFlightTimeRot1
				{
					maxAngle = 126;
					max = 3.5;
				};
				class MissileFlightTimeRot8: MissileFlightTimeRot1
				{
					maxAngle = 144;
					max = 4;
				};
				class MissileFlightTimeRot9: MissileFlightTimeRot1
				{
					maxAngle = 162;
					max = 4.5;
				};
				class MissileFlightTimeRot10: MissileFlightTimeRot1
				{
					maxAngle = 180;
					max = 5;
				};
				class MissileFlightTimeRot11: MissileFlightTimeRot1
				{
					maxAngle = 198;
					max = 5.5;
				};
				class MissileFlightTimeRot12: MissileFlightTimeRot1
				{
					maxAngle = 216;
					max = 6;
				};
				class MissileFlightTimeRot13: MissileFlightTimeRot1
				{
					maxAngle = 234;
					max = 6.5;
				};
				class MissileFlightTimeRot14: MissileFlightTimeRot1
				{
					maxAngle = 252;
					max = 7;
				};
				class MissileFlightTimeRot15: MissileFlightTimeRot1
				{
					maxAngle = 270;
					max = 7.5;
				};
				class MissileFlightTimeRot16: MissileFlightTimeRot1
				{
					maxAngle = 288;
					max = 8;
				};
				class MissileFlightTimeRot17: MissileFlightTimeRot1
				{
					maxAngle = 306;
					max = 8.5;
				};
				class Airport1
				{
					type = "vector";
					source = "airportCorner1";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
				};
				class Airport2: Airport1
				{
					source = "airportCorner2";
				};
				class Airport3: Airport1
				{
					source = "airportCorner3";
				};
				class Airport4: Airport1
				{
					source = "airportCorner4";
				};
				class ILS_H
				{
					type = "ils";
					pos0[] = {0.5,0.53};
					pos3[] = {0.764,0.53};
				};
				class ILS_W: ILS_H
				{
					pos3[] = {0.5,0.791};
				};
				class LarAmmoMax
				{
					type = "linear";
					source = "LarAmmoMax";
					sourceScale = 1.0;
					min = 0;
					max = 1;
					minPos[] = {0.0,1.0};
					maxPos[] = {0.0,0.0};
				};
				class LarAmmoMin: LarAmmoMax
				{
					source = "LarAmmoMin";
				};
				class LarTargetDist: LarAmmoMax
				{
					source = "LarTargetDist";
				};
				class LarAmmoMGunMax
				{
					type = "rotational";
					source = "LarAmmoMax";
					sourceScale = 1.0;
					center[] = {0,0};
					min = 0;
					max = 1;
					minAngle = -180;
					maxAngle = 180;
					aspectRatio = 0.988636;
				};
				class LarAmmoMGunMin: LarAmmoMGunMax
				{
					source = "LarAmmoMin";
				};
			};
			class Draw
			{
				alpha = "user3";
				color[] = {"user0","user1","user2"};
				condition = "on";
				class Horizont
				{
					clipTL[] = {0.1,0.28};
					clipBR[] = {0.9,0.8};
					class Dimmed
					{
						class Level00
						{
							type = "line";
							width = 2.0;
							points[] = {{"Level0",{0.24,0},1},{"Level0",{-0.24,0},1},{}};
						};
						class Level2MH5: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.163125},1},{"Level0",{0.228,-0.163125},1},{},{"Level0",{0.224,-0.163125},1},{"Level0",{0.216,-0.163125},1},{},{"Level0",{0.212,-0.163125},1},{"Level0",{0.204,-0.163125},1},{},{"Level0",{0.2,-0.163125},1},{"Level0",{0.192,-0.163125},1},{},{"Level0",{0.188,-0.163125},1},{"Level0",{0.18,-0.163125},1}};
						};
						class Level2MH0: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.054375},1},{"Level0",{0.228,-0.054375},1},{},{"Level0",{0.224,-0.054375},1},{"Level0",{0.216,-0.054375},1},{},{"Level0",{0.212,-0.054375},1},{"Level0",{0.204,-0.054375},1},{},{"Level0",{0.2,-0.054375},1},{"Level0",{0.192,-0.054375},1},{},{"Level0",{0.188,-0.054375},1},{"Level0",{0.18,-0.054375},1}};
						};
						class Level2PH5: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.163125},1},{"Level0",{0.228,0.163125},1},{},{"Level0",{0.224,0.163125},1},{"Level0",{0.216,0.163125},1},{},{"Level0",{0.212,0.163125},1},{"Level0",{0.204,0.163125},1},{},{"Level0",{0.2,0.163125},1},{"Level0",{0.192,0.163125},1},{},{"Level0",{0.188,0.163125},1},{"Level0",{0.18,0.163125},1}};
						};
						class Level2PH0: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.054375},1},{"Level0",{0.228,0.054375},1},{},{"Level0",{0.224,0.054375},1},{"Level0",{0.216,0.054375},1},{},{"Level0",{0.212,0.054375},1},{"Level0",{0.204,0.054375},1},{},{"Level0",{0.2,0.054375},1},{"Level0",{0.192,0.054375},1},{},{"Level0",{0.188,0.054375},1},{"Level0",{0.18,0.054375},1}};
						};
						class Level2M5: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.12875},1},{"Level0",{0.24,-0.10875},1},{"Level0",{0.18,-0.10875},1}};
						};
						class VALM2_1_5
						{
							type = "text";
							source = "static";
							text = 5;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.14475},1};
							right[] = {"Level0",{0.24,-0.14475},1};
							down[] = {"Level0",{0.2,-0.11275},1};
						};
						class Level2P5: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.08875},1},{"Level0",{0.24,0.10875},1},{"Level0",{0.18,0.10875},1}};
						};
						class VALP2_1_5
						{
							type = "text";
							source = "static";
							text = -5;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.07275},1};
							right[] = {"Level0",{0.24,0.07275},1};
							down[] = {"Level0",{0.2,0.10475},1};
						};
						class Level2MH10: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.271875},1},{"Level0",{0.228,-0.271875},1},{},{"Level0",{0.224,-0.271875},1},{"Level0",{0.216,-0.271875},1},{},{"Level0",{0.212,-0.271875},1},{"Level0",{0.204,-0.271875},1},{},{"Level0",{0.2,-0.271875},1},{"Level0",{0.192,-0.271875},1},{},{"Level0",{0.188,-0.271875},1},{"Level0",{0.18,-0.271875},1}};
						};
						class Level2PH10: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.271875},1},{"Level0",{0.228,0.271875},1},{},{"Level0",{0.224,0.271875},1},{"Level0",{0.216,0.271875},1},{},{"Level0",{0.212,0.271875},1},{"Level0",{0.204,0.271875},1},{},{"Level0",{0.2,0.271875},1},{"Level0",{0.192,0.271875},1},{},{"Level0",{0.188,0.271875},1},{"Level0",{0.18,0.271875},1}};
						};
						class Level2M10: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.2375},1},{"Level0",{0.24,-0.2175},1},{"Level0",{0.18,-0.2175},1}};
						};
						class VALM2_1_10
						{
							type = "text";
							source = "static";
							text = 10;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.2535},1};
							right[] = {"Level0",{0.24,-0.2535},1};
							down[] = {"Level0",{0.2,-0.2215},1};
						};
						class Level2P10: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.1975},1},{"Level0",{0.24,0.2175},1},{"Level0",{0.18,0.2175},1}};
						};
						class VALP2_1_10
						{
							type = "text";
							source = "static";
							text = -10;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.1815},1};
							right[] = {"Level0",{0.24,0.1815},1};
							down[] = {"Level0",{0.2,0.2135},1};
						};
						class Level2MH15: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.380625},1},{"Level0",{0.228,-0.380625},1},{},{"Level0",{0.224,-0.380625},1},{"Level0",{0.216,-0.380625},1},{},{"Level0",{0.212,-0.380625},1},{"Level0",{0.204,-0.380625},1},{},{"Level0",{0.2,-0.380625},1},{"Level0",{0.192,-0.380625},1},{},{"Level0",{0.188,-0.380625},1},{"Level0",{0.18,-0.380625},1}};
						};
						class Level2PH15: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.380625},1},{"Level0",{0.228,0.380625},1},{},{"Level0",{0.224,0.380625},1},{"Level0",{0.216,0.380625},1},{},{"Level0",{0.212,0.380625},1},{"Level0",{0.204,0.380625},1},{},{"Level0",{0.2,0.380625},1},{"Level0",{0.192,0.380625},1},{},{"Level0",{0.188,0.380625},1},{"Level0",{0.18,0.380625},1}};
						};
						class Level2M15: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.34625},1},{"Level0",{0.24,-0.32625},1},{"Level0",{0.18,-0.32625},1}};
						};
						class VALM2_1_15
						{
							type = "text";
							source = "static";
							text = 15;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.36225},1};
							right[] = {"Level0",{0.24,-0.36225},1};
							down[] = {"Level0",{0.2,-0.33025},1};
						};
						class Level2P15: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.30625},1},{"Level0",{0.24,0.32625},1},{"Level0",{0.18,0.32625},1}};
						};
						class VALP2_1_15
						{
							type = "text";
							source = "static";
							text = -15;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.29025},1};
							right[] = {"Level0",{0.24,0.29025},1};
							down[] = {"Level0",{0.2,0.32225},1};
						};
						class Level2MH20: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.489375},1},{"Level0",{0.228,-0.489375},1},{},{"Level0",{0.224,-0.489375},1},{"Level0",{0.216,-0.489375},1},{},{"Level0",{0.212,-0.489375},1},{"Level0",{0.204,-0.489375},1},{},{"Level0",{0.2,-0.489375},1},{"Level0",{0.192,-0.489375},1},{},{"Level0",{0.188,-0.489375},1},{"Level0",{0.18,-0.489375},1}};
						};
						class Level2PH20: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.489375},1},{"Level0",{0.228,0.489375},1},{},{"Level0",{0.224,0.489375},1},{"Level0",{0.216,0.489375},1},{},{"Level0",{0.212,0.489375},1},{"Level0",{0.204,0.489375},1},{},{"Level0",{0.2,0.489375},1},{"Level0",{0.192,0.489375},1},{},{"Level0",{0.188,0.489375},1},{"Level0",{0.18,0.489375},1}};
						};
						class Level2M20: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.455},1},{"Level0",{0.24,-0.435},1},{"Level0",{0.18,-0.435},1}};
						};
						class VALM2_1_20
						{
							type = "text";
							source = "static";
							text = 20;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.471},1};
							right[] = {"Level0",{0.24,-0.471},1};
							down[] = {"Level0",{0.2,-0.439},1};
						};
						class Level2P20: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.415},1},{"Level0",{0.24,0.435},1},{"Level0",{0.18,0.435},1}};
						};
						class VALP2_1_20
						{
							type = "text";
							source = "static";
							text = -20;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.399},1};
							right[] = {"Level0",{0.24,0.399},1};
							down[] = {"Level0",{0.2,0.431},1};
						};
						class Level2MH25: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.598125},1},{"Level0",{0.228,-0.598125},1},{},{"Level0",{0.224,-0.598125},1},{"Level0",{0.216,-0.598125},1},{},{"Level0",{0.212,-0.598125},1},{"Level0",{0.204,-0.598125},1},{},{"Level0",{0.2,-0.598125},1},{"Level0",{0.192,-0.598125},1},{},{"Level0",{0.188,-0.598125},1},{"Level0",{0.18,-0.598125},1}};
						};
						class Level2PH25: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.598125},1},{"Level0",{0.228,0.598125},1},{},{"Level0",{0.224,0.598125},1},{"Level0",{0.216,0.598125},1},{},{"Level0",{0.212,0.598125},1},{"Level0",{0.204,0.598125},1},{},{"Level0",{0.2,0.598125},1},{"Level0",{0.192,0.598125},1},{},{"Level0",{0.188,0.598125},1},{"Level0",{0.18,0.598125},1}};
						};
						class Level2M25: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.56375},1},{"Level0",{0.24,-0.54375},1},{"Level0",{0.18,-0.54375},1}};
						};
						class VALM2_1_25
						{
							type = "text";
							source = "static";
							text = 25;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.57975},1};
							right[] = {"Level0",{0.24,-0.57975},1};
							down[] = {"Level0",{0.2,-0.54775},1};
						};
						class Level2P25: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.52375},1},{"Level0",{0.24,0.54375},1},{"Level0",{0.18,0.54375},1}};
						};
						class VALP2_1_25
						{
							type = "text";
							source = "static";
							text = -25;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.50775},1};
							right[] = {"Level0",{0.24,0.50775},1};
							down[] = {"Level0",{0.2,0.53975},1};
						};
						class Level2MH30: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.706875},1},{"Level0",{0.228,-0.706875},1},{},{"Level0",{0.224,-0.706875},1},{"Level0",{0.216,-0.706875},1},{},{"Level0",{0.212,-0.706875},1},{"Level0",{0.204,-0.706875},1},{},{"Level0",{0.2,-0.706875},1},{"Level0",{0.192,-0.706875},1},{},{"Level0",{0.188,-0.706875},1},{"Level0",{0.18,-0.706875},1}};
						};
						class Level2PH30: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.706875},1},{"Level0",{0.228,0.706875},1},{},{"Level0",{0.224,0.706875},1},{"Level0",{0.216,0.706875},1},{},{"Level0",{0.212,0.706875},1},{"Level0",{0.204,0.706875},1},{},{"Level0",{0.2,0.706875},1},{"Level0",{0.192,0.706875},1},{},{"Level0",{0.188,0.706875},1},{"Level0",{0.18,0.706875},1}};
						};
						class Level2M30: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.6725},1},{"Level0",{0.24,-0.6525},1},{"Level0",{0.18,-0.6525},1}};
						};
						class VALM2_1_30
						{
							type = "text";
							source = "static";
							text = 30;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.6885},1};
							right[] = {"Level0",{0.24,-0.6885},1};
							down[] = {"Level0",{0.2,-0.6565},1};
						};
						class Level2P30: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.6325},1},{"Level0",{0.24,0.6525},1},{"Level0",{0.18,0.6525},1}};
						};
						class VALP2_1_30
						{
							type = "text";
							source = "static";
							text = -30;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.6165},1};
							right[] = {"Level0",{0.24,0.6165},1};
							down[] = {"Level0",{0.2,0.6485},1};
						};
						class Level2MH35: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.815625},1},{"Level0",{0.228,-0.815625},1},{},{"Level0",{0.224,-0.815625},1},{"Level0",{0.216,-0.815625},1},{},{"Level0",{0.212,-0.815625},1},{"Level0",{0.204,-0.815625},1},{},{"Level0",{0.2,-0.815625},1},{"Level0",{0.192,-0.815625},1},{},{"Level0",{0.188,-0.815625},1},{"Level0",{0.18,-0.815625},1}};
						};
						class Level2PH35: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.815625},1},{"Level0",{0.228,0.815625},1},{},{"Level0",{0.224,0.815625},1},{"Level0",{0.216,0.815625},1},{},{"Level0",{0.212,0.815625},1},{"Level0",{0.204,0.815625},1},{},{"Level0",{0.2,0.815625},1},{"Level0",{0.192,0.815625},1},{},{"Level0",{0.188,0.815625},1},{"Level0",{0.18,0.815625},1}};
						};
						class Level2M35: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.78125},1},{"Level0",{0.24,-0.76125},1},{"Level0",{0.18,-0.76125},1}};
						};
						class VALM2_1_35
						{
							type = "text";
							source = "static";
							text = 35;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.79725},1};
							right[] = {"Level0",{0.24,-0.79725},1};
							down[] = {"Level0",{0.2,-0.76525},1};
						};
						class Level2P35: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.74125},1},{"Level0",{0.24,0.76125},1},{"Level0",{0.18,0.76125},1}};
						};
						class VALP2_1_35
						{
							type = "text";
							source = "static";
							text = -35;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.72525},1};
							right[] = {"Level0",{0.24,0.72525},1};
							down[] = {"Level0",{0.2,0.75725},1};
						};
						class Level2MH40: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-0.924375},1},{"Level0",{0.228,-0.924375},1},{},{"Level0",{0.224,-0.924375},1},{"Level0",{0.216,-0.924375},1},{},{"Level0",{0.212,-0.924375},1},{"Level0",{0.204,-0.924375},1},{},{"Level0",{0.2,-0.924375},1},{"Level0",{0.192,-0.924375},1},{},{"Level0",{0.188,-0.924375},1},{"Level0",{0.18,-0.924375},1}};
						};
						class Level2PH40: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,0.924375},1},{"Level0",{0.228,0.924375},1},{},{"Level0",{0.224,0.924375},1},{"Level0",{0.216,0.924375},1},{},{"Level0",{0.212,0.924375},1},{"Level0",{0.204,0.924375},1},{},{"Level0",{0.2,0.924375},1},{"Level0",{0.192,0.924375},1},{},{"Level0",{0.188,0.924375},1},{"Level0",{0.18,0.924375},1}};
						};
						class Level2M40: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.89},1},{"Level0",{0.24,-0.87},1},{"Level0",{0.18,-0.87},1}};
						};
						class VALM2_1_40
						{
							type = "text";
							source = "static";
							text = 40;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-0.906},1};
							right[] = {"Level0",{0.24,-0.906},1};
							down[] = {"Level0",{0.2,-0.874},1};
						};
						class Level2P40: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.85},1},{"Level0",{0.24,0.87},1},{"Level0",{0.18,0.87},1}};
						};
						class VALP2_1_40
						{
							type = "text";
							source = "static";
							text = -40;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.834},1};
							right[] = {"Level0",{0.24,0.834},1};
							down[] = {"Level0",{0.2,0.866},1};
						};
						class Level2MH45: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,-1.03312},1},{"Level0",{0.228,-1.03312},1},{},{"Level0",{0.224,-1.03312},1},{"Level0",{0.216,-1.03312},1},{},{"Level0",{0.212,-1.03312},1},{"Level0",{0.204,-1.03312},1},{},{"Level0",{0.2,-1.03312},1},{"Level0",{0.192,-1.03312},1},{},{"Level0",{0.188,-1.03312},1},{"Level0",{0.18,-1.03312},1}};
						};
						class Level2PH45: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.236,1.03312},1},{"Level0",{0.228,1.03312},1},{},{"Level0",{0.224,1.03312},1},{"Level0",{0.216,1.03312},1},{},{"Level0",{0.212,1.03312},1},{"Level0",{0.204,1.03312},1},{},{"Level0",{0.2,1.03312},1},{"Level0",{0.192,1.03312},1},{},{"Level0",{0.188,1.03312},1},{"Level0",{0.18,1.03312},1}};
						};
						class Level2M45: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,-0.99875},1},{"Level0",{0.24,-0.97875},1},{"Level0",{0.18,-0.97875},1}};
						};
						class VALM2_1_45
						{
							type = "text";
							source = "static";
							text = 45;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,-1.01475},1};
							right[] = {"Level0",{0.24,-1.01475},1};
							down[] = {"Level0",{0.2,-0.98275},1};
						};
						class Level2P45: Level00
						{
							type = "line";
							points[] = {{"Level0",{0.24,0.95875},1},{"Level0",{0.24,0.97875},1},{"Level0",{0.18,0.97875},1}};
						};
						class VALP2_1_45
						{
							type = "text";
							source = "static";
							text = -45;
							align = "center";
							scale = 1;
							sourceScale = 1;
							pos[] = {"Level0",{0.2,0.94275},1};
							right[] = {"Level0",{0.24,0.94275},1};
							down[] = {"Level0",{0.2,0.97475},1};
						};
					};
				};
				class PlaneOrientationCrosshair
				{
					type = "line";
					width = 3.0;
					points[] = {{"HorizonBankInverted",{-0.175,0.0},1},{"HorizonBankInverted",{-0.12,0.0},1},{"HorizonBankInverted",{-0.1,-0.03},1},{"HorizonBankInverted",{-0.08,0.0},1},{"HorizonBankInverted",{-0.05,0.0},1},{},{"HorizonBankInverted",{0.05,0.0},1},{"HorizonBankInverted",{0.08,0.0},1},{"HorizonBankInverted",{0.1,-0.03},1},{"HorizonBankInverted",{0.12,0.0},1},{"HorizonBankInverted",{0.175,0.0},1},{},{"HorizonBankInverted",{-0.0,0.06},1},{"HorizonBankInverted",{-0.0,0.09},1},{},{"PlaneOrientation",{-0.205,0.0},1},{"PlaneOrientation",{-0.175,0.0},1},{},{"PlaneOrientation",{0.175,0.0},1},{"PlaneOrientation",{0.205,0.0},1},{},{"PlaneOrientation",{0.0,-0.03},1},{"PlaneOrientation",{0.0,-0.01},1},{},{"PlaneOrientation",{0.0,0.03},1},{"PlaneOrientation",{0.0,0.01},1},{},{"PlaneOrientation",{-0.03,0.0},1},{"PlaneOrientation",{-0.01,0.0},1},{},{"PlaneOrientation",{0.03,0.0},1},{"PlaneOrientation",{0.01,0.0},1},{}};
				};
				class PlaneMovementCrosshair
				{
					type = "line";
					width = 3.0;
					points[] = {{"Velocity",{0,-0.0197727},1},{"Velocity",{0.01,-0.0171232},1},{"Velocity",{0.01732,-0.00988636},1},{"Velocity",{0.02,0},1},{"Velocity",{0.01732,0.00988636},1},{"Velocity",{0.01,0.0171232},1},{"Velocity",{0,0.0197727},1},{"Velocity",{-0.01,0.0171232},1},{"Velocity",{-0.01732,0.00988636},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.01732,-0.00988636},1},{"Velocity",{-0.01,-0.0171232},1},{"Velocity",{0,-0.0197727},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.0395455},1},{"Velocity",{0,-0.0197727},1}};
				};
				class WeaponName
				{
					type = "text";
					source = "weapon";
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.03,0.94},1};
					right[] = {{0.08,0.94},1};
					down[] = {{0.03,0.98},1};
				};
				class AmmoCount
				{
					type = "text";
					source = "ammo";
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.03,0.89},1};
					right[] = {{0.08,0.89},1};
					down[] = {{0.03,0.93},1};
				};
				class CMName
				{
					type = "text";
					source = "cmweapon";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.91,0.94},1};
					right[] = {{0.96,0.94},1};
					down[] = {{0.91,0.98},1};
				};
				class CMCount
				{
					type = "text";
					source = "cmammo";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.91,0.89},1};
					right[] = {{0.96,0.89},1};
					down[] = {{0.91,0.93},1};
				};
				class FlapsGroup
				{
					type = "group";
					condition = "flaps";
					class FlapsText
					{
						type = "text";
						source = "static";
						text = "FLAPS";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.485},1};
						right[] = {{0.08,0.485},1};
						down[] = {{0.03,0.525},1};
					};
				};
				class TGPGroup
				{
					type = "group";
					condition = "laseron";
					class LaserText
					{
						type = "text";
						source = "static";
						text = "LASER";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.435},1};
						right[] = {{0.08,0.435},1};
						down[] = {{0.03,0.475},1};
					};
				};
				class TargetingPodGroup
				{
					condition = "1-pilotcameralock";
					class TargetingPodDir
					{
						type = "line";
						width = 3.0;
						points[] = {{"TargetingPodDir",{-0.00707107,0.00699071},1},{"TargetingPodDir",{-0.0212132,0.0209721},1},{},{"TargetingPodDir",{0.00707107,0.00699071},1},{"TargetingPodDir",{0.0212132,0.0209721},1},{},{"TargetingPodDir",{0.00707107,-0.00699071},1},{"TargetingPodDir",{0.0212132,-0.0209721},1},{},{"TargetingPodDir",{-0.00707107,-0.00699071},1},{"TargetingPodDir",{-0.0212132,-0.0209721},1},{}};
					};
				};
				class TargetingPodGroupOn
				{
					condition = "pilotcameralock";
					class TargetingPodDir
					{
						type = "line";
						width = 3.0;
						points[] = {{"TargetingPodTarget",1,"Limit0109",1,{-0.00707107,0.00699071},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0212132,0.0209721},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00707107,0.00699071},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0212132,0.0209721},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00707107,-0.00699071},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0212132,-0.0209721},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00707107,-0.00699071},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0212132,-0.0209721},1},{}};
					};
				};
				class GearGroup
				{
					type = "group";
					condition = "ils";
					class GearText
					{
						type = "text";
						source = "static";
						text = "GEAR";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.535},1};
						right[] = {{0.08,0.535},1};
						down[] = {{0.03,0.575},1};
					};
				};
				class ILS
				{
					condition = "ils";
					class Glideslope
					{
						clipTL[] = {0.0,0.0};
						clipBR[] = {1.0,1.0};
						class ILS
						{
							type = "line";
							points[] = {{"ILS_W",{-0.24,0},1},{"ILS_W",{0.24,0},1},{},{"ILS_W",{-0.24,-0.0237273},1},{"ILS_W",{-0.24,0.0237273},1},{},{"ILS_W",{-0.12,-0.0177955},1},{"ILS_W",{-0.12,0.0177955},1},{},{"ILS_W",{0,-0.0237273},1},{"ILS_W",{0,0.0237273},1},{},{"ILS_W",{0.12,-0.0177955},1},{"ILS_W",{0.12,0.0177955},1},{},{"ILS_W",{0.24,-0.0237273},1},{"ILS_W",{0.24,0.0237273},1},{},{"ILS_H",{0,-0.237273},1},{"ILS_H",{0,0.237273},1},{},{"ILS_H",{-0.024,-0.237273},1},{"ILS_H",{0.024,-0.237273},1},{},{"ILS_H",{-0.018,-0.118636},1},{"ILS_H",{0.018,-0.118636},1},{},{"ILS_H",{-0.024,0},1},{"ILS_H",{0.024,0},1},{},{"ILS_H",{-0.018,0.118636},1},{"ILS_H",{0.018,0.118636},1},{},{"ILS_H",{-0.024,0.237273},1},{"ILS_H",{0.024,0.237273},1}};
						};
						class airport
						{
							type = "line";
							points[] = {{"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1}};
						};
					};
				};
				class StallGroup
				{
					type = "group";
					condition = "stall";
					color[] = {1.0,0.0,0.0};
					blinkingPattern[] = {0.2,0.2};
					blinkingStartsOn = 1;
					class StallText
					{
						type = "text";
						source = "static";
						text = "STALL";
						align = "center";
						scale = 1;
						pos[] = {{0.5,0.28},1};
						right[] = {{0.55,0.28},1};
						down[] = {{0.5,0.32},1};
					};
				};
				class LightsGroup
				{
					type = "group";
					condition = "lights";
					class LightsText
					{
						type = "text";
						source = "static";
						text = "LIGHTS";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.585},1};
						right[] = {{0.08,0.585},1};
						down[] = {{0.03,0.625},1};
					};
				};
				class CollisionLightsGroup
				{
					type = "group";
					condition = "collisionlights";
					class CollisionLightsText
					{
						type = "text";
						source = "static";
						text = "A-COL";
						align = "right";
						scale = 1;
						pos[] = {{0.03,0.635},1};
						right[] = {{0.08,0.635},1};
						down[] = {{0.03,0.675},1};
					};
				};
				class PitchNumber
				{
					type = "text";
					source = "horizonDive";
					sourceScale = 57.29578;
					align = "right";
					scale = 1;
					pos[] = {{0.51,0.89},1};
					right[] = {{0.56,0.89},1};
					down[] = {{0.51,0.93},1};
				};
				class PitchText
				{
					type = "text";
					source = "static";
					text = "PITCH";
					align = "left";
					scale = 1;
					pos[] = {{0.49,0.89},1};
					right[] = {{0.54,0.89},1};
					down[] = {{0.49,0.93},1};
				};
				class RollNumber
				{
					type = "text";
					source = "horizonBank";
					sourceScale = 57.29578;
					align = "right";
					scale = 1;
					pos[] = {{0.51,0.94},1};
					right[] = {{0.56,0.94},1};
					down[] = {{0.51,0.98},1};
				};
				class RollText
				{
					type = "text";
					source = "static";
					text = "ROLL";
					align = "left";
					scale = 1;
					pos[] = {{0.49,0.94},1};
					right[] = {{0.54,0.94},1};
					down[] = {{0.49,0.98},1};
				};
				class SpeedNumber
				{
					type = "text";
					source = "speed";
					sourceScale = 3.6;
					align = "right";
					scale = 1;
					pos[] = {{0.13,0.14},1};
					right[] = {{0.18,0.14},1};
					down[] = {{0.13,0.18},1};
				};
				class SpeedText
				{
					type = "text";
					source = "static";
					text = "SPD";
					align = "left";
					scale = 1;
					pos[] = {{0.11,0.14},1};
					right[] = {{0.16,0.14},1};
					down[] = {{0.11,0.18},1};
				};
				class TerrainGroup
				{
					type = "group";
					clipTL[] = {0.0,0.0};
					clipBR[] = {1.0,0.6};
					class TerrainArrow
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.842,0.4},1},{{0.86,0.4},1},{},{"TerrainBone",{0.842,-0.016},1},{"TerrainBone",{0.86,0.0},1},{"TerrainBone",{0.842,0.016},1}};
					};
				};
				class TerrainText
				{
					type = "text";
					source = "static";
					text = "ATL";
					align = "left";
					scale = 1;
					pos[] = {{0.85,0.1},1};
					right[] = {{0.9,0.1},1};
					down[] = {{0.85,0.14},1};
				};
				class TerrainNumber
				{
					type = "text";
					source = "altitudeAGL";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.85,0.14},1};
					right[] = {{0.9,0.14},1};
					down[] = {{0.85,0.18},1};
				};
				class AltitudeNumber
				{
					type = "text";
					source = "altitudeASL";
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.89,0.14},1};
					right[] = {{0.94,0.14},1};
					down[] = {{0.89,0.18},1};
				};
				class AltitudeText
				{
					type = "text";
					source = "static";
					text = "ASL";
					align = "right";
					scale = 1;
					pos[] = {{0.89,0.1},1};
					right[] = {{0.94,0.1},1};
					down[] = {{0.89,0.14},1};
				};
				class AltitudeArrow
				{
					type = "line";
					width = 4.0;
					points[] = {{{0.898,0.384},1},{{0.88,0.4},1},{{0.898,0.416},1}};
				};
				class AltitudeLine
				{
					type = "line";
					width = 4.0;
					points[] = {{{0.87,0.6},1},{{0.87,0.2},1}};
				};
				class AltitudeScale
				{
					type = "scale";
					horizontal = 0;
					source = "altitudeASL";
					sourceScale = 1;
					width = 4.0;
					top = 0.6;
					center = 0.4;
					bottom = 0.2;
					lineXleft = 0.88;
					lineYright = 0.89;
					lineXleftMajor = 0.88;
					lineYrightMajor = 0.9;
					majorLineEach = 5;
					numberEach = 5;
					step = 20;
					stepSize = 0.0266667;
					align = "right";
					scale = 1;
					pos[] = {0.91,0.58};
					right[] = {0.96,0.58};
					down[] = {0.91,0.62};
				};
				class ClimbNumber
				{
					type = "text";
					source = "vspeed";
					sourceScale = 1;
					align = "left";
					scale = 1;
					pos[] = {{0.945,0.681},1};
					right[] = {{0.995,0.681},1};
					down[] = {{0.945,0.716},1};
				};
				class ClimbArrow
				{
					type = "line";
					width = 4.0;
					points[] = {{"ClimbRotate",{-0.034,-0.006},1},{"ClimbRotate",{-0.044,0.0},1},{"ClimbRotate",{-0.034,0.006},1},{"ClimbRotate",{-0.034,-0.006},1},{},{"ClimbRotate",{-0.044,0.0},1},{"ClimbRotate",{-0.004,0.0},1}};
				};
				class ClimbLine
				{
					type = "line";
					width = 4.0;
					points[] = {{{0.898,0.684},1},{{0.888,0.688},1},{{0.882,0.693},1},{{0.88,0.7},1},{{0.882,0.707},1},{{0.888,0.712},1},{{0.898,0.716},1},{{0.953,0.716},1},{{0.953,0.684},1},{{0.898,0.684},1},{},{"ClimbFixed",{-0.08,3.45717e-09},1},{"ClimbFixed",{-0.06,2.59288e-09},1},{},{"ClimbFixed",{-0.0586889,-0.0123329},1},{"ClimbFixed",{-0.0684703,-0.0143884},1},{},{"ClimbFixed",{-0.050245,-0.0221163},1},{"ClimbFixed",{-0.0639482,-0.028148},1},{},{"ClimbFixed",{-0.048541,-0.0348664},1},{"ClimbFixed",{-0.0566312,-0.0406774},1},{},{"ClimbFixed",{-0.0368022,-0.0404085},1},{"ClimbFixed",{-0.0468391,-0.051429},1},{},{"ClimbFixed",{-0.0586889,0.012333},1},{"ClimbFixed",{-0.0684703,0.0143884},1},{},{"ClimbFixed",{-0.050245,0.0221163},1},{"ClimbFixed",{-0.0639482,0.028148},1},{},{"ClimbFixed",{-0.048541,0.0348664},1},{"ClimbFixed",{-0.0566312,0.0406774},1},{},{"ClimbFixed",{-0.0368022,0.0404085},1},{"ClimbFixed",{-0.0468391,0.051429},1},{},{"ClimbFixed",{-0.0468391,"scalar NaN"},1},{"ClimbFixed",{-0.0566312,"scalar NaN"},1},{"ClimbFixed",{-0.0639482,"scalar NaN"},1},{"ClimbFixed",{-0.0684703,"scalar NaN"},1},{"ClimbFixed",{-0.07,"scalar NaN"},1},{"ClimbFixed",{-0.0684703,"scalar NaN"},1},{"ClimbFixed",{-0.0639482,"scalar NaN"},1},{"ClimbFixed",{-0.0566312,"scalar NaN"},1},{"ClimbFixed",{-0.0468391,"scalar NaN"},1}};
				};
				class HeadingArrow
				{
					type = "line";
					width = 3.0;
					points[] = {{{0.48,0.145},1},{{0.5,0.125},1},{{0.52,0.145},1},{{0.54,0.145},1},{{0.54,0.18},1},{{0.46,0.18},1},{{0.46,0.145},1},{{0.48,0.145},1}};
				};
				class HeadingLine
				{
					type = "line";
					width = 4.0;
					points[] = {{{0.3,0.12},1},{{0.7,0.12},1}};
				};
				class HeadingNumber
				{
					type = "text";
					source = "heading";
					sourceScale = 1;
					align = "center";
					scale = 1;
					pos[] = {{0.5,0.14},1};
					right[] = {{0.55,0.14},1};
					down[] = {{0.5,0.18},1};
				};
				class HeadingScale
				{
					type = "scale";
					horizontal = 1;
					source = "heading";
					sourceScale = 0.1;
					width = 4.0;
					NeverEatSeaWeed = 1;
					top = 0.3;
					center = 0.5;
					bottom = 0.7;
					lineXleft = 0.118;
					lineYright = 0.108;
					lineXleftMajor = 0.118;
					lineYrightMajor = 0.098;
					majorLineEach = 2;
					numberEach = 6;
					step = 0.5;
					stepSize = 0.0344828;
					align = "center";
					scale = 1.0;
					pos[] = {0.3,0.05};
					right[] = {0.35,0.05};
					down[] = {0.3,0.09};
				};
				class MGun
				{
					condition = "-2+(mgun+rocket)*ImpactDistance";
					class Cross
					{
						type = "line";
						width = 3.0;
						points[] = {{"ImpactPointRelative",{0.0,-0.07},1},{"ImpactPointRelative",{0.0,-0.03},1},{},{"ImpactPointRelative",{0.0,0.045},1},{"ImpactPointRelative",{0.0,0.03},1},{},{"ImpactPointRelative",{-0.045,0.0},1},{"ImpactPointRelative",{-0.03,0.0},1},{},{"ImpactPointRelative",{0.045,0.0},1},{"ImpactPointRelative",{0.03,0.0},1},{},{"ImpactPointRelative",{0.0,-0.002},1},{"ImpactPointRelative",{0.0,0.002},1},{},{"ImpactPointRelative",{-0.002,0.0},1},{"ImpactPointRelative",{0.002,0.0},1},{}};
					};
					class Circle
					{
						type = "line";
						width = 6.0;
						points[] = {{"ImpactPointRelative",{0,-0.0395455},1},{"ImpactPointRelative",{0,-0.0494318},1},{"MissileFlightTimeRot1",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot2",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot3",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot4",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot5",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot6",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot7",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot8",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot9",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot10",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot11",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot12",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot13",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot14",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot15",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot16",{0,0.05},1,"ImpactPointRelative",1},{"MissileFlightTimeRot17",{0,0.05},1,"ImpactPointRelative",1}};
					};
					class Circle_LAR
					{
						type = "line";
						width = 5.0;
						points[] = {{"ImpactPointRelative",1,{"LarAmmoMGunMin",0,-0.0593182},1},{"ImpactPointRelative",1,{"LarAmmoMGunMin",0,-0.0494318},1},{},{"ImpactPointRelative",1,{"LarAmmoMGunMax",0,-0.0593182},1},{"ImpactPointRelative",1,{"LarAmmoMGunMax",0,-0.0494318},1},{}};
					};
					class Distance
					{
						type = "text";
						source = "ImpactDistance";
						sourceScale = 0.001;
						sourcePrecision = 1;
						max = 15;
						align = "center";
						scale = 1;
						pos[] = {"ImpactPointRelative",{-0.002,-0.1},1};
						right[] = {"ImpactPointRelative",{0.045,-0.1},1};
						down[] = {"ImpactPointRelative",{-0.002,-0.06},1};
					};
				};
				class AAMissileCrosshairGroup
				{
					type = "group";
					condition = "AAmissile";
					class AAMissileCrosshair
					{
						type = "line";
						width = 4.0;
						points[] = {{"WeaponAim",{0,-0.247159},1},{"WeaponAim",{0.0434,-0.243402},1},{"WeaponAim",{0.0855,-0.232255},1},{"WeaponAim",{0.125,-0.21404},1},{"WeaponAim",{0.1607,-0.189324},1},{"WeaponAim",{0.1915,-0.158874},1},{"WeaponAim",{0.2165,-0.12358},1},{"WeaponAim",{0.234925,-0.0845284},1},{"WeaponAim",{0.2462,-0.0429068},1},{"WeaponAim",{0.25,0},1},{"WeaponAim",{0.2462,0.0429068},1},{"WeaponAim",{0.234925,0.0845284},1},{"WeaponAim",{0.2165,0.12358},1},{"WeaponAim",{0.1915,0.158874},1},{"WeaponAim",{0.1607,0.189324},1},{"WeaponAim",{0.125,0.21404},1},{"WeaponAim",{0.0855,0.232255},1},{"WeaponAim",{0.0434,0.243402},1},{"WeaponAim",{0,0.247159},1},{"WeaponAim",{-0.0434,0.243402},1},{"WeaponAim",{-0.0855,0.232255},1},{"WeaponAim",{-0.125,0.21404},1},{"WeaponAim",{-0.1607,0.189324},1},{"WeaponAim",{-0.1915,0.158874},1},{"WeaponAim",{-0.2165,0.12358},1},{"WeaponAim",{-0.234925,0.0845284},1},{"WeaponAim",{-0.2462,0.0429068},1},{"WeaponAim",{-0.25,0},1},{"WeaponAim",{-0.2462,-0.0429068},1},{"WeaponAim",{-0.234925,-0.0845284},1},{"WeaponAim",{-0.2165,-0.12358},1},{"WeaponAim",{-0.1915,-0.158874},1},{"WeaponAim",{-0.1607,-0.189324},1},{"WeaponAim",{-0.125,-0.21404},1},{"WeaponAim",{-0.0855,-0.232255},1},{"WeaponAim",{-0.0434,-0.243402},1},{"WeaponAim",{0,-0.247159},1}};
					};
				};
				class ATMissileCrosshairGroup
				{
					condition = "ATmissile";
					type = "group";
					class ATMissileCrosshair
					{
						type = "line";
						width = 4.0;
						points[] = {{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.15,-0.13},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.15,0.13},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.15,-0.13},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.15,0.13},1},{},{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.13,-0.15},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.13,0.15},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.13,-0.15},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.13,0.15},1}};
					};
				};
				class BombCrosshairGroup
				{
					type = "group";
					condition = "bomb";
					class BombCrosshair
					{
						type = "line";
						width = 4.0;
						points[] = {{"ImpactPoint",{0,-0.0988636},1},{"ImpactPoint",{0.01736,-0.0973609},1},{"ImpactPoint",{0.0342,-0.0929022},1},{"ImpactPoint",{0.05,-0.0856159},1},{"ImpactPoint",{0.06428,-0.0757295},1},{"ImpactPoint",{0.0766,-0.0635495},1},{"ImpactPoint",{0.0866,-0.0494318},1},{"ImpactPoint",{0.09397,-0.0338114},1},{"ImpactPoint",{0.09848,-0.0171627},1},{"ImpactPoint",{0.1,0},1},{"ImpactPoint",{0.09848,0.0171627},1},{"ImpactPoint",{0.09397,0.0338114},1},{"ImpactPoint",{0.0866,0.0494318},1},{"ImpactPoint",{0.0766,0.0635495},1},{"ImpactPoint",{0.06428,0.0757295},1},{"ImpactPoint",{0.05,0.0856159},1},{"ImpactPoint",{0.0342,0.0929022},1},{"ImpactPoint",{0.01736,0.0973609},1},{"ImpactPoint",{0,0.0988636},1},{"ImpactPoint",{-0.01736,0.0973609},1},{"ImpactPoint",{-0.0342,0.0929022},1},{"ImpactPoint",{-0.05,0.0856159},1},{"ImpactPoint",{-0.06428,0.0757295},1},{"ImpactPoint",{-0.0766,0.0635495},1},{"ImpactPoint",{-0.0866,0.0494318},1},{"ImpactPoint",{-0.09397,0.0338114},1},{"ImpactPoint",{-0.09848,0.0171627},1},{"ImpactPoint",{-0.1,0},1},{"ImpactPoint",{-0.09848,-0.0171627},1},{"ImpactPoint",{-0.09397,-0.0338114},1},{"ImpactPoint",{-0.0866,-0.0494318},1},{"ImpactPoint",{-0.0766,-0.0635495},1},{"ImpactPoint",{-0.06428,-0.0757295},1},{"ImpactPoint",{-0.05,-0.0856159},1},{"ImpactPoint",{-0.0342,-0.0929022},1},{"ImpactPoint",{-0.01736,-0.0973609},1},{"ImpactPoint",{0,-0.0988636},1},{},{"ImpactPoint",1,"Limit0109",1,{0,-0.0197727},1},{"ImpactPoint",1,"Limit0109",1,{0.014,-0.0138409},1},{"ImpactPoint",1,"Limit0109",1,{"+ 0.02",0},1},{"ImpactPoint",1,"Limit0109",1,{0.014,0.0138409},1},{"ImpactPoint",1,"Limit0109",1,{0,0.0197727},1},{"ImpactPoint",1,"Limit0109",1,{-0.014,0.0138409},1},{"ImpactPoint",1,"Limit0109",1,{"- 0.02",0},1},{"ImpactPoint",1,"Limit0109",1,{-0.014,-0.0138409},1},{"ImpactPoint",1,"Limit0109",1,{0,-0.0197727},1},{},{"Velocity",0.001,"ImpactPoint",1,"Limit0109",1,{0.0,0.0},1},{"Velocity",1,"Limit0109",1,{0.0,0.0},1}};
					};
					class Distance
					{
						type = "text";
						source = "ImpactDistance";
						sourceScale = 0.001;
						sourcePrecision = 1;
						max = 15;
						align = "center";
						scale = 1;
						pos[] = {"ImpactPoint",{-0.002,0.11},1};
						right[] = {"ImpactPoint",{0.045,0.11},1};
						down[] = {"ImpactPoint",{-0.002,0.15},1};
					};
				};
				class WeaponsLocking
				{
					condition = "missilelocking";
					blinkingPattern[] = {0.2,0.2};
					blinkingStartsOn = 1;
					class Text
					{
						type = "text";
						source = "static";
						text = "LOCKING";
						align = "center";
						scale = 1;
						pos[] = {{0.475,0.815625},1};
						right[] = {{0.535,0.815625},1};
						down[] = {{0.475,0.865057},1};
					};
				};
				class TargetInfo
				{
					condition = "missilelocked";
					class TargetLockedText
					{
						type = "text";
						source = "static";
						text = "TARGET ACQUIRED";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.025,0.209},1};
						right[] = {{0.065,0.209},1};
						down[] = {{0.025,0.24},1};
					};
					class TimeOfFlightText
					{
						type = "text";
						source = "static";
						text = "TOF:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.025,0.239},1};
						right[] = {{0.07,0.239},1};
						down[] = {{0.025,0.274},1};
					};
					class DistanceText
					{
						type = "text";
						source = "static";
						text = "DISTANCE:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.025,0.271},1};
						right[] = {{0.07,0.271},1};
						down[] = {{0.025,0.306},1};
					};
					class TOF_source
					{
						type = "text";
						sourceScale = 1;
						source = "missileflighttime";
						align = "left";
						scale = 1;
						pos[] = {{0.269,0.239},1};
						right[] = {{0.319,0.239},1};
						down[] = {{0.269,0.274},1};
					};
					class TargetDistance
					{
						type = "text";
						source = "targetDist";
						scale = 1;
						sourceLength = 0;
						sourcePrecision = 1;
						sourceScale = 0.001;
						align = "left";
						pos[] = {{0.269,0.271},1};
						right[] = {{0.319,0.271},1};
						down[] = {{0.269,0.306},1};
					};
				};
				class IncomingMissile
				{
					condition = "incomingmissile";
					blinkingPattern[] = {0.3,0.3};
					blinkingStartsOn = 1;
					class Text
					{
						type = "text";
						source = "static";
						text = "!INCOMING MISSILE!";
						align = "center";
						scale = 1;
						pos[] = {{0.485,0.2175},1};
						right[] = {{0.545,0.2175},1};
						down[] = {{0.485,0.266932},1};
					};
				};
				class WP
				{
					condition = "wpvalid";
					class WPdist
					{
						type = "text";
						source = "wpdist";
						sourceScale = 0.001;
						sourcePrecision = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.075,0.815625},1};
						right[] = {{0.135,0.815625},1};
						down[] = {{0.075,0.865057},1};
					};
					class WPstatic
					{
						type = "text";
						source = "static";
						text = ">";
						align = "center";
						scale = 2;
						pos[] = {{0.09,0.815625},1};
						right[] = {{0.11,0.815625},1};
						down[] = {{0.09,0.865057},1};
					};
					class WPIndex
					{
						type = "text";
						source = "wpIndex";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.1,0.815625},1};
						right[] = {{0.16,0.815625},1};
						down[] = {{0.1,0.865057},1};
					};
					class WP
					{
						width = 1;
						type = "line";
						points[] = {{"wppoint",1,{"HorizonBankRotFull",0.015,-0.035},1},{"wppoint",1,{"HorizonBankRotFull",0.0,0.0},1},{"wppoint",1,{"HorizonBankRotFull",-0.015,-0.035},1}};
					};
				};
				class RadarBoxes
				{
					type = "radar";
					pos0[] = {0.5,0.53};
					pos10[] = {1.38,1.4};
					width = 4;
					points[] = {{{-0.002,-0.00197727},1},{{0.002,-0.00197727},1},{{0.002,0.00197727},1},{{-0.002,0.00197727},1},{{-0.002,-0.00197727},1}};
				};
				class TargetDiamond
				{
					class shape
					{
						type = "line";
						width = 4;
						points[] = {{"Target",{0,-0.0395455},1},{"Target",{0.006944,-0.0389444},1},{"Target",{0.01368,-0.0371609},1},{"Target",{0.02,-0.0342464},1},{"Target",{0.025712,-0.0302918},1},{"Target",{0.03064,-0.0254198},1},{"Target",{0.03464,-0.0197727},1},{"Target",{0.037588,-0.0135245},1},{"Target",{0.039392,-0.00686509},1},{"Target",{0.04,0},1},{"Target",{0.039392,0.00686509},1},{"Target",{0.037588,0.0135245},1},{"Target",{0.03464,0.0197727},1},{"Target",{0.03064,0.0254198},1},{"Target",{0.025712,0.0302918},1},{"Target",{0.02,0.0342464},1},{"Target",{0.01368,0.0371609},1},{"Target",{0.006944,0.0389444},1},{"Target",{0,0.0395455},1},{"Target",{-0.006944,0.0389444},1},{"Target",{-0.01368,0.0371609},1},{"Target",{-0.02,0.0342464},1},{"Target",{-0.025712,0.0302918},1},{"Target",{-0.03064,0.0254198},1},{"Target",{-0.03464,0.0197727},1},{"Target",{-0.037588,0.0135245},1},{"Target",{-0.039392,0.00686509},1},{"Target",{-0.04,0},1},{"Target",{-0.039392,-0.00686509},1},{"Target",{-0.037588,-0.0135245},1},{"Target",{-0.03464,-0.0197727},1},{"Target",{-0.03064,-0.0254198},1},{"Target",{-0.025712,-0.0302918},1},{"Target",{-0.02,-0.0342464},1},{"Target",{-0.01368,-0.0371609},1},{"Target",{-0.006944,-0.0389444},1},{"Target",{0,-0.0395455},1},{}};
					};
				};
				class TargetLocked
				{
					condition = "missilelocked";
					class shape
					{
						type = "line";
						width = 4;
						points[] = {{"Target",1,"Limit0109",1,{0,-0.0494318},1},{"Target",1,"Limit0109",1,{0.05,0},1},{"Target",1,"Limit0109",1,{0,0.0494318},1},{"Target",1,"Limit0109",1,{-0.05,0},1},{"Target",1,"Limit0109",1,{0,-0.0494318},1}};
					};
				};
				class CoordXNumber
				{
					type = "text";
					source = "coordinateX";
					sourceScale = 0.01;
					sourceLength = 3;
					sourceOffset = -0.5;
					align = "left";
					scale = 1;
					pos[] = {{0.894,0.789},1};
					right[] = {{0.944,0.789},1};
					down[] = {{0.894,0.824},1};
				};
				class CoordYNumber: CoordXNumber
				{
					source = "coordinateY";
					pos[] = {{0.951,0.789},1};
					right[] = {{1.001,0.789},1};
					down[] = {{0.951,0.824},1};
				};
				class Time: CoordXNumber
				{
					source = "time";
					text = "%X";
					align = "left";
					pos[] = {{0.944,0.819},1};
					right[] = {{0.994,0.819},1};
					down[] = {{0.944,0.854},1};
				};
				class LAR
				{
					type = "group";
					condition = "(AAmissile + missilelocked)/2";
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.19,0.38},1},{{0.17,0.38},1},{{0.17,0.65},1},{{0.19,0.65},1},{},{{0.19,0.5825},1},{{0.17,0.5825},1},{},{{0.19,0.515},1},{{0.17,0.515},1},{},{{0.19,0.4475},1},{{0.17,0.4475},1},{},{"LarTargetDist",-0.27,{0.15,0.67},1},{"LarTargetDist",-0.27,{0.17,0.65},1},{"LarTargetDist",-0.27,{0.15,0.63},1},{}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{"LarAmmoMin",-0.27,{0.171,0.65},1},{"LarAmmoMax",-0.27,{0.171,0.65},1},{"LarAmmoMax",-0.27,{0.188,0.65},1},{"LarAmmoMin",-0.27,{0.188,0.65},1}}};
					};
					class TopText
					{
						type = "text";
						source = "LarTop";
						sourceScale = 0.001;
						scale = 1;
						pos[] = {{0.2,0.36},1};
						right[] = {{0.24,0.36},1};
						down[] = {{0.2,0.4},1};
						align = "right";
					};
					class MiddleText: TopText
					{
						source = "LarTop";
						sourcePrecision = -1;
						sourceScale = 0.0005;
						pos[] = {{0.2,0.495},1};
						right[] = {{0.24,0.495},1};
						down[] = {{0.2,0.535},1};
					};
					class SpeedText: TopText
					{
						source = "LarTargetSpeed";
						align = "left";
						sourceScale = 3.6;
						pos[] = {"LarTargetDist",-0.27,{0.14,0.63},1};
						right[] = {"LarTargetDist",-0.27,{0.18,0.63},1};
						down[] = {"LarTargetDist",-0.27,{0.14,0.67},1};
					};
				};
			};
		};
		class Plane_MFD_02
		{
			topLeft = "MFD_2_TL";
			topRight = "MFD_2_TR";
			bottomLeft = "MFD_2_BL";
			borderLeft = 0;
			borderRight = 0;
			borderTop = 0.1;
			borderBottom = 0;
			color[] = {0.15,1.0,0.15,1.0};
			enableParallax = 0;
			font = "LucidaConsoleB";
			class material
			{
				ambient[] = {5,5,5,1};
				diffuse[] = {1,1,1,1};
				emissive[] = {200,200,200,1};
			};
			class Bones
			{
				class Center
				{
					type = "fixed";
					pos[] = {0.353,0.41};
				};
			};
			class Draw
			{
				alpha = 1;
				color[] = {1.0,1.0,1.0};
				condition = "on";
				class Pylon1
				{
					type = "pylonicon";
					pos[] = {"Center",{0.396,0.0},1};
					pylon = 1;
					name = "Plane_CAS_02";
				};
				class Pylon2: Pylon1
				{
					pos[] = {"Center",{0.33,0.0},1};
					pylon = 2;
				};
				class Pylon3: Pylon1
				{
					pos[] = {"Center",{0.264,0.0},1};
					pylon = 3;
				};
				class Pylon4: Pylon1
				{
					pos[] = {"Center",{0.198,0.0},1};
					pylon = 4;
				};
				class Pylon5: Pylon1
				{
					pos[] = {"Center",{0.132,0.0},1};
					pylon = 5;
				};
				class Pylon6: Pylon1
				{
					pos[] = {"Center",{-0.132,0.0},1};
					pylon = 6;
				};
				class Pylon7: Pylon1
				{
					pos[] = {"Center",{-0.198,0.0},1};
					pylon = 7;
				};
				class Pylon8: Pylon1
				{
					pos[] = {"Center",{-0.264,0.0},1};
					pylon = 8;
				};
				class Pylon9: Pylon1
				{
					pos[] = {"Center",{-0.33,0.0},1};
					pylon = 9;
				};
				class Pylon10: Pylon1
				{
					pos[] = {"Center",{-0.396,0.0},1};
					pylon = 10;
				};
				class CurrentWeapon
				{
					type = "text";
					source = "weapon";
					scale = 1;
					sourceScale = 1;
					align = "left";
					pos[] = {{0.89,0.07},1};
					right[] = {{0.935,0.07},1};
					down[] = {{0.89,0.105},1};
				};
				class CurrentAmmo
				{
					type = "text";
					source = "ammo";
					scale = 1;
					sourceScale = 1;
					align = "left";
					pos[] = {{0.89,0.12},1};
					right[] = {{0.935,0.12},1};
					down[] = {{0.89,0.155},1};
				};
				class Gatling_Ammo
				{
					type = "text";
					source = "ammo";
					sourceIndex = 0;
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{0.49,0.64},1};
					right[] = {{0.54,0.64},1};
					down[] = {{0.49,0.681},1};
				};
				class CM_Name
				{
					type = "text";
					source = "CMWeapon";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{0.49,0.85},1};
					right[] = {{0.53,0.85},1};
					down[] = {{0.49,0.881},1};
				};
				class CM_Ammo
				{
					type = "text";
					source = "CMAmmo";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{0.49,0.88},1};
					right[] = {{0.53,0.88},1};
					down[] = {{0.49,0.911},1};
				};
			};
		};
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_CAS_02_F;
	};
};