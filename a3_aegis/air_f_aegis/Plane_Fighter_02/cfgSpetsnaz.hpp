class O_R_Plane_Fighter_02_F: Plane_Fighter_02_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_Fighter_02_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	textureList[] = {CamoBlue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = O_R_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_R_Plane_Fighter_02_Stealth_F: Plane_Fighter_02_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Plane_Fighter_02_Stealth_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_Fighter_02_Stealth_name;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_Fighter_Pilot_F;
	typicalCargo[] = {O_R_Fighter_Pilot_F};
	textureList[] = {CamoBlue,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_blue_CO.paa",
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
		EjectionSeatClass = O_R_Ejection_Seat_Plane_Fighter_02_F;
	};
};
class O_R_Ejection_Seat_Plane_Fighter_02_F: Ejection_Seat_Plane_Fighter_02_base_F
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