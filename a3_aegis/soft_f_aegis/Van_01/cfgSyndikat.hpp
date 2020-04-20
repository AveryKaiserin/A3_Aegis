class I_C_Van_01_fuel_F: Van_01_fuel_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Van_01_fuel_F.jpg";
    scope = public;
    displayName = $STR_A3_CfgVehicles_C_van_01_fuel0;
    model = "\A3\Soft_F_Gamma\Van_01\Van_01_fuel_F.p3d";
    icon = "\A3\Soft_F_Gamma\Van_01\Data\UI\map_Van_01_cistern_CA.paa";
    picture = "\A3\Soft_F_Gamma\Van_01\Data\UI\portrait_Van_01_cistern_CA.paa";
    transportFuel = 1000000000000;
    secondaryExplosion = 10000;
    fuelExplosionPower = 1;
    explosionEffect = SupplyExplosion;
    side = TGuerrila;
    faction = IND_C_F;
    crew = I_C_Soldier_Bandit_5_F;
    typicalCargo[] = {I_C_Soldier_Bandit_5_F};
    textureList[] =
    {
        Brown,1,
        Olive,1
    };
    hiddenSelections[] =
    {
        Camo1,
        Camo2,
        Camo3
    };
    hiddenSelectionsTextures[] =
    {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_CO.paa",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank_CO.paa",
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        "\A3\Soft_F_Exp\Van_01\Data\Van_01_ext.rvmat",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_tank.rvmat",
        "\A3\Soft_F_Gamma\Van_01\Data\Van_01_int_base.rvmat"
    };
};