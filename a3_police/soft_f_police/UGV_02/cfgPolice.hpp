class Police_I_P_UGV_02_Demining_F: UGV_02_Demining_Base_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Police\EditorPreviews_F_Police\Data\CfgVehicles\I_P_UGV_02_Demining_F.jpg";
	scope = public;
	displayName = $STR_A3_C_CfgVehicles_C_IDAP_UGV_02_Demining_F0;
	side = TGuerrila;
	faction = Police_IND_P_F;
	crew = I_UAV_AI;
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {Police_I_P_UGV_02_Demining_backpack_F};
	};
};
class Police_I_P_UGV_02_Demining_backpack_F: UGV_02_Demining_backpack_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_P_CfgVehicles_I_P_UGV_02_Demining_backpack_F0;
	faction = Police_IND_P_F;
	picture = "\A3\Supplies_F_Enoch\Bags\Data\UI\icon_I_UGV_02_demining_CA.paa";
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_P_CfgVehicles_I_P_UGV_02_Demining_backpack_F_assembleInfo0;
		assembleTo = Police_I_P_UGV_02_Demining_F;
	};
};