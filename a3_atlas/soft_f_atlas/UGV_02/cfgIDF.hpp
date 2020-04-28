class I_I_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\I_I_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_I_UGV_02_Demining_F0;
	side = TGuerrila;
	faction = IND_I_F;
	crew = I_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {I_I_UGV_02_Demining_backpack_F};
	};
};