class B_T_UGV_01_medical_olive_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_UGV_01_medical_olive_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_T_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_T_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};