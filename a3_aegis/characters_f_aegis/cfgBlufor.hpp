// Arma 3
class B_Soldier_base_F: SoldierWB
{
    hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_CO.paa"};
    class Eventhandlers;
    weapons[] =
    {
        arifle_MX_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_02_f: B_Soldier_base_F
{
    hiddenSelections[] =
    {
        camo,
        camo2
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
    };
};
class B_Soldier_03_f;
class B_Soldier_04_f;
class B_Soldier_05_f;
class B_Soldier_F: B_Soldier_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_F.jpg";
};
class B_Soldier_lite_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_lite_F.jpg";
    weapons[] =
    {
        arifle_MXC_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
    {
        V_BandollierB_rgr,
        H_MilCap_mcamo,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_BandollierB_rgr,
        H_MilCap_mcamo,
        DefaultManLinkedItems
    };
};
class B_Soldier_GL_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_GL_F.jpg";
    weapons[] =
    {
        arifle_MX_GL_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_AR_F: B_Soldier_02_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AR_F.jpg";
    weapons[] =
    {
        arifle_MX_SW_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_SW_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_SL_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_SL_F.jpg";
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetSpecB_mcamo,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_mtp,
        H_HelmetSpecB_mcamo,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_TL_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_TL_F.jpg";
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(30Rnd_65x39_caseless_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetSpecB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetSpecB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_M_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_M_F.jpg";
    weapons[] =
    {
        arifle_MXM_MOS_LP_BI_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_MXM_MOS_LP_BI_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_LAT_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_LAT_F.jpg";
    weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_NLAW_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_NLAW_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_medic_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_medic_F.jpg";
    uniformClass = U_B_CombatUniform_mcam;
    weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    linkedItems[] =
    {
        V_PlateCarrierSpec_rgr,
        H_HelmetSpecB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierSpec_rgr,
        H_HelmetSpecB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_repair_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_repair_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_exp_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_exp_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Helipilot_F: B_Soldier_04_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Helipilot_F.jpg";
	weapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
		H_PilotHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_PilotHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_Soldier_A_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_A_F.jpg";
    weapons[] =
    {
        arifle_MX_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_12(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_12(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_AT_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AT_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_short_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_short_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_AA_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AA_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        launch_B_Titan_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_engineer_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_engineer_F.jpg";
    weapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    linkedItems[] =
	{
		V_PlateCarrier1_mtp,
		H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_mtp,
		H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_crew_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_crew_F.jpg";
	weapons[] =
    {
        arifle_MXC_Holo_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
		H_HelmetCrew_B,
		DefaultManLinkedItems,
		NVGoggles
	};
    engineer = true;
};
class B_officer_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_officer_F.jpg";
    weapons[] =
    {
        arifle_MXC_F,
        hgun_Pistol_heavy_01_MRD_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MXC_F,
        hgun_Pistol_heavy_01_MRD_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_mag),
        mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
	linkedItems[] =
    {
        V_BandollierB_rgr,
        H_MilCap_mcamo,
        ItemGPS,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_BandollierB_rgr,
        H_MilCap_mcamo,
        ItemGPS,
        DefaultManLinkedItems
    };
};
class B_Pilot_F: B_Soldier_05_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Pilot_F.jpg";
	weapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_black_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_45ACP_Mag_SMG_01),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_helicrew_F: B_Helipilot_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_helicrew_F.jpg";
	weapons[] =
	{
		arifle_MXC_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
        V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
        NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_TacVest_blk,
		H_CrewHelmetHeli_B,
		DefaultManLinkedItems,
        NVGoggles
	};
};
class B_soldier_PG_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_PG_F.jpg";
    weapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_sand,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_soldier_UAV_F: B_Soldier_03_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_UAV_F.jpg";
    uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_ACO_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        B_UavTerminal,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        B_UavTerminal,
        NVGoggles
    };
};
class B_Soldier_unarmed_F: B_Soldier_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_unarmed_F.jpg";
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
};
class B_Soldier_diver_base_F: B_Soldier_base_F
{
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit_NATO_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_NATO_CO.paa"
    };
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    canHideBodies = false;
};
class B_diver_F: B_Soldier_diver_base_F
{
    backpack = "";
};
class B_diver_exp_F;
class B_diver_TL_F: B_Soldier_diver_base_F
{
    weapons[] =
    {
        arifle_SDAR_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SDAR_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(20Rnd_556x45_Stanag_red),
        mag_3(20Rnd_556x45_UW_mag),
        mag_2(16Rnd_9x21_Mag),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
};
class B_Soldier_recon_base: B_Soldier_base_F
{
    icon = iconManRecon;
    canHideBodies = false;
	items[] =
	{
		FirstAidKit,
		optic_NVS
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_NVS
	};
};
class B_recon_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetSpecB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetSpecB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_recon_LAT_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_LAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        launch_NLAW_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_recon_exp_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_exp_F.jpg";
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Booniehat_mcamo_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Booniehat_mcamo_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_recon_medic_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_medic_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_light_sand,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_light_sand,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_recon_TL_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_TL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    role = Rifleman;
    magazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_Sand_red),
        mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_556x45_Stanag_Sand_red),
        mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_desert,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_desert,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_recon_M_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_M_F.jpg";
    weapons[] =
    {
        arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	linkedItems[] =
	{
		V_TacVest_oli,
        H_Booniehat_mcamo_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
        H_Booniehat_mcamo_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
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
class B_recon_JTAC_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_JTAC_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
	backpack = B_RadioBag_01_mtp_F;
    weapons[] =
    {
        arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_BLUFOR,
        mag_2(Chemlight_green),
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
    };
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Watchcap_camo_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_Watchcap_camo_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_Soldier_sniper_base_F: B_Soldier_base_F
{
    canHideBodies = false;
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
    linkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_Chestrig_rgr,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_spotter_F: B_Soldier_sniper_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_spotter_F.jpg";
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
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
};
class B_sniper_F: B_Soldier_sniper_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_sniper_F.jpg";
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
};
class B_Story_Protagonist_F: B_Soldier_02_f
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Story_Protagonist_F.jpg";
    weapons[] =
    {
        arifle_MX_GL_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Hamr_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_PlateCarrier_Kerry,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier_Kerry,
        H_HelmetSpecB_mcamo,
        DefaultManLinkedItems
    };
};
class B_Story_Pilot_F: B_Soldier_base_F
{
	scope = protected;
	scopeCurator = private;
};
class b_soldier_survival_F: B_Soldier_base_F
{
    hiddenSelections[] =
    {
        camo,
        camo1,
        camo2,
        camo3
    };
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing1_CO.paa",
        "\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
        "\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
    };
};
class B_Soldier_support_base_F: B_Soldier_base_F
{
	weapons[] =
	{
		arifle_MX_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_ChestrigF_rgr,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_rgr,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_soldier_AAR_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AAR_F.jpg";
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_soldier_AAT_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AAT_F.jpg";
    uniformClass = U_B_CombatUniform_mcam;
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_soldier_AAA_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_AAA_F.jpg";
    uniformClass = U_B_CombatUniform_mcam;
	linkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_PlateCarrier1_rgr,
        H_HelmetB_sand,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_support_MG_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_MG_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_GMG_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_GMG_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_Mort_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_Mort_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_AMG_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_AMG_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
class B_support_AMort_F: B_Soldier_support_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_support_AMort_F.jpg";
	weapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_ACO_pointer_F,
		hgun_P07_F,
        DefaultManWeapons
	};
};
// Arma 3 Marksman
class B_ghillie_base_F: B_Soldier_sniper_base_F
{
    magazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_6(7Rnd_408_Mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
	items[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_sniper,
        muzzle_snds_408_sand
	};
};
class B_ghillie_lsh_F: B_ghillie_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_lsh_F.jpg";
};
class B_ghillie_sard_F: B_ghillie_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_sard_F.jpg";
};
class B_ghillie_ard_F: B_ghillie_base_F
{
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_ard_F.jpg";
};
class B_Sharpshooter_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_DMR_03_tan_AMS_LP_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_03_tan_AMS_LP_F,
        hgun_P07_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Recon_Sharpshooter_F: B_Soldier_recon_base
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Recon_Sharpshooter_F.jpg";
    weapons[] =
    {
        srifle_EBR_blk_DMS_LP_BI_S_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_EBR_blk_DMS_LP_BI_S_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_8(20Rnd_762x51_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
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
	linkedItems[] =
	{
		V_TacVest_oli,
        H_Cap_tan_specops_US_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		V_TacVest_oli,
        H_Cap_tan_specops_US_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_HeavyGunner_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_HeavyGunner_F.jpg";
    weapons[] =
    {
        MMG_02_sand_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        MMG_02_sand_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(130Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(130Rnd_338_Mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
// Arma 3 Jets
class B_Deck_Crew_F: B_Helipilot_F
{
	linkedItems[] =
	{
		H_HelmetCrew_B_oli_F,
        V_DeckCrew_yellow_F,
        ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B_oli_F,
        V_DeckCrew_yellow_F,
        ItemGPS,
		DefaultManLinkedItems
	};
};
class B_Fighter_Pilot_F: B_Pilot_F
{
	magazines[] =
	{
        mag_2(16Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
        mag_2(16Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
		H_PilotHelmetFighter_B,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_PilotHelmetFighter_B,
		DefaultManLinkedItems
	};
};
// Arma 3 Malden
class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Patrol_HeavyGunner_F.jpg";
	linkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
	respawnLinkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Patrol_Soldier_A_F: B_Soldier_A_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Patrol_Soldier_A_F.jpg";
	linkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
	respawnLinkedItems[] =
    {
        H_HelmetB_camo_mcamo,
        V_PlateCarrier2_rgr,
        DefaultManLinkedItems,
        NVGoggles
    };
};
// Arma 3 Laws of War
class B_soldier_mine_F: B_soldier_exp_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_mine_F.jpg";
	backpack = B_Carryall_mcamo_Mine;
};
// Arma 3 Tanks
class B_soldier_LAT2_F: B_Soldier_base_F
{
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_soldier_LAT2_F.jpg";
    weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_MRAWS_sand_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        launch_MRAWS_sand_F,
        hgun_P07_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
// Arma 3 Enoch
class B_CBRN_Man_Oversuit_01_MTP_F;
// Arma 3 Aegis
class B_Soldier_CQ_F: B_Soldier_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_CQ_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
    cost = 130000;
    threat[] = {1,0.3,0.1};
    weapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_CQ_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_recon_CQ_F0;
    cost = 130000;
    threat[] = {1,0.3,0.1};
	uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_KSG_ACO_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    respawnMagazines[] =
    {
        mag_3(8Rnd_12Gauge_Pellets),
        mag_3(8Rnd_12Gauge_Slug),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_Soldier_MG_F: B_Soldier_03_f
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_MG_s};
            speechPlural[] = {veh_infantry_MG_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_MG_s;
    textPlural = $STR_A3_nameSound_veh_infantry_MG_p;
    nameSound = veh_infantry_MG_s;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_MG_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_CfgVehicles_B_Patrol_Soldier_MG_F0;
    role = MachineGunner;
    icon = iconManMG;
    cost = 125000;
    threat[] = {1,0.1,0.3};
    weapons[] =
    {
        LMG_Mk200_plain_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        LMG_Mk200_plain_RCO_LP_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    linkedItems[] =
    {
        V_PlateCarrier2_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_mtp,
        H_HelmetB_plain_mcamo,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_AR_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_AR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_O_R_Recon_AR_F0;
    role = MachineGunner;
    icon = iconManMG;
    cost = 220000;
    threat[] = {1,0.1,0.3};
	uniformClass = U_B_CombatUniform_mcam_tshirt;
	weapons[] =
	{
		arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
    linkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_snakeskin,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetSpecB_light_snakeskin,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_GL_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_O_R_Recon_GL_F0;
    role = Grenadier;
    cost = 210000;
	uniformClass = U_B_CombatUniform_mcam_vest;
    weapons[] =
    {
        arifle_SPAR_01_GL_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_GL_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    linkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_rgr,
        H_HelmetB_light,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_recon_MG_F: B_Soldier_recon_base
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_recon_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_SF
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_recon_MG_F0;
    role = MachineGunner;
    icon = iconManMG;
    cost = 220000;
    threat[] = {1,0.1,0.3};
	uniformClass = U_B_CombatUniform_mcam;
	weapons[] =
	{
		LMG_Mk200_plain_RCO_LP_S_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_plain_RCO_LP_S_F,
		hgun_P07_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	items[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
	respawnItems[] =
	{
		FirstAidKit,
		optic_tws_mg
	};
    linkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier2_rgr,
        H_HelmetB_light_desert,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_ghillie_spotter_lsh_F: B_ghillie_lsh_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_spotter_lsh_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_lsh_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
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
};
class B_ghillie_spotter_sard_F: B_ghillie_sard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_spotter_sard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_sard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
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
};
class B_ghillie_spotter_ard_F: B_ghillie_ard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ghillie_spotter_ard_F.jpg";
    scope = public;
    displayName = $STR_A3_A_CfgVehicles_B_ghillie_spotter_ard_F0;
    cost = 250000;
    weapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_snd_RCO_Pointer_Snds_F,
        hgun_P07_snds_F,
        DefaultManWeapons,
        Laserdesignator
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
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
};
class B_Soldier_CBRN_F: B_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_B_CBRN_Suit_01_MTP_F;
	linkedItems[] =
	{
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_PlateCarrier1_rgr,
        H_HelmetB_plain_mcamo,
        G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_MXC_Holo_flash_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Holo_flash_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 93000;
	camouflage = 1.6;
    icon = iconManEngineer;
    picture = pictureRepair;
    role = Sapper;
	class EventHandlers: EventHandlers
	{
		class BIN_CBRN_INIT
		{
			init = "_this call bin_fnc_CBRNHoseInit;";
		};
	};
};
class B_RadioOperator_F: B_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_CombatUniform_mcam_vest;
	linkedItems[] =
	{
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        V_PlateCarrier1_mtp,
        H_HelmetB_plain_mcamo,
		DefaultManLinkedItems,
		NVGoggles
	};
	backpack = B_RadioBag_01_mtp_F;
	weapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Holo_pointer_F,
        hgun_P07_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};