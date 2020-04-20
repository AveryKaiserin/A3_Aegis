class O_R_UAV_01_F: O_UAV_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_UAV_01_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_01_F0;
	side = TEast;
	faction = OPF_R_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_R_Soldier_Lite_F};
	textureList[] = {Rus,1};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_01\Data\UAV_01_RUS_CO.paa"};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_R_UAV_01_backpack_F};
	};
};
class O_R_UAV_01_backpack_F: Weapon_Bag_Base
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 0.6;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_O_R_UAV_01_backpack_F0;
	model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = OPF_R_F;
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_O_R_UAV_01_backpack_F_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_RUS_CO.paa"};
	maximumLoad = 0;
	mass = 300;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_A3_A_CfgVehicles_O_R_UAV_01_backpack_F_assembleInfo0;
		assembleTo = O_R_UAV_01_F;
	};
};