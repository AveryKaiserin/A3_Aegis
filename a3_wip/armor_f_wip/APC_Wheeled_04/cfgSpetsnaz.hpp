// OPF_R_F
class O_R_APC_Wheeled_04_cannon_F: APC_Wheeled_04_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = /*"\A3_Wip\EditorPreviews_F_Wip\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_F.jpg"*/ "";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_crew_F;
	typicalCargo[] = {O_R_crew_F};
    textureList[] =
    {
        Green,1,
        Rus,0
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body_RUkhk_CO.paa",
        "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
        "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_tows_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
};
class O_R_APC_Wheeled_04_AT_F: APC_Wheeled_04_AT_base_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = /*"\A3_Wip\EditorPreviews_F_Wip\Data\CfgVehicles\O_R_APC_Wheeled_04_AT_F.jpg"*/ "";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_R_F;
	crew = O_R_crew_F;
	typicalCargo[] = {O_R_crew_F};
    textureList[] =
    {
        Green,1,
        Rus,0
    };
	hiddenSelectionsTextures[] =
    {
        "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body_RUkhk_CO.paa",
        "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_body2_RUkhk_CO.paa",
        "\A3_Wip\Armor_F_Wip\APC_Wheeled_04\Data\APC_Wheeled_04_tows_RUkhk_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\camonet_RUS_Green_CO.paa",
        "\A3_Aegis\Armor_F_Aegis\Data\cage_RUkhk_CO.paa"
    };
};
// OPF_R_ard_F
class O_R_APC_Wheeled_04_cannon_ard_F: O_R_APC_Wheeled_04_cannon_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = /*"\A3_Wip\EditorPreviews_F_Wip\Data\CfgVehicles\O_R_APC_Wheeled_04_cannon_ard_F.jpg"*/ "";
	faction = OPF_R_ard_F;
	crew = O_R_crew_ard_F;
	typicalCargo[] = {O_R_crew_ard_F};
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_green_F,2);
    };
};
class O_R_APC_Wheeled_04_AT_ard_F: O_R_APC_Wheeled_04_AT_F
{
    author = $STR_A3_A_AveryTheKitty;
	editorPreview = /*"\A3_Wip\EditorPreviews_F_Wip\Data\CfgVehicles\O_R_APC_Wheeled_04_AT_ard_F.jpg"*/ "";
	faction = OPF_R_ard_F;
	crew = O_R_crew_ard_F;
	typicalCargo[] = {O_R_crew_ard_F};
    class TransportBackpacks
    {
        bag_xx(B_FieldPack_green_F,2);
    };
};