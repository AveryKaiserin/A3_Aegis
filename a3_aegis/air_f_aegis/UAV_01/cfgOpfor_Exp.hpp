class O_T_UAV_01_F: O_UAV_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_T_UAV_01_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = OPF_T_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_UAV_AI};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_UAV_01_backpack_F};
	};
};