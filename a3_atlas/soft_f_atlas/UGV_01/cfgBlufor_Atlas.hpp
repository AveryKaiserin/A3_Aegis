class B_E_UGV_01_F: UGV_01_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UGV_01_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_E_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_E_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa"
    };
};
class B_E_UGV_01_rcws_F: UGV_01_rcws_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UGV_01_rcws_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_E_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_E_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_ext_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa"
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            magazines[] =
            {
                mag_2(200Rnd_127x99_mag_Tracer_Red),
                mag_2(64Rnd_40mm_G_belt)
            };
        };
        class CargoTurret_01: CargoTurret_01{};
    };
};
class B_E_UGV_01_medical_F: UGV_01_medical_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_E_UGV_01_medical_F.jpg";
    scope = public;
    scopeCurator = public;
    side = TWest;
    faction = BLU_E_F;
    crew = B_UAV_AI;
    typicalCargo[] = {B_E_Soldier_F};
    textureList[] = {Olive,1};
    hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Soft_F_Aegis\UGV_01\Data\UGV_01_ext_medevac_olive_CO.paa",
        "\A3\Soft_F_Exp\UGV_01\Data\UGV_01_int_olive_CO.paa",
        "\A3\Soft_F_Orange\UGV_01\Data\Turret_IDAP_CO.paa"
    };
};