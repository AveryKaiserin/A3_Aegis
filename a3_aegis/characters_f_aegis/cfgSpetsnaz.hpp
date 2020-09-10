// OPF_R_F
// Arma 3 Enoch
class O_R_Man_Base_F: O_Soldier_F
{
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_default
	};
};
class O_R_Soldier_Base_F: O_R_Man_Base_F
{
	uniformClass = U_O_R_CombatUniform_taiga_F;
};
class O_R_Soldier_TL_F: O_R_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_TL_F.jpg";
    weapons[] =
    {
        arifle_AK12_GL_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
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
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        1Rnd_Smoke_Grenade_shell,
		SOLDIER_SMOKE_GRENADES_OPFOR
    };
    cost = 450000;
};
class O_R_Soldier_GL_F: O_R_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_GL_F.jpg";
    weapons[] =
    {
        arifle_AK12_GL_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	cost = 130000;
	threat[] = {1,0.3,0.1};
};
class O_R_soldier_exp_F: O_R_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_exp_F.jpg";
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	cost = 115000;
	threat[] = {1,0.5,0.1};
};
class O_R_Soldier_AR_F: O_R_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AR_F.jpg";
    weapons[] =
    {
        arifle_RPK12_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_RPK12_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	cost = 125000;
	threat[] = {1,0.1,0.3};
};
class O_R_soldier_M_F: O_R_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_M_F.jpg";
    weapons[] =
    {
        srifle_DMR_05_DMS_LP_BI_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_05_DMS_LP_BI_F,
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
    cost = 150000;
};
class O_R_medic_F: O_R_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_medic_F.jpg";
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
	cost = 300000;
	threat[] = {1,0.1,0.3};
};
class O_R_Soldier_LAT_F: O_R_Soldier_Base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_LAT_F.jpg";
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        launch_RPG32_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        launch_RPG32_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
};
class O_R_JTAC_F: O_R_Soldier_Base_F
{
    scope = protected;
    scopeCurator = private;
	backpack = B_RadioBag_01_taiga_F;
	weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
};
class O_R_Soldier_recon_base: O_R_Soldier_Base_F
{
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
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_SF
	};
    uniformClass = U_O_R_Gorka_01_camo_F;
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
	canHideBodies = false;
    icon = iconManRecon;
};
class O_R_recon_TL_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_TL_F.jpg";
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(30Rnd_762x39_AK12_Lush_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(30Rnd_762x39_AK12_Lush_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
	role = Rifleman;
    threat[] = {1,0.1,0.3};
};
class O_R_recon_exp_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_exp_F.jpg";
	uniformClass = U_O_R_Gorka_01_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12U_lush_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_lush_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_recon_AR_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_AR_F.jpg";
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_RPK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_RPK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    threat[] = {1,0.1,0.3};
};
class O_R_recon_M_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_M_F.jpg";
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_Booniehat_taiga_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_Booniehat_taiga_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    magazines[] =
    {
        mag_8(10Rnd_127x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_8(10Rnd_127x54_Mag),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    threat[] = {1,0.1,0.3};
};
class O_R_recon_medic_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_medic_F.jpg";
	backpack = B_FieldPack_taiga_ReconMedic_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12U_lush_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_lush_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC,
        mag_2(Chemlight_red)
    };
    threat[] = {1,0.1,0.3};
};
class O_R_recon_GL_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_GL_F.jpg";
	uniformClass = U_O_R_Gorka_01_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_GL_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};
