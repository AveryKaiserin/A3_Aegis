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
class O_T_Fatigues_01_oceanic_F: O_Soldier_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_T_CombatUniform_oceanic_F;
	hiddenSelectionsTextures[] =
	{
		"\A3_Marine\Characters_F_Marine\Uniforms\Data\clothing_oceanic_CO.paa",
		"\A3_Marine\Characters_F_Marine\Uniforms\Data\tech_oceanic_CO.paa"
	};
};
class O_T_LightFatigues_01_oceanic_F: O_A_officer_F
{
    scope = protected;
    scopeCurator = protected;
	uniformClass = U_O_T_officer_noInsignia_oceanic_F;
	hiddenSelectionsTextures[] = {"\A3_Marine\Characters_F_Marine\Uniforms\Data\Officer_noInsignia_oceanic_CO.paa"};
};
class O_T_SoldierM_A_F: O_T_Soldier_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Marine\EditorPreviews_F_Marine\Data\CfgVehicles\O_T_SoldierM_A_F.jpg";
	scope = public;
	scopeCurator = public;
	editorSubcategory = EdSubcat_Personnel_Marines;
	uniformClass = U_O_T_CombatUniform_oceanic_F;
	backpack = B_Carryall_blk_OTAmmo_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
	backpack = B_AssaultPack_blk_OTMedic_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
	backpack = B_Carryall_blk_OTEng_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
	backpack = B_FieldPack_blk_OTAA_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
	backpack = B_FieldPack_blk_OTAT_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
	backpack = B_FieldPack_blk_OTLAT_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
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
	uniformClass = U_O_T_CombatUniform_oceanic_F;
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