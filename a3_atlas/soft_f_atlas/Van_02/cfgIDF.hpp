class I_I_Van_02_transport_MP_F: Van_02_transport_base_F
{
    author = $STR_A3_A_AveryTheKitty;
    //editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_Van_02_vehicle_F.jpg";
    scope = public;
    scopeCurator = public;
	displayName = $STR_A3_C_CfgVehicles_I_E_Van_02_transport_MP_F0;
    side = TGuerrila;
    faction = IND_I_F;
    crew = I_I_Soldier_MP_F;
    typicalCargo[] = {I_I_Soldier_MP_F};
	hiddenSelectionsTextures[] =
    {
        "\A3_Atlas\Soft_F_Atlas\Van_02\Data\van_body_IDF_MP_CO.paa",
        "\A3_Atlas\Soft_F_Atlas\Van_02\Data\van_wheel_transport_IDF_MP_CO.paa",
        "\A3\Soft_F_Enoch\Van_02\Data\van_glass_MP_CA.paa",
        "\A3_Atlas\Soft_F_Atlas\Van_02\Data\van_body_IDF_MP_CO.paa"
    };
    textureList[] = {IDF_MP,1};
	animationList[] =
    {
        beacon_front_hide,0,
        beacon_rear_hide,0,
        LED_lights_hide,0,
        reflective_tape_hide,0,
        side_protective_frame_hide,0,
        front_protective_frame_hide,0
    };
};