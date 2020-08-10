/*
- Tweaked "Fatigues (Hex) [CSAT]" uniform's gloves textures
- Tweaked "Wetsuit [CSAT]" uniform's textures and materials - advise replacing the model and injury materials once samples are available
- Replaced default NVGs with Compact NVGs
- Adjusted loadouts to be consistent with other factions' loadouts
- Hid Attar / Namdar story units - unused content
*/

// Arma 3
class O_Soldier_base_F: SoldierEB
{
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
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
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
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
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(6Rnd_45ACP_Cylinder),
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_Beret_CSAT_01_F,
        ItemGPS,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_Beret_CSAT_01_F,
        ItemGPS,
        DefaultManLinkedItems
    };
};
class O_Soldier_lite_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_lite_F.jpg";
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
        V_BandollierB_khk,
        H_MilCap_ocamo,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_MilCap_ocamo,
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
        V_HarnessOGL_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_brn,
        H_HelmetO_ocamo,
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
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_SL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_SL_F.jpg";
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_OPFOR
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
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_OPFOR
    };
	linkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetLeaderO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetLeaderO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_TL_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Soldier_TL_F.jpg";
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_OPFOR
    };
	linkedItems[] =
	{
		V_HarnessOGL_brn,
		H_HelmetLeaderO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_brn,
		H_HelmetLeaderO_ocamo,
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
        V_HarnessO_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_brn,
        H_HelmetO_ocamo,
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
        V_TacVest_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
        V_TacVest_khk,
		H_HelmetO_ocamo,
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
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    linkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
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
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
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
		V_TacVest_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetO_ocamo,
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
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
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
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
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
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
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
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
};
class O_crew_F: O_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_crew_F.jpg";
	uniformClass = U_O_CombatUniform_ocamo;
    linkedItems[] =
    {
        V_BandollierB_khk,
        H_HelmetCrew_O,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_BandollierB_khk,
        H_HelmetCrew_O,
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
        SOLDIER_SMOKE_SHELLS_OPFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        SOLDIER_SMOKE_SHELLS_OPFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_green),
        SOLDIER_SMOKE_SHELLS_OPFOR
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
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Story_Colonel_F: O_officer_F
{
	scope = protected;
    scopeCurator = private;
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
    linkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_khk,
        DefaultManLinkedItems,
        O_UavTerminal,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        H_HelmetO_ocamo,
        V_TacVest_khk,
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
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_green),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(17Rnd_9x21_Mag),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
};
class O_diver_exp_F;
class O_Soldier_sniper_base_F: O_Soldier_base_F
{
    canHideBodies = true;
    hiddenSelections[] =
    {
        camo1,
        camo2,
        camo3,
        insignia
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Characters_F\OPFOR\Data\clothing_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_desert_CO.paa"
    };
    linkedItems[] =
    {
        V_Chestrig_khk,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_khk,
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
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
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
		V_HarnessOSpec_brn,
		H_HelmetSpecO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_brn,
		H_HelmetSpecO_ocamo,
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
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(10Rnd_762x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetSpecO_blk,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetSpecO_blk,
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
		V_TacVest_khk,
		H_HelmetSpecO_blk,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetSpecO_blk,
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
        SOLDIER_SMOKE_SHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
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
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_blk,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_blk,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
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
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red),
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red),
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_OPFOR
    };
	linkedItems[] =
	{
		V_HarnessOGL_brn,
		H_HelmetSpecO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOGL_brn,
		H_HelmetSpecO_ocamo,
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
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
		SmokeShell,
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Rifleman;
	linkedItems[] =
	{
		V_HarnessOSpec_brn,
		H_HelmetLeaderO_ocamo,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessOSpec_brn,
		H_HelmetLeaderO_ocamo,
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
		V_ChestrigF_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_khk,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAR_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAT_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Soldier_AAA_F: O_Soldier_AAT_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
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
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
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
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
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
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
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
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
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
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
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
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
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
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
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
        SOLDIER_SMOKE_SHELLS_OPFOR,
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
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeRed_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell,
		1Rnd_SmokeYellow_Grenade_shell
    };
    linkedItems[] =
    {
        V_HarnessOGL_gry,
        H_HelmetLeaderO_oucamo,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_gry,
        H_HelmetLeaderO_oucamo,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
};
class O_SoldierU_SL_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_SL_F.jpg";
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_green),
        mag_2(30Rnd_65x39_caseless_green_mag_Tracer),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    linkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetLeaderO_oucamo,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetLeaderO_oucamo,
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
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    linkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
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
        V_TacVest_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
        V_TacVest_gry,
		H_HelmetO_oucamo,
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
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_green),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
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
        V_HarnessOGL_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_gry,
        H_HelmetO_oucamo,
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
        srifle_DMR_05_KHS_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_KHS_LP_F,
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
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_Urban_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_DMR_05_KHS_LP_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_KHS_LP_F,
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
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
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
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetSpecO_ocamo,
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
        V_HarnessO_brn,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_brn,
        H_HelmetO_ocamo,
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
        V_HarnessO_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessO_gry,
        H_HelmetO_oucamo,
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
        SOLDIER_SMOKE_SHELLS_OPFOR
	};
	respawnMagazines[] =
	{
        mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
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
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_Soldier_AHAT_F: O_Soldier_support_base_F
{
	linkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
};
// Arma 3 Aegis
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
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetO_ocamo,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
};
class O_soldierU_CQ_F: O_Soldier_Urban_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_CQ_F.jpg";
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
        V_TacVest_gry,
        H_HelmetO_oucamo,
        DefaultManLinkedItems,
        O_NVGoggles_urb_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_gry,
        H_HelmetO_oucamo,
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
        V_TacVest_khk,
        H_HelmetSpecO_ocamo,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
    };
    respawnLinkedItems[] =
    {
        V_TacVest_khk,
        H_HelmetSpecO_ocamo,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_hex_F
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
        V_HarnessOSpec_brn,
        H_HelmetSpecO_blk,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOSpec_brn,
        H_HelmetSpecO_blk,
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
        arifle_Katiba_GL_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_GL_ARCO_pointer_snds_F,
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
        V_HarnessOGL_brn,
        H_HelmetSpecO_blk,
        ItemGPS,
        DefaultManLinkedItems,
        O_NVGoggles_blk_F
    };
    respawnLinkedItems[] =
    {
        V_HarnessOGL_brn,
        H_HelmetSpecO_blk,
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
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
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
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
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
        arifle_Katiba_ARCO_pointer_snds_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_Katiba_ARCO_pointer_snds_F,
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
		V_TacVest_khk,
		H_HelmetO_ocamo,
		G_AirPurifyingRespirator_02_sand_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_khk,
		H_HelmetO_ocamo,
		G_AirPurifyingRespirator_02_sand_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_hex_F
	};
	weapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
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
class O_soldierU_CBRN_F: O_soldierU_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldierU_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_O_CombatUniform_oucamo;
	linkedItems[] =
	{
		V_TacVest_gry,
		H_HelmetO_oucamo,
		G_AirPurifyingRespirator_02_black_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_gry,
		H_HelmetO_oucamo,
		G_AirPurifyingRespirator_02_black_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_urb_F
	};
	weapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_Katiba_C_ACO_flash_F,
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
		V_HarnessO_brn,
		H_HelmetO_ocamo,
		DefaultManLinkedItems,
		O_NVGoggles_hex_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_brn,
		H_HelmetO_ocamo,
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
class O_soldier_UGV_02_Demining_F: O_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = O_UGV_02_Demining_backpack_F;
};
class O_soldier_UGV_02_Science_F: O_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_soldier_UGV_02_Science_F.jpg";
    scope = protected;
    scopeCurator = private;
	displayName = $STR_A3_C_B_soldier_UGV_02_Science_F0;
	backpack = O_UGV_02_Science_backpack_F;
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
		V_HarnessO_gry,
		H_HelmetO_oucamo,
		DefaultManLinkedItems,
		O_NVGoggles_urb_F
	};
	respawnLinkedItems[] =
	{
		V_HarnessO_gry,
		H_HelmetO_oucamo,
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
/*
class O_Fatigues_01_Blk_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_SpecopsUniform_blk;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_blk_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_blk_CO.paa"
    };
};
*/