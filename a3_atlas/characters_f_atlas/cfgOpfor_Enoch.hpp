// Arma 3 Aegis
class O_Fatigues_01_lush_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_CombatUniform_owcamo;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_wdl_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_wdl_CO.paa"
	};
};
class O_W_Soldier_A_F: O_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_A_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	backpack = B_Carryall_oli_OWAmmo_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_W_Soldier_AR_F: O_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_AR_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		arifle_RPK12_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_RPK12_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_W_Medic_F: O_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Medic_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	backpack = B_FieldPack_oli_OWMedic_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellBlue,
        SmokeShellOrange
	};
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_TacVest_oli,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_TacVest_oli,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_W_Crew_F: O_crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Crew_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
        mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	respawnMagazines[] =
	{
        mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
	};
	linkedItems[] =
	{
		H_Tank_black_F,
		V_BandollierB_oli,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
	respawnLinkedItems[] =
	{
		H_Tank_black_F,
		V_BandollierB_oli,
		DefaultManLinkedItems,
		O_NVGoggles_ghex_F
	};
};
class O_W_Engineer_F: O_engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Engineer_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	backpack = B_Carryall_oli_OWEng_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow
	};
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
};
class O_W_Soldier_GL_F: O_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_GL_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		arifle_AK12_GL_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_aco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
};
class O_W_Helicrew_F: O_helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Helicrew_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_W_PilotCoveralls;
	weapons[] =
	{
		arifle_AK12U_545_aco_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow
	};
    linkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_W_Helipilot_F: O_helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Helipilot_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_W_PilotCoveralls;
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
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O,
        DefaultManLinkedItems,
        O_NVGoggles_ghex_F
    };
};
class O_W_soldier_M_F: O_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_soldier_M_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		srifle_DMR_01_black_ARCO_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_01_black_ARCO_BI_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_10(10Rnd_762x54_Mag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(10Rnd_762x54_Mag),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
};
class O_W_Soldier_AA_F: O_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_AA_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	backpack = B_FieldPack_oli_OWAA_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_ghex_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_ghex_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
};
class O_W_Soldier_AT_F: O_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_AT_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	backpack = B_FieldPack_oli_OWAT_F;
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_ghex_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_ghex_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
};
class O_W_Officer_F: O_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Officer_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_casual
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		SmokeShellRed,
		SmokeShellOrange,
		SmokeShellYellow
	};
	linkedItems[] =
	{
		H_Beret_CSAT_01_F,
		V_BandollierB_oli,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_Beret_CSAT_01_F,
		V_BandollierB_oli,
		ItemGPS,
		DefaultManLinkedItems
	};
};
class O_W_Soldier_F: O_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		arifle_AK12_545_arco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_arco_pointer_F,
		hgun_Pistol_01_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
};
class O_W_Soldier_LAT_F: O_soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_LAT_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	backpack = B_FieldPack_oli_OWLAT_F;
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		launch_RPG32_ghex_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		launch_RPG32_ghex_F,
		hgun_Pistol_01_F,
        DefaultManWeapons
	};
	magazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_6(30Rnd_545x39_AK12_Mag_F),
		mag_2(10Rnd_9x21_Mag),
		RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
	};
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_TacVest_oli,
		DefaultManLinkedItems
	};
};
class O_W_Soldier_SL_F: O_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_SL_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		arifle_AK12_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	respawnMagazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
	};
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_radio_khaki_F,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_radio_khaki_F,
		ItemGPS,
		DefaultManLinkedItems
	};
};
class O_W_Soldier_TL_F: O_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_Soldier_TL_F.jpg";
	faction = OPF_W_F;
	genericNames = RussianMen;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		G_RUS_default
	};
    scope = public;
    scopeCurator = public;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	weapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12_GL_545_arco_pointer_F,
		hgun_Pistol_01_F,
        DefaultManWeapons,
		Binocular
	};
	magazines[] =
	{
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
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
		mag_4(30Rnd_545x39_AK12_Mag_F),
		mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
		mag_2(10Rnd_9x21_Mag),
        mag_4(1Rnd_HE_Grenade_shell),
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
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_radio_khaki_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_radio_khaki_F,
		DefaultManLinkedItems
	};
};
class O_W_RadioOperator_F: O_W_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_W_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		H_HelmetAggressor_cover_lush_F,
		V_SmershVest_01_khaki_F,
		DefaultManLinkedItems
	};
	backpack = B_RadioBag_01_lush_F;
	weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_W_Soldier_universal_F: O_W_Soldier_F
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
class O_W_Fighter_Pilot_F: O_W_Helipilot_F
{
    author = $STR_A3_A_AveryTheKitty;
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_O_W_PilotCoveralls;
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
    weapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Pistol_01_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
    respawnMagazines[] =
    {
        mag_2(10Rnd_9x21_Mag),
        SmokeShellRed,
        SmokeShellOrange,
        SmokeShellYellow
    };
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};
class O_LightFatigues_01_lush_F: O_A_officer_F
{
	scope = protected;
    scopeCurator = private;
	uniformClass = U_O_officer_noInsignia_owcamo_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noinsignia_wdl_CO.paa"};
};