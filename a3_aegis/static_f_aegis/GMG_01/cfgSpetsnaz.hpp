class O_R_GMG_01_F: O_GMG_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_GMG_01_F.jpg";
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_R_GMG_01_Weapon_F,
            O_R_HMG_01_support_F
		};
	};
};
class O_R_GMG_01_high_F: O_GMG_01_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_GMG_01_high_F.jpg";
	faction = OPF_R_F;
	crew = O_R_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_R_GMG_01_high_Weapon_F,
            O_R_HMG_01_support_F
		};
	};
};
class O_R_GMG_01_A_F: O_GMG_01_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_GMG_01_A_F.jpg";
	faction = OPF_R_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            O_R_GMG_01_A_Weapon_F,
            O_R_HMG_01_support_F
		};
	};
};
class O_R_GMG_01_Weapon_F: B_GMG_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_O_R_GMG_01_Weapon_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = OPF_R_F;
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_CfgVehicles_B_GMG_01_Wpn_assembleInfo0;
		assembleTo = O_R_GMG_01_F;
	};
};
class O_R_GMG_01_A_Weapon_F: B_GMG_01_A_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_O_R_GMG_01_A_Weapon_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = OPF_R_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = O_R_GMG_01_A_F;
	};
};
class O_R_GMG_01_high_Weapon_F: B_GMG_01_high_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_O_R_GMG_01_high_Weapon_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	faction = OPF_R_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = O_R_GMG_01_high_F;
	};
};