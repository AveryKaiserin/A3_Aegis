// Arma 3
class B_Soldier_GL_F;
class B_Soldier_TL_F;
class B_soldier_M_F;
class B_soldier_LAT_F;
class B_medic_F;
class B_Helipilot_F;
class B_Soldier_A_F;
class B_soldier_AT_F;
class B_soldier_AA_F;
class B_engineer_F;
class B_crew_F;
class B_officer_F;
class B_helicrew_F;
class B_recon_F;
class B_recon_LAT_F;
class B_recon_exp_F;
class B_recon_medic_F;
class B_recon_TL_F;
class B_recon_M_F;
class B_recon_JTAC_F;
// Arma 3 Marksman
class B_HeavyGunner_F;
// Arma 3 Tanks
class I_Story_Crew_F;
// Arma 3 Aegis
class B_recon_AR_F;
class B_recon_GL_F;
// Arma 3 Atlas
class B_E_Uniform_01_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_Uniform_01_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_E_Uniform_01_shortsleeve_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_pants_CO.paa"
	};
};
class B_E_Uniform_01_tanktop_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_Uniform_01_tanktop_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_TankTop_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_E_Uniform_01_coveralls_F: I_E_Uniform_01_coveralls_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_Uniform_01_coveralls_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Coveralls_01_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_E_Uniform_01_tank_F: I_Story_Crew_F
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
class B_E_Uniform_01_ard_F: I_E_Uniform_01_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_Uniform_01_ard_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_ard_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_ard_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
};
class B_E_Uniform_01_ard_shortsleeve_F: I_E_Uniform_01_shortsleeve_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_ard_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_ard_pants_CO.paa"
	};
};
class B_E_Uniform_01_ard_tanktop_F: I_E_Uniform_01_tanktop_F
{
  	scope = protected;
  	scopeCurator = private;
	modelSides[] =
	{
		TWest,
		TCivilian
	};
	uniformClass = U_B_E_Uniform_01_ard_tanktop_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_TankTop_CO.paa",
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\B_E_Soldier_01_ard_pants_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
	};
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
    uniformClass = U_B_E_Uniform_01_shortsleeve_F;
	backpack = B_Carryall_green_BEAmmo_F;
	weapons[] =
	{
		arifle_G36_aco_LP_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_aco_LP_f,
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
		H_HelmetB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light,
		V_CarrierRigKBT_01_light_Olive_F,
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
    uniformClass = U_B_E_Uniform_01_shortsleeve_F;
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
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
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
    uniformClass = U_B_E_Uniform_01_shortsleeve_F;
	backpack = B_TacticalPack_rgr_BEMedic_F;
	weapons[] =
	{
		arifle_G36_aco_LP_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_aco_LP_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_heavy_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_heavy_Olive_F,
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
		H_HelmetCrew_B_oli_F,
		V_CarrierRigKBT_01_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B_oli_F,
		V_CarrierRigKBT_01_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_F;
	backpack = B_Kitbag_wdl_BWEng_F;
	weapons[] =
	{
		arifle_G36C_holo_LP_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_holo_LP_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
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
	uniformClass = U_B_E_Uniform_01_F;
	weapons[] =
	{
		arifle_G36_GL_aco_LP_f,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_aco_LP_f,
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
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_heavy_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_heavy_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_F;
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
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_coveralls_F;
	weapons[] =
	{
		arifle_G36C_holo_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_holo_f,
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
    linkedItems[] =
    {
        H_CrewHelmetHeli_B,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_B,
		V_CarrierRigKBT_01_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_coveralls_F;
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
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_B,
		V_CarrierRigKBT_01_Olive_F,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B,
		V_CarrierRigKBT_01_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_F;
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
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_F;
	backpack = B_Kitbag_wdl_BWAA_F;
	weapons[] =
	{
		arifle_G36C_holo_LP_f,
		launch_B_Titan_olive_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_holo_LP_f,
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
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_F;
	backpack = B_Kitbag_wdl_BWAT_F;
	weapons[] =
	{
		arifle_G36C_holo_LP_f,
		launch_I_Titan_short_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_holo_LP_f,
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
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
	weapons[] =
	{
		SMG_04_blk_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_04_blk_F,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_4(40Rnd_460x30_Mag_F),
		mag_2(17Rnd_9x21_Mag),
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_Beret_grn,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Beret_grn,
		V_BandollierB_rgr,
		ItemGPS,
		DefaultManLinkedItems
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
	uniformClass = U_B_E_Uniform_01_F;
	weapons[] =
	{
		arifle_G36_lrco_LP_f,
		hgun_G17_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_lrco_LP_f,
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
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_F;
	backpack = B_TacticalPack_rgr_BELAT_F;
	weapons[] =
	{
		arifle_G36_aco_LP_f,
		launch_NLAW_F,
		hgun_G17_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_aco_LP_f,
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
		H_HelmetSpecB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_wdl,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
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
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
	weapons[] =
	{
		arifle_G36_GL_lrco_LP_f,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_lrco_LP_f,
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
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
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
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_heavy_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_heavy_Olive_F,
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
	uniformClass = U_B_E_Uniform_01_F;
	weapons[] =
	{
		arifle_G36_GL_lrco_LP_f,
		hgun_G17_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_lrco_LP_f,
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
		mag_2(17Rnd_9x21_Mag),
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
	linkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_heavy_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_heavy_Olive_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
};
class B_E_RadioOperator_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
	backpack = B_RadioBag_01_wdl_F;
	weapons[] =
    {
        arifle_G36_aco_LP_f,
        hgun_G17_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_G36_aco_LP_f,
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
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
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
	uniformClass = U_B_E_Uniform_01_F;
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
		H_HelmetSpecB_light,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
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
		H_Booniehat_wdl_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_wdl_hs,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_F;
	weapons[] =
	{
        arifle_SPAR_01_GL_blk_ACO_Pointer_Snds_F,
        hgun_G17_black_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_GL_blk_ACO_Pointer_Snds_F,
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
        H_HelmetB_light_wdl,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light_wdl,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_F;
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
        H_HelmetSpecB_light,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetSpecB_light,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_F;
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
		H_Booniehat_wdl_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_wdl_hs,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
	backpack = B_TacticalPack_rgr_BEReconMedic_F;
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
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_Booniehat_wdl_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_Booniehat_wdl_hs,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
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
        H_HelmetB_light,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_F;
	backpack = B_TacticalPack_rgr_BELAT_F;
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
        H_HelmetB_light_wdl,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light_wdl,
		V_TacVest_oli,
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
	uniformClass = U_B_E_Uniform_01_shortsleeve_F;
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
		SmokeShellGreen,
		SmokeShellBlue,
		SmokeShellOrange,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_red),
		mag_2(30Rnd_556x45_Stanag_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
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
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
        H_HelmetSpecB_light,
		V_TacVest_oli,
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
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light,
		V_CarrierRigKBT_01_light_Olive_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
/*
class B_E_Soldier_A_ard_F: B_E_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_A_ard_F.jpg";
	//faction = BLU_E_ard_F;
    uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	backpack = B_Carryall_mcamo_BEAmmo_F;
	weapons[] =
	{
		arifle_G36_sand_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_sand_aco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_AR_ard_F: B_E_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AR_ard_F.jpg";
	//faction = BLU_E_ard_F;
    uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	weapons[] =
	{
		LMG_Mk200_plain_LRCO_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_plain_LRCO_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Medic_ard_F: B_E_Medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Medic_ard_F.jpg";
	//faction = BLU_E_ard_F;
    uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	backpack = B_TacticalPack_mcamo_BEMedic_F;
	weapons[] =
	{
		arifle_G36_sand_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_sand_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Crew_ard_F: B_E_Crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Crew_ard_F.jpg";
	//faction = BLU_E_ard_F;
	weapons[] =
	{
		SMG_04_snd_Holo_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_snd_Holo_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetCrew_B,
		V_CarrierRigKBT_01_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetCrew_B,
		V_CarrierRigKBT_01_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Engineer_ard_F: B_E_Engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Engineer_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	backpack = B_Kitbag_mcamo_BEEng_F;
	weapons[] =
	{
		arifle_G36C_sand_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_sand_holo_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellGreen,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_GL_ard_F: B_E_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_GL_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
		arifle_G36_GL_sand_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_sand_aco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_HeavyGunner_ard_F: B_E_HeavyGunner_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_HeavyGunner_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
		MMG_01_tan_LRCO_LP_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		MMG_01_tan_LRCO_LP_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Helipilot_ard_F: B_E_Helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Helipilot_ard_F.jpg";
	//faction = BLU_E_ard_F;
	weapons[] =
	{
		SMG_04_snd_Holo_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_04_snd_Holo_F,
        DefaultManWeapons
	};
    linkedItems[] =
    {
        H_PilotHelmetHeli_B,
		V_CarrierRigKBT_01_Coyote_F,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_B,
		V_CarrierRigKBT_01_Coyote_F,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_E_Helicrew_ard_F: B_E_Helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Helicrew_ard_F.jpg";
	//faction = BLU_E_ard_F;
	weapons[] =
	{
		arifle_G36C_sand_holo_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_sand_holo_f,
        DefaultManWeapons
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_B,
		V_CarrierRigKBT_01_Coyote_F,
        DefaultManLinkedItems,
        NVGoggles
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_B,
		V_CarrierRigKBT_01_Coyote_F,
        DefaultManLinkedItems,
        NVGoggles
    };
};
class B_E_Soldier_M_ard_F: B_E_Soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_M_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
		srifle_DMR_03_sand_AMS_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_DMR_03_sand_AMS_LP_BI_F,
		hgun_G17_F,
        DefaultManWeapons,
		Rangefinder
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_AA_ard_F: B_E_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AA_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	backpack = B_TacticalPack_mcamo_BEAA_F;
	weapons[] =
	{
		arifle_G36C_sand_holo_pointer_f,
		launch_B_Titan_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_sand_holo_pointer_f,
		launch_B_Titan_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_AT_ard_F: B_E_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_AT_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	backpack = B_TacticalPack_mcamo_BEAT_F;
	weapons[] =
	{
		arifle_G36C_sand_holo_pointer_f,
		launch_B_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36C_sand_holo_pointer_f,
		launch_B_Titan_short_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Officer_ard_F: B_E_Officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Officer_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	weapons[] =
	{
		SMG_04_snd_F,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_04_snd_F,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	linkedItems[] =
	{
		H_Beret_grn,
		V_BandollierB_cbr,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Beret_grn,
		V_BandollierB_cbr,
		ItemGPS,
		DefaultManLinkedItems
	};
};
class B_E_Soldier_ard_F: B_E_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
		arifle_G36_sand_lrco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_sand_lrco_pointer_f,
		hgun_G17_F,
		DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_LAT_ard_F: B_E_Soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_LAT_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	backpack = B_TacticalPack_mcamo_BELAT_F;
	weapons[] =
	{
		arifle_G36_sand_aco_pointer_f,
		launch_MRAWS_sand_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_G36_sand_aco_pointer_f,
		launch_MRAWS_sand_F,
		hgun_G17_F,
        DefaultManWeapons
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_mtp,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_SL_ard_F: B_E_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_SL_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	weapons[] =
	{
		arifle_G36_GL_sand_lrco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_sand_lrco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_TL_ard_F: B_E_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_Soldier_TL_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
		arifle_G36_GL_sand_lrco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_G36_GL_sand_lrco_pointer_f,
		hgun_G17_F,
        DefaultManWeapons,
		Binocular
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_heavy_Coyote_F,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_RadioOperator_ard_F: B_E_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_RadioOperator_ard_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_E_Uniform_01_ard_F;
	backpack = B_RadioBag_01_mtp_F;
	weapons[] =
    {
        arifle_G36_sand_aco_pointer_f,
        hgun_G17_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_G36_sand_aco_pointer_f,
        hgun_G17_F,
        DefaultManWeapons
    };
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_AR_ard_F: B_E_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_AR_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
		arifle_SPAR_02_snd_LRCO_Pointer_Bipod_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_02_snd_LRCO_Pointer_Bipod_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(150Rnd_556x45_Drum_Sand_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_exp_ard_F: B_E_recon_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_exp_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	weapons[] =
	{
		arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
		H_Booniehat_mcamo_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_mcamo_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_GL_ard_F: B_E_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_GL_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
        arifle_SPAR_01_GL_snd_ACO_Pointer_Snds_F,
        hgun_G17_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SPAR_01_GL_snd_ACO_Pointer_Snds_F,
        hgun_G17_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(SmokeShell),
        mag_2(Chemlight_green),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
        H_HelmetB_light_mtp,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light_mtp,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_JTAC_ard_F: B_E_recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_JTAC_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	backpack = B_RadioBag_01_mtp_F;
	weapons[] =
	{
		arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_GL_snd_Holo_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Laserdesignator
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_Sand_red),
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
        mag_6(30Rnd_556x45_Stanag_Sand_red),
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
        H_HelmetSpecB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        H_HelmetSpecB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_M_ard_F: B_E_recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_M_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	weapons[] =
	{
		arifle_SPAR_03_snd_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_03_snd_MOS_Pointer_Bipod_Snds_F,
		hgun_G17_snds_F,
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
		H_Booniehat_mcamo_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
		H_Booniehat_mcamo_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_medic_ard_F: B_E_recon_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_medic_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	backpack = B_TacticalPack_mcamo_BEReconMedic_F;
	weapons[] =
	{
		arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_snd_Holo_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange,
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_Booniehat_mcamo_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        H_Booniehat_mcamo_hs,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_ard_F: B_E_recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	weapons[] =
	{
		arifle_SPAR_01_snd_LRCO_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_snd_LRCO_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_10(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_HelmetB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_LAT_ard_F: B_E_recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_LAT_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_F;
	backpack = B_TacticalPack_mcamo_BELAT_F;
	weapons[] =
	{
		arifle_SPAR_01_snd_ACO_Pointer_Snds_F,
		launch_MRAWS_sand_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_snd_ACO_Pointer_Snds_F,
		launch_MRAWS_sand_F,
		hgun_G17_snds_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
        mag_6(30Rnd_556x45_Stanag_Sand_red),
        mag_2(17Rnd_9x21_Mag),
        NLAW_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_HelmetB_light_mtp,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        H_HelmetB_light_mtp,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_recon_TL_ard_F: B_E_recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_recon_TL_ard_F.jpg";
	//faction = BLU_E_ard_F;
	uniformClass = U_B_E_Uniform_01_ard_shortsleeve_F;
	weapons[] =
	{
		arifle_SPAR_01_snd_LRCO_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_SPAR_01_snd_LRCO_Pointer_Snds_F,
		hgun_G17_snds_F,
        DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_Sand_red),
		mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SmokeShellGreen,
		SmokeShellBlue,
		SmokeShellOrange,
		mag_2(Chemlight_green)
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_556x45_Stanag_Sand_red),
		mag_2(30Rnd_556x45_Stanag_Sand_Tracer_Red),
		mag_2(17Rnd_9x21_Mag),
		mag_2(MiniGrenade),
		SmokeShell,
		SmokeShellGreen,
		SmokeShellBlue,
		SmokeShellOrange,
		mag_2(Chemlight_green)
	};
	linkedItems[] =
	{
        H_HelmetSpecB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
	respawnLinkedItems[] =
	{
        H_HelmetSpecB_light_sand,
		V_TacVest_oli,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles
	};
};
class B_E_Soldier_unarmed_ard_F: B_E_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecB_light_sand,
		V_CarrierRigKBT_01_light_Coyote_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
*/