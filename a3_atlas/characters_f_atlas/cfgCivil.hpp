// Arma 3
class Civilian_F;
class C_man_1;
class C_man_1_1_F;
class I_G_Soldier_M_F;
// Arma 3 Apex
class I_C_Soldier_Bandit_6_F;
class C_Man_casual_1_F;
// Arma 3 Aegis
class C_Jayholder;
// Arma 3 Atlas
class C_Uniform_01_shirt_base_F: Civilian_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\C_Citizen2.p3d";
	hiddenSelections[] =
    {
        camo2,
        camo1
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3\Characters_F\Civil\Data\c_cloth2.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
};
class C_Uniform_01_shirt_pattern_F: C_Uniform_01_shirt_base_F
{
	uniformClass = U_C_Uniform_01_shirt_pattern_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_pattern_F_1_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_pattern_F_2_CO.paa"
    };
};
class C_Uniform_01_shirt_striped_F: C_Uniform_01_shirt_base_F
{
	uniformClass = U_C_Uniform_01_shirt_striped_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_striped_F_1_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_striped_F_2_CO.paa"
    };
};
class C_Uniform_01_shirt_white_F: C_Uniform_01_shirt_base_F
{
	uniformClass = U_C_Uniform_01_shirt_white_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_white_F_1_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_shirt_white_F_2_CO.paa"
    };
};
class C_CommonerJacket_01_marroon_F: I_G_Soldier_M_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_C_CommonerJacket_01_marroon_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_CommonerJacket_01_marroon_F_CO.paa"};
};
class C_CommonerJacket_01_blue_F: C_CommonerJacket_01_marroon_F
{
	uniformClass = U_C_CommonerJacket_01_blue_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_CommonerJacket_01_blue_F_CO.paa"};
};
class C_CommonerJacket_01_grey_F: C_CommonerJacket_01_marroon_F
{
	uniformClass = U_C_CommonerJacket_01_grey_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_CommonerJacket_01_grey_F_CO.paa"};
};
class C_Uniform_01_tshirt_white_F: C_Jayholder
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_C_Uniform_01_tshirt_white_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_tshirt_white_F_CO.paa",
        "\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_C_Uniform_01_tshirt_white_F_CO.paa"
    };
};
class C_man_persian_base_F: C_man_1
{
	scope = private;
	identityTypes[] =
    {
        Head_TK,
        G_CIVIL_male,
        LanguagePER_F
    };
	editorSubcategory = EdSubcat_Personnel_Persian;
	genericNames = TakistaniMen;
    headgearList[] =
    {
        H_Cap_tan,0.25,
        H_Cap_blk,0.25,
        H_Cap_red,0.25,
        H_Cap_grn,0.25,
        H_Cap_blu,0.25,
        H_Cap_grn_BI,0.25,
        H_Cap_surfer,0.25,
        H_StrawHat,0.25,
        H_StrawHat_dark,0.25,
        H_Hat_blue,0.25,
        H_Hat_brown,0.25,
        H_Hat_camo,0.25,
        H_Hat_grey,0.25,
        H_Hat_checker,0.25,
        H_Hat_tan,0.25,
        H_Hat_Pakol_brn_F,0.25,
        H_Hat_Pakol_gry_F,0.25,
        H_Hat_Pakol_tan_F,0.25,
        H_FakeHeadgear,2,
        "",2
    };
};
class C_man_1_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_man_1_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 1";
	uniformClass = U_C_Uniform_01_shirt_pattern_F;
};
class C_Man_2_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_2_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 2";
	uniformClass = U_C_Uniform_01_shirt_striped_F;
};
class C_Man_3_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_3_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 3";
	uniformClass = U_C_Uniform_01_shirt_white_F;
};
class C_Man_4_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_4_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 4";
	uniformClass = U_C_CommonerJacket_01_marroon_F;
};
class C_Man_5_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_5_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 5";
	uniformClass = U_C_CommonerJacket_01_blue_F;
};
class C_Man_6_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_6_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 6";
	uniformClass = U_C_CommonerJacket_01_grey_F;
};
class C_Man_7_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_7_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 7";
	uniformClass = U_C_Uniform_01_tshirt_white_F;
};
class C_Man_8_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_8_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 8";
	uniformClass = U_C_Man_casual_7_F;
};
class C_Man_9_persian_F: C_man_persian_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\C_Man_9_persian_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = "Civilian 9";
	uniformClass = U_C_Man_casual_8_F;
};
/*
class CivilianPresence_C_man_1_persian_F: C_man_1_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_2_persian_F: C_Man_2_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_3_persian_F: C_Man_3_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_4_persian_F: C_Man_4_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_5_persian_F: C_Man_5_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_6_persian_F: C_Man_6_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_7_persian_F: C_Man_7_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_8_persian_F: C_Man_8_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
class CivilianPresence_C_Man_9_persian_F: C_Man_9_persian_F
{
	scope = protected;
	fsmDanger = "A3\Modules_F_Tacops\Ambient\CivilianPresence\FSM\danger.fsm";
	fsmFormation = "";
};
*/