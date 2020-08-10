// Arma 3
class B_Soldier_04_f;
class B_Soldier_lite_F;
class B_Soldier_GL_F;
class B_Soldier_TL_F;
class B_soldier_M_F;
class B_soldier_LAT_F;
class B_medic_F;
class B_soldier_repair_F;
class B_soldier_exp_F;
class B_Helipilot_F;
class B_Soldier_A_F;
class B_soldier_AT_F;
class B_soldier_AA_F;
class B_engineer_F;
class B_crew_F;
class B_officer_F;
class B_helicrew_F;
class B_soldier_UAV_F;
class B_recon_F;
class B_recon_LAT_F;
class B_recon_exp_F;
class B_recon_medic_F;
class B_recon_TL_F;
class B_recon_M_F;
class B_recon_JTAC_F;
class B_soldier_AAR_F;
class B_soldier_AAT_F;
class B_soldier_AAA_F;
class B_support_MG_F;
class B_support_GMG_F;
class B_support_Mort_F;
class B_support_AMG_F;
class B_support_AMort_F;
// Arma 3 Marksman
class B_HeavyGunner_F;
// Arma 3 Jets
class B_Fighter_Pilot_F;
// Arma 3 Tanks
class I_Story_Crew_F;
// Arma 3 Enoch
class B_CBRN_Man_Oversuit_01_MTP_F;
class I_E_Uniform_01_F;
class I_E_Uniform_01_shortsleeve_F;
class I_E_Uniform_01_tanktop_F;
// Arma 3 Aegis
class B_Soldier_CQ_F;
class B_recon_AR_F;
class B_recon_GL_F;
class B_recon_MG_F;
// Arma 3 Atlas
class B_E_CombatFatigues_01_wdl_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_CombatUniform_wdl;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_Pants_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_E_CombatFatigues_01_Tshirt_wdl_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	hiddenSelectionsTextures[] =
	{
		// "\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_TankTop_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_Pants_CO.paa",
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_E_CombatFatigues_01_RolledUp_wdl_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_Pants_CO.paa"
		// "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_mcam_wdl_CO.paa"
	};
};
class B_E_Coveralls_01_F: B_Soldier_04_f
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_HeliPilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\coveralls_green_CO.paa"};
};
class B_E_TankerCoveralls_01_F: I_Story_Crew_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_Tank_wdl_F;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\U_Tank_wdl_CO.paa"};
};
class B_E_Soldier_A_F: B_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_A_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_Carryall_wdl_BEAmmo_F;
	weapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AAR_F: B_soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AAR_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	backpack = B_Kitbag_wdl_BEAAR_F;
	weapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Support_AMG_F: B_support_AMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Support_AMG_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	backpack = B_HMG_01_support_grn_F;
	weapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Support_AMort_F: B_support_AMort_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Support_AMort_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	backpack = B_Mortar_01_support_grn_F;
	weapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AAA_F: B_soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AAA_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_Carryall_wdl_BWAAA_F;
	weapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AAT_F: B_soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AAT_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_Carryall_wdl_BWAAT_F;
	weapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_G36_ACO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AR_F: B_soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AR_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	weapons[] =
	{
		LMG_Mk200_black_LRCO_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_LRCO_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Medic_F: B_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Medic_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
  	scope = public;
  	scopeCurator = public;
    uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_TacticalPack_rgr_BAMedic_F;
	weapons[] =
	{
		arifle_G36_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Crew_F: B_crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Crew_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_Tank_wdl_F;
	weapons[] =
	{
		SMG_04_blk_Holo_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_blk_Holo_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(40Rnd_460x30_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Green_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Green_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Engineer_F: B_engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Engineer_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_Kitbag_wdl_BWEng_F;
	weapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_Exp_F: B_soldier_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_Exp_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_soldier_mine_F: B_E_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_wdl_Mine;
};
class B_E_Soldier_GL_F: B_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_GL_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
		arifle_G36_GL_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Support_GMG_F: B_support_GMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Support_GMG_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	backpack = B_GMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Support_MG_F: B_support_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Support_MG_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	backpack = B_HMG_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Support_Mort_F: B_support_Mort_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Support_Mort_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	backpack = B_Mortar_01_Weapon_grn_F;
	weapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_HeavyGunner_F: B_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_HeavyGunner_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
		MMG_01_black_LRCO_LP_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_01_black_LRCO_LP_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_3(150Rnd_93x64_Mag_Red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_3(150Rnd_93x64_Mag_Red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Helicrew_F: B_helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Helicrew_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_HeliPilotCoveralls;
	weapons[] =
	{
		arifle_G36C_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Green_F,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Green_F,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_E_Helipilot_F: B_Helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Helipilot_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_pilot
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_HeliPilotCoveralls;
	weapons[] =
	{
		SMG_04_blk_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_blk_Holo_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Green_F,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Green_F,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_E_soldier_M_F: B_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_soldier_M_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_03_AMS_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AA_F: B_soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AA_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_Kitbag_wdl_BWAA_F;
	weapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		launch_B_Titan_olive_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		launch_B_Titan_olive_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AT_F: B_soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AT_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_Kitbag_wdl_BWAT_F;
	weapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		launch_I_Titan_short_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		launch_I_Titan_short_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Officer_F: B_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Officer_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_casual
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	weapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_Beret_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
};
class B_E_Soldier_Repair_F: B_soldier_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_Repair_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_TacticalPack_rgr_BARepair_F;
	weapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_F: B_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
		arifle_G36_LRCO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_LRCO_Pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_LAT_F: B_soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_LAT_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_TacticalPack_rgr_BALAT_F;
	weapons[] =
	{
		arifle_G36_Holo_Pointer_F,
		launch_NLAW_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_Holo_Pointer_F,
		launch_NLAW_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
		NLAW_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_Lite_F: B_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_Lite_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_tshirt_wdl;
	weapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_F,
		hgun_G17_black_F,
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
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Green_F,
		H_Headset_light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Green_F,
		H_Headset_light,
		DefaultManLinkedItems
	};
};
/*
class B_E_Soldier_CQ_F: B_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_CQ_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = protected;
    scopeCurator = private;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
		arifle_G36_UBS_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_UBS_ACO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
        mag_3(6Rnd_12Gauge_Pellets),
        mag_3(6Rnd_12Gauge_Slug),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_wdl,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
*/
class B_E_Soldier_SL_F: B_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_SL_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	weapons[] =
	{
		arifle_G36_LRCO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_LRCO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_TL_F: B_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_TL_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
		arifle_G36_GL_LRCO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_LRCO_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_HelmetSpecB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_HelmetSpecB_light,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_CBRN_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_CBRN_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	uniformClass = U_B_CBRN_Suit_01_Wdl_F;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetB_light,
		G_AirPurifyingRespirator_01_F,
		DefaultManCbrnLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_CombinationUnitRespirator_01_F;
	weapons[] =
    {
        arifle_G36C_Holo_FL_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_G36C_Holo_FL_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
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
class B_E_RadioOperator_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	backpack = B_RadioBag_01_wdl_F;
	weapons[] =
    {
        arifle_G36_Holo_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_G36_Holo_Pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_msbs_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Survivor_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Survivor_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_survivor_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	items[] = {};
	respawnItems[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
	role = Unarmed;
};
class B_E_Soldier_UAV_F: B_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_UAV_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_tropic
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	backpack = B_UAV_01_backpack_F;
	weapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_Holo_Pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems,
		B_UavTerminal,
		NVGoggles_INDEP
	};
};
class B_E_soldier_UAV_06_F: B_E_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = B_UAV_06_backpack_F;
};
class B_E_soldier_UAV_06_medical_F: B_E_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = B_UAV_06_medical_backpack_F;
};
class B_E_soldier_UGV_02_Demining_F: B_E_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = B_UGV_02_Demining_backpack_F;
};
class B_E_Recon_AR_F: B_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_AR_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	weapons[] =
	{
		arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetSpecB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetSpecB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_Exp_F: B_recon_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_Exp_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_Shemag_olive_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_Shemag_olive_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_GL_F: B_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_GL_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
        arifle_SPAR_01_GL_blk_LRCO_Pointer_Snds_F,
        hgun_G17_black_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_GL_blk_LRCO_Pointer_Snds_F,
        hgun_G17_black_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
        H_Booniehat_wdl_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
        H_Booniehat_wdl_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_JTAC_F: B_recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_JTAC_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_RadioBag_01_wdl_F;
	weapons[] =
	{
		arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_GL_blk_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Laserdesignator_01_khk_F
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
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
        mag_2(17Rnd_9x21_Mag),
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
		V_TacVest_grn,
        H_Shemag_olive_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
        H_Shemag_olive_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_MG_F: B_recon_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_MG_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_W_NATO_SF
	};
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	backpack = B_TacticalPack_rgr_BEReconMG_F;
	weapons[] =
	{
		MMG_01_black_LRCO_LP_S_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_01_black_LRCO_LP_S_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        150Rnd_93x64_Mag_Red,
		mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        SmokeShell,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        150Rnd_93x64_Mag_Red,
		mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        SmokeShell,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_M_F: B_recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_M_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	weapons[] =
	{
		arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_8(20Rnd_762x51_Mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Booniehat_wdl_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_Booniehat_wdl_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_Medic_F: B_recon_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_Medic_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	backpack = B_TacticalPack_rgr_BAReconMedic_F;
	weapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_Holo_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
        H_Booniehat_wdl_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
        H_Booniehat_wdl_hs,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_F: B_recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	weapons[] =
	{
		arifle_SPAR_01_blk_LRCO_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_LRCO_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
        H_HelmetB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
        H_HelmetB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_LAT_F: B_recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_LAT_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_wdl;
	backpack = B_TacticalPack_rgr_BALAT_F;
	weapons[] =
	{
		arifle_SPAR_01_blk_ACO_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_ACO_Pointer_Snds_F,
		launch_NLAW_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
        H_HelmetB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
        H_HelmetB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Recon_TL_F: B_recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Recon_TL_F.jpg";
	faction = BLU_E_F;
	genericNames = GermanMen;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_recon
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_CombatUniform_vest_wdl;
	weapons[] =
	{
		arifle_SPAR_01_blk_LRCO_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_blk_LRCO_Pointer_Snds_F,
		hgun_G17_black_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_red),
		mag_2(30Rnd_556x45_Stanag_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_red),
		mag_2(30Rnd_556x45_Stanag_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
		mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		V_TacVest_grn,
        H_HelmetSpecB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
        H_HelmetSpecB_light_wdl,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_universal_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_medic_s};
			speechPlural[] = {veh_infantry_medic_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_medic_s;
	textPlural = $STR_A3_nameSound_veh_infantry_medic_p;
	nameSound = veh_infantry_medic_s;
	scope = protected;
	displayName = $STR_A3_CfgVehicles_b_soldier_universal_f_displayName;
	attendant = true;
	engineer = true;
	canDeactivateMines = true;
	role = Rifleman;
};
class B_E_Soldier_unarmed_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetSpecB_light,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
/*
// ACR
class B_E_ACRCombatFatigues_01_wdl_F: B_E_CombatFatigues_01_wdl_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_E_ACR_1;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_acr_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_acr_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_pants.rvmat",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves.rvmat"
	};
};
class B_E_ACRCombatFatigues_01_Tshirt_wdl_F: B_E_CombatFatigues_01_Tshirt_wdl_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_E_ACR_2;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_TankTop_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_acr_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_E_ACRCombatFatigues_01_RolledUp_wdl_F: B_E_CombatFatigues_01_RolledUp_wdl_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_E_ACR_3;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_acr_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_acr_pants_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01.rvmat",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_pants.rvmat"
	};
};
class B_E_Soldier_A_acr_F: B_E_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_A_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_ACR_1;
	backpack = B_Carryall_green_BEAmmo_F;
	weapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AAR_acr_F: B_E_Soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AAR_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_ACR_2;
	backpack = B_FieldPack_green_BEAAR_F;
	weapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AAA_acr_F: B_E_Soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AAA_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_ACR_1;
	backpack = B_Carryall_wdl_BWAAA_F;
	weapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AAT_acr_F: B_E_Soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AAT_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
    uniformClass = U_B_E_ACR_1;
	backpack = B_Carryall_wdl_BWAAT_F;
	weapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AR_acr_F: B_E_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AR_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_B_E_ACR_2;
	weapons[] =
	{
		LMG_Mk200_black_RCO_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_RCO_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_65x39_cased_Box_Red),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Medic_acr_F: B_E_Medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Medic_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
 	scope = public;
  	scopeCurator = public;
    uniformClass = U_B_E_ACR_2;
	backpack = B_FieldPack_green_BEMedic_F;
	weapons[] =
	{
		arifle_MX_Black_Holo_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Holo_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Crew_acr_F: B_E_Crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Crew_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_3;
	weapons[] =
	{
		SMG_02_Holo_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_02_Holo_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Engineer_acr_F: B_E_Engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Engineer_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_3;
	backpack = B_Kitbag_wdl_BWEng_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_Exp_acr_F: B_E_Soldier_Exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_Exp_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	backpack = B_Kitbag_rgr_Exp;
	weapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_GL_acr_F: B_E_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_GL_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	weapons[] =
	{
		arifle_MX_GL_Black_ACO_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_GL_Black_ACO_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_soldier_M_acr_F: B_E_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_soldier_M_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	weapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_02_AMS_LP_BI_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_10(10Rnd_338_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(10Rnd_338_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AA_acr_F: B_E_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AA_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	backpack = B_FieldPack_green_BEAA_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		launch_B_Titan_olive_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		launch_B_Titan_olive_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_AT_acr_F: B_E_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AT_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	backpack = B_FieldPack_green_BEAT_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		launch_I_Titan_short_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		launch_I_Titan_short_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_Repair_acr_F: B_E_Soldier_Repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_Repair_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	backpack = B_FieldPack_green_BERepair_F;
	weapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MXC_Black_Holo_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_acr_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	weapons[] =
	{
		arifle_MX_Black_Hamr_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Hamr_pointer_F,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_LAT_acr_F: B_E_Soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_LAT_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_1;
	backpack = B_FieldPack_green_BELAT_F;
	weapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		launch_MRAWS_green_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_ACO_pointer_F,
		launch_MRAWS_green_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_black_mag),
		mag_2(17Rnd_9x21_Mag),
		MRAWS_HEAT_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_SL_acr_F: B_E_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_SL_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_3;
	weapons[] =
	{
		arifle_MX_Black_Hamr_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MX_Black_Hamr_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_TL_acr_F: B_E_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_TL_acr_F.jpg";
	genericNames = CzechMen;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
    scope = public;
    scopeCurator = public;
	uniformClass = U_B_E_ACR_3;
	weapons[] =
	{
		arifle_MX_GL_Black_Hamr_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MX_GL_Black_Hamr_pointer_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_black_mag),
		mag_2(30Rnd_65x39_caseless_black_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
		mag_2(3Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
	};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_I_Helmet_canvas_Green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Green_F,
		H_I_Helmet_canvas_Green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_RadioOperator_acr_F: B_E_Soldier_acr_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_RadioOperator_acr_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_E_ACR_3;
	backpack = B_RadioBag_01_wdl_F;
	weapons[] =
    {
        arifle_MX_Black_ACO_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MX_Black_ACO_pointer_F,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_65x39_caseless_black_mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_Soldier_unarmed_acr_F: B_E_Soldier_acr_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Green_F,
		H_I_Helmet_canvas_Green,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class B_E_Fighter_Pilot_F: B_Fighter_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Fighter_Pilot_F.jpg";
	genericNames = CzechMen;
	faction = BLU_E_F;
	editorSubcategory = EdSubcat_Personnel_CzechArmy;
	identityTypes[] =
	{
		LanguageENG_F,
		Head_Euro,
		Head_Enoch,
		G_NATO_pilot
	};
	weapons[] =
	{
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
};
*/