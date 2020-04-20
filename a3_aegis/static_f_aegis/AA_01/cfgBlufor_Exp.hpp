class B_AA_01_Weapon_grn_F: Weapon_Bag_Base
{
	author = $STR_A3_A_AveryTheKitty;
	scope = public;
	editorCategory = EdCat_Equipment;
	editorSubcategory = EdSubcat_DismantledWeapons;
	faction = BLU_T_F;
	displayName = $STR_A3_A_CfgVehicles_B_AA_01_Weapon_grn_F0;
	hiddenSelectionsTextures[] = {"\A3_Aegis\Supplies_F_Aegis\Bags\Data\backpack_small_rgr_CO.paa"};
	picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
	mass = 380;
	class assembleInfo: assembleInfo
	{
		displayName = $STR_A3_A_CfgVehicles_B_AA_01_Weapon_grn_F_assembleInfo0;
		assembleTo = B_T_Static_AA_F;
		base[] =
		{
            B_HMG_01_support_F,
            O_HMG_01_support_F,
            I_HMG_01_support_F,
            B_HMG_01_support_grn_F,
            O_R_HMG_01_support_F
		};
	};
};