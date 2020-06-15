// Arma 3 Enoch
class I_E_Man_Base_F;
class I_E_Uniform_01_F: I_E_Man_Base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_pants_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_camo_CO.paa"
    };
};
class I_E_Uniform_01_shortsleeve_F: I_E_Man_Base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_pants_CO.paa"
    };
};
class I_E_Uniform_01_tanktop_F: I_E_Man_Base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_tanktop_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_pants_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_camo_CO.paa"
    };
};
class I_E_Uniform_01_officer_F: I_E_Man_Base_F
{
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Officer_01_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_pants_CO.paa"
	};
};
class I_E_Uniform_01_coveralls_F: I_E_Man_Base_F
{
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Coveralls_01_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_pants_CO.paa",
        "\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_camo_CO.paa"
	};
};
class I_E_Uniform_01_sweater_F: I_E_Man_Base_F
{
	model = "\A3\Characters_F_Exp\Gendarmerie\B_GEN_Commander_F.p3d";
};
class I_E_Soldier_base_F: I_E_Man_Base_F
{
	identityTypes[] =
    {
        LanguagePOL_F,
        Head_Enoch,
        Head_Euro,
        G_EAF_default
    };
};
class I_E_Soldier_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    magazines[] =
    {
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_unarmed_F: I_E_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_unarmed_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems
	};
};
class I_E_Soldier_A_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_A_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
		mag_2(HandGrenade),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
		mag_2(HandGrenade),
		mag_2(SmokeShell)
	};
};
class I_E_Soldier_AAR_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAR_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AR_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AR_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        LMG_Mk200_black_RCO_LP_BI_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Mk200_black_RCO_LP_BI_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	threat[] = {1,0.1,0.3};
};
class I_E_Soldier_lite_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_lite_F.jpg";
	linkedItems[] =
	{
		H_MilCap_eaf,
		V_CarrierRigKBT_01_EAF_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_eaf,
		V_CarrierRigKBT_01_EAF_F,
		DefaultManLinkedItems
	};
	weapons[] =
    {
        arifle_MSBS65_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
	cost = 90000;
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch
	};
};
class I_E_Soldier_GL_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_GL_F.jpg";
    weapons[] =
    {
        arifle_MSBS65_GL_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_GL_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	cost = 130000;
	threat[] = {1,0.3,0.1};
};
class I_E_soldier_M_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_M_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_Mark_SOS_LP_BI_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_Mark_SOS_LP_BI_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Officer_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Officer_F.jpg";
	weapons[] =
	{
		arifle_MSBS65_F,
		hgun_Pistol_heavy_01_green_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_F,
		hgun_Pistol_heavy_01_green_MRD_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    cost = 600000;
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch
	};
};
class I_E_Soldier_SL_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_SL_F.jpg";
	weapons[] =
    {
        arifle_MSBS65_GL_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_GL_ico_pointer_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
    };
};
class I_E_Soldier_TL_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_TL_F.jpg";
    weapons[] =
    {
        arifle_MSBS65_GL_ico_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_GL_ico_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
        mag_2(11Rnd_45ACP_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
    };
};
class I_E_RadioOperator_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_RadioOperator_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AA_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AA_F.jpg";
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		launch_I_Titan_eaf_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		launch_I_Titan_eaf_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AT_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AT_F.jpg";
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		launch_I_Titan_short_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		launch_I_Titan_short_F,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_LAT_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_LAT_F.jpg";
    weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        launch_NLAW_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        launch_NLAW_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_LAT2_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_LAT2_F.jpg";
    weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        launch_MRAWS_green_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        launch_MRAWS_green_F,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AAA_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAA_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_AAT_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_AAT_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_GMG_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_GMG_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_MG_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_MG_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_Mort_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_Mort_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_AMG_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_AMG_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Support_AMort_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Support_AMort_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_ChestrigF_oli,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_aco_pointer_f,
		hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(I_E_IR_Grenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_Pathfinder_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Pathfinder_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
        G_Bandanna_oli,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
        G_Bandanna_oli,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_UBS_snds_ico_pointer_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_UBS_snds_ico_pointer_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_E_IR_Grenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_2(I_E_IR_Grenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_blue)
    };
};
class I_E_Engineer_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Engineer_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_ear_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_ear_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_eaf_eng_F;
	weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
};
class I_E_Soldier_Exp_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Exp_F.jpg";
    weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_soldier_Mine_F: I_E_Soldier_base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_Mine_F.jpg";
};
class I_E_Soldier_Repair_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_Repair_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_headset_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Soldier_CBRN_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_CBRN_F.jpg";
	weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_Scientist_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Scientist_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
    weapons[] =
    {
        SMG_03C_TR_black,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        SMG_03C_TR_black,
        DefaultManWeapons
    };
    magazines[] = {mag_4(50Rnd_570x28_SMG_03)};
    respawnMagazines[] = {mag_4(50Rnd_570x28_SMG_03)};
};
class I_E_Scientist_Unarmed_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Scientist_Unarmed_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
        G_AirPurifyingRespirator_01_F,
		DefaultManLinkedItems
	};
    magazines[] = {};
    respawnMagazines[] = {};
};
class I_E_Medic_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Medic_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_ear_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_ear_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
};
class I_E_Soldier_MP_F: I_E_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_MP_F.jpg";
	weapons[] =
    {
        arifle_MSBS65_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        HandGrenade,
        SmokeShell
    };
};
class I_E_Crew_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Crew_F.jpg";
	linkedItems[] =
	{
		H_Tank_eaf_F,
		V_CarrierRigKBT_01_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_Tank_eaf_F,
		V_CarrierRigKBT_01_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_aco_f,
        hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_f,
        hgun_Pistol_heavy_01_green_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
    };
    engineer = true;
};
class I_E_Helipilot_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Helipilot_F.jpg";
    linkedItems[] =
    {
        H_PilotHelmetHeli_I_E,
        V_CarrierRigKBT_01_EAF_F,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_I_E,
        V_CarrierRigKBT_01_EAF_F,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    magazines[] =
    {
        mag_4(50Rnd_570x28_SMG_03),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_4(50Rnd_570x28_SMG_03),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch
	};
};
class I_E_Helicrew_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Helicrew_F.jpg";
    linkedItems[] =
    {
        H_CrewHelmetHeli_I_E,
        V_CarrierRigKBT_01_EAF_F,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_I_E,
        V_CarrierRigKBT_01_EAF_F,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
    {
        arifle_MSBS65_aco_f,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_f,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_msbs_mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch
	};
};
class I_E_Soldier_UAV_F: I_E_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_UAV_F.jpg";
	linkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
        I_E_UAVTerminal,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_F,
		V_CarrierRigKBT_01_light_EAF_F,
		DefaultManLinkedItems,
        I_E_UAVTerminal,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class I_E_soldier_UAV_06_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_F.jpg";
};
class I_E_soldier_UAV_06_medical_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UAV_06_medical_F.jpg";
};
class I_E_soldier_UGV_02_Science_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UGV_02_Science_F.jpg";
};
class I_E_soldier_UGV_02_Demining_F: I_E_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_soldier_UGV_02_Demining_F.jpg";
};
// Arma 3 Aegis
class I_E_Uniform_01_pilot_F: I_pilot_F
{
    scope = protected;
    scopeCurator = private;
	uniformClass = U_I_E_Uniform_01_pilot_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Pilot_01_CO.paa"};
};
class I_E_Fighter_Pilot_F: I_E_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Fighter_Pilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_I_E_Uniform_01_pilot_F;
    linkedItems[] =
    {
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_I_E,
        DefaultManLinkedItems
    };
	weapons[] =
    {
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    cost = 165000;
    role = Crewman;
	camouflage = 2;
	identityTypes[] =
	{
		LanguagePOL_F,
		Head_Euro,
		Head_Enoch
	};
};
class I_E_Soldier_CQ_F: I_E_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	uniformClass = U_I_E_Uniform_01_F;
	linkedItems[] =
	{
		H_HelmetHBK_ear_F,
		V_CarrierRigKBT_01_heavy_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetHBK_ear_F,
		V_CarrierRigKBT_01_heavy_EAF_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
    weapons[] =
    {
        arifle_MSBS65_UBS_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_UBS_aco_pointer_f,
        hgun_Pistol_heavy_01_green_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
        mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 130000;
    threat[] = {1,0.3,0.1};
};
class I_E_Soldier_sniper_base: I_E_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_sniper_s};
            speechPlural[] = {veh_infantry_sniper_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
    textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
    nameSound = veh_infantry_sniper_s;
	scope = private;
    vehicleClass = MenSniper;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
	canHideBodies = true;
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper
	};
};
class I_E_ghillie_base_F: I_E_Soldier_sniper_base
{
    author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_cfgVehicles_O_ghillie_base_F0;
	uniformClass = U_I_E_FullGhillie_wdl_F;
	model = "\A3\Characters_F_Mark\INDEP\I_FullGhillie_F.p3d";
	role = Marksman;
	cost = 350000;
	threat[] = {1,0.3,0.3};
	camouflage = 0.4;
	armor = 2;
	armorStructural = 3;
	explosionShielding = 0.3;
	hiddenSelections[] =
	{
		camo,
		camo3,
		camo4
	};
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
			"A3\Characters_F_Mark\Common\Data\ghillie_coverall_injury.rvmat",
            INJURY_PERSONALITY_MATERIALS
		};
	};
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_Pistol_heavy_01_green_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_Pistol_heavy_01_green_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	hideProxySelections[] = {ghillie_hide};
	magazines[] =
	{
		mag_6(7Rnd_408_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
	};
	respawnMagazines[] =
	{
		mag_6(7Rnd_408_Mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
		muzzle_snds_408_black
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
		muzzle_snds_408_black
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_EAF_F,
        ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class I_E_ghillie_wdl_F: I_E_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_EAF_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
};
class I_E_ghillie_spotter_wdl_F: I_E_ghillie_wdl_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_SF_s};
			speechPlural[] = {veh_infantry_SF_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_SF_s;
	textPlural = $STR_A3_nameSound_veh_infantry_SF_p;
	nameSound = veh_infantry_SF_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_E_ghillie_spotter_wdl_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_MSBS65_ico_pointer_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_ico_pointer_F,
        hgun_Pistol_heavy_01_green_snds_F,
        DefaultManWeapons,
        Laserdesignator_03
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_E_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(11Rnd_45ACP_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(I_E_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_blue)
    };
	items[] =
	{
		FirstAidKit,
		optic_tws
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws
	};
    linkedItems[] =
    {
        V_TacChestRig_oli_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_TacChestRig_oli_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};