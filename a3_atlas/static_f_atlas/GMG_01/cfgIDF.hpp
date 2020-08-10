class I_I_GMG_01_F: I_GMG_01_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_GMG_01_F.jpg";
	faction = IND_I_F;
	crew = I_I_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            I_I_GMG_01_weapon_F,
            I_I_HMG_01_support_F
		};
	};
};
class I_I_GMG_01_high_F: I_GMG_01_high_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_GMG_01_high_F.jpg";
	faction = IND_I_F;
	crew = I_I_Soldier_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            I_I_GMG_01_high_weapon_F,
            I_I_HMG_01_support_F
		};
	};
};
class I_I_GMG_01_A_F: I_GMG_01_A_F
{
	author = $STR_A3_A_AveryTheKitty;
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_GMG_01_A_F.jpg";
	faction = IND_I_F;
	class assembleInfo
	{
		displayName = "";
		assembleTo = "";
		base = "";
		primary = false;
		dissasembleTo[] =
		{
            I_I_GMG_01_A_weapon_F,
            I_I_HMG_01_support_F
		};
	};
};
class I_I_GMG_01_weapon_F: I_GMG_01_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_I_I_GMG_01_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = I_I_GMG_01_F;
	};
};
class I_I_GMG_01_A_weapon_F: I_GMG_01_A_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_I_I_GMG_01_A_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = I_I_GMG_01_A_F;
	};
};
class I_I_GMG_01_high_weapon_F: I_GMG_01_high_weapon_F
{
	author = $STR_A3_A_AveryTheKitty;
	displayName = $STR_A3_A_CfgVehicles_I_I_GMG_01_high_weapon_F0;
	hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3\Weapons_F\Ammoboxes\Bags\Data\UI\icon_B_C_Small_rgr.paa";
	faction = IND_I_F;
	class assembleInfo: assembleInfo
	{
		assembleTo = I_I_GMG_01_high_F;
	};
};