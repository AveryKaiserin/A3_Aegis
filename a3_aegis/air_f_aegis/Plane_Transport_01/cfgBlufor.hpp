class B_Plane_Transport_01_infantry_F: Plane_Transport_01_infantry_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Transport_01_infantry_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_infantry_base_F0;
	radarTargetSize = 1.8;
	side = TWest;
	faction = BLU_F;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};
class B_Plane_Transport_01_vehicle_F: Plane_Transport_01_vehicle_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_Plane_Transport_01_vehicle_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_A_CfgVehicles_Plane_Transport_01_vehicle_base_F0;
	radarTargetSize = 2;
	side = TWest;
	faction = BLU_F;
	crew = B_Pilot_F;
	typicalCargo[] = {B_Pilot_F};
	textureList[] =
	{
		Blue,1,
		Olive,0
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_body_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_wings_blue_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Transport_01\Data\Plane_Transport_01_interior_CO.paa"
	};
};