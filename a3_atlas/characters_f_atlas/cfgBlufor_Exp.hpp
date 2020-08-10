// Arma 3 Atlas
class B_T_Recon_Operator_F: B_Recon_Operator_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_T_Recon_Operator_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	faction = BLU_T_F;
    uniformClass = U_B_T_Soldier_SL_F;
    weapons[] =
    {
        arifle_SCAR_khaki_rco_pointer_snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    respawnWeapons[] =
    {
        arifle_SCAR_khaki_rco_pointer_snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons,
        Binocular
    };
    linkedItems[] =
    {
        V_PlateCarrierSpec_tna_F,
        H_HelmetB_Enh_Light_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierSpec_tna_F,
        H_HelmetB_Enh_Light_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};
class B_T_Recon_Operator_GL_F: B_Recon_Operator_GL_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_T_Recon_Operator_GL_F.jpg";
	identityTypes[] =
	{
		LanguageENG_F,
		Head_NATO,
		G_T_NATO_SF
	};
	faction = BLU_T_F;
    uniformClass = U_B_T_Soldier_SL_F;
    weapons[] =
    {
        arifle_SCAR_GL_khaki_rco_pointer_snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    respawnWeapons[] =
    {
        arifle_SCAR_GL_khaki_rco_pointer_snds_F,
        hgun_P07_khk_Snds_F,
        DefaultManWeapons
    };
    linkedItems[] =
    {
        V_PlateCarrierGL_tna_F,
        H_HelmetB_Enh_Light_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
    respawnLinkedItems[] =
    {
        V_PlateCarrierGL_tna_F,
        H_HelmetB_Enh_Light_tna_F,
        ItemGPS,
        DefaultManLinkedItems,
        NVGoggles_tna_F
    };
};