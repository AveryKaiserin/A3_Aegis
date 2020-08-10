// Arma 3
class O_Soldier_F;
// Arma 3 Apex
class O_T_Soldier_A_F;
class O_T_Soldier_AR_F;
class O_T_Medic_F;
class O_T_Engineer_F;
class O_T_Soldier_GL_F;
class O_T_soldier_M_F;
class O_T_Soldier_AA_F;
class O_T_Soldier_AT_F;
class O_T_Soldier_F;
class O_T_Soldier_LAT_F;
class O_T_Soldier_SL_F;
class O_T_Soldier_TL_F;
// Arma 3 Tacops
class O_A_officer_F;
// Arma 3 Marine
class O_T_Fatigues_01_bhex_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_T_Soldier_bhex_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing_blu_CO.paa",
		"\A3_Marine\Characters_F_Marine\Uniforms\Data\tech_blu_CO.paa"
	};
};
class O_T_SoldierM_A_F: O_T_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_A_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
	backpack = B_Carryall_blk_OTAmmo_F;
    magazines[] =
    {
        mag_12(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_12(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_AR_F: O_T_Soldier_AR_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_AR_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
	weapons[] =
	{
		arifle_CTARS_blk_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
	respawnWeapons[] =
	{
		arifle_CTARS_blk_Pointer_F,
	    hgun_Rook40_F,
		DefaultManWeapons
	};
    magazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_8(100Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        HandGrenade,
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_Medic_F: O_T_Medic_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_Medic_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
	backpack = B_AssaultPack_blk_OTMedic_F;
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_MEDIC
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_Engineer_M_F: O_T_Engineer_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_Engineer_M_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
	backpack = B_Carryall_blk_OTEng_F;
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_GL_F: O_T_Soldier_GL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_GL_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
    weapons[] =
    {
        arifle_CTAR_GL_blk_ACO_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_GL_blk_ACO_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_6(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShell),
        mag_2(1Rnd_Smoke_Grenade_shell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOGL_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOGL_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_soldierM_M_F: O_T_soldier_M_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_soldierM_M_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
    weapons[] =
    {
        srifle_DMR_07_blk_ARCO_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    respawnWeapons[] =
    {
        srifle_DMR_07_blk_ARCO_F,
        hgun_Rook40_F,
        DefaultManWeapons,
        Rangefinder
    };
    magazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(20Rnd_650x39_Cased_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_AA_F: O_T_Soldier_AA_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_AA_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
	backpack = B_FieldPack_blk_OTAA_F;
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AA,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_AT_F: O_T_Soldier_AT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
	backpack = B_FieldPack_blk_OTAT_F;
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        Titan_AT,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_F: O_T_Soldier_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
    weapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ARCO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_LAT_F: O_T_Soldier_LAT_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_LAT_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
	backpack = B_FieldPack_blk_OTLAT_F;
    weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        launch_RPG32_ghex_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        launch_RPG32_ghex_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        RPG32_F,
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_SL_F: O_T_Soldier_SL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_SL_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
    respawnMagazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(O_IR_Grenade),
        SmokeShell,
        SOLDIER_SMOKE_SHELLS_OPFOR
    };
	linkedItems[] =
	{
		H_HelmetLeaderO_oceanic,
		V_HarnessOGL_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetLeaderO_oceanic,
		V_HarnessOGL_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_SoldierM_TL_F: O_T_Soldier_TL_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_TL_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_Soldier_bhex_F;
    magazines[] =
    {
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
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
        mag_4(30Rnd_580x42_Mag_F),
        mag_2(30Rnd_580x42_Mag_Tracer_F),
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
		H_HelmetLeaderO_oceanic,
		V_HarnessOGL_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetLeaderO_oceanic,
		V_HarnessOGL_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
};
class O_T_Marine_RadioOperator_F: O_T_SoldierM_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_Marine_RadioOperator_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_C_B_W_RadioOperator_F0;
	linkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	respawnLinkedItems[] =
	{
		H_HelmetSpecO_oceanic,
		V_HarnessOSpec_blk,
		G_Balaclava_light_blk_F,
		DefaultManLinkedItems,
		O_NVGoggles_blk_F
	};
	backpack = B_RadioBag_01_black_F;
	weapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_CTAR_blk_ACO_Pointer_F,
        hgun_Rook40_F,
        DefaultManWeapons
    };
    magazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        mag_10(30Rnd_580x42_Mag_F),
        mag_2(17Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
    };
    role = RadioOperator;
};
class O_T_LightFatigues_01_bhex_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_T_officer_noInsignia_bhex_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\Officer_noInsignia_blu_CO.paa"};
};