class O_R_recon_LAT_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_LAT_F.jpg";
	uniformClass = U_O_R_Gorka_01_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_lush_holo_snds_pointer_F,
		launch_RPG32_green_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_lush_holo_snds_pointer_F,
		launch_RPG32_green_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	threat[] = {1,0.6,0.1};
};
class O_R_recon_JTAC_F: O_R_Soldier_recon_base
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_JTAC_F.jpg";
	backpack = B_RadioBag_01_taiga_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_taiga_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_taiga_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_GL_lush_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_lush_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
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
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red),
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_OPFOR
    };
};
// Arma 3 Aegis
class O_R_Fatigues_01_taiga_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_CombatUniform_taiga_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga.rvmat",
		"\A3\Characters_F\OPFOR\Data\tech.rvmat"
	};
	modelSides[] =
    {
        TEast,
        TGuerrila,
        TCivilian
    };
};
class O_R_Fatigues_01_arid_F: O_R_Fatigues_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_CombatUniform_arid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa"
	};
};
class O_R_GhillieSuit_01_taiga_F: O_sniper_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_GhillieSuit_taiga_F;
	hiddenSelections[] =
	{
		camo1,
		camo2,
		camo3,
		insignia
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUtaiga_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_RUtaiga_CO.paa"
	};
};
class O_R_GhillieSuit_01_arid_F: O_R_GhillieSuit_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_GhillieSuit_arid_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\clothing_RUarid_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\tech_rus_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_RUarid_CO.paa"
	};
};
class O_R_PilotCoveralls_01_F: O_Pilot_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_PilotCoveralls;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\pilot_suit_RUtaiga_CO.paa"};
};
class O_R_Wetsuit_01_F: O_diver_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_Wetsuit;
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa"
	};
	hiddenSelectionsMaterials[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_suit.rvmat",
        "\A3\Characters_F\Common\Data\diver_equip.rvmat"
    };
	hiddenUnderwaterSelectionsTextures[] =
	{
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa",
		"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\diver_equip_CO.paa",
		"\A3\Characters_F\Data\visors_CA.paa"
	};
};
class O_R_OfficerFatigues_01_taiga_F: O_officer_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_OfficerUniform_taiga_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_RUtaiga_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_RUtaiga.rvmat"};
};
class O_R_OfficerFatigues_01_arid_F: O_R_OfficerFatigues_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_OfficerUniform_arid_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_RUarid_CO.paa"};
};
class O_R_LightFatigues_01_taiga_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_officer_noInsignia_taiga_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUtaiga_CO.paa"};
	hiddenSelectionsMaterials[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUtaiga.rvmat"};
	modelSides[] =
    {
        TEast,
        TCivilian,
        TGuerrila
    };
};
class O_R_LightFatigues_01_arid_F: O_R_LightFatigues_01_taiga_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_R_officer_noInsignia_arid_F;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\Officer_noInsignia_RUarid_CO.paa"};
};
class O_R_Soldier_A_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_A_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_Soldier_A_F0;
	backpack = B_Carryall_green_Ammo_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade),
		mag_2(SmokeShell)
	};
	respawnMagazines[] =
	{
		mag_12(30Rnd_545x39_AK12_Mag_F),
		mag_2(17Rnd_9x21_Mag),
		mag_2(HandGrenade),
		mag_2(SmokeShell)
	};
	cost = 110000;
};
class O_R_Soldier_AAR_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AAR_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_O_SOLDIERU_AAR_F0;
	backpack = B_FieldPack_green_AAR_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 95000;
	role = Assistant;
};
class O_R_support_AMG_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_F.jpg";
  	scope = public;
  	scopeCurator = public;
	displayName = $STR_B_support_AMG_F0;
	backpack = O_R_HMG_01_support_F;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 91000;
	role = Assistant;
};
class O_R_support_AMort_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_AMort_F0;
	backpack = O_R_Mortar_01_support_F;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 81000;
	role = Assistant;
};
class O_R_Soldier_AHAT_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AHAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Soldier_AHAT_F0;
	backpack = B_Carryall_taiga_AHAT_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 93000;
	role = Assistant;
};
class O_R_Soldier_AAA_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AAA_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAA_F0;
	backpack = B_Carryall_taiga_AAA_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 94000;
	role = Assistant;
};
class O_R_Soldier_AAT_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_AAT_F0;
	backpack = B_Carryall_green_AAT_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		arifle_AK12_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Rangefinder
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 93000;
	role = Assistant;
};
class O_R_crew_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_crew_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_crew_F0;
	linkedItems[] =
	{
		V_BandollierB_taiga_F,
		H_Tank_black_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_taiga_F,
		H_Tank_black_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12U_545_aco_F,
        hgun_Rook40_F,
		DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_F,
        hgun_Rook40_F,
		DefaultManWeapons
    };
    magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        SmokeShell
    };
    engineer = true;
	cost = 90000;
	role = Crewman;
	camouflage = 1.6;
};
class O_R_engineer_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_engineer_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_engineer_F0;
	backpack = B_Carryall_taiga_eng_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
	canDeactivateMines = true;
	detectSkill = 31;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
    role = Sapper;
	engineer = true;
	camouflage = 1.6;
	threat[] = {1,0.5,0.1};
};
class O_R_soldier_mine_F: O_R_soldier_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_mine_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_taiga_Mine;
};
class O_R_support_GMG_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_GMG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_GMG_F0;
	backpack = O_R_GMG_01_Weapon_F;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 470000;
	role = Assistant;
	threat[] = {1,0.6,0.1};
};
class O_R_support_MG_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_MG_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_MG_F0;
	backpack = O_R_HMG_01_Weapon_F;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 460000;
	role = Assistant;
	threat[] = {1,0.3,0.3};
};
class O_R_support_Mort_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_Mort_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_support_Mort_F0;
	backpack = O_R_Mortar_01_Weapon_F;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        mag_2(SmokeShell)
    };
	cost = 480000;
	role = Assistant;
	threat[] = {1,0.8,0.1};
};
class O_R_helipilot_F: O_R_Soldier_Base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_helipilot_F.jpg";
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Helipilot_F0;
	uniformClass = U_O_R_PilotCoveralls;
    linkedItems[] =
    {
        H_PilotHelmetHeli_O_R,
        DefaultManLinkedItems,
        O_NVGoggles_grn_F
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetHeli_O_R,
        DefaultManLinkedItems,
        O_NVGoggles_grn_F
    };
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
	camouflage = 2;
	cost = 160000;
	role = Crewman;
};
class O_R_helicrew_F: O_R_Soldier_Base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_helicrew_F.jpg";
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_helicrew_F0;
	uniformClass = U_O_R_PilotCoveralls;
    linkedItems[] =
    {
        H_CrewHelmetHeli_O_R,
        DefaultManLinkedItems,
        O_NVGoggles_grn_F
    };
    respawnLinkedItems[] =
    {
        H_CrewHelmetHeli_O_R,
        DefaultManLinkedItems,
        O_NVGoggles_grn_F
    };
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
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
	camouflage = 2;
	cost = 80000;
	role = Crewman;
};
class O_R_soldier_AA_F: O_R_Soldier_Base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_AA_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_AA_F0;
	backpack = B_FieldPack_taiga_AA_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_camo_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_camo_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 200000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class O_R_soldier_AT_F: O_R_Soldier_Base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_AT_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_soldier_AT_F0;
	backpack = B_FieldPack_green_AT_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_camo_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_aco_pointer_F,
		launch_O_Titan_short_camo_F,
		hgun_Rook40_F,
		DefaultManWeapons
	};
	magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 190000;
	icon = iconManAT;
	role = MissileSpecialist;
	threat[] = {1,0.7,0.3};
};
class O_R_officer_F: O_R_Soldier_Base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_officer_F.jpg";
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_casual
	};
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_officer_F0;
	uniformClass = U_O_R_OfficerUniform_taiga_F;
	linkedItems[] =
	{
		V_BandollierB_taiga_F,
		H_MilCap_taiga,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_taiga_F,
		H_MilCap_taiga,
		ItemGPS,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	respawnWeapons[] =
	{
		arifle_AK12U_545_F,
		hgun_Rook40_F,
		DefaultManWeapons,
		Binocular
	};
	magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
	camouflage = 1.6;
    cost = 600000;
	icon = iconManOfficer;
    role = Rifleman;
};
class O_R_soldier_repair_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_repair_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_soldier_repair_F0;
	backpack = B_FieldPack_taiga_Repair_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	engineer = true;
	detectSkill = 24;
    icon = iconManEngineer;
    picture = pictureRepair;
	cost = 220000;
    role = Sapper;
	camouflage = 1.6;
};
class O_R_Soldier_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Soldier_F0;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	cost = 100000;
    role = Rifleman;
};
class O_R_Soldier_HAT_F: O_R_Soldier_Base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_HAT_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_Soldier_HAT_F0;
	backpack = B_FieldPack_taiga_HAT_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
		launch_O_Vorona_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
		launch_O_Vorona_green_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
		mag_6(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Vorona_HEAT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	cost = 180000;
	threat[] = {1,0.7,0.3};
	secondaryAmmoCoef = 0.5;
	icon = iconManAT;
    role = MissileSpecialist;
};
class O_R_Soldier_lite_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_lite_F.jpg";
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_casual
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_B_Soldier_lite_F0;
	uniformClass = U_O_R_CombatUniform_taiga_F;
	linkedItems[] =
	{
		V_BandollierB_taiga_F,
		H_MilCap_taiga,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_taiga_F,
		H_MilCap_taiga,
		DefaultManLinkedItems
	};
	weapons[] =
    {
        arifle_AK12U_545_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_F,
        DefaultManWeapons
    };
    magazines[] =
    {
		mag_4(30Rnd_545x39_AK12_Mag_F),
        HandGrenade,
        SmokeShell
    };
    respawnMagazines[] =
    {
		mag_4(30Rnd_545x39_AK12_Mag_F),
        HandGrenade,
        SmokeShell
    };
	cost = 90000;
	camouflage = 1.2;
    role = Rifleman;
};
class O_R_Soldier_CQ_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_Soldier_CQ_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    weapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    cost = 130000;
    threat[] = {1,0.3,0.1};
};
class O_R_Soldier_SL_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_SL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_Soldier_SL_F0;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_arco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Binocular
    };
	magazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_545x39_AK12_Mag_F),
        mag_2(30Rnd_545x39_AK12_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_R_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    cost = 500000;
	camouflage = 1.4;
	icon = iconManLeader;
	role = Rifleman;
};
class O_R_Soldier_CBRN_F: O_R_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_CBRN_F.jpg";
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		G_AirPurifyingRespirator_02_olive_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		G_AirPurifyingRespirator_02_olive_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12U_545_aco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
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
class O_R_RadioOperator_F: O_R_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_RadioOperator_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_taiga_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_R_soldier_UAV_F: O_R_Soldier_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UAV_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_B_Soldier_UAV_F0;
	backpack = O_R_UAV_01_backpack_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		O_R_UavTerminal,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_taiga_F,
		O_R_UavTerminal,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	uavHacker = true;
    cost = 150000;
	role = SpecialOperative;
};
class O_R_soldier_UAV_06_F: O_R_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UAV_06_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = O_R_UAV_06_backpack_F;
};
class O_R_soldier_UAV_06_medical_F: O_R_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UAV_06_medical_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = O_R_UAV_06_medical_backpack_F;
};
class O_R_soldier_UGV_02_Demining_F: O_R_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UGV_02_Demining_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = O_R_UGV_02_Demining_backpack_F;
};
class O_R_soldier_UGV_02_Science_F: O_R_Soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UGV_02_Science_F.jpg";
    scope = protected;
    scopeCurator = private;
	displayName = $STR_A3_C_B_soldier_UGV_02_Science_F0;
	backpack = O_R_UGV_02_Science_backpack_F;
};
class O_R_Soldier_diver_base: O_R_Soldier_Base_F
{
    author = $STR_A3_A_AveryTheKitty;
    class SpeechVariants
    {
        class Default
        {
            speechSingular[] = {veh_infantry_diver_s};
            speechPlural[] = {veh_infantry_diver_p};
        };
    };
    textSingular = $STR_A3_nameSound_veh_infantry_diver_s;
    textPlural = $STR_A3_nameSound_veh_infantry_diver_p;
    nameSound = veh_infantry_diver_s;
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_diver
	};
	uniformClass = U_O_R_Wetsuit;
    vehicleClass = MenDiver;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
	role = SpecialOperative;
	camouflage = 2;
	canHideBodies = false;
};
class O_R_diver_F: O_R_Soldier_diver_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_diver_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_diver_F0;
	linkedItems[] =
	{
		V_RebreatherRU,
		G_O_R_Diving,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_RebreatherRU,
		G_O_R_Diving,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
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
    cost = 70000;
};
class O_R_diver_exp_F: O_R_Soldier_diver_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_diver_exp_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_diver_exp_F0;
	backpack = B_FieldPack_blk_DiverExp;
	linkedItems[] =
	{
		V_RebreatherRU,
		G_O_R_Diving,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_RebreatherRU,
		G_O_R_Diving,
		DefaultManLinkedItems
	};
	weapons[] =
	{
		arifle_SDAR_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_SDAR_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons
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
	canDeactivateMines = true;
    cost = 90000;
	icon = iconManExplosive;
};
class O_R_diver_TL_F: O_R_Soldier_diver_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_diver_TL_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_diver_TL_F0;
	linkedItems[] =
	{
		V_RebreatherRU,
		G_O_R_Diving,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_RebreatherRU,
		G_O_R_Diving,
		ItemGPS,
		DefaultManLinkedItems
	};
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
    cost = 430000;
	icon = iconManLeader;
};
class O_R_recon_F: O_R_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_B_recon_F0;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_recon_CQ_F: O_R_Soldier_recon_base
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_CQ_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_B_recon_CQ_F0;
	uniformClass = U_O_R_Gorka_01_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    weapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        sgun_Mp153_black_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_3(4Rnd_12Gauge_Pellets),
        mag_3(4Rnd_12Gauge_Slug),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    cost = 130000;
    threat[] = {1,0.3,0.1};
};
class O_R_Soldier_sniper_base: O_R_Soldier_Base_F
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
	uniformClass = U_O_R_GhillieSuit_taiga_F;
    vehicleClass = MenSniper;
	editorSubcategory = EdSubcat_Personnel_SpecialForces;
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
	canHideBodies = false;
	role = Marksman;
	primaryAmmoCoef = 0.2;
	secondaryAmmoCoef = 0.05;
	handgunAmmoCoef = 0.1;
};
class O_R_spotter_F: O_R_Soldier_sniper_base
{
	author = $STR_A3_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_spotter_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_spotter_F0;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
    weapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
	cost = 100000;
	camouflage = 0.6;
	role = Marksman;
	threat[] = {0.8,0.1,0.1};
};
class O_R_sniper_F: O_R_Soldier_sniper_base
{
	author = $STR_A3_AveryTheKitty;
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_sniper_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_B_sniper_F0;
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
	{
		srifle_GM6_LRPS_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_GM6_LRPS_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
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
	camouflage = 0.6;
	role = Marksman;
};
class O_R_Soldier_universal_F: O_R_Soldier_F
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
class O_R_Survivor_F: O_R_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Survivor_F.jpg";
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
class O_R_Soldier_unarmed_F: O_R_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_unarmed_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_taiga_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class O_R_ghillie_base_F: O_R_Soldier_sniper_base
{
    author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_cfgVehicles_O_ghillie_base_F0;
	uniformClass = U_O_R_FullGhillie_wdl_F;
	model = "\A3\Characters_F_Mark\OPFOR\O_FullGhillie_F.p3d";
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
			"A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_OPFOR.rvmat",
			"A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_OPFOR_injury.rvmat",
			"A3\Characters_F_Mark\OPFOR\Data\ghillie_coverall_OPFOR_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
		};
	};
	weapons[] =
	{
		srifle_GM6_LRPS_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	respawnWeapons[] =
	{
		srifle_GM6_LRPS_F,
		hgun_Rook40_snds_F,
		DefaultManWeapons,
		Rangefinder
	};
	hideProxySelections[] = {ghillie_hide};
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
	linkedItems[] =
	{
		V_TacChestrig_grn_F,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_grn_F,
        ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_ghillie_wdl_F: O_R_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_wdl_F0;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_RUtaiga_CO.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_wdl_CA.paa",
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_threads_5LOD_wdl_CO.paa"
	};
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_SF
	};
};
class O_R_ghillie_spotter_wdl_F: O_R_ghillie_wdl_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_spotter_wdl_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_W_ghillie_spotter_wdl_F0;
    cost = 250000;
	weapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_lush_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Lush_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_Fighter_Pilot_F: O_R_Soldier_Base_F
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
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Fighter_Pilot_F.jpg";
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Euro,
		Head_Enoch,
		Head_Russian,
		Head_Asian,
		G_RUS_pilot
	};
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_B_Fighter_Pilot_name;
	uniformClass = U_O_R_PilotCoveralls;
    linkedItems[] =
    {
        H_PilotHelmetFighter_O_R,
        DefaultManLinkedItems
    };
    respawnLinkedItems[] =
    {
        H_PilotHelmetFighter_O_R,
        DefaultManLinkedItems
    };
	weapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        hgun_Rook40_F,
        DefaultManWeapons
    };
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
	camouflage = 2;
    cost = 165000;
    role = Crewman;
};
// OPF_R_ard_F
class O_R_Soldier_A_ard_F: O_R_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_A_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
};
class O_R_Soldier_AAR_ard_F: O_R_Soldier_AAR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AAR_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_support_AMG_ard_F: O_R_support_AMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMG_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
};
class O_R_support_AMort_ard_F: O_R_support_AMort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_AMort_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
};
class O_R_Soldier_AHAT_ard_F: O_R_Soldier_AHAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AHAT_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_Carryall_green_AHAT_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_AAA_ard_F: O_R_Soldier_AAA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AAA_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_Carryall_green_AAA_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_AAT_ard_F: O_R_Soldier_AAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_AAT_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_soldier_AR_ard_F: O_R_soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_AR_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_medic_ard_F: O_R_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_medic_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_FieldPack_green_Medic_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_crew_ard_F: O_R_crew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_crew_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_Tank_black_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_Tank_black_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_engineer_ard_F: O_R_engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_engineer_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_Carryall_green_eng_F;
};
class O_R_soldier_exp_ard_F: O_R_soldier_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_exp_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_Carryall_green_exp_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_soldier_mine_ard_F: O_R_soldier_exp_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_mine_ard_F.jpg";
	displayName = $STR_A3_B_T_soldier_mine_F0;
	backpack = B_Carryall_green_Mine;
};
class O_R_Soldier_GL_ard_F: O_R_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_GL_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_support_GMG_ard_F: O_R_support_GMG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_GMG_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
};
class O_R_support_MG_ard_F: O_R_support_MG_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_MG_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
};
class O_R_support_Mort_ard_F: O_R_support_Mort_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_support_Mort_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
};
class O_R_helipilot_ard_F: O_R_helipilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_helipilot_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_PilotCoveralls;
};
class O_R_helicrew_ard_F: O_R_helicrew_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_helicrew_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_PilotCoveralls;
};
class O_R_soldier_M_ard_F: O_R_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_M_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_soldier_AA_ard_F: O_R_soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_AA_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_FieldPack_green_AA_F;
};
class O_R_soldier_AT_ard_F: O_R_soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_AT_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
};
class O_R_officer_ard_F: O_R_officer_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_officer_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_OfficerUniform_arid_F;
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		ItemGPS,
		DefaultManLinkedItems
	};
};
class O_R_soldier_repair_ard_F: O_R_soldier_repair_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_repair_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_FieldPack_green_Repair_F;
};
class O_R_Soldier_ard_F: O_R_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_HAT_ard_F: O_R_Soldier_HAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_HAT_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_FieldPack_green_HAT_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_lite_ard_F: O_R_Soldier_lite_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_lite_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_BandollierB_rgr,
		H_MilCap_grn,
		DefaultManLinkedItems
	};
};
class O_R_Soldier_LAT_ard_F: O_R_Soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_LAT_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	backpack = B_FieldPack_green_RPG_AT_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_CQ_ard_F: O_R_Soldier_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_CQ_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_SL_ard_F: O_R_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_SL_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_TL_ard_F: O_R_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_TL_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_Soldier_CBRN_ard_F: O_R_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_CBRN_ard_F.jpg";
    displayName = $STR_A3_C_B_W_Soldier_CBRN_F0;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		G_AirPurifyingRespirator_02_olive_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		G_AirPurifyingRespirator_02_olive_F,
		DefaultManCbrnLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12U_545_aco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_545_aco_flash_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_545x39_AK12_Mag_F),
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
class O_R_RadioOperator_ard_F: O_R_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_RadioOperator_ard_F.jpg";
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	backpack = B_RadioBag_01_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_545_aco_pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    role = RadioOperator;
};
class O_R_soldier_UAV_ard_F: O_R_soldier_UAV_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UAV_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_CombatUniform_arid_F;
	linkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		O_R_UavTerminal,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_TacVest_grn,
		H_HelmetAggressor_cover_F,
		O_R_UavTerminal,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_soldier_UAV_06_ard_F: O_R_soldier_UAV_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UAV_06_ard_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_F0;
	backpack = O_R_UAV_06_backpack_F;
};
class O_R_soldier_UAV_06_medical_ard_F: O_R_soldier_UAV_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UAV_06_medical_ard_F.jpg";
	displayName = $STR_A3_B_T_soldier_UAV_06_medical_F0;
	backpack = O_R_UAV_06_medical_backpack_F;
};
class O_R_soldier_UGV_02_Demining_ard_F: O_R_soldier_UAV_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UGV_02_Demining_ard_F.jpg";
	displayName = $STR_A3_C_B_soldier_UGV_02_Demining_F0;
	backpack = O_R_UGV_02_Demining_backpack_F;
};
class O_R_soldier_UGV_02_Science_ard_F: O_R_soldier_UAV_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_soldier_UGV_02_Science_ard_F.jpg";
    scope = protected;
    scopeCurator = private;
	displayName = $STR_A3_C_B_soldier_UGV_02_Science_F0;
	backpack = O_R_UGV_02_Science_backpack_F;
};
class O_R_diver_ard_F: O_R_diver_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_diver_ard_F.jpg";
	faction = OPF_R_ard_F;
};
class O_R_diver_exp_ard_F: O_R_diver_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_diver_exp_ard_F.jpg";
	faction = OPF_R_ard_F;
};
class O_R_diver_TL_ard_F: O_R_diver_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_diver_TL_ard_F.jpg";
	faction = OPF_R_ard_F;
};
class O_R_recon_TL_ard_F: O_R_recon_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_TL_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    respawnWeapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Rangefinder
    };
    magazines[] =
    {
        mag_4(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(30Rnd_762x39_AK12_Arid_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(30Rnd_762x39_AK12_Arid_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
};
class O_R_recon_exp_ard_F: O_R_recon_exp_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_exp_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	weapons[] =
    {
        arifle_AK12U_arid_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_arid_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_3(APERSMine_Range_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_recon_AR_ard_F: O_R_recon_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_AR_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_RPK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_RPK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_8(75Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        MiniGrenade,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_recon_M_ard_F: O_R_recon_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_M_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_Booniehat_mgrn_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_Booniehat_mgrn_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
};
class O_R_recon_medic_ard_F: O_R_recon_medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_medic_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	backpack = B_FieldPack_green_ReconMedic_F;
	weapons[] =
    {
        arifle_AK12U_arid_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12U_arid_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red)
    };
};
class O_R_recon_GL_ard_F: O_R_recon_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_GL_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	weapons[] =
    {
        arifle_AK12_GL_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
};
class O_R_recon_LAT_ard_F: O_R_recon_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_LAT_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	weapons[] =
    {
        arifle_AK12_arid_holo_snds_pointer_F,
		launch_RPG32_green_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_AK12_arid_holo_snds_pointer_F,
		launch_RPG32_green_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
		RPG32_F,
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_recon_JTAC_ard_F: O_R_recon_JTAC_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_JTAC_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	backpack = B_RadioBag_01_arid_F;
	linkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_radio_F,
		H_Booniehat_mgrn_hs,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_GL_arid_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_GL_arid_holo_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
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
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        mag_6(1Rnd_HE_Grenade_shell),
        Laserbatteries,
        SmokeShell,
		SOLDIER_SMOKE_SHELLS_OPFOR,
        mag_2(Chemlight_red),
        1Rnd_Smoke_Grenade_shell,
        SOLDIER_SMOKE_GRENADES_OPFOR
    };
};
class O_R_recon_ard_F: O_R_recon_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		ItemGPS,
		DefaultManLinkedItems,
		O_NVGoggles_grn_F
	};
	weapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Binocular
    };
    respawnWeapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
		Binocular
    };
    magazines[] =
    {
        mag_10(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(MiniGrenade),
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_recon_CQ_ard_F: O_R_recon_CQ_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_recon_CQ_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_Gorka_01_brown_F;
};
class O_R_spotter_ard_F: O_R_spotter_F
{
	author = $STR_A3_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_spotter_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_GhillieSuit_arid_F;
	weapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_sniper_ard_F: O_R_sniper_F
{
	author = $STR_A3_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_sniper_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_GhillieSuit_arid_F;
};
class O_R_Soldier_universal_ard_F: O_R_Soldier_ard_F
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
class O_R_Survivor_ard_F: O_R_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Survivor_ard_F.jpg";
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
class O_R_Soldier_unarmed_ard_F: O_R_Soldier_ard_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Soldier_unarmed_ard_F.jpg";
	displayName = $STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName;
	weapons[] = {DefaultManWeapons};
	respawnWeapons[] = {DefaultManWeapons};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_SmershVest_01_F,
		H_HelmetAggressor_cover_F,
		DefaultManLinkedItems
	};
	role = Unarmed;
	threat[] = {0.1,0.1,0.1};
};
class O_R_ghillie_ard_F: O_R_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_ghillie_ard_F0;
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_FullGhillie_ard_F;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_RUarid_CO.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_ard_CA.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_ard_CO.paa"
	};
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_SF
	};
};
class O_R_ghillie_lsh_F: O_R_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_lsh_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_ghillie_lsh_F0;
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_FullGhillie_lsh_F;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_RUarid_CO.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_lsh_CA.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_lsh_CO.paa"
	};
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_SF
	};
};
class O_R_ghillie_sard_F: O_R_ghillie_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_sard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_O_ghillie_sard_F0;
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_FullGhillie_sard_F;
	hiddenSelectionsTextures[] =
	{
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\ghillie_coverall_RUarid_CO.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_sard_CA.paa",
        "\A3\Characters_F_Mark\Common\Data\ghillie_threads_5LOD_sard_CO.paa"
	};
	identityTypes[] =
	{
		LanguageRUS_F,
		Head_Russian,
		Head_Euro,
		Head_Enoch,
		Head_Asian,
		G_RUS_SF
	};
};
class O_R_ghillie_spotter_ard_F: O_R_ghillie_ard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_spotter_ard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_ard_F0;
    cost = 250000;
	weapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_ghillie_spotter_lsh_F: O_R_ghillie_lsh_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_spotter_lsh_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_lsh_F0;
    cost = 250000;
	weapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_ghillie_spotter_sard_F: O_R_ghillie_sard_F
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
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_ghillie_spotter_sard_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_ghillie_spotter_sard_F0;
    cost = 250000;
	weapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    respawnWeapons[] =
    {
        arifle_AK12_arid_arco_snds_pointer_F,
        hgun_Rook40_snds_F,
        DefaultManWeapons,
        Laserdesignator_02
    };
    magazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_762x39_AK12_Arid_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        ClaymoreDirectionalMine_Remote_Mag,
        APERSTripMine_Wire_Mag,
        mag_2(MiniGrenade),
        mag_2(O_R_IR_Grenade),
        Laserbatteries,
        mag_2(SmokeShell),
        mag_2(Chemlight_red)
    };
};
class O_R_Fighter_Pilot_ard_F: O_R_Fighter_Pilot_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_Fighter_Pilot_ard_F.jpg";
	faction = OPF_R_ard_F;
	uniformClass = U_O_R_PilotCoveralls;
};