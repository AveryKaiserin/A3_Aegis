class B_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_Soldier_F};
    textureList[] = {Blufor,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_CO.paa",
        "\A3\Drones_F\Soft_F_Gamma\UGV_01\Data\UGV_01_int_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};