// Arma 3
class O_Soldier_base_F: SoldierEB
{
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_CO.paa"
    };
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
    class EventHandlers;
};
class O_Soldier_02_F;
class O_Soldier_F: O_Soldier_base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_F.jpg";
};
class O_officer_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_officer_F.jpg";
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_hex_CO.paa"};
    weapons[] =
    {
        arifle_Katiba_C_F,
        hgun_Pistol_heavy_02_Yorris_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_F,
        hgun_Pistol_heavy_02_Yorris_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(6Rnd_45ACP_Cylinder),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(6Rnd_45ACP_Cylinder),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    linkedItems[] =
    {
        H_Beret_CSAT_01_F,
        V_BandollierB_khk,
        ItemGPS,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_Beret_CSAT_01_F,
        V_BandollierB_khk,
        ItemGPS,
        DefaultManLinkedItems
    };
};
class O_Soldier_lite_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_lite_F.jpg";
    uniformClass = U_O_officer_noInsignia_hex_F;
    weapons[] =
    {
        arifle_Katiba_C_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_MilCap_ocamo,
        V_BandollierB_khk,
        DefaultManLinkedItems
    };
};
class O_Soldier_GL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_GL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        H_HelmetLeaderO_ocamo,
        V_HarnessOGL_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetLeaderO_ocamo,
        V_HarnessOGL_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_AR_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_AR_F.jpg";
    weapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_SL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_SL_F.jpg";
	role = Grenadier;
    weapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
	linkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOGL_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOGL_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_TL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_TL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
	linkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOGL_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOGL_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_soldier_M_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_M_F.jpg";
    weapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_LAT_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_LAT_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        launch_RPG32_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        launch_RPG32_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_TacVest_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_TacVest_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_medic_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_medic_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_soldier_repair_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_repair_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_soldier_exp_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_exp_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_TacVest_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_TacVest_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_helipilot_F: O_Soldier_02_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_helipilot_F.jpg";
	weapons[] =
	{
		SMG_02_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_A_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_A_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AT_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_AT_F.jpg";
    magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_AA_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_AA_F.jpg";
    magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_engineer_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_engineer_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
};
class O_crew_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_crew_F.jpg";
	uniformClass = U_O_CombatUniform_ocamo;
    linkedItems[] =
    {
        H_HelmetCrew_O,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetCrew_O,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    engineer = true;
};
class O_Pilot_F: O_helipilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Pilot_F.jpg";
	weapons[] =
	{
		SMG_02_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
    linkedItems[] =
    {
        H_HeadSet_black_F,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_HeadSet_black_F,
        DefaultManLinkedItems
    };
};
class O_helicrew_F: O_helipilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_helicrew_F.jpg";
	weapons[] =
	{
		arifle_Katiba_C_ACO_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_Katiba_C_ACO_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_soldier_PG_F: O_Soldier_base_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_PG_F.jpg";
};
class O_Story_Colonel_F: O_officer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Story_Colonel_F.jpg";
	displayName = $STR_A3_O_Story_Colonel_F0;
	scope = public;
	scopeCurator = public;
	weapons[] = {DefaultManWeapons};
	respawnweapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
    linkedItems[] =
    {
        H_MilCap_ocamo,
        ItemGPS,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_MilCap_ocamo,
        ItemGPS,
        DefaultManLinkedItems
    };
	class EventHandlers: EventHandlers
	{
		init = "(_this select 0) setIdentity ""Aegis_O_Namdar""";
	};
};
class O_Story_CEO_F: O_Soldier_base_F
{
	scope = protected;
    scopeCurator = private;
};
class O_soldier_UAV_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_UAV_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_UavTerminal,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_UavTerminal,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_diver_base_F: O_Soldier_base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit_iran_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_iran_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    canHideBodies = true;
};
class O_diver_F: O_Soldier_diver_base_F
{
    backpack = "";
};
class O_diver_TL_F: O_Soldier_diver_base_F
{
    weapons[] =
    {
        arifle_SDAR_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SDAR_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        mag_2(Chemlight_red)
    };
};
class O_diver_exp_F;
class O_Soldier_sniper_base_F: O_Soldier_base_F
{
    canHideBodies = true;
    linkedItems[] =
    {
        V_TacVest_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_spotter_F: O_Soldier_sniper_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_spotter_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_sniper_F: O_Soldier_sniper_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_sniper_F.jpg";
    magazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
};
class O_Soldier_recon_base: O_Soldier_base_F
{
	identityTypes[] =
	{
		LanguagePER_F,
		Head_TK,
		G_IRAN_SF
	};
    icon = iconManRecon;
    canHideBodies = true;
	uniformClass = U_O_CombatUniform_ocamo;
	items[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_Nightstalker
	};
	linkedItems[] =
	{
		H_HelmetSpecO_ocamo,
		V_HarnessOSpec_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_ocamo,
		V_HarnessOSpec_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_recon_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_recon_M_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_M_F.jpg";
    weapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_S_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_S_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_blk,
		V_Chestrig_khk,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_blk,
		V_Chestrig_khk,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_recon_LAT_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_LAT_F.jpg";
	uniformClass = U_O_CombatUniform_ocamo;
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_snds_F,
        launch_RPG32_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_snds_F,
        launch_RPG32_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_blk,
		V_HarnessOSpec_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_blk,
		V_HarnessOSpec_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_recon_medic_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_medic_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_red)
    };
};
class O_recon_exp_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_exp_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_recon_JTAC_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_JTAC_F.jpg";
	backpack = B_RadioBag_01_hex_F;
    weapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOGL_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOGL_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_recon_TL_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_TL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow,
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOSpec_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetLeaderO_ocamo,
		V_HarnessOSpec_brn,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_support_base_F: O_Soldier_base_F
{
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_ChestrigF_khk,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_ChestrigF_khk,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAR_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAT_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAA_F: O_Soldier_AAT_F
{
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_support_MG_F;
class O_support_GMG_F;
class O_support_Mort_F;
class O_support_AMG_F;
class O_support_AMort_F;
class O_Soldier_Urban_base: O_Soldier_base_F
{
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_F;
class O_soldierU_AR_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AR_F.jpg";
    weapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
};
class O_soldierU_AAR_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AAR_F.jpg";
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_LAT_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_LAT_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_AT_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AT_F.jpg";
    magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_AAT_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AAT_F.jpg";
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_AA_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AA_F.jpg";
    weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        launch_O_Titan_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        launch_O_Titan_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_AAA_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_AAA_F.jpg";
	weapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_Katiba_ACO_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnmagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_soldierU_TL_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_TL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    linkedItems[] =
    {
        H_HelmetLeaderO_oucamo,
        V_HarnessOGL_gry,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetLeaderO_oucamo,
        V_HarnessOGL_gry,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_SoldierU_SL_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_SL_F.jpg";
	role = Grenadier;
    weapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    linkedItems[] =
    {
        H_HelmetLeaderO_oucamo,
        V_HarnessOGL_gry,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetLeaderO_oucamo,
        V_HarnessOGL_gry,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_medic_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_medic_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_repair_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_repair_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_soldierU_exp_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_exp_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_oucamo,
		V_TacVest_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_oucamo,
		V_TacVest_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
};
class O_engineer_U_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_engineer_U_F.jpg";
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
};
class O_soldierU_M_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_M_F.jpg";
    weapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_01_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_soldierU_A_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_A_F.jpg";
    magazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_SoldierU_GL_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_SoldierU_GL_F.jpg";
    weapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        H_HelmetLeaderO_oucamo,
        V_HarnessOGL_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetLeaderO_oucamo,
        V_HarnessOGL_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
// Arma 3 Marksman
class O_ghillie_base_F: O_Soldier_sniper_base_F
{
    magazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(5Rnd_127x108_Mag),
        mag_2(5Rnd_127x108_APDS_Mag),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_ghillie_lsh_F;
class O_ghillie_sard_F;
class O_ghillie_ard_F;
class O_Sharpshooter_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_DMR_05_hex_KHS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_hex_KHS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_TacVest_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_TacVest_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Urban_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_DMR_05_hex_KHS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_hex_KHS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(10Rnd_93x64_DMR_05_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_Pathfinder_F: O_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Pathfinder_F.jpg";
	magazines[] =
	{
        mag_8(10Rnd_127x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	respawnMagazines[] =
	{
        mag_8(10Rnd_127x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
	};
	linkedItems[] =
	{
		H_HelmetSpecO_ocamo,
		V_HarnessOSpec_brn,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_ocamo,
		V_HarnessOSpec_brn,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_HeavyGunner_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_HeavyGunner_F.jpg";
    magazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_HarnessO_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_HarnessO_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Urban_HeavyGunner_F.jpg";
    magazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(150Rnd_93x64_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_HarnessO_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_HarnessO_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
// Arma 3 Jets
class O_Fighter_Pilot_F: O_Pilot_F
{
	magazines[] =
	{
        mag_2(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
        mag_2(17Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		H_PilotHelmetFighter_O,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PilotHelmetFighter_O,
		DefaultManLinkedItems
	};
};
// Arma 3 Tanks
class O_Soldier_HAT_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_HAT_F.jpg";
    weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        launch_O_Vorona_brown_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        launch_O_Vorona_brown_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_AHAT_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
// Arma 3 Aegis
class O_ReconFatigues_01_blk_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_SpecopsUniform_blk;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_blk_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"
    };
};
class O_Soldier_CQ_F: O_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_CQ_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
    cost = 130000;
    threat[] = {1,0.3,0.1};
    weapons[] =
    {
        sgun_AA40_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_AA40_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_brn,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_SoldierU_CQ_F: O_Soldier_Urban_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_SoldierU_CQ_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
    cost = 130000;
    threat[] = {1,0.3,0.1};
    weapons[] =
    {
        sgun_AA40_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_AA40_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_oucamo,
        V_TacVest_gry,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_recon_CQ_F: O_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_CQ_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_recon_CQ_F0;
    cost = 130000;
    threat[] = {1,0.3,0.1};
    weapons[] =
    {
        sgun_AA40_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_AA40_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        H_HelmetSpecO_ocamo,
        V_HarnessOSpec_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecO_ocamo,
        V_HarnessOSpec_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Scientist_F: O_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Scientist_F.jpg";
    scope = public;
    model = "\A3\Characters_F\common\coveralls.p3d";
	modelSides[] =
	{
		TCivilian,
		TEast
	};
    displayName = $STR_A3_C_scientist_F0;
	nakedUniform = U_BasicBody;
    uniformClass = U_OI_Scientist;
	Items[] = {FirstAidKit};
	respawnItems[] = {FirstAidKit};
	class EventHandlers: EventHandlers
	{
		init = "";
	};
    hiddenSelections[] = {camo};
    hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_scientist_CO.paa"};
	weapons[] =
	{
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		DefaultManWeapons
	};
	role = Unarmed;
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] =
    {
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        DefaultManLinkedItems
    };
    class HitPoints
    {
        class HitFace
        {
            armor = 1;
            material = -1;
            name = face_hub;
            passThrough = 0.8;
            radius = 0.08;
            explosionShielding = 0.1;
            minimalHit = 0.01;
        };
        class HitNeck: HitFace
        {
            armor = 1;
            material = -1;
            name = neck;
            passThrough = 0.8;
            radius = 0.1;
            explosionShielding = 0.5;
            minimalHit = 0.01;
        };
        class HitHead: HitNeck
        {
            armor = 1;
            material = -1;
            name = head;
            passThrough = 0.8;
            radius = 0.2;
            explosionShielding = 0.5;
            minimalHit = 0.01;
            depends = HitFace max HitNeck;
        };
        class HitPelvis: HitHead
        {
            armor = 1;
            material = -1;
            name = pelvis;
            passThrough = 0.8;
            radius = 0.24;
            explosionShielding = 1;
            visual = injury_body;
            minimalHit = 0.01;
            depends = false;
        };
        class HitAbdomen: HitPelvis
        {
            armor = 1;
            material = -1;
            name = spine1;
            passThrough = 0.8;
            radius = 0.16;
            explosionShielding = 1;
            visual = injury_body;
            minimalHit = 0.01;
        };
        class HitDiaphragm: HitAbdomen
        {
            armor = 1;
            material = -1;
            name = spine2;
            passThrough = 0.8;
            radius = 0.18;
            explosionShielding = 6;
            visual = injury_body;
            minimalHit = 0.01;
        };
        class HitChest: HitDiaphragm
        {
            armor = 1;
            material = -1;
            name = spine3;
            passThrough = 0.8;
            radius = 0.18;
            explosionShielding = 6;
            visual = injury_body;
            minimalHit = 0.01;
        };
        class HitBody: HitChest
        {
            armor = 1000;
            material = -1;
            name = body;
            passThrough = 1;
            radius = 0;
            explosionShielding = 2.4;
            visual = injury_body;
            minimalHit = 0.01;
            depends = HitPelvis max HitAbdomen max HitDiaphragm max HitChest;
        };
        class HitArms: HitBody
        {
            armor = 5;
            material = -1;
            name = arms;
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 0.3;
            visual = injury_hands;
            minimalHit = 0.01;
            depends = false;
        };
        class HitHands: HitArms
        {
            armor = 5;
            material = -1;
            name = hands;
            passThrough = 1;
            radius = 0.1;
            explosionShielding = 0.3;
            visual = injury_hands;
            minimalHit = 0.01;
            depends = HitArms;
        };
        class HitLegs: HitHands
        {
            armor = 5;
            material = -1;
            name = legs;
            passThrough = 1;
            radius = 0.14;
            explosionShielding = 0.3;
            visual = injury_legs;
            minimalHit = 0.01;
            depends = false;
        };
        class Incapacitated: HitLegs
        {
            armor = 1000;
            material = -1;
            name = body;
            passThrough = 1;
            radius = 0;
            explosionShielding = 1;
            visual = "";
            minimalHit = 0;
            depends = (((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45;
        };
    };
    armor = 2;
    armorStructural = 2;
    explosionShielding = 0.2;
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F\Common\Data\pilot_suit.rvmat",
			"A3\Characters_F\Common\Data\W1_pilot_suit.rvmat",
			"A3\Characters_F\Common\Data\W1_pilot_suit.rvmat",
			"A3\Characters_F\Common\Data\coveralls.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
			"A3\Characters_F\Common\Data\coveralls_injury.rvmat"
		};
	};
};
class O_recon_AR_F: O_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_AR_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_O_R_Recon_AR_F0;
    role = MachineGunner;
    icon = iconManMG;
    cost = 220000;
    threat[] = {1,0.1,0.3};
    weapons[] =
    {
        LMG_Zafir_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Zafir_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(150Rnd_762x54_Box),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        H_HelmetSpecO_blk,
        V_HarnessOSpec_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecO_blk,
        V_HarnessOSpec_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
};
class O_recon_GL_F: O_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_recon_GL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_O_R_Recon_GL_F0;
    role = Grenadier;
    cost = 210000;
    weapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ACO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        H_HelmetSpecO_blk,
        V_HarnessOGL_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecO_blk,
        V_HarnessOGL_brn,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
};
class O_ghillie_spotter_lsh_F: O_ghillie_lsh_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_ghillie_spotter_lsh_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_lsh_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_ghillie_spotter_sard_F: O_ghillie_sard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_ghillie_spotter_sard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_sard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_ghillie_spotter_ard_F: O_ghillie_ard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_ghillie_spotter_ard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_ard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    linkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacChestRig_cbr_F,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_CBRN_F: O_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_O_CombatUniform_ocamo;
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		G_AirPurifyingRespirator_02_sand_F,
		V_HarnessO_brn,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		G_AirPurifyingRespirator_02_sand_F,
		V_HarnessO_brn,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
	};
	weapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
};
class O_RadioOperator_F: O_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_O_CombatUniform_ocamo;
	linkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_ocamo,
		V_HarnessO_brn,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	backpack = B_RadioBag_01_hex_F;
	weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_Urban_RadioOperator_F: O_soldierU_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Urban_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_O_CombatUniform_oucamo;
	linkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetO_oucamo,
		V_HarnessO_gry,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	backpack = B_RadioBag_01_oucamo_F;
	weapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ACO_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};