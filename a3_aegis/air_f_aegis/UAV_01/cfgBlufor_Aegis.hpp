class B_A_UAV_01_F: B_UAV_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = BLU_A_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UAV_01_backpack_F};
	};
};
class B_A_UAV_01_tna_F: B_A_UAV_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_01_tna_F.jpg";
	faction = BLU_A_tna_F;
};
class B_A_UAV_01_wdl_F: B_A_UAV_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UAV_01_wdl_F.jpg";
	faction = BLU_A_wdl_F;
};