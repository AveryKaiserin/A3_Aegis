// Arma 3
class B_Soldier_base_F: SoldierWB
{
	class EventHandlers;
};
class B_Soldier_F: B_Soldier_base_F{};
class B_soldier_AR_F;
class B_Soldier_SL_F;
// Arma 3 Atlas
class B_L_Man_Base_F: B_Soldier_F
{
    scope = private;
    scopeCurator = private;
	faction = BLU_L_F;
	genericNames = FrenchMen;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_tropic
	};
};
class B_CombatFatigues_sage_F: B_Soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_sgg;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage.rvmat"};
};
class B_CombatFatigues_01_Tshirt_sage_F: B_Soldier_AR_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_sgg_tshirt;
	hiddenSelectionsTextures[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage_CO.paa",
		"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage.rvmat",
		"\A3\Characters_F\Common\Data\basicbody.rvmat"
	};
};
class B_ReconFatigues_01_sage_F: B_Soldier_SL_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = U_B_CombatUniform_sgg_vest;
	hiddenSelectionsTextures[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Atlas\Characters_F_Atlas\Uniforms\Data\clothing_sage.rvmat"};
};
class B_L_Soldier_base_F: B_L_Man_Base_F
{
	uniformClass = U_B_CombatUniform_sgg;
};
class B_L_Soldier_A_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_A_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
    uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Carryall_green_BLAmmo_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
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
class B_L_Soldier_AR_F: B_L_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_AR_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_soldier_AR_F0;
    uniformClass = U_B_CombatUniform_sgg_tshirt;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		LMG_Mk200_black_RCO_LP_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		LMG_Mk200_black_RCO_LP_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_3(200Rnd_65x39_cased_box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_3(200Rnd_65x39_cased_box_Red),
        mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	cost = 220000;
	icon = iconManMG;
	role = MachineGunner;
	threat[] = {1,0.1,0.3};
};
class B_L_Medic_F: B_L_Soldier_base_F
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
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Medic_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_medic_F0;
    uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_AssaultPack_sgg_BLMedic_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
	};
	attendant = true;
	camouflage = 1.6;
	icon = iconManMedic;
	picture = pictureHeal;
	role = CombatLifeSaver;
};
class B_L_Crew_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_Olive_F,
		H_HelmetCrew_B_oli_F,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		SMG_03C_black,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(50Rnd_570x28_SMG_03),
		mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
		mag_6(50Rnd_570x28_SMG_03),
		mag_2(11Rnd_45ACP_Mag),
        HandGrenade,
        SmokeShell
	};
	camouflage = 1.6;
	cost = 93000;
	role = Crewman;
    engineer = true;
};
class B_L_Engineer_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_BLEng_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_65x39_caseless_msbs_mag),
		mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	engineer = true;
	canDeactivateMines = true;
	detectSkill = 31;
	camouflage = 1.6;
	icon = iconManEngineer;
	picture = pictureRepair;
	role = Sapper;
};
class B_L_Soldier_GL_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_GL_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_GL_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
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
	role = Grenadier;
	threat[] = {1,0.3,0.1};
};
class B_L_Helicrew_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Helicrew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_B_CombatUniform_sgg;
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_CrewHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
	{
		arifle_MSBS65_black_aco_f,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_aco_f,
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
	role = Crewman;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_L_Helipilot_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_pilot_s};
			speechPlural[] = {veh_infantry_pilot_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_pilot_s;
	textPlural = $STR_A3_nameSound_veh_infantry_pilot_p;
	nameSound = veh_infantry_pilot_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Helipilot_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_B_CombatUniform_sgg;
    linkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
		V_CarrierRigKBT_01_Olive_F,
        H_PilotHelmetHeli_B,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
	weapons[] =
	{
		SMG_03C_black,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	cost = 93000;
	role = Crewman;
	camouflage = 2.0;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_pilot
	};
};
class B_L_soldier_M_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_soldier_M_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_M_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_Mark_black_DMS_LP_BI_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_Mark_black_DMS_LP_BI_F,
		hgun_Pistol_heavy_01_black_F,
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
	cost = 250000;
	role = Marksman;
};
class B_L_Soldier_AA_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_BLAA_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_B_Titan_olive_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_B_Titan_olive_F,
		hgun_Pistol_heavy_01_black_F,
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
	cost = 130000;
	threat[] = {0.8,0.1,1.0};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class B_L_Soldier_AT_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_Kitbag_sgg_BLAT_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_I_Titan_short_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_I_Titan_short_F,
		hgun_Pistol_heavy_01_black_F,
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
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	camouflage = 1.5;
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class B_L_Officer_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_officer_s};
			speechPlural[] = {veh_infantry_officer_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_officer_s;
	textPlural = $STR_A3_nameSound_veh_infantry_officer_p;
	nameSound = veh_infantry_officer_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Officer_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
	uniformClass = U_B_CombatUniform_sgg;
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
	weapons[] =
	{
		SMG_03C_black,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		SMG_03C_black,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(50Rnd_570x28_SMG_03),
		mag_2(11Rnd_45ACP_Mag),
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
    cost = 600000;
	camouflage = 1.6;
	icon = iconManOfficer;
	role = Rifleman;
	identityTypes[] =
	{
		LanguageENGFRE_F,
		Head_NATO,
		Head_Greek,
		Head_Tanoan,
		G_NATO_casual
	};
};
class B_L_Soldier_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
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
	role = Rifleman;
};
class B_L_Soldier_LAT_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_AT_s};
			speechPlural[] = {veh_infantry_AT_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_AT_s;
	textPlural = $STR_A3_nameSound_veh_infantry_AT_p;
	nameSound = veh_infantry_AT_s;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_LAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_LAT_F0;
	uniformClass = U_B_CombatUniform_sgg;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetB_green,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_AssaultPack_sgg_BLLAT_F;
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_NLAW_F,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		launch_NLAW_F,
		hgun_Pistol_heavy_01_black_F,
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
	cost = 130000;
	threat[] = {0.8,0.8,0.3};
	icon = iconManAT;
	role = MissileSpecialist;
	secondaryAmmoCoef = 0.5;
};
class B_L_Soldier_SL_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(11Rnd_45ACP_Mag),
        mag_2(HandGrenade),
        mag_2(B_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR
	};
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class B_L_Soldier_TL_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_Soldier_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_TL_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_heavy_Olive_F,
		H_HelmetSpecB_green,
		ItemGPS,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	weapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_MSBS65_GL_black_ico_pointer_f,
		hgun_Pistol_heavy_01_black_F,
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
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_65x39_caseless_msbs_mag),
		mag_2(30Rnd_65x39_caseless_msbs_mag_Tracer),
		mag_2(11Rnd_45ACP_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_BLUFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_BLUFOR
	};
	cost = 250000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Grenadier;
};
class B_L_RadioOperator_F: B_L_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	uniformClass = U_B_CombatUniform_sgg_vest;
	linkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	respawnLinkedItems[] =
	{
		V_CarrierRigKBT_01_light_Olive_F,
		H_Beret_grn,
		DefaultManLinkedItems,
		NVGoggles_INDEP
	};
	backpack = B_RadioBag_01_sage_F;
	weapons[] =
    {
        arifle_MSBS65_black_ico_pointer_f,
        hgun_Pistol_heavy_01_black_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_MSBS65_black_ico_pointer_f,
        hgun_Pistol_heavy_01_black_F,
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
	role = RadioOperator;
};
class B_L_Soldier_universal_F: B_L_Soldier_F
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