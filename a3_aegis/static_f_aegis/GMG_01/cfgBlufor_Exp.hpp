class B_T_GMG_01_high_F: B_GMG_01_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_GMG_01_high_F.jpg";
	faction = BLU_T_F;
	crew = B_T_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            B_GMG_01_high_Weapon_grn_F,
            B_HMG_01_support_high_grn_F
		};
	};
};
class B_T_GMG_01_A_F: B_GMG_01_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\B_T_GMG_01_A_F.jpg";
	scopeArsenal = private;
	forceInGarage = false;
	faction = BLU_T_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            B_GMG_01_A_Weapon_grn_F,
            B_HMG_01_support_grn_F
		};
	};
};
class B_GMG_01_A_Weapon_grn_F: I_GMG_01_A_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_B_GMG_01_A_Weapon_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = BLU_T_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = B_T_GMG_01_A_F;
	};
};
class B_GMG_01_high_Weapon_grn_F: I_GMG_01_high_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_B_GMG_01_high_Weapon_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = BLU_T_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = B_T_GMG_01_high_F;
	};
};