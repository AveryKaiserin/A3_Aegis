// Arma 3 Enoch
class B_CombatFatigues_01_wdl_F: B_Soldier_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"};
};
class B_ReconFatigues_01_wdl_F: B_Soldier_SL_F
{
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"};
};
class B_CombatFatigues_01_Tshirt_wdl_F: B_soldier_AR_F
{
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
	};
};
class B_W_Soldier_A_F: B_Soldier_A_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_A_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
};
class B_W_Soldier_AAR_F: B_soldier_AAR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AAR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_rgr_BWAAR;
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_AMG_F: B_support_AMG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_AMG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_AMort_F: B_support_AMort_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_AMort_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AAA_F: B_soldier_AAA_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AAA_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AAT_F: B_soldier_AAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
        Rangefinder
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AR_F: B_soldier_AR_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_SW_Black_Hamr_pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_SW_Black_Hamr_pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(100Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecB,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Medic_F: B_medic_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Medic_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
    };
    linkedItems[] =
    {
        H_HelmetSpecB,
        V_PlateCarrierSpec_wdl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecB,
        V_PlateCarrierSpec_wdl,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Crew_F: B_crew_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Crew_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
    {
        arifle_MXC_Black_Holo_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Black_Holo_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		H_HelmetCrew_B_oli_F,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B_oli_F,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Engineer_F: B_engineer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Engineer_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_wdl_BWEng_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_Exp_F: B_soldier_exp_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_Exp_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecB,
		V_PlateCarrierGL_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB,
		V_PlateCarrierGL_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_GL_F: B_Soldier_GL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_GL_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_GL_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrierGL_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrierGL_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_GMG_F: B_support_GMG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_GMG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_MG_F: B_support_MG_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Support_Mort_F: B_support_Mort_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Support_Mort_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_ChestrigF_rgr,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Helicrew_F: B_helicrew_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Helicrew_F.jpg";
	weapons[] =
	{
		arifle_MXC_Black_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_CrewHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_CrewHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Helipilot_F: B_Helipilot_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Helipilot_F.jpg";
	weapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		H_PilotHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_PilotHelmetHeli_B,
		V_TacVest_blk,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_soldier_M_F: B_soldier_M_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_M_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXM_Black_MOS_Pointer_Bipod_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXM_Black_MOS_Pointer_Bipod_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
    magazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AA_F: B_soldier_AA_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AA_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_wdl_BWAA_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
        launch_B_Titan_olive_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
        launch_B_Titan_olive_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_AT_F: B_soldier_AT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_AT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	backpack = B_Kitbag_wdl_BWAT_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
        launch_I_Titan_short_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
        launch_I_Titan_short_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Officer_F: B_officer_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Officer_F.jpg";
	weapons[] =
	{
		arifle_MXC_Black_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
        Binocular
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_F,
		hgun_Pistol_heavy_01_black_MRD_F,
		DefaultManWeapons,
        Binocular
	};
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(11Rnd_45ACP_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
    };
	linkedItems[] =
	{
		H_MilCap_wdl,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_wdl,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
};
class B_W_Soldier_Repair_F: B_soldier_repair_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_Repair_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_F: B_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_LAT_F: B_soldier_LAT_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_LAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_Black_ACO_pointer_F,
        launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_ACO_pointer_F,
        launch_NLAW_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_LAT2_F: B_soldier_LAT2_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_LAT2_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
    weapons[] =
    {
        arifle_MX_Black_ACO_pointer_F,
        launch_MRAWS_green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_ACO_pointer_F,
        launch_MRAWS_green_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_SL_F: B_Soldier_SL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_SL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
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
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange,
        1Rnd_Smoke_Grenade_shell,
		1Rnd_SmokeBlue_Grenade_shell,
		1Rnd_SmokeGreen_Grenade_shell,
		1Rnd_SmokeOrange_Grenade_shell
    };
    linkedItems[] =
    {
        H_HelmetSpecB_wdl,
        V_PlateCarrierGL_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecB_wdl,
        V_PlateCarrierGL_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Soldier_TL_F: B_Soldier_TL_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_TL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_MX_GL_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
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
        mag_4(30Rnd_65x39_caseless_black_mag),
        mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
        mag_2(16Rnd_9x21_Mag),
        mag_2(3Rnd_HE_Grenade_shell),
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
    linkedItems[] =
    {
        H_HelmetSpecB,
        V_PlateCarrierGL_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_HelmetSpecB,
        V_PlateCarrierGL_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Soldier_CBRN_F: B_W_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_CBRN_F.jpg";
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MXC_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MXC_Black_Holo_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class B_W_RadioOperator_F: B_W_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_RadioOperator_F.jpg";
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
    {
        arifle_MX_Black_ACO_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_ACO_Pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class B_W_Soldier_UAV_F: B_soldier_UAV_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_UAV_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	weapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_Pointer_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
};
class B_W_soldier_UGV_02_Science_F: B_W_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UGV_02_Science_F.jpg";
};
class B_W_soldier_UGV_02_Demining_F: B_W_Soldier_UAV_F
{
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UGV_02_Demining_F.jpg";
};
class B_W_Soldier_unarmed_F: B_W_Soldier_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_unarmed_F.jpg";
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems
	};
};
// Arma 3 Aegis
class B_W_Soldier_PG_F: B_soldier_PG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_PG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_F,
        DefaultManWeapons
    };
	magazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Pilot_F: B_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Pilot_F.jpg";
	faction = BLU_W_F;
	weapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_01_Black_Holo_F,
		DefaultManWeapons
	};
};
class B_W_Soldier_Lite_F: B_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_Lite_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
	weapons[] =
	{
		arifle_MXC_Black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_65x39_caseless_black_mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		H_MilCap_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_MilCap_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems
	};
};
class B_W_Soldier_CQ_F: B_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrierSpec_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrierSpec_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Soldier_MG_F: B_soldier_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Soldier_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
	weapons[] =
	{
		LMG_Mk200_black_RCO_LP_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_RCO_LP_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_wdl,
		V_PlateCarrier2_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_soldier_UAV_06_F: B_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_UAV_06_backpack_F;
};
class B_W_soldier_UAV_06_medical_F: B_W_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_UAV_06_medical_backpack_F;
};
class B_W_Sharpshooter_F: B_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Sharpshooter_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_P07_blk_F,
		DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		H_HelmetSpecB,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_Sharpshooter_F: B_Recon_Sharpshooter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_Sharpshooter_F.jpg";
	faction = BLU_W_F;
	uniformclass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		srifle_EBR_blk_DMS_LP_BI_S_F,
		hgun_P07_blk_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_EBR_blk_DMS_LP_BI_S_F,
		hgun_P07_blk_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		H_Watchcap_camo_hs,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_Watchcap_camo_hs,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_HeavyGunner_F: B_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_HeavyGunner_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_NATO_tropic
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		MMG_02_black_RCO_LP_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_02_black_RCO_LP_F,
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_plain_wdl,
		V_PlateCarrier1_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Fighter_Pilot_F: B_Fighter_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Fighter_Pilot_F.jpg";
	faction = BLU_W_F;
	weapons[] =
	{
		hgun_P07_blk_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_P07_blk_F,
		DefaultManWeapons
	};
};
class B_W_Recon_AR_F: B_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_AR_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_blk_ERCO_Pointer_Bipod_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_Exp_F: B_recon_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_Exp_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdl_f;
	backpack = B_AssaultPack_rgr_ReconExp;
	weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		H_Booniehat_wdl_hs,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_wdl_hs,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_GL_F: B_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	weapons[] =
	{
		arifle_SPAR_01_GL_blk_ACO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_GL_blk_ACO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_JTAC_F: B_recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_JTAC_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
	backpack = B_RadioBag_01_wdl_F;
    weapons[] =
	{
		arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
        H_HelmetSpecB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetSpecB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_MG_F: B_recon_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_MG_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
	weapons[] =
	{
		LMG_03_ERCO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_03_ERCO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
		DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_3(200Rnd_556x45_Box_Red_F),
        mag_2(16Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_M_F: B_recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_M_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_mcam_wdl_f;
    weapons[] =
	{
		arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
		hgun_P07_blk_snds_F,
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
		H_Booniehat_wdl_hs,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_wdl_hs,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_Medic_F: B_recon_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_Medic_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdl_f;
	backpack = B_AssaultPack_rgr_ReconMedic;
	weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_HelmetB_light,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light,
		V_PlateCarrier1_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_F: B_recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
    weapons[] =
	{
		arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_HelmetB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_LAT_F: B_recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_LAT_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_tshirt_mcam_wdl_f;
	backpack = B_AssaultPack_rgr_ReconLAT;
	weapons[] =
	{
		arifle_SPAR_01_blk_ACO_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_ACO_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(16Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_HelmetB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_CQ_F: B_recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_CQ_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
    weapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		sgun_KSG_ACO_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(7Rnd_12Gauge_Pellets),
		mag_3(7Rnd_12Gauge_Slug),
		mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_3(7Rnd_12Gauge_Pellets),
		mag_3(7Rnd_12Gauge_Slug),
		mag_2(16Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Recon_TL_F: B_recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Recon_TL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_W_NATO_SF
	};
	faction = BLU_W_F;
	uniformClass = U_B_CombatUniform_vest_mcam_wdl_f;
    weapons[] =
	{
		arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_ERCO_Pointer_Snds_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_red),
		mag_2(30Rnd_556x45_Stanag_Tracer_Red),
		mag_2(16Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SmokeShellGreen,
		SmokeShellBlue,
		SmokeShellOrange,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_red),
		mag_2(30Rnd_556x45_Stanag_Tracer_Red),
		mag_2(16Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SmokeShellGreen,
		SmokeShellBlue,
		SmokeShellOrange,
		mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_HelmetSpecB_light,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetSpecB_light,
		V_PlateCarrier2_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_W_Sniper_F: B_sniper_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Sniper_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_GhillieSuit_wdl_f;
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
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
        V_PlateCarrier1_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Spotter_F: B_spotter_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_Spotter_F.jpg";
	faction = BLU_W_F;
	uniformClass = U_B_GhillieSuit_wdl_f;
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
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
        mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(16Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(B_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
    };
    linkedItems[] =
    {
        V_TacChestRig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_TacChestRig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_ghillie_wdl_F: B_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	faction = BLU_W_F;
	uniformClass = U_B_W_FullGhillie_wdl_F;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_NATO_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
	weapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_LRR_LRPS_F,
		hgun_P07_blk_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
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
        V_PlateCarrier1_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrier1_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_ghillie_spotter_wdl_F: B_W_ghillie_wdl_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_W_ghillie_spotter_wdl_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
	cost = 250000;
    weapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_Hamr_pointer_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Laserdesignator_01_khk_F
    };
    magazines[] =
    {
        mag_6(30Rnd_65x39_caseless_black_mag),
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
        mag_6(30Rnd_65x39_caseless_black_mag),
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
    linkedItems[] =
    {
        V_TacChestRig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_TacChestRig_grn_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_GhillieSuit_01_wdl_F: B_sniper_F
{
	scope = protected;
	scopeCurator = private;
	uniformClass = U_B_GhillieSuit_wdl_f;
	hiddenSelections[] =
	{
		camo,
		camo3
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_wdl_CO.paa"
	};
};