// Arma 3 Atlas
class B_W_Recon_Operator_F: B_Recon_Operator_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_W_Recon_Operator_F.jpg";
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
        arifle_SCAR_black_rco_pointer_snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SCAR_black_rco_pointer_snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons,
        Binocular
    };
    linkedItems[] =
    {
        V_PlateCarrierSpec_wdl,
        H_HelmetSpecB_light_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierSpec_wdl,
        H_HelmetSpecB_light_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};
class B_W_Recon_Operator_GL_F: B_Recon_Operator_GL_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_W_Recon_Operator_GL_F.jpg";
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
        arifle_SCAR_GL_black_rco_pointer_snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_GL_black_rco_pointer_snds_F,
        hgun_P07_blk_snds_F,
        DefaultManWeapons
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetSpecB_light_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_wdl,
        H_HelmetSpecB_light_wdl,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_INDEP
    };
};