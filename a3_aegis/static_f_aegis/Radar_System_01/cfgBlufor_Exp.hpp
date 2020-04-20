class B_T_Radar_System_01_F: Radar_System_01_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_Radar_System_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_T_F;
	crew = B_UAV_AI;
	typicalCargo[] = {B_UAV_AI};
	textureList[] = {Olive,1};
	hiddenSelectionsTextures[]=
	{
		"\A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_01_olive_CO.paa",
		"\A3\Static_F_Sams\Radar_System_01\Data\Radar_system_01_mat_02_olive_CO.paa"
	};
};