///////////////////
/* USMC (Desert) */
///////////////////

class B_Soldier_MarineD_F: B_Soldier_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_Soldier_F.jpg";
    uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_Soldier_MarineD_GL_F: B_Soldier_GL_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_Soldier_GL_F.jpg";
    uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        GL_M32_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        GL_M32_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(6Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(6Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        ItemGPS,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        ItemGPS,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_soldier_MarineD_AR_F: B_soldier_AR_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_AR_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_16(30Rnd_556x45_Stanag_red),
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_16(30Rnd_556x45_Stanag_red),
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_Soldier_MarineD_SL_F: B_Soldier_SL_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_Soldier_SL_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    backpack = B_RadioBag_01_Coyote_F;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        ItemGPS,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        ItemGPS,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_Soldier_MarineD_TL_F: B_Soldier_TL_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_Soldier_TL_F.jpg";
    uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        ItemGPS,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        ItemGPS,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_soldier_MarineD_M_F: B_soldier_M_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_M_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_03_blk_MOS_Pointer_Bipod_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_6(20Rnd_762x51_Mag),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_6(20Rnd_762x51_Mag),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_soldier_MarineD_LAT_F: B_soldier_LAT2_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_LAT_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    displayName = $STR_B_soldier_LAT_F0;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        launch_MRAWS_olive_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        launch_MRAWS_olive_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_medic_MarineD_F: B_medic_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_medic_F.jpg";
    uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_soldier_MarineD_repair_F: B_soldier_repair_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_repair_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_soldier_MarineD_exp_F: B_soldier_exp_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_exp_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_Soldier_MarineD_A_F: B_Soldier_A_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_Soldier_A_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_soldier_MarineD_AA_F: B_soldier_AA_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_AA_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        NVGoggles_OPFOR
    };
};
class B_engineer_MarineD_F: B_engineer_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_engineer_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetHBK_coyote_headset_F,
		DefaultManLinkedItems,
        G_Shemag_Tactical,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
		H_HelmetHBK_coyote_headset_F,
		DefaultManLinkedItems,
        G_Shemag_Tactical,
		NVGoggles_OPFOR
	};
};
class B_officer_MarineD_F: B_officer_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_officer_F.jpg";
    uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_01_blk_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_blk_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
    {
        V_CarrierRigKBT_01_Coyote_F,
        H_MilCap_desert,
        ItemGPS,
        G_Shemag_Tactical,
        DefaultManLinkedItems
    };
	respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_Coyote_F,
        H_MilCap_desert,
        ItemGPS,
        G_Shemag_Tactical,
        DefaultManLinkedItems
    };
};
class B_soldier_MarineD_UAV_F: B_soldier_UAV_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_UAV_F.jpg";
    uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
    linkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        B_UavTerminal,
        NVGoggles_OPFOR
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
        DefaultManLinkedItems,
        G_Shemag_Tactical,
        B_UavTerminal,
        NVGoggles_OPFOR
    };
};
class B_Soldier_MarineD_unarmed_F: B_Soldier_unarmed_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_Soldier_unarmed_F.jpg";
	uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    linkedItems[] =
    {
        V_CarrierRigKBT_01_Coyote_F,
        G_Shemag_Tactical,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        V_CarrierRigKBT_01_Coyote_F,
        G_Shemag_Tactical,
        DefaultManLinkedItems
    };
};
class B_soldier_MarineD_AAA_F: B_soldier_AAA_F
{
    editorPreview = "\A3_HARM\EditorPreviews_F_HARM\Data\CfgVehicles\B_soldier_AAA_F.jpg";
    uniformClass = Marine_U_B_MCU_desert_F;
    editorSubcategory = EdSubcat_Personnel_Marine;
    weapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_02_blk_ERCO_Pointer_F,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    magazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_556x45_Stanag_red),
        mag_3(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
		DefaultManLinkedItems,
        G_Shemag_Tactical,
		NVGoggles_OPFOR
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Coyote_F,
        H_HelmetHBK_coyote_headset_F,
		DefaultManLinkedItems,
        G_Shemag_Tactical,
		NVGoggles_OPFOR
	};
};