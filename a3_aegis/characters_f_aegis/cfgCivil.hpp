// Arma 3
class Civilian_F;
class C_man_1: Civilian_F
{
    headgearList[] =
    {
        H_Cap_tan,0.25,
        H_Cap_blk,0.25,
        H_Cap_blk_CMMG,0.25,
        H_Cap_brn_SERO,0.25,
        H_Cap_red,0.25,
        H_Cap_grn,0.25,
        H_Cap_blu,0.25,
        H_Cap_grn_BI,0.25,
        H_Cap_surfer,0.25,
        H_Cap_Lyfe,0.25,
        H_Cap_MaldenTours,0.25,
        H_Cap_redburger,0.25,
        H_Bandanna_khk,0.25,
        H_Bandanna_sgg,0.25,
        H_Bandanna_cbr,0.25,
        H_Bandanna_gry,0.25,
        H_Bandanna_camo,0.25,
        H_Bandanna_mcamo,0.25,
        H_Bandanna_surfer,0.25,
        H_Bandanna_surfer_blk,0.25,
        H_Bandanna_surfer_grn,0.25,
        H_Bandanna_blu,0.25,
        H_Bandanna_sand,0.25,
        H_StrawHat,0.25,
        H_StrawHat_dark,0.25,
        H_Hat_blue,0.25,
        H_Hat_brown,0.25,
        H_Hat_camo,0.25,
        H_Hat_grey,0.25,
        H_Hat_checker,0.25,
        H_Hat_tan,0.25,
        H_Watchcap_blk,0.25,
        H_Watchcap_cbr,0.25,
        H_Watchcap_camo,0.25,
        H_Watchcap_khk,0.25,
        H_Watchcap_sgg,0.25,
        H_Watchcap_red,0.25,
        H_FakeHeadgear,2,
        "",2
    };
    class Wounds
    {
        tex[] = {};
        mat[] =
        {
			"A3\Characters_F\Civil\Data\c_cloth1.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
			"A3\Characters_F\civil\Data\c_poloshirt.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirt_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Civil\Data\hunter.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"A3\Characters_F\Civil\Data\hunter_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
			"A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
			"A3\Characters_F\Civil\Data\priest.rvmat",
			"A3\Characters_F\Civil\Data\priest_injury.rvmat",
			"A3\Characters_F\Civil\Data\priest_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
        };
    };
};
class C_man_1_1_F: C_man_1
{
    model = "\A3\Characters_F\Civil\c_citizen3.p3d";
	modelSides[] = {TCivilian};
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\c_cloth1_CO.paa",
        "\A3\Characters_F\Civil\Data\c_cloth4_CO.paa"
    };
};
class C_man_1_2_F: C_man_1_1_F
{
    model = "\A3\Characters_F\Civil\c_citizen4.p3d";
	modelSides[] = {TCivilian};
    uniformClass = U_C_Commoner1_2;
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\c_cloth2_CO.paa",
        "\A3\Characters_F\Civil\Data\c_cloth4_CO.paa"
    };
};
class C_man_1_3_F: C_man_1_1_F
{
    model = "\A3\Characters_F\Civil\c_citizen5.p3d";
	modelSides[] = {TCivilian};
    uniformClass = U_C_Commoner1_3;
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Common\Data\basicbody_blue_CO.paa",
        "\A3\Characters_F\Civil\Data\c_cloth4_CO.paa"
    };
};
class C_man_p_fugitive_F: C_man_1
{
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_CO.paa"};
};
class C_man_p_beggar_F: C_man_p_fugitive_F
{
	model = "\A3\Characters_F\Civil\I_L_Looter_01_tshirt_F.p3d";
	modelSides[] = {TCivilian};
    hiddenSelections[] =
    {
        camo1,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\Civil\Data\c_cloth1_v2_CO.paa",
        "\A3\Characters_F_Gamma\Guerrilla\Data\IG_Guerrilla3_1_CO.paa"
    };
};
class C_man_hunter_1_F: C_man_1
{
    model = "\A3\Characters_F_Gamma\Guerrilla\IG_Guerrilla3_1.p3d";
	modelSides[] = {TCivilian};
	displayName = $STR_A3_A_CfgVehicles_C_man_hunter_1_F0;
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\hunter_bushman_CO.paa"};
    hideProxySelections[] = {ghillie_hide};
    headgearList[] =
    {
        H_Booniehat_khk,1,
        H_Booniehat_oli,1,
        H_Booniehat_tan,1,
        H_Booniehat_mgrn,1
    };
};
class C_man_p_shorts_1_F: C_man_1
{
    scope = protected;
    scopeCurator = private;
};
class C_man_pilot_F: C_man_1
{
    /*
    model = "\A3_Aegis\Characters_F_Aegis\Uniforms\c_hiker.p3d";
    uniformClass = U_C_HikingClothes_blk;
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\c_hiker_CO.paa"};
    */
    headgearList[] =
    {
        H_HeadSet_black_F,1,
        H_HeadSet_orange_F,1,
        H_HeadSet_red_F,1,
        H_HeadSet_white_F,1,
        H_HeadSet_yellow_F,1
    };
};
// Arma 3 Apex
class C_Man_casual_1_F;
// Arma 3 Laws of War
class C_Man_Messenger_01_F: Civilian_F
{
};
// Arma 3 Enoch
class C_E_Man_Base_F;
class C_E_LooterJacket_01_F: C_E_Man_Base_F
{
    hideProxySelections[] = {ghillie_hide};
};
// Arma 3 Aegis
class C_Uniform_Formal_01_base_F: Civilian_F
{
	hiddenSelections[] =
    {
        camo1,
        id,
        badge
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
        {
            "A3\Characters_F_Enoch\Uniforms\Data\scientist_01.rvmat",
            "A3\Characters_F_Enoch\Uniforms\Data\scientist_01_injury.rvmat",
            "A3\Characters_F_Enoch\Uniforms\Data\scientist_01_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
        };
	};
};
class C_Uniform_Formal_01_striped_F: C_Uniform_Formal_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\Scientist_01_F.p3d";
	uniformClass = U_C_Uniform_Formal_01_striped_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_striped_CO.paa",
        "",
        ""
    };
};
class C_Uniform_Formal_01_white_F: C_Uniform_Formal_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\Scientist_01_F.p3d";
	uniformClass = U_C_Uniform_Formal_01_white_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_white_CO.paa",
        "",
        ""
    };
};
class C_Uniform_Formal_01_blue_F: C_Uniform_Formal_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	scope = protected;
	model = "\A3\Characters_F\Civil\Scientist_01_F.p3d";
	uniformClass = U_C_Uniform_Formal_01_blue_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Formal_01_blue_CO.paa",
        "",
        ""
    };
};
class C_CBRN_Man_Oversuit_01_Black_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_C_CBRN_Suit_01_Black_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_Black_CO.paa"};
};
class C_CBRN_Man_Oversuit_01_Yellow_F: B_CBRN_Man_Oversuit_01_MTP_F
{
	author = $STR_A3_A_AveryTheKitty;
	uniformClass = U_C_CBRN_Suit_01_Yellow_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\CBRN_Suit_01_Yellow_CO.paa"};
};
class C_man_1_1_F_afro: C_man_1_1_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_1_F_afro.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_man_1_1_F_euro: C_man_1_1_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_1_F_euro.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_man_1_1_F_asia: C_man_1_1_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_1_F_asia.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_man_1_2_F_afro: C_man_1_2_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_2_F_afro.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_man_1_2_F_euro: C_man_1_2_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_2_F_euro.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_man_1_2_F_asia: C_man_1_2_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_2_F_asia.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_man_1_3_F_afro: C_man_1_3_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_3_F_afro.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_man_1_3_F_euro: C_man_1_3_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_3_F_euro.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_man_1_3_F_asia: C_man_1_3_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_1_3_F_asia.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_man_priest_F: C_man_1
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_man_priest_F.jpg";
    model = "\A3_Aegis\Characters_F_Aegis\Uniforms\c_priest.p3d";
	modelSides[] = {TCivilian};
    uniformClass = U_C_PriestBody;
    displayName = $STR_A3_C_man_priest_F0;
	class EventHandlers{};
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\priest_CO.paa"};
};
class C_Jayholder: C_man_1
{
	scope = protected;
	scopeCurator = private;
	model = "\A3\Characters_F\Civil\I_C_Soldier_Bandit_2_F.p3d";
	uniformClass = U_Jayholder;
	hiddenSelections[] =
	{
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\c_cloth1_jayholder_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\c_cloth1_jayholder_CO.paa"
	};
};
class C_Man_casual_7_F: C_Man_casual_1_F
{
  author = $STR_A3_A_AveryTheKitty;
  editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
  displayName = "Civilian (Casual) 4";
  uniformClass = U_C_Man_casual_7_F;
  hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\IG_poloshirt_1_CO.paa"};
};
class C_Man_casual_7_F_afro: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_Man_casual_7_F_euro: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_Man_casual_7_F_asia: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_Man_casual_7_F_tanoan: C_Man_casual_7_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_7_F.jpg";
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel_Tanoan;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};
class C_Man_casual_8_F: C_Man_casual_1_F
{
  author = $STR_A3_A_AveryTheKitty;
  editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
  displayName = "Civilian (Casual) 5";
  uniformClass = U_C_Man_casual_8_F;
  hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\IG_poloshirt_2_CO.paa"};
};
class C_Man_casual_8_F_afro: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_Man_casual_8_F_euro: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_Man_casual_8_F_asia: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_Man_casual_8_F_tanoan: C_Man_casual_8_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_8_F.jpg";
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel_Tanoan;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};
class C_Man_casual_9_F: C_Man_casual_1_F
{
  author = $STR_A3_A_AveryTheKitty;
  editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
  displayName = "Civilian (Casual) 6";
  uniformClass = U_C_Man_casual_9_F;
  hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\U_C_Man_casual_9_F_CO.paa"};
};
class C_Man_casual_9_F_afro: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = Afroamerican;
    editorSubcategory = EdSubcat_Personnel_African;
    identityTypes[] =
    {
        Head_African,
        G_CIVIL_male
    };
	genericNames = AfroMen;
};
class C_Man_casual_9_F_euro: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = European;
    editorSubcategory = EdSubcat_Personnel_European;
    identityTypes[] =
    {
        Head_Euro,
        G_CIVIL_male
    };
	genericNames = NATOMen;
};
class C_Man_casual_9_F_asia: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = Asian;
    editorSubcategory = EdSubcat_Personnel_Asian;
    identityTypes[] =
    {
        Head_Asian,
        G_CIVIL_male
    };
	genericNames = AsianMen;
};
class C_Man_casual_9_F_tanoan: C_Man_casual_9_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\C_Man_casual_9_F.jpg";
    vehicleClass = MenTanoan;
    editorSubcategory = EdSubcat_Personnel_Tanoan;
     identityTypes[] =
    {
        LanguageFRE_F,
        Head_Tanoan,
        G_CIV_exp
    };
	genericNames = TanoanMen;
};