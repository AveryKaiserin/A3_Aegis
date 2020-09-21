// Arma 3 Apex
class I_C_Soldier_base_F: I_G_Soldier_base_F
{
	headgearList[] =
	{
		"",2,
		H_FakeHeadgear_Syndikat_F,5,
		H_Bandanna_gry,1,
		H_Bandanna_blu,1,
		H_Bandanna_cbr,1,
		H_Bandanna_khk,1,
		H_Bandanna_sgg,1,
		H_Bandanna_sand,1,
		H_Bandanna_surfer_blk,1,
		H_Bandanna_camo,1,
		H_Bandanna_camo_hs,1,
		H_Booniehat_khk,1,
		H_Booniehat_khk_hs,1,
		H_Booniehat_oli,1,
		H_Booniehat_tan,1,
		H_Booniehat_oli_hs,1,
		H_Booniehat_mgrn,1,
		H_Booniehat_mgrn_hs,1,
		H_Cap_blk_Syndikat_F,1,
		H_Cap_grn_Syndikat_F,1,
		H_Cap_oli_Syndikat_F,1,
		H_Cap_tan_Syndikat_F,1
	};
};
class I_C_Soldier_Para_1_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_1_F.jpg";
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Para_3_F;
class I_C_Soldier_Para_4_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_4_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Para_6_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_6_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_oli,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_oli,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Para_7_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Para_7_F.jpg";
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Bandit_5_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Bandit_5_F.jpg";
	linkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_ChestrigF_blk,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_Bandit_6_F: I_C_Soldier_base_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_Bandit_6_F.jpg";
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
class I_C_Soldier_universal_F: I_C_Soldier_Para_1_F
{
	scopeCurator = private;
};
class I_C_Soldier_base_unarmed_F: I_C_Soldier_Para_1_F
{
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Soldier_base_unarmed_F.jpg";
	linkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
		V_TacChestrig_cbr_F,
		DefaultManGuerillaLinkedItems
	};
};
// Arma 3 Oldman
class SyndikatSoldier_Default: I_C_Soldier_Para_1_F
{
	scopeCurator = private;
};
// Arma 3 Aegis
class I_C_Sharpshooter_F: I_C_Soldier_base_F
{
	author = $STR_A3_A_AveryTheKitty;
	class SpeechVariants
	{
		class Default
		{
			speechSingular[] = {veh_infantry_sniper_s};
			speechPlural[] = {veh_infantry_sniper_p};
		};
	};
	textSingular = $STR_A3_nameSound_veh_infantry_sniper_s;
	textPlural = $STR_A3_nameSound_veh_infantry_sniper_p;
	nameSound = veh_infantry_sniper_s;
	editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\I_C_Sharpshooter_F.jpg";
	scope = public;
	scopeCurator = public;
	displayName = $STR_A3_CfgVehicles_B_Sharpshooter_F0;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_2_F.p3d";
	uniformClass = U_I_C_Soldier_Para_2_F;
	hiddenSelectionsTextures[]=
	{
      	"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_1_CO.paa",
		"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_2_F_2_CO.paa"
	};
	role = Marksman;
	backpack = "";
	weapons[] =
	{
		srifle_DMR_06_camo_khs_F,
		DefaultManWeapons,
      	Binocular
	};
	respawnWeapons[] =
	{
		srifle_DMR_06_camo_khs_F,
		DefaultManWeapons,
      	Binocular
	};
	magazines[] = {mag_6(20Rnd_762x51_weathered_Mag)};
	respawnMagazines[] = {mag_6(20Rnd_762x51_weathered_Mag)};
	linkedItems[] =
	{
      	V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
	respawnLinkedItems[] =
	{
     	V_ChestrigF_khk,
		DefaultManGuerillaLinkedItems
	};
};