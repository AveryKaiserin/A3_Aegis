class I_P_Van_02_transport_F: Van_02_transport_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Van_02_transport_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TGuerrila;
	faction = IND_P_F;
	crew = I_P_PoliceOfficer_F;
	typicalCargo[] = {I_P_PoliceOfficer_F};
	weapons[] = {PoliceHorn};
	animationList[] =
	{
		beacon_front_hide,0,
		beacon_rear_hide,0,
		LED_lights_hide,0,
		reflective_tape_hide,0,
		side_protective_frame_hide,0,
		front_protective_frame_hide,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa",
		"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_transport_CO.paa",
		"\A3_Police\Soft_F_Police\Van_02\Data\Van_glass_police_CA.paa",
		"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa"
	};
	textureList[] = {Police,1};
};
class I_P_Van_02_vehicle_F: Van_02_vehicle_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_Van_02_vehicle_F.jpg";
	scope = protected;
	scopeCurator = private;
	side = TGuerrila;
	faction = IND_P_F;
	crew = I_P_PoliceOfficer_F;
	typicalCargo[] = {I_P_PoliceOfficer_F};
	weapons[] = {PoliceHorn};
	hiddenSelectionsTextures[] =
	{
		"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa",
		"\A3\Soft_F_Orange\Van_02\Data\Van_wheel_CO.paa",
		"\A3_Police\Soft_F_Police\Van_02\Data\Van_glass_police_CA.paa",
		"\A3_Police\Soft_F_Police\Van_02\Data\Van_body_police_CO.paa"
	};
	animationList[] =
	{
		beacon_front_hide,0,
		beacon_rear_hide,0,
		LED_lights_hide,0,
		reflective_tape_hide,0,
		side_protective_frame_hide,0,
		front_protective_frame_hide,0
	};
	textureList[] = {Police,1};
};