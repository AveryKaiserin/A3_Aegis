class B_ION_UAV_01_F: B_UAV_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_ION_UAV_01_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_C_IDAP_UAV_01_F0;
	side = TWest;
	faction = BLU_ION_F;
	crew = B_UAV_AI_F;
	typicalCargo[] = {B_UAV_AI_F};
	textureList[] = {ION,1};
	hiddenSelectionsTextures[] = {"\A3_Aegis\Air_F_Aegis\UAV_01\Data\UAV_01_ION_CO.paa"};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {B_ION_UAV_01_backpack_F};
	};
};
class B_ION_UAV_01_backpack_F: Weapon_Bag_Base
{
	author = $STR_A3_A_AveryTheKitty;
	mapSize = 0.6;
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_B_ION_UAV_01_backpack_F0;
	model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_Backpacks;
	faction = BLU_ION_F;
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_ION_UAV_01_backpack_F_CA.paa";
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\UAV_backpack_ION_CO.paa"};
	maximumLoad = 0;
	mass = 300;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = $STR_A3_A_CfgVehicles_B_ION_UAV_01_backpack_F_assembleInfo0;
		assembleTo = B_ION_UAV_01_F;
	};
};