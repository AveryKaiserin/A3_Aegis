class O_T_UGV_01_medical_ghex_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_UGV_01_medical_ghex_F.jpg";
    scope = public;
    scopeCurator = public;
    displayName = $STR_A3_A_CfgVehicles_O_UGV_01_medical_F0;
    side = TEast;
    faction = OPF_T_F;
    crew = O_UAV_AI;
    typicalCargo[] = {O_T_Soldier_F};
    textureList[] = {GreenHex,1};
    hiddenSelectionsTextures[] =
    {
		"\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_ghex_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_ghex_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};