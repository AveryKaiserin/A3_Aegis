// BLU_A_F
class B_A_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TWest;
	faction = BLU_A_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UGV_02_Demining_backpack_F};
	};
};
class B_A_UGV_02_Science_F: UGV_02_Science_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Science_F.jpg";
	scope = protected;
	scopeCurator = private;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Science_F0;
	side = TWest;
	faction = BLU_A_F;
	crew = B_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_UGV_02_Science_backpack_F};
	};
};
// BLU_A_tna_F
class B_A_UGV_02_Demining_tna_F: B_A_UGV_02_Demining_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Demining_tna_F.jpg";
	faction = BLU_A_tna_F;
};
class B_A_UGV_02_Science_tna_F: B_A_UGV_02_Science_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Science_tna_F.jpg";
	faction = BLU_A_tna_F;
};
// BLU_A_wdl_F
class B_A_UGV_02_Demining_wdl_F: B_A_UGV_02_Demining_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Demining_wdl_F.jpg";
	faction = BLU_A_wdl_F;
};
class B_A_UGV_02_Science_wdl_F: B_A_UGV_02_Science_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_A_UGV_02_Science_wdl_F.jpg";
	faction = BLU_A_wdl_F;
};